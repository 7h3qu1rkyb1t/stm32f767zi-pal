#include "core.h"

#define NVIC_BASE                   0xE000E100UL
#define NVIC_STIR_BASE              0xE000EF00UL
#define NVIC                        ((NVIC_Type*)              NVIC_BASE)
#define NVIC_STIR                   ((NVIC_STIR_Type*)         NVIC_STIR_BASE)
/* =========================================================================================================================== */
/* ================                                Interrupt Number Definition                                ================ */
/* =========================================================================================================================== */

typedef enum {
/* =========================================  STM32F767 Specific Interrupt Numbers  ========================================== */
  WWDG_IRQn                 =   0,              /*!< 0  Window Watchdog interrupt                                              */
  PVD_IRQn                  =   1,              /*!< 1  PVD through EXTI line detection                                        */
  TAMP_STAMP_IRQn           =   2,              /*!< 2  Tamper and TimeStamp interrupts through the EXTI line                  */
  RTC_WKUP_IRQn             =   3,              /*!< 3  RTC Tamper or TimeStamp /CSS on LSE through EXTI line 19 interrupts    */
  FLASH_IRQn                =   4,              /*!< 4  Flash global interrupt                                                 */
  RCC_IRQn                  =   5,              /*!< 5  RCC global interrupt                                                   */
  EXTI0_IRQn                =   6,              /*!< 6  EXTI Line0 interrupt                                                   */
  EXTI1_IRQn                =   7,              /*!< 7  EXTI Line1 interrupt                                                   */
  EXTI2_IRQn                =   8,              /*!< 8  EXTI Line2 interrupt                                                   */
  EXTI3_IRQn                =   9,              /*!< 9  EXTI Line3 interrupt                                                   */
  EXTI4_IRQn                =  10,              /*!< 10 EXTI Line4 interrupt                                                   */
  DMA1_Stream0_IRQn         =  11,              /*!< 11 DMA1 Stream0 global interrupt                                          */
  DMA1_Stream1_IRQn         =  12,              /*!< 12 DMA1 Stream1 global interrupt                                          */
  DMA1_Stream2_IRQn         =  13,              /*!< 13 DMA1 Stream2 global interrupt                                          */
  DMA1_Stream3_IRQn         =  14,              /*!< 14 DMA1 Stream3 global interrupt                                          */
  DMA1_Stream4_IRQn         =  15,              /*!< 15 DMA1 Stream4 global interrupt                                          */
  DMA1_Stream5_IRQn         =  16,              /*!< 16 DMA1 Stream5 global interrupt                                          */
  DMA1_Stream6_IRQn         =  17,              /*!< 17 DMA1 Stream6 global interrupt                                          */
  ADC_IRQn                  =  18,              /*!< 18 ADC1 global interrupt                                                  */
  CAN1_TX_IRQn              =  19,              /*!< 19 CAN1 TX interrupts                                                     */
  CAN1_RX0_IRQn             =  20,              /*!< 20 CAN1 RX0 interrupts                                                    */
  CAN1_RX1_IRQn             =  21,              /*!< 21 CAN1 RX1 interrupts                                                    */
  CAN1_SCE_IRQn             =  22,              /*!< 22 CAN1 SCE interrupt                                                     */
  EXTI9_5_IRQn              =  23,              /*!< 23 EXTI Line[9:5] interrupts                                              */
  TIM1_BRK_TIM9_IRQn        =  24,              /*!< 24 TIM1 Break interrupt and TIM9 global interrupt                         */
  TIM1_UP_TIM10_IRQn        =  25,              /*!< 25 TIM1 Update interrupt and TIM10                                        */
  TIM1_TRG_COM_TIM11_IRQn   =  26,              /*!< 26 TIM1 Trigger and Commutation interrupts and TIM11 global
                                                     interrupt                                                                 */
  TIM1_CC_IRQn              =  27,              /*!< 27 TIM1 Capture Compare interrupt                                         */
  TIM2_IRQn                 =  28,              /*!< 28 TIM2 global interrupt                                                  */
  TIM3_IRQn                 =  29,              /*!< 29 TIM3 global interrupt                                                  */
  TIM4_IRQn                 =  30,              /*!< 30 TIM4 global interrupt                                                  */
  I2C1_EV_IRQn              =  31,              /*!< 31 I2C1 event interrupt                                                   */
  I2C1_ER_IRQn              =  32,              /*!< 32 I2C1 error interrupt                                                   */
  I2C2_EV_IRQn              =  33,              /*!< 33 I2C2 event interrupt                                                   */
  I2C2_ER_IRQn              =  34,              /*!< 34 I2C2 error interrupt                                                   */
  SPI1_IRQn                 =  35,              /*!< 35 SPI1 global interrupt                                                  */
  SPI2_IRQn                 =  36,              /*!< 36 SPI2 global interrupt                                                  */
  USART1_IRQn               =  37,              /*!< 37 USART1 global interrupt                                                */
  USART2_IRQn               =  38,              /*!< 38 USART2 global interrupt                                                */
  USART3_IRQn               =  39,              /*!< 39 USART3 global interrupt                                                */
  EXTI15_10_IRQn            =  40,              /*!< 40 EXTI Line[15:10] interrupts                                            */
  RTC_ALARM_IRQn            =  41,              /*!< 41 RTC alarms through EXTI line 18 interrupts                             */
  OTG_FS_WKUP_IRQn          =  42,              /*!< 42 USB On-The-Go FS Wakeup through EXTI line interrupt                    */
  TIM8_BRK_TIM12_IRQn       =  43,              /*!< 43 TIM8 Break interrupt and TIM12 global interrupt                        */
  TIM8_UP_TIM13_IRQn        =  44,              /*!< 44 TIM8 Update interrupt and TIM13 global interrupt                       */
  TIM8_TRG_COM_TIM14_IRQn   =  45,              /*!< 45 TIM8 Trigger and Commutation interrupts and TIM14 global
                                                     interrupt                                                                 */
  TIM8_CC_IRQn              =  46,              /*!< 46 TIM8 Capture Compare interrupt                                         */
  DMA1_Stream7_IRQn         =  47,              /*!< 47 DMA1 Stream7 global interrupt                                          */
  FMC_IRQn                  =  48,              /*!< 48 FMC global interrupt                                                   */
  SDMMC1_IRQn               =  49,              /*!< 49 SDMMC1 global interrupt                                                */
  TIM5_IRQn                 =  50,              /*!< 50 TIM5 global interrupt                                                  */
  SPI3_IRQn                 =  51,              /*!< 51 SPI3 global interrupt                                                  */
  UART4_IRQn                =  52,              /*!< 52 UART4 global interrupt                                                 */
  UART5_IRQn                =  53,              /*!< 53 UART5 global interrupt                                                 */
  TIM6_DAC_IRQn             =  54,              /*!< 54 TIM6 global interrupt, DAC1 and DAC2 underrun error interrupt          */
  TIM7_IRQn                 =  55,              /*!< 55 TIM7 global interrupt                                                  */
  DMA2_Stream0_IRQn         =  56,              /*!< 56 DMA2 Stream0 global interrupt                                          */
  DMA2_Stream1_IRQn         =  57,              /*!< 57 DMA2 Stream1 global interrupt                                          */
  DMA2_Stream2_IRQn         =  58,              /*!< 58 DMA2 Stream2 global interrupt                                          */
  DMA2_Stream3_IRQn         =  59,              /*!< 59 DMA2 Stream3 global interrupt                                          */
  DMA2_Stream4_IRQn         =  60,              /*!< 60 DMA2 Stream4 global interrupt                                          */
  ETH_IRQn                  =  61,              /*!< 61 Ethernet global interrupt                                              */
  ETH_WKUP_IRQn             =  62,              /*!< 62 Ethernet Wakeup through EXTI line                                      */
  CAN2_TX_IRQn              =  63,              /*!< 63 CAN2 TX interrupts                                                     */
  CAN2_RX0_IRQn             =  64,              /*!< 64 CAN2 RX0 interrupts                                                    */
  CAN2_RX1_IRQn             =  65,              /*!< 65 CAN2 RX1 interrupts                                                    */
  CAN2_SCE_IRQn             =  66,              /*!< 66 CAN2 SCE interrupt                                                     */
  OTG_FS_IRQn               =  67,              /*!< 67 USB On The Go FS global interrupt                                      */
  DMA2_Stream5_IRQn         =  68,              /*!< 68 DMA2 Stream5 global interrupt                                          */
  DMA2_Stream6_IRQn         =  69,              /*!< 69 DMA2 Stream6 global interrupt                                          */
  DMA2_Stream7_IRQn         =  70,              /*!< 70 DMA2 Stream7 global interrupt                                          */
  USART6_IRQn               =  71,              /*!< 71 USART6 global interrupt                                                */
  I2C3_EV_IRQn              =  72,              /*!< 72 I2C3 event interrupt                                                   */
  I2C3_ER_IRQn              =  73,              /*!< 73 I2C3 error interrupt                                                   */
  OTG_HS_EP1_OUT_IRQn       =  74,              /*!< 74 USB On The Go HS End Point 1 Out global interrupt                      */
  OTG_HS_EP1_IN_IRQn        =  75,              /*!< 75 USB On The Go HS End Point 1 In global interrupt                       */
  OTG_HS_WKUP_IRQn          =  76,              /*!< 76 USB On The Go HS Wakeup through EXTI interrupt                         */
  OTG_HS_IRQn               =  77,              /*!< 77 USB On The Go HS global interrupt                                      */
  DCMI_IRQn                 =  78,              /*!< 78 DCMI global interrupt                                                  */
  CRYP_IRQn                 =  79,              /*!< 79 CRYP crypto global interrupt                                           */
  HASH_RNG_IRQn             =  80,              /*!< 80 Hash and Rng global interrupt                                          */
  FPU_IRQn                  =  81,              /*!< 81 Floating point unit interrupt                                          */
  UART7_IRQn                =  82,              /*!< 82 UART7 global interrupt                                                 */
  UART8_IRQn                =  83,              /*!< 83 UART 8 global interrupt                                                */
  SPI4_IRQn                 =  84,              /*!< 84 SPI 4 global interrupt                                                 */
  SPI5_IRQn                 =  85,              /*!< 85 SPI 5 global interrupt                                                 */
  SPI6_IRQn                 =  86,              /*!< 86 SPI 6 global interrupt                                                 */
  SAI1_IRQn                 =  87,              /*!< 87 SAI1 global interrupt                                                  */
  LCD_TFT_IRQn              =  88,              /*!< 88 LTDC global interrupt                                                  */
  LCD_TFT_1_IRQn            =  89,              /*!< 89 LCD-TFT global Error interrupt                                         */
  DMA2D_IRQn                =  90,              /*!< 90 DMA2D global interrupt                                                 */
  SAI2_IRQn                 =  91,              /*!< 91 SAI2 global interrupt                                                  */
  QuadSPI_IRQn              =  92,              /*!< 92 QuadSPI global interrupt                                               */
  LP_Timer1_IRQn            =  93,              /*!< 93 LP Timer1 global interrupt                                             */
  I2C4_EV_IRQn              =  95,              /*!< 95 I2C4 event interrupt                                                   */
  I2C4_ER_IRQn              =  96,              /*!< 96 I2C4 Error interrupt                                                   */
  SPDIFRX_IRQn              =  97,              /*!< 97 SPDIFRX global interrupt                                               */
  DSIHOST_IRQn              =  98,              /*!< 98 DSI host global interrupt                                              */
  DFSDM1_FLT0_IRQn          =  99,              /*!< 99 DFSDM1 Filter 0 global interrupt                                       */
  DFSDM1_FLT1_IRQn          = 100,              /*!< 100  DFSDM1 Filter 1 global interrupt                                     */
  DFSDM1_FLT2_IRQn          = 101,              /*!< 101  DFSDM1 Filter 2 global interrupt                                     */
  DFSDM1_FLT3_IRQn          = 102,              /*!< 102  DFSDM1 Filter 3 global interrupt                                     */
  SDMMC2_IRQn               = 103,              /*!< 103  SDMMC2 global interrupt                                              */
  CAN3_TX_IRQn              = 104,              /*!< 104  CAN3 TX interrupt                                                    */
  CAN3_RX0_IRQn             = 105,              /*!< 105  CAN3 RX0 interrupt                                                   */
  CAN3_RX1_IRQn             = 106,              /*!< 106  CAN3 RX1 interrupt                                                   */
  CAN3_SCE_IRQn             = 107,              /*!< 107  CAN3 SCE interrupt                                                   */
  JPEG_IRQn                 = 108,              /*!< 108  JPEG global interrupt                                                */
  MDIOS_IRQn                = 109               /*!< 109  MDIO slave global interrupt                                          */
} IRQn_Type;


/* =========================================================================================================================== */
/* ================                                         NVIC_STIR                                         ================ */
/* =========================================================================================================================== */


/**
  * @brief Nested vectored interrupt
      controller (NVIC_STIR)
  */

typedef struct {                                /*!< (@ 0xE000EF00) NVIC_STIR Structure                                        */
  
  union {
    __IOM uint32_t STIR;                        /*!< (@ 0x00000000) Software trigger interrupt register                        */
    
    struct {
      __IOM uint32_t INTID      : 9;            /*!< [8..0] Software generated interrupt ID                                    */
            uint32_t            : 23;
    } STIR_b;
  } ;
} NVIC_STIR_Type;                               /*!< Size = 4 (0x4)                                                            */



/* =========================================================================================================================== */
/* ================                                           NVIC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Nested Vectored Interrupt
      Controller (NVIC)
  */

typedef struct {                                /*!< (@ 0xE000E100) NVIC Structure                                             */
  
  union {
    __IOM uint32_t ISER0;                       /*!< (@ 0x00000000) Interrupt Set-Enable Register                              */
    
    struct {
      __IOM uint32_t SETENA     : 32;           /*!< [31..0] SETENA                                                            */
    } ISER0_b;
  } ;
  
  union {
    __IOM uint32_t ISER1;                       /*!< (@ 0x00000004) Interrupt Set-Enable Register                              */
    
    struct {
      __IOM uint32_t SETENA     : 32;           /*!< [31..0] SETENA                                                            */
    } ISER1_b;
  } ;
  
  union {
    __IOM uint32_t ISER2;                       /*!< (@ 0x00000008) Interrupt Set-Enable Register                              */
    
    struct {
      __IOM uint32_t SETENA     : 32;           /*!< [31..0] SETENA                                                            */
    } ISER2_b;
  } ;
  
  union {
    __IOM uint32_t ISER3;                       /*!< (@ 0x0000000C) Interrupt Set-Enable Register                              */
    
    struct {
      __IOM uint32_t SETENA     : 32;           /*!< [31..0] SETENA                                                            */
    } ISER3_b;
  } ;
  __IM  uint32_t  RESERVED[28];
  
  union {
    __IOM uint32_t ICER0;                       /*!< (@ 0x00000080) Interrupt Clear-Enable Register                            */
    
    struct {
      __IOM uint32_t CLRENA     : 32;           /*!< [31..0] CLRENA                                                            */
    } ICER0_b;
  } ;
  
  union {
    __IOM uint32_t ICER1;                       /*!< (@ 0x00000084) Interrupt Clear-Enable Register                            */
    
    struct {
      __IOM uint32_t CLRENA     : 32;           /*!< [31..0] CLRENA                                                            */
    } ICER1_b;
  } ;
  
  union {
    __IOM uint32_t ICER2;                       /*!< (@ 0x00000088) Interrupt Clear-Enable Register                            */
    
    struct {
      __IOM uint32_t CLRENA     : 32;           /*!< [31..0] CLRENA                                                            */
    } ICER2_b;
  } ;
  
  union {
    __IOM uint32_t ICER3;                       /*!< (@ 0x0000008C) Interrupt Clear-Enable Register                            */
    
    struct {
      __IOM uint32_t CLRENA     : 32;           /*!< [31..0] CLRENA                                                            */
    } ICER3_b;
  } ;
  __IM  uint32_t  RESERVED1[28];
  
  union {
    __IOM uint32_t ISPR0;                       /*!< (@ 0x00000100) Interrupt Set-Pending Register                             */
    
    struct {
      __IOM uint32_t SETPEND    : 32;           /*!< [31..0] SETPEND                                                           */
    } ISPR0_b;
  } ;
  
  union {
    __IOM uint32_t ISPR1;                       /*!< (@ 0x00000104) Interrupt Set-Pending Register                             */
    
    struct {
      __IOM uint32_t SETPEND    : 32;           /*!< [31..0] SETPEND                                                           */
    } ISPR1_b;
  } ;
  
  union {
    __IOM uint32_t ISPR2;                       /*!< (@ 0x00000108) Interrupt Set-Pending Register                             */
    
    struct {
      __IOM uint32_t SETPEND    : 32;           /*!< [31..0] SETPEND                                                           */
    } ISPR2_b;
  } ;
  
  union {
    __IOM uint32_t ISPR3;                       /*!< (@ 0x0000010C) Interrupt Set-Pending Register                             */
    
    struct {
      __IOM uint32_t SETPEND    : 32;           /*!< [31..0] SETPEND                                                           */
    } ISPR3_b;
  } ;
  __IM  uint32_t  RESERVED2[28];
  
  union {
    __IOM uint32_t ICPR0;                       /*!< (@ 0x00000180) Interrupt Clear-Pending Register                           */
    
    struct {
      __IOM uint32_t CLRPEND    : 32;           /*!< [31..0] CLRPEND                                                           */
    } ICPR0_b;
  } ;
  
  union {
    __IOM uint32_t ICPR1;                       /*!< (@ 0x00000184) Interrupt Clear-Pending Register                           */
    
    struct {
      __IOM uint32_t CLRPEND    : 32;           /*!< [31..0] CLRPEND                                                           */
    } ICPR1_b;
  } ;
  
  union {
    __IOM uint32_t ICPR2;                       /*!< (@ 0x00000188) Interrupt Clear-Pending Register                           */
    
    struct {
      __IOM uint32_t CLRPEND    : 32;           /*!< [31..0] CLRPEND                                                           */
    } ICPR2_b;
  } ;
  
  union {
    __IOM uint32_t ICPR3;                       /*!< (@ 0x0000018C) Interrupt Clear-Pending Register                           */
    
    struct {
      __IOM uint32_t CLRPEND    : 32;           /*!< [31..0] CLRPEND                                                           */
    } ICPR3_b;
  } ;
  __IM  uint32_t  RESERVED3[28];
  
  union {
    __IM  uint32_t IABR0;                       /*!< (@ 0x00000200) Interrupt Active Bit Register                              */
    
    struct {
      __IM  uint32_t ACTIVE     : 32;           /*!< [31..0] ACTIVE                                                            */
    } IABR0_b;
  } ;
  
  union {
    __IM  uint32_t IABR1;                       /*!< (@ 0x00000204) Interrupt Active Bit Register                              */
    
    struct {
      __IM  uint32_t ACTIVE     : 32;           /*!< [31..0] ACTIVE                                                            */
    } IABR1_b;
  } ;
  
  union {
    __IM  uint32_t IABR2;                       /*!< (@ 0x00000208) Interrupt Active Bit Register                              */
    
    struct {
      __IM  uint32_t ACTIVE     : 32;           /*!< [31..0] ACTIVE                                                            */
    } IABR2_b;
  } ;
  
  union {
    __IM  uint32_t IABR3;                       /*!< (@ 0x0000020C) Interrupt Active Bit Register                              */
    
    struct {
      __IM  uint32_t ACTIVE     : 32;           /*!< [31..0] ACTIVE                                                            */
    } IABR3_b;
  } ;
  __IM  uint32_t  RESERVED4[60];
  
  union {
    __IOM uint32_t IPR0;                        /*!< (@ 0x00000300) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR0_b;
  } ;
  
  union {
    __IOM uint32_t IPR1;                        /*!< (@ 0x00000304) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR1_b;
  } ;
  
  union {
    __IOM uint32_t IPR2;                        /*!< (@ 0x00000308) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR2_b;
  } ;
  
  union {
    __IOM uint32_t IPR3;                        /*!< (@ 0x0000030C) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR3_b;
  } ;
  
  union {
    __IOM uint32_t IPR4;                        /*!< (@ 0x00000310) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR4_b;
  } ;
  
  union {
    __IOM uint32_t IPR5;                        /*!< (@ 0x00000314) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR5_b;
  } ;
  
  union {
    __IOM uint32_t IPR6;                        /*!< (@ 0x00000318) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR6_b;
  } ;
  
  union {
    __IOM uint32_t IPR7;                        /*!< (@ 0x0000031C) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR7_b;
  } ;
  
  union {
    __IOM uint32_t IPR8;                        /*!< (@ 0x00000320) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR8_b;
  } ;
  
  union {
    __IOM uint32_t IPR9;                        /*!< (@ 0x00000324) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR9_b;
  } ;
  
  union {
    __IOM uint32_t IPR10;                       /*!< (@ 0x00000328) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR10_b;
  } ;
  
  union {
    __IOM uint32_t IPR11;                       /*!< (@ 0x0000032C) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR11_b;
  } ;
  
  union {
    __IOM uint32_t IPR12;                       /*!< (@ 0x00000330) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR12_b;
  } ;
  
  union {
    __IOM uint32_t IPR13;                       /*!< (@ 0x00000334) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR13_b;
  } ;
  
  union {
    __IOM uint32_t IPR14;                       /*!< (@ 0x00000338) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR14_b;
  } ;
  
  union {
    __IOM uint32_t IPR15;                       /*!< (@ 0x0000033C) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR15_b;
  } ;
  
  union {
    __IOM uint32_t IPR16;                       /*!< (@ 0x00000340) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR16_b;
  } ;
  
  union {
    __IOM uint32_t IPR17;                       /*!< (@ 0x00000344) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR17_b;
  } ;
  
  union {
    __IOM uint32_t IPR18;                       /*!< (@ 0x00000348) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR18_b;
  } ;
  
  union {
    __IOM uint32_t IPR19;                       /*!< (@ 0x0000034C) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR19_b;
  } ;
  
  union {
    __IOM uint32_t IPR20;                       /*!< (@ 0x00000350) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR20_b;
  } ;
  
  union {
    __IOM uint32_t IPR21;                       /*!< (@ 0x00000354) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR21_b;
  } ;
  
  union {
    __IOM uint32_t IPR22;                       /*!< (@ 0x00000358) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR22_b;
  } ;
  
  union {
    __IOM uint32_t IPR23;                       /*!< (@ 0x0000035C) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR23_b;
  } ;
  
  union {
    __IOM uint32_t IPR24;                       /*!< (@ 0x00000360) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR24_b;
  } ;
  
  union {
    __IOM uint32_t IPR25;                       /*!< (@ 0x00000364) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR25_b;
  } ;
  
  union {
    __IOM uint32_t IPR26;                       /*!< (@ 0x00000368) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR26_b;
  } ;
  
  union {
    __IOM uint32_t IPR27;                       /*!< (@ 0x0000036C) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR27_b;
  } ;
  
  union {
    __IOM uint32_t IPR28;                       /*!< (@ 0x00000370) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR28_b;
  } ;
  
  union {
    __IOM uint32_t IPR29;                       /*!< (@ 0x00000374) Interrupt Priority Register                                */
    
    struct {
      __IOM uint32_t IPR_N0     : 8;            /*!< [7..0] IPR_N0                                                             */
      __IOM uint32_t IPR_N1     : 8;            /*!< [15..8] IPR_N1                                                            */
      __IOM uint32_t IPR_N2     : 8;            /*!< [23..16] IPR_N2                                                           */
      __IOM uint32_t IPR_N3     : 8;            /*!< [31..24] IPR_N3                                                           */
    } IPR29_b;
  } ;
} NVIC_Type;                                    /*!< Size = 888 (0x378)                                                        */



/* =========================================================================================================================== */
/* ================                                         NVIC_STIR                                         ================ */
/* =========================================================================================================================== */

/* =========================================================  STIR  ========================================================== */
#define NVIC_STIR_STIR_INTID_Pos          (0UL)                     /*!< INTID (Bit 0)                                         */
#define NVIC_STIR_STIR_INTID_Msk          (0x1ffUL)                 /*!< INTID (Bitfield-Mask: 0x1ff)                          */


/* =========================================================================================================================== */
/* ================                                           NVIC                                            ================ */
/* =========================================================================================================================== */

/* =========================================================  ISER0  ========================================================= */
#define NVIC_ISER0_SETENA_Pos             (0UL)                     /*!< SETENA (Bit 0)                                        */
#define NVIC_ISER0_SETENA_Msk             (0xffffffffUL)            /*!< SETENA (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  ISER1  ========================================================= */
#define NVIC_ISER1_SETENA_Pos             (0UL)                     /*!< SETENA (Bit 0)                                        */
#define NVIC_ISER1_SETENA_Msk             (0xffffffffUL)            /*!< SETENA (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  ISER2  ========================================================= */
#define NVIC_ISER2_SETENA_Pos             (0UL)                     /*!< SETENA (Bit 0)                                        */
#define NVIC_ISER2_SETENA_Msk             (0xffffffffUL)            /*!< SETENA (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  ICER0  ========================================================= */
#define NVIC_ICER0_CLRENA_Pos             (0UL)                     /*!< CLRENA (Bit 0)                                        */
#define NVIC_ICER0_CLRENA_Msk             (0xffffffffUL)            /*!< CLRENA (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  ICER1  ========================================================= */
#define NVIC_ICER1_CLRENA_Pos             (0UL)                     /*!< CLRENA (Bit 0)                                        */
#define NVIC_ICER1_CLRENA_Msk             (0xffffffffUL)            /*!< CLRENA (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  ICER2  ========================================================= */
#define NVIC_ICER2_CLRENA_Pos             (0UL)                     /*!< CLRENA (Bit 0)                                        */
#define NVIC_ICER2_CLRENA_Msk             (0xffffffffUL)            /*!< CLRENA (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  ISPR0  ========================================================= */
#define NVIC_ISPR0_SETPEND_Pos            (0UL)                     /*!< SETPEND (Bit 0)                                       */
#define NVIC_ISPR0_SETPEND_Msk            (0xffffffffUL)            /*!< SETPEND (Bitfield-Mask: 0xffffffff)                   */
/* =========================================================  ISPR1  ========================================================= */
#define NVIC_ISPR1_SETPEND_Pos            (0UL)                     /*!< SETPEND (Bit 0)                                       */
#define NVIC_ISPR1_SETPEND_Msk            (0xffffffffUL)            /*!< SETPEND (Bitfield-Mask: 0xffffffff)                   */
/* =========================================================  ISPR2  ========================================================= */
#define NVIC_ISPR2_SETPEND_Pos            (0UL)                     /*!< SETPEND (Bit 0)                                       */
#define NVIC_ISPR2_SETPEND_Msk            (0xffffffffUL)            /*!< SETPEND (Bitfield-Mask: 0xffffffff)                   */
/* =========================================================  ICPR0  ========================================================= */
#define NVIC_ICPR0_CLRPEND_Pos            (0UL)                     /*!< CLRPEND (Bit 0)                                       */
#define NVIC_ICPR0_CLRPEND_Msk            (0xffffffffUL)            /*!< CLRPEND (Bitfield-Mask: 0xffffffff)                   */
/* =========================================================  ICPR1  ========================================================= */
#define NVIC_ICPR1_CLRPEND_Pos            (0UL)                     /*!< CLRPEND (Bit 0)                                       */
#define NVIC_ICPR1_CLRPEND_Msk            (0xffffffffUL)            /*!< CLRPEND (Bitfield-Mask: 0xffffffff)                   */
/* =========================================================  ICPR2  ========================================================= */
#define NVIC_ICPR2_CLRPEND_Pos            (0UL)                     /*!< CLRPEND (Bit 0)                                       */
#define NVIC_ICPR2_CLRPEND_Msk            (0xffffffffUL)            /*!< CLRPEND (Bitfield-Mask: 0xffffffff)                   */
/* =========================================================  IABR0  ========================================================= */
#define NVIC_IABR0_ACTIVE_Pos             (0UL)                     /*!< ACTIVE (Bit 0)                                        */
#define NVIC_IABR0_ACTIVE_Msk             (0xffffffffUL)            /*!< ACTIVE (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  IABR1  ========================================================= */
#define NVIC_IABR1_ACTIVE_Pos             (0UL)                     /*!< ACTIVE (Bit 0)                                        */
#define NVIC_IABR1_ACTIVE_Msk             (0xffffffffUL)            /*!< ACTIVE (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  IABR2  ========================================================= */
#define NVIC_IABR2_ACTIVE_Pos             (0UL)                     /*!< ACTIVE (Bit 0)                                        */
#define NVIC_IABR2_ACTIVE_Msk             (0xffffffffUL)            /*!< ACTIVE (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  IPR0  ========================================================== */
#define NVIC_IPR0_IPR_N0_Pos              (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR0_IPR_N0_Msk              (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR0_IPR_N1_Pos              (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR0_IPR_N1_Msk              (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR0_IPR_N2_Pos              (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR0_IPR_N2_Msk              (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR0_IPR_N3_Pos              (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR0_IPR_N3_Msk              (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR1  ========================================================== */
#define NVIC_IPR1_IPR_N0_Pos              (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR1_IPR_N0_Msk              (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR1_IPR_N1_Pos              (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR1_IPR_N1_Msk              (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR1_IPR_N2_Pos              (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR1_IPR_N2_Msk              (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR1_IPR_N3_Pos              (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR1_IPR_N3_Msk              (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR2  ========================================================== */
#define NVIC_IPR2_IPR_N0_Pos              (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR2_IPR_N0_Msk              (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR2_IPR_N1_Pos              (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR2_IPR_N1_Msk              (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR2_IPR_N2_Pos              (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR2_IPR_N2_Msk              (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR2_IPR_N3_Pos              (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR2_IPR_N3_Msk              (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR3  ========================================================== */
#define NVIC_IPR3_IPR_N0_Pos              (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR3_IPR_N0_Msk              (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR3_IPR_N1_Pos              (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR3_IPR_N1_Msk              (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR3_IPR_N2_Pos              (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR3_IPR_N2_Msk              (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR3_IPR_N3_Pos              (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR3_IPR_N3_Msk              (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR4  ========================================================== */
#define NVIC_IPR4_IPR_N0_Pos              (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR4_IPR_N0_Msk              (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR4_IPR_N1_Pos              (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR4_IPR_N1_Msk              (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR4_IPR_N2_Pos              (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR4_IPR_N2_Msk              (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR4_IPR_N3_Pos              (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR4_IPR_N3_Msk              (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR5  ========================================================== */
#define NVIC_IPR5_IPR_N0_Pos              (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR5_IPR_N0_Msk              (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR5_IPR_N1_Pos              (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR5_IPR_N1_Msk              (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR5_IPR_N2_Pos              (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR5_IPR_N2_Msk              (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR5_IPR_N3_Pos              (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR5_IPR_N3_Msk              (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR6  ========================================================== */
#define NVIC_IPR6_IPR_N0_Pos              (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR6_IPR_N0_Msk              (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR6_IPR_N1_Pos              (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR6_IPR_N1_Msk              (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR6_IPR_N2_Pos              (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR6_IPR_N2_Msk              (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR6_IPR_N3_Pos              (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR6_IPR_N3_Msk              (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR7  ========================================================== */
#define NVIC_IPR7_IPR_N0_Pos              (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR7_IPR_N0_Msk              (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR7_IPR_N1_Pos              (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR7_IPR_N1_Msk              (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR7_IPR_N2_Pos              (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR7_IPR_N2_Msk              (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR7_IPR_N3_Pos              (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR7_IPR_N3_Msk              (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR8  ========================================================== */
#define NVIC_IPR8_IPR_N0_Pos              (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR8_IPR_N0_Msk              (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR8_IPR_N1_Pos              (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR8_IPR_N1_Msk              (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR8_IPR_N2_Pos              (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR8_IPR_N2_Msk              (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR8_IPR_N3_Pos              (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR8_IPR_N3_Msk              (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR9  ========================================================== */
#define NVIC_IPR9_IPR_N0_Pos              (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR9_IPR_N0_Msk              (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR9_IPR_N1_Pos              (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR9_IPR_N1_Msk              (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR9_IPR_N2_Pos              (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR9_IPR_N2_Msk              (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR9_IPR_N3_Pos              (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR9_IPR_N3_Msk              (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR10  ========================================================= */
#define NVIC_IPR10_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR10_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR10_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR10_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR10_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR10_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR10_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR10_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR11  ========================================================= */
#define NVIC_IPR11_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR11_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR11_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR11_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR11_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR11_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR11_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR11_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR12  ========================================================= */
#define NVIC_IPR12_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR12_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR12_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR12_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR12_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR12_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR12_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR12_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR13  ========================================================= */
#define NVIC_IPR13_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR13_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR13_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR13_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR13_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR13_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR13_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR13_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR14  ========================================================= */
#define NVIC_IPR14_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR14_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR14_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR14_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR14_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR14_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR14_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR14_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR15  ========================================================= */
#define NVIC_IPR15_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR15_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR15_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR15_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR15_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR15_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR15_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR15_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR16  ========================================================= */
#define NVIC_IPR16_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR16_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR16_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR16_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR16_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR16_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR16_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR16_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR17  ========================================================= */
#define NVIC_IPR17_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR17_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR17_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR17_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR17_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR17_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR17_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR17_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR18  ========================================================= */
#define NVIC_IPR18_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR18_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR18_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR18_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR18_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR18_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR18_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR18_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR19  ========================================================= */
#define NVIC_IPR19_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR19_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR19_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR19_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR19_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR19_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR19_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR19_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR20  ========================================================= */
#define NVIC_IPR20_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR20_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR20_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR20_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR20_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR20_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR20_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR20_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  ISER3  ========================================================= */
#define NVIC_ISER3_SETENA_Pos             (0UL)                     /*!< SETENA (Bit 0)                                        */
#define NVIC_ISER3_SETENA_Msk             (0xffffffffUL)            /*!< SETENA (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  ICER3  ========================================================= */
#define NVIC_ICER3_CLRENA_Pos             (0UL)                     /*!< CLRENA (Bit 0)                                        */
#define NVIC_ICER3_CLRENA_Msk             (0xffffffffUL)            /*!< CLRENA (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  ISPR3  ========================================================= */
#define NVIC_ISPR3_SETPEND_Pos            (0UL)                     /*!< SETPEND (Bit 0)                                       */
#define NVIC_ISPR3_SETPEND_Msk            (0xffffffffUL)            /*!< SETPEND (Bitfield-Mask: 0xffffffff)                   */
/* =========================================================  ICPR3  ========================================================= */
#define NVIC_ICPR3_CLRPEND_Pos            (0UL)                     /*!< CLRPEND (Bit 0)                                       */
#define NVIC_ICPR3_CLRPEND_Msk            (0xffffffffUL)            /*!< CLRPEND (Bitfield-Mask: 0xffffffff)                   */
/* =========================================================  IABR3  ========================================================= */
#define NVIC_IABR3_ACTIVE_Pos             (0UL)                     /*!< ACTIVE (Bit 0)                                        */
#define NVIC_IABR3_ACTIVE_Msk             (0xffffffffUL)            /*!< ACTIVE (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  IPR21  ========================================================= */
#define NVIC_IPR21_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR21_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR21_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR21_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR21_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR21_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR21_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR21_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR22  ========================================================= */
#define NVIC_IPR22_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR22_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR22_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR22_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR22_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR22_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR22_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR22_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR23  ========================================================= */
#define NVIC_IPR23_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR23_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR23_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR23_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR23_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR23_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR23_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR23_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR24  ========================================================= */
#define NVIC_IPR24_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR24_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR24_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR24_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR24_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR24_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR24_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR24_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR25  ========================================================= */
#define NVIC_IPR25_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR25_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR25_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR25_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR25_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR25_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR25_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR25_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR26  ========================================================= */
#define NVIC_IPR26_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR26_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR26_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR26_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR26_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR26_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR26_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR26_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR27  ========================================================= */
#define NVIC_IPR27_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR27_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR27_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR27_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR27_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR27_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR27_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR27_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR28  ========================================================= */
#define NVIC_IPR28_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR28_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR28_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR28_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR28_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR28_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR28_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR28_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */
/* =========================================================  IPR29  ========================================================= */
#define NVIC_IPR29_IPR_N0_Pos             (0UL)                     /*!< IPR_N0 (Bit 0)                                        */
#define NVIC_IPR29_IPR_N0_Msk             (0xffUL)                  /*!< IPR_N0 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR29_IPR_N1_Pos             (8UL)                     /*!< IPR_N1 (Bit 8)                                        */
#define NVIC_IPR29_IPR_N1_Msk             (0xff00UL)                /*!< IPR_N1 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR29_IPR_N2_Pos             (16UL)                    /*!< IPR_N2 (Bit 16)                                       */
#define NVIC_IPR29_IPR_N2_Msk             (0xff0000UL)              /*!< IPR_N2 (Bitfield-Mask: 0xff)                          */
#define NVIC_IPR29_IPR_N3_Pos             (24UL)                    /*!< IPR_N3 (Bit 24)                                       */
#define NVIC_IPR29_IPR_N3_Msk             (0xff000000UL)            /*!< IPR_N3 (Bitfield-Mask: 0xff)                          */

