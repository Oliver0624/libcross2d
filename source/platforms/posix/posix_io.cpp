//
// Created by cpasjuste on 17/11/17.
//

#include <unistd.h>
#include <cstring>
#include <dirent.h>
#include <sys/stat.h>
#include "cross2d/c2d.h"

#ifdef __WINDOWS__
#define mkdir(x, y) mkdir(x)
#endif

using namespace c2d;

std::string POSIXIo::getHomePath() {
#if defined(__PSP2__) || defined(__RECALBOX__)
    return getDataWritePath();
#else
    char buf[1024];
    if (getcwd(buf, sizeof(buf))) {
        std::string str = std::string(buf) + "/";
#ifdef __SWITCH__
        // some library does not like "sdmc:"
        if (str.compare(0, 5, "sdmc:") == 0) {
            str.erase(0, 5);
        }
#endif
        return str;
    }

    return Io::getHomePath();
#endif
}

bool POSIXIo::exist(const std::string &path) {
    if (path.empty()) {
        return false;
    }
    struct stat st{};
    return (stat(path.c_str(), &st) == 0);
}

bool POSIXIo::create(const std::string &path) {
#ifdef __PSP2__
    return sceIoMkdir(path.c_str(), 0777) == 0;
#else
    return mkdir(path.c_str(), 0755) == 0;
#endif
}

size_t POSIXIo::getSize(const std::string &file) {
    struct stat st{};
    if (stat(file.c_str(), &st) != 0) {
        return 0;
    }
    return (size_t) st.st_size;
}

Io::Type POSIXIo::getType(const std::string &file) {
    struct stat st{};
    if (stat(file.c_str(), &st) != 0) {
        return Type::Unknown;
    }
    return S_ISDIR(st.st_mode) ? Type::Directory : Type::File;
}

char *POSIXIo::read(const std::string &file) {

    size_t size;
    FILE *fp = nullptr;
    char *buffer = nullptr;

    fp = fopen(file.c_str(), "rb");
    if (fp == nullptr) {
        printf("POSIXIo::read: can't open %s\n", file.c_str());
        return nullptr;
    }

    fseek(fp, 0L, SEEK_END);
    size = ftell(fp);
    fseek(fp, 0L, SEEK_SET);
    buffer = (char *) malloc(size);

    if (fread(buffer, 1, size, fp) != size) {
        fclose(fp);
        free(buffer);
        printf("POSIXIo::read: can't read %s\n", file.c_str());
        return nullptr;
    }

    fclose(fp);

    return buffer;
}

bool POSIXIo::write(const std::string &file, const char *data) {

    FILE *fp;

    fp = fopen(file.c_str(), "w");
    if (fp == nullptr) {
        return false;
    }

    fwrite(data, 1, strlen(data), fp);
    fclose(fp);

    return true;
}

std::vector<Io::File> POSIXIo::getDirList(const std::string &path, bool sort, bool showHidden) {

    std::vector<Io::File> files;
    struct dirent *ent;
    DIR *dir;

    if (!path.empty()) {
        if ((dir = opendir(path.c_str())) != nullptr) {
            while ((ent = readdir(dir)) != nullptr) {

                //printf("getDirList: %s\n", ent->d_name);

                // skip "."
                if (strlen(ent->d_name) == 1 && ent->d_name[0] == '.') {
                    continue;
                }
                // skip "hidden" files
                if (!showHidden && ent->d_name[0] == '.') {
                    if (strlen(ent->d_name) != 2 && ent->d_name[1] != '.') {
                        continue;
                    }
                }

                File file;
                file.name = ent->d_name;
                file.path = Utility::removeLastSlash(path) + "/" + file.name;
#ifdef __SWITCH__
                auto *dirSt = (fsdev_dir_t *) dir->dirData->dirStruct;
                FsDirectoryEntry *entry = &dirSt->entry_data[dirSt->index];
                file.type = entry->type == ENTRYTYPE_DIR ? Type::Directory : Type::File;
                file.size = entry->fileSize;
#else
                struct stat st{};
                if (stat(file.path.c_str(), &st) == 0) {
                    file.size = (size_t) st.st_size;
                    file.type = S_ISDIR(st.st_mode) ? Type::Directory : Type::File;
                }
#endif
                file.color = file.type == Type::Directory ? Color::Yellow : Color::White;
                files.push_back(file);
            }
            closedir(dir);
            if (sort) {
                std::sort(files.begin(), files.end(), compare);
            }
        }
    }

    return files;
}

Io::File POSIXIo::findFile(const std::string &path,
                           const std::vector<std::string> &whitelist, const std::string blacklist) {

    struct dirent *ent;
    DIR *dir;
    File file{};

    if (path.empty()) {
        return file;
    }

    if ((dir = opendir(path.c_str())) != nullptr) {
        while ((ent = readdir(dir)) != nullptr) {
            for (const auto &search : whitelist) {
                if (Utility::contains(ent->d_name, search)
                    && !Utility::contains(ent->d_name, blacklist)) {
                    file.name = ent->d_name;
                    file.path = Utility::removeLastSlash(path) + "/" + file.name;
#ifdef __SWITCH__
                    auto *dirSt = (fsdev_dir_t *) dir->dirData->dirStruct;
                    FsDirectoryEntry *entry = &dirSt->entry_data[dirSt->index];
                    file.type = entry->type == ENTRYTYPE_DIR ? Type::Directory : Type::File;
                    file.size = entry->fileSize;
#else
                    struct stat st{};
                    if (stat(file.path.c_str(), &st) == 0) {
                        file.size = (size_t) st.st_size;
                        file.type = S_ISDIR(st.st_mode) ? Type::Directory : Type::File;
                    }
#endif
                    file.color = file.type == Type::Directory ? Color::Yellow : Color::White;
                    break;
                }
            }
        }
        closedir(dir);
    }

    return file;
}
