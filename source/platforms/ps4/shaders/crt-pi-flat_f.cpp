#include "ps4_shaders.h"

const char c2d_crt_pi_flat_f[6370] = {
	0x71, 0xbc, 0x91, 0xe8, 0x64, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
	0x00, 0x9a, 0x14, 0x00, 0x00, 0x23, 0x76, 0x65, 0x72, 0x73, 0x69, 
	0x6f, 0x6e, 0x20, 0x31, 0x30, 0x30, 0x0a, 0x23, 0x64, 0x65, 0x66, 
	0x69, 0x6e, 0x65, 0x20, 0x46, 0x52, 0x41, 0x47, 0x4d, 0x45, 0x4e, 
	0x54, 0x0a, 0x0a, 0x23, 0x70, 0x72, 0x61, 0x67, 0x6d, 0x61, 0x20, 
	0x70, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x20, 0x43, 
	0x55, 0x52, 0x56, 0x41, 0x54, 0x55, 0x52, 0x45, 0x5f, 0x58, 0x20, 
	0x22, 0x53, 0x63, 0x72, 0x65, 0x65, 0x6e, 0x20, 0x63, 0x75, 0x72, 
	0x76, 0x61, 0x74, 0x75, 0x72, 0x65, 0x20, 0x2d, 0x20, 0x68, 0x6f, 
	0x72, 0x69, 0x7a, 0x6f, 0x6e, 0x74, 0x61, 0x6c, 0x22, 0x20, 0x30, 
	0x2e, 0x31, 0x30, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x31, 0x2e, 0x30, 
	0x20, 0x30, 0x2e, 0x30, 0x31, 0x0a, 0x23, 0x70, 0x72, 0x61, 0x67, 
	0x6d, 0x61, 0x20, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 
	0x72, 0x20, 0x43, 0x55, 0x52, 0x56, 0x41, 0x54, 0x55, 0x52, 0x45, 
	0x5f, 0x59, 0x20, 0x22, 0x53, 0x63, 0x72, 0x65, 0x65, 0x6e, 0x20, 
	0x63, 0x75, 0x72, 0x76, 0x61, 0x74, 0x75, 0x72, 0x65, 0x20, 0x2d, 
	0x20, 0x76, 0x65, 0x72, 0x74, 0x69, 0x63, 0x61, 0x6c, 0x22, 0x20, 
	0x30, 0x2e, 0x31, 0x35, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x31, 0x2e, 
	0x30, 0x20, 0x30, 0x2e, 0x30, 0x31, 0x0a, 0x23, 0x70, 0x72, 0x61, 
	0x67, 0x6d, 0x61, 0x20, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 
	0x65, 0x72, 0x20, 0x4d, 0x41, 0x53, 0x4b, 0x5f, 0x42, 0x52, 0x49, 
	0x47, 0x48, 0x54, 0x4e, 0x45, 0x53, 0x53, 0x20, 0x22, 0x4d, 0x61, 
	0x73, 0x6b, 0x20, 0x62, 0x72, 0x69, 0x67, 0x68, 0x74, 0x6e, 0x65, 
	0x73, 0x73, 0x22, 0x20, 0x30, 0x2e, 0x37, 0x30, 0x20, 0x30, 0x2e, 
	0x30, 0x20, 0x31, 0x2e, 0x30, 0x20, 0x30, 0x2e, 0x30, 0x31, 0x0a, 
	0x23, 0x70, 0x72, 0x61, 0x67, 0x6d, 0x61, 0x20, 0x70, 0x61, 0x72, 
	0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x20, 0x53, 0x43, 0x41, 0x4e, 
	0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x57, 0x45, 0x49, 0x47, 0x48, 0x54, 
	0x20, 0x22, 0x53, 0x63, 0x61, 0x6e, 0x6c, 0x69, 0x6e, 0x65, 0x20, 
	0x77, 0x65, 0x69, 0x67, 0x68, 0x74, 0x22, 0x20, 0x36, 0x2e, 0x30, 
	0x20, 0x30, 0x2e, 0x30, 0x20, 0x31, 0x35, 0x2e, 0x30, 0x20, 0x30, 
	0x2e, 0x31, 0x0a, 0x23, 0x70, 0x72, 0x61, 0x67, 0x6d, 0x61, 0x20, 
	0x70, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x20, 0x53, 
	0x43, 0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x47, 0x41, 0x50, 
	0x5f, 0x42, 0x52, 0x49, 0x47, 0x48, 0x54, 0x4e, 0x45, 0x53, 0x53, 
	0x20, 0x22, 0x53, 0x63, 0x61, 0x6e, 0x6c, 0x69, 0x6e, 0x65, 0x20, 
	0x67, 0x61, 0x70, 0x20, 0x62, 0x72, 0x69, 0x67, 0x68, 0x74, 0x6e, 
	0x65, 0x73, 0x73, 0x22, 0x20, 0x30, 0x2e, 0x31, 0x32, 0x20, 0x30, 
	0x2e, 0x30, 0x20, 0x31, 0x2e, 0x30, 0x20, 0x30, 0x2e, 0x30, 0x31, 
	0x0a, 0x23, 0x70, 0x72, 0x61, 0x67, 0x6d, 0x61, 0x20, 0x70, 0x61, 
	0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x20, 0x42, 0x4c, 0x4f, 
	0x4f, 0x4d, 0x5f, 0x46, 0x41, 0x43, 0x54, 0x4f, 0x52, 0x20, 0x22, 
	0x42, 0x6c, 0x6f, 0x6f, 0x6d, 0x20, 0x66, 0x61, 0x63, 0x74, 0x6f, 
	0x72, 0x22, 0x20, 0x31, 0x2e, 0x35, 0x20, 0x30, 0x2e, 0x30, 0x20, 
	0x35, 0x2e, 0x30, 0x20, 0x30, 0x2e, 0x30, 0x31, 0x0a, 0x23, 0x70, 
	0x72, 0x61, 0x67, 0x6d, 0x61, 0x20, 0x70, 0x61, 0x72, 0x61, 0x6d, 
	0x65, 0x74, 0x65, 0x72, 0x20, 0x49, 0x4e, 0x50, 0x55, 0x54, 0x5f, 
	0x47, 0x41, 0x4d, 0x4d, 0x41, 0x20, 0x22, 0x49, 0x6e, 0x70, 0x75, 
	0x74, 0x20, 0x67, 0x61, 0x6d, 0x6d, 0x61, 0x22, 0x20, 0x32, 0x2e, 
	0x34, 0x20, 0x30, 0x2e, 0x30, 0x20, 0x35, 0x2e, 0x30, 0x20, 0x30, 
	0x2e, 0x30, 0x31, 0x0a, 0x23, 0x70, 0x72, 0x61, 0x67, 0x6d, 0x61, 
	0x20, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 0x65, 0x72, 0x20, 
	0x4f, 0x55, 0x54, 0x50, 0x55, 0x54, 0x5f, 0x47, 0x41, 0x4d, 0x4d, 
	0x41, 0x20, 0x22, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x67, 
	0x61, 0x6d, 0x6d, 0x61, 0x22, 0x20, 0x32, 0x2e, 0x32, 0x20, 0x30, 
	0x2e, 0x30, 0x20, 0x35, 0x2e, 0x30, 0x20, 0x30, 0x2e, 0x30, 0x31, 
	0x0a, 0x0a, 0x2f, 0x2f, 0x20, 0x48, 0x61, 0x76, 0x65, 0x6e, 0x27, 
	0x74, 0x20, 0x70, 0x75, 0x74, 0x20, 0x74, 0x68, 0x65, 0x73, 0x65, 
	0x20, 0x61, 0x73, 0x20, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x65, 0x74, 
	0x65, 0x72, 0x73, 0x20, 0x61, 0x73, 0x20, 0x69, 0x74, 0x20, 0x77, 
	0x6f, 0x75, 0x6c, 0x64, 0x20, 0x73, 0x6c, 0x6f, 0x77, 0x20, 0x74, 
	0x68, 0x65, 0x20, 0x63, 0x6f, 0x64, 0x65, 0x20, 0x64, 0x6f, 0x77, 
	0x6e, 0x2e, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 
	0x53, 0x43, 0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x53, 0x0a, 0x23, 
	0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x4d, 0x55, 0x4c, 0x54, 
	0x49, 0x53, 0x41, 0x4d, 0x50, 0x4c, 0x45, 0x0a, 0x23, 0x64, 0x65, 
	0x66, 0x69, 0x6e, 0x65, 0x20, 0x47, 0x41, 0x4d, 0x4d, 0x41, 0x0a, 
	0x2f, 0x2f, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x46, 
	0x41, 0x4b, 0x45, 0x5f, 0x47, 0x41, 0x4d, 0x4d, 0x41, 0x0a, 0x2f, 
	0x2f, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x55, 
	0x52, 0x56, 0x41, 0x54, 0x55, 0x52, 0x45, 0x0a, 0x2f, 0x2f, 0x23, 
	0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x53, 0x48, 0x41, 0x52, 
	0x50, 0x45, 0x52, 0x0a, 0x2f, 0x2f, 0x20, 0x4d, 0x41, 0x53, 0x4b, 
	0x5f, 0x54, 0x59, 0x50, 0x45, 0x3a, 0x20, 0x30, 0x20, 0x3d, 0x20, 
	0x6e, 0x6f, 0x6e, 0x65, 0x2c, 0x20, 0x31, 0x20, 0x3d, 0x20, 0x67, 
	0x72, 0x65, 0x65, 0x6e, 0x2f, 0x6d, 0x61, 0x67, 0x65, 0x6e, 0x74, 
	0x61, 0x2c, 0x20, 0x32, 0x20, 0x3d, 0x20, 0x74, 0x72, 0x69, 0x6e, 
	0x69, 0x74, 0x72, 0x6f, 0x6e, 0x28, 0x69, 0x73, 0x68, 0x29, 0x0a, 
	0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x4d, 0x41, 0x53, 
	0x4b, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x20, 0x31, 0x0a, 0x0a, 0x0a, 
	0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x47, 0x4c, 0x5f, 0x45, 
	0x53, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 
	0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 
	0x53, 0x49, 0x4f, 0x4e, 0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 
	0x70, 0x0a, 0x70, 0x72, 0x65, 0x63, 0x69, 0x73, 0x69, 0x6f, 0x6e, 
	0x20, 0x6d, 0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x66, 0x6c, 
	0x6f, 0x61, 0x74, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 
	0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x4f, 0x4d, 
	0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 
	0x4f, 0x4e, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 
	0x23, 0x69, 0x66, 0x64, 0x65, 0x66, 0x20, 0x50, 0x41, 0x52, 0x41, 
	0x4d, 0x45, 0x54, 0x45, 0x52, 0x5f, 0x55, 0x4e, 0x49, 0x46, 0x4f, 
	0x52, 0x4d, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 
	0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 
	0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 
	0x20, 0x43, 0x55, 0x52, 0x56, 0x41, 0x54, 0x55, 0x52, 0x45, 0x5f, 
	0x58, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 
	0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 
	0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 
	0x20, 0x43, 0x55, 0x52, 0x56, 0x41, 0x54, 0x55, 0x52, 0x45, 0x5f, 
	0x59, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 
	0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 
	0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 
	0x20, 0x4d, 0x41, 0x53, 0x4b, 0x5f, 0x42, 0x52, 0x49, 0x47, 0x48, 
	0x54, 0x4e, 0x45, 0x53, 0x53, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 
	0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 
	0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 0x4f, 0x4e, 0x20, 0x66, 
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x53, 0x43, 0x41, 0x4e, 0x4c, 0x49, 
	0x4e, 0x45, 0x5f, 0x57, 0x45, 0x49, 0x47, 0x48, 0x54, 0x3b, 0x0a, 
	0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 0x4d, 
	0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 0x49, 
	0x4f, 0x4e, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x53, 0x43, 
	0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x47, 0x41, 0x50, 0x5f, 
	0x42, 0x52, 0x49, 0x47, 0x48, 0x54, 0x4e, 0x45, 0x53, 0x53, 0x3b, 
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 0x4f, 
	0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 0x53, 
	0x49, 0x4f, 0x4e, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x42, 
	0x4c, 0x4f, 0x4f, 0x4d, 0x5f, 0x46, 0x41, 0x43, 0x54, 0x4f, 0x52, 
	0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 
	0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 
	0x53, 0x49, 0x4f, 0x4e, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 
	0x49, 0x4e, 0x50, 0x55, 0x54, 0x5f, 0x47, 0x41, 0x4d, 0x4d, 0x41, 
	0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x43, 
	0x4f, 0x4d, 0x50, 0x41, 0x54, 0x5f, 0x50, 0x52, 0x45, 0x43, 0x49, 
	0x53, 0x49, 0x4f, 0x4e, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 
	0x4f, 0x55, 0x54, 0x50, 0x55, 0x54, 0x5f, 0x47, 0x41, 0x4d, 0x4d, 
	0x41, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x23, 0x64, 
	0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x55, 0x52, 0x56, 0x41, 
	0x54, 0x55, 0x52, 0x45, 0x5f, 0x58, 0x20, 0x30, 0x2e, 0x31, 0x30, 
	0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x43, 0x55, 
	0x52, 0x56, 0x41, 0x54, 0x55, 0x52, 0x45, 0x5f, 0x59, 0x20, 0x30, 
	0x2e, 0x32, 0x35, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 
	0x20, 0x4d, 0x41, 0x53, 0x4b, 0x5f, 0x42, 0x52, 0x49, 0x47, 0x48, 
	0x54, 0x4e, 0x45, 0x53, 0x53, 0x20, 0x30, 0x2e, 0x37, 0x30, 0x0a, 
	0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x53, 0x43, 0x41, 
	0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x57, 0x45, 0x49, 0x47, 0x48, 
	0x54, 0x20, 0x36, 0x2e, 0x30, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 
	0x6e, 0x65, 0x20, 0x53, 0x43, 0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 
	0x5f, 0x47, 0x41, 0x50, 0x5f, 0x42, 0x52, 0x49, 0x47, 0x48, 0x54, 
	0x4e, 0x45, 0x53, 0x53, 0x20, 0x30, 0x2e, 0x31, 0x32, 0x0a, 0x23, 
	0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x42, 0x4c, 0x4f, 0x4f, 
	0x4d, 0x5f, 0x46, 0x41, 0x43, 0x54, 0x4f, 0x52, 0x20, 0x31, 0x2e, 
	0x35, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x20, 0x49, 
	0x4e, 0x50, 0x55, 0x54, 0x5f, 0x47, 0x41, 0x4d, 0x4d, 0x41, 0x20, 
	0x32, 0x2e, 0x34, 0x0a, 0x23, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 
	0x20, 0x4f, 0x55, 0x54, 0x50, 0x55, 0x54, 0x5f, 0x47, 0x41, 0x4d, 
	0x4d, 0x41, 0x20, 0x32, 0x2e, 0x32, 0x0a, 0x23, 0x65, 0x6e, 0x64, 
	0x69, 0x66, 0x0a, 0x0a, 0x2f, 0x2a, 0x20, 0x43, 0x4f, 0x4d, 0x50, 
	0x41, 0x54, 0x49, 0x42, 0x49, 0x4c, 0x49, 0x54, 0x59, 0x0a, 0x20, 
	0x20, 0x20, 0x2d, 0x20, 0x47, 0x4c, 0x53, 0x4c, 0x20, 0x63, 0x6f, 
	0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x73, 0x0a, 0x2a, 0x2f, 0x0a, 
	0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 
	0x63, 0x32, 0x20, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 
	0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x64, 0x65, 
	0x66, 0x69, 0x6e, 0x65, 0x64, 0x28, 0x43, 0x55, 0x52, 0x56, 0x41, 
	0x54, 0x55, 0x52, 0x45, 0x29, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 
	0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x73, 0x63, 0x72, 
	0x65, 0x65, 0x6e, 0x53, 0x63, 0x61, 0x6c, 0x65, 0x3b, 0x0a, 0x23, 
	0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 
	0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x54, 0x45, 0x58, 
	0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x66, 0x69, 0x6c, 0x74, 0x65, 
	0x72, 0x57, 0x69, 0x64, 0x74, 0x68, 0x3b, 0x0a, 0x0a, 0x23, 0x69, 
	0x66, 0x20, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x64, 0x28, 0x56, 
	0x45, 0x52, 0x54, 0x45, 0x58, 0x29, 0x0a, 0x75, 0x6e, 0x69, 0x66, 
	0x6f, 0x72, 0x6d, 0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x4d, 0x56, 
	0x50, 0x4d, 0x61, 0x74, 0x72, 0x69, 0x78, 0x3b, 0x0a, 0x61, 0x74, 
	0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 
	0x34, 0x20, 0x56, 0x65, 0x72, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6f, 
	0x72, 0x64, 0x3b, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 
	0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x43, 0x4f, 0x4c, 
	0x4f, 0x52, 0x3b, 0x20, 0x2f, 0x2f, 0x20, 0x63, 0x32, 0x64, 0x20, 
	0x66, 0x69, 0x78, 0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 
	0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x54, 0x65, 0x78, 
	0x43, 0x6f, 0x6f, 0x72, 0x64, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 
	0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x43, 0x4f, 
	0x4c, 0x30, 0x3b, 0x20, 0x2f, 0x2f, 0x20, 0x63, 0x32, 0x64, 0x20, 
	0x66, 0x69, 0x78, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 
	0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x49, 0x6e, 0x70, 0x75, 0x74, 
	0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 
	0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x4f, 0x75, 0x74, 
	0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x0a, 0x76, 
	0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x28, 0x29, 0x0a, 
	0x7b, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x64, 0x65, 0x66, 0x69, 0x6e, 
	0x65, 0x64, 0x28, 0x43, 0x55, 0x52, 0x56, 0x41, 0x54, 0x55, 0x52, 
	0x45, 0x29, 0x0a, 0x09, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6e, 0x53, 
	0x63, 0x61, 0x6c, 0x65, 0x20, 0x3d, 0x20, 0x54, 0x65, 0x78, 0x74, 
	0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x20, 0x2f, 0x20, 0x49, 
	0x6e, 0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x23, 
	0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x09, 0x66, 0x69, 0x6c, 0x74, 
	0x65, 0x72, 0x57, 0x69, 0x64, 0x74, 0x68, 0x20, 0x3d, 0x20, 0x28, 
	0x49, 0x6e, 0x70, 0x75, 0x74, 0x53, 0x69, 0x7a, 0x65, 0x2e, 0x79, 
	0x20, 0x2f, 0x20, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x53, 0x69, 
	0x7a, 0x65, 0x2e, 0x79, 0x29, 0x20, 0x2f, 0x20, 0x33, 0x2e, 0x30, 
	0x3b, 0x0a, 0x09, 0x54, 0x45, 0x58, 0x30, 0x20, 0x3d, 0x20, 0x54, 
	0x65, 0x78, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x3b, 0x0a, 0x09, 0x67, 
	0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 
	0x3d, 0x20, 0x4d, 0x56, 0x50, 0x4d, 0x61, 0x74, 0x72, 0x69, 0x78, 
	0x20, 0x2a, 0x20, 0x56, 0x65, 0x72, 0x74, 0x65, 0x78, 0x43, 0x6f, 
	0x6f, 0x72, 0x64, 0x3b, 0x0a, 0x09, 0x43, 0x4f, 0x4c, 0x30, 0x20, 
	0x3d, 0x20, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x3b, 0x20, 0x2f, 0x2f, 
	0x20, 0x63, 0x32, 0x64, 0x20, 0x66, 0x69, 0x78, 0x0a, 0x7d, 0x0a, 
	0x23, 0x65, 0x6c, 0x69, 0x66, 0x20, 0x64, 0x65, 0x66, 0x69, 0x6e, 
	0x65, 0x64, 0x28, 0x46, 0x52, 0x41, 0x47, 0x4d, 0x45, 0x4e, 0x54, 
	0x29, 0x0a, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 
	0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x54, 
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x0a, 0x23, 0x69, 
	0x66, 0x20, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x64, 0x28, 0x43, 
	0x55, 0x52, 0x56, 0x41, 0x54, 0x55, 0x52, 0x45, 0x29, 0x0a, 0x76, 
	0x65, 0x63, 0x32, 0x20, 0x44, 0x69, 0x73, 0x74, 0x6f, 0x72, 0x74, 
	0x28, 0x76, 0x65, 0x63, 0x32, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 
	0x29, 0x0a, 0x7b, 0x0a, 0x09, 0x76, 0x65, 0x63, 0x32, 0x20, 0x43, 
	0x55, 0x52, 0x56, 0x41, 0x54, 0x55, 0x52, 0x45, 0x5f, 0x44, 0x49, 
	0x53, 0x54, 0x4f, 0x52, 0x54, 0x49, 0x4f, 0x4e, 0x20, 0x3d, 0x20, 
	0x76, 0x65, 0x63, 0x32, 0x28, 0x43, 0x55, 0x52, 0x56, 0x41, 0x54, 
	0x55, 0x52, 0x45, 0x5f, 0x58, 0x2c, 0x20, 0x43, 0x55, 0x52, 0x56, 
	0x41, 0x54, 0x55, 0x52, 0x45, 0x5f, 0x59, 0x29, 0x3b, 0x0a, 0x09, 
	0x2f, 0x2f, 0x20, 0x42, 0x61, 0x72, 0x72, 0x65, 0x6c, 0x20, 0x64, 
	0x69, 0x73, 0x74, 0x6f, 0x72, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x73, 
	0x68, 0x72, 0x69, 0x6e, 0x6b, 0x73, 0x20, 0x74, 0x68, 0x65, 0x20, 
	0x64, 0x69, 0x73, 0x70, 0x6c, 0x61, 0x79, 0x20, 0x61, 0x72, 0x65, 
	0x61, 0x20, 0x61, 0x20, 0x62, 0x69, 0x74, 0x2c, 0x20, 0x74, 0x68, 
	0x69, 0x73, 0x20, 0x77, 0x69, 0x6c, 0x6c, 0x20, 0x61, 0x6c, 0x6c, 
	0x6f, 0x77, 0x20, 0x75, 0x73, 0x20, 0x74, 0x6f, 0x20, 0x63, 0x6f, 
	0x75, 0x6e, 0x74, 0x65, 0x72, 0x61, 0x63, 0x74, 0x20, 0x74, 0x68, 
	0x61, 0x74, 0x2e, 0x0a, 0x09, 0x76, 0x65, 0x63, 0x32, 0x20, 0x62, 
	0x61, 0x72, 0x72, 0x65, 0x6c, 0x53, 0x63, 0x61, 0x6c, 0x65, 0x20, 
	0x3d, 0x20, 0x31, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x28, 0x30, 0x2e, 
	0x32, 0x33, 0x20, 0x2a, 0x20, 0x43, 0x55, 0x52, 0x56, 0x41, 0x54, 
	0x55, 0x52, 0x45, 0x5f, 0x44, 0x49, 0x53, 0x54, 0x4f, 0x52, 0x54, 
	0x49, 0x4f, 0x4e, 0x29, 0x3b, 0x0a, 0x09, 0x63, 0x6f, 0x6f, 0x72, 
	0x64, 0x20, 0x2a, 0x3d, 0x20, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6e, 
	0x53, 0x63, 0x61, 0x6c, 0x65, 0x3b, 0x0a, 0x09, 0x63, 0x6f, 0x6f, 
	0x72, 0x64, 0x20, 0x2d, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 
	0x30, 0x2e, 0x35, 0x29, 0x3b, 0x0a, 0x09, 0x66, 0x6c, 0x6f, 0x61, 
	0x74, 0x20, 0x72, 0x73, 0x71, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6f, 
	0x72, 0x64, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x63, 0x6f, 0x6f, 0x72, 
	0x64, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 
	0x2e, 0x79, 0x20, 0x2a, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 
	0x79, 0x3b, 0x0a, 0x09, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x2b, 
	0x3d, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x2a, 0x20, 0x28, 
	0x43, 0x55, 0x52, 0x56, 0x41, 0x54, 0x55, 0x52, 0x45, 0x5f, 0x44, 
	0x49, 0x53, 0x54, 0x4f, 0x52, 0x54, 0x49, 0x4f, 0x4e, 0x20, 0x2a, 
	0x20, 0x72, 0x73, 0x71, 0x29, 0x3b, 0x0a, 0x09, 0x63, 0x6f, 0x6f, 
	0x72, 0x64, 0x20, 0x2a, 0x3d, 0x20, 0x62, 0x61, 0x72, 0x72, 0x65, 
	0x6c, 0x53, 0x63, 0x61, 0x6c, 0x65, 0x3b, 0x0a, 0x09, 0x69, 0x66, 
	0x20, 0x28, 0x61, 0x62, 0x73, 0x28, 0x63, 0x6f, 0x6f, 0x72, 0x64, 
	0x2e, 0x78, 0x29, 0x20, 0x3e, 0x3d, 0x20, 0x30, 0x2e, 0x35, 0x20, 
	0x7c, 0x7c, 0x20, 0x61, 0x62, 0x73, 0x28, 0x63, 0x6f, 0x6f, 0x72, 
	0x64, 0x2e, 0x79, 0x29, 0x20, 0x3e, 0x3d, 0x20, 0x30, 0x2e, 0x35, 
	0x29, 0x0a, 0x09, 0x09, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x3d, 
	0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x2d, 0x31, 0x2e, 0x30, 0x29, 
	0x3b, 0x09, 0x09, 0x2f, 0x2f, 0x20, 0x49, 0x66, 0x20, 0x6f, 0x75, 
	0x74, 0x20, 0x6f, 0x66, 0x20, 0x62, 0x6f, 0x75, 0x6e, 0x64, 0x73, 
	0x2c, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x61, 0x6e, 
	0x20, 0x69, 0x6e, 0x76, 0x61, 0x6c, 0x69, 0x64, 0x20, 0x76, 0x61, 
	0x6c, 0x75, 0x65, 0x2e, 0x0a, 0x09, 0x65, 0x6c, 0x73, 0x65, 0x0a, 
	0x09, 0x7b, 0x0a, 0x09, 0x09, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 
	0x2b, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x32, 0x28, 0x30, 0x2e, 0x35, 
	0x29, 0x3b, 0x0a, 0x09, 0x09, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 
	0x2f, 0x3d, 0x20, 0x73, 0x63, 0x72, 0x65, 0x65, 0x6e, 0x53, 0x63, 
	0x61, 0x6c, 0x65, 0x3b, 0x0a, 0x09, 0x7d, 0x0a, 0x0a, 0x09, 0x72, 
	0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 
	0x3b, 0x0a, 0x7d, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 
	0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x43, 0x61, 0x6c, 0x63, 
	0x53, 0x63, 0x61, 0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 0x69, 
	0x67, 0x68, 0x74, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, 
	0x69, 0x73, 0x74, 0x29, 0x0a, 0x7b, 0x0a, 0x09, 0x72, 0x65, 0x74, 
	0x75, 0x72, 0x6e, 0x20, 0x6d, 0x61, 0x78, 0x28, 0x31, 0x2e, 0x30, 
	0x2d, 0x64, 0x69, 0x73, 0x74, 0x2a, 0x64, 0x69, 0x73, 0x74, 0x2a, 
	0x53, 0x43, 0x41, 0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x5f, 0x57, 0x45, 
	0x49, 0x47, 0x48, 0x54, 0x2c, 0x20, 0x53, 0x43, 0x41, 0x4e, 0x4c, 
	0x49, 0x4e, 0x45, 0x5f, 0x47, 0x41, 0x50, 0x5f, 0x42, 0x52, 0x49, 
	0x47, 0x48, 0x54, 0x4e, 0x45, 0x53, 0x53, 0x29, 0x3b, 0x0a, 0x7d, 
	0x0a, 0x0a, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x43, 0x61, 0x6c, 
	0x63, 0x53, 0x63, 0x61, 0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x28, 0x66, 
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x64, 0x79, 0x29, 0x0a, 0x7b, 0x0a, 
	0x09, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x73, 0x63, 0x61, 0x6e, 
	0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 0x69, 0x67, 0x68, 0x74, 0x20, 
	0x3d, 0x20, 0x43, 0x61, 0x6c, 0x63, 0x53, 0x63, 0x61, 0x6e, 0x4c, 
	0x69, 0x6e, 0x65, 0x57, 0x65, 0x69, 0x67, 0x68, 0x74, 0x28, 0x64, 
	0x79, 0x29, 0x3b, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x64, 0x65, 0x66, 
	0x69, 0x6e, 0x65, 0x64, 0x28, 0x4d, 0x55, 0x4c, 0x54, 0x49, 0x53, 
	0x41, 0x4d, 0x50, 0x4c, 0x45, 0x29, 0x0a, 0x09, 0x73, 0x63, 0x61, 
	0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 0x69, 0x67, 0x68, 0x74, 
	0x20, 0x2b, 0x3d, 0x20, 0x43, 0x61, 0x6c, 0x63, 0x53, 0x63, 0x61, 
	0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 0x69, 0x67, 0x68, 0x74, 
	0x28, 0x64, 0x79, 0x2d, 0x66, 0x69, 0x6c, 0x74, 0x65, 0x72, 0x57, 
	0x69, 0x64, 0x74, 0x68, 0x29, 0x3b, 0x0a, 0x09, 0x73, 0x63, 0x61, 
	0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 0x69, 0x67, 0x68, 0x74, 
	0x20, 0x2b, 0x3d, 0x20, 0x43, 0x61, 0x6c, 0x63, 0x53, 0x63, 0x61, 
	0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 0x69, 0x67, 0x68, 0x74, 
	0x28, 0x64, 0x79, 0x2b, 0x66, 0x69, 0x6c, 0x74, 0x65, 0x72, 0x57, 
	0x69, 0x64, 0x74, 0x68, 0x29, 0x3b, 0x0a, 0x09, 0x73, 0x63, 0x61, 
	0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 0x69, 0x67, 0x68, 0x74, 
	0x20, 0x2a, 0x3d, 0x20, 0x30, 0x2e, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x33, 0x33, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 
	0x09, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x73, 0x63, 0x61, 
	0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 0x69, 0x67, 0x68, 0x74, 
	0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 
	0x61, 0x69, 0x6e, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x23, 0x69, 0x66, 
	0x20, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x64, 0x28, 0x43, 0x55, 
	0x52, 0x56, 0x41, 0x54, 0x55, 0x52, 0x45, 0x29, 0x0a, 0x09, 0x76, 
	0x65, 0x63, 0x32, 0x20, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 
	0x64, 0x20, 0x3d, 0x20, 0x44, 0x69, 0x73, 0x74, 0x6f, 0x72, 0x74, 
	0x28, 0x54, 0x45, 0x58, 0x30, 0x29, 0x3b, 0x0a, 0x09, 0x69, 0x66, 
	0x20, 0x28, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 
	0x78, 0x20, 0x3c, 0x20, 0x30, 0x2e, 0x30, 0x29, 0x0a, 0x09, 0x09, 
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 
	0x72, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x28, 0x30, 0x2e, 
	0x30, 0x29, 0x3b, 0x0a, 0x09, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x23, 
	0x65, 0x6c, 0x73, 0x65, 0x0a, 0x09, 0x76, 0x65, 0x63, 0x32, 0x20, 
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x3d, 0x20, 
	0x54, 0x45, 0x58, 0x30, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 
	0x66, 0x0a, 0x09, 0x7b, 0x0a, 0x09, 0x09, 0x76, 0x65, 0x63, 0x32, 
	0x20, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x49, 0x6e, 
	0x50, 0x69, 0x78, 0x65, 0x6c, 0x73, 0x20, 0x3d, 0x20, 0x74, 0x65, 
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x2a, 0x20, 0x54, 0x65, 
	0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x3b, 0x0a, 
	0x23, 0x69, 0x66, 0x20, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x64, 
	0x28, 0x53, 0x48, 0x41, 0x52, 0x50, 0x45, 0x52, 0x29, 0x0a, 0x09, 
	0x09, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x43, 
	0x6f, 0x6f, 0x72, 0x64, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x6f, 
	0x72, 0x28, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x49, 
	0x6e, 0x50, 0x69, 0x78, 0x65, 0x6c, 0x73, 0x29, 0x20, 0x2b, 0x20, 
	0x30, 0x2e, 0x35, 0x3b, 0x0a, 0x09, 0x09, 0x76, 0x65, 0x63, 0x32, 
	0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x3d, 0x20, 0x74, 0x65, 
	0x6d, 0x70, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x2f, 0x20, 0x54, 
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 0x3b, 
	0x0a, 0x09, 0x09, 0x76, 0x65, 0x63, 0x32, 0x20, 0x64, 0x65, 0x6c, 
	0x74, 0x61, 0x73, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x63, 0x6f, 
	0x6f, 0x72, 0x64, 0x49, 0x6e, 0x50, 0x69, 0x78, 0x65, 0x6c, 0x73, 
	0x20, 0x2d, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x43, 0x6f, 0x6f, 0x72, 
	0x64, 0x3b, 0x0a, 0x09, 0x09, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 
	0x73, 0x63, 0x61, 0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 0x69, 
	0x67, 0x68, 0x74, 0x20, 0x3d, 0x20, 0x43, 0x61, 0x6c, 0x63, 0x53, 
	0x63, 0x61, 0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x28, 0x64, 0x65, 0x6c, 
	0x74, 0x61, 0x73, 0x2e, 0x79, 0x29, 0x3b, 0x0a, 0x09, 0x09, 0x76, 
	0x65, 0x63, 0x32, 0x20, 0x73, 0x69, 0x67, 0x6e, 0x73, 0x20, 0x3d, 
	0x20, 0x73, 0x69, 0x67, 0x6e, 0x28, 0x64, 0x65, 0x6c, 0x74, 0x61, 
	0x73, 0x29, 0x3b, 0x0a, 0x09, 0x09, 0x64, 0x65, 0x6c, 0x74, 0x61, 
	0x73, 0x2e, 0x78, 0x20, 0x2a, 0x3d, 0x20, 0x32, 0x2e, 0x30, 0x3b, 
	0x0a, 0x09, 0x09, 0x64, 0x65, 0x6c, 0x74, 0x61, 0x73, 0x20, 0x3d, 
	0x20, 0x64, 0x65, 0x6c, 0x74, 0x61, 0x73, 0x20, 0x2a, 0x20, 0x64, 
	0x65, 0x6c, 0x74, 0x61, 0x73, 0x3b, 0x0a, 0x09, 0x09, 0x64, 0x65, 
	0x6c, 0x74, 0x61, 0x73, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x64, 0x65, 
	0x6c, 0x74, 0x61, 0x73, 0x2e, 0x79, 0x20, 0x2a, 0x20, 0x64, 0x65, 
	0x6c, 0x74, 0x61, 0x73, 0x2e, 0x79, 0x3b, 0x0a, 0x09, 0x09, 0x64, 
	0x65, 0x6c, 0x74, 0x61, 0x73, 0x2e, 0x78, 0x20, 0x2a, 0x3d, 0x20, 
	0x30, 0x2e, 0x35, 0x3b, 0x0a, 0x09, 0x09, 0x64, 0x65, 0x6c, 0x74, 
	0x61, 0x73, 0x2e, 0x79, 0x20, 0x2a, 0x3d, 0x20, 0x38, 0x2e, 0x30, 
	0x3b, 0x0a, 0x09, 0x09, 0x64, 0x65, 0x6c, 0x74, 0x61, 0x73, 0x20, 
	0x2f, 0x3d, 0x20, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 
	0x69, 0x7a, 0x65, 0x3b, 0x0a, 0x09, 0x09, 0x64, 0x65, 0x6c, 0x74, 
	0x61, 0x73, 0x20, 0x2a, 0x3d, 0x20, 0x73, 0x69, 0x67, 0x6e, 0x73, 
	0x3b, 0x0a, 0x09, 0x09, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x63, 
	0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x20, 0x2b, 0x20, 
	0x64, 0x65, 0x6c, 0x74, 0x61, 0x73, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 
	0x73, 0x65, 0x0a, 0x09, 0x09, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 
	0x74, 0x65, 0x6d, 0x70, 0x59, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 
	0x6f, 0x72, 0x28, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 
	0x49, 0x6e, 0x50, 0x69, 0x78, 0x65, 0x6c, 0x73, 0x2e, 0x79, 0x29, 
	0x20, 0x2b, 0x20, 0x30, 0x2e, 0x35, 0x3b, 0x0a, 0x09, 0x09, 0x66, 
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x79, 0x43, 0x6f, 0x6f, 0x72, 0x64, 
	0x20, 0x3d, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x59, 0x20, 0x2f, 0x20, 
	0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 
	0x2e, 0x79, 0x3b, 0x0a, 0x09, 0x09, 0x66, 0x6c, 0x6f, 0x61, 0x74, 
	0x20, 0x64, 0x79, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x63, 0x6f, 
	0x6f, 0x72, 0x64, 0x49, 0x6e, 0x50, 0x69, 0x78, 0x65, 0x6c, 0x73, 
	0x2e, 0x79, 0x20, 0x2d, 0x20, 0x74, 0x65, 0x6d, 0x70, 0x59, 0x3b, 
	0x0a, 0x09, 0x09, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x73, 0x63, 
	0x61, 0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 0x69, 0x67, 0x68, 
	0x74, 0x20, 0x3d, 0x20, 0x43, 0x61, 0x6c, 0x63, 0x53, 0x63, 0x61, 
	0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x28, 0x64, 0x79, 0x29, 0x3b, 0x0a, 
	0x09, 0x09, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x73, 0x69, 0x67, 
	0x6e, 0x59, 0x20, 0x3d, 0x20, 0x73, 0x69, 0x67, 0x6e, 0x28, 0x64, 
	0x79, 0x29, 0x3b, 0x0a, 0x09, 0x09, 0x64, 0x79, 0x20, 0x3d, 0x20, 
	0x64, 0x79, 0x20, 0x2a, 0x20, 0x64, 0x79, 0x3b, 0x0a, 0x09, 0x09, 
	0x64, 0x79, 0x20, 0x3d, 0x20, 0x64, 0x79, 0x20, 0x2a, 0x20, 0x64, 
	0x79, 0x3b, 0x0a, 0x09, 0x09, 0x64, 0x79, 0x20, 0x2a, 0x3d, 0x20, 
	0x38, 0x2e, 0x30, 0x3b, 0x0a, 0x09, 0x09, 0x64, 0x79, 0x20, 0x2f, 
	0x3d, 0x20, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 
	0x7a, 0x65, 0x2e, 0x79, 0x3b, 0x0a, 0x09, 0x09, 0x64, 0x79, 0x20, 
	0x2a, 0x3d, 0x20, 0x73, 0x69, 0x67, 0x6e, 0x59, 0x3b, 0x0a, 0x09, 
	0x09, 0x76, 0x65, 0x63, 0x32, 0x20, 0x74, 0x63, 0x20, 0x3d, 0x20, 
	0x76, 0x65, 0x63, 0x32, 0x28, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 
	0x72, 0x64, 0x2e, 0x78, 0x2c, 0x20, 0x79, 0x43, 0x6f, 0x6f, 0x72, 
	0x64, 0x20, 0x2b, 0x20, 0x64, 0x79, 0x29, 0x3b, 0x0a, 0x23, 0x65, 
	0x6e, 0x64, 0x69, 0x66, 0x0a, 0x0a, 0x09, 0x09, 0x76, 0x65, 0x63, 
	0x33, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x75, 0x72, 0x20, 0x3d, 0x20, 
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x28, 0x54, 
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x74, 0x63, 0x29, 
	0x2e, 0x72, 0x67, 0x62, 0x3b, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x20, 
	0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x64, 0x28, 0x53, 0x43, 0x41, 
	0x4e, 0x4c, 0x49, 0x4e, 0x45, 0x53, 0x29, 0x0a, 0x23, 0x69, 0x66, 
	0x20, 0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x64, 0x28, 0x47, 0x41, 
	0x4d, 0x4d, 0x41, 0x29, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x64, 0x65, 
	0x66, 0x69, 0x6e, 0x65, 0x64, 0x28, 0x46, 0x41, 0x4b, 0x45, 0x5f, 
	0x47, 0x41, 0x4d, 0x4d, 0x41, 0x29, 0x0a, 0x09, 0x09, 0x63, 0x6f, 
	0x6c, 0x6f, 0x75, 0x72, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 
	0x75, 0x72, 0x20, 0x2a, 0x20, 0x63, 0x6f, 0x6c, 0x6f, 0x75, 0x72, 
	0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73, 0x65, 0x0a, 0x09, 0x09, 0x63, 
	0x6f, 0x6c, 0x6f, 0x75, 0x72, 0x20, 0x3d, 0x20, 0x70, 0x6f, 0x77, 
	0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x75, 0x72, 0x2c, 0x20, 0x76, 0x65, 
	0x63, 0x33, 0x28, 0x49, 0x4e, 0x50, 0x55, 0x54, 0x5f, 0x47, 0x41, 
	0x4d, 0x4d, 0x41, 0x29, 0x29, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 
	0x69, 0x66, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x09, 
	0x09, 0x73, 0x63, 0x61, 0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 
	0x69, 0x67, 0x68, 0x74, 0x20, 0x2a, 0x3d, 0x20, 0x42, 0x4c, 0x4f, 
	0x4f, 0x4d, 0x5f, 0x46, 0x41, 0x43, 0x54, 0x4f, 0x52, 0x3b, 0x0a, 
	0x09, 0x09, 0x63, 0x6f, 0x6c, 0x6f, 0x75, 0x72, 0x20, 0x2a, 0x3d, 
	0x20, 0x73, 0x63, 0x61, 0x6e, 0x4c, 0x69, 0x6e, 0x65, 0x57, 0x65, 
	0x69, 0x67, 0x68, 0x74, 0x3b, 0x0a, 0x0a, 0x23, 0x69, 0x66, 0x20, 
	0x64, 0x65, 0x66, 0x69, 0x6e, 0x65, 0x64, 0x28, 0x47, 0x41, 0x4d, 
	0x4d, 0x41, 0x29, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x64, 0x65, 0x66, 
	0x69, 0x6e, 0x65, 0x64, 0x28, 0x46, 0x41, 0x4b, 0x45, 0x5f, 0x47, 
	0x41, 0x4d, 0x4d, 0x41, 0x29, 0x0a, 0x09, 0x09, 0x63, 0x6f, 0x6c, 
	0x6f, 0x75, 0x72, 0x20, 0x3d, 0x20, 0x73, 0x71, 0x72, 0x74, 0x28, 
	0x63, 0x6f, 0x6c, 0x6f, 0x75, 0x72, 0x29, 0x3b, 0x0a, 0x23, 0x65, 
	0x6c, 0x73, 0x65, 0x0a, 0x09, 0x09, 0x63, 0x6f, 0x6c, 0x6f, 0x75, 
	0x72, 0x20, 0x3d, 0x20, 0x70, 0x6f, 0x77, 0x28, 0x63, 0x6f, 0x6c, 
	0x6f, 0x75, 0x72, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31, 
	0x2e, 0x30, 0x2f, 0x4f, 0x55, 0x54, 0x50, 0x55, 0x54, 0x5f, 0x47, 
	0x41, 0x4d, 0x4d, 0x41, 0x29, 0x29, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 
	0x64, 0x69, 0x66, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 
	0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x23, 0x69, 0x66, 0x20, 
	0x4d, 0x41, 0x53, 0x4b, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x20, 0x3d, 
	0x3d, 0x20, 0x30, 0x0a, 0x09, 0x09, 0x67, 0x6c, 0x5f, 0x46, 0x72, 
	0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 
	0x65, 0x63, 0x34, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x75, 0x72, 0x2c, 
	0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x73, 
	0x65, 0x0a, 0x23, 0x69, 0x66, 0x20, 0x4d, 0x41, 0x53, 0x4b, 0x5f, 
	0x54, 0x59, 0x50, 0x45, 0x20, 0x3d, 0x3d, 0x20, 0x31, 0x0a, 0x09, 
	0x09, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x77, 0x68, 0x69, 0x63, 
	0x68, 0x4d, 0x61, 0x73, 0x6b, 0x20, 0x3d, 0x20, 0x66, 0x72, 0x61, 
	0x63, 0x74, 0x28, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 
	0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x30, 0x2e, 
	0x35, 0x29, 0x3b, 0x0a, 0x09, 0x09, 0x76, 0x65, 0x63, 0x33, 0x20, 
	0x6d, 0x61, 0x73, 0x6b, 0x3b, 0x0a, 0x09, 0x09, 0x69, 0x66, 0x20, 
	0x28, 0x77, 0x68, 0x69, 0x63, 0x68, 0x4d, 0x61, 0x73, 0x6b, 0x20, 
	0x3c, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x0a, 0x09, 0x09, 0x09, 0x6d, 
	0x61, 0x73, 0x6b, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 
	0x4d, 0x41, 0x53, 0x4b, 0x5f, 0x42, 0x52, 0x49, 0x47, 0x48, 0x54, 
	0x4e, 0x45, 0x53, 0x53, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x2c, 0x20, 
	0x4d, 0x41, 0x53, 0x4b, 0x5f, 0x42, 0x52, 0x49, 0x47, 0x48, 0x54, 
	0x4e, 0x45, 0x53, 0x53, 0x29, 0x3b, 0x0a, 0x09, 0x09, 0x65, 0x6c, 
	0x73, 0x65, 0x0a, 0x09, 0x09, 0x09, 0x6d, 0x61, 0x73, 0x6b, 0x20, 
	0x3d, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31, 0x2e, 0x30, 0x2c, 
	0x20, 0x4d, 0x41, 0x53, 0x4b, 0x5f, 0x42, 0x52, 0x49, 0x47, 0x48, 
	0x54, 0x4e, 0x45, 0x53, 0x53, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 
	0x3b, 0x0a, 0x23, 0x65, 0x6c, 0x69, 0x66, 0x20, 0x4d, 0x41, 0x53, 
	0x4b, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x20, 0x3d, 0x3d, 0x20, 0x32, 
	0x0a, 0x09, 0x09, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x77, 0x68, 
	0x69, 0x63, 0x68, 0x4d, 0x61, 0x73, 0x6b, 0x20, 0x3d, 0x20, 0x66, 
	0x72, 0x61, 0x63, 0x74, 0x28, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 
	0x67, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x2e, 0x78, 0x20, 0x2a, 0x20, 
	0x30, 0x2e, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x29, 0x3b, 
	0x0a, 0x09, 0x09, 0x76, 0x65, 0x63, 0x33, 0x20, 0x6d, 0x61, 0x73, 
	0x6b, 0x20, 0x3d, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x4d, 0x41, 
	0x53, 0x4b, 0x5f, 0x42, 0x52, 0x49, 0x47, 0x48, 0x54, 0x4e, 0x45, 
	0x53, 0x53, 0x2c, 0x20, 0x4d, 0x41, 0x53, 0x4b, 0x5f, 0x42, 0x52, 
	0x49, 0x47, 0x48, 0x54, 0x4e, 0x45, 0x53, 0x53, 0x2c, 0x20, 0x4d, 
	0x41, 0x53, 0x4b, 0x5f, 0x42, 0x52, 0x49, 0x47, 0x48, 0x54, 0x4e, 
	0x45, 0x53, 0x53, 0x29, 0x3b, 0x0a, 0x09, 0x09, 0x69, 0x66, 0x20, 
	0x28, 0x77, 0x68, 0x69, 0x63, 0x68, 0x4d, 0x61, 0x73, 0x6b, 0x20, 
	0x3c, 0x20, 0x30, 0x2e, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
	0x29, 0x0a, 0x09, 0x09, 0x09, 0x6d, 0x61, 0x73, 0x6b, 0x2e, 0x78, 
	0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x09, 0x09, 0x65, 
	0x6c, 0x73, 0x65, 0x20, 0x69, 0x66, 0x20, 0x28, 0x77, 0x68, 0x69, 
	0x63, 0x68, 0x4d, 0x61, 0x73, 0x6b, 0x20, 0x3c, 0x20, 0x30, 0x2e, 
	0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x29, 0x0a, 0x09, 0x09, 
	0x09, 0x6d, 0x61, 0x73, 0x6b, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x31, 
	0x2e, 0x30, 0x3b, 0x0a, 0x09, 0x09, 0x65, 0x6c, 0x73, 0x65, 0x0a, 
	0x09, 0x09, 0x09, 0x6d, 0x61, 0x73, 0x6b, 0x2e, 0x7a, 0x20, 0x3d, 
	0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 
	0x66, 0x0a, 0x0a, 0x09, 0x09, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 
	0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x76, 0x65, 
	0x63, 0x34, 0x28, 0x63, 0x6f, 0x6c, 0x6f, 0x75, 0x72, 0x20, 0x2a, 
	0x20, 0x6d, 0x61, 0x73, 0x6b, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 
	0x3b, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x09, 0x7d, 
	0x0a, 0x7d, 0x0a, 0x23, 0x65, 0x6e, 0x64, 0x69, 0x66, 0x0a, 0x34, 
	0x04, 0x00, 0x00, 0x00, 0x04, 0xef, 0xbe, 0x1d, 0x76, 0x60, 0xcb, 
	0x26, 0x0c, 0xe6, 0x6d, 0x01, 0x01, 0x00, 0x02, 0x7c, 0x02, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x68, 0x64, 0x72, 0x07, 
	0x00, 0x02, 0x00, 0x02, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x1c, 0x02, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 
	0x00, 0xff, 0xff, 0xff, 0xff, 0x83, 0x00, 0x0c, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x02, 
	0x01, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 
	0x00, 0x02, 0x00, 0x00, 0x00, 0x1b, 0x01, 0x02, 0x00, 0x00, 0x00, 
	0x04, 0x03, 0x01, 0x00, 0x0c, 0x00, 0x02, 0x00, 0x10, 0x00, 0x0f, 
	0x00, 0x10, 0x00, 0xff, 0x03, 0xeb, 0xbe, 0x3f, 0x00, 0x00, 0x00, 
	0x7e, 0x04, 0x94, 0xbe, 0x7e, 0x0a, 0xfe, 0xbe, 0x10, 0x03, 0xfc, 
	0xbe, 0x00, 0x03, 0x80, 0xc0, 0x7f, 0x00, 0x8c, 0xbf, 0x05, 0x01, 
	0x08, 0xc2, 0x00, 0x01, 0x0c, 0xc8, 0x01, 0x01, 0x0d, 0xc8, 0x7f, 
	0x00, 0x8c, 0xbf, 0x10, 0x06, 0x08, 0x10, 0x04, 0x49, 0x08, 0x7e, 
	0xf0, 0x08, 0x08, 0x06, 0x03, 0x00, 0x82, 0xd2, 0x10, 0x06, 0x12, 
	0x84, 0x03, 0x07, 0x0a, 0x10, 0x12, 0x00, 0x08, 0xd0, 0x03, 0x01, 
	0x01, 0x00, 0x80, 0x06, 0x08, 0x7c, 0x05, 0x0b, 0x0c, 0x10, 0x10, 
	0x54, 0x0e, 0x7e, 0x08, 0x00, 0x00, 0xd2, 0x80, 0xe4, 0x49, 0x00, 
	0x09, 0x00, 0x00, 0xd2, 0x80, 0xe4, 0xa9, 0x01, 0xff, 0x0c, 0x0c, 
	0x10, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x28, 0xc8, 0x04, 0x0f, 
	0x08, 0x10, 0x08, 0x13, 0x10, 0x08, 0x06, 0x0f, 0x0c, 0x10, 0x01, 
	0x00, 0x29, 0xc8, 0x0b, 0x00, 0x82, 0xd2, 0x06, 0x11, 0x12, 0x04, 
	0x00, 0x07, 0x80, 0xf0, 0x0a, 0x06, 0x61, 0x00, 0x00, 0x04, 0x00, 
	0xc8, 0x01, 0x04, 0x01, 0xc8, 0x03, 0x01, 0x02, 0x08, 0x00, 0x01, 
	0x00, 0xc2, 0xff, 0x03, 0x81, 0xbe, 0x00, 0x00, 0xc0, 0x40, 0x01, 
	0x03, 0x02, 0x10, 0x03, 0x01, 0x00, 0x06, 0x03, 0x00, 0x82, 0xd2, 
	0x05, 0x03, 0xc8, 0x23, 0x01, 0x00, 0x82, 0xd2, 0x01, 0x03, 0xc8, 
	0x23, 0x00, 0x01, 0x00, 0x10, 0xff, 0x06, 0x06, 0x20, 0x8f, 0xc2, 
	0xf5, 0x3d, 0xff, 0x02, 0x02, 0x20, 0x8f, 0xc2, 0xf5, 0x3d, 0x00, 
	0x00, 0x82, 0xd2, 0x00, 0x03, 0xc8, 0x23, 0x03, 0x03, 0x02, 0x06, 
	0xff, 0x00, 0x00, 0x20, 0x8f, 0xc2, 0xf5, 0x3d, 0x70, 0x0f, 0x8c, 
	0xbf, 0x03, 0x01, 0x4e, 0xd3, 0x06, 0x01, 0x00, 0x00, 0x04, 0x01, 
	0x4e, 0xd3, 0x07, 0x01, 0x00, 0x00, 0x05, 0x01, 0x4e, 0xd3, 0x08, 
	0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x06, 0xff, 0x06, 0x02, 0x10, 
	0x9a, 0x99, 0x19, 0x40, 0xff, 0x08, 0x06, 0x10, 0x9a, 0x99, 0x19, 
	0x40, 0xff, 0x0a, 0x08, 0x10, 0x9a, 0x99, 0x19, 0x40, 0x01, 0x4b, 
	0x02, 0x7e, 0x03, 0x4b, 0x06, 0x7e, 0x04, 0x4b, 0x08, 0x7e, 0xff, 
	0x00, 0x00, 0x10, 0xff, 0xff, 0xff, 0x3e, 0x7f, 0x00, 0x8c, 0xbf, 
	0x02, 0x00, 0x06, 0xd2, 0x02, 0x01, 0x00, 0x18, 0x01, 0x01, 0x02, 
	0x10, 0x03, 0x01, 0x06, 0x10, 0x04, 0x01, 0x00, 0x10, 0x02, 0x49, 
	0x08, 0x7e, 0x01, 0x01, 0x4e, 0xd3, 0x01, 0x01, 0x00, 0x00, 0x03, 
	0x01, 0x4e, 0xd3, 0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x4e, 0xd3, 
	0x00, 0x01, 0x00, 0x00, 0x02, 0x09, 0x04, 0x08, 0xff, 0x02, 0x02, 
	0x10, 0x2e, 0xba, 0xe8, 0x3e, 0xff, 0x06, 0x06, 0x10, 0x2e, 0xba, 
	0xe8, 0x3e, 0xff, 0x00, 0x00, 0x10, 0x2e, 0xba, 0xe8, 0x3e, 0xf0, 
	0x04, 0x08, 0x7c, 0xff, 0x02, 0x04, 0x7e, 0x33, 0x33, 0x33, 0x3f, 
	0x04, 0x00, 0x00, 0xd2, 0x02, 0xe5, 0xa9, 0x01, 0xf2, 0x04, 0x04, 
	0x00, 0x01, 0x4b, 0x02, 0x7e, 0x03, 0x4b, 0x06, 0x7e, 0x00, 0x4b, 
	0x00, 0x7e, 0x02, 0x03, 0x02, 0x10, 0x04, 0x07, 0x06, 0x10, 0x02, 
	0x01, 0x00, 0x10, 0xf2, 0x02, 0x04, 0x7e, 0x14, 0x04, 0xfe, 0xbe, 
	0x01, 0x07, 0x02, 0x5e, 0x00, 0x05, 0x00, 0x5e, 0x0f, 0x1c, 0x00, 
	0xf8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0xbf, 0x6a, 0x08, 
	0x00, 0x04, 0x00, 0x51, 0x41, 0x00, 0xcd, 0xe8, 0x01, 0x00, 0x0c, 
	0x00, 0x00, 0x00, 0x1b, 0x01, 0x02, 0x00, 0x00, 0x00, 0x04, 0x03, 
	0x01, 0x00, 0x0c, 0x00, 0x02, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x00, 0x00, 0x00, 0xef, 0xbe, 0x00, 0x00, 0x4f, 0x72, 
	0x62, 0x53, 0x68, 0x64, 0x72, 0x07, 0x41, 0xd4, 0x01, 0x00, 0x03, 
	0x04, 0x0c, 0x03, 0x1d, 0x76, 0x60, 0xcb, 0x26, 0x0c, 0xe6, 0x6d, 
	0xb4, 0xa6, 0x89, 0x85, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 
	0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x03, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x16, 0x04, 
	0x6a, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd4, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x03, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc2, 0x00, 
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0x00, 0x00, 
	0x00, 0x03, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 
	0xa6, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x03, 0x10, 0x00, 0x00, 
	0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 
	0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7a, 
	0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x01, 0x24, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 
	0x00, 0x00, 0x24, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x75, 0x00, 
	0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x03, 0x2e, 0x00, 0x04, 0x00, 
	0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 
	0x03, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7a, 0x00, 0x00, 
	0x00, 0x42, 0x00, 0x00, 0x00, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 
	0x65, 0x00, 0x5f, 0x5f, 0x47, 0x4c, 0x4f, 0x42, 0x41, 0x4c, 0x5f, 
	0x43, 0x42, 0x5f, 0x5f, 0x00, 0x5f, 0x5f, 0x43, 0x4f, 0x4e, 0x53, 
	0x54, 0x5f, 0x47, 0x4c, 0x5f, 0x46, 0x52, 0x41, 0x47, 0x43, 0x4f, 
	0x4f, 0x52, 0x44, 0x5f, 0x42, 0x49, 0x41, 0x53, 0x5f, 0x5f, 0x00, 
	0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x69, 0x7a, 0x65, 
	0x00, 0x28, 0x6e, 0x6f, 0x5f, 0x6e, 0x61, 0x6d, 0x65, 0x29, 0x00, 
	0x54, 0x45, 0x58, 0x30, 0x00, 0x66, 0x69, 0x6c, 0x74, 0x65, 0x72, 
	0x57, 0x69, 0x64, 0x74, 0x68, 0x00, 0x46, 0x49, 0x4c, 0x54, 0x45, 
	0x52, 0x57, 0x49, 0x44, 0x54, 0x48, 0x00, 0x67, 0x6c, 0x5f, 0x46, 
	0x72, 0x61, 0x67, 0x43, 0x6f, 0x6f, 0x72, 0x64, 0x00, 0x67, 0x6c, 
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 
	0x00
};

