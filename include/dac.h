#include "core.h"


#define DAC_BASE                    0x40007400UL

#define DAC                         ((DAC_Type*)               DAC_BASE)


/* =========================================================================================================================== */
/* ================                                            DAC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Digital-to-analog converter (DAC)
  */

typedef struct {                                /*!< (@ 0x40007400) DAC Structure                                              */
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000000) control register                                           */
    
    struct {
      __IOM uint32_t EN1        : 1;            /*!< [0..0] DAC channel1 enable                                                */
      __IOM uint32_t BOFF1      : 1;            /*!< [1..1] DAC channel1 output buffer disable                                 */
      __IOM uint32_t TEN1       : 1;            /*!< [2..2] DAC channel1 trigger enable                                        */
      __IOM uint32_t TSEL1      : 3;            /*!< [5..3] DAC channel1 trigger selection                                     */
      __IOM uint32_t WAVE1      : 2;            /*!< [7..6] DAC channel1 noise/triangle wave generation enable                 */
      __IOM uint32_t MAMP1      : 4;            /*!< [11..8] DAC channel1 mask/amplitude selector                              */
      __IOM uint32_t DMAEN1     : 1;            /*!< [12..12] DAC channel1 DMA enable                                          */
      __IOM uint32_t DMAUDRIE1  : 1;            /*!< [13..13] DAC channel1 DMA Underrun Interrupt enable                       */
            uint32_t            : 2;
      __IOM uint32_t EN2        : 1;            /*!< [16..16] DAC channel2 enable                                              */
      __IOM uint32_t BOFF2      : 1;            /*!< [17..17] DAC channel2 output buffer disable                               */
      __IOM uint32_t TEN2       : 1;            /*!< [18..18] DAC channel2 trigger enable                                      */
      __IOM uint32_t TSEL2      : 3;            /*!< [21..19] DAC channel2 trigger selection                                   */
      __IOM uint32_t WAVE2      : 2;            /*!< [23..22] DAC channel2 noise/triangle wave generation enable               */
      __IOM uint32_t MAMP2      : 4;            /*!< [27..24] DAC channel2 mask/amplitude selector                             */
      __IOM uint32_t DMAEN2     : 1;            /*!< [28..28] DAC channel2 DMA enable                                          */
      __IOM uint32_t DMAUDRIE2  : 1;            /*!< [29..29] DAC channel2 DMA underrun interrupt enable                       */
            uint32_t            : 2;
    } CR_b;
  } ;
  
  union {
    __OM  uint32_t SWTRIGR;                     /*!< (@ 0x00000004) software trigger register                                  */
    
    struct {
      __OM  uint32_t SWTRIG1    : 1;            /*!< [0..0] DAC channel1 software trigger                                      */
      __OM  uint32_t SWTRIG2    : 1;            /*!< [1..1] DAC channel2 software trigger                                      */
            uint32_t            : 30;
    } SWTRIGR_b;
  } ;
  
  union {
    __IOM uint32_t DHR12R1;                     /*!< (@ 0x00000008) channel1 12-bit right-aligned data holding register        */
    
    struct {
      __IOM uint32_t DACC1DHR   : 12;           /*!< [11..0] DAC channel1 12-bit right-aligned data                            */
            uint32_t            : 20;
    } DHR12R1_b;
  } ;
  
  union {
    __IOM uint32_t DHR12L1;                     /*!< (@ 0x0000000C) channel1 12-bit left aligned data holding register         */
    
    struct {
            uint32_t            : 4;
      __IOM uint32_t DACC1DHR   : 12;           /*!< [15..4] DAC channel1 12-bit left-aligned data                             */
            uint32_t            : 16;
    } DHR12L1_b;
  } ;
  
  union {
    __IOM uint32_t DHR8R1;                      /*!< (@ 0x00000010) channel1 8-bit right aligned data holding register         */
    
    struct {
      __IOM uint32_t DACC1DHR   : 8;            /*!< [7..0] DAC channel1 8-bit right-aligned data                              */
            uint32_t            : 24;
    } DHR8R1_b;
  } ;
  
  union {
    __IOM uint32_t DHR12R2;                     /*!< (@ 0x00000014) channel2 12-bit right aligned data holding register        */
    
    struct {
      __IOM uint32_t DACC2DHR   : 12;           /*!< [11..0] DAC channel2 12-bit right-aligned data                            */
            uint32_t            : 20;
    } DHR12R2_b;
  } ;
  
  union {
    __IOM uint32_t DHR12L2;                     /*!< (@ 0x00000018) channel2 12-bit left aligned data holding register         */
    
    struct {
            uint32_t            : 4;
      __IOM uint32_t DACC2DHR   : 12;           /*!< [15..4] DAC channel2 12-bit left-aligned data                             */
            uint32_t            : 16;
    } DHR12L2_b;
  } ;
  
  union {
    __IOM uint32_t DHR8R2;                      /*!< (@ 0x0000001C) channel2 8-bit right-aligned data holding register         */
    
    struct {
      __IOM uint32_t DACC2DHR   : 8;            /*!< [7..0] DAC channel2 8-bit right-aligned data                              */
            uint32_t            : 24;
    } DHR8R2_b;
  } ;
  
  union {
    __IOM uint32_t DHR12RD;                     /*!< (@ 0x00000020) Dual DAC 12-bit right-aligned data holding register        */
    
    struct {
      __IOM uint32_t DACC1DHR   : 12;           /*!< [11..0] DAC channel1 12-bit right-aligned data                            */
            uint32_t            : 4;
      __IOM uint32_t DACC2DHR   : 12;           /*!< [27..16] DAC channel2 12-bit right-aligned data                           */
            uint32_t            : 4;
    } DHR12RD_b;
  } ;
  
  union {
    __IOM uint32_t DHR12LD;                     /*!< (@ 0x00000024) DUAL DAC 12-bit left aligned data holding register         */
    
    struct {
            uint32_t            : 4;
      __IOM uint32_t DACC1DHR   : 12;           /*!< [15..4] DAC channel1 12-bit left-aligned data                             */
            uint32_t            : 4;
      __IOM uint32_t DACC2DHR   : 12;           /*!< [31..20] DAC channel2 12-bit left-aligned data                            */
    } DHR12LD_b;
  } ;
  
  union {
    __IOM uint32_t DHR8RD;                      /*!< (@ 0x00000028) DUAL DAC 8-bit right aligned data holding register         */
    
    struct {
      __IOM uint32_t DACC1DHR   : 8;            /*!< [7..0] DAC channel1 8-bit right-aligned data                              */
      __IOM uint32_t DACC2DHR   : 8;            /*!< [15..8] DAC channel2 8-bit right-aligned data                             */
            uint32_t            : 16;
    } DHR8RD_b;
  } ;
  
  union {
    __IM  uint32_t DOR1;                        /*!< (@ 0x0000002C) channel1 data output register                              */
    
    struct {
      __IM  uint32_t DACC1DOR   : 12;           /*!< [11..0] DAC channel1 data output                                          */
            uint32_t            : 20;
    } DOR1_b;
  } ;
  
  union {
    __IM  uint32_t DOR2;                        /*!< (@ 0x00000030) channel2 data output register                              */
    
    struct {
      __IM  uint32_t DACC2DOR   : 12;           /*!< [11..0] DAC channel2 data output                                          */
            uint32_t            : 20;
    } DOR2_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000034) status register                                            */
    
    struct {
            uint32_t            : 13;
      __IOM uint32_t DMAUDR1    : 1;            /*!< [13..13] DAC channel1 DMA underrun flag                                   */
            uint32_t            : 15;
      __IOM uint32_t DMAUDR2    : 1;            /*!< [29..29] DAC channel2 DMA underrun flag                                   */
            uint32_t            : 2;
    } SR_b;
  } ;
} DAC_Type;                                     /*!< Size = 56 (0x38)                                                          */



/* =========================================================================================================================== */
/* ================                                            DAC                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
#define DAC_CR_DMAUDRIE2_Pos              (29UL)                    /*!< DMAUDRIE2 (Bit 29)                                    */
#define DAC_CR_DMAUDRIE2_Msk              (0x20000000UL)            /*!< DMAUDRIE2 (Bitfield-Mask: 0x01)                       */
#define DAC_CR_DMAEN2_Pos                 (28UL)                    /*!< DMAEN2 (Bit 28)                                       */
#define DAC_CR_DMAEN2_Msk                 (0x10000000UL)            /*!< DMAEN2 (Bitfield-Mask: 0x01)                          */
#define DAC_CR_MAMP2_Pos                  (24UL)                    /*!< MAMP2 (Bit 24)                                        */
#define DAC_CR_MAMP2_Msk                  (0xf000000UL)             /*!< MAMP2 (Bitfield-Mask: 0x0f)                           */
#define DAC_CR_WAVE2_Pos                  (22UL)                    /*!< WAVE2 (Bit 22)                                        */
#define DAC_CR_WAVE2_Msk                  (0xc00000UL)              /*!< WAVE2 (Bitfield-Mask: 0x03)                           */
#define DAC_CR_TSEL2_Pos                  (19UL)                    /*!< TSEL2 (Bit 19)                                        */
#define DAC_CR_TSEL2_Msk                  (0x380000UL)              /*!< TSEL2 (Bitfield-Mask: 0x07)                           */
#define DAC_CR_TEN2_Pos                   (18UL)                    /*!< TEN2 (Bit 18)                                         */
#define DAC_CR_TEN2_Msk                   (0x40000UL)               /*!< TEN2 (Bitfield-Mask: 0x01)                            */
#define DAC_CR_BOFF2_Pos                  (17UL)                    /*!< BOFF2 (Bit 17)                                        */
#define DAC_CR_BOFF2_Msk                  (0x20000UL)               /*!< BOFF2 (Bitfield-Mask: 0x01)                           */
#define DAC_CR_EN2_Pos                    (16UL)                    /*!< EN2 (Bit 16)                                          */
#define DAC_CR_EN2_Msk                    (0x10000UL)               /*!< EN2 (Bitfield-Mask: 0x01)                             */
#define DAC_CR_DMAUDRIE1_Pos              (13UL)                    /*!< DMAUDRIE1 (Bit 13)                                    */
#define DAC_CR_DMAUDRIE1_Msk              (0x2000UL)                /*!< DMAUDRIE1 (Bitfield-Mask: 0x01)                       */
#define DAC_CR_DMAEN1_Pos                 (12UL)                    /*!< DMAEN1 (Bit 12)                                       */
#define DAC_CR_DMAEN1_Msk                 (0x1000UL)                /*!< DMAEN1 (Bitfield-Mask: 0x01)                          */
#define DAC_CR_MAMP1_Pos                  (8UL)                     /*!< MAMP1 (Bit 8)                                         */
#define DAC_CR_MAMP1_Msk                  (0xf00UL)                 /*!< MAMP1 (Bitfield-Mask: 0x0f)                           */
#define DAC_CR_WAVE1_Pos                  (6UL)                     /*!< WAVE1 (Bit 6)                                         */
#define DAC_CR_WAVE1_Msk                  (0xc0UL)                  /*!< WAVE1 (Bitfield-Mask: 0x03)                           */
#define DAC_CR_TSEL1_Pos                  (3UL)                     /*!< TSEL1 (Bit 3)                                         */
#define DAC_CR_TSEL1_Msk                  (0x38UL)                  /*!< TSEL1 (Bitfield-Mask: 0x07)                           */
#define DAC_CR_TEN1_Pos                   (2UL)                     /*!< TEN1 (Bit 2)                                          */
#define DAC_CR_TEN1_Msk                   (0x4UL)                   /*!< TEN1 (Bitfield-Mask: 0x01)                            */
#define DAC_CR_BOFF1_Pos                  (1UL)                     /*!< BOFF1 (Bit 1)                                         */
#define DAC_CR_BOFF1_Msk                  (0x2UL)                   /*!< BOFF1 (Bitfield-Mask: 0x01)                           */
#define DAC_CR_EN1_Pos                    (0UL)                     /*!< EN1 (Bit 0)                                           */
#define DAC_CR_EN1_Msk                    (0x1UL)                   /*!< EN1 (Bitfield-Mask: 0x01)                             */
/* ========================================================  SWTRIGR  ======================================================== */
#define DAC_SWTRIGR_SWTRIG2_Pos           (1UL)                     /*!< SWTRIG2 (Bit 1)                                       */
#define DAC_SWTRIGR_SWTRIG2_Msk           (0x2UL)                   /*!< SWTRIG2 (Bitfield-Mask: 0x01)                         */
#define DAC_SWTRIGR_SWTRIG1_Pos           (0UL)                     /*!< SWTRIG1 (Bit 0)                                       */
#define DAC_SWTRIGR_SWTRIG1_Msk           (0x1UL)                   /*!< SWTRIG1 (Bitfield-Mask: 0x01)                         */
/* ========================================================  DHR12R1  ======================================================== */
#define DAC_DHR12R1_DACC1DHR_Pos          (0UL)                     /*!< DACC1DHR (Bit 0)                                      */
#define DAC_DHR12R1_DACC1DHR_Msk          (0xfffUL)                 /*!< DACC1DHR (Bitfield-Mask: 0xfff)                       */
/* ========================================================  DHR12L1  ======================================================== */
#define DAC_DHR12L1_DACC1DHR_Pos          (4UL)                     /*!< DACC1DHR (Bit 4)                                      */
#define DAC_DHR12L1_DACC1DHR_Msk          (0xfff0UL)                /*!< DACC1DHR (Bitfield-Mask: 0xfff)                       */
/* ========================================================  DHR8R1  ========================================================= */
#define DAC_DHR8R1_DACC1DHR_Pos           (0UL)                     /*!< DACC1DHR (Bit 0)                                      */
#define DAC_DHR8R1_DACC1DHR_Msk           (0xffUL)                  /*!< DACC1DHR (Bitfield-Mask: 0xff)                        */
/* ========================================================  DHR12R2  ======================================================== */
#define DAC_DHR12R2_DACC2DHR_Pos          (0UL)                     /*!< DACC2DHR (Bit 0)                                      */
#define DAC_DHR12R2_DACC2DHR_Msk          (0xfffUL)                 /*!< DACC2DHR (Bitfield-Mask: 0xfff)                       */
/* ========================================================  DHR12L2  ======================================================== */
#define DAC_DHR12L2_DACC2DHR_Pos          (4UL)                     /*!< DACC2DHR (Bit 4)                                      */
#define DAC_DHR12L2_DACC2DHR_Msk          (0xfff0UL)                /*!< DACC2DHR (Bitfield-Mask: 0xfff)                       */
/* ========================================================  DHR8R2  ========================================================= */
#define DAC_DHR8R2_DACC2DHR_Pos           (0UL)                     /*!< DACC2DHR (Bit 0)                                      */
#define DAC_DHR8R2_DACC2DHR_Msk           (0xffUL)                  /*!< DACC2DHR (Bitfield-Mask: 0xff)                        */
/* ========================================================  DHR12RD  ======================================================== */
#define DAC_DHR12RD_DACC2DHR_Pos          (16UL)                    /*!< DACC2DHR (Bit 16)                                     */
#define DAC_DHR12RD_DACC2DHR_Msk          (0xfff0000UL)             /*!< DACC2DHR (Bitfield-Mask: 0xfff)                       */
#define DAC_DHR12RD_DACC1DHR_Pos          (0UL)                     /*!< DACC1DHR (Bit 0)                                      */
#define DAC_DHR12RD_DACC1DHR_Msk          (0xfffUL)                 /*!< DACC1DHR (Bitfield-Mask: 0xfff)                       */
/* ========================================================  DHR12LD  ======================================================== */
#define DAC_DHR12LD_DACC2DHR_Pos          (20UL)                    /*!< DACC2DHR (Bit 20)                                     */
#define DAC_DHR12LD_DACC2DHR_Msk          (0xfff00000UL)            /*!< DACC2DHR (Bitfield-Mask: 0xfff)                       */
#define DAC_DHR12LD_DACC1DHR_Pos          (4UL)                     /*!< DACC1DHR (Bit 4)                                      */
#define DAC_DHR12LD_DACC1DHR_Msk          (0xfff0UL)                /*!< DACC1DHR (Bitfield-Mask: 0xfff)                       */
/* ========================================================  DHR8RD  ========================================================= */
#define DAC_DHR8RD_DACC2DHR_Pos           (8UL)                     /*!< DACC2DHR (Bit 8)                                      */
#define DAC_DHR8RD_DACC2DHR_Msk           (0xff00UL)                /*!< DACC2DHR (Bitfield-Mask: 0xff)                        */
#define DAC_DHR8RD_DACC1DHR_Pos           (0UL)                     /*!< DACC1DHR (Bit 0)                                      */
#define DAC_DHR8RD_DACC1DHR_Msk           (0xffUL)                  /*!< DACC1DHR (Bitfield-Mask: 0xff)                        */
/* =========================================================  DOR1  ========================================================== */
#define DAC_DOR1_DACC1DOR_Pos             (0UL)                     /*!< DACC1DOR (Bit 0)                                      */
#define DAC_DOR1_DACC1DOR_Msk             (0xfffUL)                 /*!< DACC1DOR (Bitfield-Mask: 0xfff)                       */
/* =========================================================  DOR2  ========================================================== */
#define DAC_DOR2_DACC2DOR_Pos             (0UL)                     /*!< DACC2DOR (Bit 0)                                      */
#define DAC_DOR2_DACC2DOR_Msk             (0xfffUL)                 /*!< DACC2DOR (Bitfield-Mask: 0xfff)                       */
/* ==========================================================  SR  =========================================================== */
#define DAC_SR_DMAUDR2_Pos                (29UL)                    /*!< DMAUDR2 (Bit 29)                                      */
#define DAC_SR_DMAUDR2_Msk                (0x20000000UL)            /*!< DMAUDR2 (Bitfield-Mask: 0x01)                         */
#define DAC_SR_DMAUDR1_Pos                (13UL)                    /*!< DMAUDR1 (Bit 13)                                      */
#define DAC_SR_DMAUDR1_Msk                (0x2000UL)                /*!< DMAUDR1 (Bitfield-Mask: 0x01)                         */
