#include "core.h"


#define ADC1                        ((volatile ADC1_Type*)              ADC1_BASE)
#define ADC2                        ((volatile ADC1_Type*)              ADC2_BASE)
#define ADC3                        ((volatile ADC1_Type*)              ADC3_BASE)

#define ADC1_BASE                   0x40012000UL
#define ADC2_BASE                   0x40012100UL
#define ADC3_BASE                   0x40012200UL


/* =========================================================================================================================== */
/* ================                                           ADC1                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Analog-to-digital converter (ADC1)
  */

typedef struct {                                /*!< (@ 0x40012000) ADC1 Structure                                             */
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000000) status register                                            */
    
    struct {
      __IOM uint32_t AWD        : 1;            /*!< [0..0] Analog watchdog flag                                               */
      __IOM uint32_t EOC        : 1;            /*!< [1..1] Regular channel end of conversion                                  */
      __IOM uint32_t JEOC       : 1;            /*!< [2..2] Injected channel end of conversion                                 */
      __IOM uint32_t JSTRT      : 1;            /*!< [3..3] Injected channel start flag                                        */
      __IOM uint32_t STRT       : 1;            /*!< [4..4] Regular channel start flag                                         */
      __IOM uint32_t OVR        : 1;            /*!< [5..5] Overrun                                                            */
            uint32_t            : 26;
    } SR_b;
  } ;
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000004) control register 1                                         */
    
    struct {
      __IOM uint32_t AWDCH      : 5;            /*!< [4..0] Analog watchdog channel select bits                                */
      __IOM uint32_t EOCIE      : 1;            /*!< [5..5] Interrupt enable for EOC                                           */
      __IOM uint32_t AWDIE      : 1;            /*!< [6..6] Analog watchdog interrupt enable                                   */
      __IOM uint32_t JEOCIE     : 1;            /*!< [7..7] Interrupt enable for injected channels                             */
      __IOM uint32_t SCAN       : 1;            /*!< [8..8] Scan mode                                                          */
      __IOM uint32_t AWDSGL     : 1;            /*!< [9..9] Enable the watchdog on a single channel in scan mode               */
      __IOM uint32_t JAUTO      : 1;            /*!< [10..10] Automatic injected group conversion                              */
      __IOM uint32_t DISCEN     : 1;            /*!< [11..11] Discontinuous mode on regular channels                           */
      __IOM uint32_t JDISCEN    : 1;            /*!< [12..12] Discontinuous mode on injected channels                          */
      __IOM uint32_t DISCNUM    : 3;            /*!< [15..13] Discontinuous mode channel count                                 */
            uint32_t            : 6;
      __IOM uint32_t JAWDEN     : 1;            /*!< [22..22] Analog watchdog enable on injected channels                      */
      __IOM uint32_t AWDEN      : 1;            /*!< [23..23] Analog watchdog enable on regular channels                       */
      __IOM uint32_t RES        : 2;            /*!< [25..24] Resolution                                                       */
      __IOM uint32_t OVRIE      : 1;            /*!< [26..26] Overrun interrupt enable                                         */
            uint32_t            : 5;
    } CR1_b;
  } ;
  
  union {
    __IOM uint32_t CR2;                         /*!< (@ 0x00000008) control register 2                                         */
    
    struct {
      __IOM uint32_t ADON       : 1;            /*!< [0..0] A/D Converter ON / OFF                                             */
      __IOM uint32_t CONT       : 1;            /*!< [1..1] Continuous conversion                                              */
            uint32_t            : 6;
      __IOM uint32_t DMA        : 1;            /*!< [8..8] Direct memory access mode (for single ADC mode)                    */
      __IOM uint32_t DDS        : 1;            /*!< [9..9] DMA disable selection (for single ADC mode)                        */
      __IOM uint32_t EOCS       : 1;            /*!< [10..10] End of conversion selection                                      */
      __IOM uint32_t ALIGN      : 1;            /*!< [11..11] Data alignment                                                   */
            uint32_t            : 4;
      __IOM uint32_t JEXTSEL    : 4;            /*!< [19..16] External event select for injected group                         */
      __IOM uint32_t JEXTEN     : 2;            /*!< [21..20] External trigger enable for injected channels                    */
      __IOM uint32_t JSWSTART   : 1;            /*!< [22..22] Start conversion of injected channels                            */
            uint32_t            : 1;
      __IOM uint32_t EXTSEL     : 4;            /*!< [27..24] External event select for regular group                          */
      __IOM uint32_t EXTEN      : 2;            /*!< [29..28] External trigger enable for regular channels                     */
      __IOM uint32_t SWSTART    : 1;            /*!< [30..30] Start conversion of regular channels                             */
            uint32_t            : 1;
    } CR2_b;
  } ;
  
  union {
    __IOM uint32_t SMPR1;                       /*!< (@ 0x0000000C) sample time register 1                                     */
    
    struct {
      __IOM uint32_t SMPx_x     : 32;           /*!< [31..0] Sample time bits                                                  */
    } SMPR1_b;
  } ;
  
  union {
    __IOM uint32_t SMPR2;                       /*!< (@ 0x00000010) sample time register 2                                     */
    
    struct {
      __IOM uint32_t SMPx_x     : 32;           /*!< [31..0] Sample time bits                                                  */
    } SMPR2_b;
  } ;
  
  union {
    __IOM uint32_t JOFR1;                       /*!< (@ 0x00000014) injected channel data offset register x                    */
    
    struct {
      __IOM uint32_t JOFFSET1   : 12;           /*!< [11..0] Data offset for injected channel x                                */
            uint32_t            : 20;
    } JOFR1_b;
  } ;
  
  union {
    __IOM uint32_t JOFR2;                       /*!< (@ 0x00000018) injected channel data offset register x                    */
    
    struct {
      __IOM uint32_t JOFFSET2   : 12;           /*!< [11..0] Data offset for injected channel x                                */
            uint32_t            : 20;
    } JOFR2_b;
  } ;
  
  union {
    __IOM uint32_t JOFR3;                       /*!< (@ 0x0000001C) injected channel data offset register x                    */
    
    struct {
      __IOM uint32_t JOFFSET3   : 12;           /*!< [11..0] Data offset for injected channel x                                */
            uint32_t            : 20;
    } JOFR3_b;
  } ;
  
  union {
    __IOM uint32_t JOFR4;                       /*!< (@ 0x00000020) injected channel data offset register x                    */
    
    struct {
      __IOM uint32_t JOFFSET4   : 12;           /*!< [11..0] Data offset for injected channel x                                */
            uint32_t            : 20;
    } JOFR4_b;
  } ;
  
  union {
    __IOM uint32_t HTR;                         /*!< (@ 0x00000024) watchdog higher threshold register                         */
    
    struct {
      __IOM uint32_t HT         : 12;           /*!< [11..0] Analog watchdog higher threshold                                  */
            uint32_t            : 20;
    } HTR_b;
  } ;
  
  union {
    __IOM uint32_t LTR;                         /*!< (@ 0x00000028) watchdog lower threshold register                          */
    
    struct {
      __IOM uint32_t LT         : 12;           /*!< [11..0] Analog watchdog lower threshold                                   */
            uint32_t            : 20;
    } LTR_b;
  } ;
  
  union {
    __IOM uint32_t SQR1;                        /*!< (@ 0x0000002C) regular sequence register 1                                */
    
    struct {
      __IOM uint32_t SQ13       : 5;            /*!< [4..0] 13th conversion in regular sequence                                */
      __IOM uint32_t SQ14       : 5;            /*!< [9..5] 14th conversion in regular sequence                                */
      __IOM uint32_t SQ15       : 5;            /*!< [14..10] 15th conversion in regular sequence                              */
      __IOM uint32_t SQ16       : 5;            /*!< [19..15] 16th conversion in regular sequence                              */
      __IOM uint32_t L          : 4;            /*!< [23..20] Regular channel sequence length                                  */
            uint32_t            : 8;
    } SQR1_b;
  } ;
  
  union {
    __IOM uint32_t SQR2;                        /*!< (@ 0x00000030) regular sequence register 2                                */
    
    struct {
      __IOM uint32_t SQ7        : 5;            /*!< [4..0] 7th conversion in regular sequence                                 */
      __IOM uint32_t SQ8        : 5;            /*!< [9..5] 8th conversion in regular sequence                                 */
      __IOM uint32_t SQ9        : 5;            /*!< [14..10] 9th conversion in regular sequence                               */
      __IOM uint32_t SQ10       : 5;            /*!< [19..15] 10th conversion in regular sequence                              */
      __IOM uint32_t SQ11       : 5;            /*!< [24..20] 11th conversion in regular sequence                              */
      __IOM uint32_t SQ12       : 5;            /*!< [29..25] 12th conversion in regular sequence                              */
            uint32_t            : 2;
    } SQR2_b;
  } ;
  
  union {
    __IOM uint32_t SQR3;                        /*!< (@ 0x00000034) regular sequence register 3                                */
    
    struct {
      __IOM uint32_t SQ1        : 5;            /*!< [4..0] 1st conversion in regular sequence                                 */
      __IOM uint32_t SQ2        : 5;            /*!< [9..5] 2nd conversion in regular sequence                                 */
      __IOM uint32_t SQ3        : 5;            /*!< [14..10] 3rd conversion in regular sequence                               */
      __IOM uint32_t SQ4        : 5;            /*!< [19..15] 4th conversion in regular sequence                               */
      __IOM uint32_t SQ5        : 5;            /*!< [24..20] 5th conversion in regular sequence                               */
      __IOM uint32_t SQ6        : 5;            /*!< [29..25] 6th conversion in regular sequence                               */
            uint32_t            : 2;
    } SQR3_b;
  } ;
  
  union {
    __IOM uint32_t JSQR;                        /*!< (@ 0x00000038) injected sequence register                                 */
    
    struct {
      __IOM uint32_t JSQ1       : 5;            /*!< [4..0] 1st conversion in injected sequence                                */
      __IOM uint32_t JSQ2       : 5;            /*!< [9..5] 2nd conversion in injected sequence                                */
      __IOM uint32_t JSQ3       : 5;            /*!< [14..10] 3rd conversion in injected sequence                              */
      __IOM uint32_t JSQ4       : 5;            /*!< [19..15] 4th conversion in injected sequence                              */
      __IOM uint32_t JL         : 2;            /*!< [21..20] Injected sequence length                                         */
            uint32_t            : 10;
    } JSQR_b;
  } ;
  
  union {
    __IM  uint32_t JDR1;                        /*!< (@ 0x0000003C) injected data register x                                   */
    
    struct {
      __IM  uint32_t JDATA      : 16;           /*!< [15..0] Injected data                                                     */
            uint32_t            : 16;
    } JDR1_b;
  } ;
  
  union {
    __IM  uint32_t JDR2;                        /*!< (@ 0x00000040) injected data register x                                   */
    
    struct {
      __IM  uint32_t JDATA      : 16;           /*!< [15..0] Injected data                                                     */
            uint32_t            : 16;
    } JDR2_b;
  } ;
  
  union {
    __IM  uint32_t JDR3;                        /*!< (@ 0x00000044) injected data register x                                   */
    
    struct {
      __IM  uint32_t JDATA      : 16;           /*!< [15..0] Injected data                                                     */
            uint32_t            : 16;
    } JDR3_b;
  } ;
  
  union {
    __IM  uint32_t JDR4;                        /*!< (@ 0x00000048) injected data register x                                   */
    
    struct {
      __IM  uint32_t JDATA      : 16;           /*!< [15..0] Injected data                                                     */
            uint32_t            : 16;
    } JDR4_b;
  } ;
  
  union {
    __IM  uint32_t DR;                          /*!< (@ 0x0000004C) regular data register                                      */
    
    struct {
      __IM  uint32_t DATA       : 16;           /*!< [15..0] Regular data                                                      */
            uint32_t            : 16;
    } DR_b;
  } ;
} ADC1_Type;                                    /*!< Size = 80 (0x50)                                                          */



/* =========================================================================================================================== */
/* ================                                           ADC1                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  SR  =========================================================== */
#define ADC1_SR_OVR_Pos                   (5UL)                     /*!< OVR (Bit 5)                                           */
#define ADC1_SR_OVR_Msk                   (0x20UL)                  /*!< OVR (Bitfield-Mask: 0x01)                             */
#define ADC1_SR_STRT_Pos                  (4UL)                     /*!< STRT (Bit 4)                                          */
#define ADC1_SR_STRT_Msk                  (0x10UL)                  /*!< STRT (Bitfield-Mask: 0x01)                            */
#define ADC1_SR_JSTRT_Pos                 (3UL)                     /*!< JSTRT (Bit 3)                                         */
#define ADC1_SR_JSTRT_Msk                 (0x8UL)                   /*!< JSTRT (Bitfield-Mask: 0x01)                           */
#define ADC1_SR_JEOC_Pos                  (2UL)                     /*!< JEOC (Bit 2)                                          */
#define ADC1_SR_JEOC_Msk                  (0x4UL)                   /*!< JEOC (Bitfield-Mask: 0x01)                            */
#define ADC1_SR_EOC_Pos                   (1UL)                     /*!< EOC (Bit 1)                                           */
#define ADC1_SR_EOC_Msk                   (0x2UL)                   /*!< EOC (Bitfield-Mask: 0x01)                             */
#define ADC1_SR_AWD_Pos                   (0UL)                     /*!< AWD (Bit 0)                                           */
#define ADC1_SR_AWD_Msk                   (0x1UL)                   /*!< AWD (Bitfield-Mask: 0x01)                             */
/* ==========================================================  CR1  ========================================================== */
#define ADC1_CR1_OVRIE_Pos                (26UL)                    /*!< OVRIE (Bit 26)                                        */
#define ADC1_CR1_OVRIE_Msk                (0x4000000UL)             /*!< OVRIE (Bitfield-Mask: 0x01)                           */
#define ADC1_CR1_RES_Pos                  (24UL)                    /*!< RES (Bit 24)                                          */
#define ADC1_CR1_RES_Msk                  (0x3000000UL)             /*!< RES (Bitfield-Mask: 0x03)                             */
#define ADC1_CR1_AWDEN_Pos                (23UL)                    /*!< AWDEN (Bit 23)                                        */
#define ADC1_CR1_AWDEN_Msk                (0x800000UL)              /*!< AWDEN (Bitfield-Mask: 0x01)                           */
#define ADC1_CR1_JAWDEN_Pos               (22UL)                    /*!< JAWDEN (Bit 22)                                       */
#define ADC1_CR1_JAWDEN_Msk               (0x400000UL)              /*!< JAWDEN (Bitfield-Mask: 0x01)                          */
#define ADC1_CR1_DISCNUM_Pos              (13UL)                    /*!< DISCNUM (Bit 13)                                      */
#define ADC1_CR1_DISCNUM_Msk              (0xe000UL)                /*!< DISCNUM (Bitfield-Mask: 0x07)                         */
#define ADC1_CR1_JDISCEN_Pos              (12UL)                    /*!< JDISCEN (Bit 12)                                      */
#define ADC1_CR1_JDISCEN_Msk              (0x1000UL)                /*!< JDISCEN (Bitfield-Mask: 0x01)                         */
#define ADC1_CR1_DISCEN_Pos               (11UL)                    /*!< DISCEN (Bit 11)                                       */
#define ADC1_CR1_DISCEN_Msk               (0x800UL)                 /*!< DISCEN (Bitfield-Mask: 0x01)                          */
#define ADC1_CR1_JAUTO_Pos                (10UL)                    /*!< JAUTO (Bit 10)                                        */
#define ADC1_CR1_JAUTO_Msk                (0x400UL)                 /*!< JAUTO (Bitfield-Mask: 0x01)                           */
#define ADC1_CR1_AWDSGL_Pos               (9UL)                     /*!< AWDSGL (Bit 9)                                        */
#define ADC1_CR1_AWDSGL_Msk               (0x200UL)                 /*!< AWDSGL (Bitfield-Mask: 0x01)                          */
#define ADC1_CR1_SCAN_Pos                 (8UL)                     /*!< SCAN (Bit 8)                                          */
#define ADC1_CR1_SCAN_Msk                 (0x100UL)                 /*!< SCAN (Bitfield-Mask: 0x01)                            */
#define ADC1_CR1_JEOCIE_Pos               (7UL)                     /*!< JEOCIE (Bit 7)                                        */
#define ADC1_CR1_JEOCIE_Msk               (0x80UL)                  /*!< JEOCIE (Bitfield-Mask: 0x01)                          */
#define ADC1_CR1_AWDIE_Pos                (6UL)                     /*!< AWDIE (Bit 6)                                         */
#define ADC1_CR1_AWDIE_Msk                (0x40UL)                  /*!< AWDIE (Bitfield-Mask: 0x01)                           */
#define ADC1_CR1_EOCIE_Pos                (5UL)                     /*!< EOCIE (Bit 5)                                         */
#define ADC1_CR1_EOCIE_Msk                (0x20UL)                  /*!< EOCIE (Bitfield-Mask: 0x01)                           */
#define ADC1_CR1_AWDCH_Pos                (0UL)                     /*!< AWDCH (Bit 0)                                         */
#define ADC1_CR1_AWDCH_Msk                (0x1fUL)                  /*!< AWDCH (Bitfield-Mask: 0x1f)                           */
/* ==========================================================  CR2  ========================================================== */
#define ADC1_CR2_SWSTART_Pos              (30UL)                    /*!< SWSTART (Bit 30)                                      */
#define ADC1_CR2_SWSTART_Msk              (0x40000000UL)            /*!< SWSTART (Bitfield-Mask: 0x01)                         */
#define ADC1_CR2_EXTEN_Pos                (28UL)                    /*!< EXTEN (Bit 28)                                        */
#define ADC1_CR2_EXTEN_Msk                (0x30000000UL)            /*!< EXTEN (Bitfield-Mask: 0x03)                           */
#define ADC1_CR2_EXTSEL_Pos               (24UL)                    /*!< EXTSEL (Bit 24)                                       */
#define ADC1_CR2_EXTSEL_Msk               (0xf000000UL)             /*!< EXTSEL (Bitfield-Mask: 0x0f)                          */
#define ADC1_CR2_JSWSTART_Pos             (22UL)                    /*!< JSWSTART (Bit 22)                                     */
#define ADC1_CR2_JSWSTART_Msk             (0x400000UL)              /*!< JSWSTART (Bitfield-Mask: 0x01)                        */
#define ADC1_CR2_JEXTEN_Pos               (20UL)                    /*!< JEXTEN (Bit 20)                                       */
#define ADC1_CR2_JEXTEN_Msk               (0x300000UL)              /*!< JEXTEN (Bitfield-Mask: 0x03)                          */
#define ADC1_CR2_JEXTSEL_Pos              (16UL)                    /*!< JEXTSEL (Bit 16)                                      */
#define ADC1_CR2_JEXTSEL_Msk              (0xf0000UL)               /*!< JEXTSEL (Bitfield-Mask: 0x0f)                         */
#define ADC1_CR2_ALIGN_Pos                (11UL)                    /*!< ALIGN (Bit 11)                                        */
#define ADC1_CR2_ALIGN_Msk                (0x800UL)                 /*!< ALIGN (Bitfield-Mask: 0x01)                           */
#define ADC1_CR2_EOCS_Pos                 (10UL)                    /*!< EOCS (Bit 10)                                         */
#define ADC1_CR2_EOCS_Msk                 (0x400UL)                 /*!< EOCS (Bitfield-Mask: 0x01)                            */
#define ADC1_CR2_DDS_Pos                  (9UL)                     /*!< DDS (Bit 9)                                           */
#define ADC1_CR2_DDS_Msk                  (0x200UL)                 /*!< DDS (Bitfield-Mask: 0x01)                             */
#define ADC1_CR2_DMA_Pos                  (8UL)                     /*!< DMA (Bit 8)                                           */
#define ADC1_CR2_DMA_Msk                  (0x100UL)                 /*!< DMA (Bitfield-Mask: 0x01)                             */
#define ADC1_CR2_CONT_Pos                 (1UL)                     /*!< CONT (Bit 1)                                          */
#define ADC1_CR2_CONT_Msk                 (0x2UL)                   /*!< CONT (Bitfield-Mask: 0x01)                            */
#define ADC1_CR2_ADON_Pos                 (0UL)                     /*!< ADON (Bit 0)                                          */
#define ADC1_CR2_ADON_Msk                 (0x1UL)                   /*!< ADON (Bitfield-Mask: 0x01)                            */
/* =========================================================  SMPR1  ========================================================= */
#define ADC1_SMPR1_SMPx_x_Pos             (0UL)                     /*!< SMPx_x (Bit 0)                                        */
#define ADC1_SMPR1_SMPx_x_Msk             (0xffffffffUL)            /*!< SMPx_x (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  SMPR2  ========================================================= */
#define ADC1_SMPR2_SMPx_x_Pos             (0UL)                     /*!< SMPx_x (Bit 0)                                        */
#define ADC1_SMPR2_SMPx_x_Msk             (0xffffffffUL)            /*!< SMPx_x (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  JOFR1  ========================================================= */
#define ADC1_JOFR1_JOFFSET1_Pos           (0UL)                     /*!< JOFFSET1 (Bit 0)                                      */
#define ADC1_JOFR1_JOFFSET1_Msk           (0xfffUL)                 /*!< JOFFSET1 (Bitfield-Mask: 0xfff)                       */
/* =========================================================  JOFR2  ========================================================= */
#define ADC1_JOFR2_JOFFSET2_Pos           (0UL)                     /*!< JOFFSET2 (Bit 0)                                      */
#define ADC1_JOFR2_JOFFSET2_Msk           (0xfffUL)                 /*!< JOFFSET2 (Bitfield-Mask: 0xfff)                       */
/* =========================================================  JOFR3  ========================================================= */
#define ADC1_JOFR3_JOFFSET3_Pos           (0UL)                     /*!< JOFFSET3 (Bit 0)                                      */
#define ADC1_JOFR3_JOFFSET3_Msk           (0xfffUL)                 /*!< JOFFSET3 (Bitfield-Mask: 0xfff)                       */
/* =========================================================  JOFR4  ========================================================= */
#define ADC1_JOFR4_JOFFSET4_Pos           (0UL)                     /*!< JOFFSET4 (Bit 0)                                      */
#define ADC1_JOFR4_JOFFSET4_Msk           (0xfffUL)                 /*!< JOFFSET4 (Bitfield-Mask: 0xfff)                       */
/* ==========================================================  HTR  ========================================================== */
#define ADC1_HTR_HT_Pos                   (0UL)                     /*!< HT (Bit 0)                                            */
#define ADC1_HTR_HT_Msk                   (0xfffUL)                 /*!< HT (Bitfield-Mask: 0xfff)                             */
/* ==========================================================  LTR  ========================================================== */
#define ADC1_LTR_LT_Pos                   (0UL)                     /*!< LT (Bit 0)                                            */
#define ADC1_LTR_LT_Msk                   (0xfffUL)                 /*!< LT (Bitfield-Mask: 0xfff)                             */
/* =========================================================  SQR1  ========================================================== */
#define ADC1_SQR1_L_Pos                   (20UL)                    /*!< L (Bit 20)                                            */
#define ADC1_SQR1_L_Msk                   (0xf00000UL)              /*!< L (Bitfield-Mask: 0x0f)                               */
#define ADC1_SQR1_SQ16_Pos                (15UL)                    /*!< SQ16 (Bit 15)                                         */
#define ADC1_SQR1_SQ16_Msk                (0xf8000UL)               /*!< SQ16 (Bitfield-Mask: 0x1f)                            */
#define ADC1_SQR1_SQ15_Pos                (10UL)                    /*!< SQ15 (Bit 10)                                         */
#define ADC1_SQR1_SQ15_Msk                (0x7c00UL)                /*!< SQ15 (Bitfield-Mask: 0x1f)                            */
#define ADC1_SQR1_SQ14_Pos                (5UL)                     /*!< SQ14 (Bit 5)                                          */
#define ADC1_SQR1_SQ14_Msk                (0x3e0UL)                 /*!< SQ14 (Bitfield-Mask: 0x1f)                            */
#define ADC1_SQR1_SQ13_Pos                (0UL)                     /*!< SQ13 (Bit 0)                                          */
#define ADC1_SQR1_SQ13_Msk                (0x1fUL)                  /*!< SQ13 (Bitfield-Mask: 0x1f)                            */
/* =========================================================  SQR2  ========================================================== */
#define ADC1_SQR2_SQ12_Pos                (25UL)                    /*!< SQ12 (Bit 25)                                         */
#define ADC1_SQR2_SQ12_Msk                (0x3e000000UL)            /*!< SQ12 (Bitfield-Mask: 0x1f)                            */
#define ADC1_SQR2_SQ11_Pos                (20UL)                    /*!< SQ11 (Bit 20)                                         */
#define ADC1_SQR2_SQ11_Msk                (0x1f00000UL)             /*!< SQ11 (Bitfield-Mask: 0x1f)                            */
#define ADC1_SQR2_SQ10_Pos                (15UL)                    /*!< SQ10 (Bit 15)                                         */
#define ADC1_SQR2_SQ10_Msk                (0xf8000UL)               /*!< SQ10 (Bitfield-Mask: 0x1f)                            */
#define ADC1_SQR2_SQ9_Pos                 (10UL)                    /*!< SQ9 (Bit 10)                                          */
#define ADC1_SQR2_SQ9_Msk                 (0x7c00UL)                /*!< SQ9 (Bitfield-Mask: 0x1f)                             */
#define ADC1_SQR2_SQ8_Pos                 (5UL)                     /*!< SQ8 (Bit 5)                                           */
#define ADC1_SQR2_SQ8_Msk                 (0x3e0UL)                 /*!< SQ8 (Bitfield-Mask: 0x1f)                             */
#define ADC1_SQR2_SQ7_Pos                 (0UL)                     /*!< SQ7 (Bit 0)                                           */
#define ADC1_SQR2_SQ7_Msk                 (0x1fUL)                  /*!< SQ7 (Bitfield-Mask: 0x1f)                             */
/* =========================================================  SQR3  ========================================================== */
#define ADC1_SQR3_SQ6_Pos                 (25UL)                    /*!< SQ6 (Bit 25)                                          */
#define ADC1_SQR3_SQ6_Msk                 (0x3e000000UL)            /*!< SQ6 (Bitfield-Mask: 0x1f)                             */
#define ADC1_SQR3_SQ5_Pos                 (20UL)                    /*!< SQ5 (Bit 20)                                          */
#define ADC1_SQR3_SQ5_Msk                 (0x1f00000UL)             /*!< SQ5 (Bitfield-Mask: 0x1f)                             */
#define ADC1_SQR3_SQ4_Pos                 (15UL)                    /*!< SQ4 (Bit 15)                                          */
#define ADC1_SQR3_SQ4_Msk                 (0xf8000UL)               /*!< SQ4 (Bitfield-Mask: 0x1f)                             */
#define ADC1_SQR3_SQ3_Pos                 (10UL)                    /*!< SQ3 (Bit 10)                                          */
#define ADC1_SQR3_SQ3_Msk                 (0x7c00UL)                /*!< SQ3 (Bitfield-Mask: 0x1f)                             */
#define ADC1_SQR3_SQ2_Pos                 (5UL)                     /*!< SQ2 (Bit 5)                                           */
#define ADC1_SQR3_SQ2_Msk                 (0x3e0UL)                 /*!< SQ2 (Bitfield-Mask: 0x1f)                             */
#define ADC1_SQR3_SQ1_Pos                 (0UL)                     /*!< SQ1 (Bit 0)                                           */
#define ADC1_SQR3_SQ1_Msk                 (0x1fUL)                  /*!< SQ1 (Bitfield-Mask: 0x1f)                             */
/* =========================================================  JSQR  ========================================================== */
#define ADC1_JSQR_JL_Pos                  (20UL)                    /*!< JL (Bit 20)                                           */
#define ADC1_JSQR_JL_Msk                  (0x300000UL)              /*!< JL (Bitfield-Mask: 0x03)                              */
#define ADC1_JSQR_JSQ4_Pos                (15UL)                    /*!< JSQ4 (Bit 15)                                         */
#define ADC1_JSQR_JSQ4_Msk                (0xf8000UL)               /*!< JSQ4 (Bitfield-Mask: 0x1f)                            */
#define ADC1_JSQR_JSQ3_Pos                (10UL)                    /*!< JSQ3 (Bit 10)                                         */
#define ADC1_JSQR_JSQ3_Msk                (0x7c00UL)                /*!< JSQ3 (Bitfield-Mask: 0x1f)                            */
#define ADC1_JSQR_JSQ2_Pos                (5UL)                     /*!< JSQ2 (Bit 5)                                          */
#define ADC1_JSQR_JSQ2_Msk                (0x3e0UL)                 /*!< JSQ2 (Bitfield-Mask: 0x1f)                            */
#define ADC1_JSQR_JSQ1_Pos                (0UL)                     /*!< JSQ1 (Bit 0)                                          */
#define ADC1_JSQR_JSQ1_Msk                (0x1fUL)                  /*!< JSQ1 (Bitfield-Mask: 0x1f)                            */
/* =========================================================  JDR1  ========================================================== */
#define ADC1_JDR1_JDATA_Pos               (0UL)                     /*!< JDATA (Bit 0)                                         */
#define ADC1_JDR1_JDATA_Msk               (0xffffUL)                /*!< JDATA (Bitfield-Mask: 0xffff)                         */
/* =========================================================  JDR2  ========================================================== */
#define ADC1_JDR2_JDATA_Pos               (0UL)                     /*!< JDATA (Bit 0)                                         */
#define ADC1_JDR2_JDATA_Msk               (0xffffUL)                /*!< JDATA (Bitfield-Mask: 0xffff)                         */
/* =========================================================  JDR3  ========================================================== */
#define ADC1_JDR3_JDATA_Pos               (0UL)                     /*!< JDATA (Bit 0)                                         */
#define ADC1_JDR3_JDATA_Msk               (0xffffUL)                /*!< JDATA (Bitfield-Mask: 0xffff)                         */
/* =========================================================  JDR4  ========================================================== */
#define ADC1_JDR4_JDATA_Pos               (0UL)                     /*!< JDATA (Bit 0)                                         */
#define ADC1_JDR4_JDATA_Msk               (0xffffUL)                /*!< JDATA (Bitfield-Mask: 0xffff)                         */
/* ==========================================================  DR  =========================================================== */
#define ADC1_DR_DATA_Pos                  (0UL)                     /*!< DATA (Bit 0)                                          */
#define ADC1_DR_DATA_Msk                  (0xffffUL)                /*!< DATA (Bitfield-Mask: 0xffff)                          */
