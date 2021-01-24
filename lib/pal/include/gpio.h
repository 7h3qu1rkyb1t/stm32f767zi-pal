#include "core.h"


#define GPIOD_BASE                  0x40020C00UL
#define GPIOC_BASE                  0x40020800UL
#define GPIOK_BASE                  0x40022800UL
#define GPIOJ_BASE                  0x40022400UL
#define GPIOI_BASE                  0x40022000UL
#define GPIOH_BASE                  0x40021C00UL
#define GPIOG_BASE                  0x40021800UL
#define GPIOF_BASE                  0x40021400UL
#define GPIOE_BASE                  0x40021000UL
#define GPIOB_BASE                  0x40020400UL
#define GPIOA_BASE                  0x40020000UL

#define GPIOD                       ((GPIO_Type*)             GPIOD_BASE)
#define GPIOC                       ((GPIO_Type*)             GPIOC_BASE)
#define GPIOK                       ((GPIO_Type*)             GPIOK_BASE)
#define GPIOJ                       ((GPIO_Type*)             GPIOJ_BASE)
#define GPIOI                       ((GPIO_Type*)             GPIOI_BASE)
#define GPIOH                       ((GPIO_Type*)             GPIOH_BASE)
#define GPIOG                       ((GPIO_Type*)             GPIOG_BASE)
#define GPIOF                       ((GPIO_Type*)             GPIOF_BASE)
#define GPIOE                       ((GPIO_Type*)             GPIOE_BASE)
#define GPIOB                       ((GPIO_Type*)             GPIOB_BASE)
#define GPIOA                       ((GPIO_Type*)             GPIOA_BASE)


/* =========================================================================================================================== */
/* ================                                           GPIOA                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief General-purpose I/Os (GPIOA)
  */

typedef struct {                                /*!< (@ 0x40020000) GPIOA Structure                                            */
  
  union {
    __IOM uint32_t MODER;                       /*!< (@ 0x00000000) GPIO port mode register                                    */
    
    struct {
      __IOM uint32_t MODER0     : 2;            /*!< [1..0] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t MODER1     : 2;            /*!< [3..2] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t MODER2     : 2;            /*!< [5..4] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t MODER3     : 2;            /*!< [7..6] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t MODER4     : 2;            /*!< [9..8] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t MODER5     : 2;            /*!< [11..10] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t MODER6     : 2;            /*!< [13..12] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t MODER7     : 2;            /*!< [15..14] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t MODER8     : 2;            /*!< [17..16] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t MODER9     : 2;            /*!< [19..18] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t MODER10    : 2;            /*!< [21..20] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t MODER11    : 2;            /*!< [23..22] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t MODER12    : 2;            /*!< [25..24] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t MODER13    : 2;            /*!< [27..26] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t MODER14    : 2;            /*!< [29..28] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t MODER15    : 2;            /*!< [31..30] Port x configuration bits (y = 0..15)                            */
    } MODER_b;
  } ;
  
  union {
    __IOM uint32_t OTYPER;                      /*!< (@ 0x00000004) GPIO port output type register                             */
    
    struct {
      __IOM uint32_t OT0        : 1;            /*!< [0..0] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OT1        : 1;            /*!< [1..1] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OT2        : 1;            /*!< [2..2] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OT3        : 1;            /*!< [3..3] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OT4        : 1;            /*!< [4..4] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OT5        : 1;            /*!< [5..5] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OT6        : 1;            /*!< [6..6] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OT7        : 1;            /*!< [7..7] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OT8        : 1;            /*!< [8..8] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OT9        : 1;            /*!< [9..9] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OT10       : 1;            /*!< [10..10] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OT11       : 1;            /*!< [11..11] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OT12       : 1;            /*!< [12..12] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OT13       : 1;            /*!< [13..13] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OT14       : 1;            /*!< [14..14] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OT15       : 1;            /*!< [15..15] Port x configuration bits (y = 0..15)                            */
            uint32_t            : 16;
    } OTYPER_b;
  } ;
  
  union {
    __IOM uint32_t GPIOB_OSPEEDR;               /*!< (@ 0x00000008) GPIO port output speed register                            */
    
    struct {
      __IOM uint32_t OSPEEDR0   : 2;            /*!< [1..0] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OSPEEDR1   : 2;            /*!< [3..2] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OSPEEDR2   : 2;            /*!< [5..4] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OSPEEDR3   : 2;            /*!< [7..6] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OSPEEDR4   : 2;            /*!< [9..8] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t OSPEEDR5   : 2;            /*!< [11..10] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OSPEEDR6   : 2;            /*!< [13..12] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OSPEEDR7   : 2;            /*!< [15..14] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OSPEEDR8   : 2;            /*!< [17..16] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OSPEEDR9   : 2;            /*!< [19..18] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OSPEEDR10  : 2;            /*!< [21..20] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OSPEEDR11  : 2;            /*!< [23..22] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OSPEEDR12  : 2;            /*!< [25..24] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OSPEEDR13  : 2;            /*!< [27..26] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OSPEEDR14  : 2;            /*!< [29..28] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t OSPEEDR15  : 2;            /*!< [31..30] Port x configuration bits (y = 0..15)                            */
    } GPIO_OSPEEDR_b;
  } ;
  
  union {
    __IOM uint32_t PUPDR;                       /*!< (@ 0x0000000C) GPIO port pull-up/pull-down register                       */
    
    struct {
      __IOM uint32_t PUPDR0     : 2;            /*!< [1..0] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t PUPDR1     : 2;            /*!< [3..2] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t PUPDR2     : 2;            /*!< [5..4] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t PUPDR3     : 2;            /*!< [7..6] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t PUPDR4     : 2;            /*!< [9..8] Port x configuration bits (y = 0..15)                              */
      __IOM uint32_t PUPDR5     : 2;            /*!< [11..10] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t PUPDR6     : 2;            /*!< [13..12] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t PUPDR7     : 2;            /*!< [15..14] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t PUPDR8     : 2;            /*!< [17..16] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t PUPDR9     : 2;            /*!< [19..18] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t PUPDR10    : 2;            /*!< [21..20] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t PUPDR11    : 2;            /*!< [23..22] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t PUPDR12    : 2;            /*!< [25..24] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t PUPDR13    : 2;            /*!< [27..26] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t PUPDR14    : 2;            /*!< [29..28] Port x configuration bits (y = 0..15)                            */
      __IOM uint32_t PUPDR15    : 2;            /*!< [31..30] Port x configuration bits (y = 0..15)                            */
    } PUPDR_b;
  } ;
  
  union {
    __IM  uint32_t IDR;                         /*!< (@ 0x00000010) GPIO port input data register                              */
    
    struct {
      __IM  uint32_t IDR0       : 1;            /*!< [0..0] Port input data (y = 0..15)                                        */
      __IM  uint32_t IDR1       : 1;            /*!< [1..1] Port input data (y = 0..15)                                        */
      __IM  uint32_t IDR2       : 1;            /*!< [2..2] Port input data (y = 0..15)                                        */
      __IM  uint32_t IDR3       : 1;            /*!< [3..3] Port input data (y = 0..15)                                        */
      __IM  uint32_t IDR4       : 1;            /*!< [4..4] Port input data (y = 0..15)                                        */
      __IM  uint32_t IDR5       : 1;            /*!< [5..5] Port input data (y = 0..15)                                        */
      __IM  uint32_t IDR6       : 1;            /*!< [6..6] Port input data (y = 0..15)                                        */
      __IM  uint32_t IDR7       : 1;            /*!< [7..7] Port input data (y = 0..15)                                        */
      __IM  uint32_t IDR8       : 1;            /*!< [8..8] Port input data (y = 0..15)                                        */
      __IM  uint32_t IDR9       : 1;            /*!< [9..9] Port input data (y = 0..15)                                        */
      __IM  uint32_t IDR10      : 1;            /*!< [10..10] Port input data (y = 0..15)                                      */
      __IM  uint32_t IDR11      : 1;            /*!< [11..11] Port input data (y = 0..15)                                      */
      __IM  uint32_t IDR12      : 1;            /*!< [12..12] Port input data (y = 0..15)                                      */
      __IM  uint32_t IDR13      : 1;            /*!< [13..13] Port input data (y = 0..15)                                      */
      __IM  uint32_t IDR14      : 1;            /*!< [14..14] Port input data (y = 0..15)                                      */
      __IM  uint32_t IDR15      : 1;            /*!< [15..15] Port input data (y = 0..15)                                      */
            uint32_t            : 16;
    } IDR_b;
  } ;
  
  union {
    __IOM uint32_t ODR;                         /*!< (@ 0x00000014) GPIO port output data register                             */
    
    struct {
      __IOM uint32_t ODR0       : 1;            /*!< [0..0] Port output data (y = 0..15)                                       */
      __IOM uint32_t ODR1       : 1;            /*!< [1..1] Port output data (y = 0..15)                                       */
      __IOM uint32_t ODR2       : 1;            /*!< [2..2] Port output data (y = 0..15)                                       */
      __IOM uint32_t ODR3       : 1;            /*!< [3..3] Port output data (y = 0..15)                                       */
      __IOM uint32_t ODR4       : 1;            /*!< [4..4] Port output data (y = 0..15)                                       */
      __IOM uint32_t ODR5       : 1;            /*!< [5..5] Port output data (y = 0..15)                                       */
      __IOM uint32_t ODR6       : 1;            /*!< [6..6] Port output data (y = 0..15)                                       */
      __IOM uint32_t ODR7       : 1;            /*!< [7..7] Port output data (y = 0..15)                                       */
      __IOM uint32_t ODR8       : 1;            /*!< [8..8] Port output data (y = 0..15)                                       */
      __IOM uint32_t ODR9       : 1;            /*!< [9..9] Port output data (y = 0..15)                                       */
      __IOM uint32_t ODR10      : 1;            /*!< [10..10] Port output data (y = 0..15)                                     */
      __IOM uint32_t ODR11      : 1;            /*!< [11..11] Port output data (y = 0..15)                                     */
      __IOM uint32_t ODR12      : 1;            /*!< [12..12] Port output data (y = 0..15)                                     */
      __IOM uint32_t ODR13      : 1;            /*!< [13..13] Port output data (y = 0..15)                                     */
      __IOM uint32_t ODR14      : 1;            /*!< [14..14] Port output data (y = 0..15)                                     */
      __IOM uint32_t ODR15      : 1;            /*!< [15..15] Port output data (y = 0..15)                                     */
            uint32_t            : 16;
    } ODR_b;
  } ;
  
  union {
    __OM  uint32_t BSRR;                        /*!< (@ 0x00000018) GPIO port bit set/reset register                           */
    
    struct {
      __OM  uint32_t BS0        : 1;            /*!< [0..0] Port x set bit y (y= 0..15)                                        */
      __OM  uint32_t BS1        : 1;            /*!< [1..1] Port x set bit y (y= 0..15)                                        */
      __OM  uint32_t BS2        : 1;            /*!< [2..2] Port x set bit y (y= 0..15)                                        */
      __OM  uint32_t BS3        : 1;            /*!< [3..3] Port x set bit y (y= 0..15)                                        */
      __OM  uint32_t BS4        : 1;            /*!< [4..4] Port x set bit y (y= 0..15)                                        */
      __OM  uint32_t BS5        : 1;            /*!< [5..5] Port x set bit y (y= 0..15)                                        */
      __OM  uint32_t BS6        : 1;            /*!< [6..6] Port x set bit y (y= 0..15)                                        */
      __OM  uint32_t BS7        : 1;            /*!< [7..7] Port x set bit y (y= 0..15)                                        */
      __OM  uint32_t BS8        : 1;            /*!< [8..8] Port x set bit y (y= 0..15)                                        */
      __OM  uint32_t BS9        : 1;            /*!< [9..9] Port x set bit y (y= 0..15)                                        */
      __OM  uint32_t BS10       : 1;            /*!< [10..10] Port x set bit y (y= 0..15)                                      */
      __OM  uint32_t BS11       : 1;            /*!< [11..11] Port x set bit y (y= 0..15)                                      */
      __OM  uint32_t BS12       : 1;            /*!< [12..12] Port x set bit y (y= 0..15)                                      */
      __OM  uint32_t BS13       : 1;            /*!< [13..13] Port x set bit y (y= 0..15)                                      */
      __OM  uint32_t BS14       : 1;            /*!< [14..14] Port x set bit y (y= 0..15)                                      */
      __OM  uint32_t BS15       : 1;            /*!< [15..15] Port x set bit y (y= 0..15)                                      */
      __OM  uint32_t BR0        : 1;            /*!< [16..16] Port x set bit y (y= 0..15)                                      */
      __OM  uint32_t BR1        : 1;            /*!< [17..17] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR2        : 1;            /*!< [18..18] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR3        : 1;            /*!< [19..19] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR4        : 1;            /*!< [20..20] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR5        : 1;            /*!< [21..21] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR6        : 1;            /*!< [22..22] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR7        : 1;            /*!< [23..23] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR8        : 1;            /*!< [24..24] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR9        : 1;            /*!< [25..25] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR10       : 1;            /*!< [26..26] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR11       : 1;            /*!< [27..27] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR12       : 1;            /*!< [28..28] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR13       : 1;            /*!< [29..29] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR14       : 1;            /*!< [30..30] Port x reset bit y (y = 0..15)                                   */
      __OM  uint32_t BR15       : 1;            /*!< [31..31] Port x reset bit y (y = 0..15)                                   */
    } BSRR_b;
  } ;
  
  union {
    __IOM uint32_t LCKR;                        /*!< (@ 0x0000001C) GPIO port configuration lock register                      */
    
    struct {
      __IOM uint32_t LCK0       : 1;            /*!< [0..0] Port x lock bit y (y= 0..15)                                       */
      __IOM uint32_t LCK1       : 1;            /*!< [1..1] Port x lock bit y (y= 0..15)                                       */
      __IOM uint32_t LCK2       : 1;            /*!< [2..2] Port x lock bit y (y= 0..15)                                       */
      __IOM uint32_t LCK3       : 1;            /*!< [3..3] Port x lock bit y (y= 0..15)                                       */
      __IOM uint32_t LCK4       : 1;            /*!< [4..4] Port x lock bit y (y= 0..15)                                       */
      __IOM uint32_t LCK5       : 1;            /*!< [5..5] Port x lock bit y (y= 0..15)                                       */
      __IOM uint32_t LCK6       : 1;            /*!< [6..6] Port x lock bit y (y= 0..15)                                       */
      __IOM uint32_t LCK7       : 1;            /*!< [7..7] Port x lock bit y (y= 0..15)                                       */
      __IOM uint32_t LCK8       : 1;            /*!< [8..8] Port x lock bit y (y= 0..15)                                       */
      __IOM uint32_t LCK9       : 1;            /*!< [9..9] Port x lock bit y (y= 0..15)                                       */
      __IOM uint32_t LCK10      : 1;            /*!< [10..10] Port x lock bit y (y= 0..15)                                     */
      __IOM uint32_t LCK11      : 1;            /*!< [11..11] Port x lock bit y (y= 0..15)                                     */
      __IOM uint32_t LCK12      : 1;            /*!< [12..12] Port x lock bit y (y= 0..15)                                     */
      __IOM uint32_t LCK13      : 1;            /*!< [13..13] Port x lock bit y (y= 0..15)                                     */
      __IOM uint32_t LCK14      : 1;            /*!< [14..14] Port x lock bit y (y= 0..15)                                     */
      __IOM uint32_t LCK15      : 1;            /*!< [15..15] Port x lock bit y (y= 0..15)                                     */
      __IOM uint32_t LCKK       : 1;            /*!< [16..16] Port x lock bit y (y= 0..15)                                     */
            uint32_t            : 15;
    } LCKR_b;
  } ;
  
  union {
    __IOM uint32_t AFRL;                        /*!< (@ 0x00000020) GPIO alternate function low register                       */
    
    struct {
      __IOM uint32_t AFRL0      : 4;            /*!< [3..0] Alternate function selection for port x bit y (y = 0..7)           */
      __IOM uint32_t AFRL1      : 4;            /*!< [7..4] Alternate function selection for port x bit y (y = 0..7)           */
      __IOM uint32_t AFRL2      : 4;            /*!< [11..8] Alternate function selection for port x bit y (y = 0..7)          */
      __IOM uint32_t AFRL3      : 4;            /*!< [15..12] Alternate function selection for port x bit y (y =
                                                     0..7)                                                                     */
      __IOM uint32_t AFRL4      : 4;            /*!< [19..16] Alternate function selection for port x bit y (y =
                                                     0..7)                                                                     */
      __IOM uint32_t AFRL5      : 4;            /*!< [23..20] Alternate function selection for port x bit y (y =
                                                     0..7)                                                                     */
      __IOM uint32_t AFRL6      : 4;            /*!< [27..24] Alternate function selection for port x bit y (y =
                                                     0..7)                                                                     */
      __IOM uint32_t AFRL7      : 4;            /*!< [31..28] Alternate function selection for port x bit y (y =
                                                     0..7)                                                                     */
    } AFRL_b;
  } ;
  
  union {
    __IOM uint32_t AFRH;                        /*!< (@ 0x00000024) GPIO alternate function high register                      */
    
    struct {
      __IOM uint32_t AFRH8      : 4;            /*!< [3..0] Alternate function selection for port x bit y (y = 8..15)          */
      __IOM uint32_t AFRH9      : 4;            /*!< [7..4] Alternate function selection for port x bit y (y = 8..15)          */
      __IOM uint32_t AFRH10     : 4;            /*!< [11..8] Alternate function selection for port x bit y (y = 8..15)         */
      __IOM uint32_t AFRH11     : 4;            /*!< [15..12] Alternate function selection for port x bit y (y =
                                                     8..15)                                                                    */
      __IOM uint32_t AFRH12     : 4;            /*!< [19..16] Alternate function selection for port x bit y (y =
                                                     8..15)                                                                    */
      __IOM uint32_t AFRH13     : 4;            /*!< [23..20] Alternate function selection for port x bit y (y =
                                                     8..15)                                                                    */
      __IOM uint32_t AFRH14     : 4;            /*!< [27..24] Alternate function selection for port x bit y (y =
                                                     8..15)                                                                    */
      __IOM uint32_t AFRH15     : 4;            /*!< [31..28] Alternate function selection for port x bit y (y =
                                                     8..15)                                                                    */
    } AFRH_b;
  } ;
  
  union {
    __IOM uint32_t BRR;                         /*!< (@ 0x00000028) GPIO port bit reset register                               */
    
    struct {
      __IOM uint32_t BR0        : 1;            /*!< [0..0] Port A Reset bit 0                                                 */
      __IOM uint32_t BR1        : 1;            /*!< [1..1] Port A Reset bit 1                                                 */
      __IOM uint32_t BR2        : 1;            /*!< [2..2] Port A Reset bit 2                                                 */
      __IOM uint32_t BR3        : 1;            /*!< [3..3] Port A Reset bit 3                                                 */
      __IOM uint32_t BR4        : 1;            /*!< [4..4] Port A Reset bit 4                                                 */
      __IOM uint32_t BR5        : 1;            /*!< [5..5] Port A Reset bit 5                                                 */
      __IOM uint32_t BR6        : 1;            /*!< [6..6] Port A Reset bit 6                                                 */
      __IOM uint32_t BR7        : 1;            /*!< [7..7] Port A Reset bit 7                                                 */
      __IOM uint32_t BR8        : 1;            /*!< [8..8] Port A Reset bit 8                                                 */
      __IOM uint32_t BR9        : 1;            /*!< [9..9] Port A Reset bit 9                                                 */
      __IOM uint32_t BR10       : 1;            /*!< [10..10] Port A Reset bit 10                                              */
      __IOM uint32_t BR11       : 1;            /*!< [11..11] Port A Reset bit 11                                              */
      __IOM uint32_t BR12       : 1;            /*!< [12..12] Port A Reset bit 12                                              */
      __IOM uint32_t BR13       : 1;            /*!< [13..13] Port A Reset bit 13                                              */
      __IOM uint32_t BR14       : 1;            /*!< [14..14] Port A Reset bit 14                                              */
      __IOM uint32_t BR15       : 1;            /*!< [15..15] Port A Reset bit 15                                              */
            uint32_t            : 16;
    } BRR_b;
  } ;
} GPIO_Type;                                   /*!< Size = 44 (0x2c)                                                          */


/* =========================================================  MODER  ========================================================= */
#define GPIO_MODER_MODER15_Pos           (30UL)                    /*!< MODER15 (Bit 30)                                      */
#define GPIO_MODER_MODER15_Msk           (0xc0000000UL)            /*!< MODER15 (Bitfield-Mask: 0x03)                         */
#define GPIO_MODER_MODER14_Pos           (28UL)                    /*!< MODER14 (Bit 28)                                      */
#define GPIO_MODER_MODER14_Msk           (0x30000000UL)            /*!< MODER14 (Bitfield-Mask: 0x03)                         */
#define GPIO_MODER_MODER13_Pos           (26UL)                    /*!< MODER13 (Bit 26)                                      */
#define GPIO_MODER_MODER13_Msk           (0xc000000UL)             /*!< MODER13 (Bitfield-Mask: 0x03)                         */
#define GPIO_MODER_MODER12_Pos           (24UL)                    /*!< MODER12 (Bit 24)                                      */
#define GPIO_MODER_MODER12_Msk           (0x3000000UL)             /*!< MODER12 (Bitfield-Mask: 0x03)                         */
#define GPIO_MODER_MODER11_Pos           (22UL)                    /*!< MODER11 (Bit 22)                                      */
#define GPIO_MODER_MODER11_Msk           (0xc00000UL)              /*!< MODER11 (Bitfield-Mask: 0x03)                         */
#define GPIO_MODER_MODER10_Pos           (20UL)                    /*!< MODER10 (Bit 20)                                      */
#define GPIO_MODER_MODER10_Msk           (0x300000UL)              /*!< MODER10 (Bitfield-Mask: 0x03)                         */
#define GPIO_MODER_MODER9_Pos            (18UL)                    /*!< MODER9 (Bit 18)                                       */
#define GPIO_MODER_MODER9_Msk            (0xc0000UL)               /*!< MODER9 (Bitfield-Mask: 0x03)                          */
#define GPIO_MODER_MODER8_Pos            (16UL)                    /*!< MODER8 (Bit 16)                                       */
#define GPIO_MODER_MODER8_Msk            (0x30000UL)               /*!< MODER8 (Bitfield-Mask: 0x03)                          */
#define GPIO_MODER_MODER7_Pos            (14UL)                    /*!< MODER7 (Bit 14)                                       */
#define GPIO_MODER_MODER7_Msk            (0xc000UL)                /*!< MODER7 (Bitfield-Mask: 0x03)                          */
#define GPIO_MODER_MODER6_Pos            (12UL)                    /*!< MODER6 (Bit 12)                                       */
#define GPIO_MODER_MODER6_Msk            (0x3000UL)                /*!< MODER6 (Bitfield-Mask: 0x03)                          */
#define GPIO_MODER_MODER5_Pos            (10UL)                    /*!< MODER5 (Bit 10)                                       */
#define GPIO_MODER_MODER5_Msk            (0xc00UL)                 /*!< MODER5 (Bitfield-Mask: 0x03)                          */
#define GPIO_MODER_MODER4_Pos            (8UL)                     /*!< MODER4 (Bit 8)                                        */
#define GPIO_MODER_MODER4_Msk            (0x300UL)                 /*!< MODER4 (Bitfield-Mask: 0x03)                          */
#define GPIO_MODER_MODER3_Pos            (6UL)                     /*!< MODER3 (Bit 6)                                        */
#define GPIO_MODER_MODER3_Msk            (0xc0UL)                  /*!< MODER3 (Bitfield-Mask: 0x03)                          */
#define GPIO_MODER_MODER2_Pos            (4UL)                     /*!< MODER2 (Bit 4)                                        */
#define GPIO_MODER_MODER2_Msk            (0x30UL)                  /*!< MODER2 (Bitfield-Mask: 0x03)                          */
#define GPIO_MODER_MODER1_Pos            (2UL)                     /*!< MODER1 (Bit 2)                                        */
#define GPIO_MODER_MODER1_Msk            (0xcUL)                   /*!< MODER1 (Bitfield-Mask: 0x03)                          */
#define GPIO_MODER_MODER0_Pos            (0UL)                     /*!< MODER0 (Bit 0)                                        */
#define GPIO_MODER_MODER0_Msk            (0x3UL)                   /*!< MODER0 (Bitfield-Mask: 0x03)                          */
/* =======================================================  OTYPER  ========================================================= */
#define GPIO_OTYPER_OT15_Pos             (15UL)                    /*!< OT15 (Bit 15)                                         */
#define GPIO_OTYPER_OT15_Msk             (0x8000UL)                /*!< OT15 (Bitfield-Mask: 0x01)                            */
#define GPIO_OTYPER_OT14_Pos             (14UL)                    /*!< OT14 (Bit 14)                                         */
#define GPIO_OTYPER_OT14_Msk             (0x4000UL)                /*!< OT14 (Bitfield-Mask: 0x01)                            */
#define GPIO_OTYPER_OT13_Pos             (13UL)                    /*!< OT13 (Bit 13)                                         */
#define GPIO_OTYPER_OT13_Msk             (0x2000UL)                /*!< OT13 (Bitfield-Mask: 0x01)                            */
#define GPIO_OTYPER_OT12_Pos             (12UL)                    /*!< OT12 (Bit 12)                                         */
#define GPIO_OTYPER_OT12_Msk             (0x1000UL)                /*!< OT12 (Bitfield-Mask: 0x01)                            */
#define GPIO_OTYPER_OT11_Pos             (11UL)                    /*!< OT11 (Bit 11)                                         */
#define GPIO_OTYPER_OT11_Msk             (0x800UL)                 /*!< OT11 (Bitfield-Mask: 0x01)                            */
#define GPIO_OTYPER_OT10_Pos             (10UL)                    /*!< OT10 (Bit 10)                                         */
#define GPIO_OTYPER_OT10_Msk             (0x400UL)                 /*!< OT10 (Bitfield-Mask: 0x01)                            */
#define GPIO_OTYPER_OT9_Pos              (9UL)                     /*!< OT9 (Bit 9)                                           */
#define GPIO_OTYPER_OT9_Msk              (0x200UL)                 /*!< OT9 (Bitfield-Mask: 0x01)                             */
#define GPIO_OTYPER_OT8_Pos              (8UL)                     /*!< OT8 (Bit 8)                                           */
#define GPIO_OTYPER_OT8_Msk              (0x100UL)                 /*!< OT8 (Bitfield-Mask: 0x01)                             */
#define GPIO_OTYPER_OT7_Pos              (7UL)                     /*!< OT7 (Bit 7)                                           */
#define GPIO_OTYPER_OT7_Msk              (0x80UL)                  /*!< OT7 (Bitfield-Mask: 0x01)                             */
#define GPIO_OTYPER_OT6_Pos              (6UL)                     /*!< OT6 (Bit 6)                                           */
#define GPIO_OTYPER_OT6_Msk              (0x40UL)                  /*!< OT6 (Bitfield-Mask: 0x01)                             */
#define GPIO_OTYPER_OT5_Pos              (5UL)                     /*!< OT5 (Bit 5)                                           */
#define GPIO_OTYPER_OT5_Msk              (0x20UL)                  /*!< OT5 (Bitfield-Mask: 0x01)                             */
#define GPIO_OTYPER_OT4_Pos              (4UL)                     /*!< OT4 (Bit 4)                                           */
#define GPIO_OTYPER_OT4_Msk              (0x10UL)                  /*!< OT4 (Bitfield-Mask: 0x01)                             */
#define GPIO_OTYPER_OT3_Pos              (3UL)                     /*!< OT3 (Bit 3)                                           */
#define GPIO_OTYPER_OT3_Msk              (0x8UL)                   /*!< OT3 (Bitfield-Mask: 0x01)                             */
#define GPIO_OTYPER_OT2_Pos              (2UL)                     /*!< OT2 (Bit 2)                                           */
#define GPIO_OTYPER_OT2_Msk              (0x4UL)                   /*!< OT2 (Bitfield-Mask: 0x01)                             */
#define GPIO_OTYPER_OT1_Pos              (1UL)                     /*!< OT1 (Bit 1)                                           */
#define GPIO_OTYPER_OT1_Msk              (0x2UL)                   /*!< OT1 (Bitfield-Mask: 0x01)                             */
#define GPIO_OTYPER_OT0_Pos              (0UL)                     /*!< OT0 (Bit 0)                                           */
#define GPIO_OTYPER_OT0_Msk              (0x1UL)                   /*!< OT0 (Bitfield-Mask: 0x01)                             */
/* ====================================================  GPIOB_OSPEEDR  ===================================================== */
#define GPIO_OSPEEDR_OSPEEDR15_Pos (30UL)                    /*!< OSPEEDR15 (Bit 30)                                    */
#define GPIO_OSPEEDR_OSPEEDR15_Msk (0xc0000000UL)            /*!< OSPEEDR15 (Bitfield-Mask: 0x03)                       */
#define GPIO_OSPEEDR_OSPEEDR14_Pos (28UL)                    /*!< OSPEEDR14 (Bit 28)                                    */
#define GPIO_OSPEEDR_OSPEEDR14_Msk (0x30000000UL)            /*!< OSPEEDR14 (Bitfield-Mask: 0x03)                       */
#define GPIO_OSPEEDR_OSPEEDR13_Pos (26UL)                    /*!< OSPEEDR13 (Bit 26)                                    */
#define GPIO_OSPEEDR_OSPEEDR13_Msk (0xc000000UL)             /*!< OSPEEDR13 (Bitfield-Mask: 0x03)                       */
#define GPIO_OSPEEDR_OSPEEDR12_Pos (24UL)                    /*!< OSPEEDR12 (Bit 24)                                    */
#define GPIO_OSPEEDR_OSPEEDR12_Msk (0x3000000UL)             /*!< OSPEEDR12 (Bitfield-Mask: 0x03)                       */
#define GPIO_OSPEEDR_OSPEEDR11_Pos (22UL)                    /*!< OSPEEDR11 (Bit 22)                                    */
#define GPIO_OSPEEDR_OSPEEDR11_Msk (0xc00000UL)              /*!< OSPEEDR11 (Bitfield-Mask: 0x03)                       */
#define GPIO_OSPEEDR_OSPEEDR10_Pos (20UL)                    /*!< OSPEEDR10 (Bit 20)                                    */
#define GPIO_OSPEEDR_OSPEEDR10_Msk (0x300000UL)              /*!< OSPEEDR10 (Bitfield-Mask: 0x03)                       */
#define GPIO_OSPEEDR_OSPEEDR9_Pos  (18UL)                    /*!< OSPEEDR9 (Bit 18)                                     */
#define GPIO_OSPEEDR_OSPEEDR9_Msk  (0xc0000UL)               /*!< OSPEEDR9 (Bitfield-Mask: 0x03)                        */
#define GPIO_OSPEEDR_OSPEEDR8_Pos  (16UL)                    /*!< OSPEEDR8 (Bit 16)                                     */
#define GPIO_OSPEEDR_OSPEEDR8_Msk  (0x30000UL)               /*!< OSPEEDR8 (Bitfield-Mask: 0x03)                        */
#define GPIO_OSPEEDR_OSPEEDR7_Pos  (14UL)                    /*!< OSPEEDR7 (Bit 14)                                     */
#define GPIO_OSPEEDR_OSPEEDR7_Msk  (0xc000UL)                /*!< OSPEEDR7 (Bitfield-Mask: 0x03)                        */
#define GPIO_OSPEEDR_OSPEEDR6_Pos  (12UL)                    /*!< OSPEEDR6 (Bit 12)                                     */
#define GPIO_OSPEEDR_OSPEEDR6_Msk  (0x3000UL)                /*!< OSPEEDR6 (Bitfield-Mask: 0x03)                        */
#define GPIO_OSPEEDR_OSPEEDR5_Pos  (10UL)                    /*!< OSPEEDR5 (Bit 10)                                     */
#define GPIO_OSPEEDR_OSPEEDR5_Msk  (0xc00UL)                 /*!< OSPEEDR5 (Bitfield-Mask: 0x03)                        */
#define GPIO_OSPEEDR_OSPEEDR4_Pos  (8UL)                     /*!< OSPEEDR4 (Bit 8)                                      */
#define GPIO_OSPEEDR_OSPEEDR4_Msk  (0x300UL)                 /*!< OSPEEDR4 (Bitfield-Mask: 0x03)                        */
#define GPIO_OSPEEDR_OSPEEDR3_Pos  (6UL)                     /*!< OSPEEDR3 (Bit 6)                                      */
#define GPIO_OSPEEDR_OSPEEDR3_Msk  (0xc0UL)                  /*!< OSPEEDR3 (Bitfield-Mask: 0x03)                        */
#define GPIO_OSPEEDR_OSPEEDR2_Pos  (4UL)                     /*!< OSPEEDR2 (Bit 4)                                      */
#define GPIO_OSPEEDR_OSPEEDR2_Msk  (0x30UL)                  /*!< OSPEEDR2 (Bitfield-Mask: 0x03)                        */
#define GPIO_OSPEEDR_OSPEEDR1_Pos  (2UL)                     /*!< OSPEEDR1 (Bit 2)                                      */
#define GPIO_OSPEEDR_OSPEEDR1_Msk  (0xcUL)                   /*!< OSPEEDR1 (Bitfield-Mask: 0x03)                        */
#define GPIO_OSPEEDR_OSPEEDR0_Pos  (0UL)                     /*!< OSPEEDR0 (Bit 0)                                      */
#define GPIO_OSPEEDR_OSPEEDR0_Msk  (0x3UL)                   /*!< OSPEEDR0 (Bitfield-Mask: 0x03)                        */
/* ========================================================  PUPDR  ========================================================= */
#define GPIO_PUPDR_PUPDR15_Pos           (30UL)                    /*!< PUPDR15 (Bit 30)                                      */
#define GPIO_PUPDR_PUPDR15_Msk           (0xc0000000UL)            /*!< PUPDR15 (Bitfield-Mask: 0x03)                         */
#define GPIO_PUPDR_PUPDR14_Pos           (28UL)                    /*!< PUPDR14 (Bit 28)                                      */
#define GPIO_PUPDR_PUPDR14_Msk           (0x30000000UL)            /*!< PUPDR14 (Bitfield-Mask: 0x03)                         */
#define GPIO_PUPDR_PUPDR13_Pos           (26UL)                    /*!< PUPDR13 (Bit 26)                                      */
#define GPIO_PUPDR_PUPDR13_Msk           (0xc000000UL)             /*!< PUPDR13 (Bitfield-Mask: 0x03)                         */
#define GPIO_PUPDR_PUPDR12_Pos           (24UL)                    /*!< PUPDR12 (Bit 24)                                      */
#define GPIO_PUPDR_PUPDR12_Msk           (0x3000000UL)             /*!< PUPDR12 (Bitfield-Mask: 0x03)                         */
#define GPIO_PUPDR_PUPDR11_Pos           (22UL)                    /*!< PUPDR11 (Bit 22)                                      */
#define GPIO_PUPDR_PUPDR11_Msk           (0xc00000UL)              /*!< PUPDR11 (Bitfield-Mask: 0x03)                         */
#define GPIO_PUPDR_PUPDR10_Pos           (20UL)                    /*!< PUPDR10 (Bit 20)                                      */
#define GPIO_PUPDR_PUPDR10_Msk           (0x300000UL)              /*!< PUPDR10 (Bitfield-Mask: 0x03)                         */
#define GPIO_PUPDR_PUPDR9_Pos            (18UL)                    /*!< PUPDR9 (Bit 18)                                       */
#define GPIO_PUPDR_PUPDR9_Msk            (0xc0000UL)               /*!< PUPDR9 (Bitfield-Mask: 0x03)                          */
#define GPIO_PUPDR_PUPDR8_Pos            (16UL)                    /*!< PUPDR8 (Bit 16)                                       */
#define GPIO_PUPDR_PUPDR8_Msk            (0x30000UL)               /*!< PUPDR8 (Bitfield-Mask: 0x03)                          */
#define GPIO_PUPDR_PUPDR7_Pos            (14UL)                    /*!< PUPDR7 (Bit 14)                                       */
#define GPIO_PUPDR_PUPDR7_Msk            (0xc000UL)                /*!< PUPDR7 (Bitfield-Mask: 0x03)                          */
#define GPIO_PUPDR_PUPDR6_Pos            (12UL)                    /*!< PUPDR6 (Bit 12)                                       */
#define GPIO_PUPDR_PUPDR6_Msk            (0x3000UL)                /*!< PUPDR6 (Bitfield-Mask: 0x03)                          */
#define GPIO_PUPDR_PUPDR5_Pos            (10UL)                    /*!< PUPDR5 (Bit 10)                                       */
#define GPIO_PUPDR_PUPDR5_Msk            (0xc00UL)                 /*!< PUPDR5 (Bitfield-Mask: 0x03)                          */
#define GPIO_PUPDR_PUPDR4_Pos            (8UL)                     /*!< PUPDR4 (Bit 8)                                        */
#define GPIO_PUPDR_PUPDR4_Msk            (0x300UL)                 /*!< PUPDR4 (Bitfield-Mask: 0x03)                          */
#define GPIO_PUPDR_PUPDR3_Pos            (6UL)                     /*!< PUPDR3 (Bit 6)                                        */
#define GPIO_PUPDR_PUPDR3_Msk            (0xc0UL)                  /*!< PUPDR3 (Bitfield-Mask: 0x03)                          */
#define GPIO_PUPDR_PUPDR2_Pos            (4UL)                     /*!< PUPDR2 (Bit 4)                                        */
#define GPIO_PUPDR_PUPDR2_Msk            (0x30UL)                  /*!< PUPDR2 (Bitfield-Mask: 0x03)                          */
#define GPIO_PUPDR_PUPDR1_Pos            (2UL)                     /*!< PUPDR1 (Bit 2)                                        */
#define GPIO_PUPDR_PUPDR1_Msk            (0xcUL)                   /*!< PUPDR1 (Bitfield-Mask: 0x03)                          */
#define GPIO_PUPDR_PUPDR0_Pos            (0UL)                     /*!< PUPDR0 (Bit 0)                                        */
#define GPIO_PUPDR_PUPDR0_Msk            (0x3UL)                   /*!< PUPDR0 (Bitfield-Mask: 0x03)                          */
/* =========================================================  IDR  ========================================================== */
#define GPIO_IDR_IDR15_Pos               (15UL)                    /*!< IDR15 (Bit 15)                                        */
#define GPIO_IDR_IDR15_Msk               (0x8000UL)                /*!< IDR15 (Bitfield-Mask: 0x01)                           */
#define GPIO_IDR_IDR14_Pos               (14UL)                    /*!< IDR14 (Bit 14)                                        */
#define GPIO_IDR_IDR14_Msk               (0x4000UL)                /*!< IDR14 (Bitfield-Mask: 0x01)                           */
#define GPIO_IDR_IDR13_Pos               (13UL)                    /*!< IDR13 (Bit 13)                                        */
#define GPIO_IDR_IDR13_Msk               (0x2000UL)                /*!< IDR13 (Bitfield-Mask: 0x01)                           */
#define GPIO_IDR_IDR12_Pos               (12UL)                    /*!< IDR12 (Bit 12)                                        */
#define GPIO_IDR_IDR12_Msk               (0x1000UL)                /*!< IDR12 (Bitfield-Mask: 0x01)                           */
#define GPIO_IDR_IDR11_Pos               (11UL)                    /*!< IDR11 (Bit 11)                                        */
#define GPIO_IDR_IDR11_Msk               (0x800UL)                 /*!< IDR11 (Bitfield-Mask: 0x01)                           */
#define GPIO_IDR_IDR10_Pos               (10UL)                    /*!< IDR10 (Bit 10)                                        */
#define GPIO_IDR_IDR10_Msk               (0x400UL)                 /*!< IDR10 (Bitfield-Mask: 0x01)                           */
#define GPIO_IDR_IDR9_Pos                (9UL)                     /*!< IDR9 (Bit 9)                                          */
#define GPIO_IDR_IDR9_Msk                (0x200UL)                 /*!< IDR9 (Bitfield-Mask: 0x01)                            */
#define GPIO_IDR_IDR8_Pos                (8UL)                     /*!< IDR8 (Bit 8)                                          */
#define GPIO_IDR_IDR8_Msk                (0x100UL)                 /*!< IDR8 (Bitfield-Mask: 0x01)                            */
#define GPIO_IDR_IDR7_Pos                (7UL)                     /*!< IDR7 (Bit 7)                                          */
#define GPIO_IDR_IDR7_Msk                (0x80UL)                  /*!< IDR7 (Bitfield-Mask: 0x01)                            */
#define GPIO_IDR_IDR6_Pos                (6UL)                     /*!< IDR6 (Bit 6)                                          */
#define GPIO_IDR_IDR6_Msk                (0x40UL)                  /*!< IDR6 (Bitfield-Mask: 0x01)                            */
#define GPIO_IDR_IDR5_Pos                (5UL)                     /*!< IDR5 (Bit 5)                                          */
#define GPIO_IDR_IDR5_Msk                (0x20UL)                  /*!< IDR5 (Bitfield-Mask: 0x01)                            */
#define GPIO_IDR_IDR4_Pos                (4UL)                     /*!< IDR4 (Bit 4)                                          */
#define GPIO_IDR_IDR4_Msk                (0x10UL)                  /*!< IDR4 (Bitfield-Mask: 0x01)                            */
#define GPIO_IDR_IDR3_Pos                (3UL)                     /*!< IDR3 (Bit 3)                                          */
#define GPIO_IDR_IDR3_Msk                (0x8UL)                   /*!< IDR3 (Bitfield-Mask: 0x01)                            */
#define GPIO_IDR_IDR2_Pos                (2UL)                     /*!< IDR2 (Bit 2)                                          */
#define GPIO_IDR_IDR2_Msk                (0x4UL)                   /*!< IDR2 (Bitfield-Mask: 0x01)                            */
#define GPIO_IDR_IDR1_Pos                (1UL)                     /*!< IDR1 (Bit 1)                                          */
#define GPIO_IDR_IDR1_Msk                (0x2UL)                   /*!< IDR1 (Bitfield-Mask: 0x01)                            */
#define GPIO_IDR_IDR0_Pos                (0UL)                     /*!< IDR0 (Bit 0)                                          */
#define GPIO_IDR_IDR0_Msk                (0x1UL)                   /*!< IDR0 (Bitfield-Mask: 0x01)                            */
/* =========================================================  ODR  ========================================================== */
#define GPIO_ODR_ODR15_Pos               (15UL)                    /*!< ODR15 (Bit 15)                                        */
#define GPIO_ODR_ODR15_Msk               (0x8000UL)                /*!< ODR15 (Bitfield-Mask: 0x01)                           */
#define GPIO_ODR_ODR14_Pos               (14UL)                    /*!< ODR14 (Bit 14)                                        */
#define GPIO_ODR_ODR14_Msk               (0x4000UL)                /*!< ODR14 (Bitfield-Mask: 0x01)                           */
#define GPIO_ODR_ODR13_Pos               (13UL)                    /*!< ODR13 (Bit 13)                                        */
#define GPIO_ODR_ODR13_Msk               (0x2000UL)                /*!< ODR13 (Bitfield-Mask: 0x01)                           */
#define GPIO_ODR_ODR12_Pos               (12UL)                    /*!< ODR12 (Bit 12)                                        */
#define GPIO_ODR_ODR12_Msk               (0x1000UL)                /*!< ODR12 (Bitfield-Mask: 0x01)                           */
#define GPIO_ODR_ODR11_Pos               (11UL)                    /*!< ODR11 (Bit 11)                                        */
#define GPIO_ODR_ODR11_Msk               (0x800UL)                 /*!< ODR11 (Bitfield-Mask: 0x01)                           */
#define GPIO_ODR_ODR10_Pos               (10UL)                    /*!< ODR10 (Bit 10)                                        */
#define GPIO_ODR_ODR10_Msk               (0x400UL)                 /*!< ODR10 (Bitfield-Mask: 0x01)                           */
#define GPIO_ODR_ODR9_Pos                (9UL)                     /*!< ODR9 (Bit 9)                                          */
#define GPIO_ODR_ODR9_Msk                (0x200UL)                 /*!< ODR9 (Bitfield-Mask: 0x01)                            */
#define GPIO_ODR_ODR8_Pos                (8UL)                     /*!< ODR8 (Bit 8)                                          */
#define GPIO_ODR_ODR8_Msk                (0x100UL)                 /*!< ODR8 (Bitfield-Mask: 0x01)                            */
#define GPIO_ODR_ODR7_Pos                (7UL)                     /*!< ODR7 (Bit 7)                                          */
#define GPIO_ODR_ODR7_Msk                (0x80UL)                  /*!< ODR7 (Bitfield-Mask: 0x01)                            */
#define GPIO_ODR_ODR6_Pos                (6UL)                     /*!< ODR6 (Bit 6)                                          */
#define GPIO_ODR_ODR6_Msk                (0x40UL)                  /*!< ODR6 (Bitfield-Mask: 0x01)                            */
#define GPIO_ODR_ODR5_Pos                (5UL)                     /*!< ODR5 (Bit 5)                                          */
#define GPIO_ODR_ODR5_Msk                (0x20UL)                  /*!< ODR5 (Bitfield-Mask: 0x01)                            */
#define GPIO_ODR_ODR4_Pos                (4UL)                     /*!< ODR4 (Bit 4)                                          */
#define GPIO_ODR_ODR4_Msk                (0x10UL)                  /*!< ODR4 (Bitfield-Mask: 0x01)                            */
#define GPIO_ODR_ODR3_Pos                (3UL)                     /*!< ODR3 (Bit 3)                                          */
#define GPIO_ODR_ODR3_Msk                (0x8UL)                   /*!< ODR3 (Bitfield-Mask: 0x01)                            */
#define GPIO_ODR_ODR2_Pos                (2UL)                     /*!< ODR2 (Bit 2)                                          */
#define GPIO_ODR_ODR2_Msk                (0x4UL)                   /*!< ODR2 (Bitfield-Mask: 0x01)                            */
#define GPIO_ODR_ODR1_Pos                (1UL)                     /*!< ODR1 (Bit 1)                                          */
#define GPIO_ODR_ODR1_Msk                (0x2UL)                   /*!< ODR1 (Bitfield-Mask: 0x01)                            */
#define GPIO_ODR_ODR0_Pos                (0UL)                     /*!< ODR0 (Bit 0)                                          */
#define GPIO_ODR_ODR0_Msk                (0x1UL)                   /*!< ODR0 (Bitfield-Mask: 0x01)                            */
/* ========================================================  BSRR  ========================================================== */
#define GPIO_BSRR_BR15_Pos               (31UL)                    /*!< BR15 (Bit 31)                                         */
#define GPIO_BSRR_BR15_Msk               (0x80000000UL)            /*!< BR15 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BR14_Pos               (30UL)                    /*!< BR14 (Bit 30)                                         */
#define GPIO_BSRR_BR14_Msk               (0x40000000UL)            /*!< BR14 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BR13_Pos               (29UL)                    /*!< BR13 (Bit 29)                                         */
#define GPIO_BSRR_BR13_Msk               (0x20000000UL)            /*!< BR13 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BR12_Pos               (28UL)                    /*!< BR12 (Bit 28)                                         */
#define GPIO_BSRR_BR12_Msk               (0x10000000UL)            /*!< BR12 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BR11_Pos               (27UL)                    /*!< BR11 (Bit 27)                                         */
#define GPIO_BSRR_BR11_Msk               (0x8000000UL)             /*!< BR11 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BR10_Pos               (26UL)                    /*!< BR10 (Bit 26)                                         */
#define GPIO_BSRR_BR10_Msk               (0x4000000UL)             /*!< BR10 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BR9_Pos                (25UL)                    /*!< BR9 (Bit 25)                                          */
#define GPIO_BSRR_BR9_Msk                (0x2000000UL)             /*!< BR9 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BR8_Pos                (24UL)                    /*!< BR8 (Bit 24)                                          */
#define GPIO_BSRR_BR8_Msk                (0x1000000UL)             /*!< BR8 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BR7_Pos                (23UL)                    /*!< BR7 (Bit 23)                                          */
#define GPIO_BSRR_BR7_Msk                (0x800000UL)              /*!< BR7 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BR6_Pos                (22UL)                    /*!< BR6 (Bit 22)                                          */
#define GPIO_BSRR_BR6_Msk                (0x400000UL)              /*!< BR6 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BR5_Pos                (21UL)                    /*!< BR5 (Bit 21)                                          */
#define GPIO_BSRR_BR5_Msk                (0x200000UL)              /*!< BR5 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BR4_Pos                (20UL)                    /*!< BR4 (Bit 20)                                          */
#define GPIO_BSRR_BR4_Msk                (0x100000UL)              /*!< BR4 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BR3_Pos                (19UL)                    /*!< BR3 (Bit 19)                                          */
#define GPIO_BSRR_BR3_Msk                (0x80000UL)               /*!< BR3 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BR2_Pos                (18UL)                    /*!< BR2 (Bit 18)                                          */
#define GPIO_BSRR_BR2_Msk                (0x40000UL)               /*!< BR2 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BR1_Pos                (17UL)                    /*!< BR1 (Bit 17)                                          */
#define GPIO_BSRR_BR1_Msk                (0x20000UL)               /*!< BR1 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BR0_Pos                (16UL)                    /*!< BR0 (Bit 16)                                          */
#define GPIO_BSRR_BR0_Msk                (0x10000UL)               /*!< BR0 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BS15_Pos               (15UL)                    /*!< BS15 (Bit 15)                                         */
#define GPIO_BSRR_BS15_Msk               (0x8000UL)                /*!< BS15 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BS14_Pos               (14UL)                    /*!< BS14 (Bit 14)                                         */
#define GPIO_BSRR_BS14_Msk               (0x4000UL)                /*!< BS14 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BS13_Pos               (13UL)                    /*!< BS13 (Bit 13)                                         */
#define GPIO_BSRR_BS13_Msk               (0x2000UL)                /*!< BS13 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BS12_Pos               (12UL)                    /*!< BS12 (Bit 12)                                         */
#define GPIO_BSRR_BS12_Msk               (0x1000UL)                /*!< BS12 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BS11_Pos               (11UL)                    /*!< BS11 (Bit 11)                                         */
#define GPIO_BSRR_BS11_Msk               (0x800UL)                 /*!< BS11 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BS10_Pos               (10UL)                    /*!< BS10 (Bit 10)                                         */
#define GPIO_BSRR_BS10_Msk               (0x400UL)                 /*!< BS10 (Bitfield-Mask: 0x01)                            */
#define GPIO_BSRR_BS9_Pos                (9UL)                     /*!< BS9 (Bit 9)                                           */
#define GPIO_BSRR_BS9_Msk                (0x200UL)                 /*!< BS9 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BS8_Pos                (8UL)                     /*!< BS8 (Bit 8)                                           */
#define GPIO_BSRR_BS8_Msk                (0x100UL)                 /*!< BS8 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BS7_Pos                (7UL)                     /*!< BS7 (Bit 7)                                           */
#define GPIO_BSRR_BS7_Msk                (0x80UL)                  /*!< BS7 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BS6_Pos                (6UL)                     /*!< BS6 (Bit 6)                                           */
#define GPIO_BSRR_BS6_Msk                (0x40UL)                  /*!< BS6 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BS5_Pos                (5UL)                     /*!< BS5 (Bit 5)                                           */
#define GPIO_BSRR_BS5_Msk                (0x20UL)                  /*!< BS5 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BS4_Pos                (4UL)                     /*!< BS4 (Bit 4)                                           */
#define GPIO_BSRR_BS4_Msk                (0x10UL)                  /*!< BS4 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BS3_Pos                (3UL)                     /*!< BS3 (Bit 3)                                           */
#define GPIO_BSRR_BS3_Msk                (0x8UL)                   /*!< BS3 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BS2_Pos                (2UL)                     /*!< BS2 (Bit 2)                                           */
#define GPIO_BSRR_BS2_Msk                (0x4UL)                   /*!< BS2 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BS1_Pos                (1UL)                     /*!< BS1 (Bit 1)                                           */
#define GPIO_BSRR_BS1_Msk                (0x2UL)                   /*!< BS1 (Bitfield-Mask: 0x01)                             */
#define GPIO_BSRR_BS0_Pos                (0UL)                     /*!< BS0 (Bit 0)                                           */
#define GPIO_BSRR_BS0_Msk                (0x1UL)                   /*!< BS0 (Bitfield-Mask: 0x01)                             */
/* ========================================================  LCKR  ========================================================== */
#define GPIO_LCKR_LCKK_Pos               (16UL)                    /*!< LCKK (Bit 16)                                         */
#define GPIO_LCKR_LCKK_Msk               (0x10000UL)               /*!< LCKK (Bitfield-Mask: 0x01)                            */
#define GPIO_LCKR_LCK15_Pos              (15UL)                    /*!< LCK15 (Bit 15)                                        */
#define GPIO_LCKR_LCK15_Msk              (0x8000UL)                /*!< LCK15 (Bitfield-Mask: 0x01)                           */
#define GPIO_LCKR_LCK14_Pos              (14UL)                    /*!< LCK14 (Bit 14)                                        */
#define GPIO_LCKR_LCK14_Msk              (0x4000UL)                /*!< LCK14 (Bitfield-Mask: 0x01)                           */
#define GPIO_LCKR_LCK13_Pos              (13UL)                    /*!< LCK13 (Bit 13)                                        */
#define GPIO_LCKR_LCK13_Msk              (0x2000UL)                /*!< LCK13 (Bitfield-Mask: 0x01)                           */
#define GPIO_LCKR_LCK12_Pos              (12UL)                    /*!< LCK12 (Bit 12)                                        */
#define GPIO_LCKR_LCK12_Msk              (0x1000UL)                /*!< LCK12 (Bitfield-Mask: 0x01)                           */
#define GPIO_LCKR_LCK11_Pos              (11UL)                    /*!< LCK11 (Bit 11)                                        */
#define GPIO_LCKR_LCK11_Msk              (0x800UL)                 /*!< LCK11 (Bitfield-Mask: 0x01)                           */
#define GPIO_LCKR_LCK10_Pos              (10UL)                    /*!< LCK10 (Bit 10)                                        */
#define GPIO_LCKR_LCK10_Msk              (0x400UL)                 /*!< LCK10 (Bitfield-Mask: 0x01)                           */
#define GPIO_LCKR_LCK9_Pos               (9UL)                     /*!< LCK9 (Bit 9)                                          */
#define GPIO_LCKR_LCK9_Msk               (0x200UL)                 /*!< LCK9 (Bitfield-Mask: 0x01)                            */
#define GPIO_LCKR_LCK8_Pos               (8UL)                     /*!< LCK8 (Bit 8)                                          */
#define GPIO_LCKR_LCK8_Msk               (0x100UL)                 /*!< LCK8 (Bitfield-Mask: 0x01)                            */
#define GPIO_LCKR_LCK7_Pos               (7UL)                     /*!< LCK7 (Bit 7)                                          */
#define GPIO_LCKR_LCK7_Msk               (0x80UL)                  /*!< LCK7 (Bitfield-Mask: 0x01)                            */
#define GPIO_LCKR_LCK6_Pos               (6UL)                     /*!< LCK6 (Bit 6)                                          */
#define GPIO_LCKR_LCK6_Msk               (0x40UL)                  /*!< LCK6 (Bitfield-Mask: 0x01)                            */
#define GPIO_LCKR_LCK5_Pos               (5UL)                     /*!< LCK5 (Bit 5)                                          */
#define GPIO_LCKR_LCK5_Msk               (0x20UL)                  /*!< LCK5 (Bitfield-Mask: 0x01)                            */
#define GPIO_LCKR_LCK4_Pos               (4UL)                     /*!< LCK4 (Bit 4)                                          */
#define GPIO_LCKR_LCK4_Msk               (0x10UL)                  /*!< LCK4 (Bitfield-Mask: 0x01)                            */
#define GPIO_LCKR_LCK3_Pos               (3UL)                     /*!< LCK3 (Bit 3)                                          */
#define GPIO_LCKR_LCK3_Msk               (0x8UL)                   /*!< LCK3 (Bitfield-Mask: 0x01)                            */
#define GPIO_LCKR_LCK2_Pos               (2UL)                     /*!< LCK2 (Bit 2)                                          */
#define GPIO_LCKR_LCK2_Msk               (0x4UL)                   /*!< LCK2 (Bitfield-Mask: 0x01)                            */
#define GPIO_LCKR_LCK1_Pos               (1UL)                     /*!< LCK1 (Bit 1)                                          */
#define GPIO_LCKR_LCK1_Msk               (0x2UL)                   /*!< LCK1 (Bitfield-Mask: 0x01)                            */
#define GPIO_LCKR_LCK0_Pos               (0UL)                     /*!< LCK0 (Bit 0)                                          */
#define GPIO_LCKR_LCK0_Msk               (0x1UL)                   /*!< LCK0 (Bitfield-Mask: 0x01)                            */
/* ========================================================  AFRL  ========================================================== */
#define GPIO_AFRL_AFRL7_Pos              (28UL)                    /*!< AFRL7 (Bit 28)                                        */
#define GPIO_AFRL_AFRL7_Msk              (0xf0000000UL)            /*!< AFRL7 (Bitfield-Mask: 0x0f)                           */
#define GPIO_AFRL_AFRL6_Pos              (24UL)                    /*!< AFRL6 (Bit 24)                                        */
#define GPIO_AFRL_AFRL6_Msk              (0xf000000UL)             /*!< AFRL6 (Bitfield-Mask: 0x0f)                           */
#define GPIO_AFRL_AFRL5_Pos              (20UL)                    /*!< AFRL5 (Bit 20)                                        */
#define GPIO_AFRL_AFRL5_Msk              (0xf00000UL)              /*!< AFRL5 (Bitfield-Mask: 0x0f)                           */
#define GPIO_AFRL_AFRL4_Pos              (16UL)                    /*!< AFRL4 (Bit 16)                                        */
#define GPIO_AFRL_AFRL4_Msk              (0xf0000UL)               /*!< AFRL4 (Bitfield-Mask: 0x0f)                           */
#define GPIO_AFRL_AFRL3_Pos              (12UL)                    /*!< AFRL3 (Bit 12)                                        */
#define GPIO_AFRL_AFRL3_Msk              (0xf000UL)                /*!< AFRL3 (Bitfield-Mask: 0x0f)                           */
#define GPIO_AFRL_AFRL2_Pos              (8UL)                     /*!< AFRL2 (Bit 8)                                         */
#define GPIO_AFRL_AFRL2_Msk              (0xf00UL)                 /*!< AFRL2 (Bitfield-Mask: 0x0f)                           */
#define GPIO_AFRL_AFRL1_Pos              (4UL)                     /*!< AFRL1 (Bit 4)                                         */
#define GPIO_AFRL_AFRL1_Msk              (0xf0UL)                  /*!< AFRL1 (Bitfield-Mask: 0x0f)                           */
#define GPIO_AFRL_AFRL0_Pos              (0UL)                     /*!< AFRL0 (Bit 0)                                         */
#define GPIO_AFRL_AFRL0_Msk              (0xfUL)                   /*!< AFRL0 (Bitfield-Mask: 0x0f)                           */
/* ========================================================  AFRH  ========================================================== */
#define GPIO_AFRH_AFRH15_Pos             (28UL)                    /*!< AFRH15 (Bit 28)                                       */
#define GPIO_AFRH_AFRH15_Msk             (0xf0000000UL)            /*!< AFRH15 (Bitfield-Mask: 0x0f)                          */
#define GPIO_AFRH_AFRH14_Pos             (24UL)                    /*!< AFRH14 (Bit 24)                                       */
#define GPIO_AFRH_AFRH14_Msk             (0xf000000UL)             /*!< AFRH14 (Bitfield-Mask: 0x0f)                          */
#define GPIO_AFRH_AFRH13_Pos             (20UL)                    /*!< AFRH13 (Bit 20)                                       */
#define GPIO_AFRH_AFRH13_Msk             (0xf00000UL)              /*!< AFRH13 (Bitfield-Mask: 0x0f)                          */
#define GPIO_AFRH_AFRH12_Pos             (16UL)                    /*!< AFRH12 (Bit 16)                                       */
#define GPIO_AFRH_AFRH12_Msk             (0xf0000UL)               /*!< AFRH12 (Bitfield-Mask: 0x0f)                          */
#define GPIO_AFRH_AFRH11_Pos             (12UL)                    /*!< AFRH11 (Bit 12)                                       */
#define GPIO_AFRH_AFRH11_Msk             (0xf000UL)                /*!< AFRH11 (Bitfield-Mask: 0x0f)                          */
#define GPIO_AFRH_AFRH10_Pos             (8UL)                     /*!< AFRH10 (Bit 8)                                        */
#define GPIO_AFRH_AFRH10_Msk             (0xf00UL)                 /*!< AFRH10 (Bitfield-Mask: 0x0f)                          */
#define GPIO_AFRH_AFRH9_Pos              (4UL)                     /*!< AFRH9 (Bit 4)                                         */
#define GPIO_AFRH_AFRH9_Msk              (0xf0UL)                  /*!< AFRH9 (Bitfield-Mask: 0x0f)                           */
#define GPIO_AFRH_AFRH8_Pos              (0UL)                     /*!< AFRH8 (Bit 0)                                         */
#define GPIO_AFRH_AFRH8_Msk              (0xfUL)                   /*!< AFRH8 (Bitfield-Mask: 0x0f)                           */
/* =========================================================  BRR  ========================================================== */
#define GPIO_BRR_BR0_Pos                 (0UL)                     /*!< BR0 (Bit 0)                                           */
#define GPIO_BRR_BR0_Msk                 (0x1UL)                   /*!< BR0 (Bitfield-Mask: 0x01)                             */
#define GPIO_BRR_BR1_Pos                 (1UL)                     /*!< BR1 (Bit 1)                                           */
#define GPIO_BRR_BR1_Msk                 (0x2UL)                   /*!< BR1 (Bitfield-Mask: 0x01)                             */
#define GPIO_BRR_BR2_Pos                 (2UL)                     /*!< BR2 (Bit 2)                                           */
#define GPIO_BRR_BR2_Msk                 (0x4UL)                   /*!< BR2 (Bitfield-Mask: 0x01)                             */
#define GPIO_BRR_BR3_Pos                 (3UL)                     /*!< BR3 (Bit 3)                                           */
#define GPIO_BRR_BR3_Msk                 (0x8UL)                   /*!< BR3 (Bitfield-Mask: 0x01)                             */
#define GPIO_BRR_BR4_Pos                 (4UL)                     /*!< BR4 (Bit 4)                                           */
#define GPIO_BRR_BR4_Msk                 (0x10UL)                  /*!< BR4 (Bitfield-Mask: 0x01)                             */
#define GPIO_BRR_BR5_Pos                 (5UL)                     /*!< BR5 (Bit 5)                                           */
#define GPIO_BRR_BR5_Msk                 (0x20UL)                  /*!< BR5 (Bitfield-Mask: 0x01)                             */
#define GPIO_BRR_BR6_Pos                 (6UL)                     /*!< BR6 (Bit 6)                                           */
#define GPIO_BRR_BR6_Msk                 (0x40UL)                  /*!< BR6 (Bitfield-Mask: 0x01)                             */
#define GPIO_BRR_BR7_Pos                 (7UL)                     /*!< BR7 (Bit 7)                                           */
#define GPIO_BRR_BR7_Msk                 (0x80UL)                  /*!< BR7 (Bitfield-Mask: 0x01)                             */
#define GPIO_BRR_BR8_Pos                 (8UL)                     /*!< BR8 (Bit 8)                                           */
#define GPIO_BRR_BR8_Msk                 (0x100UL)                 /*!< BR8 (Bitfield-Mask: 0x01)                             */
#define GPIO_BRR_BR9_Pos                 (9UL)                     /*!< BR9 (Bit 9)                                           */
#define GPIO_BRR_BR9_Msk                 (0x200UL)                 /*!< BR9 (Bitfield-Mask: 0x01)                             */
#define GPIO_BRR_BR10_Pos                (10UL)                    /*!< BR10 (Bit 10)                                         */
#define GPIO_BRR_BR10_Msk                (0x400UL)                 /*!< BR10 (Bitfield-Mask: 0x01)                            */
#define GPIO_BRR_BR11_Pos                (11UL)                    /*!< BR11 (Bit 11)                                         */
#define GPIO_BRR_BR11_Msk                (0x800UL)                 /*!< BR11 (Bitfield-Mask: 0x01)                            */
#define GPIO_BRR_BR12_Pos                (12UL)                    /*!< BR12 (Bit 12)                                         */
#define GPIO_BRR_BR12_Msk                (0x1000UL)                /*!< BR12 (Bitfield-Mask: 0x01)                            */
#define GPIO_BRR_BR13_Pos                (13UL)                    /*!< BR13 (Bit 13)                                         */
#define GPIO_BRR_BR13_Msk                (0x2000UL)                /*!< BR13 (Bitfield-Mask: 0x01)                            */
#define GPIO_BRR_BR14_Pos                (14UL)                    /*!< BR14 (Bit 14)                                         */
#define GPIO_BRR_BR14_Msk                (0x4000UL)                /*!< BR14 (Bitfield-Mask: 0x01)                            */
#define GPIO_BRR_BR15_Pos                (15UL)                    /*!< BR15 (Bit 15)                                         */
#define GPIO_BRR_BR15_Msk                (0x8000UL)                /*!< BR15 (Bitfield-Mask: 0x01)                            */
