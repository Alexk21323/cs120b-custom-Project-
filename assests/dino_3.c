#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif
#ifndef LV_ATTRIBUTE_IMG_DINO_3
#define LV_ATTRIBUTE_IMG_DINO_3
#endif
const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_DINO_3 uint8_t dino_3_map[] = {
  0xff, 0xff, 0xff, 0xff, 	/*Color of index 0*/
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 1*/

  0x03, 0x80, 0x00, 
  0x03, 0x00, 0x00, 
  0x03, 0x0e, 0x00, 
  0x03, 0x8c, 0x00, 
  0x03, 0xfc, 0x00, 
  0x07, 0xfe, 0x00, 
  0x0f, 0xff, 0x00, 
  0x1f, 0xff, 0x00, 
  0x3f, 0xff, 0x80, 
  0x7f, 0xff, 0x80, 
  0xff, 0xff, 0x80, 
  0xf9, 0xff, 0xa0, 
  0xf0, 0xff, 0xe0, 
  0xe0, 0x7f, 0x80, 
  0x60, 0x3f, 0x80, 
  0x30, 0x1f, 0xfc, 
  0x00, 0x0f, 0xf8, 
  0x00, 0x0f, 0xc0, 
  0x00, 0x0f, 0xff, 
  0x00, 0x0f, 0xff, 
  0x00, 0x0f, 0xff, 
  0x00, 0x0e, 0xff, 
  0x00, 0x0f, 0xff, 
  0x00, 0x03, 0xfe, 
  0x00, 0x00, 0x00, 
};

const lv_img_dsc_t dino_3 = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 25,
  .data_size = 84,
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .data = dino_3_map,
};