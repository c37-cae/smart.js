/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef ESP_HW_INCLUDED
#define ESP_HW_INCLUDED

#define __stringify_1(x...) #x
#define __stringify(x...) __stringify_1(x)
#define RSR(sr)                                       \
  ({                                                  \
    uint32_t r;                                       \
    asm volatile("rsr %0,"__stringify(sr) : "=a"(r)); \
    r;                                                \
  })

uint8_t read_unaligned_byte(uint8_t *addr);

#endif
