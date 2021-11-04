

#include "vta/runtime.h"
#include "VTABundle.h"
#include <time.h>
#include <iostream>
#include <fstream>
#include "vgg19_caffe2.h"
SymbolTableEntry symbolTableEntry_vgg19_caffe2[2]={{"data_0",0,150528,'1'},{"prob_1",602112,1000,'1'}};
BundleConfig vgg19_caffe2_config = {143708256, 606112, 0, 64, 2, symbolTableEntry_vgg19_caffe2};
namespace namespace_vgg19_caffe2 {
int8_t* conv1_1_w_0__1;
int8_t* conv1_1_b_0;
int8_t* conv1_2_w_0__1;
int8_t* conv1_2_b_0;
int8_t* conv2_1_w_0__1;
int8_t* conv2_1_b_0;
int8_t* conv2_2_w_0__1;
int8_t* conv2_2_b_0;
int8_t* conv3_1_w_0__1;
int8_t* conv3_1_b_0;
int8_t* conv3_2_w_0__1;
int8_t* conv3_3_w_0__1;
int8_t* conv3_3_b_0;
int8_t* conv3_4_w_0__1;
int8_t* conv3_4_b_0;
int8_t* conv4_1_w_0__1;
int8_t* conv4_1_b_0;
int8_t* conv4_2_w_0__1;
int8_t* conv4_2_b_0;
int8_t* conv4_3_w_0__1;
int8_t* conv4_4_w_0__1;
int8_t* conv4_4_b_0;
int8_t* conv5_1_w_0__1;
int8_t* conv5_1_b_0;
int8_t* conv5_2_w_0__1;
int8_t* conv5_2_b_0;
int8_t* conv5_3_w_0__1;
int8_t* conv5_3_b_0;
int8_t* conv5_4_w_0__1;
int8_t* conv5_4_b_0;
int8_t* fc6_w_0__2;
int8_t* fc6_b_0;
int8_t* fc7_w_0__1;
int8_t* fc7_b_0;
int8_t* fc8_w_0__1;
int8_t* fc8_b_0;
}
using namespace namespace_vgg19_caffe2;
extern VTACommandHandle vtaCmdH;

void vgg19_caffe2_load_module(uint8_t *constantWeight){
  conv1_1_w_0__1 = (int8_t *)VTABufferAlloc(1728);
  VTABufferCopy((int8_t *)(constantWeight + 0), 0, conv1_1_w_0__1, 0, 1728, 1);
  conv1_1_b_0 = (int8_t *)VTABufferAlloc(256);
  VTABufferCopy((int8_t *)(constantWeight + 1728), 0, conv1_1_b_0, 0, 256, 1);
  conv1_2_w_0__1 = (int8_t *)VTABufferAlloc(36864);
  VTABufferCopy((int8_t *)(constantWeight + 1984), 0, conv1_2_w_0__1, 0, 36864, 1);
  conv1_2_b_0 = (int8_t *)VTABufferAlloc(256);
  VTABufferCopy((int8_t *)(constantWeight + 38848), 0, conv1_2_b_0, 0, 256, 1);
  conv2_1_w_0__1 = (int8_t *)VTABufferAlloc(73728);
  VTABufferCopy((int8_t *)(constantWeight + 39104), 0, conv2_1_w_0__1, 0, 73728, 1);
  conv2_1_b_0 = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 112832), 0, conv2_1_b_0, 0, 512, 1);
  conv2_2_w_0__1 = (int8_t *)VTABufferAlloc(147456);
  VTABufferCopy((int8_t *)(constantWeight + 113344), 0, conv2_2_w_0__1, 0, 147456, 1);
  conv2_2_b_0 = (int8_t *)VTABufferAlloc(512);
  VTABufferCopy((int8_t *)(constantWeight + 260800), 0, conv2_2_b_0, 0, 512, 1);
  conv3_1_w_0__1 = (int8_t *)VTABufferAlloc(294912);
  VTABufferCopy((int8_t *)(constantWeight + 261312), 0, conv3_1_w_0__1, 0, 294912, 1);
  conv3_1_b_0 = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 556224), 0, conv3_1_b_0, 0, 1024, 1);
  conv3_2_w_0__1 = (int8_t *)VTABufferAlloc(589824);
  VTABufferCopy((int8_t *)(constantWeight + 557248), 0, conv3_2_w_0__1, 0, 589824, 1);
  conv3_3_w_0__1 = (int8_t *)VTABufferAlloc(589824);
  VTABufferCopy((int8_t *)(constantWeight + 1147072), 0, conv3_3_w_0__1, 0, 589824, 1);
  conv3_3_b_0 = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 1736896), 0, conv3_3_b_0, 0, 1024, 1);
  conv3_4_w_0__1 = (int8_t *)VTABufferAlloc(589824);
  VTABufferCopy((int8_t *)(constantWeight + 1737920), 0, conv3_4_w_0__1, 0, 589824, 1);
  conv3_4_b_0 = (int8_t *)VTABufferAlloc(1024);
  VTABufferCopy((int8_t *)(constantWeight + 2327744), 0, conv3_4_b_0, 0, 1024, 1);
  conv4_1_w_0__1 = (int8_t *)VTABufferAlloc(1179648);
  VTABufferCopy((int8_t *)(constantWeight + 2328768), 0, conv4_1_w_0__1, 0, 1179648, 1);
  conv4_1_b_0 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 3508416), 0, conv4_1_b_0, 0, 2048, 1);
  conv4_2_w_0__1 = (int8_t *)VTABufferAlloc(2359296);
  VTABufferCopy((int8_t *)(constantWeight + 3510464), 0, conv4_2_w_0__1, 0, 2359296, 1);
  conv4_2_b_0 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 5869760), 0, conv4_2_b_0, 0, 2048, 1);
  conv4_3_w_0__1 = (int8_t *)VTABufferAlloc(2359296);
  VTABufferCopy((int8_t *)(constantWeight + 5871808), 0, conv4_3_w_0__1, 0, 2359296, 1);
  conv4_4_w_0__1 = (int8_t *)VTABufferAlloc(2359296);
  VTABufferCopy((int8_t *)(constantWeight + 8231104), 0, conv4_4_w_0__1, 0, 2359296, 1);
  conv4_4_b_0 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 10590400), 0, conv4_4_b_0, 0, 2048, 1);
  conv5_1_w_0__1 = (int8_t *)VTABufferAlloc(2359296);
  VTABufferCopy((int8_t *)(constantWeight + 10592448), 0, conv5_1_w_0__1, 0, 2359296, 1);
  conv5_1_b_0 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 12951744), 0, conv5_1_b_0, 0, 2048, 1);
  conv5_2_w_0__1 = (int8_t *)VTABufferAlloc(2359296);
  VTABufferCopy((int8_t *)(constantWeight + 12953792), 0, conv5_2_w_0__1, 0, 2359296, 1);
  conv5_2_b_0 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 15313088), 0, conv5_2_b_0, 0, 2048, 1);
  conv5_3_w_0__1 = (int8_t *)VTABufferAlloc(2359296);
  VTABufferCopy((int8_t *)(constantWeight + 15315136), 0, conv5_3_w_0__1, 0, 2359296, 1);
  conv5_3_b_0 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 17674432), 0, conv5_3_b_0, 0, 2048, 1);
  conv5_4_w_0__1 = (int8_t *)VTABufferAlloc(2359296);
  VTABufferCopy((int8_t *)(constantWeight + 17676480), 0, conv5_4_w_0__1, 0, 2359296, 1);
  conv5_4_b_0 = (int8_t *)VTABufferAlloc(2048);
  VTABufferCopy((int8_t *)(constantWeight + 20035776), 0, conv5_4_b_0, 0, 2048, 1);
  fc6_w_0__2 = (int8_t *)VTABufferAlloc(102760448);
  VTABufferCopy((int8_t *)(constantWeight + 20037824), 0, fc6_w_0__2, 0, 102760448, 1);
  fc6_b_0 = (int8_t *)VTABufferAlloc(16384);
  VTABufferCopy((int8_t *)(constantWeight + 122798272), 0, fc6_b_0, 0, 16384, 1);
  fc7_w_0__1 = (int8_t *)VTABufferAlloc(16777216);
  VTABufferCopy((int8_t *)(constantWeight + 122814656), 0, fc7_w_0__1, 0, 16777216, 1);
  fc7_b_0 = (int8_t *)VTABufferAlloc(16384);
  VTABufferCopy((int8_t *)(constantWeight + 139591872), 0, fc7_b_0, 0, 16384, 1);
  fc8_w_0__1 = (int8_t *)VTABufferAlloc(4096000);
  VTABufferCopy((int8_t *)(constantWeight + 139608256), 0, fc8_w_0__1, 0, 4096000, 1);
  fc8_b_0 = (int8_t *)VTABufferAlloc(4000);
  VTABufferCopy((int8_t *)(constantWeight + 143704256), 0, fc8_b_0, 0, 4000, 1);
}

void vgg19_caffe2_destroy_module(){
  VTABufferFree(conv1_1_w_0__1);
  VTABufferFree(conv1_1_b_0);
  VTABufferFree(conv1_2_w_0__1);
  VTABufferFree(conv1_2_b_0);
  VTABufferFree(conv2_1_w_0__1);
  VTABufferFree(conv2_1_b_0);
  VTABufferFree(conv2_2_w_0__1);
  VTABufferFree(conv2_2_b_0);
  VTABufferFree(conv3_1_w_0__1);
  VTABufferFree(conv3_1_b_0);
  VTABufferFree(conv3_2_w_0__1);
  VTABufferFree(conv3_3_w_0__1);
  VTABufferFree(conv3_3_b_0);
  VTABufferFree(conv3_4_w_0__1);
  VTABufferFree(conv3_4_b_0);
  VTABufferFree(conv4_1_w_0__1);
  VTABufferFree(conv4_1_b_0);
  VTABufferFree(conv4_2_w_0__1);
  VTABufferFree(conv4_2_b_0);
  VTABufferFree(conv4_3_w_0__1);
  VTABufferFree(conv4_4_w_0__1);
  VTABufferFree(conv4_4_b_0);
  VTABufferFree(conv5_1_w_0__1);
  VTABufferFree(conv5_1_b_0);
  VTABufferFree(conv5_2_w_0__1);
  VTABufferFree(conv5_2_b_0);
  VTABufferFree(conv5_3_w_0__1);
  VTABufferFree(conv5_3_b_0);
  VTABufferFree(conv5_4_w_0__1);
  VTABufferFree(conv5_4_b_0);
  VTABufferFree(fc6_w_0__2);
  VTABufferFree(fc6_b_0);
  VTABufferFree(fc7_w_0__1);
  VTABufferFree(fc7_b_0);
  VTABufferFree(fc8_w_0__1);
  VTABufferFree(fc8_b_0);
}
int vgg19_caffe2(uint8_t *constantWeight, uint8_t *mutableWeight, uint8_t *activations){

  //Run allocactivation : Conv_conv1_1_1__1_quantize_res
  int8_t *Conv_conv1_1_1__1_quantize_res = (int8_t *)malloc(150528);

  //Run quantize : Conv_conv1_1_1__1_quantize
  int8_t* data_0 = (int8_t*)mutableWeight + 0;
  quantize(data_0, Conv_conv1_1_1__1_quantize_res, 150528, 1/0.250000, 0 );

  //Run allocactivation : Conv_conv1_1_1__9_res
  int8_t *Conv_conv1_1_1__9_res = (int8_t *)malloc(150528);

  //Run transpose : Conv_conv1_1_1__9
  transpose(Conv_conv1_1_1__1_quantize_res, Conv_conv1_1_1__9_res, 1, 3, 224, 224, 1, 224, 224, 3, 0, 2, 3, 1 );

  //Run deallocactivation : dealloc_Conv_conv1_1_1__1_quantize_res
  free(Conv_conv1_1_1__1_quantize_res);

  //Run allocactivation : Conv_conv1_1_1__2_res
  int8_t *Conv_conv1_1_1__2_res = (int8_t *)malloc(3211264);

  //Run convolution : Conv_conv1_1_1__2
  nonvtaconvolution(Conv_conv1_1_1__9_res, 1.0/0.250000, 0, (int8_t *)VTABufferGetVirtAddr(conv1_1_w_0__1), 1.0/128.000000, 0, (int8_t *)VTABufferGetVirtAddr(conv1_1_b_0), 1.0/32.000000, 0, Conv_conv1_1_1__2_res, 1.0/0.125000, 0, 1, 224, 224, 3, 64, 3, 3, 1, 1, 1, 1, 1, 1, 224, 224 );

  //Run deallocactivation : dealloc_Conv_conv1_1_1__9_res
  free(Conv_conv1_1_1__9_res);

  //Run allocactivation : Conv_conv1_2_1__2_res
  int8_t *Conv_conv1_2_1__2_res = (int8_t *)malloc(3211264);

  //Run convolution : Conv_conv1_2_1__2
  int8_t* Conv_conv1_2_1__2_input_transpose = (int8_t *)VTABufferAlloc(3211264);
  transpose_nhwc2vtaio(Conv_conv1_1_1__2_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv1_2_1__2_input_transpose), 1, 224, 224, 64);
  int8_t* Conv_conv1_2_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(3211264);
  convolution_wo_tr(Conv_conv1_2_1__2_input_transpose, conv1_2_w_0__1, (int32_t *)conv1_2_b_0, Conv_conv1_2_1__2_output_bef_transpose, 1, 224, 224, 64, 64, 3, 3, 1, 1, 1, 1, 11, 224, 224, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv1_2_1__2_output_bef_transpose), Conv_conv1_2_1__2_res, 1, 224, 224, 64 );
  VTABufferFree(Conv_conv1_2_1__2_input_transpose);
  VTABufferFree(Conv_conv1_2_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_conv1_1_1__2_res
  free(Conv_conv1_1_1__2_res);

  //Run allocactivation : MaxPool_pool1_1__1_res
  int8_t *MaxPool_pool1_1__1_res = (int8_t *)malloc(802816);

  //Run maxpool : MaxPool_pool1_1__2
  maxpool(Conv_conv1_2_1__2_res, MaxPool_pool1_1__1_res, 1, 224, 224, 64, 2, 2, 0, 2 );

  //Run deallocactivation : dealloc_Conv_conv1_2_1__2_res
  free(Conv_conv1_2_1__2_res);

  //Run allocactivation : Conv_conv2_1_1__2_res
  int8_t *Conv_conv2_1_1__2_res = (int8_t *)malloc(1605632);

  //Run convolution : Conv_conv2_1_1__2
  int8_t* Conv_conv2_1_1__2_input_transpose = (int8_t *)VTABufferAlloc(802816);
  transpose_nhwc2vtaio(MaxPool_pool1_1__1_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv2_1_1__2_input_transpose), 1, 112, 112, 64);
  int8_t* Conv_conv2_1_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(1605632);
  convolution_wo_tr(Conv_conv2_1_1__2_input_transpose, conv2_1_w_0__1, (int32_t *)conv2_1_b_0, Conv_conv2_1_1__2_output_bef_transpose, 1, 112, 112, 64, 128, 3, 3, 1, 1, 1, 1, 9, 112, 112, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv2_1_1__2_output_bef_transpose), Conv_conv2_1_1__2_res, 1, 112, 112, 128 );
  VTABufferFree(Conv_conv2_1_1__2_input_transpose);
  VTABufferFree(Conv_conv2_1_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_MaxPool_pool1_1__1_res
  free(MaxPool_pool1_1__1_res);

  //Run allocactivation : Conv_conv2_2_1__2_res
  int8_t *Conv_conv2_2_1__2_res = (int8_t *)malloc(1605632);

  //Run convolution : Conv_conv2_2_1__2
  int8_t* Conv_conv2_2_1__2_input_transpose = (int8_t *)VTABufferAlloc(1605632);
  transpose_nhwc2vtaio(Conv_conv2_1_1__2_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv2_2_1__2_input_transpose), 1, 112, 112, 128);
  int8_t* Conv_conv2_2_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(1605632);
  convolution_wo_tr(Conv_conv2_2_1__2_input_transpose, conv2_2_w_0__1, (int32_t *)conv2_2_b_0, Conv_conv2_2_1__2_output_bef_transpose, 1, 112, 112, 128, 128, 3, 3, 1, 1, 1, 1, 10, 112, 112, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv2_2_1__2_output_bef_transpose), Conv_conv2_2_1__2_res, 1, 112, 112, 128 );
  VTABufferFree(Conv_conv2_2_1__2_input_transpose);
  VTABufferFree(Conv_conv2_2_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_conv2_1_1__2_res
  free(Conv_conv2_1_1__2_res);

  //Run allocactivation : MaxPool_pool2_1__1_res
  int8_t *MaxPool_pool2_1__1_res = (int8_t *)malloc(401408);

  //Run maxpool : MaxPool_pool2_1__2
  maxpool(Conv_conv2_2_1__2_res, MaxPool_pool2_1__1_res, 1, 112, 112, 128, 2, 2, 0, 2 );

  //Run deallocactivation : dealloc_Conv_conv2_2_1__2_res
  free(Conv_conv2_2_1__2_res);

  //Run allocactivation : Conv_conv3_1_1__2_res
  int8_t *Conv_conv3_1_1__2_res = (int8_t *)malloc(802816);

  //Run convolution : Conv_conv3_1_1__2
  int8_t* Conv_conv3_1_1__2_input_transpose = (int8_t *)VTABufferAlloc(401408);
  transpose_nhwc2vtaio(MaxPool_pool2_1__1_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv3_1_1__2_input_transpose), 1, 56, 56, 128);
  int8_t* Conv_conv3_1_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(802816);
  convolution_wo_tr(Conv_conv3_1_1__2_input_transpose, conv3_1_w_0__1, (int32_t *)conv3_1_b_0, Conv_conv3_1_1__2_output_bef_transpose, 1, 56, 56, 128, 256, 3, 3, 1, 1, 1, 0, 7, 56, 56, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv3_1_1__2_output_bef_transpose), Conv_conv3_1_1__2_res, 1, 56, 56, 256 );
  VTABufferFree(Conv_conv3_1_1__2_input_transpose);
  VTABufferFree(Conv_conv3_1_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_MaxPool_pool2_1__1_res
  free(MaxPool_pool2_1__1_res);

  //Run allocactivation : Conv_conv3_2_1__2_res
  int8_t *Conv_conv3_2_1__2_res = (int8_t *)malloc(802816);

  //Run convolution : Conv_conv3_2_1__2
  int8_t* Conv_conv3_2_1__2_input_transpose = (int8_t *)VTABufferAlloc(802816);
  transpose_nhwc2vtaio(Conv_conv3_1_1__2_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv3_2_1__2_input_transpose), 1, 56, 56, 256);
  int8_t* Conv_conv3_2_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(802816);
  convolution_wo_tr(Conv_conv3_2_1__2_input_transpose, conv3_2_w_0__1, (int32_t *)conv3_1_b_0, Conv_conv3_2_1__2_output_bef_transpose, 1, 56, 56, 256, 256, 3, 3, 1, 1, 1, 0, 7, 56, 56, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv3_2_1__2_output_bef_transpose), Conv_conv3_2_1__2_res, 1, 56, 56, 256 );
  VTABufferFree(Conv_conv3_2_1__2_input_transpose);
  VTABufferFree(Conv_conv3_2_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_conv3_1_1__2_res
  free(Conv_conv3_1_1__2_res);

  //Run allocactivation : Conv_conv3_3_1__2_res
  int8_t *Conv_conv3_3_1__2_res = (int8_t *)malloc(802816);

  //Run convolution : Conv_conv3_3_1__2
  int8_t* Conv_conv3_3_1__2_input_transpose = (int8_t *)VTABufferAlloc(802816);
  transpose_nhwc2vtaio(Conv_conv3_2_1__2_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv3_3_1__2_input_transpose), 1, 56, 56, 256);
  int8_t* Conv_conv3_3_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(802816);
  convolution_wo_tr(Conv_conv3_3_1__2_input_transpose, conv3_3_w_0__1, (int32_t *)conv3_3_b_0, Conv_conv3_3_1__2_output_bef_transpose, 1, 56, 56, 256, 256, 3, 3, 1, 1, 1, 1, 9, 56, 56, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv3_3_1__2_output_bef_transpose), Conv_conv3_3_1__2_res, 1, 56, 56, 256 );
  VTABufferFree(Conv_conv3_3_1__2_input_transpose);
  VTABufferFree(Conv_conv3_3_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_conv3_2_1__2_res
  free(Conv_conv3_2_1__2_res);

  //Run allocactivation : Conv_conv3_4_1__2_res
  int8_t *Conv_conv3_4_1__2_res = (int8_t *)malloc(802816);

  //Run convolution : Conv_conv3_4_1__2
  int8_t* Conv_conv3_4_1__2_input_transpose = (int8_t *)VTABufferAlloc(802816);
  transpose_nhwc2vtaio(Conv_conv3_3_1__2_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv3_4_1__2_input_transpose), 1, 56, 56, 256);
  int8_t* Conv_conv3_4_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(802816);
  convolution_wo_tr(Conv_conv3_4_1__2_input_transpose, conv3_4_w_0__1, (int32_t *)conv3_4_b_0, Conv_conv3_4_1__2_output_bef_transpose, 1, 56, 56, 256, 256, 3, 3, 1, 1, 1, 1, 9, 56, 56, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv3_4_1__2_output_bef_transpose), Conv_conv3_4_1__2_res, 1, 56, 56, 256 );
  VTABufferFree(Conv_conv3_4_1__2_input_transpose);
  VTABufferFree(Conv_conv3_4_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_conv3_3_1__2_res
  free(Conv_conv3_3_1__2_res);

  //Run allocactivation : MaxPool_pool3_1__1_res
  int8_t *MaxPool_pool3_1__1_res = (int8_t *)malloc(200704);

  //Run maxpool : MaxPool_pool3_1__2
  maxpool(Conv_conv3_4_1__2_res, MaxPool_pool3_1__1_res, 1, 56, 56, 256, 2, 2, 0, 2 );

  //Run deallocactivation : dealloc_Conv_conv3_4_1__2_res
  free(Conv_conv3_4_1__2_res);

  //Run allocactivation : Conv_conv4_1_1__2_res
  int8_t *Conv_conv4_1_1__2_res = (int8_t *)malloc(401408);

  //Run convolution : Conv_conv4_1_1__2
  int8_t* Conv_conv4_1_1__2_input_transpose = (int8_t *)VTABufferAlloc(200704);
  transpose_nhwc2vtaio(MaxPool_pool3_1__1_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv4_1_1__2_input_transpose), 1, 28, 28, 256);
  int8_t* Conv_conv4_1_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(401408);
  convolution_wo_tr(Conv_conv4_1_1__2_input_transpose, conv4_1_w_0__1, (int32_t *)conv4_1_b_0, Conv_conv4_1_1__2_output_bef_transpose, 1, 28, 28, 256, 512, 3, 3, 1, 1, 1, 0, 9, 28, 28, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv4_1_1__2_output_bef_transpose), Conv_conv4_1_1__2_res, 1, 28, 28, 512 );
  VTABufferFree(Conv_conv4_1_1__2_input_transpose);
  VTABufferFree(Conv_conv4_1_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_MaxPool_pool3_1__1_res
  free(MaxPool_pool3_1__1_res);

  //Run allocactivation : Conv_conv4_2_1__2_res
  int8_t *Conv_conv4_2_1__2_res = (int8_t *)malloc(401408);

  //Run convolution : Conv_conv4_2_1__2
  int8_t* Conv_conv4_2_1__2_input_transpose = (int8_t *)VTABufferAlloc(401408);
  transpose_nhwc2vtaio(Conv_conv4_1_1__2_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv4_2_1__2_input_transpose), 1, 28, 28, 512);
  int8_t* Conv_conv4_2_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(401408);
  convolution_wo_tr(Conv_conv4_2_1__2_input_transpose, conv4_2_w_0__1, (int32_t *)conv4_2_b_0, Conv_conv4_2_1__2_output_bef_transpose, 1, 28, 28, 512, 512, 3, 3, 1, 1, 1, 0, 8, 28, 28, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv4_2_1__2_output_bef_transpose), Conv_conv4_2_1__2_res, 1, 28, 28, 512 );
  VTABufferFree(Conv_conv4_2_1__2_input_transpose);
  VTABufferFree(Conv_conv4_2_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_conv4_1_1__2_res
  free(Conv_conv4_1_1__2_res);

  //Run allocactivation : Conv_conv4_3_1__2_res
  int8_t *Conv_conv4_3_1__2_res = (int8_t *)malloc(401408);

  //Run convolution : Conv_conv4_3_1__2
  int8_t* Conv_conv4_3_1__2_input_transpose = (int8_t *)VTABufferAlloc(401408);
  transpose_nhwc2vtaio(Conv_conv4_2_1__2_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv4_3_1__2_input_transpose), 1, 28, 28, 512);
  int8_t* Conv_conv4_3_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(401408);
  convolution_wo_tr(Conv_conv4_3_1__2_input_transpose, conv4_3_w_0__1, (int32_t *)conv4_2_b_0, Conv_conv4_3_1__2_output_bef_transpose, 1, 28, 28, 512, 512, 3, 3, 1, 1, 1, 0, 7, 28, 28, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv4_3_1__2_output_bef_transpose), Conv_conv4_3_1__2_res, 1, 28, 28, 512 );
  VTABufferFree(Conv_conv4_3_1__2_input_transpose);
  VTABufferFree(Conv_conv4_3_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_conv4_2_1__2_res
  free(Conv_conv4_2_1__2_res);

  //Run allocactivation : Conv_conv4_4_1__2_res
  int8_t *Conv_conv4_4_1__2_res = (int8_t *)malloc(401408);

  //Run convolution : Conv_conv4_4_1__2
  int8_t* Conv_conv4_4_1__2_input_transpose = (int8_t *)VTABufferAlloc(401408);
  transpose_nhwc2vtaio(Conv_conv4_3_1__2_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv4_4_1__2_input_transpose), 1, 28, 28, 512);
  int8_t* Conv_conv4_4_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(401408);
  convolution_wo_tr(Conv_conv4_4_1__2_input_transpose, conv4_4_w_0__1, (int32_t *)conv4_4_b_0, Conv_conv4_4_1__2_output_bef_transpose, 1, 28, 28, 512, 512, 3, 3, 1, 1, 1, 1, 8, 28, 28, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv4_4_1__2_output_bef_transpose), Conv_conv4_4_1__2_res, 1, 28, 28, 512 );
  VTABufferFree(Conv_conv4_4_1__2_input_transpose);
  VTABufferFree(Conv_conv4_4_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_conv4_3_1__2_res
  free(Conv_conv4_3_1__2_res);

  //Run allocactivation : MaxPool_pool4_1__1_res
  int8_t *MaxPool_pool4_1__1_res = (int8_t *)malloc(100352);

  //Run maxpool : MaxPool_pool4_1__2
  maxpool(Conv_conv4_4_1__2_res, MaxPool_pool4_1__1_res, 1, 28, 28, 512, 2, 2, 0, 2 );

  //Run deallocactivation : dealloc_Conv_conv4_4_1__2_res
  free(Conv_conv4_4_1__2_res);

  //Run allocactivation : Conv_conv5_1_1__2_res
  int8_t *Conv_conv5_1_1__2_res = (int8_t *)malloc(100352);

  //Run convolution : Conv_conv5_1_1__2
  int8_t* Conv_conv5_1_1__2_input_transpose = (int8_t *)VTABufferAlloc(100352);
  transpose_nhwc2vtaio(MaxPool_pool4_1__1_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv5_1_1__2_input_transpose), 1, 14, 14, 512);
  int8_t* Conv_conv5_1_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(100352);
  convolution_wo_tr(Conv_conv5_1_1__2_input_transpose, conv5_1_w_0__1, (int32_t *)conv5_1_b_0, Conv_conv5_1_1__2_output_bef_transpose, 1, 14, 14, 512, 512, 3, 3, 1, 1, 1, 1, 8, 14, 14, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv5_1_1__2_output_bef_transpose), Conv_conv5_1_1__2_res, 1, 14, 14, 512 );
  VTABufferFree(Conv_conv5_1_1__2_input_transpose);
  VTABufferFree(Conv_conv5_1_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_MaxPool_pool4_1__1_res
  free(MaxPool_pool4_1__1_res);

  //Run allocactivation : Conv_conv5_2_1__2_res
  int8_t *Conv_conv5_2_1__2_res = (int8_t *)malloc(100352);

  //Run convolution : Conv_conv5_2_1__2
  int8_t* Conv_conv5_2_1__2_input_transpose = (int8_t *)VTABufferAlloc(100352);
  transpose_nhwc2vtaio(Conv_conv5_1_1__2_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv5_2_1__2_input_transpose), 1, 14, 14, 512);
  int8_t* Conv_conv5_2_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(100352);
  convolution_wo_tr(Conv_conv5_2_1__2_input_transpose, conv5_2_w_0__1, (int32_t *)conv5_2_b_0, Conv_conv5_2_1__2_output_bef_transpose, 1, 14, 14, 512, 512, 3, 3, 1, 1, 1, 1, 7, 14, 14, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv5_2_1__2_output_bef_transpose), Conv_conv5_2_1__2_res, 1, 14, 14, 512 );
  VTABufferFree(Conv_conv5_2_1__2_input_transpose);
  VTABufferFree(Conv_conv5_2_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_conv5_1_1__2_res
  free(Conv_conv5_1_1__2_res);

  //Run allocactivation : Conv_conv5_3_1__2_res
  int8_t *Conv_conv5_3_1__2_res = (int8_t *)malloc(100352);

  //Run convolution : Conv_conv5_3_1__2
  int8_t* Conv_conv5_3_1__2_input_transpose = (int8_t *)VTABufferAlloc(100352);
  transpose_nhwc2vtaio(Conv_conv5_2_1__2_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv5_3_1__2_input_transpose), 1, 14, 14, 512);
  int8_t* Conv_conv5_3_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(100352);
  convolution_wo_tr(Conv_conv5_3_1__2_input_transpose, conv5_3_w_0__1, (int32_t *)conv5_3_b_0, Conv_conv5_3_1__2_output_bef_transpose, 1, 14, 14, 512, 512, 3, 3, 1, 1, 1, 1, 7, 14, 14, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv5_3_1__2_output_bef_transpose), Conv_conv5_3_1__2_res, 1, 14, 14, 512 );
  VTABufferFree(Conv_conv5_3_1__2_input_transpose);
  VTABufferFree(Conv_conv5_3_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_conv5_2_1__2_res
  free(Conv_conv5_2_1__2_res);

  //Run allocactivation : Conv_conv5_4_1__2_res
  int8_t *Conv_conv5_4_1__2_res = (int8_t *)malloc(100352);

  //Run convolution : Conv_conv5_4_1__2
  int8_t* Conv_conv5_4_1__2_input_transpose = (int8_t *)VTABufferAlloc(100352);
  transpose_nhwc2vtaio(Conv_conv5_3_1__2_res, (int8_t* )VTABufferGetVirtAddr(Conv_conv5_4_1__2_input_transpose), 1, 14, 14, 512);
  int8_t* Conv_conv5_4_1__2_output_bef_transpose = (int8_t *)VTABufferAlloc(100352);
  convolution_wo_tr(Conv_conv5_4_1__2_input_transpose, conv5_4_w_0__1, (int32_t *)conv5_4_b_0, Conv_conv5_4_1__2_output_bef_transpose, 1, 14, 14, 512, 512, 3, 3, 1, 1, 1, 1, 8, 14, 14, vtaCmdH, 1, 14, 14, 0);
  transpose_vtaio2nhwc((int8_t* )VTABufferGetVirtAddr(Conv_conv5_4_1__2_output_bef_transpose), Conv_conv5_4_1__2_res, 1, 14, 14, 512 );
  VTABufferFree(Conv_conv5_4_1__2_input_transpose);
  VTABufferFree(Conv_conv5_4_1__2_output_bef_transpose);

  //Run deallocactivation : dealloc_Conv_conv5_3_1__2_res
  free(Conv_conv5_3_1__2_res);

  //Run allocactivation : MaxPool_pool5_1__1_res
  int8_t *MaxPool_pool5_1__1_res = (int8_t *)malloc(25088);

  //Run maxpool : MaxPool_pool5_1__2
  maxpool(Conv_conv5_4_1__2_res, MaxPool_pool5_1__1_res, 1, 14, 14, 512, 2, 2, 0, 2 );

  //Run deallocactivation : dealloc_Conv_conv5_4_1__2_res
  free(Conv_conv5_4_1__2_res);

  //Run tensorview : MaxPool_pool5_1__1_res__2
  int8_t* MaxPool_pool5_1__1_res__2 = MaxPool_pool5_1__1_res;

  //Run allocactivation : Gemm_fc6_1__2_res
  int8_t *Gemm_fc6_1__2_res = (int8_t *)malloc(4096);

  //Run fullyconnected : Gemm_fc6_1__2
  fullyconnected(MaxPool_pool5_1__1_res__2, 1.0/0.125000, 0, (int8_t *)VTABufferGetVirtAddr(fc6_w_0__2), 1.0/4096.000000, 0, (int8_t *)VTABufferGetVirtAddr(fc6_b_0), 1.0/512.000000, 0, Gemm_fc6_1__2_res, 1.0/1.000000, 0, 1, 25088, 25088, 4096, 1, 4096, 1 );

  //Run deallocactivation : dealloc_MaxPool_pool5_1__1_res
  free(MaxPool_pool5_1__1_res);

  //Run relu : Relu_fc6_2
  relu(Gemm_fc6_1__2_res, Gemm_fc6_1__2_res, 0 );

  //Run allocactivation : Gemm_fc7_1__1_res
  int8_t *Gemm_fc7_1__1_res = (int8_t *)malloc(4096);

  //Run fullyconnected : Gemm_fc7_1__1
  fullyconnected(Gemm_fc6_1__2_res, 1.0/1.000000, 0, (int8_t *)VTABufferGetVirtAddr(fc7_w_0__1), 1.0/2048.000000, 0, (int8_t *)VTABufferGetVirtAddr(fc7_b_0), 1.0/2048.000000, 0, Gemm_fc7_1__1_res, 1.0/4.000000, 0, 1, 4096, 4096, 4096, 1, 4096, 1 );

  //Run deallocactivation : dealloc_Gemm_fc6_1__2_res
  free(Gemm_fc6_1__2_res);

  //Run relu : Relu_fc7_2
  relu(Gemm_fc7_1__1_res, Gemm_fc7_1__1_res, 0 );

  //Run allocactivation : Gemm_fc8_1__1_res
  int8_t *Gemm_fc8_1__1_res = (int8_t *)malloc(1000);

  //Run fullyconnected : Gemm_fc8_1__1
  fullyconnected(Gemm_fc7_1__1_res, 1.0/4.000000, 0, (int8_t *)VTABufferGetVirtAddr(fc8_w_0__1), 1.0/2048.000000, 0, (int8_t *)VTABufferGetVirtAddr(fc8_b_0), 1.0/8192.000000, 0, Gemm_fc8_1__1_res, 1.0/4.000000, 0, 1, 4096, 4096, 1000, 1, 1000, 1 );

  //Run deallocactivation : dealloc_Gemm_fc7_1__1_res
  free(Gemm_fc7_1__1_res);

  //Run allocactivation : Gemm_fc8_1__1_dequantize_res
  int8_t *Gemm_fc8_1__1_dequantize_res = (int8_t *)malloc(4000);

  //Run dequantize : Gemm_fc8_1__1_dequantize
  dequantize(Gemm_fc8_1__1_res, Gemm_fc8_1__1_dequantize_res, 1000, 1/4.000000, 0 );

  //Run deallocactivation : dealloc_Gemm_fc8_1__1_res
  free(Gemm_fc8_1__1_res);

  //Run softmax : Softmax_prob_1
  int8_t* prob_1 = (int8_t*)mutableWeight + 602112;
  softmax(Gemm_fc8_1__1_dequantize_res, prob_1, 1, 1000, 1, 1000 );

  //Run deallocactivation : dealloc_Gemm_fc8_1__1_dequantize_res
  free(Gemm_fc8_1__1_dequantize_res);
  return 0;
}