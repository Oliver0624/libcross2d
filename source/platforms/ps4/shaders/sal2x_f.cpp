#include "ps4_shaders.h"

const char sal2x_f[2479] = {
        0x71, 0xbc, 0x91, 0xe8, 0x64, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
        0x00, 0x93, 0x06, 0x00, 0x00, 0x23, 0x76, 0x65, 0x72, 0x73, 0x69,
        0x6f, 0x6e, 0x20, 0x31, 0x30, 0x30, 0x0a, 0x0a, 0x0a, 0x23, 0x69,
        0x66, 0x20, 0x5f, 0x5f, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e,
        0x5f, 0x5f, 0x20, 0x3e, 0x3d, 0x20, 0x31, 0x33, 0x30, 0x0a, 0x23,
        0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50,
        0x41, 0x54, 0x5f, 0x56, 0x41, 0x52, 0x59, 0x49, 0x4e, 0x47, 0x20,
        0x69, 0x6e, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20,
        0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x54, 0x45, 0x58, 0x54,
        0x55, 0x52, 0x45, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65,
        0x0a, 0x6f, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x46,
        0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x23,
        0x65, 0x6c, 0x73, 0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e,
        0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x56, 0x41,
        0x52, 0x59, 0x49, 0x4e, 0x47, 0x20, 0x76, 0x61, 0x72, 0x79, 0x69,
        0x6e, 0x67, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20,
        0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x67,
        0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72,
        0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f,
        0x4d, 0x50, 0x41, 0x54, 0x5f, 0x54, 0x45, 0x58, 0x54, 0x55, 0x52,
        0x45, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44,
        0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x23, 0x69,
        0x66, 0x64, 0x65, 0x66, 0x20, 0x47, 0x4c, 0x5f, 0x45, 0x53, 0x0a,
        0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x47, 0x4c, 0x5f, 0x46,
        0x52, 0x41, 0x47, 0x4d, 0x45, 0x4e, 0x54, 0x5f, 0x50, 0x52, 0x45,
        0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x48, 0x49, 0x47, 0x48,
        0x0a, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20,
        0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74,
        0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x70, 0x72, 0x65,
        0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x6d, 0x65, 0x64, 0x69,
        0x75, 0x6d, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3b, 0x0a,
        0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x23, 0x64, 0x65, 0x66,
        0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f,
        0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x6d,
        0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x0a, 0x23, 0x65, 0x6c, 0x73,
        0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43,
        0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49,
        0x53, 0x49, 0x4f, 0x4e, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66,
        0x0a, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43,
        0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49,
        0x53, 0x49, 0x4f, 0x4e, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x46, 0x72,
        0x61, 0x6d, 0x65, 0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 0x6f,
        0x6e, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20,
        0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43,
        0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x46,
        0x72, 0x61, 0x6d, 0x65, 0x43, 0x6f, 0x75, 0x6e, 0x74, 0x3b, 0x0a,
        0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d,
        0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49,
        0x4f, 0x4e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x4f, 0x75, 0x74,
        0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 0x6e,
        0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41,
        0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e,
        0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x54, 0x65, 0x78, 0x74, 0x75,
        0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69,
        0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54,
        0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20,
        0x76, 0x65, 0x63, 0x32, 0x20, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x53,
        0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72,
        0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44,
        0x20, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x43,
        0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x56, 0x41, 0x52, 0x59, 0x49,
        0x4e, 0x47, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x54, 0x45, 0x58,
        0x30, 0x3b, 0x0a, 0x2f, 0x2f, 0x20, 0x69, 0x6e, 0x20, 0x76, 0x61,
        0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x73, 0x20, 0x67, 0x6f, 0x20,
        0x68, 0x65, 0x72, 0x65, 0x20, 0x61, 0x73, 0x20, 0x43, 0x4f, 0x4d,
        0x50, 0x41, 0x54, 0x5f, 0x56, 0x41, 0x52, 0x59, 0x49, 0x4e, 0x47,
        0x20, 0x77, 0x68, 0x61, 0x74, 0x65, 0x76, 0x65, 0x72, 0x0a, 0x0a,
        0x2f, 0x2f, 0x20, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74,
        0x20, 0x63, 0x6f, 0x6d, 0x70, 0x61, 0x74, 0x69, 0x62, 0x69, 0x6c,
        0x69, 0x74, 0x79, 0x20, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65,
        0x73, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x53,
        0x6f, 0x75, 0x72, 0x63, 0x65, 0x20, 0x54, 0x65, 0x78, 0x74, 0x75,
        0x72, 0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20,
        0x76, 0x54, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x54,
        0x45, 0x58, 0x30, 0x2e, 0x78, 0x79, 0x0a, 0x0a, 0x23, 0x64, 0x65,
        0x66, 0x69, 0x6e, 0x65, 0x20, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65,
        0x53, 0x69, 0x7a, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x54,
        0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x2c,
        0x20, 0x31, 0x2e, 0x30, 0x20, 0x2f, 0x20, 0x54, 0x65, 0x78, 0x74,
        0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x29, 0x20, 0x2f, 0x2f,
        0x65, 0x69, 0x74, 0x68, 0x65, 0x72, 0x20, 0x54, 0x65, 0x78, 0x74,
        0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x20, 0x6f, 0x72, 0x20,
        0x49, 0x6e, 0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x0a, 0x23,
        0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x6f, 0x75, 0x74, 0x73,
        0x69, 0x7a, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x4f, 0x75,
        0x74, 0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x2c, 0x20, 0x31,
        0x2e, 0x30, 0x20, 0x2f, 0x20, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74,
        0x53, 0x69, 0x7a, 0x65, 0x29, 0x0a, 0x0a, 0x76, 0x6f, 0x69, 0x64,
        0x20, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x65, 0x78,
        0x73, 0x69, 0x7a, 0x65, 0x20, 0x3d, 0x20, 0x53, 0x6f, 0x75, 0x72,
        0x63, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x78, 0x79, 0x3b, 0x0a,
        0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64,
        0x78, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d, 0x20, 0x70, 0x6f, 0x77,
        0x28, 0x74, 0x65, 0x78, 0x73, 0x69, 0x7a, 0x65, 0x2e, 0x78, 0x2c,
        0x20, 0x2d, 0x31, 0x2e, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x30, 0x2e,
        0x32, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f,
        0x61, 0x74, 0x20, 0x64, 0x79, 0x20, 0x20, 0x20, 0x20, 0x20, 0x3d,
        0x20, 0x70, 0x6f, 0x77, 0x28, 0x74, 0x65, 0x78, 0x73, 0x69, 0x7a,
        0x65, 0x2e, 0x79, 0x2c, 0x20, 0x2d, 0x31, 0x2e, 0x30, 0x29, 0x20,
        0x2a, 0x20, 0x30, 0x2e, 0x32, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x20,
        0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x20, 0x64, 0x74, 0x20, 0x20,
        0x20, 0x20, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31,
        0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e,
        0x30, 0x29, 0x3b, 0x0a, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76,
        0x65, 0x63, 0x32, 0x20, 0x55, 0x4c, 0x20, 0x3d, 0x20, 0x20, 0x20,
        0x20, 0x76, 0x54, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x20,
        0x2b, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x2d, 0x64, 0x78, 0x2c,
        0x20, 0x2d, 0x64, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20,
        0x76, 0x65, 0x63, 0x32, 0x20, 0x55, 0x52, 0x20, 0x3d, 0x20, 0x20,
        0x20, 0x20, 0x76, 0x54, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64,
        0x20, 0x2b, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x20, 0x64, 0x78,
        0x2c, 0x20, 0x2d, 0x64, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20,
        0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x44, 0x4c, 0x20, 0x3d, 0x20,
        0x20, 0x20, 0x20, 0x76, 0x54, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72,
        0x64, 0x20, 0x2b, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x2d, 0x64,
        0x78, 0x2c, 0x20, 0x20, 0x64, 0x79, 0x29, 0x3b, 0x0a, 0x20, 0x20,
        0x20, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x44, 0x52, 0x20, 0x3d,
        0x20, 0x20, 0x20, 0x20, 0x76, 0x54, 0x65, 0x78, 0x43, 0x6f, 0x6f,
        0x72, 0x64, 0x20, 0x2b, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x20,
        0x64, 0x78, 0x2c, 0x20, 0x20, 0x64, 0x79, 0x29, 0x3b, 0x0a, 0x0a,
        0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x63,
        0x30, 0x30, 0x20, 0x3d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54,
        0x5f, 0x54, 0x45, 0x58, 0x54, 0x55, 0x52, 0x45, 0x28, 0x53, 0x6f,
        0x75, 0x72, 0x63, 0x65, 0x2c, 0x20, 0x55, 0x4c, 0x29, 0x2e, 0x78,
        0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x76, 0x65, 0x63,
        0x33, 0x20, 0x63, 0x32, 0x30, 0x20, 0x3d, 0x20, 0x43, 0x4f, 0x4d,
        0x50, 0x41, 0x54, 0x5f, 0x54, 0x45, 0x58, 0x54, 0x55, 0x52, 0x45,
        0x28, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x2c, 0x20, 0x55, 0x52,
        0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20,
        0x76, 0x65, 0x63, 0x33, 0x20, 0x63, 0x30, 0x32, 0x20, 0x3d, 0x20,
        0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x54, 0x45, 0x58, 0x54,
        0x55, 0x52, 0x45, 0x28, 0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x2c,
        0x20, 0x44, 0x4c, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x63, 0x32, 0x32,
        0x20, 0x3d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x54,
        0x45, 0x58, 0x54, 0x55, 0x52, 0x45, 0x28, 0x53, 0x6f, 0x75, 0x72,
        0x63, 0x65, 0x2c, 0x20, 0x44, 0x52, 0x29, 0x2e, 0x78, 0x79, 0x7a,
        0x3b, 0x0a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61,
        0x74, 0x20, 0x6d, 0x31, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x28,
        0x61, 0x62, 0x73, 0x28, 0x63, 0x30, 0x30, 0x20, 0x2d, 0x20, 0x63,
        0x32, 0x32, 0x29, 0x2c, 0x20, 0x64, 0x74, 0x29, 0x20, 0x2b, 0x20,
        0x30, 0x2e, 0x30, 0x30, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20,
        0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x6d, 0x32, 0x20, 0x3d, 0x20,
        0x64, 0x6f, 0x74, 0x28, 0x61, 0x62, 0x73, 0x28, 0x63, 0x30, 0x32,
        0x20, 0x2d, 0x20, 0x63, 0x32, 0x30, 0x29, 0x2c, 0x20, 0x64, 0x74,
        0x29, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x30, 0x30, 0x31, 0x3b, 0x0a,
        0x0a, 0x20, 0x20, 0x20, 0x20, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f,
        0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28,
        0x28, 0x6d, 0x31, 0x2a, 0x28, 0x63, 0x30, 0x32, 0x20, 0x2b, 0x20,
        0x63, 0x32, 0x30, 0x29, 0x20, 0x2b, 0x20, 0x6d, 0x32, 0x2a, 0x28,
        0x63, 0x32, 0x32, 0x20, 0x2b, 0x20, 0x63, 0x30, 0x30, 0x29, 0x29,
        0x2f, 0x28, 0x32, 0x2e, 0x30, 0x2a, 0x28, 0x6d, 0x31, 0x20, 0x2b,
        0x20, 0x6d, 0x32, 0x29, 0x29, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29,
        0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x08, 0x03, 0x00, 0x00, 0x00, 0x04,
        0xef, 0xbe, 0xc3, 0x2e, 0x2b, 0x94, 0x2f, 0xe6, 0x80, 0xb7, 0x01,
        0x01, 0x00, 0x02, 0xf4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x53, 0x68, 0x64, 0x72, 0x07, 0x00, 0x02, 0x00, 0x02, 0x14,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x01, 0x00, 0x04, 0x00,
        0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
        0x83, 0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10,
        0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0x1b, 0x01, 0x02, 0x00, 0x00, 0x00, 0x04, 0x03, 0x01, 0x00, 0x0c,
        0x00, 0x02, 0x00, 0x10, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xff, 0x03,
        0xeb, 0xbe, 0x2e, 0x00, 0x00, 0x00, 0x7e, 0x04, 0x92, 0xbe, 0x7e,
        0x0a, 0xfe, 0xbe, 0x10, 0x03, 0xfc, 0xbe, 0x00, 0x03, 0x80, 0xc0,
        0x7f, 0x00, 0x8c, 0xbf, 0x00, 0x01, 0x40, 0xc2, 0x7f, 0x00, 0x8c,
        0xbf, 0x02, 0x01, 0x4e, 0xd3, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x4a, 0xd3, 0x02, 0x01, 0x00, 0x20, 0x03, 0x01, 0x4e, 0xd3, 0x01,
        0x00, 0x00, 0x00, 0x03, 0x00, 0x4a, 0xd3, 0x03, 0x01, 0x00, 0x20,
        0x00, 0x00, 0x10, 0xc8, 0x01, 0x00, 0x11, 0xc8, 0x00, 0x01, 0x00,
        0xc8, 0x01, 0x01, 0x01, 0xc8, 0x02, 0x09, 0x12, 0x40, 0x00, 0x00,
        0x80, 0xbe, 0x03, 0x01, 0x14, 0x40, 0x00, 0x00, 0x80, 0xbe, 0x02,
        0x09, 0x02, 0x40, 0x00, 0x00, 0x80, 0x3e, 0x03, 0x01, 0x1a, 0x40,
        0x00, 0x00, 0x80, 0x3e, 0x00, 0x07, 0x80, 0xf0, 0x09, 0x06, 0x61,
        0x00, 0x0a, 0x03, 0x04, 0x7e, 0x00, 0x07, 0x80, 0xf0, 0x01, 0x03,
        0x61, 0x00, 0x0d, 0x03, 0x14, 0x7e, 0x00, 0x07, 0x80, 0xf0, 0x09,
        0x09, 0x61, 0x00, 0x01, 0x03, 0x18, 0x7e, 0x00, 0x07, 0x80, 0xf0,
        0x0c, 0x00, 0x61, 0x00, 0x70, 0x0f, 0x8c, 0xbf, 0x06, 0x01, 0x18,
        0x08, 0x07, 0x03, 0x1a, 0x08, 0x08, 0x05, 0x1c, 0x08, 0x0d, 0x03,
        0x06, 0xd2, 0x0e, 0x1b, 0x02, 0x00, 0x0c, 0x01, 0x06, 0xd2, 0x0c,
        0x1b, 0x02, 0x00, 0xff, 0x18, 0x18, 0x06, 0x6f, 0x12, 0x83, 0x3a,
        0x03, 0x13, 0x1a, 0x0a, 0x04, 0x15, 0x1c, 0x0a, 0x05, 0x17, 0x1e,
        0x0a, 0x0e, 0x03, 0x06, 0xd2, 0x0f, 0x1d, 0x02, 0x00, 0x0d, 0x01,
        0x06, 0xd2, 0x0d, 0x1d, 0x02, 0x00, 0xff, 0x1a, 0x1a, 0x06, 0x6f,
        0x12, 0x83, 0x3a, 0x03, 0x13, 0x06, 0x06, 0x04, 0x15, 0x08, 0x06,
        0x05, 0x17, 0x0a, 0x06, 0x06, 0x01, 0x00, 0x06, 0x07, 0x03, 0x02,
        0x06, 0x08, 0x05, 0x04, 0x06, 0x0d, 0x01, 0x00, 0x10, 0x0d, 0x03,
        0x02, 0x10, 0x0d, 0x05, 0x04, 0x10, 0x0c, 0x07, 0x00, 0x3e, 0x0c,
        0x09, 0x02, 0x3e, 0x0c, 0x0b, 0x04, 0x3e, 0x03, 0x00, 0x06, 0xd2,
        0x0c, 0x1b, 0x02, 0x08, 0x03, 0x55, 0x06, 0x7e, 0x00, 0x07, 0x00,
        0x10, 0x01, 0x07, 0x02, 0x10, 0x02, 0x07, 0x04, 0x10, 0xf2, 0x02,
        0x06, 0x7e, 0x12, 0x04, 0xfe, 0xbe, 0x00, 0x03, 0x00, 0x5e, 0x02,
        0x07, 0x02, 0x5e, 0x0f, 0x1c, 0x00, 0xf8, 0x00, 0x01, 0x00, 0x00,
        0x00, 0x00, 0x81, 0xbf, 0x6a, 0x08, 0x00, 0x04, 0x00, 0x51, 0x41,
        0x00, 0xcd, 0xe8, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x1b, 0x01,
        0x02, 0x00, 0x00, 0x00, 0x04, 0x03, 0x01, 0x00, 0x0c, 0x00, 0x02,
        0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0xef, 0xbe, 0x00, 0x00,
        0x4f, 0x72, 0x62, 0x53, 0x68, 0x64, 0x72, 0x07, 0x41, 0x50, 0x01,
        0x00, 0x02, 0x04, 0x0c, 0x03, 0xc3, 0x2e, 0x2b, 0x94, 0x2f, 0xe6,
        0x80, 0xb7, 0x6f, 0xe0, 0x39, 0xbf, 0x02, 0x00, 0x00, 0x00, 0x01,
        0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05,
        0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
        0x16, 0x04, 0x6a, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x01, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x5e, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00,
        0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e,
        0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x03, 0x24, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
        0x00, 0x03, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x00,
        0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x54, 0x65, 0x78, 0x74, 0x75,
        0x72, 0x65, 0x00, 0x5f, 0x5f, 0x47, 0x4c, 0x4f, 0x42, 0x41, 0x4c,
        0x5f, 0x43, 0x42, 0x5f, 0x5f, 0x00, 0x54, 0x65, 0x78, 0x74, 0x75,
        0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x00, 0x28, 0x6e, 0x6f, 0x5f,
        0x6e, 0x61, 0x6d, 0x65, 0x29, 0x00, 0x54, 0x45, 0x58, 0x30, 0x00,
        0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f,
        0x72, 0x00, 0x00, 0x00
};
