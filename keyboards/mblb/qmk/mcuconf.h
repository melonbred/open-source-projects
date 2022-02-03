#pragma once

#include_next <mcuconf.h>

/* enable TIM1, used for backlight PWM */
#undef STM32_PWM_USE_TIM1
#define STM32_PWM_USE_TIM1                  TRUE

/* enable TIM2, used for underglow PWM driver */
#undef STM32_PWM_USE_TIM2
#define STM32_PWM_USE_TIM2                  TRUE

/* move system from TIM2 (default) to TIM3 (since TIM2 is needed for underglow) */
#undef STM32_PWM_USE_TIM3
#define STM32_PWM_USE_TIM3                  FALSE
#undef STM32_ST_USE_TIMER
#define STM32_ST_USE_TIMER                  3