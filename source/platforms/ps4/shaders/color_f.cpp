#include "ps4_shaders.h"

const char color_f[718] = {
        0x71, 0xbc, 0x91, 0xe8, 0x64, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
        0x00, 0x8a, 0x01, 0x00, 0x00, 0x23, 0x76, 0x65, 0x72, 0x73, 0x69,
        0x6f, 0x6e, 0x20, 0x31, 0x30, 0x30, 0x0a, 0x0a, 0x0a, 0x23, 0x69,
        0x66, 0x20, 0x5f, 0x5f, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e,
        0x5f, 0x5f, 0x20, 0x3e, 0x3d, 0x20, 0x31, 0x33, 0x30, 0x0a, 0x23,
        0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50,
        0x41, 0x54, 0x5f, 0x56, 0x41, 0x52, 0x59, 0x49, 0x4e, 0x47, 0x20,
        0x69, 0x6e, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20,
        0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x54, 0x45, 0x58, 0x54,
        0x55, 0x52, 0x45, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65,
        0x0a, 0x6f, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x66,
        0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x23,
        0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50,
        0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f,
        0x4e, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x2f, 0x2f, 0x20,
        0x61, 0x73, 0x73, 0x75, 0x6d, 0x65, 0x20, 0x6f, 0x70, 0x65, 0x6e,
        0x67, 0x6c, 0x20, 0x65, 0x73, 0x2e, 0x2e, 0x2e, 0x0a, 0x23, 0x64,
        0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41,
        0x54, 0x5f, 0x56, 0x41, 0x52, 0x59, 0x49, 0x4e, 0x47, 0x20, 0x76,
        0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x0a, 0x23, 0x64, 0x65, 0x66,
        0x69, 0x6e, 0x65, 0x20, 0x66, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c,
        0x6f, 0x72, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43,
        0x6f, 0x6c, 0x6f, 0x72, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e,
        0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x54, 0x45,
        0x58, 0x54, 0x55, 0x52, 0x45, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75,
        0x72, 0x65, 0x32, 0x44, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e,
        0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52,
        0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x6d, 0x65, 0x64,
        0x69, 0x75, 0x6d, 0x70, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66,
        0x0a, 0x0a, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x56, 0x41,
        0x52, 0x59, 0x49, 0x4e, 0x47, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41,
        0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e,
        0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x43, 0x4f, 0x4c, 0x30, 0x3b,
        0x0a, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e,
        0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x72,
        0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76,
        0x65, 0x63, 0x34, 0x28, 0x43, 0x4f, 0x4c, 0x30, 0x29, 0x3b, 0x0a,
        0x7d, 0x0a, 0x0a, 0x30, 0x01, 0x00, 0x00, 0x00, 0x04, 0xef, 0xbe,
        0xd5, 0x3f, 0x87, 0xfa, 0x87, 0xbb, 0x47, 0x65, 0x01, 0x01, 0x00,
        0x02, 0xb4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53,
        0x68, 0x64, 0x72, 0x07, 0x00, 0x02, 0x00, 0x02, 0x10, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x40, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
        0x0c, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04,
        0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
        0x00, 0x0f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00,
        0x00, 0x00, 0xff, 0x03, 0xeb, 0xbe, 0x08, 0x00, 0x00, 0x00, 0x02,
        0x03, 0xfc, 0xbe, 0x00, 0x00, 0x08, 0xc8, 0x01, 0x00, 0x09, 0xc8,
        0x00, 0x01, 0x0c, 0xc8, 0x01, 0x01, 0x0d, 0xc8, 0x00, 0x02, 0x10,
        0xc8, 0x01, 0x02, 0x11, 0xc8, 0x00, 0x03, 0x00, 0xc8, 0x01, 0x03,
        0x01, 0xc8, 0x02, 0x07, 0x02, 0x5e, 0x04, 0x01, 0x00, 0x5e, 0x0f,
        0x1c, 0x00, 0xf8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xbf,
        0x01, 0x00, 0x00, 0x00, 0xef, 0xbe, 0x00, 0x00, 0x4f, 0x72, 0x62,
        0x53, 0x68, 0x64, 0x72, 0x07, 0x41, 0x40, 0x00, 0x00, 0x02, 0x00,
        0x08, 0x03, 0xd5, 0x3f, 0x87, 0xfa, 0x87, 0xbb, 0x47, 0x65, 0x6d,
        0xe3, 0xb1, 0xee, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x03, 0x24,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x14,
        0x00, 0x00, 0x00, 0x03, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x0d, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4c,
        0x30, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f,
        0x6c, 0x6f, 0x72, 0x00, 0x28, 0x6e, 0x6f, 0x5f, 0x6e, 0x61, 0x6d,
        0x65, 0x29, 0x00
};
