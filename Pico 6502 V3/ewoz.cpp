// 
// Author: Rien Matthijsse
// 

#include "ewoz.h"

uint8_t ewoz_bin[] = {
	0x20, 0xfc, 0x50, 0xfe, 0x47, 0xfc, 0x60, 0xfd, 0x46, 0xfd, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd8, 0x58, 0xa2, 0xff, 0x9a, 0xa0, 0x7f, 0x8c, 0x12, 0xd0, 0xa9, 0xa7, 0x8d, 0x11, 0xd0, 0x8d,
	0x13, 0xd0, 0xa9, 0x0d, 0x20, 0x46, 0xfd, 0xa9, 0xa2, 0x85, 0x2c, 0xa9, 0xfe, 0x85, 0x2d, 0x20, 0x53, 0xfd, 0xa9, 0x0d, 0x20, 0x46, 0xfd, 0xa9,
	0x9b, 0xc9, 0x88, 0xf0, 0x13, 0xc9, 0x9b, 0xf0, 0x03, 0xc8, 0x10, 0x19, 0xa9, 0xdc, 0x20, 0x46, 0xfd, 0xa9, 0x8d, 0x20, 0x46, 0xfd, 0xa0, 0x01,
	0x88, 0x30, 0xf6, 0xa9, 0xa0, 0x20, 0x46, 0xfd, 0xa9, 0x88, 0x20, 0x46, 0xfd, 0xad, 0x11, 0xd0, 0x10, 0xfb, 0xad, 0x10, 0xd0, 0x99, 0x00, 0x02,
	0x20, 0x46, 0xfd, 0xc9, 0x8d, 0xd0, 0xca, 0xa0, 0xff, 0xa9, 0x00, 0xaa, 0x0a, 0x85, 0x2b, 0xc8, 0xb9, 0x00, 0x02, 0xc9, 0x8d, 0xf0, 0xca, 0xc9,
	0xae, 0x90, 0xf4, 0xf0, 0xf0, 0xc9, 0xba, 0xf0, 0xeb, 0xc9, 0xd2, 0xf0, 0x31, 0xc9, 0xcc, 0xf0, 0x36, 0x86, 0x28, 0x86, 0x29, 0x84, 0x2a, 0xb9,
	0x00, 0x02, 0x49, 0xb0, 0xc9, 0x0a, 0x90, 0x06, 0x69, 0x88, 0xc9, 0xfa, 0x90, 0x11, 0x0a, 0x0a, 0x0a, 0x0a, 0xa2, 0x04, 0x0a, 0x26, 0x28, 0x26,
	0x29, 0xca, 0xd0, 0xf8, 0xc8, 0xd0, 0xe0, 0xc4, 0x2a, 0xd0, 0x12, 0x4c, 0x54, 0xfc, 0x20, 0xd4, 0xfc, 0x4c, 0x47, 0xfc, 0x6c, 0x24, 0x00, 0x20,
	0x69, 0xfd, 0x4c, 0x47, 0xfc, 0x24, 0x2b, 0x50, 0x0d, 0xa5, 0x28, 0x81, 0x26, 0xe6, 0x26, 0xd0, 0x9f, 0xe6, 0x27, 0x4c, 0x88, 0xfc, 0x30, 0x2b,
	0xa2, 0x02, 0xb5, 0x27, 0x95, 0x25, 0x95, 0x23, 0xca, 0xd0, 0xf7, 0xd0, 0x14, 0xa9, 0x8d, 0x20, 0x46, 0xfd, 0xa5, 0x25, 0x20, 0x33, 0xfd, 0xa5,
	0x24, 0x20, 0x33, 0xfd, 0xa9, 0xba, 0x20, 0x46, 0xfd, 0xa9, 0xa0, 0x20, 0x46, 0xfd, 0xa1, 0x24, 0x20, 0x33, 0xfd, 0x86, 0x2b, 0xa5, 0x24, 0xc5,
	0x28, 0xa5, 0x25, 0xe5, 0x29, 0xb0, 0xc4, 0xe6, 0x24, 0xd0, 0x02, 0xe6, 0x25, 0xa5, 0x24, 0x29, 0x0f, 0x10, 0xc8, 0x48, 0x4a, 0x4a, 0x4a, 0x4a,
	0x20, 0x3c, 0xfd, 0x68, 0x29, 0x0f, 0x09, 0xb0, 0xc9, 0xba, 0x90, 0x02, 0x69, 0x06, 0x48, 0x29, 0x7f, 0x2c, 0x12, 0xd0, 0x30, 0xfb, 0x8d, 0x12,
	0xd0, 0x68, 0x60, 0xa0, 0x00, 0xb1, 0x2c, 0xf0, 0x06, 0x20, 0x46, 0xfd, 0xc8, 0xd0, 0xf6, 0x60, 0xad, 0x11, 0xd0, 0x10, 0xfb, 0xad, 0x10, 0xd0,
	0x60, 0xa9, 0x0d, 0x20, 0x46, 0xfd, 0xa9, 0xb7, 0x85, 0x2c, 0xa9, 0xfe, 0x85, 0x2d, 0x20, 0x53, 0xfd, 0xa9, 0x0d, 0x20, 0x46, 0xfd, 0xa0, 0x00,
	0x84, 0x30, 0x20, 0x47, 0xfe, 0x99, 0x00, 0x02, 0xc8, 0xc9, 0x1b, 0xf0, 0x67, 0xc9, 0x0d, 0xd0, 0xf1, 0xa0, 0xff, 0xc8, 0xb9, 0x00, 0x02, 0xc9,
	0x3a, 0xd0, 0xf8, 0xc8, 0xa2, 0x00, 0x86, 0x2f, 0x20, 0x24, 0xfe, 0x85, 0x2e, 0x18, 0x65, 0x2f, 0x85, 0x2f, 0x20, 0x24, 0xfe, 0x85, 0x27, 0x18,
	0x65, 0x2f, 0x85, 0x2f, 0x20, 0x24, 0xfe, 0x85, 0x26, 0x18, 0x65, 0x2f, 0x85, 0x2f, 0xa9, 0x2e, 0x20, 0x46, 0xfd, 0x20, 0x24, 0xfe, 0xc9, 0x01,
	0xf0, 0x2a, 0x18, 0x65, 0x2f, 0x85, 0x2f, 0x20, 0x24, 0xfe, 0x81, 0x26, 0x18, 0x65, 0x2f, 0x85, 0x2f, 0xe6, 0x26, 0xd0, 0x02, 0xe6, 0x27, 0xc6,
	0x2e, 0xd0, 0xec, 0x20, 0x24, 0xfe, 0xa0, 0x00, 0x18, 0x65, 0x2f, 0xf0, 0x95, 0xa9, 0x01, 0x85, 0x30, 0x4c, 0x82, 0xfd, 0xa5, 0x30, 0xf0, 0x16,
	0xa9, 0x0d, 0x20, 0x46, 0xfd, 0xa9, 0xf3, 0x85, 0x2c, 0xa9, 0xfe, 0x85, 0x2d, 0x20, 0x53, 0xfd, 0xa9, 0x0d, 0x20, 0x46, 0xfd, 0x60, 0xa9, 0x0d,
	0x20, 0x46, 0xfd, 0xa9, 0xdc, 0x85, 0x2c, 0xa9, 0xfe, 0x85, 0x2d, 0x20, 0x53, 0xfd, 0xa9, 0x0d, 0x20, 0x46, 0xfd, 0x60, 0xb9, 0x00, 0x02, 0x49,
	0x30, 0xc9, 0x0a, 0x90, 0x02, 0x69, 0x08, 0x0a, 0x0a, 0x0a, 0x0a, 0x85, 0x28, 0xc8, 0xb9, 0x00, 0x02, 0x49, 0x30, 0xc9, 0x0a, 0x90, 0x02, 0x69,
	0x08, 0x29, 0x0f, 0x05, 0x28, 0xc8, 0x60, 0xad, 0x11, 0xd0, 0x10, 0xfb, 0xad, 0x10, 0xd0, 0x60, 0x85, 0x43, 0x86, 0x44, 0x84, 0x45, 0x68, 0x85,
	0x42, 0x68, 0x85, 0x41, 0x68, 0x85, 0x40, 0xd8, 0xba, 0x86, 0x46, 0x58, 0xa9, 0x0d, 0x20, 0x46, 0xfd, 0xa9, 0x1b, 0x85, 0x2c, 0xa9, 0xff, 0x85,
	0x2d, 0x20, 0x53, 0xfd, 0xa9, 0x0d, 0x20, 0x46, 0xfd, 0xa9, 0x20, 0x20, 0x46, 0xfd, 0xa5, 0x40, 0x20, 0x33, 0xfd, 0xa5, 0x41, 0x20, 0x33, 0xfd,
	0xa0, 0x01, 0xa9, 0x20, 0x20, 0x46, 0xfd, 0xb9, 0x41, 0x00, 0x20, 0x33, 0xfd, 0xc8, 0xc0, 0x06, 0x90, 0xf0, 0xa9, 0x0d, 0x20, 0x46, 0xfd, 0x4c,
	0x47, 0xfc, 0x57, 0x65, 0x6c, 0x63, 0x6f, 0x6d, 0x65, 0x20, 0x74, 0x6f, 0x20, 0x45, 0x57, 0x4f, 0x5a, 0x20, 0x31, 0x2e, 0x32, 0x2e, 0x00, 0x53,
	0x74, 0x61, 0x72, 0x74, 0x20, 0x49, 0x6e, 0x74, 0x65, 0x6c, 0x20, 0x48, 0x65, 0x78, 0x20, 0x63, 0x6f, 0x64, 0x65, 0x20, 0x54, 0x72, 0x61, 0x6e,
	0x73, 0x66, 0x65, 0x72, 0x20, 0x28, 0x54, 0x42, 0x49, 0x29, 0x2e, 0x00, 0x49, 0x6e, 0x74, 0x65, 0x6c, 0x20, 0x48, 0x65, 0x78, 0x20, 0x49, 0x6d,
	0x70, 0x6f, 0x72, 0x74, 0x65, 0x64, 0x20, 0x4f, 0x4b, 0x2e, 0x00, 0x49, 0x6e, 0x74, 0x65, 0x6c, 0x20, 0x48, 0x65, 0x78, 0x20, 0x49, 0x6d, 0x70,
	0x6f, 0x72, 0x74, 0x65, 0x64, 0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x63, 0x68, 0x65, 0x63, 0x6b, 0x73, 0x75, 0x6d, 0x20, 0x65, 0x72, 0x72, 0x6f,
	0x72, 0x2e, 0x00, 0x20, 0x20, 0x50, 0x43, 0x20, 0x20, 0x53, 0x52, 0x20, 0x41, 0x43, 0x20, 0x58, 0x52, 0x20, 0x59, 0x52, 0x20, 0x53, 0x50, 0x00,
};
