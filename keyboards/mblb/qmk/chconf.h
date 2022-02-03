#pragma once

/* Change system timer resolution, because TIM2 and TIM3 are different */
#define CH_CFG_ST_RESOLUTION                16
#define CH_CFG_INTERVALS_SIZE               16

/* no clue, wouldn't compile without */
#define CH_CFG_USE_TM                       FALSE

#include_next <chconf.h>