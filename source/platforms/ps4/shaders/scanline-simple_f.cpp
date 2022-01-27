#include "ps4_shaders.h"

const char c2d_scanline_simple_f[3465] = {
	0x71, 0xbc, 0x91, 0xe8, 0x64, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x99, 0x0b, 0x00, 0x00, 0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 
	0x6f, 0x6e, 0x20, 0x31, 0x30, 0x30, 0x0a, 0x23, 0x64, 0x65, 0x66, 
	0x69, 0x6e, 0x65, 0x20, 0x46, 0x52, 0x41, 0x47, 0x4d, 0x45, 0x4e, 
	0x54, 0x0a, 0x0a, 0x2f, 0x2f, 0x20, 0x50, 0x61, 0x72, 0x61, 0x6d, 
	0x65, 0x74, 0x65, 0x72, 0x20, 0x6c, 0x69, 0x6e, 0x65, 0x73, 0x20, 
	0x67, 0x6f, 0x20, 0x68, 0x65, 0x72, 0x65, 0x3a, 0x0a, 0x23, 0x70, 
	0x72, 0x61, 0x67, 0x6d, 0x61, 0x20, 0x70, 0x61, 0x72, 0x61, 0x6d, 
	0x65, 0x74, 0x65, 0x72, 0x20, 0x53, 0x43, 0x41, 0x4e, 0x4c, 0x49, 
	0x4e, 0x45, 0x5f, 0x42, 0x41, 0x53, 0x45, 0x5f, 0x42, 0x52, 0x49, 
	0x47, 0x48, 0x54, 0x4e, 0x45, 0x53, 0x53, 0x20, 0x22, 0x53, 0x63, 
	0x61, 0x6e, 0x6c, 0x69, 0x6e, 0x65, 0x20, 0x42, 0x61, 0x73, 0x65, 
	0x20, 0x42, 0x72, 0x69, 0x67, 0x68, 0x74, 0x6e, 0x65, 0x73, 0x73, 
	0x22, 0x20, 0x30, 0x2e, 0x39, 0x35, 0x20, 0x30, 0x2e, 0x30, 0x20, 
	0x31, 0x2e, 0x30, 0x20, 0x30, 0x2e, 0x30, 0x31, 0x0a, 0x23, 0x70, 
	0x72, 0x61, 0x67, 0x6d, 0x61, 0x20, 0x70, 0x61, 0x72, 0x61, 0x6d, 
	0x65, 0x74, 0x65, 0x72, 0x20, 0x53, 0x43, 0x41, 0x4e, 0x4c, 0x49, 
	0x4e, 0x45, 0x5f, 0x53, 0x49, 0x4e, 0x45, 0x5f, 0x43, 0x4f, 0x4d, 
	0x50, 0x5f, 0x41, 0x20, 0x22, 0x47, 0x72, 0x69, 0x64, 0x20, 0x53, 
	0x74, 0x72, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x22, 0x20, 0x30, 0x2e, 
	0x30, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x31, 0x2e, 0x30, 0x30, 0x20, 
	0x30, 0x2e, 0x30, 0x32, 0x0a, 0x23, 0x70, 0x72, 0x61, 0x67, 0x6d, 
	0x61, 0x20, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 
	0x20, 0x53, 0x43, 0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x53, 
	0x49, 0x4e, 0x45, 0x5f, 0x43, 0x4f, 0x4d, 0x50, 0x5f, 0x42, 0x20, 
	0x22, 0x53, 0x63, 0x61, 0x6e, 0x6c, 0x69, 0x6e, 0x65, 0x20, 0x53, 
	0x74, 0x72, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x22, 0x20, 0x30, 0x2e, 
	0x32, 0x35, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x31, 0x2e, 0x30, 0x20, 
	0x30, 0x2e, 0x30, 0x35, 0x0a, 0x23, 0x70, 0x72, 0x61, 0x67, 0x6d, 
	0x61, 0x20, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 
	0x20, 0x73, 0x69, 0x7a, 0x65, 0x20, 0x22, 0x47, 0x72, 0x69, 0x64, 
	0x20, 0x73, 0x69, 0x7a, 0x65, 0x22, 0x20, 0x20, 0x31, 0x2e, 0x30, 
	0x20, 0x31, 0x2e, 0x30, 0x20, 0x32, 0x2e, 0x30, 0x20, 0x31, 0x2e, 
	0x30, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x70, 
	0x69, 0x20, 0x33, 0x2e, 0x31, 0x34, 0x31, 0x35, 0x39, 0x32, 0x36, 
	0x35, 0x34, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x64, 0x65, 0x66, 
	0x69, 0x6e, 0x65, 0x64, 0x28, 0x56, 0x45, 0x52, 0x54, 0x45, 0x58, 
	0x29, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x5f, 0x5f, 0x56, 0x45, 
	0x52, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x5f, 0x20, 0x3e, 0x3d, 0x20, 
	0x31, 0x33, 0x30, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 
	0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x56, 0x41, 0x52, 
	0x59, 0x49, 0x4e, 0x47, 0x20, 0x6f, 0x75, 0x74, 0x0a, 0x23, 0x64, 
	0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 
	0x54, 0x5f, 0x41, 0x54, 0x54, 0x52, 0x49, 0x42, 0x55, 0x54, 0x45, 
	0x20, 0x69, 0x6e, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 
	0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x54, 0x45, 0x58, 
	0x54, 0x55, 0x52, 0x45, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 
	0x65, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x23, 0x64, 0x65, 
	0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 
	0x5f, 0x56, 0x41, 0x52, 0x59, 0x49, 0x4e, 0x47, 0x20, 0x76, 0x61, 
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 
	0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x41, 
	0x54, 0x54, 0x52, 0x49, 0x42, 0x55, 0x54, 0x45, 0x20, 0x61, 0x74, 
	0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x0a, 0x23, 0x64, 0x65, 
	0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 
	0x5f, 0x54, 0x45, 0x58, 0x54, 0x55, 0x52, 0x45, 0x20, 0x74, 0x65, 
	0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x0a, 0x23, 0x65, 0x6e, 
	0x64, 0x69, 0x66, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 
	0x20, 0x47, 0x4c, 0x5f, 0x45, 0x53, 0x0a, 0x23, 0x64, 0x65, 0x66, 
	0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 
	0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x6d, 
	0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x0a, 0x23, 0x65, 0x6c, 0x73, 
	0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 
	0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 
	0x53, 0x49, 0x4f, 0x4e, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 
	0x0a, 0x0a, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x41, 0x54, 
	0x54, 0x52, 0x49, 0x42, 0x55, 0x54, 0x45, 0x20, 0x76, 0x65, 0x63, 
	0x34, 0x20, 0x56, 0x65, 0x72, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 
	0x72, 0x64, 0x3b, 0x0a, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 
	0x41, 0x54, 0x54, 0x52, 0x49, 0x42, 0x55, 0x54, 0x45, 0x20, 0x76, 
	0x65, 0x63, 0x34, 0x20, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x3b, 0x0a, 
	0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x41, 0x54, 0x54, 0x52, 
	0x49, 0x42, 0x55, 0x54, 0x45, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 
	0x54, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x3b, 0x0a, 0x43, 
	0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x56, 0x41, 0x52, 0x59, 0x49, 
	0x4e, 0x47, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x43, 0x4f, 0x4c, 
	0x30, 0x3b, 0x0a, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x56, 
	0x41, 0x52, 0x59, 0x49, 0x4e, 0x47, 0x20, 0x76, 0x65, 0x63, 0x34, 
	0x20, 0x54, 0x45, 0x58, 0x30, 0x3b, 0x0a, 0x43, 0x4f, 0x4d, 0x50, 
	0x41, 0x54, 0x5f, 0x56, 0x41, 0x52, 0x59, 0x49, 0x4e, 0x47, 0x20, 
	0x76, 0x65, 0x63, 0x32, 0x20, 0x6f, 0x6d, 0x65, 0x67, 0x61, 0x3b, 
	0x0a, 0x0a, 0x76, 0x65, 0x63, 0x34, 0x20, 0x5f, 0x6f, 0x50, 0x6f, 
	0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x31, 0x3b, 0x0a, 0x75, 0x6e, 
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 
	0x4d, 0x56, 0x50, 0x4d, 0x61, 0x74, 0x72, 0x69, 0x78, 0x3b, 0x0a, 
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
	0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 
	0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 
	0x20, 0x73, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x0a, 0x76, 0x6f, 0x69, 
	0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 
	0x20, 0x20, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 
	0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x4d, 0x56, 0x50, 0x4d, 
	0x61, 0x74, 0x72, 0x69, 0x78, 0x20, 0x2a, 0x20, 0x56, 0x65, 0x72, 
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x3b, 0x0a, 0x20, 
	0x20, 0x20, 0x20, 0x43, 0x4f, 0x4c, 0x30, 0x20, 0x3d, 0x20, 0x43, 
	0x4f, 0x4c, 0x4f, 0x52, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x54, 
	0x45, 0x58, 0x30, 0x2e, 0x78, 0x79, 0x20, 0x3d, 0x20, 0x54, 0x65, 
	0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x78, 0x79, 0x3b, 0x0a, 
	0x20, 0x20, 0x20, 0x20, 0x6f, 0x6d, 0x65, 0x67, 0x61, 0x20, 0x3d, 
	0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x70, 0x69, 0x20, 0x2a, 0x20, 
	0x73, 0x69, 0x7a, 0x65, 0x20, 0x2a, 0x20, 0x4f, 0x75, 0x74, 0x70, 
	0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x78, 0x2c, 0x20, 0x32, 
	0x2e, 0x30, 0x20, 0x2a, 0x20, 0x70, 0x69, 0x20, 0x2a, 0x20, 0x54, 
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x2e, 
	0x79, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x23, 0x65, 0x6c, 0x69, 
	0x66, 0x20, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x64, 0x28, 0x46, 
	0x52, 0x41, 0x47, 0x4d, 0x45, 0x4e, 0x54, 0x29, 0x0a, 0x0a, 0x23, 
	0x69, 0x66, 0x20, 0x5f, 0x5f, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 
	0x4e, 0x5f, 0x5f, 0x20, 0x3e, 0x3d, 0x20, 0x31, 0x33, 0x30, 0x0a, 
	0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 
	0x50, 0x41, 0x54, 0x5f, 0x56, 0x41, 0x52, 0x59, 0x49, 0x4e, 0x47, 
	0x20, 0x69, 0x6e, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 
	0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x54, 0x45, 0x58, 
	0x54, 0x55, 0x52, 0x45, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 
	0x65, 0x0a, 0x6f, 0x75, 0x74, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 
	0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 
	0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 
	0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x56, 
	0x41, 0x52, 0x59, 0x49, 0x4e, 0x47, 0x20, 0x76, 0x61, 0x72, 0x79, 
	0x69, 0x6e, 0x67, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 
	0x20, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 
	0x72, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 
	0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x54, 0x45, 0x58, 0x54, 0x55, 
	0x52, 0x45, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 
	0x44, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x23, 
	0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x47, 0x4c, 0x5f, 0x45, 0x53, 
	0x0a, 0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x47, 0x4c, 0x5f, 
	0x46, 0x52, 0x41, 0x47, 0x4d, 0x45, 0x4e, 0x54, 0x5f, 0x50, 0x52, 
	0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x48, 0x49, 0x47, 
	0x48, 0x0a, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 
	0x74, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x70, 0x72, 
	0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 0x20, 0x6d, 0x65, 0x64, 
	0x69, 0x75, 0x6d, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3b, 
	0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x23, 0x64, 0x65, 
	0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 
	0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 
	0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x0a, 0x23, 0x65, 0x6c, 
	0x73, 0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 
	0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 
	0x49, 0x53, 0x49, 0x4f, 0x4e, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 
	0x66, 0x0a, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 
	0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 
	0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x46, 
	0x72, 0x61, 0x6d, 0x65, 0x44, 0x69, 0x72, 0x65, 0x63, 0x74, 0x69, 
	0x6f, 0x6e, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 
	0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 
	0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x69, 0x6e, 0x74, 0x20, 
	0x46, 0x72, 0x61, 0x6d, 0x65, 0x43, 0x6f, 0x75, 0x6e, 0x74, 0x3b, 
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 
	0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 
	0x49, 0x4f, 0x4e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x4f, 0x75, 
	0x74, 0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 
	0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 
	0x4e, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x54, 0x65, 0x78, 0x74, 
	0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 
	0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x49, 0x6e, 0x70, 0x75, 0x74, 
	0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 
	0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 
	0x44, 0x20, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 
	0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x56, 0x41, 0x52, 0x59, 
	0x49, 0x4e, 0x47, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x54, 0x45, 
	0x58, 0x30, 0x3b, 0x0a, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 
	0x56, 0x41, 0x52, 0x59, 0x49, 0x4e, 0x47, 0x20, 0x76, 0x65, 0x63, 
	0x32, 0x20, 0x6f, 0x6d, 0x65, 0x67, 0x61, 0x3b, 0x0a, 0x0a, 0x2f, 
	0x2f, 0x20, 0x63, 0x6f, 0x6d, 0x70, 0x61, 0x74, 0x69, 0x62, 0x69, 
	0x6c, 0x69, 0x74, 0x79, 0x20, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 
	0x65, 0x73, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 
	0x53, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x20, 0x54, 0x65, 0x78, 0x74, 
	0x75, 0x72, 0x65, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 
	0x20, 0x76, 0x54, 0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x20, 
	0x54, 0x45, 0x58, 0x30, 0x2e, 0x78, 0x79, 0x0a, 0x0a, 0x23, 0x64, 
	0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x53, 0x6f, 0x75, 0x72, 0x63, 
	0x65, 0x53, 0x69, 0x7a, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 
	0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 
	0x2c, 0x20, 0x31, 0x2e, 0x30, 0x20, 0x2f, 0x20, 0x54, 0x65, 0x78, 
	0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x29, 0x20, 0x2f, 
	0x2f, 0x65, 0x69, 0x74, 0x68, 0x65, 0x72, 0x20, 0x54, 0x65, 0x78, 
	0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x20, 0x6f, 0x72, 
	0x20, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x0a, 
	0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x4f, 0x75, 0x74, 
	0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x20, 0x76, 0x65, 0x63, 
	0x34, 0x28, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 
	0x65, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x20, 0x2f, 0x20, 0x4f, 0x75, 
	0x74, 0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x29, 0x0a, 0x0a, 
	0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x50, 0x41, 0x52, 0x41, 
	0x4d, 0x45, 0x54, 0x45, 0x52, 0x5f, 0x55, 0x4e, 0x49, 0x46, 0x4f, 
	0x52, 0x4d, 0x0a, 0x2f, 0x2f, 0x20, 0x41, 0x6c, 0x6c, 0x20, 0x70, 
	0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x20, 0x66, 0x6c, 
	0x6f, 0x61, 0x74, 0x73, 0x20, 0x6e, 0x65, 0x65, 0x64, 0x20, 0x74, 
	0x6f, 0x20, 0x68, 0x61, 0x76, 0x65, 0x20, 0x43, 0x4f, 0x4d, 0x50, 
	0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 
	0x4e, 0x20, 0x69, 0x6e, 0x20, 0x66, 0x72, 0x6f, 0x6e, 0x74, 0x20, 
	0x6f, 0x66, 0x20, 0x74, 0x68, 0x65, 0x6d, 0x0a, 0x75, 0x6e, 0x69, 
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 
	0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x53, 0x43, 0x41, 0x4e, 0x4c, 
	0x49, 0x4e, 0x45, 0x5f, 0x42, 0x41, 0x53, 0x45, 0x5f, 0x42, 0x52, 
	0x49, 0x47, 0x48, 0x54, 0x4e, 0x45, 0x53, 0x53, 0x3b, 0x0a, 0x75, 
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 
	0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 
	0x4e, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x53, 0x43, 0x41, 
	0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x53, 0x49, 0x4e, 0x45, 0x5f, 
	0x43, 0x4f, 0x4d, 0x50, 0x5f, 0x41, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 
	0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x53, 0x43, 0x41, 0x4e, 0x4c, 
	0x49, 0x4e, 0x45, 0x5f, 0x53, 0x49, 0x4e, 0x45, 0x5f, 0x43, 0x4f, 
	0x4d, 0x50, 0x5f, 0x42, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 
	0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x53, 0x43, 
	0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x42, 0x41, 0x53, 0x45, 
	0x5f, 0x42, 0x52, 0x49, 0x47, 0x48, 0x54, 0x4e, 0x45, 0x53, 0x53, 
	0x20, 0x30, 0x2e, 0x39, 0x35, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 
	0x6e, 0x65, 0x20, 0x53, 0x43, 0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 
	0x5f, 0x53, 0x49, 0x4e, 0x45, 0x5f, 0x43, 0x4f, 0x4d, 0x50, 0x5f, 
	0x41, 0x20, 0x30, 0x2e, 0x30, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 
	0x6e, 0x65, 0x20, 0x53, 0x43, 0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 
	0x5f, 0x53, 0x49, 0x4e, 0x45, 0x5f, 0x43, 0x4f, 0x4d, 0x50, 0x5f, 
	0x42, 0x20, 0x30, 0x2e, 0x31, 0x35, 0x0a, 0x23, 0x65, 0x6e, 0x64, 
	0x69, 0x66, 0x0a, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 
	0x69, 0x6e, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x76, 
	0x65, 0x63, 0x32, 0x20, 0x73, 0x69, 0x6e, 0x65, 0x5f, 0x63, 0x6f, 
	0x6d, 0x70, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x53, 
	0x43, 0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x53, 0x49, 0x4e, 
	0x45, 0x5f, 0x43, 0x4f, 0x4d, 0x50, 0x5f, 0x41, 0x2c, 0x20, 0x53, 
	0x43, 0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x53, 0x49, 0x4e, 
	0x45, 0x5f, 0x43, 0x4f, 0x4d, 0x50, 0x5f, 0x42, 0x29, 0x3b, 0x0a, 
	0x20, 0x20, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x72, 0x65, 0x73, 
	0x20, 0x3d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x54, 
	0x45, 0x58, 0x54, 0x55, 0x52, 0x45, 0x28, 0x53, 0x6f, 0x75, 0x72, 
	0x63, 0x65, 0x2c, 0x20, 0x76, 0x54, 0x65, 0x78, 0x43, 0x6f, 0x6f, 
	0x72, 0x64, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 
	0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x73, 0x63, 0x61, 0x6e, 0x6c, 
	0x69, 0x6e, 0x65, 0x20, 0x3d, 0x20, 0x72, 0x65, 0x73, 0x20, 0x2a, 
	0x20, 0x28, 0x53, 0x43, 0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 
	0x42, 0x41, 0x53, 0x45, 0x5f, 0x42, 0x52, 0x49, 0x47, 0x48, 0x54, 
	0x4e, 0x45, 0x53, 0x53, 0x20, 0x2b, 0x20, 0x64, 0x6f, 0x74, 0x28, 
	0x73, 0x69, 0x6e, 0x65, 0x5f, 0x63, 0x6f, 0x6d, 0x70, 0x20, 0x2a, 
	0x20, 0x73, 0x69, 0x6e, 0x28, 0x76, 0x54, 0x65, 0x78, 0x43, 0x6f, 
	0x6f, 0x72, 0x64, 0x20, 0x2a, 0x20, 0x6f, 0x6d, 0x65, 0x67, 0x61, 
	0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x31, 0x2e, 0x30, 
	0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 
	0x20, 0x20, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 
	0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x73, 0x63, 0x61, 
	0x6e, 0x6c, 0x69, 0x6e, 0x65, 0x2e, 0x78, 0x2c, 0x20, 0x73, 0x63, 
	0x61, 0x6e, 0x6c, 0x69, 0x6e, 0x65, 0x2e, 0x79, 0x2c, 0x20, 0x73, 
	0x63, 0x61, 0x6e, 0x6c, 0x69, 0x6e, 0x65, 0x2e, 0x7a, 0x2c, 0x20, 
	0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x23, 0x65, 0x6e, 
	0x64, 0x69, 0x66, 0x0a, 0xdc, 0x01, 0x00, 0x00, 0x00, 0x04, 0xef, 
	0xbe, 0x2b, 0x7d, 0x87, 0xfc, 0x22, 0x84, 0xfe, 0xed, 0x01, 0x01, 
	0x00, 0x02, 0x24, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x53, 0x68, 0x64, 0x72, 0x07, 0x00, 0x02, 0x00, 0x02, 0x12, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x02, 0x00, 0x00, 
	0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x81, 
	0x00, 0x0c, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 
	0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x04, 0x03, 0x01, 0x00, 0x0c, 0x00, 0x0f, 0x00, 0x10, 0x00, 
	0xff, 0x03, 0xeb, 0xbe, 0x15, 0x00, 0x00, 0x00, 0x7e, 0x04, 0x82, 
	0xbe, 0x7e, 0x0a, 0xfe, 0xbe, 0x10, 0x03, 0xfc, 0xbe, 0x00, 0x00, 
	0x08, 0xc8, 0x01, 0x00, 0x09, 0xc8, 0x00, 0x01, 0x0c, 0xc8, 0x01, 
	0x01, 0x0d, 0xc8, 0x00, 0x07, 0x80, 0xf0, 0x02, 0x04, 0x61, 0x00, 
	0x00, 0x05, 0x00, 0xc8, 0x01, 0x05, 0x01, 0xc8, 0x03, 0x01, 0x00, 
	0x10, 0xff, 0x00, 0x02, 0x0e, 0x83, 0xf9, 0x22, 0x3e, 0xff, 0x00, 
	0x00, 0x36, 0x00, 0x00, 0x00, 0x80, 0x01, 0x01, 0x40, 0xd3, 0x01, 
	0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x38, 0x00, 0x6b, 0x00, 0x7e, 
	0xff, 0x02, 0x02, 0x7e, 0x33, 0x33, 0x73, 0x3f, 0xff, 0x03, 0x80, 
	0xbe, 0x9a, 0x99, 0x19, 0x3e, 0x00, 0x00, 0x02, 0x3e, 0x70, 0x0f, 
	0x8c, 0xbf, 0x04, 0x03, 0x00, 0x10, 0x05, 0x03, 0x04, 0x10, 0x06, 
	0x03, 0x02, 0x10, 0xf2, 0x02, 0x06, 0x7e, 0x02, 0x04, 0xfe, 0xbe, 
	0x00, 0x05, 0x00, 0x5e, 0x01, 0x07, 0x02, 0x5e, 0x0f, 0x1c, 0x00, 
	0xf8, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x81, 0xbf, 0x51, 0x41, 
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x01, 
	0x00, 0x0c, 0x00, 0x01, 0x00, 0x00, 0x00, 0xef, 0xbe, 0x00, 0x00, 
	0x4f, 0x72, 0x62, 0x53, 0x68, 0x64, 0x72, 0x07, 0x41, 0x98, 0x00, 
	0x00, 0x02, 0x02, 0x0c, 0x03, 0x2b, 0x7d, 0x87, 0xfc, 0x22, 0x84, 
	0xfe, 0xed, 0x72, 0x6e, 0xea, 0x9a, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 
	0x00, 0x00, 0x00, 0x03, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x30, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x24, 0x00, 
	0x01, 0x00, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x27, 0x00, 
	0x00, 0x00, 0x03, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 
	0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x54, 0x65, 0x78, 0x74, 
	0x75, 0x72, 0x65, 0x00, 0x54, 0x45, 0x58, 0x30, 0x00, 0x6f, 0x6d, 
	0x65, 0x67, 0x61, 0x00, 0x4f, 0x4d, 0x45, 0x47, 0x41, 0x00, 0x67, 
	0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 
	0x00, 0x28, 0x6e, 0x6f, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x29, 0x00
};

