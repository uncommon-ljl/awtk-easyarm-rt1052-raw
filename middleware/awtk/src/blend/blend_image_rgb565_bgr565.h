﻿/**
 * File:   blend_image_rgb565_bgr565.c
 * Author: AWTK Develop Team
 * Brief:  blend bgr565 on rgb565
 *
 * Copyright (c) 2018 - 2020  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2018-10-10 Generated by gen.sh(DONT MODIFY IT)
 *
 */
#ifndef TK_BLEND_IMAGE_RGB565_BGR565_H
#define TK_BLEND_IMAGE_RGB565_BGR565_H

#include "base/bitmap.h"

ret_t blend_image_rgb565_bgr565(bitmap_t* dst, bitmap_t* src, rect_t* dst_r, rect_t* src_r,
                                uint8_t a);

#endif /*TK_BLEND_IMAGE_RGB565_BGR565_H*/
