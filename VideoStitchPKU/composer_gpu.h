#ifndef __MY_COMPOSER_GPU_H__
#define __MY_COMPOSER_GPU_H__

#include "gutil.h"

#if 0
extern int testGPU();

extern int initGPU(int n);

extern int initdataCopy2GPU(C2GInitData *c2g_data, int pano_height, int pano_width);

extern int composeGPU(GPUImageData *images, unsigned char *dst);

extern int freeGPU();
#else
int testGPU() { return -1; };

int initGPU(int n) { return -1; };

int initdataCopy2GPU(C2GInitData *c2g_data, int pano_height, int pano_width) { return -1; };

int composeGPU(GPUImageData *images, unsigned char *dst) { return -1; };

int freeGPU() { return -1; };

#endif 


#endif
