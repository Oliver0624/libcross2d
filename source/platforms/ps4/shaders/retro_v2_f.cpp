#include "ps4_shaders.h"

const char retro_v2_f[2719] = {
        0x71, 0xbc, 0x91, 0xe8, 0x64, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
        0x00, 0x77, 0x06, 0x00, 0x00, 0x23, 0x76, 0x65, 0x72, 0x73, 0x69,
        0x6f, 0x6e, 0x20, 0x31, 0x30, 0x30, 0x0a, 0x0a, 0x0a, 0x23, 0x70,
        0x72, 0x61, 0x67, 0x6d, 0x61, 0x20, 0x70, 0x61, 0x72, 0x61, 0x6d,
        0x65, 0x74, 0x65, 0x72, 0x20, 0x52, 0x45, 0x54, 0x52, 0x4f, 0x5f,
        0x50, 0x49, 0x58, 0x45, 0x4c, 0x5f, 0x53, 0x49, 0x5a, 0x45, 0x20,
        0x22, 0x52, 0x65, 0x74, 0x72, 0x6f, 0x20, 0x50, 0x69, 0x78, 0x65,
        0x6c, 0x20, 0x53, 0x69, 0x7a, 0x65, 0x22, 0x20, 0x30, 0x2e, 0x38,
        0x34, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x31, 0x2e, 0x30, 0x20, 0x30,
        0x2e, 0x30, 0x31, 0x0a, 0x2f, 0x2f, 0x20, 0x5e, 0x5e, 0x54, 0x68,
        0x69, 0x73, 0x20, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x20, 0x6d, 0x75,
        0x73, 0x74, 0x20, 0x62, 0x65, 0x20, 0x62, 0x65, 0x74, 0x77, 0x65,
        0x65, 0x6e, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x28, 0x74, 0x6f, 0x74,
        0x61, 0x6c, 0x6c, 0x79, 0x20, 0x62, 0x6c, 0x61, 0x63, 0x6b, 0x29,
        0x20, 0x61, 0x6e, 0x64, 0x20, 0x31, 0x2e, 0x30, 0x20, 0x28, 0x6e,
        0x65, 0x61, 0x72, 0x65, 0x73, 0x74, 0x20, 0x6e, 0x65, 0x69, 0x67,
        0x68, 0x62, 0x6f, 0x72, 0x29, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x20,
        0x5f, 0x5f, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x5f,
        0x20, 0x3e, 0x3d, 0x20, 0x31, 0x33, 0x30, 0x0a, 0x23, 0x64, 0x65,
        0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54,
        0x5f, 0x56, 0x41, 0x52, 0x59, 0x49, 0x4e, 0x47, 0x20, 0x69, 0x6e,
        0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f,
        0x4d, 0x50, 0x41, 0x54, 0x5f, 0x54, 0x45, 0x58, 0x54, 0x55, 0x52,
        0x45, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x0a, 0x6f,
        0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x46, 0x72, 0x61,
        0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x23, 0x65, 0x6c,
        0x73, 0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20,
        0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x56, 0x41, 0x52, 0x59,
        0x49, 0x4e, 0x47, 0x20, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67,
        0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x46, 0x72,
        0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x67, 0x6c, 0x5f,
        0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x0a, 0x23,
        0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50,
        0x41, 0x54, 0x5f, 0x54, 0x45, 0x58, 0x54, 0x55, 0x52, 0x45, 0x20,
        0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x0a, 0x23,
        0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x64,
        0x65, 0x66, 0x20, 0x47, 0x4c, 0x5f, 0x45, 0x53, 0x0a, 0x23, 0x69,
        0x66, 0x64, 0x65, 0x66, 0x20, 0x47, 0x4c, 0x5f, 0x46, 0x52, 0x41,
        0x47, 0x4d, 0x45, 0x4e, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49,
        0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x48, 0x49, 0x47, 0x48, 0x0a, 0x70,
        0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x68, 0x69,
        0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3b, 0x0a,
        0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x70, 0x72, 0x65, 0x63, 0x69,
        0x73, 0x69, 0x6f, 0x6e, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d,
        0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3b, 0x0a, 0x23, 0x65,
        0x6e, 0x64, 0x69, 0x66, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e,
        0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52,
        0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x6d, 0x65, 0x64,
        0x69, 0x75, 0x6d, 0x70, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a,
        0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d,
        0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49,
        0x4f, 0x4e, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a,
        0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d,
        0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49,
        0x4f, 0x4e, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x46, 0x72, 0x61, 0x6d,
        0x65, 0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x3b,
        0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f,
        0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53,
        0x49, 0x4f, 0x4e, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x46, 0x72, 0x61,
        0x6d, 0x65, 0x43, 0x6f, 0x75, 0x6e, 0x74, 0x3b, 0x0a, 0x75, 0x6e,
        0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41,
        0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e,
        0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x4f, 0x75, 0x74, 0x70, 0x75,
        0x74, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66,
        0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f,
        0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x76,
        0x65, 0x63, 0x32, 0x20, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65,
        0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f,
        0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50,
        0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x76, 0x65,
        0x63, 0x32, 0x20, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x53, 0x69, 0x7a,
        0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20,
        0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x54,
        0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x43, 0x4f, 0x4d,
        0x50, 0x41, 0x54, 0x5f, 0x56, 0x41, 0x52, 0x59, 0x49, 0x4e, 0x47,
        0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x54, 0x45, 0x58, 0x30, 0x3b,
        0x0a, 0x0a, 0x2f, 0x2f, 0x20, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65,
        0x6e, 0x74, 0x20, 0x63, 0x6f, 0x6d, 0x70, 0x61, 0x74, 0x69, 0x62,
        0x69, 0x6c, 0x69, 0x74, 0x79, 0x20, 0x23, 0x64, 0x65, 0x66, 0x69,
        0x6e, 0x65, 0x73, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65,
        0x20, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x20, 0x54, 0x65, 0x78,
        0x74, 0x75, 0x72, 0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e,
        0x65, 0x20, 0x76, 0x54, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64,
        0x20, 0x54, 0x45, 0x58, 0x30, 0x2e, 0x78, 0x79, 0x0a, 0x0a, 0x23,
        0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x53, 0x6f, 0x75, 0x72,
        0x63, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34,
        0x28, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a,
        0x65, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x20, 0x2f, 0x20, 0x54, 0x65,
        0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x29, 0x20,
        0x2f, 0x2f, 0x65, 0x69, 0x74, 0x68, 0x65, 0x72, 0x20, 0x54, 0x65,
        0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x20, 0x6f,
        0x72, 0x20, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65,
        0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x6f, 0x75,
        0x74, 0x73, 0x69, 0x7a, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28,
        0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x2c,
        0x20, 0x31, 0x2e, 0x30, 0x20, 0x2f, 0x20, 0x4f, 0x75, 0x74, 0x70,
        0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x29, 0x0a, 0x0a, 0x23, 0x69,
        0x66, 0x64, 0x65, 0x66, 0x20, 0x50, 0x41, 0x52, 0x41, 0x4d, 0x45,
        0x54, 0x45, 0x52, 0x5f, 0x55, 0x4e, 0x49, 0x46, 0x4f, 0x52, 0x4d,
        0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f,
        0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53,
        0x49, 0x4f, 0x4e, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x52,
        0x45, 0x54, 0x52, 0x4f, 0x5f, 0x50, 0x49, 0x58, 0x45, 0x4c, 0x5f,
        0x53, 0x49, 0x5a, 0x45, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65,
        0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x52, 0x45,
        0x54, 0x52, 0x4f, 0x5f, 0x50, 0x49, 0x58, 0x45, 0x4c, 0x5f, 0x53,
        0x49, 0x5a, 0x45, 0x20, 0x30, 0x2e, 0x38, 0x34, 0x0a, 0x23, 0x65,
        0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20,
        0x6d, 0x61, 0x69, 0x6e, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x2f, 0x2f, 0x20, 0x52, 0x65, 0x61, 0x64, 0x69, 0x6e,
        0x67, 0x20, 0x74, 0x68, 0x65, 0x20, 0x74, 0x65, 0x78, 0x65, 0x6c,
        0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x45,
        0x20, 0x3d, 0x20, 0x70, 0x6f, 0x77, 0x28, 0x43, 0x4f, 0x4d, 0x50,
        0x41, 0x54, 0x5f, 0x54, 0x45, 0x58, 0x54, 0x55, 0x52, 0x45, 0x28,
        0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x2c, 0x20, 0x76, 0x54, 0x65,
        0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x29, 0x2e, 0x78, 0x79, 0x7a,
        0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x32, 0x2e, 0x34, 0x29,
        0x29, 0x3b, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63,
        0x32, 0x20, 0x66, 0x70, 0x20, 0x3d, 0x20, 0x66, 0x72, 0x61, 0x63,
        0x74, 0x28, 0x76, 0x54, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64,
        0x2a, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x53, 0x69, 0x7a, 0x65,
        0x2e, 0x78, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76,
        0x65, 0x63, 0x32, 0x20, 0x70, 0x73, 0x20, 0x3d, 0x20, 0x49, 0x6e,
        0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x78, 0x79, 0x20,
        0x2a, 0x20, 0x6f, 0x75, 0x74, 0x73, 0x69, 0x7a, 0x65, 0x2e, 0x7a,
        0x77, 0x3b, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63,
        0x32, 0x20, 0x66, 0x20, 0x3d, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70,
        0x28, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x28, 0x66, 0x70, 0x20, 0x2b,
        0x20, 0x30, 0x2e, 0x35, 0x2a, 0x70, 0x73, 0x2c, 0x20, 0x30, 0x2e,
        0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x20, 0x2d, 0x20, 0x52,
        0x45, 0x54, 0x52, 0x4f, 0x5f, 0x50, 0x49, 0x58, 0x45, 0x4c, 0x5f,
        0x53, 0x49, 0x5a, 0x45, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28,
        0x30, 0x2e, 0x30, 0x29, 0x2c, 0x20, 0x70, 0x73, 0x29, 0x2f, 0x70,
        0x73, 0x3b, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f,
        0x61, 0x74, 0x20, 0x6d, 0x61, 0x78, 0x5f, 0x63, 0x6f, 0x6f, 0x72,
        0x64, 0x20, 0x3d, 0x20, 0x20, 0x6d, 0x61, 0x78, 0x28, 0x66, 0x2e,
        0x78, 0x2c, 0x20, 0x66, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x72, 0x65, 0x73,
        0x20, 0x3d, 0x20, 0x6d, 0x69, 0x78, 0x28, 0x45, 0x2a, 0x28, 0x31,
        0x2e, 0x30, 0x34, 0x2b, 0x66, 0x70, 0x2e, 0x78, 0x2a, 0x66, 0x70,
        0x2e, 0x79, 0x29, 0x2c, 0x20, 0x45, 0x2a, 0x30, 0x2e, 0x33, 0x36,
        0x2c, 0x20, 0x6d, 0x61, 0x78, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64,
        0x29, 0x3b, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x2f, 0x2f, 0x20,
        0x50, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x20, 0x69, 0x6e, 0x74,
        0x65, 0x72, 0x70, 0x6f, 0x6c, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x0a,
        0x20, 0x20, 0x20, 0x20, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c,
        0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x63,
        0x6c, 0x61, 0x6d, 0x70, 0x28, 0x20, 0x70, 0x6f, 0x77, 0x28, 0x72,
        0x65, 0x73, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31, 0x2e,
        0x30, 0x20, 0x2f, 0x20, 0x32, 0x2e, 0x32, 0x29, 0x29, 0x2c, 0x20,
        0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x20, 0x29, 0x2c,
        0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x14,
        0x04, 0x00, 0x00, 0x00, 0x04, 0xef, 0xbe, 0x7b, 0x22, 0x88, 0x81,
        0xfb, 0xa2, 0x19, 0x78, 0x01, 0x01, 0x00, 0x02, 0x64, 0x02, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x68, 0x64, 0x72, 0x07,
        0x00, 0x02, 0x00, 0x02, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x04, 0x02, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00,
        0x00, 0xff, 0xff, 0xff, 0xff, 0x83, 0x00, 0x0c, 0x00, 0x20, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02,
        0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00,
        0x00, 0x01, 0x00, 0x00, 0x00, 0x1b, 0x01, 0x02, 0x00, 0x00, 0x00,
        0x04, 0x03, 0x01, 0x00, 0x0c, 0x00, 0x02, 0x00, 0x10, 0x00, 0x0f,
        0x00, 0x00, 0x00, 0xff, 0x03, 0xeb, 0xbe, 0x3c, 0x00, 0x00, 0x00,
        0x7e, 0x04, 0x92, 0xbe, 0x7e, 0x0a, 0xfe, 0xbe, 0x10, 0x03, 0xfc,
        0xbe, 0x00, 0x00, 0x24, 0xc8, 0x00, 0x01, 0x28, 0xc8, 0x01, 0x00,
        0x25, 0xc8, 0x01, 0x01, 0x29, 0xc8, 0x00, 0x07, 0x80, 0xf0, 0x09,
        0x03, 0x61, 0x00, 0x00, 0x03, 0x80, 0xc0, 0x7f, 0x00, 0x8c, 0xbf,
        0x04, 0x01, 0x82, 0xc2, 0x00, 0x01, 0x40, 0xc2, 0x7f, 0x00, 0x8c,
        0xbf, 0x04, 0x12, 0x02, 0x10, 0x05, 0x14, 0x0c, 0x10, 0x01, 0x49,
        0x02, 0x7e, 0x06, 0x49, 0x0c, 0x7e, 0x00, 0x54, 0x0e, 0x7e, 0x01,
        0x54, 0x10, 0x7e, 0x01, 0x00, 0x82, 0xd2, 0x09, 0x09, 0x04, 0x84,
        0x06, 0x00, 0x82, 0xd2, 0x0a, 0x0b, 0x18, 0x84, 0x06, 0x0e, 0x00,
        0x10, 0x07, 0x10, 0x04, 0x10, 0x00, 0x03, 0x0e, 0x40, 0x00, 0x00,
        0x00, 0x3f, 0x02, 0x0d, 0x10, 0x40, 0x00, 0x00, 0x00, 0x3f, 0x07,
        0x08, 0x20, 0xd2, 0x07, 0x0f, 0x02, 0x00, 0x08, 0x08, 0x20, 0xd2,
        0x08, 0x11, 0x02, 0x00, 0x70, 0x0f, 0x8c, 0xbf, 0x03, 0x01, 0x4e,
        0xd3, 0x03, 0x01, 0x00, 0x00, 0x04, 0x01, 0x4e, 0xd3, 0x04, 0x01,
        0x00, 0x00, 0x05, 0x01, 0x4e, 0xd3, 0x05, 0x01, 0x00, 0x00, 0xff,
        0x0e, 0x0e, 0x06, 0x3d, 0x0a, 0x57, 0xbf, 0xff, 0x10, 0x10, 0x06,
        0x3d, 0x0a, 0x57, 0xbf, 0xff, 0x06, 0x06, 0x10, 0x9a, 0x99, 0x19,
        0x40, 0xff, 0x08, 0x08, 0x10, 0x9a, 0x99, 0x19, 0x40, 0xff, 0x0a,
        0x0a, 0x10, 0x9a, 0x99, 0x19, 0x40, 0x00, 0x0f, 0x0e, 0x1e, 0x02,
        0x11, 0x10, 0x1e, 0x03, 0x4b, 0x06, 0x7e, 0x04, 0x4b, 0x08, 0x7e,
        0x05, 0x4b, 0x0a, 0x7e, 0x80, 0x0e, 0x0e, 0x20, 0x80, 0x10, 0x10,
        0x20, 0x00, 0x55, 0x00, 0x7e, 0x02, 0x55, 0x04, 0x7e, 0x07, 0x01,
        0x00, 0x10, 0x08, 0x05, 0x04, 0x10, 0x06, 0x03, 0x02, 0x42, 0xb8,
        0x1e, 0x85, 0x3f, 0xff, 0x06, 0x0c, 0x10, 0xec, 0x51, 0xb8, 0x3e,
        0xff, 0x08, 0x0e, 0x10, 0xec, 0x51, 0xb8, 0x3e, 0xff, 0x0a, 0x10,
        0x10, 0xec, 0x51, 0xb8, 0x3e, 0x00, 0x05, 0x00, 0x20, 0x03, 0x03,
        0x04, 0x10, 0x04, 0x03, 0x12, 0x10, 0x05, 0x03, 0x14, 0x10, 0x06,
        0x00, 0x82, 0xd2, 0x03, 0x03, 0x1a, 0x24, 0x07, 0x00, 0x82, 0xd2,
        0x04, 0x03, 0x1e, 0x24, 0x08, 0x00, 0x82, 0xd2, 0x05, 0x03, 0x22,
        0x24, 0x06, 0x01, 0x04, 0x3e, 0x07, 0x01, 0x12, 0x3e, 0x08, 0x01,
        0x14, 0x3e, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x01, 0x4e, 0xd3, 0x02,
        0x01, 0x00, 0x00, 0x01, 0x01, 0x4e, 0xd3, 0x09, 0x01, 0x00, 0x00,
        0x02, 0x01, 0x4e, 0xd3, 0x0a, 0x01, 0x00, 0x00, 0xff, 0x00, 0x00,
        0x10, 0x2e, 0xba, 0xe8, 0x3e, 0xff, 0x02, 0x02, 0x10, 0x2e, 0xba,
        0xe8, 0x3e, 0xff, 0x04, 0x04, 0x10, 0x2e, 0xba, 0xe8, 0x3e, 0x00,
        0x08, 0x4a, 0xd3, 0x00, 0x01, 0x00, 0x00, 0x01, 0x08, 0x4a, 0xd3,
        0x01, 0x01, 0x00, 0x00, 0x02, 0x08, 0x4a, 0xd3, 0x02, 0x01, 0x00,
        0x00, 0xf2, 0x02, 0x06, 0x7e, 0x12, 0x04, 0xfe, 0xbe, 0x00, 0x03,
        0x00, 0x5e, 0x02, 0x07, 0x02, 0x5e, 0x0f, 0x1c, 0x00, 0xf8, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x81, 0xbf, 0x6a, 0x08, 0x00, 0x04,
        0x00, 0x51, 0x41, 0x00, 0xcd, 0xe8, 0x01, 0x00, 0x0c, 0x00, 0x00,
        0x00, 0x1b, 0x01, 0x02, 0x00, 0x00, 0x00, 0x04, 0x03, 0x01, 0x00,
        0x0c, 0x00, 0x02, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
        0x00, 0x00, 0x00, 0xef, 0xbe, 0x00, 0x00, 0x4f, 0x72, 0x62, 0x53,
        0x68, 0x64, 0x72, 0x07, 0x41, 0xbc, 0x01, 0x00, 0x03, 0x04, 0x0c,
        0x03, 0x7b, 0x22, 0x88, 0x81, 0xfb, 0xa2, 0x19, 0x78, 0x0d, 0x0f,
        0xde, 0x3a, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x03, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x16, 0x04, 0x6a, 0x00,
        0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
        0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0x00,
        0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x16,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd1, 0x00, 0x00, 0x00, 0x18,
        0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x16, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0xbd, 0x00, 0x00, 0x00, 0x01, 0x01,
        0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0xa3, 0x00, 0x00,
        0x00, 0x01, 0x01, 0x00, 0x03, 0x10, 0x00, 0x00, 0x00, 0x08, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x00, 0x00, 0x00,
        0x7f, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x03, 0x18, 0x00, 0x00,
        0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55,
        0x00, 0x00, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x03, 0x24, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00,
        0x00, 0x03, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4e, 0x00,
        0x00, 0x00, 0x3b, 0x00, 0x00, 0x00, 0x54, 0x65, 0x78, 0x74, 0x75,
        0x72, 0x65, 0x00, 0x5f, 0x5f, 0x47, 0x4c, 0x4f, 0x42, 0x41, 0x4c,
        0x5f, 0x43, 0x42, 0x5f, 0x5f, 0x00, 0x4f, 0x75, 0x74, 0x70, 0x75,
        0x74, 0x53, 0x69, 0x7a, 0x65, 0x00, 0x54, 0x65, 0x78, 0x74, 0x75,
        0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x00, 0x49, 0x6e, 0x70, 0x75,
        0x74, 0x53, 0x69, 0x7a, 0x65, 0x00, 0x28, 0x6e, 0x6f, 0x5f, 0x6e,
        0x61, 0x6d, 0x65, 0x29, 0x00, 0x54, 0x45, 0x58, 0x30, 0x00, 0x67,
        0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72,
        0x00, 0x00
};
