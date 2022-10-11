// SPDX-License-Identifier: GPL-2.0
#include <linux/font.h>
#include <linux/module.h>

#define FONTDATAMAX 16384

static const struct font_data fontdata_lemon = {
	{ 0, 0, FONTDATAMAX, 0 }, {
   0x2b, 0xbf, 0x18, 0xde, 0x93, 0xc9, 0xb1, 0x5e, 
   0xdf, 0xbe,   /* 0 */
   0x72, 0x5a, 0xbb, 0x42, 0x64, 0xc6, 0xd8, 0x93, 
   0xb7, 0x15,   /* 1 */
   0x74, 0x1c, 0x8b, 0x64, 0x91, 0xf5, 0xde, 0x29, 
   0x46, 0x42,   /* 2 */
   0xec, 0x6f, 0xca, 0x20, 0x15, 0xf0, 0x06, 0x27, 
   0x61, 0x27,   /* 3 */
   0x87, 0xe0, 0x6e, 0x43, 0x50, 0xc5, 0x1b, 0xc5, 
   0xb4, 0x37,   /* 4 */
   0xc3, 0x69, 0xa6, 0xee, 0x80, 0xaf, 0x6f, 0x9b, 
   0x93, 0xa1,   /* 5 */
   0x76, 0xa1, 0x23, 0xf5, 0x24, 0x72, 0x53, 0xf3, 
   0x5b, 0x65,   /* 6 */
   0x19, 0xf4, 0xfc, 0x93, 0xdd, 0x26, 0xe8, 0xa6, 
   0x10, 0xf4,   /* 7 */
   0xf7, 0xc9, 0xce, 0x92, 0x48, 0xf6, 0x94, 0x6f, 
   0x60, 0xec,   /* 8 */
   0x07, 0xc4, 0xb9, 0x97, 0x6d, 0xa4, 0xbf, 0x11, 
   0x0d, 0xc6,   /* 9 */
   0xb4, 0x1f, 0x4d, 0x13, 0xb0, 0x5d, 0xba, 0x31, 
   0x27, 0x29,   /* 10 */
   0xd5, 0x8d, 0x51, 0x87, 0x6e, 0x36, 0xba, 0x00, 
   0x96, 0x7a,   /* 11 */
   0xf0, 0xc3, 0x20, 0x03, 0x7f, 0xd8, 0xda, 0x17, 
   0xdb, 0xc9,   /* 12 */
   0x94, 0x19, 0xd4, 0xbf, 0xe8, 0x83, 0xe2, 0xf6, 
   0x91, 0x79,   /* 13 */
   0x6a, 0xa6, 0xe1, 0x95, 0x38, 0xff, 0x28, 0xb2, 
   0xb3, 0xfc,   /* 14 */
   0xa6, 0xa7, 0xd8, 0xae, 0xf8, 0x54, 0xcc, 0x28, 
   0xdc, 0x9a,   /* 15 */
   0x6b, 0xfb, 0xde, 0x76, 0x3f, 0xd8, 0xd7, 0xbc, 
   0x21, 0x7a,   /* 16 */
   0xc8, 0x7f, 0x91, 0x71, 0x09, 0x54, 0x6d, 0x95, 
   0x16, 0xac,   /* 17 */
   0x96, 0x3c, 0xbe, 0xf5, 0xdd, 0x13, 0x8a, 0x62, 
   0x00, 0xb7,   /* 18 */
   0x0d, 0x05, 0xc2, 0xa1, 0xee, 0x8c, 0x69, 0x64, 
   0x32, 0x4e,   /* 19 */
   0x35, 0x9c, 0x5f, 0x29, 0x75, 0xcd, 0x2e, 0xb7, 
   0x7a, 0x24,   /* 20 */
   0xa2, 0x3e, 0x1f, 0xdf, 0x1a, 0xc1, 0x61, 0x8e, 
   0x14, 0x60,   /* 21 */
   0xa0, 0xca, 0x6b, 0xd3, 0x8d, 0xba, 0x7d, 0x43, 
   0x7f, 0x7d,   /* 22 */
   0x7d, 0xd9, 0xeb, 0x5c, 0x8b, 0x9a, 0x9c, 0x70, 
   0xb4, 0x37,   /* 23 */
   0xc4, 0x4e, 0xc9, 0x16, 0xe6, 0xee, 0xf7, 0x9e, 
   0x11, 0x1c,   /* 24 */
   0xa1, 0x12, 0x8e, 0x3b, 0x9c, 0xef, 0x92, 0x93, 
   0x76, 0x1e,   /* 25 */
   0x3c, 0xff, 0x8e, 0xdd, 0x49, 0xba, 0xd2, 0x7d, 
   0x97, 0x1c,   /* 26 */
   0x28, 0xb2, 0x98, 0xe2, 0x6e, 0x35, 0x2e, 0xaf, 
   0x37, 0x43,   /* 27 */
   0x39, 0x7e, 0x44, 0x72, 0x3c, 0x4b, 0xa6, 0xbf, 
   0xb1, 0x6c,   /* 28 */
   0xc2, 0x65, 0x5f, 0xa4, 0x88, 0xe6, 0xa7, 0xee, 
   0x02, 0x2c,   /* 29 */
   0xa4, 0xc4, 0xad, 0xc5, 0xc1, 0xe5, 0x37, 0xa2, 
   0x98, 0x9f,   /* 30 */
   0x5d, 0x12, 0x40, 0x5c, 0x7b, 0x80, 0x4a, 0x3d, 
   0xa9, 0xe5,   /* 31 */
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00,   /* 32 */
   0x00, 0x00, 0x20, 0x20, 0x20, 0x20, 0x00, 0x20, 
   0x00, 0x00,   /* 33 */
   0x00, 0x50, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00,   /* 34 */
   0x00, 0x00, 0x00, 0x50, 0xd8, 0x50, 0xd8, 0x50, 
   0x00, 0x00,   /* 35 */
   0x00, 0x10, 0x38, 0x50, 0x30, 0x28, 0x28, 0x70, 
   0x20, 0x00,   /* 36 */
   0x00, 0x00, 0x48, 0x48, 0x10, 0x20, 0x48, 0x48, 
   0x00, 0x00,   /* 37 */
   0x00, 0x00, 0x40, 0xa0, 0x40, 0xa8, 0x90, 0x68, 
   0x00, 0x00,   /* 38 */
   0x00, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00,   /* 39 */
   0x00, 0x08, 0x10, 0x20, 0x20, 0x20, 0x20, 0x10, 
   0x08, 0x00,   /* 40 */
   0x00, 0x20, 0x10, 0x08, 0x08, 0x08, 0x08, 0x10, 
   0x20, 0x00,   /* 41 */
   0x00, 0x00, 0x00, 0x48, 0x30, 0x78, 0x30, 0x48, 
   0x00, 0x00,   /* 42 */
   0x00, 0x00, 0x20, 0x20, 0xf8, 0x20, 0x20, 0x00, 
   0x00, 0x00,   /* 43 */
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 
   0x40, 0x00,   /* 44 */
   0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 
   0x00, 0x00,   /* 45 */
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 
   0x00, 0x00,   /* 46 */
   0x00, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 
   0x40, 0x00,   /* 47 */
   0x00, 0x00, 0x30, 0x48, 0x58, 0x68, 0x48, 0x30, 
   0x00, 0x00,   /* 48 */
   0x00, 0x00, 0x20, 0x60, 0x20, 0x20, 0x20, 0x20, 
   0x00, 0x00,   /* 49 */
   0x00, 0x00, 0x70, 0x08, 0x08, 0x30, 0x40, 0x78, 
   0x00, 0x00,   /* 50 */
   0x00, 0x00, 0x70, 0x08, 0x30, 0x08, 0x08, 0x70, 
   0x00, 0x00,   /* 51 */
   0x00, 0x00, 0x48, 0x48, 0x48, 0x38, 0x08, 0x08, 
   0x00, 0x00,   /* 52 */
   0x00, 0x00, 0x78, 0x40, 0x70, 0x08, 0x08, 0x70, 
   0x00, 0x00,   /* 53 */
   0x00, 0x00, 0x30, 0x40, 0x70, 0x48, 0x48, 0x30, 
   0x00, 0x00,   /* 54 */
   0x00, 0x00, 0x78, 0x08, 0x10, 0x10, 0x20, 0x20, 
   0x00, 0x00,   /* 55 */
   0x00, 0x00, 0x30, 0x48, 0x30, 0x48, 0x48, 0x30, 
   0x00, 0x00,   /* 56 */
   0x00, 0x00, 0x30, 0x48, 0x48, 0x38, 0x08, 0x30, 
   0x00, 0x00,   /* 57 */
   0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x20, 0x20, 
   0x00, 0x00,   /* 58 */
   0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x20, 0x20, 
   0x40, 0x00,   /* 59 */
   0x00, 0x00, 0x00, 0x10, 0x20, 0x40, 0x20, 0x10, 
   0x00, 0x00,   /* 60 */
   0x00, 0x00, 0x00, 0x70, 0x00, 0x70, 0x00, 0x00, 
   0x00, 0x00,   /* 61 */
   0x00, 0x00, 0x00, 0x20, 0x10, 0x08, 0x10, 0x20, 
   0x00, 0x00,   /* 62 */
   0x00, 0x00, 0x70, 0x50, 0x10, 0x20, 0x00, 0x20, 
   0x00, 0x00,   /* 63 */
   0x00, 0x00, 0x30, 0x48, 0x58, 0x58, 0x40, 0x38, 
   0x00, 0x00,   /* 64 */
   0x00, 0x00, 0x30, 0x48, 0x48, 0x78, 0x48, 0x48, 
   0x00, 0x00,   /* 65 */
   0x00, 0x00, 0x70, 0x48, 0x70, 0x48, 0x48, 0x70, 
   0x00, 0x00,   /* 66 */
   0x00, 0x00, 0x38, 0x40, 0x40, 0x40, 0x40, 0x38, 
   0x00, 0x00,   /* 67 */
   0x00, 0x00, 0x70, 0x48, 0x48, 0x48, 0x48, 0x70, 
   0x00, 0x00,   /* 68 */
   0x00, 0x00, 0x78, 0x40, 0x70, 0x40, 0x40, 0x78, 
   0x00, 0x00,   /* 69 */
   0x00, 0x00, 0x78, 0x40, 0x70, 0x40, 0x40, 0x40, 
   0x00, 0x00,   /* 70 */
   0x00, 0x00, 0x38, 0x40, 0x40, 0x58, 0x48, 0x38, 
   0x00, 0x00,   /* 71 */
   0x00, 0x00, 0x48, 0x48, 0x78, 0x48, 0x48, 0x48, 
   0x00, 0x00,   /* 72 */
   0x00, 0x00, 0x70, 0x20, 0x20, 0x20, 0x20, 0x70, 
   0x00, 0x00,   /* 73 */
   0x00, 0x00, 0x38, 0x08, 0x08, 0x08, 0x48, 0x30, 
   0x00, 0x00,   /* 74 */
   0x00, 0x00, 0x48, 0x50, 0x60, 0x50, 0x48, 0x48, 
   0x00, 0x00,   /* 75 */
   0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x78, 
   0x00, 0x00,   /* 76 */
   0x00, 0x00, 0x48, 0x78, 0x58, 0x48, 0x48, 0x48, 
   0x00, 0x00,   /* 77 */
   0x00, 0x00, 0x48, 0x68, 0x68, 0x58, 0x58, 0x48, 
   0x00, 0x00,   /* 78 */
   0x00, 0x00, 0x30, 0x48, 0x48, 0x48, 0x48, 0x30, 
   0x00, 0x00,   /* 79 */
   0x00, 0x00, 0x70, 0x48, 0x48, 0x70, 0x40, 0x40, 
   0x00, 0x00,   /* 80 */
   0x00, 0x00, 0x30, 0x48, 0x48, 0x48, 0x48, 0x30, 
   0x18, 0x00,   /* 81 */
   0x00, 0x00, 0x70, 0x48, 0x48, 0x70, 0x48, 0x48, 
   0x00, 0x00,   /* 82 */
   0x00, 0x00, 0x38, 0x40, 0x30, 0x08, 0x08, 0x70, 
   0x00, 0x00,   /* 83 */
   0x00, 0x00, 0xf8, 0x20, 0x20, 0x20, 0x20, 0x20, 
   0x00, 0x00,   /* 84 */
   0x00, 0x00, 0x48, 0x48, 0x48, 0x48, 0x48, 0x38, 
   0x00, 0x00,   /* 85 */
   0x00, 0x00, 0x48, 0x48, 0x48, 0x30, 0x30, 0x30, 
   0x00, 0x00,   /* 86 */
   0x00, 0x00, 0x48, 0x48, 0x48, 0x48, 0x78, 0x48, 
   0x00, 0x00,   /* 87 */
   0x00, 0x00, 0x48, 0x48, 0x30, 0x48, 0x48, 0x48, 
   0x00, 0x00,   /* 88 */
   0x00, 0x00, 0x88, 0x50, 0x20, 0x20, 0x20, 0x20, 
   0x00, 0x00,   /* 89 */
   0x00, 0x00, 0x78, 0x08, 0x10, 0x20, 0x40, 0x78, 
   0x00, 0x00,   /* 90 */
   0x00, 0x70, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 
   0x70, 0x00,   /* 91 */
   0x00, 0x40, 0x40, 0x20, 0x20, 0x10, 0x10, 0x08, 
   0x08, 0x00,   /* 92 */
   0x00, 0x70, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
   0x70, 0x00,   /* 93 */
   0x00, 0x20, 0x50, 0x88, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00,   /* 94 */
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
   0x78, 0x00,   /* 95 */
   0x00, 0x20, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 
   0x00, 0x00,   /* 96 */
   0x00, 0x00, 0x00, 0x38, 0x48, 0x48, 0x58, 0x28, 
   0x00, 0x00,   /* 97 */
   0x00, 0x40, 0x40, 0x70, 0x48, 0x48, 0x48, 0x70, 
   0x00, 0x00,   /* 98 */
   0x00, 0x00, 0x00, 0x38, 0x40, 0x40, 0x40, 0x38, 
   0x00, 0x00,   /* 99 */
   0x00, 0x08, 0x08, 0x38, 0x48, 0x48, 0x58, 0x28, 
   0x00, 0x00,   /* 100 */
   0x00, 0x00, 0x00, 0x30, 0x48, 0x78, 0x40, 0x38, 
   0x00, 0x00,   /* 101 */
   0x00, 0x18, 0x20, 0x38, 0x20, 0x20, 0x20, 0x20, 
   0x00, 0x00,   /* 102 */
   0x00, 0x00, 0x00, 0x38, 0x48, 0x48, 0x58, 0x28, 
   0x08, 0x30,   /* 103 */
   0x00, 0x40, 0x40, 0x70, 0x48, 0x48, 0x48, 0x48, 
   0x00, 0x00,   /* 104 */
   0x00, 0x10, 0x00, 0x30, 0x10, 0x10, 0x10, 0x10, 
   0x00, 0x00,   /* 105 */
   0x00, 0x10, 0x00, 0x30, 0x10, 0x10, 0x10, 0x10, 
   0x10, 0x60,   /* 106 */
   0x00, 0x40, 0x40, 0x48, 0x50, 0x70, 0x48, 0x48, 
   0x00, 0x00,   /* 107 */
   0x00, 0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
   0x00, 0x00,   /* 108 */
   0x00, 0x00, 0x00, 0x48, 0x78, 0x58, 0x48, 0x48, 
   0x00, 0x00,   /* 109 */
   0x00, 0x00, 0x00, 0x70, 0x48, 0x48, 0x48, 0x48, 
   0x00, 0x00,   /* 110 */
   0x00, 0x00, 0x00, 0x30, 0x48, 0x48, 0x48, 0x30, 
   0x00, 0x00,   /* 111 */
   0x00, 0x00, 0x00, 0x70, 0x48, 0x48, 0x48, 0x70, 
   0x40, 0x40,   /* 112 */
   0x00, 0x00, 0x00, 0x38, 0x48, 0x48, 0x48, 0x38, 
   0x08, 0x08,   /* 113 */
   0x00, 0x00, 0x00, 0x58, 0x60, 0x40, 0x40, 0x40, 
   0x00, 0x00,   /* 114 */
   0x00, 0x00, 0x00, 0x38, 0x40, 0x30, 0x08, 0x70, 
   0x00, 0x00,   /* 115 */
   0x00, 0x00, 0x20, 0x70, 0x20, 0x20, 0x20, 0x10, 
   0x00, 0x00,   /* 116 */
   0x00, 0x00, 0x00, 0x48, 0x48, 0x48, 0x48, 0x38, 
   0x00, 0x00,   /* 117 */
   0x00, 0x00, 0x00, 0x48, 0x48, 0x48, 0x30, 0x30, 
   0x00, 0x00,   /* 118 */
   0x00, 0x00, 0x00, 0x48, 0x48, 0x48, 0x78, 0x48, 
   0x00, 0x00,   /* 119 */
   0x00, 0x00, 0x00, 0x48, 0x48, 0x30, 0x48, 0x48, 
   0x00, 0x00,   /* 120 */
   0x00, 0x00, 0x00, 0x48, 0x48, 0x48, 0x48, 0x38, 
   0x08, 0x30,   /* 121 */
   0x00, 0x00, 0x00, 0x78, 0x10, 0x20, 0x40, 0x78, 
   0x00, 0x00,   /* 122 */
   0x00, 0x10, 0x20, 0x20, 0x60, 0x60, 0x20, 0x20, 
   0x10, 0x00,   /* 123 */
   0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 
   0x20, 0x20,   /* 124 */
   0x00, 0x20, 0x10, 0x10, 0x18, 0x18, 0x10, 0x10, 
   0x20, 0x00,   /* 125 */
   0x00, 0x00, 0x00, 0x40, 0xa8, 0xa8, 0x10, 0x00, 
   0x00, 0x00,   /* 126 */
   0xab, 0x0b, 0xd6, 0x92, 0x2f, 0x06, 0x79, 0x90, 
   0x2a, 0x9c,   /* 127 */
   0xa4, 0x4e, 0xf4, 0xc4, 0xa2, 0x11, 0x21, 0xc1, 
   0x7a, 0xb6,   /* 128 */
   0x1d, 0xa4, 0x65, 0xb4, 0xc8, 0xb4, 0x44, 0xc7, 
   0x22, 0x46,   /* 129 */
   0x14, 0x36, 0x32, 0x9e, 0x9b, 0x8c, 0x91, 0x20, 
   0x12, 0xe2,   /* 130 */
   0x27, 0x90, 0x51, 0x55, 0x34, 0xad, 0x0a, 0x0a, 
   0xd0, 0x10,   /* 131 */
   0xb5, 0x68, 0xe3, 0xf0, 0x00, 0x59, 0xf0, 0xfd, 
   0x5b, 0xfa,   /* 132 */
   0x06, 0x57, 0xd8, 0x70, 0xb4, 0x92, 0x1a, 0x2e, 
   0x3d, 0xaf,   /* 133 */
   0xfc, 0x83, 0xe6, 0x77, 0x79, 0x68, 0xc2, 0x1d, 
   0x25, 0xb2,   /* 134 */
   0x42, 0x87, 0x10, 0x26, 0x68, 0x15, 0xa3, 0x04, 
   0x3d, 0x94,   /* 135 */
   0x29, 0x43, 0x13, 0x25, 0x16, 0x24, 0x77, 0xb8, 
   0x7a, 0x8e,   /* 136 */
   0x7f, 0x14, 0x4b, 0x4b, 0x54, 0x15, 0x19, 0x33, 
   0x1b, 0x2c,   /* 137 */
   0xd5, 0xd3, 0xec, 0x89, 0x78, 0xb3, 0x82, 0xc4, 
   0xfb, 0x76,   /* 138 */
   0xab, 0xe4, 0xda, 0xc0, 0xb7, 0x16, 0xcc, 0x5f, 
   0x75, 0x5d,   /* 139 */
   0xc6, 0x98, 0x0e, 0x1f, 0x8f, 0xa7, 0x10, 0x85, 
   0xd7, 0x28,   /* 140 */
   0x00, 0xe6, 0x37, 0x2f, 0xf7, 0xd1, 0xb5, 0x96, 
   0xae, 0xc6,   /* 141 */
   0x3b, 0x37, 0x5f, 0xd2, 0x29, 0x9c, 0x1f, 0x6f, 
   0x00, 0x84,   /* 142 */
   0x76, 0xb0, 0x08, 0x67, 0x80, 0x47, 0xff, 0x5d, 
   0x5e, 0xf3,   /* 143 */
   0x14, 0x9d, 0xcb, 0x5b, 0xf8, 0x2e, 0x6e, 0xc9, 
   0x1e, 0x88,   /* 144 */
   0x3e, 0x9d, 0xc6, 0x2e, 0x7d, 0xef, 0x50, 0x5c, 
   0x19, 0x5f,   /* 145 */
   0xe3, 0xe5, 0xfc, 0x1b, 0x26, 0xef, 0xc8, 0xe0, 
   0x43, 0x20,   /* 146 */
   0x89, 0x58, 0x62, 0x5e, 0x79, 0xba, 0xee, 0x7e, 
   0x79, 0xf4,   /* 147 */
   0x4c, 0x72, 0xd2, 0x61, 0xba, 0x59, 0xa9, 0xdc, 
   0xaa, 0xce,   /* 148 */
   0xed, 0x52, 0x7a, 0x91, 0x6c, 0xf2, 0x16, 0x6c, 
   0x4f, 0xb3,   /* 149 */
   0x5a, 0x88, 0x1d, 0xbc, 0xed, 0x23, 0xf1, 0x06, 
   0x66, 0x33,   /* 150 */
   0x1a, 0x09, 0x68, 0x71, 0xae, 0x42, 0xcf, 0x19, 
   0xa5, 0x82,   /* 151 */
   0x7f, 0x27, 0xa2, 0x1b, 0x36, 0xe2, 0xfc, 0x04, 
   0xdc, 0x1e,   /* 152 */
   0x22, 0x91, 0x21, 0xdd, 0x8b, 0x71, 0x51, 0x6e, 
   0xf7, 0xce,   /* 153 */
   0xb8, 0xd8, 0xee, 0x1d, 0x77, 0x64, 0x61, 0x40, 
   0x22, 0x9f,   /* 154 */
   0x9e, 0x7d, 0x84, 0xc8, 0x47, 0x6c, 0x1b, 0x3b, 
   0xe6, 0x94,   /* 155 */
   0xd0, 0xc8, 0xb5, 0x57, 0xef, 0x34, 0xb9, 0xd5, 
   0x57, 0x53,   /* 156 */
   0x56, 0x87, 0x8d, 0x04, 0x74, 0x7f, 0x40, 0x82, 
   0x3e, 0x9c,   /* 157 */
   0x4b, 0xea, 0x91, 0x4b, 0x7c, 0x24, 0xa4, 0x21, 
   0xd3, 0x83,   /* 158 */
   0x67, 0x28, 0xb7, 0x7b, 0xb8, 0xda, 0xd6, 0x79, 
   0xe9, 0x15,   /* 159 */
   0x2a, 0xad, 0xc4, 0xe9, 0x6d, 0xdb, 0x59, 0xab, 
   0x37, 0x7c,   /* 160 */
   0x33, 0x69, 0x62, 0xde, 0x63, 0xc4, 0x91, 0x60, 
   0xe7, 0xd9,   /* 161 */
   0x48, 0xdc, 0xf8, 0xc3, 0x29, 0x2e, 0x84, 0x4f, 
   0xfb, 0xb7,   /* 162 */
   0x94, 0x6b, 0x6a, 0x34, 0xf4, 0xe1, 0x01, 0x14, 
   0x4b, 0xde,   /* 163 */
   0xf9, 0xa4, 0x6b, 0xde, 0x50, 0xfe, 0x13, 0x46, 
   0xd4, 0x08,   /* 164 */
   0xc3, 0x62, 0x3b, 0x0c, 0x54, 0xf9, 0xbf, 0x98, 
   0x9f, 0x9c,   /* 165 */
   0x92, 0x55, 0x9d, 0x65, 0xbc, 0x05, 0x63, 0x9d, 
   0x99, 0xf0,   /* 166 */
   0xc9, 0xd2, 0xd2, 0x9d, 0x4f, 0xd1, 0x0b, 0x31, 
   0x95, 0x2d,   /* 167 */
   0x70, 0x80, 0x82, 0x77, 0x50, 0x2a, 0xc0, 0x6c, 
   0x92, 0xd8,   /* 168 */
   0xca, 0x1f, 0xed, 0x94, 0x71, 0xa9, 0x39, 0x0a, 
   0x54, 0x18,   /* 169 */
   0x69, 0xad, 0x88, 0x11, 0xd1, 0x1b, 0x4f, 0xe5, 
   0x25, 0x2a,   /* 170 */
   0xd7, 0x05, 0xfe, 0x8f, 0x96, 0x4e, 0x21, 0xf3, 
   0x19, 0x20,   /* 171 */
   0x89, 0x63, 0x37, 0x64, 0x32, 0xf5, 0x8a, 0xb5, 
   0x55, 0xd3,   /* 172 */
   0x8a, 0xc6, 0x09, 0xf0, 0xc7, 0x74, 0xec, 0x20, 
   0x0f, 0xe5,   /* 173 */
   0x42, 0xe5, 0x60, 0x04, 0x94, 0x9a, 0x10, 0x75, 
   0xc8, 0x6e,   /* 174 */
   0x25, 0x34, 0xea, 0xbc, 0x40, 0x4a, 0x27, 0xf6, 
   0xd8, 0x2e,   /* 175 */
   0xad, 0x52, 0x2a, 0xcb, 0xad, 0xae, 0x3f, 0x3a, 
   0xae, 0x4f,   /* 176 */
   0x5d, 0xd8, 0xdd, 0xc1, 0x1e, 0x39, 0xfa, 0x0a, 
   0x99, 0x85,   /* 177 */
   0x67, 0x32, 0xac, 0x84, 0xc8, 0x77, 0x41, 0x1e, 
   0xa2, 0x9d,   /* 178 */
   0x88, 0x1e, 0x40, 0x07, 0x60, 0x40, 0x9b, 0x05, 
   0x06, 0x45,   /* 179 */
   0xf1, 0xbe, 0x83, 0x42, 0xf9, 0xaa, 0xd5, 0x0c, 
   0x89, 0x54,   /* 180 */
   0x5a, 0x1d, 0x2d, 0xf7, 0xd4, 0x9c, 0xac, 0x03, 
   0xff, 0x22,   /* 181 */
   0x0a, 0x6e, 0xbf, 0xc5, 0x9e, 0x09, 0x2f, 0x11, 
   0x63, 0x95,   /* 182 */
   0xff, 0xf5, 0x27, 0xd6, 0x69, 0x0f, 0x26, 0xe7, 
   0xb2, 0x72,   /* 183 */
   0x41, 0x31, 0x57, 0xbc, 0x59, 0xd9, 0x43, 0x9e, 
   0x1d, 0xba,   /* 184 */
   0x2c, 0x08, 0x84, 0x2a, 0xa8, 0x5a, 0x79, 0x87, 
   0xf8, 0xe3,   /* 185 */
   0x4a, 0xd1, 0x52, 0x26, 0xaf, 0xba, 0x12, 0xbf, 
   0x64, 0xfa,   /* 186 */
   0x84, 0x67, 0x80, 0x7a, 0xc6, 0xdc, 0xba, 0xcf, 
   0x85, 0x77,   /* 187 */
   0x63, 0xc3, 0x75, 0xdb, 0x32, 0xf0, 0x74, 0x5c, 
   0x2d, 0x25,   /* 188 */
   0x3c, 0x91, 0x7e, 0xc3, 0x5e, 0xcf, 0xbc, 0xb9, 
   0xe9, 0x30,   /* 189 */
   0x64, 0x1a, 0x1e, 0x2a, 0xef, 0x31, 0xd3, 0xeb, 
   0x2b, 0xe6,   /* 190 */
   0x35, 0x05, 0x2a, 0x32, 0xaf, 0xe1, 0x15, 0x32, 
   0xbb, 0xd6,   /* 191 */
   0xab, 0xcc, 0x09, 0xbc, 0x7b, 0xd3, 0xc0, 0xc1, 
   0x3e, 0x47,   /* 192 */
   0x62, 0xac, 0xaa, 0xc8, 0x53, 0xb9, 0x16, 0x2f, 
   0x60, 0x8d,   /* 193 */
   0x8d, 0xac, 0x72, 0x93, 0x5d, 0xf8, 0x96, 0xde, 
   0x06, 0x09,   /* 194 */
   0xbf, 0x34, 0x5b, 0x5a, 0xa6, 0xdf, 0x37, 0xfc, 
   0xcc, 0x09,   /* 195 */
   0x61, 0xff, 0x78, 0x96, 0x04, 0xfd, 0x26, 0x0c, 
   0x25, 0xfe,   /* 196 */
   0x35, 0xb5, 0xba, 0x58, 0x13, 0x3c, 0xe2, 0x1c, 
   0x9b, 0x5e,   /* 197 */
   0x53, 0x5d, 0x1b, 0x09, 0x64, 0xc4, 0xed, 0x89, 
   0x87, 0x06,   /* 198 */
   0x1d, 0x6e, 0x19, 0x31, 0x76, 0x56, 0xe2, 0x6d, 
   0x92, 0x93,   /* 199 */
   0x5f, 0x5c, 0x27, 0x06, 0xfe, 0x2a, 0x1e, 0xab, 
   0x96, 0xba,   /* 200 */
   0x51, 0x5a, 0x73, 0x66, 0x4e, 0x60, 0xe5, 0x18, 
   0xdb, 0x12,   /* 201 */
   0x3f, 0x2f, 0x9e, 0x95, 0x36, 0x75, 0x9b, 0xee, 
   0x0f, 0x68,   /* 202 */
   0x7f, 0x76, 0xbb, 0xe4, 0xb4, 0x11, 0x83, 0x83, 
   0x0e, 0xc0,   /* 203 */
   0x1a, 0x4a, 0xe9, 0xdd, 0x5f, 0x06, 0xb3, 0x0c, 
   0x95, 0xf1,   /* 204 */
   0xda, 0x72, 0x91, 0xce, 0x9e, 0x48, 0x88, 0xc7, 
   0x14, 0xc6,   /* 205 */
   0x3f, 0xd1, 0x57, 0x14, 0x2e, 0x63, 0x96, 0xdc, 
   0x40, 0x39,   /* 206 */
   0x50, 0x93, 0xf0, 0xb7, 0x42, 0x15, 0xfa, 0x84, 
   0x59, 0x76,   /* 207 */
   0x5a, 0xcc, 0x38, 0xa0, 0x29, 0x78, 0x63, 0x55, 
   0x8f, 0xb3,   /* 208 */
   0xc3, 0x20, 0x02, 0xb0, 0xc3, 0x43, 0x23, 0x54, 
   0xc5, 0x3a,   /* 209 */
   0xe5, 0xa2, 0x92, 0x58, 0x5d, 0xb5, 0x13, 0x55, 
   0x26, 0x11,   /* 210 */
   0x44, 0x6f, 0x44, 0xcb, 0x5d, 0x05, 0x89, 0x13, 
   0xcb, 0x96,   /* 211 */
   0x3b, 0xff, 0x68, 0xc7, 0x8c, 0xdb, 0x0f, 0xd2, 
   0xa0, 0x0a,   /* 212 */
   0x74, 0x76, 0x3e, 0xd7, 0x51, 0xa7, 0xa1, 0xea, 
   0xa5, 0x84,   /* 213 */
   0xed, 0xb6, 0x8c, 0x83, 0x79, 0x60, 0x2b, 0x7c, 
   0x19, 0x67,   /* 214 */
   0x6c, 0x98, 0x33, 0x69, 0x91, 0x6a, 0xe3, 0x38, 
   0xab, 0xce,   /* 215 */
   0x96, 0xf8, 0x80, 0xd2, 0x9c, 0xb0, 0x28, 0xa2, 
   0xf8, 0x58,   /* 216 */
   0xa6, 0x88, 0x46, 0x0c, 0xec, 0x4e, 0x8c, 0x60, 
   0x1a, 0x6c,   /* 217 */
   0x80, 0xaa, 0xb6, 0x60, 0x2f, 0xe4, 0xe9, 0x27, 
   0xe0, 0x1b,   /* 218 */
   0x5c, 0x01, 0xe2, 0xb0, 0xd8, 0x4f, 0xb4, 0xff, 
   0x6f, 0x7a,   /* 219 */
   0xe5, 0x95, 0x8d, 0x15, 0xfc, 0x5c, 0x2b, 0x4a, 
   0xc5, 0xfd,   /* 220 */
   0x88, 0x69, 0xaf, 0x82, 0xa2, 0xd8, 0xdb, 0xe4, 
   0x58, 0xc9,   /* 221 */
   0x96, 0x38, 0x87, 0x3b, 0x79, 0x00, 0x52, 0x4f, 
   0x7f, 0x79,   /* 222 */
   0x94, 0xdf, 0x51, 0x4a, 0x14, 0x77, 0x30, 0x8a, 
   0xf0, 0xaa,   /* 223 */
   0xd0, 0x31, 0xbf, 0xed, 0x33, 0xfc, 0x62, 0x52, 
   0xcb, 0x37,   /* 224 */
   0x78, 0x38, 0x90, 0xb6, 0x2a, 0xd7, 0x3f, 0xbd, 
   0x7c, 0x84,   /* 225 */
   0x93, 0xe3, 0xbd, 0xc2, 0xef, 0x79, 0x4f, 0xc8, 
   0xf5, 0x63,   /* 226 */
   0x7b, 0xaf, 0x61, 0x08, 0x29, 0x9b, 0x39, 0x09, 
   0x93, 0xb9,   /* 227 */
   0xf8, 0xd9, 0xe1, 0x96, 0x71, 0xce, 0xf2, 0xfe, 
   0x0c, 0xb5,   /* 228 */
   0xe1, 0xaa, 0x7e, 0xee, 0x32, 0x07, 0x75, 0x11, 
   0xc8, 0x16,   /* 229 */
   0x8f, 0xbe, 0xc1, 0xfe, 0x3a, 0x59, 0x46, 0x9f, 
   0xd9, 0xe4,   /* 230 */
   0x78, 0xd9, 0x48, 0x5f, 0xc6, 0x93, 0x6a, 0x93, 
   0x01, 0x34,   /* 231 */
   0x64, 0x4f, 0x41, 0x9f, 0x99, 0x59, 0x0b, 0x89, 
   0x19, 0x4a,   /* 232 */
   0x3f, 0xfe, 0xcb, 0xfc, 0x6c, 0x78, 0x2a, 0x65, 
   0xc7, 0x8e,   /* 233 */
   0x19, 0xfd, 0xbd, 0x49, 0xaf, 0x68, 0x6e, 0x6b, 
   0x14, 0x46,   /* 234 */
   0xcc, 0x9c, 0x50, 0x48, 0x3e, 0x41, 0xdd, 0xbb, 
   0x9b, 0x11,   /* 235 */
   0xe8, 0x41, 0x78, 0x37, 0xf1, 0x59, 0x44, 0x15, 
   0x70, 0xe4,   /* 236 */
   0x6d, 0x69, 0x2f, 0xd6, 0x35, 0x80, 0x4b, 0x8d, 
   0xf8, 0x1a,   /* 237 */
   0x23, 0xc9, 0xa6, 0x87, 0xee, 0x2c, 0x01, 0xa0, 
   0x30, 0x97,   /* 238 */
   0x2d, 0x9a, 0x58, 0x6d, 0x9d, 0x8c, 0xdc, 0x9e, 
   0x7a, 0x3b,   /* 239 */
   0x0e, 0xf5, 0x14, 0x21, 0x7b, 0x60, 0x25, 0x7c, 
   0x1e, 0x6b,   /* 240 */
   0xfe, 0x43, 0x7a, 0xab, 0x70, 0xb9, 0x2e, 0xe1, 
   0x4e, 0x06,   /* 241 */
   0xb4, 0x1a, 0x7d, 0x86, 0xbb, 0x4f, 0xbb, 0xc6, 
   0xa5, 0xa5,   /* 242 */
   0x59, 0x1f, 0x8e, 0x79, 0x74, 0x38, 0xc6, 0x45, 
   0x95, 0x93,   /* 243 */
   0xca, 0x24, 0x87, 0x3d, 0x13, 0x48, 0xea, 0xf7, 
   0x30, 0xf3,   /* 244 */
   0x95, 0x48, 0x8d, 0x21, 0x78, 0x2d, 0xeb, 0xef, 
   0xca, 0x0d,   /* 245 */
   0x74, 0x3d, 0xda, 0x99, 0xa7, 0x59, 0x1b, 0xed, 
   0x39, 0xbd,   /* 246 */
   0x20, 0xe8, 0xdd, 0xf8, 0xd0, 0xe1, 0x52, 0x8d, 
   0x2c, 0x56,   /* 247 */
   0xe4, 0xf3, 0x72, 0xeb, 0xab, 0xe8, 0xc1, 0x4d, 
   0xd8, 0xaa,   /* 248 */
   0xd8, 0x33, 0xe6, 0xe1, 0xa2, 0x09, 0x61, 0x32, 
   0x15, 0x7c,   /* 249 */
   0x90, 0x46, 0xca, 0xf7, 0x2d, 0x61, 0x69, 0x78, 
   0x27, 0xc7,   /* 250 */
   0xc4, 0xc5, 0x3e, 0x8d, 0x23, 0xa0, 0x0a, 0x01, 
   0x7f, 0xdb,   /* 251 */
   0x4e, 0xba, 0xbb, 0x74, 0x96, 0xcb, 0xdf, 0xb1, 
   0x14, 0xef,   /* 252 */
   0xd4, 0xe8, 0x10, 0xea, 0x64, 0xca, 0xbd, 0x31, 
   0x27, 0x6b,   /* 253 */
   0x94, 0x16, 0xf7, 0x5e, 0xae, 0xc6, 0x76, 0x87, 
   0xf5, 0xf9,   /* 254 */
   0xe6, 0xb8, 0x97, 0x17, 0xdf, 0x29, 0x3e, 0xdf, 
   0x8d, 0x15,   /* 255 */
} };


const struct font_desc font_lemon = {
	.idx	= LEMON_IDX,
	.name	= "LEMON",
	.width	= 5,
	.height = 10,
	.charcount = 256,
	.data	= fontdata_lemon.data,
#ifdef __sparc__
	.pref	= 5,
#else
	.pref	= -1,
#endif
};

