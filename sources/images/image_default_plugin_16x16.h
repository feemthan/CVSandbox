#include <ximage.h>

static uint8_t default_plugin_16x16_data[] =
{
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0x51, 0xBA, 0xFF, 0x07, 0x5F, 0xBD, 0xFF, 0x28, 0x76, 0xC7, 0xFF, 0x50, 0x7D, 0xC9, 0xFF, 0x5E, 0x66, 0xC0, 0xFF, 0x34, 
    0x58, 0xBC, 0xFF, 0x11, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0x4C, 0xAC, 0xF1, 0x33, 0x71, 0xC4, 0xFD, 0x83, 0x84, 0xCB, 0xFC, 0xAA, 0x8E, 0xCE, 0xFB, 0xC5, 0x91, 0xCF, 0xFB, 0xCA, 
    0x8B, 0xCD, 0xFC, 0xB5, 0x75, 0xC5, 0xFC, 0x93, 0x50, 0xAE, 0xF1, 0x57, 0x3D, 0x98, 0xDE, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xC2, 0x01, 0x01, 0x00, 0x4C, 0xA4, 0xE6, 0x00, 0x4C, 0xA4, 0xE6, 0x00, 
    0x4C, 0xA4, 0xE6, 0x00, 0x4C, 0xA4, 0xE6, 0x6E, 0x65, 0xB8, 0xF3, 0xD0, 0x6B, 0xC1, 0xFC, 0xCC, 0x7B, 0xC6, 0xFB, 0xD3, 
    0x7F, 0xC6, 0xFA, 0xD5, 0x52, 0xB7, 0xFD, 0xCF, 0x3D, 0xA5, 0xF0, 0xCF, 0x2F, 0x8E, 0xD8, 0xAC, 0x2B, 0x85, 0xCE, 0x08, 
    0x2B, 0x85, 0xCE, 0x00, 0x2B, 0x85, 0xCE, 0x00, 0x2B, 0x85, 0xCE, 0x00, 0xC2, 0x01, 0x01, 0x00, 0xD6, 0x30, 0x30, 0x00, 
    0xEA, 0x0A, 0x07, 0x00, 0x47, 0x9B, 0xDD, 0x00, 0x47, 0x9B, 0xDD, 0x6A, 0x62, 0xB1, 0xED, 0xCD, 0x61, 0xBC, 0xFB, 0xD0, 
    0x43, 0xB7, 0xFF, 0xDC, 0x8F, 0xD4, 0xFF, 0xE3, 0x32, 0xAE, 0xFE, 0xD8, 0x34, 0x9A, 0xE5, 0xCF, 0x2C, 0x85, 0xCE, 0xA7, 
    0x29, 0x7D, 0xC4, 0x08, 0x29, 0x7D, 0xC4, 0x00, 0x29, 0x7D, 0xC4, 0x00, 0x3F, 0xC9, 0x19, 0x00, 0xC2, 0x01, 0x01, 0x00, 
    0xD6, 0x30, 0x30, 0x00, 0xEA, 0x0A, 0x07, 0x00, 0xE3, 0x24, 0x28, 0x00, 0x3C, 0x9B, 0xE0, 0x6C, 0x60, 0xAC, 0xE7, 0xD8, 
    0x3D, 0xA7, 0xF1, 0xE1, 0x37, 0xB1, 0xFF, 0xE6, 0x92, 0xD9, 0xFF, 0xE6, 0x38, 0xAA, 0xF8, 0xE4, 0x36, 0x93, 0xDC, 0xDA, 
    0x2B, 0x7E, 0xC5, 0xAF, 0x24, 0x70, 0xC2, 0x08, 0x24, 0x70, 0xC2, 0x00, 0x45, 0xE8, 0x1B, 0x00, 0x3F, 0xC9, 0x19, 0x00, 
    0xC2, 0x01, 0x01, 0x00, 0xD6, 0x30, 0x30, 0x00, 0xEA, 0x0A, 0x07, 0x01, 0xE3, 0x24, 0x28, 0x1B, 0x6F, 0x83, 0xB5, 0x98, 
    0x40, 0x9B, 0xE1, 0xE6, 0x2D, 0xA4, 0xF4, 0xE4, 0x3B, 0xBA, 0xFE, 0xE6, 0x8D, 0xD8, 0xFF, 0xE6, 0x38, 0xA8, 0xFB, 0xE5, 
    0x32, 0x90, 0xDC, 0xE6, 0x24, 0x73, 0xC7, 0xC4, 0x61, 0xCD, 0x46, 0x00, 0x56, 0xE1, 0x2B, 0x00, 0x45, 0xE8, 0x1B, 0x00, 
    0x3F, 0xC9, 0x19, 0x00, 0xC2, 0x01, 0x01, 0x04, 0xD6, 0x30, 0x30, 0x6F, 0xE4, 0x50, 0x51, 0xAA, 0xEB, 0x62, 0x5E, 0xC4, 
    0xA9, 0x72, 0x86, 0xDB, 0x4D, 0x89, 0xC2, 0xE5, 0x21, 0x9C, 0xEC, 0xE6, 0x1D, 0x94, 0xF8, 0xE6, 0x78, 0xAE, 0xFD, 0xE6, 
    0x1F, 0x7E, 0xF9, 0xE6, 0x38, 0x8E, 0xC6, 0xE6, 0x47, 0x95, 0x9A, 0xD6, 0x61, 0xCD, 0x46, 0x6A, 0x56, 0xE1, 0x2B, 0x3C, 
    0x45, 0xE8, 0x1B, 0x15, 0x3F, 0xC9, 0x19, 0x01, 0xB0, 0x01, 0x01, 0x06, 0xC9, 0x2B, 0x2B, 0xA7, 0xE4, 0x34, 0x34, 0xCE, 
    0xF6, 0x36, 0x36, 0xD0, 0xF8, 0x76, 0x65, 0xE0, 0xF9, 0x3F, 0x11, 0xE5, 0xFB, 0x02, 0x02, 0xE4, 0x80, 0x52, 0x66, 0xE6, 
    0x37, 0xB1, 0x8C, 0xE6, 0x4F, 0xBC, 0x66, 0xE5, 0x75, 0xBD, 0x69, 0xE4, 0x94, 0xD3, 0x8C, 0xE0, 0x6D, 0xD8, 0x50, 0xCA, 
    0x57, 0xD7, 0x35, 0xC2, 0x39, 0xC7, 0x13, 0xA9, 0x29, 0xB7, 0x02, 0x19, 0xD9, 0x01, 0x01, 0x06, 0xBE, 0x2A, 0x2A, 0xA2, 
    0xD7, 0x39, 0x39, 0xCF, 0xF9, 0x17, 0x1A, 0xDE, 0xFF, 0x7D, 0x7D, 0xE6, 0xFE, 0x02, 0x01, 0xE6, 0xF9, 0x00, 0x01, 0xE2, 
    0xA3, 0x2F, 0x02, 0xE4, 0x49, 0xD7, 0x27, 0xE6, 0x58, 0xED, 0x4A, 0xE2, 0x4B, 0xEF, 0x26, 0xE6, 0x61, 0xEB, 0x44, 0xE4, 
    0x20, 0xD4, 0x00, 0xCF, 0x23, 0xC0, 0x00, 0xC4, 0x25, 0xAE, 0x00, 0xB1, 0x25, 0xA5, 0x00, 0x1C, 0xFD, 0x01, 0x01, 0x09, 
    0xC1, 0x2E, 0x2F, 0xAD, 0xC6, 0x28, 0x28, 0xDA, 0xDA, 0x01, 0x01, 0xE4, 0xFE, 0x80, 0x81, 0xE6, 0xD7, 0x08, 0x10, 0xE6, 
    0xB3, 0x01, 0x17, 0xE1, 0x73, 0x33, 0x25, 0xE1, 0x44, 0xC0, 0x4F, 0xE3, 0x46, 0xC5, 0x49, 0xDF, 0x1D, 0xC3, 0x01, 0xE6, 
    0x7B, 0xE9, 0x5D, 0xE6, 0x25, 0xC6, 0x00, 0xDA, 0x28, 0xB0, 0x01, 0xCA, 0x25, 0x9F, 0x00, 0xB3, 0x18, 0x8B, 0x00, 0x1C, 
    0xFA, 0x02, 0x02, 0x1D, 0xB7, 0x1A, 0x1A, 0xC5, 0xBF, 0x05, 0x05, 0xE3, 0xE1, 0x01, 0x01, 0xE3, 0xFA, 0x83, 0x81, 0xE4, 
    0xEA, 0x06, 0x06, 0xE2, 0xCE, 0x02, 0x05, 0xE0, 0x7D, 0x2D, 0x1E, 0xE1, 0x3A, 0x94, 0x36, 0xE3, 0x19, 0x99, 0x05, 0xDE, 
    0x24, 0xB4, 0x01, 0xE5, 0x83, 0xE4, 0x66, 0xE6, 0x2B, 0xB9, 0x03, 0xE4, 0x2B, 0xA3, 0x06, 0xDC, 0x25, 0x93, 0x03, 0xC8, 
    0x13, 0x84, 0x00, 0x25, 0xFB, 0x01, 0x01, 0x26, 0xCC, 0x08, 0x08, 0xA2, 0xCA, 0x05, 0x05, 0xD4, 0xC4, 0x01, 0x01, 0xE2, 
    0xDF, 0x81, 0x81, 0xE4, 0xC4, 0x03, 0x03, 0xE3, 0xCC, 0x00, 0x00, 0xD7, 0x86, 0x26, 0x06, 0xD0, 0x1E, 0x7C, 0x04, 0xE0, 
    0x1E, 0x8E, 0x00, 0xE0, 0x23, 0x94, 0x02, 0xE1, 0x77, 0xBD, 0x61, 0xE4, 0x21, 0x92, 0x00, 0xE2, 0x21, 0x8D, 0x00, 0xE1, 
    0x1F, 0x82, 0x00, 0xD2, 0x13, 0x82, 0x00, 0x37, 0xFC, 0x01, 0x01, 0x0F, 0xDE, 0x1B, 0x1B, 0x4B, 0xE7, 0x16, 0x16, 0x6A, 
    0xE7, 0x01, 0x01, 0x87, 0xE0, 0x0F, 0x0F, 0xA1, 0xD4, 0x03, 0x04, 0x91, 0xD4, 0x00, 0x00, 0x6A, 0x8C, 0x35, 0x06, 0x61, 
    0x31, 0x80, 0x10, 0x85, 0x1E, 0x7E, 0x06, 0xB1, 0x1E, 0x70, 0x05, 0xD4, 0x53, 0x8D, 0x3F, 0xE1, 0x19, 0x72, 0x00, 0xD0, 
    0x19, 0x80, 0x00, 0xAD, 0x19, 0x87, 0x00, 0x7E, 0x12, 0x85, 0x00, 0x27, 0xFA, 0x02, 0x02, 0x03, 0xBE, 0x1F, 0x1F, 0x1A, 
    0xC9, 0x07, 0x07, 0x24, 0xE9, 0x00, 0x00, 0x2B, 0xF8, 0x03, 0x03, 0x2C, 0xEE, 0x02, 0x02, 0x27, 0xC9, 0x00, 0x00, 0x20, 
    0x77, 0x38, 0x0C, 0x22, 0x39, 0x8E, 0x1E, 0x29, 0x1E, 0x93, 0x05, 0x34, 0x1A, 0x93, 0x02, 0x4E, 0x1F, 0x94, 0x08, 0x62, 
    0x17, 0x92, 0x00, 0x51, 0x19, 0x92, 0x00, 0x3B, 0x1B, 0x8D, 0x00, 0x2A, 0x13, 0x84, 0x00, 0x0C, 0xF8, 0x01, 0x01, 0x01, 
    0xB9, 0x03, 0x03, 0x03, 0xCE, 0x00, 0x00, 0x04, 0xDB, 0x00, 0x00, 0x04, 0xE8, 0x04, 0x04, 0x04, 0xD9, 0x02, 0x02, 0x04, 
    0xD8, 0x00, 0x00, 0x03, 0x93, 0x2B, 0x0E, 0x04, 0x25, 0x7A, 0x0C, 0x04, 0x15, 0x88, 0x00, 0x05, 0x16, 0x8D, 0x00, 0x09, 
    0x16, 0x8D, 0x01, 0x0C, 0x15, 0x8B, 0x00, 0x0B, 0x17, 0x8A, 0x00, 0x06, 0x19, 0x84, 0x00, 0x04, 0x13, 0x82, 0x00, 0x01, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 
    0xFF, 0xFF, 0xFF, 0x00, 
};

static const ximage image_default_plugin_16x16 =
{
    &default_plugin_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};