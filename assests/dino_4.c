#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_DINO_4
#define LV_ATTRIBUTE_IMG_DINO_4
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_DINO_4 uint8_t dino_4_map[] = {
  0xfd, 0xfd, 0xfd, 0xff, 	/*Color of index 0*/
  0x03, 0x03, 0x03, 0xff, 	/*Color of index 1*/

  0x00, 0x00, 0x00, 0x00, 
  0x00, 0x18, 0x00, 0x00, 
  0x00, 0x10, 0x00, 0x00, 
  0x00, 0xd8, 0x00, 0x00, 
  0x00, 0x9c, 0x30, 0x00, 
  0x00, 0x9e, 0x20, 0x00, 
  0x00, 0xff, 0xf0, 0x00, 
  0x01, 0xff, 0xf3, 0xfc, 
  0x03, 0xff, 0xff, 0xc0, 
  0x07, 0xff, 0xff, 0xff, 
  0x0f, 0xff, 0xff, 0xff, 
  0x1f, 0xff, 0xff, 0xff, 
  0x3f, 0xff, 0xfe, 0xff, 
  0x38, 0x7f, 0xe7, 0xff, 
  0x20, 0x00, 0x03, 0xfe, 
  0x00, 0x00, 0x00, 0x00, 
};

const lv_img_dsc_t dino_4 = {
  .header.always_zero = 0,
  .header.w = 32,
  .header.h = 16,
  .data_size = 73,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = dino_4_map,
};