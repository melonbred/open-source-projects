#pragma once

/* no clue, wouldn't compile without */
#define HAL_USE_DAC                         FALSE
#define HAL_USE_GPT                         FALSE
#define HAL_USE_I2C                         FALSE

#include_next <halconf.h>