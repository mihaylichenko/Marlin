#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

extern const uint8_t point_40x40x4[800] = {
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x24, 0x6f, 0xff, 0x42, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x83, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xe9, 0x38, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x84, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x48, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x81, 0xaf, 0xff, 0xff, 0xeb, 0x9f, 0xff, 0xbe, 0xff, 0xff, 0xfa, 0x18, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x3e, 0xff, 0xff, 0x93, 0x88, 0x8f, 0xff, 0x88, 0x39, 0xff, 0xff, 0xe3, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x84, 0xff, 0xff, 0x91, 0x88, 0x88, 0x8f, 0xff, 0x88, 0x88, 0x19, 0xff, 0xff, 0x48, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x3f, 0xff, 0xe4, 0x88, 0x88, 0x88, 0x8f, 0xff, 0x88, 0x88, 0x88, 0x4e, 0xff, 0xf3, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x81, 0xef, 0xfe, 0x28, 0x88, 0x88, 0x88, 0x8f, 0xff, 0x88, 0x88, 0x88, 0x82, 0xef, 0xfe, 0x18, 0x88, 0x88, 
    0x88, 0x88, 0x8a, 0xff, 0xe2, 0x88, 0x88, 0x88, 0x88, 0x8f, 0xff, 0x88, 0x88, 0x88, 0x88, 0x2e, 0xff, 0xa8, 0x88, 0x88, 
    0x88, 0x88, 0x4f, 0xff, 0x48, 0x88, 0x88, 0x88, 0x88, 0x3f, 0xff, 0x38, 0x88, 0x88, 0x88, 0x84, 0xff, 0xf4, 0x88, 0x88, 
    0x88, 0x88, 0xcf, 0xf9, 0x88, 0x88, 0x88, 0x88, 0x8e, 0xff, 0xff, 0xfe, 0x88, 0x88, 0x88, 0x88, 0x9f, 0xfc, 0x88, 0x88, 
    0x88, 0x83, 0xff, 0xf1, 0x88, 0x88, 0x88, 0x3e, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x38, 0x88, 0x88, 0x1f, 0xff, 0x38, 0x88, 
    0x88, 0x89, 0xff, 0x98, 0x88, 0x88, 0x83, 0xff, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xf3, 0x88, 0x88, 0x89, 0xff, 0x98, 0x88, 
    0x88, 0x8e, 0xff, 0x38, 0x88, 0x88, 0x8e, 0xff, 0xe5, 0x8f, 0xff, 0x85, 0xef, 0xfe, 0x88, 0x88, 0x83, 0xff, 0xe8, 0x88, 
    0x88, 0x2f, 0xfe, 0x88, 0x88, 0x88, 0x8f, 0xfe, 0x28, 0x8f, 0xff, 0x88, 0x2e, 0xff, 0x88, 0x88, 0x88, 0xef, 0xf2, 0x88, 
    0x88, 0x4f, 0xfb, 0x88, 0x88, 0x88, 0xef, 0xf5, 0x88, 0x8f, 0xff, 0x88, 0x85, 0xff, 0xe8, 0x88, 0x88, 0xbf, 0xf4, 0x88, 
    0x88, 0x6f, 0xf9, 0x88, 0x88, 0x83, 0xff, 0xd8, 0x88, 0x8f, 0xff, 0x88, 0x88, 0xdf, 0xf3, 0x88, 0x88, 0x9f, 0xf6, 0x88, 
    0x88, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x88, 
    0x88, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x88, 
    0x88, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x88, 
    0x88, 0x4f, 0xfb, 0x88, 0x88, 0x84, 0xff, 0xd8, 0x88, 0x8f, 0xff, 0x88, 0x88, 0xdf, 0xf3, 0x88, 0x88, 0xbf, 0xf4, 0x88, 
    0x88, 0x2f, 0xfe, 0x88, 0x88, 0x88, 0xef, 0xf5, 0x88, 0x8f, 0xff, 0x88, 0x85, 0xff, 0xe8, 0x88, 0x88, 0xef, 0xf2, 0x88, 
    0x88, 0x8e, 0xff, 0x38, 0x88, 0x88, 0x8f, 0xfe, 0x28, 0x8f, 0xff, 0x88, 0x2e, 0xff, 0x88, 0x88, 0x83, 0xff, 0xe8, 0x88, 
    0x88, 0x89, 0xff, 0x98, 0x88, 0x88, 0x8e, 0xff, 0xe5, 0x8f, 0xff, 0x85, 0xef, 0xfe, 0x88, 0x88, 0x89, 0xff, 0x98, 0x88, 
    0x88, 0x83, 0xff, 0xf1, 0x88, 0x88, 0x83, 0xff, 0xff, 0xdf, 0xff, 0xdf, 0xff, 0xf3, 0x88, 0x88, 0x1f, 0xff, 0x38, 0x88, 
    0x88, 0x88, 0xcf, 0xf9, 0x88, 0x88, 0x88, 0x3e, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x38, 0x88, 0x88, 0x9f, 0xfc, 0x88, 0x88, 
    0x88, 0x88, 0x4f, 0xff, 0x48, 0x88, 0x88, 0x88, 0x8e, 0xff, 0xff, 0xfe, 0x88, 0x88, 0x88, 0x84, 0xff, 0xf4, 0x88, 0x88, 
    0x88, 0x88, 0x8a, 0xff, 0xe2, 0x88, 0x88, 0x88, 0x88, 0x3f, 0xff, 0x38, 0x88, 0x88, 0x88, 0x2e, 0xff, 0xa8, 0x88, 0x88, 
    0x88, 0x88, 0x81, 0xef, 0xfe, 0x28, 0x88, 0x88, 0x88, 0x8f, 0xff, 0x88, 0x88, 0x88, 0x82, 0xef, 0xfe, 0x18, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x3f, 0xff, 0xe4, 0x88, 0x88, 0x88, 0x8f, 0xff, 0x88, 0x88, 0x88, 0x4e, 0xff, 0xf3, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x84, 0xff, 0xff, 0x91, 0x88, 0x88, 0x8f, 0xff, 0x88, 0x88, 0x19, 0xff, 0xff, 0x48, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x3e, 0xff, 0xff, 0x93, 0x88, 0x8f, 0xff, 0x88, 0x39, 0xff, 0xff, 0xe3, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x81, 0xaf, 0xff, 0xff, 0xeb, 0x9f, 0xff, 0xbe, 0xff, 0xff, 0xfa, 0x18, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x84, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x48, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x83, 0x9e, 0xff, 0xff, 0xff, 0xff, 0xe9, 0x38, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x24, 0x6f, 0xff, 0x42, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88
};

#endif // HAS_GRAPHICAL_TFT