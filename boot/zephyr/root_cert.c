/*
 * Copyright (c) 2020 Linaro, Ltd
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <bootutil/root_cert.h>

/* Generated with:
 * $ openssl x509 -in cert/A.crt -outform der > bootutil_root_cert
 * $ xxd -i bootutil_root_cert
 */
#ifdef CONFIG_SERVER_SIGNING 

const unsigned char bootutil_root_cert[] = {
  0x30, 0x82, 0x01, 0xD4, 0x30, 0x82, 0x01, 0x7A, 0xA0, 0x03, 0x02, 0x01,
  0x02, 0x02, 0x10, 0x37, 0x16, 0xCD, 0x7E, 0xBF, 0xDE, 0xCC, 0xAB, 0x4C,
  0x50, 0x7F, 0x89, 0x4E, 0xC9, 0x58, 0x05, 0x30, 0x0A, 0x06, 0x08, 0x2A,
  0x86, 0x48, 0xCE, 0x3D, 0x04, 0x03, 0x02, 0x30, 0x41, 0x31, 0x1A, 0x30,
  0x18, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x13, 0x11, 0x45, 0x61, 0x74, 0x6F,
  0x6E, 0x20, 0x43, 0x6F, 0x72, 0x70, 0x6F, 0x72, 0x61, 0x74, 0x69, 0x6F,
  0x6E, 0x31, 0x23, 0x30, 0x21, 0x06, 0x03, 0x55, 0x04, 0x03, 0x13, 0x1A,
  0x45, 0x61, 0x74, 0x6F, 0x6E, 0x20, 0x43, 0x6F, 0x6D, 0x6D, 0x65, 0x72,
  0x63, 0x69, 0x61, 0x6C, 0x20, 0x52, 0x6F, 0x6F, 0x74, 0x20, 0x43, 0x41,
  0x20, 0x31, 0x30, 0x1E, 0x17, 0x0D, 0x31, 0x39, 0x30, 0x33, 0x32, 0x32,
  0x31, 0x33, 0x32, 0x37, 0x34, 0x38, 0x5A, 0x17, 0x0D, 0x34, 0x34, 0x30,
  0x33, 0x32, 0x32, 0x31, 0x33, 0x33, 0x31, 0x32, 0x34, 0x5A, 0x30, 0x41,
  0x31, 0x1A, 0x30, 0x18, 0x06, 0x03, 0x55, 0x04, 0x0A, 0x13, 0x11, 0x45,
  0x61, 0x74, 0x6F, 0x6E, 0x20, 0x43, 0x6F, 0x72, 0x70, 0x6F, 0x72, 0x61,
  0x74, 0x69, 0x6F, 0x6E, 0x31, 0x23, 0x30, 0x21, 0x06, 0x03, 0x55, 0x04,
  0x03, 0x13, 0x1A, 0x45, 0x61, 0x74, 0x6F, 0x6E, 0x20, 0x43, 0x6F, 0x6D,
  0x6D, 0x65, 0x72, 0x63, 0x69, 0x61, 0x6C, 0x20, 0x52, 0x6F, 0x6F, 0x74,
  0x20, 0x43, 0x41, 0x20, 0x31, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2A,
  0x86, 0x48, 0xCE, 0x3D, 0x02, 0x01, 0x06, 0x08, 0x2A, 0x86, 0x48, 0xCE,
  0x3D, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0x8E, 0x5C, 0xA6, 0xDF,
  0x95, 0x96, 0x41, 0x11, 0xA6, 0xAE, 0xB2, 0x48, 0x5E, 0x49, 0xC9, 0xC4,
  0x6A, 0x24, 0x99, 0xE2, 0x3E, 0xA7, 0x1C, 0xC0, 0x9A, 0x10, 0xF2, 0xAF,
  0x7E, 0x53, 0x69, 0xFE, 0x1C, 0x8B, 0x46, 0x5C, 0xB6, 0x35, 0x1C, 0x29,
  0xFC, 0xB8, 0x16, 0xB6, 0x8F, 0x5D, 0xF6, 0xC5, 0x5A, 0xF8, 0x6F, 0xB7,
  0x9C, 0x46, 0xC0, 0x24, 0x1C, 0x12, 0xC4, 0xD0, 0x9A, 0xCD, 0x3C, 0xDA,
  0xA3, 0x54, 0x30, 0x52, 0x30, 0x0E, 0x06, 0x03, 0x55, 0x1D, 0x0F, 0x01,
  0x01, 0xFF, 0x04, 0x04, 0x03, 0x02, 0x01, 0x06, 0x30, 0x0F, 0x06, 0x03,
  0x55, 0x1D, 0x13, 0x01, 0x01, 0xFF, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01,
  0xFF, 0x30, 0x1D, 0x06, 0x03, 0x55, 0x1D, 0x0E, 0x04, 0x16, 0x04, 0x14,
  0x19, 0x19, 0x0E, 0xC4, 0x55, 0x19, 0x95, 0xDD, 0x60, 0xD6, 0xCA, 0x67,
  0x85, 0x85, 0xB5, 0x69, 0x22, 0x1C, 0x05, 0xB6, 0x30, 0x10, 0x06, 0x09,
  0x2B, 0x06, 0x01, 0x04, 0x01, 0x82, 0x37, 0x15, 0x01, 0x04, 0x03, 0x02,
  0x01, 0x00, 0x30, 0x0A, 0x06, 0x08, 0x2A, 0x86, 0x48, 0xCE, 0x3D, 0x04,
  0x03, 0x02, 0x03, 0x48, 0x00, 0x30, 0x45, 0x02, 0x21, 0x00, 0xBA, 0x41,
  0xAC, 0x8B, 0x64, 0x83, 0x0F, 0x59, 0x15, 0xAC, 0x0D, 0xB6, 0x45, 0xD8,
  0x22, 0x72, 0x3A, 0x01, 0xEF, 0x1F, 0x9C, 0xEE, 0x9F, 0x63, 0x28, 0x7D,
  0x08, 0x3E, 0x08, 0x02, 0x4F, 0xCF, 0x02, 0x20, 0x15, 0x92, 0xC7, 0xC5,
  0x98, 0x3A, 0xFB, 0x6D, 0xB7, 0xF4, 0xEB, 0xEA, 0x28, 0x53, 0x57, 0xCD,
  0x93, 0xEA, 0xC6, 0x34, 0x30, 0x6D, 0x31, 0xB5, 0x6F, 0x56, 0x79, 0x23,
  0x3C, 0x92, 0xF0, 0x8E,
};
const unsigned int bootutil_root_cert_len = 472;
#else
//local signing
const unsigned char bootutil_root_cert[] = {
  0x30, 0x82, 0x01, 0x92, 0x30, 0x82, 0x01, 0x37, 0xa0, 0x03, 0x02, 0x01,
  0x02, 0x02, 0x14, 0x0f, 0xbc, 0xe3, 0x78, 0x70, 0x32, 0x62, 0x38, 0xab,
  0xb1, 0x20, 0xdf, 0x65, 0xec, 0x76, 0x0c, 0x47, 0x84, 0xb8, 0x93, 0x30,
  0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30,
  0x1e, 0x31, 0x1c, 0x30, 0x1a, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x13,
  0x4d, 0x43, 0x55, 0x62, 0x6f, 0x6f, 0x74, 0x20, 0x73, 0x61, 0x6d, 0x70,
  0x6c, 0x65, 0x20, 0x72, 0x6f, 0x6f, 0x74, 0x30, 0x1e, 0x17, 0x0d, 0x32,
  0x31, 0x30, 0x31, 0x32, 0x32, 0x31, 0x38, 0x35, 0x32, 0x33, 0x30, 0x5a,
  0x17, 0x0d, 0x33, 0x31, 0x30, 0x31, 0x32, 0x30, 0x31, 0x38, 0x35, 0x32,
  0x33, 0x30, 0x5a, 0x30, 0x1e, 0x31, 0x1c, 0x30, 0x1a, 0x06, 0x03, 0x55,
  0x04, 0x03, 0x0c, 0x13, 0x4d, 0x43, 0x55, 0x62, 0x6f, 0x6f, 0x74, 0x20,
  0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x20, 0x72, 0x6f, 0x6f, 0x74, 0x30,
  0x59, 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01,
  0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42,
  0x00, 0x04, 0xf8, 0xfc, 0xfa, 0x43, 0x69, 0x5f, 0x29, 0xa5, 0x9a, 0xa2,
  0x28, 0xf2, 0x7e, 0x3f, 0xf9, 0x5e, 0xd3, 0x3c, 0x25, 0x71, 0x90, 0x92,
  0xc9, 0xaa, 0x13, 0x8b, 0x30, 0x77, 0x3f, 0x27, 0x4c, 0xd0, 0x61, 0x8c,
  0xd4, 0xd4, 0x69, 0xc3, 0x3e, 0xdd, 0xf5, 0xdd, 0x7c, 0xaa, 0x8e, 0x51,
  0x5e, 0xf9, 0xf4, 0x4b, 0xfe, 0x0e, 0xb8, 0xf5, 0xd4, 0x8e, 0xc6, 0x3d,
  0x83, 0x69, 0xf9, 0x4a, 0x20, 0xe9, 0xa3, 0x53, 0x30, 0x51, 0x30, 0x1d,
  0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x52, 0x6b, 0x17,
  0x0d, 0x7f, 0x56, 0x6d, 0xcc, 0x53, 0x54, 0x35, 0x60, 0x4b, 0x3e, 0x78,
  0x7e, 0x7d, 0xdb, 0x6c, 0x2c, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23,
  0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0x52, 0x6b, 0x17, 0x0d, 0x7f, 0x56,
  0x6d, 0xcc, 0x53, 0x54, 0x35, 0x60, 0x4b, 0x3e, 0x78, 0x7e, 0x7d, 0xdb,
  0x6c, 0x2c, 0x30, 0x0f, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff,
  0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff, 0x30, 0x0a, 0x06, 0x08, 0x2a,
  0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03, 0x49, 0x00, 0x30, 0x46,
  0x02, 0x21, 0x00, 0xbb, 0x5a, 0xfc, 0xe9, 0x94, 0xa5, 0x15, 0x5f, 0xd4,
  0x4f, 0x70, 0xcd, 0x27, 0x20, 0x5a, 0xe8, 0xbb, 0x88, 0x32, 0x7b, 0x63,
  0xd8, 0xe8, 0x29, 0x67, 0x54, 0x71, 0x3b, 0x11, 0x7f, 0x67, 0xe1, 0x02,
  0x21, 0x00, 0xc3, 0x73, 0x83, 0xd3, 0x93, 0xfc, 0xd9, 0x8e, 0x31, 0x7c,
  0x35, 0x0c, 0x76, 0x9a, 0xe5, 0xc7, 0xf6, 0x50, 0xff, 0xeb, 0x98, 0xe3,
  0xfc, 0x70, 0xa2, 0xf7, 0x92, 0xc5, 0xa8, 0x24, 0x75, 0xf2
};
const unsigned int bootutil_root_cert_len = 406;
#endif //SERVER_SIGNING