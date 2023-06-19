#include "core.h"


#define RCC_BASE                    0x40023800UL

#define RCC                         ((volatile RCC_Type*)               RCC_BASE)


/* =========================================================================================================================== */
/* =========================================================================================================================== */
/* ================                                            RCC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Reset and clock control (RCC)
  */

typedef struct {                                /*!< (@ 0x40023800) RCC Structure                                              */
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000000) clock control register                                     */
    
    struct {
      __IOM uint32_t HSION      : 1;            /*!< [0..0] Internal high-speed clock enable                                   */
      __IM  uint32_t HSIRDY     : 1;            /*!< [1..1] Internal high-speed clock ready flag                               */
            uint32_t            : 1;
      __IOM uint32_t HSITRIM    : 5;            /*!< [7..3] Internal high-speed clock trimming                                 */
      __IM  uint32_t HSICAL     : 8;            /*!< [15..8] Internal high-speed clock calibration                             */
      __IOM uint32_t HSEON      : 1;            /*!< [16..16] HSE clock enable                                                 */
      __IM  uint32_t HSERDY     : 1;            /*!< [17..17] HSE clock ready flag                                             */
      __IOM uint32_t HSEBYP     : 1;            /*!< [18..18] HSE clock bypass                                                 */
      __IOM uint32_t CSSON      : 1;            /*!< [19..19] Clock security system enable                                     */
            uint32_t            : 4;
      __IOM uint32_t PLLON      : 1;            /*!< [24..24] Main PLL (PLL) enable                                            */
      __IM  uint32_t PLLRDY     : 1;            /*!< [25..25] Main PLL (PLL) clock ready flag                                  */
      __IOM uint32_t PLLI2SON   : 1;            /*!< [26..26] PLLI2S enable                                                    */
      __IM  uint32_t PLLI2SRDY  : 1;            /*!< [27..27] PLLI2S clock ready flag                                          */
            uint32_t            : 4;
    } CR_b;
  } ;
  
  union {
    __IOM uint32_t PLLCFGR;                     /*!< (@ 0x00000004) PLL configuration register                                 */
    
    struct {
      __IOM uint32_t PLLM0      : 1;            /*!< [0..0] Division factor for the main PLL (PLL) and audio PLL
                                                     (PLLI2S) input clock                                                      */
      __IOM uint32_t PLLM1      : 1;            /*!< [1..1] Division factor for the main PLL (PLL) and audio PLL
                                                     (PLLI2S) input clock                                                      */
      __IOM uint32_t PLLM2      : 1;            /*!< [2..2] Division factor for the main PLL (PLL) and audio PLL
                                                     (PLLI2S) input clock                                                      */
      __IOM uint32_t PLLM3      : 1;            /*!< [3..3] Division factor for the main PLL (PLL) and audio PLL
                                                     (PLLI2S) input clock                                                      */
      __IOM uint32_t PLLM4      : 1;            /*!< [4..4] Division factor for the main PLL (PLL) and audio PLL
                                                     (PLLI2S) input clock                                                      */
      __IOM uint32_t PLLM5      : 1;            /*!< [5..5] Division factor for the main PLL (PLL) and audio PLL
                                                     (PLLI2S) input clock                                                      */
      __IOM uint32_t PLLN0      : 1;            /*!< [6..6] Main PLL (PLL) multiplication factor for VCO                       */
      __IOM uint32_t PLLN1      : 1;            /*!< [7..7] Main PLL (PLL) multiplication factor for VCO                       */
      __IOM uint32_t PLLN2      : 1;            /*!< [8..8] Main PLL (PLL) multiplication factor for VCO                       */
      __IOM uint32_t PLLN3      : 1;            /*!< [9..9] Main PLL (PLL) multiplication factor for VCO                       */
      __IOM uint32_t PLLN4      : 1;            /*!< [10..10] Main PLL (PLL) multiplication factor for VCO                     */
      __IOM uint32_t PLLN5      : 1;            /*!< [11..11] Main PLL (PLL) multiplication factor for VCO                     */
      __IOM uint32_t PLLN6      : 1;            /*!< [12..12] Main PLL (PLL) multiplication factor for VCO                     */
      __IOM uint32_t PLLN7      : 1;            /*!< [13..13] Main PLL (PLL) multiplication factor for VCO                     */
      __IOM uint32_t PLLN8      : 1;            /*!< [14..14] Main PLL (PLL) multiplication factor for VCO                     */
            uint32_t            : 1;
      __IOM uint32_t PLLP0      : 1;            /*!< [16..16] Main PLL (PLL) division factor for main system clock             */
      __IOM uint32_t PLLP1      : 1;            /*!< [17..17] Main PLL (PLL) division factor for main system clock             */
            uint32_t            : 4;
      __IOM uint32_t PLLSRC     : 1;            /*!< [22..22] Main PLL(PLL) and audio PLL (PLLI2S) entry clock source          */
            uint32_t            : 1;
      __IOM uint32_t PLLQ0      : 1;            /*!< [24..24] Main PLL (PLL) division factor for USB OTG FS, SDIO
                                                     and random number generator clocks                                        */
      __IOM uint32_t PLLQ1      : 1;            /*!< [25..25] Main PLL (PLL) division factor for USB OTG FS, SDIO
                                                     and random number generator clocks                                        */
      __IOM uint32_t PLLQ2      : 1;            /*!< [26..26] Main PLL (PLL) division factor for USB OTG FS, SDIO
                                                     and random number generator clocks                                        */
      __IOM uint32_t PLLQ3      : 1;            /*!< [27..27] Main PLL (PLL) division factor for USB OTG FS, SDIO
                                                     and random number generator clocks                                        */
            uint32_t            : 4;
    } PLLCFGR_b;
  } ;
  
  union {
    __IOM uint32_t CFGR;                        /*!< (@ 0x00000008) clock configuration register                               */
    
    struct {
      __IOM uint32_t SW0        : 1;            /*!< [0..0] System clock switch                                                */
      __IOM uint32_t SW1        : 1;            /*!< [1..1] System clock switch                                                */
      __IM  uint32_t SWS0       : 1;            /*!< [2..2] System clock switch status                                         */
      __IM  uint32_t SWS1       : 1;            /*!< [3..3] System clock switch status                                         */
      __IOM uint32_t HPRE       : 4;            /*!< [7..4] AHB prescaler                                                      */
            uint32_t            : 2;
      __IOM uint32_t PPRE1      : 3;            /*!< [12..10] APB Low speed prescaler (APB1)                                   */
      __IOM uint32_t PPRE2      : 3;            /*!< [15..13] APB high-speed prescaler (APB2)                                  */
      __IOM uint32_t RTCPRE     : 5;            /*!< [20..16] HSE division factor for RTC clock                                */
      __IOM uint32_t MCO1       : 2;            /*!< [22..21] Microcontroller clock output 1                                   */
      __IOM uint32_t I2SSRC     : 1;            /*!< [23..23] I2S clock selection                                              */
      __IOM uint32_t MCO1PRE    : 3;            /*!< [26..24] MCO1 prescaler                                                   */
      __IOM uint32_t MCO2PRE    : 3;            /*!< [29..27] MCO2 prescaler                                                   */
      __IOM uint32_t MCO2       : 2;            /*!< [31..30] Microcontroller clock output 2                                   */
    } CFGR_b;
  } ;
  
  union {
    __IOM uint32_t CIR;                         /*!< (@ 0x0000000C) clock interrupt register                                   */
    
    struct {
      __IM  uint32_t LSIRDYF    : 1;            /*!< [0..0] LSI ready interrupt flag                                           */
      __IM  uint32_t LSERDYF    : 1;            /*!< [1..1] LSE ready interrupt flag                                           */
      __IM  uint32_t HSIRDYF    : 1;            /*!< [2..2] HSI ready interrupt flag                                           */
      __IM  uint32_t HSERDYF    : 1;            /*!< [3..3] HSE ready interrupt flag                                           */
      __IM  uint32_t PLLRDYF    : 1;            /*!< [4..4] Main PLL (PLL) ready interrupt flag                                */
      __IM  uint32_t PLLI2SRDYF : 1;            /*!< [5..5] PLLI2S ready interrupt flag                                        */
      __IM  uint32_t PLLSAIRDYF : 1;            /*!< [6..6] PLLSAI ready interrupt flag                                        */
      __IM  uint32_t CSSF       : 1;            /*!< [7..7] Clock security system interrupt flag                               */
      __IOM uint32_t LSIRDYIE   : 1;            /*!< [8..8] LSI ready interrupt enable                                         */
      __IOM uint32_t LSERDYIE   : 1;            /*!< [9..9] LSE ready interrupt enable                                         */
      __IOM uint32_t HSIRDYIE   : 1;            /*!< [10..10] HSI ready interrupt enable                                       */
      __IOM uint32_t HSERDYIE   : 1;            /*!< [11..11] HSE ready interrupt enable                                       */
      __IOM uint32_t PLLRDYIE   : 1;            /*!< [12..12] Main PLL (PLL) ready interrupt enable                            */
      __IOM uint32_t PLLI2SRDYIE : 1;           /*!< [13..13] PLLI2S ready interrupt enable                                    */
      __IOM uint32_t PLLSAIRDYIE : 1;           /*!< [14..14] PLLSAI Ready Interrupt Enable                                    */
            uint32_t            : 1;
      __OM  uint32_t LSIRDYC    : 1;            /*!< [16..16] LSI ready interrupt clear                                        */
      __OM  uint32_t LSERDYC    : 1;            /*!< [17..17] LSE ready interrupt clear                                        */
      __OM  uint32_t HSIRDYC    : 1;            /*!< [18..18] HSI ready interrupt clear                                        */
      __OM  uint32_t HSERDYC    : 1;            /*!< [19..19] HSE ready interrupt clear                                        */
      __OM  uint32_t PLLRDYC    : 1;            /*!< [20..20] Main PLL(PLL) ready interrupt clear                              */
      __OM  uint32_t PLLI2SRDYC : 1;            /*!< [21..21] PLLI2S ready interrupt clear                                     */
      __OM  uint32_t PLLSAIRDYC : 1;            /*!< [22..22] PLLSAI Ready Interrupt Clear                                     */
      __OM  uint32_t CSSC       : 1;            /*!< [23..23] Clock security system interrupt clear                            */
            uint32_t            : 8;
    } CIR_b;
  } ;
  
  union {
    __IOM uint32_t AHB1RSTR;                    /*!< (@ 0x00000010) AHB1 peripheral reset register                             */
    
    struct {
      __IOM uint32_t GPIOARST   : 1;            /*!< [0..0] IO port A reset                                                    */
      __IOM uint32_t GPIOBRST   : 1;            /*!< [1..1] IO port B reset                                                    */
      __IOM uint32_t GPIOCRST   : 1;            /*!< [2..2] IO port C reset                                                    */
      __IOM uint32_t GPIODRST   : 1;            /*!< [3..3] IO port D reset                                                    */
      __IOM uint32_t GPIOERST   : 1;            /*!< [4..4] IO port E reset                                                    */
      __IOM uint32_t GPIOFRST   : 1;            /*!< [5..5] IO port F reset                                                    */
      __IOM uint32_t GPIOGRST   : 1;            /*!< [6..6] IO port G reset                                                    */
      __IOM uint32_t GPIOHRST   : 1;            /*!< [7..7] IO port H reset                                                    */
      __IOM uint32_t GPIOIRST   : 1;            /*!< [8..8] IO port I reset                                                    */
      __IOM uint32_t GPIOJRST   : 1;            /*!< [9..9] IO port J reset                                                    */
      __IOM uint32_t GPIOKRST   : 1;            /*!< [10..10] IO port K reset                                                  */
            uint32_t            : 1;
      __IOM uint32_t CRCRST     : 1;            /*!< [12..12] CRC reset                                                        */
            uint32_t            : 8;
      __IOM uint32_t DMA1RST    : 1;            /*!< [21..21] DMA2 reset                                                       */
      __IOM uint32_t DMA2RST    : 1;            /*!< [22..22] DMA2 reset                                                       */
      __IOM uint32_t DMA2DRST   : 1;            /*!< [23..23] DMA2D reset                                                      */
            uint32_t            : 1;
      __IOM uint32_t ETHMACRST  : 1;            /*!< [25..25] Ethernet MAC reset                                               */
            uint32_t            : 3;
      __IOM uint32_t OTGHSRST   : 1;            /*!< [29..29] USB OTG HS module reset                                          */
            uint32_t            : 2;
    } AHB1RSTR_b;
  } ;
  
  union {
    __IOM uint32_t AHB2RSTR;                    /*!< (@ 0x00000014) AHB2 peripheral reset register                             */
    
    struct {
      __IOM uint32_t DCMIRST    : 1;            /*!< [0..0] Camera interface reset                                             */
            uint32_t            : 3;
      __IOM uint32_t CRYPRST    : 1;            /*!< [4..4] Cryptographic module reset                                         */
      __IOM uint32_t HSAHRST    : 1;            /*!< [5..5] Hash module reset                                                  */
      __IOM uint32_t RNGRST     : 1;            /*!< [6..6] Random number generator module reset                               */
      __IOM uint32_t OTGFSRST   : 1;            /*!< [7..7] USB OTG FS module reset                                            */
            uint32_t            : 24;
    } AHB2RSTR_b;
  } ;
  
  union {
    __IOM uint32_t AHB3RSTR;                    /*!< (@ 0x00000018) AHB3 peripheral reset register                             */
    
    struct {
      __IOM uint32_t FMCRST     : 1;            /*!< [0..0] Flexible memory controller module reset                            */
      __IOM uint32_t QSPIRST    : 1;            /*!< [1..1] Quad SPI memory controller reset                                   */
            uint32_t            : 30;
    } AHB3RSTR_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IOM uint32_t APB1RSTR;                    /*!< (@ 0x00000020) APB1 peripheral reset register                             */
    
    struct {
      __IOM uint32_t TIM2RST    : 1;            /*!< [0..0] TIM2 reset                                                         */
      __IOM uint32_t TIM3RST    : 1;            /*!< [1..1] TIM3 reset                                                         */
      __IOM uint32_t TIM4RST    : 1;            /*!< [2..2] TIM4 reset                                                         */
      __IOM uint32_t TIM5RST    : 1;            /*!< [3..3] TIM5 reset                                                         */
      __IOM uint32_t TIM6RST    : 1;            /*!< [4..4] TIM6 reset                                                         */
      __IOM uint32_t TIM7RST    : 1;            /*!< [5..5] TIM7 reset                                                         */
      __IOM uint32_t TIM12RST   : 1;            /*!< [6..6] TIM12 reset                                                        */
      __IOM uint32_t TIM13RST   : 1;            /*!< [7..7] TIM13 reset                                                        */
      __IOM uint32_t TIM14RST   : 1;            /*!< [8..8] TIM14 reset                                                        */
      __IOM uint32_t LPTIM1RST  : 1;            /*!< [9..9] Low power timer 1 reset                                            */
            uint32_t            : 1;
      __IOM uint32_t WWDGRST    : 1;            /*!< [11..11] Window watchdog reset                                            */
            uint32_t            : 2;
      __IOM uint32_t SPI2RST    : 1;            /*!< [14..14] SPI 2 reset                                                      */
      __IOM uint32_t SPI3RST    : 1;            /*!< [15..15] SPI 3 reset                                                      */
      __IOM uint32_t SPDIFRXRST : 1;            /*!< [16..16] SPDIF-RX reset                                                   */
      __IOM uint32_t UART2RST   : 1;            /*!< [17..17] USART 2 reset                                                    */
      __IOM uint32_t UART3RST   : 1;            /*!< [18..18] USART 3 reset                                                    */
      __IOM uint32_t UART4RST   : 1;            /*!< [19..19] USART 4 reset                                                    */
      __IOM uint32_t UART5RST   : 1;            /*!< [20..20] USART 5 reset                                                    */
      __IOM uint32_t I2C1RST    : 1;            /*!< [21..21] I2C 1 reset                                                      */
      __IOM uint32_t I2C2RST    : 1;            /*!< [22..22] I2C 2 reset                                                      */
      __IOM uint32_t I2C3RST    : 1;            /*!< [23..23] I2C3 reset                                                       */
      __IOM uint32_t I2C4RST    : 1;            /*!< [24..24] I2C 4 reset                                                      */
      __IOM uint32_t CAN1RST    : 1;            /*!< [25..25] CAN1 reset                                                       */
      __IOM uint32_t CAN2RST    : 1;            /*!< [26..26] CAN2 reset                                                       */
      __IOM uint32_t CECRST     : 1;            /*!< [27..27] HDMI-CEC reset                                                   */
      __IOM uint32_t PWRRST     : 1;            /*!< [28..28] Power interface reset                                            */
      __IOM uint32_t DACRST     : 1;            /*!< [29..29] DAC reset                                                        */
      __IOM uint32_t UART7RST   : 1;            /*!< [30..30] UART7 reset                                                      */
      __IOM uint32_t UART8RST   : 1;            /*!< [31..31] UART8 reset                                                      */
    } APB1RSTR_b;
  } ;
  
  union {
    __IOM uint32_t APB2RSTR;                    /*!< (@ 0x00000024) APB2 peripheral reset register                             */
    
    struct {
      __IOM uint32_t TIM1RST    : 1;            /*!< [0..0] TIM1 reset                                                         */
      __IOM uint32_t TIM8RST    : 1;            /*!< [1..1] TIM8 reset                                                         */
            uint32_t            : 2;
      __IOM uint32_t USART1RST  : 1;            /*!< [4..4] USART1 reset                                                       */
      __IOM uint32_t USART6RST  : 1;            /*!< [5..5] USART6 reset                                                       */
            uint32_t            : 2;
      __IOM uint32_t ADCRST     : 1;            /*!< [8..8] ADC interface reset (common to all ADCs)                           */
            uint32_t            : 2;
      __IOM uint32_t SDMMC1RST  : 1;            /*!< [11..11] SDMMC1 reset                                                     */
      __IOM uint32_t SPI1RST    : 1;            /*!< [12..12] SPI 1 reset                                                      */
      __IOM uint32_t SPI4RST    : 1;            /*!< [13..13] SPI4 reset                                                       */
      __IOM uint32_t SYSCFGRST  : 1;            /*!< [14..14] System configuration controller reset                            */
            uint32_t            : 1;
      __IOM uint32_t TIM9RST    : 1;            /*!< [16..16] TIM9 reset                                                       */
      __IOM uint32_t TIM10RST   : 1;            /*!< [17..17] TIM10 reset                                                      */
      __IOM uint32_t TIM11RST   : 1;            /*!< [18..18] TIM11 reset                                                      */
            uint32_t            : 1;
      __IOM uint32_t SPI5RST    : 1;            /*!< [20..20] SPI5 reset                                                       */
      __IOM uint32_t SPI6RST    : 1;            /*!< [21..21] SPI6 reset                                                       */
      __IOM uint32_t SAI1RST    : 1;            /*!< [22..22] SAI1 reset                                                       */
      __IOM uint32_t SAI2RST    : 1;            /*!< [23..23] SAI2 reset                                                       */
            uint32_t            : 2;
      __IOM uint32_t LTDCRST    : 1;            /*!< [26..26] LTDC reset                                                       */
            uint32_t            : 5;
    } APB2RSTR_b;
  } ;
  __IM  uint32_t  RESERVED1[2];
  
  union {
    __IOM uint32_t AHB1ENR;                     /*!< (@ 0x00000030) AHB1 peripheral clock register                             */
    
    struct {
      __IOM uint32_t GPIOAEN    : 1;            /*!< [0..0] IO port A clock enable                                             */
      __IOM uint32_t GPIOBEN    : 1;            /*!< [1..1] IO port B clock enable                                             */
      __IOM uint32_t GPIOCEN    : 1;            /*!< [2..2] IO port C clock enable                                             */
      __IOM uint32_t GPIODEN    : 1;            /*!< [3..3] IO port D clock enable                                             */
      __IOM uint32_t GPIOEEN    : 1;            /*!< [4..4] IO port E clock enable                                             */
      __IOM uint32_t GPIOFEN    : 1;            /*!< [5..5] IO port F clock enable                                             */
      __IOM uint32_t GPIOGEN    : 1;            /*!< [6..6] IO port G clock enable                                             */
      __IOM uint32_t GPIOHEN    : 1;            /*!< [7..7] IO port H clock enable                                             */
      __IOM uint32_t GPIOIEN    : 1;            /*!< [8..8] IO port I clock enable                                             */
      __IOM uint32_t GPIOJEN    : 1;            /*!< [9..9] IO port J clock enable                                             */
      __IOM uint32_t GPIOKEN    : 1;            /*!< [10..10] IO port K clock enable                                           */
            uint32_t            : 1;
      __IOM uint32_t CRCEN      : 1;            /*!< [12..12] CRC clock enable                                                 */
            uint32_t            : 5;
      __IOM uint32_t BKPSRAMEN  : 1;            /*!< [18..18] Backup SRAM interface clock enable                               */
            uint32_t            : 1;
      __IOM uint32_t CCMDATARAMEN : 1;          /*!< [20..20] CCM data RAM clock enable                                        */
      __IOM uint32_t DMA1EN     : 1;            /*!< [21..21] DMA1 clock enable                                                */
      __IOM uint32_t DMA2EN     : 1;            /*!< [22..22] DMA2 clock enable                                                */
      __IOM uint32_t DMA2DEN    : 1;            /*!< [23..23] DMA2D clock enable                                               */
            uint32_t            : 1;
      __IOM uint32_t ETHMACEN   : 1;            /*!< [25..25] Ethernet MAC clock enable                                        */
      __IOM uint32_t ETHMACTXEN : 1;            /*!< [26..26] Ethernet Transmission clock enable                               */
      __IOM uint32_t ETHMACRXEN : 1;            /*!< [27..27] Ethernet Reception clock enable                                  */
      __IOM uint32_t ETHMACPTPEN : 1;           /*!< [28..28] Ethernet PTP clock enable                                        */
      __IOM uint32_t OTGHSEN    : 1;            /*!< [29..29] USB OTG HS clock enable                                          */
      __IOM uint32_t OTGHSULPIEN : 1;           /*!< [30..30] USB OTG HSULPI clock enable                                      */
            uint32_t            : 1;
    } AHB1ENR_b;
  } ;
  
  union {
    __IOM uint32_t AHB2ENR;                     /*!< (@ 0x00000034) AHB2 peripheral clock enable register                      */
    
    struct {
      __IOM uint32_t DCMIEN     : 1;            /*!< [0..0] Camera interface enable                                            */
            uint32_t            : 3;
      __IOM uint32_t CRYPEN     : 1;            /*!< [4..4] Cryptographic modules clock enable                                 */
      __IOM uint32_t HASHEN     : 1;            /*!< [5..5] Hash modules clock enable                                          */
      __IOM uint32_t RNGEN      : 1;            /*!< [6..6] Random number generator clock enable                               */
      __IOM uint32_t OTGFSEN    : 1;            /*!< [7..7] USB OTG FS clock enable                                            */
            uint32_t            : 24;
    } AHB2ENR_b;
  } ;
  
  union {
    __IOM uint32_t AHB3ENR;                     /*!< (@ 0x00000038) AHB3 peripheral clock enable register                      */
    
    struct {
      __IOM uint32_t FMCEN      : 1;            /*!< [0..0] Flexible memory controller module clock enable                     */
      __IOM uint32_t QSPIEN     : 1;            /*!< [1..1] Quad SPI memory controller clock enable                            */
            uint32_t            : 30;
    } AHB3ENR_b;
  } ;
  __IM  uint32_t  RESERVED2;
  
  union {
    __IOM uint32_t APB1ENR;                     /*!< (@ 0x00000040) APB1 peripheral clock enable register                      */
    
    struct {
      __IOM uint32_t TIM2EN     : 1;            /*!< [0..0] TIM2 clock enable                                                  */
      __IOM uint32_t TIM3EN     : 1;            /*!< [1..1] TIM3 clock enable                                                  */
      __IOM uint32_t TIM4EN     : 1;            /*!< [2..2] TIM4 clock enable                                                  */
      __IOM uint32_t TIM5EN     : 1;            /*!< [3..3] TIM5 clock enable                                                  */
      __IOM uint32_t TIM6EN     : 1;            /*!< [4..4] TIM6 clock enable                                                  */
      __IOM uint32_t TIM7EN     : 1;            /*!< [5..5] TIM7 clock enable                                                  */
      __IOM uint32_t TIM12EN    : 1;            /*!< [6..6] TIM12 clock enable                                                 */
      __IOM uint32_t TIM13EN    : 1;            /*!< [7..7] TIM13 clock enable                                                 */
      __IOM uint32_t TIM14EN    : 1;            /*!< [8..8] TIM14 clock enable                                                 */
      __IOM uint32_t LPTMI1EN   : 1;            /*!< [9..9] Low power timer 1 clock enable                                     */
            uint32_t            : 1;
      __IOM uint32_t WWDGEN     : 1;            /*!< [11..11] Window watchdog clock enable                                     */
            uint32_t            : 2;
      __IOM uint32_t SPI2EN     : 1;            /*!< [14..14] SPI2 clock enable                                                */
      __IOM uint32_t SPI3EN     : 1;            /*!< [15..15] SPI3 clock enable                                                */
      __IOM uint32_t SPDIFRXEN  : 1;            /*!< [16..16] SPDIF-RX clock enable                                            */
      __IOM uint32_t USART2EN   : 1;            /*!< [17..17] USART 2 clock enable                                             */
      __IOM uint32_t USART3EN   : 1;            /*!< [18..18] USART3 clock enable                                              */
      __IOM uint32_t UART4EN    : 1;            /*!< [19..19] UART4 clock enable                                               */
      __IOM uint32_t UART5EN    : 1;            /*!< [20..20] UART5 clock enable                                               */
      __IOM uint32_t I2C1EN     : 1;            /*!< [21..21] I2C1 clock enable                                                */
      __IOM uint32_t I2C2EN     : 1;            /*!< [22..22] I2C2 clock enable                                                */
      __IOM uint32_t I2C3EN     : 1;            /*!< [23..23] I2C3 clock enable                                                */
      __IOM uint32_t I2C4EN     : 1;            /*!< [24..24] I2C4 clock enable                                                */
      __IOM uint32_t CAN1EN     : 1;            /*!< [25..25] CAN 1 clock enable                                               */
      __IOM uint32_t CAN2EN     : 1;            /*!< [26..26] CAN 2 clock enable                                               */
      __IOM uint32_t CECEN      : 1;            /*!< [27..27] HDMI-CEN clock enable                                            */
      __IOM uint32_t PWREN      : 1;            /*!< [28..28] Power interface clock enable                                     */
      __IOM uint32_t DACEN      : 1;            /*!< [29..29] DAC interface clock enable                                       */
      __IOM uint32_t UART7ENR   : 1;            /*!< [30..30] UART7 clock enable                                               */
      __IOM uint32_t UART8ENR   : 1;            /*!< [31..31] UART8 clock enable                                               */
    } APB1ENR_b;
  } ;
  
  union {
    __IOM uint32_t APB2ENR;                     /*!< (@ 0x00000044) APB2 peripheral clock enable register                      */
    
    struct {
      __IOM uint32_t TIM1EN     : 1;            /*!< [0..0] TIM1 clock enable                                                  */
      __IOM uint32_t TIM8EN     : 1;            /*!< [1..1] TIM8 clock enable                                                  */
            uint32_t            : 2;
      __IOM uint32_t USART1EN   : 1;            /*!< [4..4] USART1 clock enable                                                */
      __IOM uint32_t USART6EN   : 1;            /*!< [5..5] USART6 clock enable                                                */
            uint32_t            : 2;
      __IOM uint32_t ADC1EN     : 1;            /*!< [8..8] ADC1 clock enable                                                  */
      __IOM uint32_t ADC2EN     : 1;            /*!< [9..9] ADC2 clock enable                                                  */
      __IOM uint32_t ADC3EN     : 1;            /*!< [10..10] ADC3 clock enable                                                */
      __IOM uint32_t SDMMC1EN   : 1;            /*!< [11..11] SDMMC1 clock enable                                              */
      __IOM uint32_t SPI1EN     : 1;            /*!< [12..12] SPI1 clock enable                                                */
      __IOM uint32_t SPI4ENR    : 1;            /*!< [13..13] SPI4 clock enable                                                */
      __IOM uint32_t SYSCFGEN   : 1;            /*!< [14..14] System configuration controller clock enable                     */
            uint32_t            : 1;
      __IOM uint32_t TIM9EN     : 1;            /*!< [16..16] TIM9 clock enable                                                */
      __IOM uint32_t TIM10EN    : 1;            /*!< [17..17] TIM10 clock enable                                               */
      __IOM uint32_t TIM11EN    : 1;            /*!< [18..18] TIM11 clock enable                                               */
            uint32_t            : 1;
      __IOM uint32_t SPI5ENR    : 1;            /*!< [20..20] SPI5 clock enable                                                */
      __IOM uint32_t SPI6ENR    : 1;            /*!< [21..21] SPI6 clock enable                                                */
      __IOM uint32_t SAI1EN     : 1;            /*!< [22..22] SAI1 clock enable                                                */
      __IOM uint32_t SAI2EN     : 1;            /*!< [23..23] SAI2 clock enable                                                */
            uint32_t            : 2;
      __IOM uint32_t LTDCEN     : 1;            /*!< [26..26] LTDC clock enable                                                */
            uint32_t            : 5;
    } APB2ENR_b;
  } ;
  __IM  uint32_t  RESERVED3[2];
  
  union {
    __IOM uint32_t AHB1LPENR;                   /*!< (@ 0x00000050) AHB1 peripheral clock enable in low power mode
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t GPIOALPEN  : 1;            /*!< [0..0] IO port A clock enable during sleep mode                           */
      __IOM uint32_t GPIOBLPEN  : 1;            /*!< [1..1] IO port B clock enable during Sleep mode                           */
      __IOM uint32_t GPIOCLPEN  : 1;            /*!< [2..2] IO port C clock enable during Sleep mode                           */
      __IOM uint32_t GPIODLPEN  : 1;            /*!< [3..3] IO port D clock enable during Sleep mode                           */
      __IOM uint32_t GPIOELPEN  : 1;            /*!< [4..4] IO port E clock enable during Sleep mode                           */
      __IOM uint32_t GPIOFLPEN  : 1;            /*!< [5..5] IO port F clock enable during Sleep mode                           */
      __IOM uint32_t GPIOGLPEN  : 1;            /*!< [6..6] IO port G clock enable during Sleep mode                           */
      __IOM uint32_t GPIOHLPEN  : 1;            /*!< [7..7] IO port H clock enable during Sleep mode                           */
      __IOM uint32_t GPIOILPEN  : 1;            /*!< [8..8] IO port I clock enable during Sleep mode                           */
      __IOM uint32_t GPIOJLPEN  : 1;            /*!< [9..9] IO port J clock enable during Sleep mode                           */
      __IOM uint32_t GPIOKLPEN  : 1;            /*!< [10..10] IO port K clock enable during Sleep mode                         */
            uint32_t            : 1;
      __IOM uint32_t CRCLPEN    : 1;            /*!< [12..12] CRC clock enable during Sleep mode                               */
            uint32_t            : 2;
      __IOM uint32_t FLITFLPEN  : 1;            /*!< [15..15] Flash interface clock enable during Sleep mode                   */
      __IOM uint32_t SRAM1LPEN  : 1;            /*!< [16..16] SRAM 1interface clock enable during Sleep mode                   */
      __IOM uint32_t SRAM2LPEN  : 1;            /*!< [17..17] SRAM 2 interface clock enable during Sleep mode                  */
      __IOM uint32_t BKPSRAMLPEN : 1;           /*!< [18..18] Backup SRAM interface clock enable during Sleep mode             */
      __IOM uint32_t SRAM3LPEN  : 1;            /*!< [19..19] SRAM 3 interface clock enable during Sleep mode                  */
            uint32_t            : 1;
      __IOM uint32_t DMA1LPEN   : 1;            /*!< [21..21] DMA1 clock enable during Sleep mode                              */
      __IOM uint32_t DMA2LPEN   : 1;            /*!< [22..22] DMA2 clock enable during Sleep mode                              */
      __IOM uint32_t DMA2DLPEN  : 1;            /*!< [23..23] DMA2D clock enable during Sleep mode                             */
            uint32_t            : 1;
      __IOM uint32_t ETHMACLPEN : 1;            /*!< [25..25] Ethernet MAC clock enable during Sleep mode                      */
      __IOM uint32_t ETHMACTXLPEN : 1;          /*!< [26..26] Ethernet transmission clock enable during Sleep mode             */
      __IOM uint32_t ETHMACRXLPEN : 1;          /*!< [27..27] Ethernet reception clock enable during Sleep mode                */
      __IOM uint32_t ETHMACPTPLPEN : 1;         /*!< [28..28] Ethernet PTP clock enable during Sleep mode                      */
      __IOM uint32_t OTGHSLPEN  : 1;            /*!< [29..29] USB OTG HS clock enable during Sleep mode                        */
      __IOM uint32_t OTGHSULPILPEN : 1;         /*!< [30..30] USB OTG HS ULPI clock enable during Sleep mode                   */
            uint32_t            : 1;
    } AHB1LPENR_b;
  } ;
  
  union {
    __IOM uint32_t AHB2LPENR;                   /*!< (@ 0x00000054) AHB2 peripheral clock enable in low power mode
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t DCMILPEN   : 1;            /*!< [0..0] Camera interface enable during Sleep mode                          */
            uint32_t            : 3;
      __IOM uint32_t CRYPLPEN   : 1;            /*!< [4..4] Cryptography modules clock enable during Sleep mode                */
      __IOM uint32_t HASHLPEN   : 1;            /*!< [5..5] Hash modules clock enable during Sleep mode                        */
      __IOM uint32_t RNGLPEN    : 1;            /*!< [6..6] Random number generator clock enable during Sleep mode             */
      __IOM uint32_t OTGFSLPEN  : 1;            /*!< [7..7] USB OTG FS clock enable during Sleep mode                          */
            uint32_t            : 24;
    } AHB2LPENR_b;
  } ;
  
  union {
    __IOM uint32_t AHB3LPENR;                   /*!< (@ 0x00000058) AHB3 peripheral clock enable in low power mode
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t FMCLPEN    : 1;            /*!< [0..0] Flexible memory controller module clock enable during
                                                     Sleep mode                                                                */
      __IOM uint32_t QSPILPEN   : 1;            /*!< [1..1] Quand SPI memory controller clock enable during Sleep
                                                     mode                                                                      */
            uint32_t            : 30;
    } AHB3LPENR_b;
  } ;
  __IM  uint32_t  RESERVED4;
  
  union {
    __IOM uint32_t APB1LPENR;                   /*!< (@ 0x00000060) APB1 peripheral clock enable in low power mode
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t TIM2LPEN   : 1;            /*!< [0..0] TIM2 clock enable during Sleep mode                                */
      __IOM uint32_t TIM3LPEN   : 1;            /*!< [1..1] TIM3 clock enable during Sleep mode                                */
      __IOM uint32_t TIM4LPEN   : 1;            /*!< [2..2] TIM4 clock enable during Sleep mode                                */
      __IOM uint32_t TIM5LPEN   : 1;            /*!< [3..3] TIM5 clock enable during Sleep mode                                */
      __IOM uint32_t TIM6LPEN   : 1;            /*!< [4..4] TIM6 clock enable during Sleep mode                                */
      __IOM uint32_t TIM7LPEN   : 1;            /*!< [5..5] TIM7 clock enable during Sleep mode                                */
      __IOM uint32_t TIM12LPEN  : 1;            /*!< [6..6] TIM12 clock enable during Sleep mode                               */
      __IOM uint32_t TIM13LPEN  : 1;            /*!< [7..7] TIM13 clock enable during Sleep mode                               */
      __IOM uint32_t TIM14LPEN  : 1;            /*!< [8..8] TIM14 clock enable during Sleep mode                               */
      __IOM uint32_t LPTIM1LPEN : 1;            /*!< [9..9] low power timer 1 clock enable during Sleep mode                   */
            uint32_t            : 1;
      __IOM uint32_t WWDGLPEN   : 1;            /*!< [11..11] Window watchdog clock enable during Sleep mode                   */
            uint32_t            : 2;
      __IOM uint32_t SPI2LPEN   : 1;            /*!< [14..14] SPI2 clock enable during Sleep mode                              */
      __IOM uint32_t SPI3LPEN   : 1;            /*!< [15..15] SPI3 clock enable during Sleep mode                              */
      __IOM uint32_t SPDIFRXLPEN : 1;           /*!< [16..16] SPDIF-RX clock enable during sleep mode                          */
      __IOM uint32_t USART2LPEN : 1;            /*!< [17..17] USART2 clock enable during Sleep mode                            */
      __IOM uint32_t USART3LPEN : 1;            /*!< [18..18] USART3 clock enable during Sleep mode                            */
      __IOM uint32_t UART4LPEN  : 1;            /*!< [19..19] UART4 clock enable during Sleep mode                             */
      __IOM uint32_t UART5LPEN  : 1;            /*!< [20..20] UART5 clock enable during Sleep mode                             */
      __IOM uint32_t I2C1LPEN   : 1;            /*!< [21..21] I2C1 clock enable during Sleep mode                              */
      __IOM uint32_t I2C2LPEN   : 1;            /*!< [22..22] I2C2 clock enable during Sleep mode                              */
      __IOM uint32_t I2C3LPEN   : 1;            /*!< [23..23] I2C3 clock enable during Sleep mode                              */
      __IOM uint32_t I2C4LPEN   : 1;            /*!< [24..24] I2C4 clock enable during Sleep mode                              */
      __IOM uint32_t CAN1LPEN   : 1;            /*!< [25..25] CAN 1 clock enable during Sleep mode                             */
      __IOM uint32_t CAN2LPEN   : 1;            /*!< [26..26] CAN 2 clock enable during Sleep mode                             */
      __IOM uint32_t CECLPEN    : 1;            /*!< [27..27] HDMI-CEN clock enable during Sleep mode                          */
      __IOM uint32_t PWRLPEN    : 1;            /*!< [28..28] Power interface clock enable during Sleep mode                   */
      __IOM uint32_t DACLPEN    : 1;            /*!< [29..29] DAC interface clock enable during Sleep mode                     */
      __IOM uint32_t UART7LPEN  : 1;            /*!< [30..30] UART7 clock enable during Sleep mode                             */
      __IOM uint32_t UART8LPEN  : 1;            /*!< [31..31] UART8 clock enable during Sleep mode                             */
    } APB1LPENR_b;
  } ;
  
  union {
    __IOM uint32_t APB2LPENR;                   /*!< (@ 0x00000064) APB2 peripheral clock enabled in low power mode
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t TIM1LPEN   : 1;            /*!< [0..0] TIM1 clock enable during Sleep mode                                */
      __IOM uint32_t TIM8LPEN   : 1;            /*!< [1..1] TIM8 clock enable during Sleep mode                                */
            uint32_t            : 2;
      __IOM uint32_t USART1LPEN : 1;            /*!< [4..4] USART1 clock enable during Sleep mode                              */
      __IOM uint32_t USART6LPEN : 1;            /*!< [5..5] USART6 clock enable during Sleep mode                              */
            uint32_t            : 2;
      __IOM uint32_t ADC1LPEN   : 1;            /*!< [8..8] ADC1 clock enable during Sleep mode                                */
      __IOM uint32_t ADC2LPEN   : 1;            /*!< [9..9] ADC2 clock enable during Sleep mode                                */
      __IOM uint32_t ADC3LPEN   : 1;            /*!< [10..10] ADC 3 clock enable during Sleep mode                             */
      __IOM uint32_t SDMMC1LPEN : 1;            /*!< [11..11] SDMMC1 clock enable during Sleep mode                            */
      __IOM uint32_t SPI1LPEN   : 1;            /*!< [12..12] SPI 1 clock enable during Sleep mode                             */
      __IOM uint32_t SPI4LPEN   : 1;            /*!< [13..13] SPI 4 clock enable during Sleep mode                             */
      __IOM uint32_t SYSCFGLPEN : 1;            /*!< [14..14] System configuration controller clock enable during
                                                     Sleep mode                                                                */
            uint32_t            : 1;
      __IOM uint32_t TIM9LPEN   : 1;            /*!< [16..16] TIM9 clock enable during sleep mode                              */
      __IOM uint32_t TIM10LPEN  : 1;            /*!< [17..17] TIM10 clock enable during Sleep mode                             */
      __IOM uint32_t TIM11LPEN  : 1;            /*!< [18..18] TIM11 clock enable during Sleep mode                             */
            uint32_t            : 1;
      __IOM uint32_t SPI5LPEN   : 1;            /*!< [20..20] SPI 5 clock enable during Sleep mode                             */
      __IOM uint32_t SPI6LPEN   : 1;            /*!< [21..21] SPI 6 clock enable during Sleep mode                             */
      __IOM uint32_t SAI1LPEN   : 1;            /*!< [22..22] SAI1 clock enable during sleep mode                              */
      __IOM uint32_t SAI2LPEN   : 1;            /*!< [23..23] SAI2 clock enable during sleep mode                              */
            uint32_t            : 2;
      __IOM uint32_t LTDCLPEN   : 1;            /*!< [26..26] LTDC clock enable during sleep mode                              */
            uint32_t            : 5;
    } APB2LPENR_b;
  } ;
  __IM  uint32_t  RESERVED5[2];
  
  union {
    __IOM uint32_t BDCR;                        /*!< (@ 0x00000070) Backup domain control register                             */
    
    struct {
      __IOM uint32_t LSEON      : 1;            /*!< [0..0] External low-speed oscillator enable                               */
      __IM  uint32_t LSERDY     : 1;            /*!< [1..1] External low-speed oscillator ready                                */
      __IOM uint32_t LSEBYP     : 1;            /*!< [2..2] External low-speed oscillator bypass                               */
            uint32_t            : 5;
      __IOM uint32_t RTCSEL0    : 1;            /*!< [8..8] RTC clock source selection                                         */
      __IOM uint32_t RTCSEL1    : 1;            /*!< [9..9] RTC clock source selection                                         */
            uint32_t            : 5;
      __IOM uint32_t RTCEN      : 1;            /*!< [15..15] RTC clock enable                                                 */
      __IOM uint32_t BDRST      : 1;            /*!< [16..16] Backup domain software reset                                     */
            uint32_t            : 15;
    } BDCR_b;
  } ;
  
  union {
    __IOM uint32_t CSR;                         /*!< (@ 0x00000074) clock control & status register                            */
    
    struct {
      __IOM uint32_t LSION      : 1;            /*!< [0..0] Internal low-speed oscillator enable                               */
      __IM  uint32_t LSIRDY     : 1;            /*!< [1..1] Internal low-speed oscillator ready                                */
            uint32_t            : 22;
      __IOM uint32_t RMVF       : 1;            /*!< [24..24] Remove reset flag                                                */
      __IOM uint32_t BORRSTF    : 1;            /*!< [25..25] BOR reset flag                                                   */
      __IOM uint32_t PADRSTF    : 1;            /*!< [26..26] PIN reset flag                                                   */
      __IOM uint32_t PORRSTF    : 1;            /*!< [27..27] POR/PDR reset flag                                               */
      __IOM uint32_t SFTRSTF    : 1;            /*!< [28..28] Software reset flag                                              */
      __IOM uint32_t WDGRSTF    : 1;            /*!< [29..29] Independent watchdog reset flag                                  */
      __IOM uint32_t WWDGRSTF   : 1;            /*!< [30..30] Window watchdog reset flag                                       */
      __IOM uint32_t LPWRRSTF   : 1;            /*!< [31..31] Low-power reset flag                                             */
    } CSR_b;
  } ;
  __IM  uint32_t  RESERVED6[2];
  
  union {
    __IOM uint32_t SSCGR;                       /*!< (@ 0x00000080) spread spectrum clock generation register                  */
    
    struct {
      __IOM uint32_t MODPER     : 13;           /*!< [12..0] Modulation period                                                 */
      __IOM uint32_t INCSTEP    : 15;           /*!< [27..13] Incrementation step                                              */
            uint32_t            : 2;
      __IOM uint32_t SPREADSEL  : 1;            /*!< [30..30] Spread Select                                                    */
      __IOM uint32_t SSCGEN     : 1;            /*!< [31..31] Spread spectrum modulation enable                                */
    } SSCGR_b;
  } ;
  
  union {
    __IOM uint32_t PLLI2SCFGR;                  /*!< (@ 0x00000084) PLLI2S configuration register                              */
    
    struct {
            uint32_t            : 6;
      __IOM uint32_t PLLI2SN    : 9;            /*!< [14..6] PLLI2S multiplication factor for VCO                              */
            uint32_t            : 9;
      __IOM uint32_t PLLI2SQ    : 4;            /*!< [27..24] PLLI2S division factor for SAI1 clock                            */
      __IOM uint32_t PLLI2SR    : 3;            /*!< [30..28] PLLI2S division factor for I2S clocks                            */
            uint32_t            : 1;
    } PLLI2SCFGR_b;
  } ;
  
  union {
    __IOM uint32_t PLLSAICFGR;                  /*!< (@ 0x00000088) PLL configuration register                                 */
    
    struct {
            uint32_t            : 6;
      __IOM uint32_t PLLSAIN    : 9;            /*!< [14..6] PLLSAI division factor for VCO                                    */
            uint32_t            : 1;
      __IOM uint32_t PLLSAIP    : 2;            /*!< [17..16] PLLSAI division factor for 48MHz clock                           */
            uint32_t            : 6;
      __IOM uint32_t PLLSAIQ    : 4;            /*!< [27..24] PLLSAI division factor for SAI clock                             */
      __IOM uint32_t PLLSAIR    : 3;            /*!< [30..28] PLLSAI division factor for LCD clock                             */
            uint32_t            : 1;
    } PLLSAICFGR_b;
  } ;
  
  union {
    __IOM uint32_t DKCFGR1;                     /*!< (@ 0x0000008C) dedicated clocks configuration register                    */
    
    struct {
      __IOM uint32_t PLLI2SDIV  : 5;            /*!< [4..0] PLLI2S division factor for SAI1 clock                              */
            uint32_t            : 3;
      __IOM uint32_t PLLSAIDIVQ : 5;            /*!< [12..8] PLLSAI division factor for SAI1 clock                             */
            uint32_t            : 3;
      __IOM uint32_t PLLSAIDIVR : 2;            /*!< [17..16] division factor for LCD_CLK                                      */
            uint32_t            : 2;
      __IOM uint32_t SAI1SEL    : 2;            /*!< [21..20] SAI1 clock source selection                                      */
      __IOM uint32_t SAI2SEL    : 2;            /*!< [23..22] SAI2 clock source selection                                      */
      __IOM uint32_t TIMPRE     : 1;            /*!< [24..24] Timers clocks prescalers selection                               */
            uint32_t            : 7;
    } DKCFGR1_b;
  } ;
  
  union {
    __IOM uint32_t DKCFGR2;                     /*!< (@ 0x00000090) dedicated clocks configuration register                    */
    
    struct {
      __IOM uint32_t USART1SEL  : 2;            /*!< [1..0] USART 1 clock source selection                                     */
      __IOM uint32_t USART2SEL  : 2;            /*!< [3..2] USART 2 clock source selection                                     */
      __IOM uint32_t USART3SEL  : 2;            /*!< [5..4] USART 3 clock source selection                                     */
      __IOM uint32_t UART4SEL   : 2;            /*!< [7..6] UART 4 clock source selection                                      */
      __IOM uint32_t UART5SEL   : 2;            /*!< [9..8] UART 5 clock source selection                                      */
      __IOM uint32_t USART6SEL  : 2;            /*!< [11..10] USART 6 clock source selection                                   */
      __IOM uint32_t UART7SEL   : 2;            /*!< [13..12] UART 7 clock source selection                                    */
      __IOM uint32_t UART8SEL   : 2;            /*!< [15..14] UART 8 clock source selection                                    */
      __IOM uint32_t I2C1SEL    : 2;            /*!< [17..16] I2C1 clock source selection                                      */
      __IOM uint32_t I2C2SEL    : 2;            /*!< [19..18] I2C2 clock source selection                                      */
      __IOM uint32_t I2C3SEL    : 2;            /*!< [21..20] I2C3 clock source selection                                      */
      __IOM uint32_t I2C4SEL    : 2;            /*!< [23..22] I2C4 clock source selection                                      */
      __IOM uint32_t LPTIM1SEL  : 2;            /*!< [25..24] Low power timer 1 clock source selection                         */
      __IOM uint32_t CECSEL     : 1;            /*!< [26..26] HDMI-CEC clock source selection                                  */
      __IOM uint32_t CK48MSEL   : 1;            /*!< [27..27] 48MHz clock source selection                                     */
      __IOM uint32_t SDMMCSEL   : 1;            /*!< [28..28] SDMMC clock source selection                                     */
      __IOM uint32_t SDMMC2SEL  : 1;            /*!< [29..29] SDMMC2 clock source selection                                    */
      __IOM uint32_t DSISEL     : 1;            /*!< [30..30] DSI clock source selection                                       */
            uint32_t            : 1;
    } DKCFGR2_b;
  } ;
} RCC_Type;                                     /*!< Size = 148 (0x94)                                                         */



/* =========================================================================================================================== */
/* ================                                            RCC                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
#define RCC_CR_PLLI2SRDY_Pos              (27UL)                    /*!< PLLI2SRDY (Bit 27)                                    */
#define RCC_CR_PLLI2SRDY_Msk              (0x8000000UL)             /*!< PLLI2SRDY (Bitfield-Mask: 0x01)                       */
#define RCC_CR_PLLI2SON_Pos               (26UL)                    /*!< PLLI2SON (Bit 26)                                     */
#define RCC_CR_PLLI2SON_Msk               (0x4000000UL)             /*!< PLLI2SON (Bitfield-Mask: 0x01)                        */
#define RCC_CR_PLLRDY_Pos                 (25UL)                    /*!< PLLRDY (Bit 25)                                       */
#define RCC_CR_PLLRDY_Msk                 (0x2000000UL)             /*!< PLLRDY (Bitfield-Mask: 0x01)                          */
#define RCC_CR_PLLON_Pos                  (24UL)                    /*!< PLLON (Bit 24)                                        */
#define RCC_CR_PLLON_Msk                  (0x1000000UL)             /*!< PLLON (Bitfield-Mask: 0x01)                           */
#define RCC_CR_CSSON_Pos                  (19UL)                    /*!< CSSON (Bit 19)                                        */
#define RCC_CR_CSSON_Msk                  (0x80000UL)               /*!< CSSON (Bitfield-Mask: 0x01)                           */
#define RCC_CR_HSEBYP_Pos                 (18UL)                    /*!< HSEBYP (Bit 18)                                       */
#define RCC_CR_HSEBYP_Msk                 (0x40000UL)               /*!< HSEBYP (Bitfield-Mask: 0x01)                          */
#define RCC_CR_HSERDY_Pos                 (17UL)                    /*!< HSERDY (Bit 17)                                       */
#define RCC_CR_HSERDY_Msk                 (0x20000UL)               /*!< HSERDY (Bitfield-Mask: 0x01)                          */
#define RCC_CR_HSEON_Pos                  (16UL)                    /*!< HSEON (Bit 16)                                        */
#define RCC_CR_HSEON_Msk                  (0x10000UL)               /*!< HSEON (Bitfield-Mask: 0x01)                           */
#define RCC_CR_HSICAL_Pos                 (8UL)                     /*!< HSICAL (Bit 8)                                        */
#define RCC_CR_HSICAL_Msk                 (0xff00UL)                /*!< HSICAL (Bitfield-Mask: 0xff)                          */
#define RCC_CR_HSITRIM_Pos                (3UL)                     /*!< HSITRIM (Bit 3)                                       */
#define RCC_CR_HSITRIM_Msk                (0xf8UL)                  /*!< HSITRIM (Bitfield-Mask: 0x1f)                         */
#define RCC_CR_HSIRDY_Pos                 (1UL)                     /*!< HSIRDY (Bit 1)                                        */
#define RCC_CR_HSIRDY_Msk                 (0x2UL)                   /*!< HSIRDY (Bitfield-Mask: 0x01)                          */
#define RCC_CR_HSION_Pos                  (0UL)                     /*!< HSION (Bit 0)                                         */
#define RCC_CR_HSION_Msk                  (0x1UL)                   /*!< HSION (Bitfield-Mask: 0x01)                           */
/* ========================================================  PLLCFGR  ======================================================== */
#define RCC_PLLCFGR_PLLQ3_Pos             (27UL)                    /*!< PLLQ3 (Bit 27)                                        */
#define RCC_PLLCFGR_PLLQ3_Msk             (0x8000000UL)             /*!< PLLQ3 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLQ2_Pos             (26UL)                    /*!< PLLQ2 (Bit 26)                                        */
#define RCC_PLLCFGR_PLLQ2_Msk             (0x4000000UL)             /*!< PLLQ2 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLQ1_Pos             (25UL)                    /*!< PLLQ1 (Bit 25)                                        */
#define RCC_PLLCFGR_PLLQ1_Msk             (0x2000000UL)             /*!< PLLQ1 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLQ0_Pos             (24UL)                    /*!< PLLQ0 (Bit 24)                                        */
#define RCC_PLLCFGR_PLLQ0_Msk             (0x1000000UL)             /*!< PLLQ0 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLSRC_Pos            (22UL)                    /*!< PLLSRC (Bit 22)                                       */
#define RCC_PLLCFGR_PLLSRC_Msk            (0x400000UL)              /*!< PLLSRC (Bitfield-Mask: 0x01)                          */
#define RCC_PLLCFGR_PLLP1_Pos             (17UL)                    /*!< PLLP1 (Bit 17)                                        */
#define RCC_PLLCFGR_PLLP1_Msk             (0x20000UL)               /*!< PLLP1 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLP0_Pos             (16UL)                    /*!< PLLP0 (Bit 16)                                        */
#define RCC_PLLCFGR_PLLP0_Msk             (0x10000UL)               /*!< PLLP0 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLN8_Pos             (14UL)                    /*!< PLLN8 (Bit 14)                                        */
#define RCC_PLLCFGR_PLLN8_Msk             (0x4000UL)                /*!< PLLN8 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLN7_Pos             (13UL)                    /*!< PLLN7 (Bit 13)                                        */
#define RCC_PLLCFGR_PLLN7_Msk             (0x2000UL)                /*!< PLLN7 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLN6_Pos             (12UL)                    /*!< PLLN6 (Bit 12)                                        */
#define RCC_PLLCFGR_PLLN6_Msk             (0x1000UL)                /*!< PLLN6 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLN5_Pos             (11UL)                    /*!< PLLN5 (Bit 11)                                        */
#define RCC_PLLCFGR_PLLN5_Msk             (0x800UL)                 /*!< PLLN5 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLN4_Pos             (10UL)                    /*!< PLLN4 (Bit 10)                                        */
#define RCC_PLLCFGR_PLLN4_Msk             (0x400UL)                 /*!< PLLN4 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLN3_Pos             (9UL)                     /*!< PLLN3 (Bit 9)                                         */
#define RCC_PLLCFGR_PLLN3_Msk             (0x200UL)                 /*!< PLLN3 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLN2_Pos             (8UL)                     /*!< PLLN2 (Bit 8)                                         */
#define RCC_PLLCFGR_PLLN2_Msk             (0x100UL)                 /*!< PLLN2 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLN1_Pos             (7UL)                     /*!< PLLN1 (Bit 7)                                         */
#define RCC_PLLCFGR_PLLN1_Msk             (0x80UL)                  /*!< PLLN1 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLN0_Pos             (6UL)                     /*!< PLLN0 (Bit 6)                                         */
#define RCC_PLLCFGR_PLLN0_Msk             (0x40UL)                  /*!< PLLN0 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLM5_Pos             (5UL)                     /*!< PLLM5 (Bit 5)                                         */
#define RCC_PLLCFGR_PLLM5_Msk             (0x20UL)                  /*!< PLLM5 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLM4_Pos             (4UL)                     /*!< PLLM4 (Bit 4)                                         */
#define RCC_PLLCFGR_PLLM4_Msk             (0x10UL)                  /*!< PLLM4 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLM3_Pos             (3UL)                     /*!< PLLM3 (Bit 3)                                         */
#define RCC_PLLCFGR_PLLM3_Msk             (0x8UL)                   /*!< PLLM3 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLM2_Pos             (2UL)                     /*!< PLLM2 (Bit 2)                                         */
#define RCC_PLLCFGR_PLLM2_Msk             (0x4UL)                   /*!< PLLM2 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLM1_Pos             (1UL)                     /*!< PLLM1 (Bit 1)                                         */
#define RCC_PLLCFGR_PLLM1_Msk             (0x2UL)                   /*!< PLLM1 (Bitfield-Mask: 0x01)                           */
#define RCC_PLLCFGR_PLLM0_Pos             (0UL)                     /*!< PLLM0 (Bit 0)                                         */
#define RCC_PLLCFGR_PLLM0_Msk             (0x1UL)                   /*!< PLLM0 (Bitfield-Mask: 0x01)                           */
/* =========================================================  CFGR  ========================================================== */
#define RCC_CFGR_MCO2_Pos                 (30UL)                    /*!< MCO2 (Bit 30)                                         */
#define RCC_CFGR_MCO2_Msk                 (0xc0000000UL)            /*!< MCO2 (Bitfield-Mask: 0x03)                            */
#define RCC_CFGR_MCO2PRE_Pos              (27UL)                    /*!< MCO2PRE (Bit 27)                                      */
#define RCC_CFGR_MCO2PRE_Msk              (0x38000000UL)            /*!< MCO2PRE (Bitfield-Mask: 0x07)                         */
#define RCC_CFGR_MCO1PRE_Pos              (24UL)                    /*!< MCO1PRE (Bit 24)                                      */
#define RCC_CFGR_MCO1PRE_Msk              (0x7000000UL)             /*!< MCO1PRE (Bitfield-Mask: 0x07)                         */
#define RCC_CFGR_I2SSRC_Pos               (23UL)                    /*!< I2SSRC (Bit 23)                                       */
#define RCC_CFGR_I2SSRC_Msk               (0x800000UL)              /*!< I2SSRC (Bitfield-Mask: 0x01)                          */
#define RCC_CFGR_MCO1_Pos                 (21UL)                    /*!< MCO1 (Bit 21)                                         */
#define RCC_CFGR_MCO1_Msk                 (0x600000UL)              /*!< MCO1 (Bitfield-Mask: 0x03)                            */
#define RCC_CFGR_RTCPRE_Pos               (16UL)                    /*!< RTCPRE (Bit 16)                                       */
#define RCC_CFGR_RTCPRE_Msk               (0x1f0000UL)              /*!< RTCPRE (Bitfield-Mask: 0x1f)                          */
#define RCC_CFGR_PPRE2_Pos                (13UL)                    /*!< PPRE2 (Bit 13)                                        */
#define RCC_CFGR_PPRE2_Msk                (0xe000UL)                /*!< PPRE2 (Bitfield-Mask: 0x07)                           */
#define RCC_CFGR_PPRE1_Pos                (10UL)                    /*!< PPRE1 (Bit 10)                                        */
#define RCC_CFGR_PPRE1_Msk                (0x1c00UL)                /*!< PPRE1 (Bitfield-Mask: 0x07)                           */
#define RCC_CFGR_HPRE_Pos                 (4UL)                     /*!< HPRE (Bit 4)                                          */
#define RCC_CFGR_HPRE_Msk                 (0xf0UL)                  /*!< HPRE (Bitfield-Mask: 0x0f)                            */
#define RCC_CFGR_SWS1_Pos                 (3UL)                     /*!< SWS1 (Bit 3)                                          */
#define RCC_CFGR_SWS1_Msk                 (0x8UL)                   /*!< SWS1 (Bitfield-Mask: 0x01)                            */
#define RCC_CFGR_SWS0_Pos                 (2UL)                     /*!< SWS0 (Bit 2)                                          */
#define RCC_CFGR_SWS0_Msk                 (0x4UL)                   /*!< SWS0 (Bitfield-Mask: 0x01)                            */
#define RCC_CFGR_SW1_Pos                  (1UL)                     /*!< SW1 (Bit 1)                                           */
#define RCC_CFGR_SW1_Msk                  (0x2UL)                   /*!< SW1 (Bitfield-Mask: 0x01)                             */
#define RCC_CFGR_SW0_Pos                  (0UL)                     /*!< SW0 (Bit 0)                                           */
#define RCC_CFGR_SW0_Msk                  (0x1UL)                   /*!< SW0 (Bitfield-Mask: 0x01)                             */
/* ==========================================================  CIR  ========================================================== */
#define RCC_CIR_CSSC_Pos                  (23UL)                    /*!< CSSC (Bit 23)                                         */
#define RCC_CIR_CSSC_Msk                  (0x800000UL)              /*!< CSSC (Bitfield-Mask: 0x01)                            */
#define RCC_CIR_PLLSAIRDYC_Pos            (22UL)                    /*!< PLLSAIRDYC (Bit 22)                                   */
#define RCC_CIR_PLLSAIRDYC_Msk            (0x400000UL)              /*!< PLLSAIRDYC (Bitfield-Mask: 0x01)                      */
#define RCC_CIR_PLLI2SRDYC_Pos            (21UL)                    /*!< PLLI2SRDYC (Bit 21)                                   */
#define RCC_CIR_PLLI2SRDYC_Msk            (0x200000UL)              /*!< PLLI2SRDYC (Bitfield-Mask: 0x01)                      */
#define RCC_CIR_PLLRDYC_Pos               (20UL)                    /*!< PLLRDYC (Bit 20)                                      */
#define RCC_CIR_PLLRDYC_Msk               (0x100000UL)              /*!< PLLRDYC (Bitfield-Mask: 0x01)                         */
#define RCC_CIR_HSERDYC_Pos               (19UL)                    /*!< HSERDYC (Bit 19)                                      */
#define RCC_CIR_HSERDYC_Msk               (0x80000UL)               /*!< HSERDYC (Bitfield-Mask: 0x01)                         */
#define RCC_CIR_HSIRDYC_Pos               (18UL)                    /*!< HSIRDYC (Bit 18)                                      */
#define RCC_CIR_HSIRDYC_Msk               (0x40000UL)               /*!< HSIRDYC (Bitfield-Mask: 0x01)                         */
#define RCC_CIR_LSERDYC_Pos               (17UL)                    /*!< LSERDYC (Bit 17)                                      */
#define RCC_CIR_LSERDYC_Msk               (0x20000UL)               /*!< LSERDYC (Bitfield-Mask: 0x01)                         */
#define RCC_CIR_LSIRDYC_Pos               (16UL)                    /*!< LSIRDYC (Bit 16)                                      */
#define RCC_CIR_LSIRDYC_Msk               (0x10000UL)               /*!< LSIRDYC (Bitfield-Mask: 0x01)                         */
#define RCC_CIR_PLLSAIRDYIE_Pos           (14UL)                    /*!< PLLSAIRDYIE (Bit 14)                                  */
#define RCC_CIR_PLLSAIRDYIE_Msk           (0x4000UL)                /*!< PLLSAIRDYIE (Bitfield-Mask: 0x01)                     */
#define RCC_CIR_PLLI2SRDYIE_Pos           (13UL)                    /*!< PLLI2SRDYIE (Bit 13)                                  */
#define RCC_CIR_PLLI2SRDYIE_Msk           (0x2000UL)                /*!< PLLI2SRDYIE (Bitfield-Mask: 0x01)                     */
#define RCC_CIR_PLLRDYIE_Pos              (12UL)                    /*!< PLLRDYIE (Bit 12)                                     */
#define RCC_CIR_PLLRDYIE_Msk              (0x1000UL)                /*!< PLLRDYIE (Bitfield-Mask: 0x01)                        */
#define RCC_CIR_HSERDYIE_Pos              (11UL)                    /*!< HSERDYIE (Bit 11)                                     */
#define RCC_CIR_HSERDYIE_Msk              (0x800UL)                 /*!< HSERDYIE (Bitfield-Mask: 0x01)                        */
#define RCC_CIR_HSIRDYIE_Pos              (10UL)                    /*!< HSIRDYIE (Bit 10)                                     */
#define RCC_CIR_HSIRDYIE_Msk              (0x400UL)                 /*!< HSIRDYIE (Bitfield-Mask: 0x01)                        */
#define RCC_CIR_LSERDYIE_Pos              (9UL)                     /*!< LSERDYIE (Bit 9)                                      */
#define RCC_CIR_LSERDYIE_Msk              (0x200UL)                 /*!< LSERDYIE (Bitfield-Mask: 0x01)                        */
#define RCC_CIR_LSIRDYIE_Pos              (8UL)                     /*!< LSIRDYIE (Bit 8)                                      */
#define RCC_CIR_LSIRDYIE_Msk              (0x100UL)                 /*!< LSIRDYIE (Bitfield-Mask: 0x01)                        */
#define RCC_CIR_CSSF_Pos                  (7UL)                     /*!< CSSF (Bit 7)                                          */
#define RCC_CIR_CSSF_Msk                  (0x80UL)                  /*!< CSSF (Bitfield-Mask: 0x01)                            */
#define RCC_CIR_PLLSAIRDYF_Pos            (6UL)                     /*!< PLLSAIRDYF (Bit 6)                                    */
#define RCC_CIR_PLLSAIRDYF_Msk            (0x40UL)                  /*!< PLLSAIRDYF (Bitfield-Mask: 0x01)                      */
#define RCC_CIR_PLLI2SRDYF_Pos            (5UL)                     /*!< PLLI2SRDYF (Bit 5)                                    */
#define RCC_CIR_PLLI2SRDYF_Msk            (0x20UL)                  /*!< PLLI2SRDYF (Bitfield-Mask: 0x01)                      */
#define RCC_CIR_PLLRDYF_Pos               (4UL)                     /*!< PLLRDYF (Bit 4)                                       */
#define RCC_CIR_PLLRDYF_Msk               (0x10UL)                  /*!< PLLRDYF (Bitfield-Mask: 0x01)                         */
#define RCC_CIR_HSERDYF_Pos               (3UL)                     /*!< HSERDYF (Bit 3)                                       */
#define RCC_CIR_HSERDYF_Msk               (0x8UL)                   /*!< HSERDYF (Bitfield-Mask: 0x01)                         */
#define RCC_CIR_HSIRDYF_Pos               (2UL)                     /*!< HSIRDYF (Bit 2)                                       */
#define RCC_CIR_HSIRDYF_Msk               (0x4UL)                   /*!< HSIRDYF (Bitfield-Mask: 0x01)                         */
#define RCC_CIR_LSERDYF_Pos               (1UL)                     /*!< LSERDYF (Bit 1)                                       */
#define RCC_CIR_LSERDYF_Msk               (0x2UL)                   /*!< LSERDYF (Bitfield-Mask: 0x01)                         */
#define RCC_CIR_LSIRDYF_Pos               (0UL)                     /*!< LSIRDYF (Bit 0)                                       */
#define RCC_CIR_LSIRDYF_Msk               (0x1UL)                   /*!< LSIRDYF (Bitfield-Mask: 0x01)                         */
/* =======================================================  AHB1RSTR  ======================================================== */
#define RCC_AHB1RSTR_OTGHSRST_Pos         (29UL)                    /*!< OTGHSRST (Bit 29)                                     */
#define RCC_AHB1RSTR_OTGHSRST_Msk         (0x20000000UL)            /*!< OTGHSRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_ETHMACRST_Pos        (25UL)                    /*!< ETHMACRST (Bit 25)                                    */
#define RCC_AHB1RSTR_ETHMACRST_Msk        (0x2000000UL)             /*!< ETHMACRST (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1RSTR_DMA2DRST_Pos         (23UL)                    /*!< DMA2DRST (Bit 23)                                     */
#define RCC_AHB1RSTR_DMA2DRST_Msk         (0x800000UL)              /*!< DMA2DRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_DMA2RST_Pos          (22UL)                    /*!< DMA2RST (Bit 22)                                      */
#define RCC_AHB1RSTR_DMA2RST_Msk          (0x400000UL)              /*!< DMA2RST (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1RSTR_DMA1RST_Pos          (21UL)                    /*!< DMA1RST (Bit 21)                                      */
#define RCC_AHB1RSTR_DMA1RST_Msk          (0x200000UL)              /*!< DMA1RST (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1RSTR_CRCRST_Pos           (12UL)                    /*!< CRCRST (Bit 12)                                       */
#define RCC_AHB1RSTR_CRCRST_Msk           (0x1000UL)                /*!< CRCRST (Bitfield-Mask: 0x01)                          */
#define RCC_AHB1RSTR_GPIOKRST_Pos         (10UL)                    /*!< GPIOKRST (Bit 10)                                     */
#define RCC_AHB1RSTR_GPIOKRST_Msk         (0x400UL)                 /*!< GPIOKRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_GPIOJRST_Pos         (9UL)                     /*!< GPIOJRST (Bit 9)                                      */
#define RCC_AHB1RSTR_GPIOJRST_Msk         (0x200UL)                 /*!< GPIOJRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_GPIOIRST_Pos         (8UL)                     /*!< GPIOIRST (Bit 8)                                      */
#define RCC_AHB1RSTR_GPIOIRST_Msk         (0x100UL)                 /*!< GPIOIRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_GPIOHRST_Pos         (7UL)                     /*!< GPIOHRST (Bit 7)                                      */
#define RCC_AHB1RSTR_GPIOHRST_Msk         (0x80UL)                  /*!< GPIOHRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_GPIOGRST_Pos         (6UL)                     /*!< GPIOGRST (Bit 6)                                      */
#define RCC_AHB1RSTR_GPIOGRST_Msk         (0x40UL)                  /*!< GPIOGRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_GPIOFRST_Pos         (5UL)                     /*!< GPIOFRST (Bit 5)                                      */
#define RCC_AHB1RSTR_GPIOFRST_Msk         (0x20UL)                  /*!< GPIOFRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_GPIOERST_Pos         (4UL)                     /*!< GPIOERST (Bit 4)                                      */
#define RCC_AHB1RSTR_GPIOERST_Msk         (0x10UL)                  /*!< GPIOERST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_GPIODRST_Pos         (3UL)                     /*!< GPIODRST (Bit 3)                                      */
#define RCC_AHB1RSTR_GPIODRST_Msk         (0x8UL)                   /*!< GPIODRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_GPIOCRST_Pos         (2UL)                     /*!< GPIOCRST (Bit 2)                                      */
#define RCC_AHB1RSTR_GPIOCRST_Msk         (0x4UL)                   /*!< GPIOCRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_GPIOBRST_Pos         (1UL)                     /*!< GPIOBRST (Bit 1)                                      */
#define RCC_AHB1RSTR_GPIOBRST_Msk         (0x2UL)                   /*!< GPIOBRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1RSTR_GPIOARST_Pos         (0UL)                     /*!< GPIOARST (Bit 0)                                      */
#define RCC_AHB1RSTR_GPIOARST_Msk         (0x1UL)                   /*!< GPIOARST (Bitfield-Mask: 0x01)                        */
/* =======================================================  AHB2RSTR  ======================================================== */
#define RCC_AHB2RSTR_OTGFSRST_Pos         (7UL)                     /*!< OTGFSRST (Bit 7)                                      */
#define RCC_AHB2RSTR_OTGFSRST_Msk         (0x80UL)                  /*!< OTGFSRST (Bitfield-Mask: 0x01)                        */
#define RCC_AHB2RSTR_RNGRST_Pos           (6UL)                     /*!< RNGRST (Bit 6)                                        */
#define RCC_AHB2RSTR_RNGRST_Msk           (0x40UL)                  /*!< RNGRST (Bitfield-Mask: 0x01)                          */
#define RCC_AHB2RSTR_HSAHRST_Pos          (5UL)                     /*!< HSAHRST (Bit 5)                                       */
#define RCC_AHB2RSTR_HSAHRST_Msk          (0x20UL)                  /*!< HSAHRST (Bitfield-Mask: 0x01)                         */
#define RCC_AHB2RSTR_CRYPRST_Pos          (4UL)                     /*!< CRYPRST (Bit 4)                                       */
#define RCC_AHB2RSTR_CRYPRST_Msk          (0x10UL)                  /*!< CRYPRST (Bitfield-Mask: 0x01)                         */
#define RCC_AHB2RSTR_DCMIRST_Pos          (0UL)                     /*!< DCMIRST (Bit 0)                                       */
#define RCC_AHB2RSTR_DCMIRST_Msk          (0x1UL)                   /*!< DCMIRST (Bitfield-Mask: 0x01)                         */
/* =======================================================  AHB3RSTR  ======================================================== */
#define RCC_AHB3RSTR_FMCRST_Pos           (0UL)                     /*!< FMCRST (Bit 0)                                        */
#define RCC_AHB3RSTR_FMCRST_Msk           (0x1UL)                   /*!< FMCRST (Bitfield-Mask: 0x01)                          */
#define RCC_AHB3RSTR_QSPIRST_Pos          (1UL)                     /*!< QSPIRST (Bit 1)                                       */
#define RCC_AHB3RSTR_QSPIRST_Msk          (0x2UL)                   /*!< QSPIRST (Bitfield-Mask: 0x01)                         */
/* =======================================================  APB1RSTR  ======================================================== */
#define RCC_APB1RSTR_TIM2RST_Pos          (0UL)                     /*!< TIM2RST (Bit 0)                                       */
#define RCC_APB1RSTR_TIM2RST_Msk          (0x1UL)                   /*!< TIM2RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_TIM3RST_Pos          (1UL)                     /*!< TIM3RST (Bit 1)                                       */
#define RCC_APB1RSTR_TIM3RST_Msk          (0x2UL)                   /*!< TIM3RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_TIM4RST_Pos          (2UL)                     /*!< TIM4RST (Bit 2)                                       */
#define RCC_APB1RSTR_TIM4RST_Msk          (0x4UL)                   /*!< TIM4RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_TIM5RST_Pos          (3UL)                     /*!< TIM5RST (Bit 3)                                       */
#define RCC_APB1RSTR_TIM5RST_Msk          (0x8UL)                   /*!< TIM5RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_TIM6RST_Pos          (4UL)                     /*!< TIM6RST (Bit 4)                                       */
#define RCC_APB1RSTR_TIM6RST_Msk          (0x10UL)                  /*!< TIM6RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_TIM7RST_Pos          (5UL)                     /*!< TIM7RST (Bit 5)                                       */
#define RCC_APB1RSTR_TIM7RST_Msk          (0x20UL)                  /*!< TIM7RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_TIM12RST_Pos         (6UL)                     /*!< TIM12RST (Bit 6)                                      */
#define RCC_APB1RSTR_TIM12RST_Msk         (0x40UL)                  /*!< TIM12RST (Bitfield-Mask: 0x01)                        */
#define RCC_APB1RSTR_TIM13RST_Pos         (7UL)                     /*!< TIM13RST (Bit 7)                                      */
#define RCC_APB1RSTR_TIM13RST_Msk         (0x80UL)                  /*!< TIM13RST (Bitfield-Mask: 0x01)                        */
#define RCC_APB1RSTR_TIM14RST_Pos         (8UL)                     /*!< TIM14RST (Bit 8)                                      */
#define RCC_APB1RSTR_TIM14RST_Msk         (0x100UL)                 /*!< TIM14RST (Bitfield-Mask: 0x01)                        */
#define RCC_APB1RSTR_WWDGRST_Pos          (11UL)                    /*!< WWDGRST (Bit 11)                                      */
#define RCC_APB1RSTR_WWDGRST_Msk          (0x800UL)                 /*!< WWDGRST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_SPI2RST_Pos          (14UL)                    /*!< SPI2RST (Bit 14)                                      */
#define RCC_APB1RSTR_SPI2RST_Msk          (0x4000UL)                /*!< SPI2RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_SPI3RST_Pos          (15UL)                    /*!< SPI3RST (Bit 15)                                      */
#define RCC_APB1RSTR_SPI3RST_Msk          (0x8000UL)                /*!< SPI3RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_UART2RST_Pos         (17UL)                    /*!< UART2RST (Bit 17)                                     */
#define RCC_APB1RSTR_UART2RST_Msk         (0x20000UL)               /*!< UART2RST (Bitfield-Mask: 0x01)                        */
#define RCC_APB1RSTR_UART3RST_Pos         (18UL)                    /*!< UART3RST (Bit 18)                                     */
#define RCC_APB1RSTR_UART3RST_Msk         (0x40000UL)               /*!< UART3RST (Bitfield-Mask: 0x01)                        */
#define RCC_APB1RSTR_UART4RST_Pos         (19UL)                    /*!< UART4RST (Bit 19)                                     */
#define RCC_APB1RSTR_UART4RST_Msk         (0x80000UL)               /*!< UART4RST (Bitfield-Mask: 0x01)                        */
#define RCC_APB1RSTR_UART5RST_Pos         (20UL)                    /*!< UART5RST (Bit 20)                                     */
#define RCC_APB1RSTR_UART5RST_Msk         (0x100000UL)              /*!< UART5RST (Bitfield-Mask: 0x01)                        */
#define RCC_APB1RSTR_I2C1RST_Pos          (21UL)                    /*!< I2C1RST (Bit 21)                                      */
#define RCC_APB1RSTR_I2C1RST_Msk          (0x200000UL)              /*!< I2C1RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_I2C2RST_Pos          (22UL)                    /*!< I2C2RST (Bit 22)                                      */
#define RCC_APB1RSTR_I2C2RST_Msk          (0x400000UL)              /*!< I2C2RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_I2C3RST_Pos          (23UL)                    /*!< I2C3RST (Bit 23)                                      */
#define RCC_APB1RSTR_I2C3RST_Msk          (0x800000UL)              /*!< I2C3RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_CAN1RST_Pos          (25UL)                    /*!< CAN1RST (Bit 25)                                      */
#define RCC_APB1RSTR_CAN1RST_Msk          (0x2000000UL)             /*!< CAN1RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_CAN2RST_Pos          (26UL)                    /*!< CAN2RST (Bit 26)                                      */
#define RCC_APB1RSTR_CAN2RST_Msk          (0x4000000UL)             /*!< CAN2RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB1RSTR_PWRRST_Pos           (28UL)                    /*!< PWRRST (Bit 28)                                       */
#define RCC_APB1RSTR_PWRRST_Msk           (0x10000000UL)            /*!< PWRRST (Bitfield-Mask: 0x01)                          */
#define RCC_APB1RSTR_DACRST_Pos           (29UL)                    /*!< DACRST (Bit 29)                                       */
#define RCC_APB1RSTR_DACRST_Msk           (0x20000000UL)            /*!< DACRST (Bitfield-Mask: 0x01)                          */
#define RCC_APB1RSTR_UART7RST_Pos         (30UL)                    /*!< UART7RST (Bit 30)                                     */
#define RCC_APB1RSTR_UART7RST_Msk         (0x40000000UL)            /*!< UART7RST (Bitfield-Mask: 0x01)                        */
#define RCC_APB1RSTR_UART8RST_Pos         (31UL)                    /*!< UART8RST (Bit 31)                                     */
#define RCC_APB1RSTR_UART8RST_Msk         (0x80000000UL)            /*!< UART8RST (Bitfield-Mask: 0x01)                        */
#define RCC_APB1RSTR_SPDIFRXRST_Pos       (16UL)                    /*!< SPDIFRXRST (Bit 16)                                   */
#define RCC_APB1RSTR_SPDIFRXRST_Msk       (0x10000UL)               /*!< SPDIFRXRST (Bitfield-Mask: 0x01)                      */
#define RCC_APB1RSTR_CECRST_Pos           (27UL)                    /*!< CECRST (Bit 27)                                       */
#define RCC_APB1RSTR_CECRST_Msk           (0x8000000UL)             /*!< CECRST (Bitfield-Mask: 0x01)                          */
#define RCC_APB1RSTR_LPTIM1RST_Pos        (9UL)                     /*!< LPTIM1RST (Bit 9)                                     */
#define RCC_APB1RSTR_LPTIM1RST_Msk        (0x200UL)                 /*!< LPTIM1RST (Bitfield-Mask: 0x01)                       */
#define RCC_APB1RSTR_I2C4RST_Pos          (24UL)                    /*!< I2C4RST (Bit 24)                                      */
#define RCC_APB1RSTR_I2C4RST_Msk          (0x1000000UL)             /*!< I2C4RST (Bitfield-Mask: 0x01)                         */
/* =======================================================  APB2RSTR  ======================================================== */
#define RCC_APB2RSTR_TIM1RST_Pos          (0UL)                     /*!< TIM1RST (Bit 0)                                       */
#define RCC_APB2RSTR_TIM1RST_Msk          (0x1UL)                   /*!< TIM1RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB2RSTR_TIM8RST_Pos          (1UL)                     /*!< TIM8RST (Bit 1)                                       */
#define RCC_APB2RSTR_TIM8RST_Msk          (0x2UL)                   /*!< TIM8RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB2RSTR_USART1RST_Pos        (4UL)                     /*!< USART1RST (Bit 4)                                     */
#define RCC_APB2RSTR_USART1RST_Msk        (0x10UL)                  /*!< USART1RST (Bitfield-Mask: 0x01)                       */
#define RCC_APB2RSTR_USART6RST_Pos        (5UL)                     /*!< USART6RST (Bit 5)                                     */
#define RCC_APB2RSTR_USART6RST_Msk        (0x20UL)                  /*!< USART6RST (Bitfield-Mask: 0x01)                       */
#define RCC_APB2RSTR_ADCRST_Pos           (8UL)                     /*!< ADCRST (Bit 8)                                        */
#define RCC_APB2RSTR_ADCRST_Msk           (0x100UL)                 /*!< ADCRST (Bitfield-Mask: 0x01)                          */
#define RCC_APB2RSTR_SPI1RST_Pos          (12UL)                    /*!< SPI1RST (Bit 12)                                      */
#define RCC_APB2RSTR_SPI1RST_Msk          (0x1000UL)                /*!< SPI1RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB2RSTR_SPI4RST_Pos          (13UL)                    /*!< SPI4RST (Bit 13)                                      */
#define RCC_APB2RSTR_SPI4RST_Msk          (0x2000UL)                /*!< SPI4RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB2RSTR_SYSCFGRST_Pos        (14UL)                    /*!< SYSCFGRST (Bit 14)                                    */
#define RCC_APB2RSTR_SYSCFGRST_Msk        (0x4000UL)                /*!< SYSCFGRST (Bitfield-Mask: 0x01)                       */
#define RCC_APB2RSTR_TIM9RST_Pos          (16UL)                    /*!< TIM9RST (Bit 16)                                      */
#define RCC_APB2RSTR_TIM9RST_Msk          (0x10000UL)               /*!< TIM9RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB2RSTR_TIM10RST_Pos         (17UL)                    /*!< TIM10RST (Bit 17)                                     */
#define RCC_APB2RSTR_TIM10RST_Msk         (0x20000UL)               /*!< TIM10RST (Bitfield-Mask: 0x01)                        */
#define RCC_APB2RSTR_TIM11RST_Pos         (18UL)                    /*!< TIM11RST (Bit 18)                                     */
#define RCC_APB2RSTR_TIM11RST_Msk         (0x40000UL)               /*!< TIM11RST (Bitfield-Mask: 0x01)                        */
#define RCC_APB2RSTR_SPI5RST_Pos          (20UL)                    /*!< SPI5RST (Bit 20)                                      */
#define RCC_APB2RSTR_SPI5RST_Msk          (0x100000UL)              /*!< SPI5RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB2RSTR_SPI6RST_Pos          (21UL)                    /*!< SPI6RST (Bit 21)                                      */
#define RCC_APB2RSTR_SPI6RST_Msk          (0x200000UL)              /*!< SPI6RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB2RSTR_SAI1RST_Pos          (22UL)                    /*!< SAI1RST (Bit 22)                                      */
#define RCC_APB2RSTR_SAI1RST_Msk          (0x400000UL)              /*!< SAI1RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB2RSTR_LTDCRST_Pos          (26UL)                    /*!< LTDCRST (Bit 26)                                      */
#define RCC_APB2RSTR_LTDCRST_Msk          (0x4000000UL)             /*!< LTDCRST (Bitfield-Mask: 0x01)                         */
#define RCC_APB2RSTR_SAI2RST_Pos          (23UL)                    /*!< SAI2RST (Bit 23)                                      */
#define RCC_APB2RSTR_SAI2RST_Msk          (0x800000UL)              /*!< SAI2RST (Bitfield-Mask: 0x01)                         */
#define RCC_APB2RSTR_SDMMC1RST_Pos        (11UL)                    /*!< SDMMC1RST (Bit 11)                                    */
#define RCC_APB2RSTR_SDMMC1RST_Msk        (0x800UL)                 /*!< SDMMC1RST (Bitfield-Mask: 0x01)                       */
/* ========================================================  AHB1ENR  ======================================================== */
#define RCC_AHB1ENR_OTGHSULPIEN_Pos       (30UL)                    /*!< OTGHSULPIEN (Bit 30)                                  */
#define RCC_AHB1ENR_OTGHSULPIEN_Msk       (0x40000000UL)            /*!< OTGHSULPIEN (Bitfield-Mask: 0x01)                     */
#define RCC_AHB1ENR_OTGHSEN_Pos           (29UL)                    /*!< OTGHSEN (Bit 29)                                      */
#define RCC_AHB1ENR_OTGHSEN_Msk           (0x20000000UL)            /*!< OTGHSEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_ETHMACPTPEN_Pos       (28UL)                    /*!< ETHMACPTPEN (Bit 28)                                  */
#define RCC_AHB1ENR_ETHMACPTPEN_Msk       (0x10000000UL)            /*!< ETHMACPTPEN (Bitfield-Mask: 0x01)                     */
#define RCC_AHB1ENR_ETHMACRXEN_Pos        (27UL)                    /*!< ETHMACRXEN (Bit 27)                                   */
#define RCC_AHB1ENR_ETHMACRXEN_Msk        (0x8000000UL)             /*!< ETHMACRXEN (Bitfield-Mask: 0x01)                      */
#define RCC_AHB1ENR_ETHMACTXEN_Pos        (26UL)                    /*!< ETHMACTXEN (Bit 26)                                   */
#define RCC_AHB1ENR_ETHMACTXEN_Msk        (0x4000000UL)             /*!< ETHMACTXEN (Bitfield-Mask: 0x01)                      */
#define RCC_AHB1ENR_ETHMACEN_Pos          (25UL)                    /*!< ETHMACEN (Bit 25)                                     */
#define RCC_AHB1ENR_ETHMACEN_Msk          (0x2000000UL)             /*!< ETHMACEN (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1ENR_DMA2DEN_Pos           (23UL)                    /*!< DMA2DEN (Bit 23)                                      */
#define RCC_AHB1ENR_DMA2DEN_Msk           (0x800000UL)              /*!< DMA2DEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_DMA2EN_Pos            (22UL)                    /*!< DMA2EN (Bit 22)                                       */
#define RCC_AHB1ENR_DMA2EN_Msk            (0x400000UL)              /*!< DMA2EN (Bitfield-Mask: 0x01)                          */
#define RCC_AHB1ENR_DMA1EN_Pos            (21UL)                    /*!< DMA1EN (Bit 21)                                       */
#define RCC_AHB1ENR_DMA1EN_Msk            (0x200000UL)              /*!< DMA1EN (Bitfield-Mask: 0x01)                          */
#define RCC_AHB1ENR_CCMDATARAMEN_Pos      (20UL)                    /*!< CCMDATARAMEN (Bit 20)                                 */
#define RCC_AHB1ENR_CCMDATARAMEN_Msk      (0x100000UL)              /*!< CCMDATARAMEN (Bitfield-Mask: 0x01)                    */
#define RCC_AHB1ENR_BKPSRAMEN_Pos         (18UL)                    /*!< BKPSRAMEN (Bit 18)                                    */
#define RCC_AHB1ENR_BKPSRAMEN_Msk         (0x40000UL)               /*!< BKPSRAMEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1ENR_CRCEN_Pos             (12UL)                    /*!< CRCEN (Bit 12)                                        */
#define RCC_AHB1ENR_CRCEN_Msk             (0x1000UL)                /*!< CRCEN (Bitfield-Mask: 0x01)                           */
#define RCC_AHB1ENR_GPIOKEN_Pos           (10UL)                    /*!< GPIOKEN (Bit 10)                                      */
#define RCC_AHB1ENR_GPIOKEN_Msk           (0x400UL)                 /*!< GPIOKEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_GPIOJEN_Pos           (9UL)                     /*!< GPIOJEN (Bit 9)                                       */
#define RCC_AHB1ENR_GPIOJEN_Msk           (0x200UL)                 /*!< GPIOJEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_GPIOIEN_Pos           (8UL)                     /*!< GPIOIEN (Bit 8)                                       */
#define RCC_AHB1ENR_GPIOIEN_Msk           (0x100UL)                 /*!< GPIOIEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_GPIOHEN_Pos           (7UL)                     /*!< GPIOHEN (Bit 7)                                       */
#define RCC_AHB1ENR_GPIOHEN_Msk           (0x80UL)                  /*!< GPIOHEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_GPIOGEN_Pos           (6UL)                     /*!< GPIOGEN (Bit 6)                                       */
#define RCC_AHB1ENR_GPIOGEN_Msk           (0x40UL)                  /*!< GPIOGEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_GPIOFEN_Pos           (5UL)                     /*!< GPIOFEN (Bit 5)                                       */
#define RCC_AHB1ENR_GPIOFEN_Msk           (0x20UL)                  /*!< GPIOFEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_GPIOEEN_Pos           (4UL)                     /*!< GPIOEEN (Bit 4)                                       */
#define RCC_AHB1ENR_GPIOEEN_Msk           (0x10UL)                  /*!< GPIOEEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_GPIODEN_Pos           (3UL)                     /*!< GPIODEN (Bit 3)                                       */
#define RCC_AHB1ENR_GPIODEN_Msk           (0x8UL)                   /*!< GPIODEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_GPIOCEN_Pos           (2UL)                     /*!< GPIOCEN (Bit 2)                                       */
#define RCC_AHB1ENR_GPIOCEN_Msk           (0x4UL)                   /*!< GPIOCEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_GPIOBEN_Pos           (1UL)                     /*!< GPIOBEN (Bit 1)                                       */
#define RCC_AHB1ENR_GPIOBEN_Msk           (0x2UL)                   /*!< GPIOBEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1ENR_GPIOAEN_Pos           (0UL)                     /*!< GPIOAEN (Bit 0)                                       */
#define RCC_AHB1ENR_GPIOAEN_Msk           (0x1UL)                   /*!< GPIOAEN (Bitfield-Mask: 0x01)                         */
/* ========================================================  AHB2ENR  ======================================================== */
#define RCC_AHB2ENR_OTGFSEN_Pos           (7UL)                     /*!< OTGFSEN (Bit 7)                                       */
#define RCC_AHB2ENR_OTGFSEN_Msk           (0x80UL)                  /*!< OTGFSEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB2ENR_RNGEN_Pos             (6UL)                     /*!< RNGEN (Bit 6)                                         */
#define RCC_AHB2ENR_RNGEN_Msk             (0x40UL)                  /*!< RNGEN (Bitfield-Mask: 0x01)                           */
#define RCC_AHB2ENR_HASHEN_Pos            (5UL)                     /*!< HASHEN (Bit 5)                                        */
#define RCC_AHB2ENR_HASHEN_Msk            (0x20UL)                  /*!< HASHEN (Bitfield-Mask: 0x01)                          */
#define RCC_AHB2ENR_CRYPEN_Pos            (4UL)                     /*!< CRYPEN (Bit 4)                                        */
#define RCC_AHB2ENR_CRYPEN_Msk            (0x10UL)                  /*!< CRYPEN (Bitfield-Mask: 0x01)                          */
#define RCC_AHB2ENR_DCMIEN_Pos            (0UL)                     /*!< DCMIEN (Bit 0)                                        */
#define RCC_AHB2ENR_DCMIEN_Msk            (0x1UL)                   /*!< DCMIEN (Bitfield-Mask: 0x01)                          */
/* ========================================================  AHB3ENR  ======================================================== */
#define RCC_AHB3ENR_FMCEN_Pos             (0UL)                     /*!< FMCEN (Bit 0)                                         */
#define RCC_AHB3ENR_FMCEN_Msk             (0x1UL)                   /*!< FMCEN (Bitfield-Mask: 0x01)                           */
#define RCC_AHB3ENR_QSPIEN_Pos            (1UL)                     /*!< QSPIEN (Bit 1)                                        */
#define RCC_AHB3ENR_QSPIEN_Msk            (0x2UL)                   /*!< QSPIEN (Bitfield-Mask: 0x01)                          */
/* ========================================================  APB1ENR  ======================================================== */
#define RCC_APB1ENR_TIM2EN_Pos            (0UL)                     /*!< TIM2EN (Bit 0)                                        */
#define RCC_APB1ENR_TIM2EN_Msk            (0x1UL)                   /*!< TIM2EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_TIM3EN_Pos            (1UL)                     /*!< TIM3EN (Bit 1)                                        */
#define RCC_APB1ENR_TIM3EN_Msk            (0x2UL)                   /*!< TIM3EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_TIM4EN_Pos            (2UL)                     /*!< TIM4EN (Bit 2)                                        */
#define RCC_APB1ENR_TIM4EN_Msk            (0x4UL)                   /*!< TIM4EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_TIM5EN_Pos            (3UL)                     /*!< TIM5EN (Bit 3)                                        */
#define RCC_APB1ENR_TIM5EN_Msk            (0x8UL)                   /*!< TIM5EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_TIM6EN_Pos            (4UL)                     /*!< TIM6EN (Bit 4)                                        */
#define RCC_APB1ENR_TIM6EN_Msk            (0x10UL)                  /*!< TIM6EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_TIM7EN_Pos            (5UL)                     /*!< TIM7EN (Bit 5)                                        */
#define RCC_APB1ENR_TIM7EN_Msk            (0x20UL)                  /*!< TIM7EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_TIM12EN_Pos           (6UL)                     /*!< TIM12EN (Bit 6)                                       */
#define RCC_APB1ENR_TIM12EN_Msk           (0x40UL)                  /*!< TIM12EN (Bitfield-Mask: 0x01)                         */
#define RCC_APB1ENR_TIM13EN_Pos           (7UL)                     /*!< TIM13EN (Bit 7)                                       */
#define RCC_APB1ENR_TIM13EN_Msk           (0x80UL)                  /*!< TIM13EN (Bitfield-Mask: 0x01)                         */
#define RCC_APB1ENR_TIM14EN_Pos           (8UL)                     /*!< TIM14EN (Bit 8)                                       */
#define RCC_APB1ENR_TIM14EN_Msk           (0x100UL)                 /*!< TIM14EN (Bitfield-Mask: 0x01)                         */
#define RCC_APB1ENR_WWDGEN_Pos            (11UL)                    /*!< WWDGEN (Bit 11)                                       */
#define RCC_APB1ENR_WWDGEN_Msk            (0x800UL)                 /*!< WWDGEN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_SPI2EN_Pos            (14UL)                    /*!< SPI2EN (Bit 14)                                       */
#define RCC_APB1ENR_SPI2EN_Msk            (0x4000UL)                /*!< SPI2EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_SPI3EN_Pos            (15UL)                    /*!< SPI3EN (Bit 15)                                       */
#define RCC_APB1ENR_SPI3EN_Msk            (0x8000UL)                /*!< SPI3EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_USART2EN_Pos          (17UL)                    /*!< USART2EN (Bit 17)                                     */
#define RCC_APB1ENR_USART2EN_Msk          (0x20000UL)               /*!< USART2EN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1ENR_USART3EN_Pos          (18UL)                    /*!< USART3EN (Bit 18)                                     */
#define RCC_APB1ENR_USART3EN_Msk          (0x40000UL)               /*!< USART3EN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1ENR_UART4EN_Pos           (19UL)                    /*!< UART4EN (Bit 19)                                      */
#define RCC_APB1ENR_UART4EN_Msk           (0x80000UL)               /*!< UART4EN (Bitfield-Mask: 0x01)                         */
#define RCC_APB1ENR_UART5EN_Pos           (20UL)                    /*!< UART5EN (Bit 20)                                      */
#define RCC_APB1ENR_UART5EN_Msk           (0x100000UL)              /*!< UART5EN (Bitfield-Mask: 0x01)                         */
#define RCC_APB1ENR_I2C1EN_Pos            (21UL)                    /*!< I2C1EN (Bit 21)                                       */
#define RCC_APB1ENR_I2C1EN_Msk            (0x200000UL)              /*!< I2C1EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_I2C2EN_Pos            (22UL)                    /*!< I2C2EN (Bit 22)                                       */
#define RCC_APB1ENR_I2C2EN_Msk            (0x400000UL)              /*!< I2C2EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_I2C3EN_Pos            (23UL)                    /*!< I2C3EN (Bit 23)                                       */
#define RCC_APB1ENR_I2C3EN_Msk            (0x800000UL)              /*!< I2C3EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_CAN1EN_Pos            (25UL)                    /*!< CAN1EN (Bit 25)                                       */
#define RCC_APB1ENR_CAN1EN_Msk            (0x2000000UL)             /*!< CAN1EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_CAN2EN_Pos            (26UL)                    /*!< CAN2EN (Bit 26)                                       */
#define RCC_APB1ENR_CAN2EN_Msk            (0x4000000UL)             /*!< CAN2EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB1ENR_PWREN_Pos             (28UL)                    /*!< PWREN (Bit 28)                                        */
#define RCC_APB1ENR_PWREN_Msk             (0x10000000UL)            /*!< PWREN (Bitfield-Mask: 0x01)                           */
#define RCC_APB1ENR_DACEN_Pos             (29UL)                    /*!< DACEN (Bit 29)                                        */
#define RCC_APB1ENR_DACEN_Msk             (0x20000000UL)            /*!< DACEN (Bitfield-Mask: 0x01)                           */
#define RCC_APB1ENR_UART7ENR_Pos          (30UL)                    /*!< UART7ENR (Bit 30)                                     */
#define RCC_APB1ENR_UART7ENR_Msk          (0x40000000UL)            /*!< UART7ENR (Bitfield-Mask: 0x01)                        */
#define RCC_APB1ENR_UART8ENR_Pos          (31UL)                    /*!< UART8ENR (Bit 31)                                     */
#define RCC_APB1ENR_UART8ENR_Msk          (0x80000000UL)            /*!< UART8ENR (Bitfield-Mask: 0x01)                        */
#define RCC_APB1ENR_SPDIFRXEN_Pos         (16UL)                    /*!< SPDIFRXEN (Bit 16)                                    */
#define RCC_APB1ENR_SPDIFRXEN_Msk         (0x10000UL)               /*!< SPDIFRXEN (Bitfield-Mask: 0x01)                       */
#define RCC_APB1ENR_CECEN_Pos             (27UL)                    /*!< CECEN (Bit 27)                                        */
#define RCC_APB1ENR_CECEN_Msk             (0x8000000UL)             /*!< CECEN (Bitfield-Mask: 0x01)                           */
#define RCC_APB1ENR_LPTMI1EN_Pos          (9UL)                     /*!< LPTMI1EN (Bit 9)                                      */
#define RCC_APB1ENR_LPTMI1EN_Msk          (0x200UL)                 /*!< LPTMI1EN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1ENR_I2C4EN_Pos            (24UL)                    /*!< I2C4EN (Bit 24)                                       */
#define RCC_APB1ENR_I2C4EN_Msk            (0x1000000UL)             /*!< I2C4EN (Bitfield-Mask: 0x01)                          */
/* ========================================================  APB2ENR  ======================================================== */
#define RCC_APB2ENR_TIM1EN_Pos            (0UL)                     /*!< TIM1EN (Bit 0)                                        */
#define RCC_APB2ENR_TIM1EN_Msk            (0x1UL)                   /*!< TIM1EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB2ENR_TIM8EN_Pos            (1UL)                     /*!< TIM8EN (Bit 1)                                        */
#define RCC_APB2ENR_TIM8EN_Msk            (0x2UL)                   /*!< TIM8EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB2ENR_USART1EN_Pos          (4UL)                     /*!< USART1EN (Bit 4)                                      */
#define RCC_APB2ENR_USART1EN_Msk          (0x10UL)                  /*!< USART1EN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2ENR_USART6EN_Pos          (5UL)                     /*!< USART6EN (Bit 5)                                      */
#define RCC_APB2ENR_USART6EN_Msk          (0x20UL)                  /*!< USART6EN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2ENR_ADC1EN_Pos            (8UL)                     /*!< ADC1EN (Bit 8)                                        */
#define RCC_APB2ENR_ADC1EN_Msk            (0x100UL)                 /*!< ADC1EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB2ENR_ADC2EN_Pos            (9UL)                     /*!< ADC2EN (Bit 9)                                        */
#define RCC_APB2ENR_ADC2EN_Msk            (0x200UL)                 /*!< ADC2EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB2ENR_ADC3EN_Pos            (10UL)                    /*!< ADC3EN (Bit 10)                                       */
#define RCC_APB2ENR_ADC3EN_Msk            (0x400UL)                 /*!< ADC3EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB2ENR_SPI1EN_Pos            (12UL)                    /*!< SPI1EN (Bit 12)                                       */
#define RCC_APB2ENR_SPI1EN_Msk            (0x1000UL)                /*!< SPI1EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB2ENR_SPI4ENR_Pos           (13UL)                    /*!< SPI4ENR (Bit 13)                                      */
#define RCC_APB2ENR_SPI4ENR_Msk           (0x2000UL)                /*!< SPI4ENR (Bitfield-Mask: 0x01)                         */
#define RCC_APB2ENR_SYSCFGEN_Pos          (14UL)                    /*!< SYSCFGEN (Bit 14)                                     */
#define RCC_APB2ENR_SYSCFGEN_Msk          (0x4000UL)                /*!< SYSCFGEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2ENR_TIM9EN_Pos            (16UL)                    /*!< TIM9EN (Bit 16)                                       */
#define RCC_APB2ENR_TIM9EN_Msk            (0x10000UL)               /*!< TIM9EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB2ENR_TIM10EN_Pos           (17UL)                    /*!< TIM10EN (Bit 17)                                      */
#define RCC_APB2ENR_TIM10EN_Msk           (0x20000UL)               /*!< TIM10EN (Bitfield-Mask: 0x01)                         */
#define RCC_APB2ENR_TIM11EN_Pos           (18UL)                    /*!< TIM11EN (Bit 18)                                      */
#define RCC_APB2ENR_TIM11EN_Msk           (0x40000UL)               /*!< TIM11EN (Bitfield-Mask: 0x01)                         */
#define RCC_APB2ENR_SPI5ENR_Pos           (20UL)                    /*!< SPI5ENR (Bit 20)                                      */
#define RCC_APB2ENR_SPI5ENR_Msk           (0x100000UL)              /*!< SPI5ENR (Bitfield-Mask: 0x01)                         */
#define RCC_APB2ENR_SPI6ENR_Pos           (21UL)                    /*!< SPI6ENR (Bit 21)                                      */
#define RCC_APB2ENR_SPI6ENR_Msk           (0x200000UL)              /*!< SPI6ENR (Bitfield-Mask: 0x01)                         */
#define RCC_APB2ENR_SAI1EN_Pos            (22UL)                    /*!< SAI1EN (Bit 22)                                       */
#define RCC_APB2ENR_SAI1EN_Msk            (0x400000UL)              /*!< SAI1EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB2ENR_LTDCEN_Pos            (26UL)                    /*!< LTDCEN (Bit 26)                                       */
#define RCC_APB2ENR_LTDCEN_Msk            (0x4000000UL)             /*!< LTDCEN (Bitfield-Mask: 0x01)                          */
#define RCC_APB2ENR_SAI2EN_Pos            (23UL)                    /*!< SAI2EN (Bit 23)                                       */
#define RCC_APB2ENR_SAI2EN_Msk            (0x800000UL)              /*!< SAI2EN (Bitfield-Mask: 0x01)                          */
#define RCC_APB2ENR_SDMMC1EN_Pos          (11UL)                    /*!< SDMMC1EN (Bit 11)                                     */
#define RCC_APB2ENR_SDMMC1EN_Msk          (0x800UL)                 /*!< SDMMC1EN (Bitfield-Mask: 0x01)                        */
/* =======================================================  AHB1LPENR  ======================================================= */
#define RCC_AHB1LPENR_GPIOALPEN_Pos       (0UL)                     /*!< GPIOALPEN (Bit 0)                                     */
#define RCC_AHB1LPENR_GPIOALPEN_Msk       (0x1UL)                   /*!< GPIOALPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_GPIOBLPEN_Pos       (1UL)                     /*!< GPIOBLPEN (Bit 1)                                     */
#define RCC_AHB1LPENR_GPIOBLPEN_Msk       (0x2UL)                   /*!< GPIOBLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_GPIOCLPEN_Pos       (2UL)                     /*!< GPIOCLPEN (Bit 2)                                     */
#define RCC_AHB1LPENR_GPIOCLPEN_Msk       (0x4UL)                   /*!< GPIOCLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_GPIODLPEN_Pos       (3UL)                     /*!< GPIODLPEN (Bit 3)                                     */
#define RCC_AHB1LPENR_GPIODLPEN_Msk       (0x8UL)                   /*!< GPIODLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_GPIOELPEN_Pos       (4UL)                     /*!< GPIOELPEN (Bit 4)                                     */
#define RCC_AHB1LPENR_GPIOELPEN_Msk       (0x10UL)                  /*!< GPIOELPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_GPIOFLPEN_Pos       (5UL)                     /*!< GPIOFLPEN (Bit 5)                                     */
#define RCC_AHB1LPENR_GPIOFLPEN_Msk       (0x20UL)                  /*!< GPIOFLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_GPIOGLPEN_Pos       (6UL)                     /*!< GPIOGLPEN (Bit 6)                                     */
#define RCC_AHB1LPENR_GPIOGLPEN_Msk       (0x40UL)                  /*!< GPIOGLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_GPIOHLPEN_Pos       (7UL)                     /*!< GPIOHLPEN (Bit 7)                                     */
#define RCC_AHB1LPENR_GPIOHLPEN_Msk       (0x80UL)                  /*!< GPIOHLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_GPIOILPEN_Pos       (8UL)                     /*!< GPIOILPEN (Bit 8)                                     */
#define RCC_AHB1LPENR_GPIOILPEN_Msk       (0x100UL)                 /*!< GPIOILPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_GPIOJLPEN_Pos       (9UL)                     /*!< GPIOJLPEN (Bit 9)                                     */
#define RCC_AHB1LPENR_GPIOJLPEN_Msk       (0x200UL)                 /*!< GPIOJLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_GPIOKLPEN_Pos       (10UL)                    /*!< GPIOKLPEN (Bit 10)                                    */
#define RCC_AHB1LPENR_GPIOKLPEN_Msk       (0x400UL)                 /*!< GPIOKLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_CRCLPEN_Pos         (12UL)                    /*!< CRCLPEN (Bit 12)                                      */
#define RCC_AHB1LPENR_CRCLPEN_Msk         (0x1000UL)                /*!< CRCLPEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB1LPENR_FLITFLPEN_Pos       (15UL)                    /*!< FLITFLPEN (Bit 15)                                    */
#define RCC_AHB1LPENR_FLITFLPEN_Msk       (0x8000UL)                /*!< FLITFLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_SRAM1LPEN_Pos       (16UL)                    /*!< SRAM1LPEN (Bit 16)                                    */
#define RCC_AHB1LPENR_SRAM1LPEN_Msk       (0x10000UL)               /*!< SRAM1LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_SRAM2LPEN_Pos       (17UL)                    /*!< SRAM2LPEN (Bit 17)                                    */
#define RCC_AHB1LPENR_SRAM2LPEN_Msk       (0x20000UL)               /*!< SRAM2LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_BKPSRAMLPEN_Pos     (18UL)                    /*!< BKPSRAMLPEN (Bit 18)                                  */
#define RCC_AHB1LPENR_BKPSRAMLPEN_Msk     (0x40000UL)               /*!< BKPSRAMLPEN (Bitfield-Mask: 0x01)                     */
#define RCC_AHB1LPENR_SRAM3LPEN_Pos       (19UL)                    /*!< SRAM3LPEN (Bit 19)                                    */
#define RCC_AHB1LPENR_SRAM3LPEN_Msk       (0x80000UL)               /*!< SRAM3LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_DMA1LPEN_Pos        (21UL)                    /*!< DMA1LPEN (Bit 21)                                     */
#define RCC_AHB1LPENR_DMA1LPEN_Msk        (0x200000UL)              /*!< DMA1LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1LPENR_DMA2LPEN_Pos        (22UL)                    /*!< DMA2LPEN (Bit 22)                                     */
#define RCC_AHB1LPENR_DMA2LPEN_Msk        (0x400000UL)              /*!< DMA2LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_AHB1LPENR_DMA2DLPEN_Pos       (23UL)                    /*!< DMA2DLPEN (Bit 23)                                    */
#define RCC_AHB1LPENR_DMA2DLPEN_Msk       (0x800000UL)              /*!< DMA2DLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_ETHMACLPEN_Pos      (25UL)                    /*!< ETHMACLPEN (Bit 25)                                   */
#define RCC_AHB1LPENR_ETHMACLPEN_Msk      (0x2000000UL)             /*!< ETHMACLPEN (Bitfield-Mask: 0x01)                      */
#define RCC_AHB1LPENR_ETHMACTXLPEN_Pos    (26UL)                    /*!< ETHMACTXLPEN (Bit 26)                                 */
#define RCC_AHB1LPENR_ETHMACTXLPEN_Msk    (0x4000000UL)             /*!< ETHMACTXLPEN (Bitfield-Mask: 0x01)                    */
#define RCC_AHB1LPENR_ETHMACRXLPEN_Pos    (27UL)                    /*!< ETHMACRXLPEN (Bit 27)                                 */
#define RCC_AHB1LPENR_ETHMACRXLPEN_Msk    (0x8000000UL)             /*!< ETHMACRXLPEN (Bitfield-Mask: 0x01)                    */
#define RCC_AHB1LPENR_ETHMACPTPLPEN_Pos   (28UL)                    /*!< ETHMACPTPLPEN (Bit 28)                                */
#define RCC_AHB1LPENR_ETHMACPTPLPEN_Msk   (0x10000000UL)            /*!< ETHMACPTPLPEN (Bitfield-Mask: 0x01)                   */
#define RCC_AHB1LPENR_OTGHSLPEN_Pos       (29UL)                    /*!< OTGHSLPEN (Bit 29)                                    */
#define RCC_AHB1LPENR_OTGHSLPEN_Msk       (0x20000000UL)            /*!< OTGHSLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB1LPENR_OTGHSULPILPEN_Pos   (30UL)                    /*!< OTGHSULPILPEN (Bit 30)                                */
#define RCC_AHB1LPENR_OTGHSULPILPEN_Msk   (0x40000000UL)            /*!< OTGHSULPILPEN (Bitfield-Mask: 0x01)                   */
/* =======================================================  AHB2LPENR  ======================================================= */
#define RCC_AHB2LPENR_OTGFSLPEN_Pos       (7UL)                     /*!< OTGFSLPEN (Bit 7)                                     */
#define RCC_AHB2LPENR_OTGFSLPEN_Msk       (0x80UL)                  /*!< OTGFSLPEN (Bitfield-Mask: 0x01)                       */
#define RCC_AHB2LPENR_RNGLPEN_Pos         (6UL)                     /*!< RNGLPEN (Bit 6)                                       */
#define RCC_AHB2LPENR_RNGLPEN_Msk         (0x40UL)                  /*!< RNGLPEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB2LPENR_HASHLPEN_Pos        (5UL)                     /*!< HASHLPEN (Bit 5)                                      */
#define RCC_AHB2LPENR_HASHLPEN_Msk        (0x20UL)                  /*!< HASHLPEN (Bitfield-Mask: 0x01)                        */
#define RCC_AHB2LPENR_CRYPLPEN_Pos        (4UL)                     /*!< CRYPLPEN (Bit 4)                                      */
#define RCC_AHB2LPENR_CRYPLPEN_Msk        (0x10UL)                  /*!< CRYPLPEN (Bitfield-Mask: 0x01)                        */
#define RCC_AHB2LPENR_DCMILPEN_Pos        (0UL)                     /*!< DCMILPEN (Bit 0)                                      */
#define RCC_AHB2LPENR_DCMILPEN_Msk        (0x1UL)                   /*!< DCMILPEN (Bitfield-Mask: 0x01)                        */
/* =======================================================  AHB3LPENR  ======================================================= */
#define RCC_AHB3LPENR_FMCLPEN_Pos         (0UL)                     /*!< FMCLPEN (Bit 0)                                       */
#define RCC_AHB3LPENR_FMCLPEN_Msk         (0x1UL)                   /*!< FMCLPEN (Bitfield-Mask: 0x01)                         */
#define RCC_AHB3LPENR_QSPILPEN_Pos        (1UL)                     /*!< QSPILPEN (Bit 1)                                      */
#define RCC_AHB3LPENR_QSPILPEN_Msk        (0x2UL)                   /*!< QSPILPEN (Bitfield-Mask: 0x01)                        */
/* =======================================================  APB1LPENR  ======================================================= */
#define RCC_APB1LPENR_TIM2LPEN_Pos        (0UL)                     /*!< TIM2LPEN (Bit 0)                                      */
#define RCC_APB1LPENR_TIM2LPEN_Msk        (0x1UL)                   /*!< TIM2LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_TIM3LPEN_Pos        (1UL)                     /*!< TIM3LPEN (Bit 1)                                      */
#define RCC_APB1LPENR_TIM3LPEN_Msk        (0x2UL)                   /*!< TIM3LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_TIM4LPEN_Pos        (2UL)                     /*!< TIM4LPEN (Bit 2)                                      */
#define RCC_APB1LPENR_TIM4LPEN_Msk        (0x4UL)                   /*!< TIM4LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_TIM5LPEN_Pos        (3UL)                     /*!< TIM5LPEN (Bit 3)                                      */
#define RCC_APB1LPENR_TIM5LPEN_Msk        (0x8UL)                   /*!< TIM5LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_TIM6LPEN_Pos        (4UL)                     /*!< TIM6LPEN (Bit 4)                                      */
#define RCC_APB1LPENR_TIM6LPEN_Msk        (0x10UL)                  /*!< TIM6LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_TIM7LPEN_Pos        (5UL)                     /*!< TIM7LPEN (Bit 5)                                      */
#define RCC_APB1LPENR_TIM7LPEN_Msk        (0x20UL)                  /*!< TIM7LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_TIM12LPEN_Pos       (6UL)                     /*!< TIM12LPEN (Bit 6)                                     */
#define RCC_APB1LPENR_TIM12LPEN_Msk       (0x40UL)                  /*!< TIM12LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_APB1LPENR_TIM13LPEN_Pos       (7UL)                     /*!< TIM13LPEN (Bit 7)                                     */
#define RCC_APB1LPENR_TIM13LPEN_Msk       (0x80UL)                  /*!< TIM13LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_APB1LPENR_TIM14LPEN_Pos       (8UL)                     /*!< TIM14LPEN (Bit 8)                                     */
#define RCC_APB1LPENR_TIM14LPEN_Msk       (0x100UL)                 /*!< TIM14LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_APB1LPENR_WWDGLPEN_Pos        (11UL)                    /*!< WWDGLPEN (Bit 11)                                     */
#define RCC_APB1LPENR_WWDGLPEN_Msk        (0x800UL)                 /*!< WWDGLPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_SPI2LPEN_Pos        (14UL)                    /*!< SPI2LPEN (Bit 14)                                     */
#define RCC_APB1LPENR_SPI2LPEN_Msk        (0x4000UL)                /*!< SPI2LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_SPI3LPEN_Pos        (15UL)                    /*!< SPI3LPEN (Bit 15)                                     */
#define RCC_APB1LPENR_SPI3LPEN_Msk        (0x8000UL)                /*!< SPI3LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_USART2LPEN_Pos      (17UL)                    /*!< USART2LPEN (Bit 17)                                   */
#define RCC_APB1LPENR_USART2LPEN_Msk      (0x20000UL)               /*!< USART2LPEN (Bitfield-Mask: 0x01)                      */
#define RCC_APB1LPENR_USART3LPEN_Pos      (18UL)                    /*!< USART3LPEN (Bit 18)                                   */
#define RCC_APB1LPENR_USART3LPEN_Msk      (0x40000UL)               /*!< USART3LPEN (Bitfield-Mask: 0x01)                      */
#define RCC_APB1LPENR_UART4LPEN_Pos       (19UL)                    /*!< UART4LPEN (Bit 19)                                    */
#define RCC_APB1LPENR_UART4LPEN_Msk       (0x80000UL)               /*!< UART4LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_APB1LPENR_UART5LPEN_Pos       (20UL)                    /*!< UART5LPEN (Bit 20)                                    */
#define RCC_APB1LPENR_UART5LPEN_Msk       (0x100000UL)              /*!< UART5LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_APB1LPENR_I2C1LPEN_Pos        (21UL)                    /*!< I2C1LPEN (Bit 21)                                     */
#define RCC_APB1LPENR_I2C1LPEN_Msk        (0x200000UL)              /*!< I2C1LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_I2C2LPEN_Pos        (22UL)                    /*!< I2C2LPEN (Bit 22)                                     */
#define RCC_APB1LPENR_I2C2LPEN_Msk        (0x400000UL)              /*!< I2C2LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_I2C3LPEN_Pos        (23UL)                    /*!< I2C3LPEN (Bit 23)                                     */
#define RCC_APB1LPENR_I2C3LPEN_Msk        (0x800000UL)              /*!< I2C3LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_CAN1LPEN_Pos        (25UL)                    /*!< CAN1LPEN (Bit 25)                                     */
#define RCC_APB1LPENR_CAN1LPEN_Msk        (0x2000000UL)             /*!< CAN1LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_CAN2LPEN_Pos        (26UL)                    /*!< CAN2LPEN (Bit 26)                                     */
#define RCC_APB1LPENR_CAN2LPEN_Msk        (0x4000000UL)             /*!< CAN2LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB1LPENR_PWRLPEN_Pos         (28UL)                    /*!< PWRLPEN (Bit 28)                                      */
#define RCC_APB1LPENR_PWRLPEN_Msk         (0x10000000UL)            /*!< PWRLPEN (Bitfield-Mask: 0x01)                         */
#define RCC_APB1LPENR_DACLPEN_Pos         (29UL)                    /*!< DACLPEN (Bit 29)                                      */
#define RCC_APB1LPENR_DACLPEN_Msk         (0x20000000UL)            /*!< DACLPEN (Bitfield-Mask: 0x01)                         */
#define RCC_APB1LPENR_UART7LPEN_Pos       (30UL)                    /*!< UART7LPEN (Bit 30)                                    */
#define RCC_APB1LPENR_UART7LPEN_Msk       (0x40000000UL)            /*!< UART7LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_APB1LPENR_UART8LPEN_Pos       (31UL)                    /*!< UART8LPEN (Bit 31)                                    */
#define RCC_APB1LPENR_UART8LPEN_Msk       (0x80000000UL)            /*!< UART8LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_APB1LPENR_SPDIFRXLPEN_Pos     (16UL)                    /*!< SPDIFRXLPEN (Bit 16)                                  */
#define RCC_APB1LPENR_SPDIFRXLPEN_Msk     (0x10000UL)               /*!< SPDIFRXLPEN (Bitfield-Mask: 0x01)                     */
#define RCC_APB1LPENR_CECLPEN_Pos         (27UL)                    /*!< CECLPEN (Bit 27)                                      */
#define RCC_APB1LPENR_CECLPEN_Msk         (0x8000000UL)             /*!< CECLPEN (Bitfield-Mask: 0x01)                         */
#define RCC_APB1LPENR_LPTIM1LPEN_Pos      (9UL)                     /*!< LPTIM1LPEN (Bit 9)                                    */
#define RCC_APB1LPENR_LPTIM1LPEN_Msk      (0x200UL)                 /*!< LPTIM1LPEN (Bitfield-Mask: 0x01)                      */
#define RCC_APB1LPENR_I2C4LPEN_Pos        (24UL)                    /*!< I2C4LPEN (Bit 24)                                     */
#define RCC_APB1LPENR_I2C4LPEN_Msk        (0x1000000UL)             /*!< I2C4LPEN (Bitfield-Mask: 0x01)                        */
/* =======================================================  APB2LPENR  ======================================================= */
#define RCC_APB2LPENR_TIM1LPEN_Pos        (0UL)                     /*!< TIM1LPEN (Bit 0)                                      */
#define RCC_APB2LPENR_TIM1LPEN_Msk        (0x1UL)                   /*!< TIM1LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_TIM8LPEN_Pos        (1UL)                     /*!< TIM8LPEN (Bit 1)                                      */
#define RCC_APB2LPENR_TIM8LPEN_Msk        (0x2UL)                   /*!< TIM8LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_USART1LPEN_Pos      (4UL)                     /*!< USART1LPEN (Bit 4)                                    */
#define RCC_APB2LPENR_USART1LPEN_Msk      (0x10UL)                  /*!< USART1LPEN (Bitfield-Mask: 0x01)                      */
#define RCC_APB2LPENR_USART6LPEN_Pos      (5UL)                     /*!< USART6LPEN (Bit 5)                                    */
#define RCC_APB2LPENR_USART6LPEN_Msk      (0x20UL)                  /*!< USART6LPEN (Bitfield-Mask: 0x01)                      */
#define RCC_APB2LPENR_ADC1LPEN_Pos        (8UL)                     /*!< ADC1LPEN (Bit 8)                                      */
#define RCC_APB2LPENR_ADC1LPEN_Msk        (0x100UL)                 /*!< ADC1LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_ADC2LPEN_Pos        (9UL)                     /*!< ADC2LPEN (Bit 9)                                      */
#define RCC_APB2LPENR_ADC2LPEN_Msk        (0x200UL)                 /*!< ADC2LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_ADC3LPEN_Pos        (10UL)                    /*!< ADC3LPEN (Bit 10)                                     */
#define RCC_APB2LPENR_ADC3LPEN_Msk        (0x400UL)                 /*!< ADC3LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_SPI1LPEN_Pos        (12UL)                    /*!< SPI1LPEN (Bit 12)                                     */
#define RCC_APB2LPENR_SPI1LPEN_Msk        (0x1000UL)                /*!< SPI1LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_SPI4LPEN_Pos        (13UL)                    /*!< SPI4LPEN (Bit 13)                                     */
#define RCC_APB2LPENR_SPI4LPEN_Msk        (0x2000UL)                /*!< SPI4LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_SYSCFGLPEN_Pos      (14UL)                    /*!< SYSCFGLPEN (Bit 14)                                   */
#define RCC_APB2LPENR_SYSCFGLPEN_Msk      (0x4000UL)                /*!< SYSCFGLPEN (Bitfield-Mask: 0x01)                      */
#define RCC_APB2LPENR_TIM9LPEN_Pos        (16UL)                    /*!< TIM9LPEN (Bit 16)                                     */
#define RCC_APB2LPENR_TIM9LPEN_Msk        (0x10000UL)               /*!< TIM9LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_TIM10LPEN_Pos       (17UL)                    /*!< TIM10LPEN (Bit 17)                                    */
#define RCC_APB2LPENR_TIM10LPEN_Msk       (0x20000UL)               /*!< TIM10LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_APB2LPENR_TIM11LPEN_Pos       (18UL)                    /*!< TIM11LPEN (Bit 18)                                    */
#define RCC_APB2LPENR_TIM11LPEN_Msk       (0x40000UL)               /*!< TIM11LPEN (Bitfield-Mask: 0x01)                       */
#define RCC_APB2LPENR_SPI5LPEN_Pos        (20UL)                    /*!< SPI5LPEN (Bit 20)                                     */
#define RCC_APB2LPENR_SPI5LPEN_Msk        (0x100000UL)              /*!< SPI5LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_SPI6LPEN_Pos        (21UL)                    /*!< SPI6LPEN (Bit 21)                                     */
#define RCC_APB2LPENR_SPI6LPEN_Msk        (0x200000UL)              /*!< SPI6LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_SAI1LPEN_Pos        (22UL)                    /*!< SAI1LPEN (Bit 22)                                     */
#define RCC_APB2LPENR_SAI1LPEN_Msk        (0x400000UL)              /*!< SAI1LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_LTDCLPEN_Pos        (26UL)                    /*!< LTDCLPEN (Bit 26)                                     */
#define RCC_APB2LPENR_LTDCLPEN_Msk        (0x4000000UL)             /*!< LTDCLPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_SAI2LPEN_Pos        (23UL)                    /*!< SAI2LPEN (Bit 23)                                     */
#define RCC_APB2LPENR_SAI2LPEN_Msk        (0x800000UL)              /*!< SAI2LPEN (Bitfield-Mask: 0x01)                        */
#define RCC_APB2LPENR_SDMMC1LPEN_Pos      (11UL)                    /*!< SDMMC1LPEN (Bit 11)                                   */
#define RCC_APB2LPENR_SDMMC1LPEN_Msk      (0x800UL)                 /*!< SDMMC1LPEN (Bitfield-Mask: 0x01)                      */
/* =========================================================  BDCR  ========================================================== */
#define RCC_BDCR_BDRST_Pos                (16UL)                    /*!< BDRST (Bit 16)                                        */
#define RCC_BDCR_BDRST_Msk                (0x10000UL)               /*!< BDRST (Bitfield-Mask: 0x01)                           */
#define RCC_BDCR_RTCEN_Pos                (15UL)                    /*!< RTCEN (Bit 15)                                        */
#define RCC_BDCR_RTCEN_Msk                (0x8000UL)                /*!< RTCEN (Bitfield-Mask: 0x01)                           */
#define RCC_BDCR_RTCSEL1_Pos              (9UL)                     /*!< RTCSEL1 (Bit 9)                                       */
#define RCC_BDCR_RTCSEL1_Msk              (0x200UL)                 /*!< RTCSEL1 (Bitfield-Mask: 0x01)                         */
#define RCC_BDCR_RTCSEL0_Pos              (8UL)                     /*!< RTCSEL0 (Bit 8)                                       */
#define RCC_BDCR_RTCSEL0_Msk              (0x100UL)                 /*!< RTCSEL0 (Bitfield-Mask: 0x01)                         */
#define RCC_BDCR_LSEBYP_Pos               (2UL)                     /*!< LSEBYP (Bit 2)                                        */
#define RCC_BDCR_LSEBYP_Msk               (0x4UL)                   /*!< LSEBYP (Bitfield-Mask: 0x01)                          */
#define RCC_BDCR_LSERDY_Pos               (1UL)                     /*!< LSERDY (Bit 1)                                        */
#define RCC_BDCR_LSERDY_Msk               (0x2UL)                   /*!< LSERDY (Bitfield-Mask: 0x01)                          */
#define RCC_BDCR_LSEON_Pos                (0UL)                     /*!< LSEON (Bit 0)                                         */
#define RCC_BDCR_LSEON_Msk                (0x1UL)                   /*!< LSEON (Bitfield-Mask: 0x01)                           */
/* ==========================================================  CSR  ========================================================== */
#define RCC_CSR_LPWRRSTF_Pos              (31UL)                    /*!< LPWRRSTF (Bit 31)                                     */
#define RCC_CSR_LPWRRSTF_Msk              (0x80000000UL)            /*!< LPWRRSTF (Bitfield-Mask: 0x01)                        */
#define RCC_CSR_WWDGRSTF_Pos              (30UL)                    /*!< WWDGRSTF (Bit 30)                                     */
#define RCC_CSR_WWDGRSTF_Msk              (0x40000000UL)            /*!< WWDGRSTF (Bitfield-Mask: 0x01)                        */
#define RCC_CSR_WDGRSTF_Pos               (29UL)                    /*!< WDGRSTF (Bit 29)                                      */
#define RCC_CSR_WDGRSTF_Msk               (0x20000000UL)            /*!< WDGRSTF (Bitfield-Mask: 0x01)                         */
#define RCC_CSR_SFTRSTF_Pos               (28UL)                    /*!< SFTRSTF (Bit 28)                                      */
#define RCC_CSR_SFTRSTF_Msk               (0x10000000UL)            /*!< SFTRSTF (Bitfield-Mask: 0x01)                         */
#define RCC_CSR_PORRSTF_Pos               (27UL)                    /*!< PORRSTF (Bit 27)                                      */
#define RCC_CSR_PORRSTF_Msk               (0x8000000UL)             /*!< PORRSTF (Bitfield-Mask: 0x01)                         */
#define RCC_CSR_PADRSTF_Pos               (26UL)                    /*!< PADRSTF (Bit 26)                                      */
#define RCC_CSR_PADRSTF_Msk               (0x4000000UL)             /*!< PADRSTF (Bitfield-Mask: 0x01)                         */
#define RCC_CSR_BORRSTF_Pos               (25UL)                    /*!< BORRSTF (Bit 25)                                      */
#define RCC_CSR_BORRSTF_Msk               (0x2000000UL)             /*!< BORRSTF (Bitfield-Mask: 0x01)                         */
#define RCC_CSR_RMVF_Pos                  (24UL)                    /*!< RMVF (Bit 24)                                         */
#define RCC_CSR_RMVF_Msk                  (0x1000000UL)             /*!< RMVF (Bitfield-Mask: 0x01)                            */
#define RCC_CSR_LSIRDY_Pos                (1UL)                     /*!< LSIRDY (Bit 1)                                        */
#define RCC_CSR_LSIRDY_Msk                (0x2UL)                   /*!< LSIRDY (Bitfield-Mask: 0x01)                          */
#define RCC_CSR_LSION_Pos                 (0UL)                     /*!< LSION (Bit 0)                                         */
#define RCC_CSR_LSION_Msk                 (0x1UL)                   /*!< LSION (Bitfield-Mask: 0x01)                           */
/* =========================================================  SSCGR  ========================================================= */
#define RCC_SSCGR_SSCGEN_Pos              (31UL)                    /*!< SSCGEN (Bit 31)                                       */
#define RCC_SSCGR_SSCGEN_Msk              (0x80000000UL)            /*!< SSCGEN (Bitfield-Mask: 0x01)                          */
#define RCC_SSCGR_SPREADSEL_Pos           (30UL)                    /*!< SPREADSEL (Bit 30)                                    */
#define RCC_SSCGR_SPREADSEL_Msk           (0x40000000UL)            /*!< SPREADSEL (Bitfield-Mask: 0x01)                       */
#define RCC_SSCGR_INCSTEP_Pos             (13UL)                    /*!< INCSTEP (Bit 13)                                      */
#define RCC_SSCGR_INCSTEP_Msk             (0xfffe000UL)             /*!< INCSTEP (Bitfield-Mask: 0x7fff)                       */
#define RCC_SSCGR_MODPER_Pos              (0UL)                     /*!< MODPER (Bit 0)                                        */
#define RCC_SSCGR_MODPER_Msk              (0x1fffUL)                /*!< MODPER (Bitfield-Mask: 0x1fff)                        */
/* ======================================================  PLLI2SCFGR  ======================================================= */
#define RCC_PLLI2SCFGR_PLLI2SR_Pos        (28UL)                    /*!< PLLI2SR (Bit 28)                                      */
#define RCC_PLLI2SCFGR_PLLI2SR_Msk        (0x70000000UL)            /*!< PLLI2SR (Bitfield-Mask: 0x07)                         */
#define RCC_PLLI2SCFGR_PLLI2SQ_Pos        (24UL)                    /*!< PLLI2SQ (Bit 24)                                      */
#define RCC_PLLI2SCFGR_PLLI2SQ_Msk        (0xf000000UL)             /*!< PLLI2SQ (Bitfield-Mask: 0x0f)                         */
#define RCC_PLLI2SCFGR_PLLI2SN_Pos        (6UL)                     /*!< PLLI2SN (Bit 6)                                       */
#define RCC_PLLI2SCFGR_PLLI2SN_Msk        (0x7fc0UL)                /*!< PLLI2SN (Bitfield-Mask: 0x1ff)                        */
/* ======================================================  PLLSAICFGR  ======================================================= */
#define RCC_PLLSAICFGR_PLLSAIN_Pos        (6UL)                     /*!< PLLSAIN (Bit 6)                                       */
#define RCC_PLLSAICFGR_PLLSAIN_Msk        (0x7fc0UL)                /*!< PLLSAIN (Bitfield-Mask: 0x1ff)                        */
#define RCC_PLLSAICFGR_PLLSAIP_Pos        (16UL)                    /*!< PLLSAIP (Bit 16)                                      */
#define RCC_PLLSAICFGR_PLLSAIP_Msk        (0x30000UL)               /*!< PLLSAIP (Bitfield-Mask: 0x03)                         */
#define RCC_PLLSAICFGR_PLLSAIQ_Pos        (24UL)                    /*!< PLLSAIQ (Bit 24)                                      */
#define RCC_PLLSAICFGR_PLLSAIQ_Msk        (0xf000000UL)             /*!< PLLSAIQ (Bitfield-Mask: 0x0f)                         */
#define RCC_PLLSAICFGR_PLLSAIR_Pos        (28UL)                    /*!< PLLSAIR (Bit 28)                                      */
#define RCC_PLLSAICFGR_PLLSAIR_Msk        (0x70000000UL)            /*!< PLLSAIR (Bitfield-Mask: 0x07)                         */
/* ========================================================  DKCFGR1  ======================================================== */
#define RCC_DKCFGR1_PLLI2SDIV_Pos         (0UL)                     /*!< PLLI2SDIV (Bit 0)                                     */
#define RCC_DKCFGR1_PLLI2SDIV_Msk         (0x1fUL)                  /*!< PLLI2SDIV (Bitfield-Mask: 0x1f)                       */
#define RCC_DKCFGR1_PLLSAIDIVQ_Pos        (8UL)                     /*!< PLLSAIDIVQ (Bit 8)                                    */
#define RCC_DKCFGR1_PLLSAIDIVQ_Msk        (0x1f00UL)                /*!< PLLSAIDIVQ (Bitfield-Mask: 0x1f)                      */
#define RCC_DKCFGR1_PLLSAIDIVR_Pos        (16UL)                    /*!< PLLSAIDIVR (Bit 16)                                   */
#define RCC_DKCFGR1_PLLSAIDIVR_Msk        (0x30000UL)               /*!< PLLSAIDIVR (Bitfield-Mask: 0x03)                      */
#define RCC_DKCFGR1_SAI1SEL_Pos           (20UL)                    /*!< SAI1SEL (Bit 20)                                      */
#define RCC_DKCFGR1_SAI1SEL_Msk           (0x300000UL)              /*!< SAI1SEL (Bitfield-Mask: 0x03)                         */
#define RCC_DKCFGR1_SAI2SEL_Pos           (22UL)                    /*!< SAI2SEL (Bit 22)                                      */
#define RCC_DKCFGR1_SAI2SEL_Msk           (0xc00000UL)              /*!< SAI2SEL (Bitfield-Mask: 0x03)                         */
#define RCC_DKCFGR1_TIMPRE_Pos            (24UL)                    /*!< TIMPRE (Bit 24)                                       */
#define RCC_DKCFGR1_TIMPRE_Msk            (0x1000000UL)             /*!< TIMPRE (Bitfield-Mask: 0x01)                          */
/* ========================================================  DKCFGR2  ======================================================== */
#define RCC_DKCFGR2_USART1SEL_Pos         (0UL)                     /*!< USART1SEL (Bit 0)                                     */
#define RCC_DKCFGR2_USART1SEL_Msk         (0x3UL)                   /*!< USART1SEL (Bitfield-Mask: 0x03)                       */
#define RCC_DKCFGR2_USART2SEL_Pos         (2UL)                     /*!< USART2SEL (Bit 2)                                     */
#define RCC_DKCFGR2_USART2SEL_Msk         (0xcUL)                   /*!< USART2SEL (Bitfield-Mask: 0x03)                       */
#define RCC_DKCFGR2_USART3SEL_Pos         (4UL)                     /*!< USART3SEL (Bit 4)                                     */
#define RCC_DKCFGR2_USART3SEL_Msk         (0x30UL)                  /*!< USART3SEL (Bitfield-Mask: 0x03)                       */
#define RCC_DKCFGR2_UART4SEL_Pos          (6UL)                     /*!< UART4SEL (Bit 6)                                      */
#define RCC_DKCFGR2_UART4SEL_Msk          (0xc0UL)                  /*!< UART4SEL (Bitfield-Mask: 0x03)                        */
#define RCC_DKCFGR2_UART5SEL_Pos          (8UL)                     /*!< UART5SEL (Bit 8)                                      */
#define RCC_DKCFGR2_UART5SEL_Msk          (0x300UL)                 /*!< UART5SEL (Bitfield-Mask: 0x03)                        */
#define RCC_DKCFGR2_USART6SEL_Pos         (10UL)                    /*!< USART6SEL (Bit 10)                                    */
#define RCC_DKCFGR2_USART6SEL_Msk         (0xc00UL)                 /*!< USART6SEL (Bitfield-Mask: 0x03)                       */
#define RCC_DKCFGR2_UART7SEL_Pos          (12UL)                    /*!< UART7SEL (Bit 12)                                     */
#define RCC_DKCFGR2_UART7SEL_Msk          (0x3000UL)                /*!< UART7SEL (Bitfield-Mask: 0x03)                        */
#define RCC_DKCFGR2_UART8SEL_Pos          (14UL)                    /*!< UART8SEL (Bit 14)                                     */
#define RCC_DKCFGR2_UART8SEL_Msk          (0xc000UL)                /*!< UART8SEL (Bitfield-Mask: 0x03)                        */
#define RCC_DKCFGR2_I2C1SEL_Pos           (16UL)                    /*!< I2C1SEL (Bit 16)                                      */
#define RCC_DKCFGR2_I2C1SEL_Msk           (0x30000UL)               /*!< I2C1SEL (Bitfield-Mask: 0x03)                         */
#define RCC_DKCFGR2_I2C2SEL_Pos           (18UL)                    /*!< I2C2SEL (Bit 18)                                      */
#define RCC_DKCFGR2_I2C2SEL_Msk           (0xc0000UL)               /*!< I2C2SEL (Bitfield-Mask: 0x03)                         */
#define RCC_DKCFGR2_I2C3SEL_Pos           (20UL)                    /*!< I2C3SEL (Bit 20)                                      */
#define RCC_DKCFGR2_I2C3SEL_Msk           (0x300000UL)              /*!< I2C3SEL (Bitfield-Mask: 0x03)                         */
#define RCC_DKCFGR2_I2C4SEL_Pos           (22UL)                    /*!< I2C4SEL (Bit 22)                                      */
#define RCC_DKCFGR2_I2C4SEL_Msk           (0xc00000UL)              /*!< I2C4SEL (Bitfield-Mask: 0x03)                         */
#define RCC_DKCFGR2_LPTIM1SEL_Pos         (24UL)                    /*!< LPTIM1SEL (Bit 24)                                    */
#define RCC_DKCFGR2_LPTIM1SEL_Msk         (0x3000000UL)             /*!< LPTIM1SEL (Bitfield-Mask: 0x03)                       */
#define RCC_DKCFGR2_CECSEL_Pos            (26UL)                    /*!< CECSEL (Bit 26)                                       */
#define RCC_DKCFGR2_CECSEL_Msk            (0x4000000UL)             /*!< CECSEL (Bitfield-Mask: 0x01)                          */
#define RCC_DKCFGR2_CK48MSEL_Pos          (27UL)                    /*!< CK48MSEL (Bit 27)                                     */
#define RCC_DKCFGR2_CK48MSEL_Msk          (0x8000000UL)             /*!< CK48MSEL (Bitfield-Mask: 0x01)                        */
#define RCC_DKCFGR2_SDMMCSEL_Pos          (28UL)                    /*!< SDMMCSEL (Bit 28)                                     */
#define RCC_DKCFGR2_SDMMCSEL_Msk          (0x10000000UL)            /*!< SDMMCSEL (Bitfield-Mask: 0x01)                        */
#define RCC_DKCFGR2_SDMMC2SEL_Pos         (29UL)                    /*!< SDMMC2SEL (Bit 29)                                    */
#define RCC_DKCFGR2_SDMMC2SEL_Msk         (0x20000000UL)            /*!< SDMMC2SEL (Bitfield-Mask: 0x01)                       */
#define RCC_DKCFGR2_DSISEL_Pos            (30UL)                    /*!< DSISEL (Bit 30)                                       */
#define RCC_DKCFGR2_DSISEL_Msk            (0x40000000UL)            /*!< DSISEL (Bitfield-Mask: 0x01)                          */
