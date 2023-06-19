#include "core.h"


#define DMA2D_BASE                  0x4002B000UL

#define DMA2D                       ((volatile DMA2D_Type*)             DMA2D_BASE)


/* =========================================================================================================================== */
/* ================                                           DMA2D                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief DMA2D controller (DMA2D)
  */

typedef struct {                                /*!< (@ 0x4002B000) DMA2D Structure                                            */
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000000) control register                                           */
    
    struct {
      __IOM uint32_t START      : 1;            /*!< [0..0] Start                                                              */
      __IOM uint32_t SUSP       : 1;            /*!< [1..1] Suspend                                                            */
      __IOM uint32_t ABORT      : 1;            /*!< [2..2] Abort                                                              */
            uint32_t            : 5;
      __IOM uint32_t TEIE       : 1;            /*!< [8..8] Transfer error interrupt enable                                    */
      __IOM uint32_t TCIE       : 1;            /*!< [9..9] Transfer complete interrupt enable                                 */
      __IOM uint32_t TWIE       : 1;            /*!< [10..10] Transfer watermark interrupt enable                              */
      __IOM uint32_t CAEIE      : 1;            /*!< [11..11] CLUT access error interrupt enable                               */
      __IOM uint32_t CTCIE      : 1;            /*!< [12..12] CLUT transfer complete interrupt enable                          */
      __IOM uint32_t CEIE       : 1;            /*!< [13..13] Configuration Error Interrupt Enable                             */
            uint32_t            : 2;
      __IOM uint32_t MODE       : 2;            /*!< [17..16] DMA2D mode                                                       */
            uint32_t            : 14;
    } CR_b;
  } ;
  
  union {
    __IM  uint32_t ISR;                         /*!< (@ 0x00000004) Interrupt Status Register                                  */
    
    struct {
      __IM  uint32_t TEIF       : 1;            /*!< [0..0] Transfer error interrupt flag                                      */
      __IM  uint32_t TCIF       : 1;            /*!< [1..1] Transfer complete interrupt flag                                   */
      __IM  uint32_t TWIF       : 1;            /*!< [2..2] Transfer watermark interrupt flag                                  */
      __IM  uint32_t CAEIF      : 1;            /*!< [3..3] CLUT access error interrupt flag                                   */
      __IM  uint32_t CTCIF      : 1;            /*!< [4..4] CLUT transfer complete interrupt flag                              */
      __IM  uint32_t CEIF       : 1;            /*!< [5..5] Configuration error interrupt flag                                 */
            uint32_t            : 26;
    } ISR_b;
  } ;
  
  union {
    __IOM uint32_t IFCR;                        /*!< (@ 0x00000008) interrupt flag clear register                              */
    
    struct {
      __IOM uint32_t CTEIF      : 1;            /*!< [0..0] Clear Transfer error interrupt flag                                */
      __IOM uint32_t CTCIF      : 1;            /*!< [1..1] Clear transfer complete interrupt flag                             */
      __IOM uint32_t CTWIF      : 1;            /*!< [2..2] Clear transfer watermark interrupt flag                            */
      __IOM uint32_t CAECIF     : 1;            /*!< [3..3] Clear CLUT access error interrupt flag                             */
      __IOM uint32_t CCTCIF     : 1;            /*!< [4..4] Clear CLUT transfer complete interrupt flag                        */
      __IOM uint32_t CCEIF      : 1;            /*!< [5..5] Clear configuration error interrupt flag                           */
            uint32_t            : 26;
    } IFCR_b;
  } ;
  
  union {
    __IOM uint32_t FGMAR;                       /*!< (@ 0x0000000C) foreground memory address register                         */
    
    struct {
      __IOM uint32_t MA         : 32;           /*!< [31..0] Memory address                                                    */
    } FGMAR_b;
  } ;
  
  union {
    __IOM uint32_t FGOR;                        /*!< (@ 0x00000010) foreground offset register                                 */
    
    struct {
      __IOM uint32_t LO         : 14;           /*!< [13..0] Line offset                                                       */
            uint32_t            : 18;
    } FGOR_b;
  } ;
  
  union {
    __IOM uint32_t BGMAR;                       /*!< (@ 0x00000014) background memory address register                         */
    
    struct {
      __IOM uint32_t MA         : 32;           /*!< [31..0] Memory address                                                    */
    } BGMAR_b;
  } ;
  
  union {
    __IOM uint32_t BGOR;                        /*!< (@ 0x00000018) background offset register                                 */
    
    struct {
      __IOM uint32_t LO         : 14;           /*!< [13..0] Line offset                                                       */
            uint32_t            : 18;
    } BGOR_b;
  } ;
  
  union {
    __IOM uint32_t FGPFCCR;                     /*!< (@ 0x0000001C) foreground PFC control register                            */
    
    struct {
      __IOM uint32_t CM         : 4;            /*!< [3..0] Color mode                                                         */
      __IOM uint32_t CCM        : 1;            /*!< [4..4] CLUT color mode                                                    */
      __IOM uint32_t START      : 1;            /*!< [5..5] Start                                                              */
            uint32_t            : 2;
      __IOM uint32_t CS         : 8;            /*!< [15..8] CLUT size                                                         */
      __IOM uint32_t AM         : 2;            /*!< [17..16] Alpha mode                                                       */
            uint32_t            : 6;
      __IOM uint32_t ALPHA      : 8;            /*!< [31..24] Alpha value                                                      */
    } FGPFCCR_b;
  } ;
  
  union {
    __IOM uint32_t FGCOLR;                      /*!< (@ 0x00000020) foreground color register                                  */
    
    struct {
      __IOM uint32_t BLUE       : 8;            /*!< [7..0] Blue Value                                                         */
      __IOM uint32_t GREEN      : 8;            /*!< [15..8] Green Value                                                       */
      __IOM uint32_t RED        : 8;            /*!< [23..16] Red Value                                                        */
            uint32_t            : 8;
    } FGCOLR_b;
  } ;
  
  union {
    __IOM uint32_t BGPFCCR;                     /*!< (@ 0x00000024) background PFC control register                            */
    
    struct {
      __IOM uint32_t CM         : 4;            /*!< [3..0] Color mode                                                         */
      __IOM uint32_t CCM        : 1;            /*!< [4..4] CLUT Color mode                                                    */
      __IOM uint32_t START      : 1;            /*!< [5..5] Start                                                              */
            uint32_t            : 2;
      __IOM uint32_t CS         : 8;            /*!< [15..8] CLUT size                                                         */
      __IOM uint32_t AM         : 2;            /*!< [17..16] Alpha mode                                                       */
            uint32_t            : 6;
      __IOM uint32_t ALPHA      : 8;            /*!< [31..24] Alpha value                                                      */
    } BGPFCCR_b;
  } ;
  
  union {
    __IOM uint32_t BGCOLR;                      /*!< (@ 0x00000028) background color register                                  */
    
    struct {
      __IOM uint32_t BLUE       : 8;            /*!< [7..0] Blue Value                                                         */
      __IOM uint32_t GREEN      : 8;            /*!< [15..8] Green Value                                                       */
      __IOM uint32_t RED        : 8;            /*!< [23..16] Red Value                                                        */
            uint32_t            : 8;
    } BGCOLR_b;
  } ;
  
  union {
    __IOM uint32_t FGCMAR;                      /*!< (@ 0x0000002C) foreground CLUT memory address register                    */
    
    struct {
      __IOM uint32_t MA         : 32;           /*!< [31..0] Memory Address                                                    */
    } FGCMAR_b;
  } ;
  
  union {
    __IOM uint32_t BGCMAR;                      /*!< (@ 0x00000030) background CLUT memory address register                    */
    
    struct {
      __IOM uint32_t MA         : 32;           /*!< [31..0] Memory address                                                    */
    } BGCMAR_b;
  } ;
  
  union {
    __IOM uint32_t OPFCCR;                      /*!< (@ 0x00000034) output PFC control register                                */
    
    struct {
      __IOM uint32_t CM         : 3;            /*!< [2..0] Color mode                                                         */
            uint32_t            : 29;
    } OPFCCR_b;
  } ;
  
  union {
    __IOM uint32_t OCOLR;                       /*!< (@ 0x00000038) output color register                                      */
    
    struct {
      __IOM uint32_t BLUE       : 8;            /*!< [7..0] Blue Value                                                         */
      __IOM uint32_t GREEN      : 8;            /*!< [15..8] Green Value                                                       */
      __IOM uint32_t RED        : 8;            /*!< [23..16] Red Value                                                        */
      __IOM uint32_t APLHA      : 8;            /*!< [31..24] Alpha Channel Value                                              */
    } OCOLR_b;
  } ;
  
  union {
    __IOM uint32_t OMAR;                        /*!< (@ 0x0000003C) output memory address register                             */
    
    struct {
      __IOM uint32_t MA         : 32;           /*!< [31..0] Memory Address                                                    */
    } OMAR_b;
  } ;
  
  union {
    __IOM uint32_t OOR;                         /*!< (@ 0x00000040) output offset register                                     */
    
    struct {
      __IOM uint32_t LO         : 14;           /*!< [13..0] Line Offset                                                       */
            uint32_t            : 18;
    } OOR_b;
  } ;
  
  union {
    __IOM uint32_t NLR;                         /*!< (@ 0x00000044) number of line register                                    */
    
    struct {
      __IOM uint32_t NL         : 16;           /*!< [15..0] Number of lines                                                   */
      __IOM uint32_t PL         : 14;           /*!< [29..16] Pixel per lines                                                  */
            uint32_t            : 2;
    } NLR_b;
  } ;
  
  union {
    __IOM uint32_t LWR;                         /*!< (@ 0x00000048) line watermark register                                    */
    
    struct {
      __IOM uint32_t LW         : 16;           /*!< [15..0] Line watermark                                                    */
            uint32_t            : 16;
    } LWR_b;
  } ;
  
  union {
    __IOM uint32_t AMTCR;                       /*!< (@ 0x0000004C) AHB master timer configuration register                    */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Enable                                                             */
            uint32_t            : 7;
      __IOM uint32_t DT         : 8;            /*!< [15..8] Dead Time                                                         */
            uint32_t            : 16;
    } AMTCR_b;
  } ;
  __IM  uint32_t  RESERVED[236];
  
  union {
    __IOM uint32_t FGCLUT;                      /*!< (@ 0x00000400) FGCLUT                                                     */
    
    struct {
      __IOM uint32_t BLUE       : 8;            /*!< [7..0] BLUE                                                               */
      __IOM uint32_t GREEN      : 8;            /*!< [15..8] GREEN                                                             */
      __IOM uint32_t RED        : 8;            /*!< [23..16] RED                                                              */
      __IOM uint32_t APLHA      : 8;            /*!< [31..24] APLHA                                                            */
    } FGCLUT_b;
  } ;
  __IM  uint32_t  RESERVED1[255];
  
  union {
    __IOM uint32_t BGCLUT;                      /*!< (@ 0x00000800) BGCLUT                                                     */
    
    struct {
      __IOM uint32_t BLUE       : 8;            /*!< [7..0] BLUE                                                               */
      __IOM uint32_t GREEN      : 8;            /*!< [15..8] GREEN                                                             */
      __IOM uint32_t RED        : 8;            /*!< [23..16] RED                                                              */
      __IOM uint32_t APLHA      : 8;            /*!< [31..24] APLHA                                                            */
    } BGCLUT_b;
  } ;
} DMA2D_Type;                                   /*!< Size = 2052 (0x804)                                                       */



/* =========================================================================================================================== */
/* ================                                           DMA2D                                           ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
#define DMA2D_CR_MODE_Pos                 (16UL)                    /*!< MODE (Bit 16)                                         */
#define DMA2D_CR_MODE_Msk                 (0x30000UL)               /*!< MODE (Bitfield-Mask: 0x03)                            */
#define DMA2D_CR_CEIE_Pos                 (13UL)                    /*!< CEIE (Bit 13)                                         */
#define DMA2D_CR_CEIE_Msk                 (0x2000UL)                /*!< CEIE (Bitfield-Mask: 0x01)                            */
#define DMA2D_CR_CTCIE_Pos                (12UL)                    /*!< CTCIE (Bit 12)                                        */
#define DMA2D_CR_CTCIE_Msk                (0x1000UL)                /*!< CTCIE (Bitfield-Mask: 0x01)                           */
#define DMA2D_CR_CAEIE_Pos                (11UL)                    /*!< CAEIE (Bit 11)                                        */
#define DMA2D_CR_CAEIE_Msk                (0x800UL)                 /*!< CAEIE (Bitfield-Mask: 0x01)                           */
#define DMA2D_CR_TWIE_Pos                 (10UL)                    /*!< TWIE (Bit 10)                                         */
#define DMA2D_CR_TWIE_Msk                 (0x400UL)                 /*!< TWIE (Bitfield-Mask: 0x01)                            */
#define DMA2D_CR_TCIE_Pos                 (9UL)                     /*!< TCIE (Bit 9)                                          */
#define DMA2D_CR_TCIE_Msk                 (0x200UL)                 /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define DMA2D_CR_TEIE_Pos                 (8UL)                     /*!< TEIE (Bit 8)                                          */
#define DMA2D_CR_TEIE_Msk                 (0x100UL)                 /*!< TEIE (Bitfield-Mask: 0x01)                            */
#define DMA2D_CR_ABORT_Pos                (2UL)                     /*!< ABORT (Bit 2)                                         */
#define DMA2D_CR_ABORT_Msk                (0x4UL)                   /*!< ABORT (Bitfield-Mask: 0x01)                           */
#define DMA2D_CR_SUSP_Pos                 (1UL)                     /*!< SUSP (Bit 1)                                          */
#define DMA2D_CR_SUSP_Msk                 (0x2UL)                   /*!< SUSP (Bitfield-Mask: 0x01)                            */
#define DMA2D_CR_START_Pos                (0UL)                     /*!< START (Bit 0)                                         */
#define DMA2D_CR_START_Msk                (0x1UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
/* ==========================================================  ISR  ========================================================== */
#define DMA2D_ISR_CEIF_Pos                (5UL)                     /*!< CEIF (Bit 5)                                          */
#define DMA2D_ISR_CEIF_Msk                (0x20UL)                  /*!< CEIF (Bitfield-Mask: 0x01)                            */
#define DMA2D_ISR_CTCIF_Pos               (4UL)                     /*!< CTCIF (Bit 4)                                         */
#define DMA2D_ISR_CTCIF_Msk               (0x10UL)                  /*!< CTCIF (Bitfield-Mask: 0x01)                           */
#define DMA2D_ISR_CAEIF_Pos               (3UL)                     /*!< CAEIF (Bit 3)                                         */
#define DMA2D_ISR_CAEIF_Msk               (0x8UL)                   /*!< CAEIF (Bitfield-Mask: 0x01)                           */
#define DMA2D_ISR_TWIF_Pos                (2UL)                     /*!< TWIF (Bit 2)                                          */
#define DMA2D_ISR_TWIF_Msk                (0x4UL)                   /*!< TWIF (Bitfield-Mask: 0x01)                            */
#define DMA2D_ISR_TCIF_Pos                (1UL)                     /*!< TCIF (Bit 1)                                          */
#define DMA2D_ISR_TCIF_Msk                (0x2UL)                   /*!< TCIF (Bitfield-Mask: 0x01)                            */
#define DMA2D_ISR_TEIF_Pos                (0UL)                     /*!< TEIF (Bit 0)                                          */
#define DMA2D_ISR_TEIF_Msk                (0x1UL)                   /*!< TEIF (Bitfield-Mask: 0x01)                            */
/* =========================================================  IFCR  ========================================================== */
#define DMA2D_IFCR_CCEIF_Pos              (5UL)                     /*!< CCEIF (Bit 5)                                         */
#define DMA2D_IFCR_CCEIF_Msk              (0x20UL)                  /*!< CCEIF (Bitfield-Mask: 0x01)                           */
#define DMA2D_IFCR_CCTCIF_Pos             (4UL)                     /*!< CCTCIF (Bit 4)                                        */
#define DMA2D_IFCR_CCTCIF_Msk             (0x10UL)                  /*!< CCTCIF (Bitfield-Mask: 0x01)                          */
#define DMA2D_IFCR_CAECIF_Pos             (3UL)                     /*!< CAECIF (Bit 3)                                        */
#define DMA2D_IFCR_CAECIF_Msk             (0x8UL)                   /*!< CAECIF (Bitfield-Mask: 0x01)                          */
#define DMA2D_IFCR_CTWIF_Pos              (2UL)                     /*!< CTWIF (Bit 2)                                         */
#define DMA2D_IFCR_CTWIF_Msk              (0x4UL)                   /*!< CTWIF (Bitfield-Mask: 0x01)                           */
#define DMA2D_IFCR_CTCIF_Pos              (1UL)                     /*!< CTCIF (Bit 1)                                         */
#define DMA2D_IFCR_CTCIF_Msk              (0x2UL)                   /*!< CTCIF (Bitfield-Mask: 0x01)                           */
#define DMA2D_IFCR_CTEIF_Pos              (0UL)                     /*!< CTEIF (Bit 0)                                         */
#define DMA2D_IFCR_CTEIF_Msk              (0x1UL)                   /*!< CTEIF (Bitfield-Mask: 0x01)                           */
/* =========================================================  FGMAR  ========================================================= */
#define DMA2D_FGMAR_MA_Pos                (0UL)                     /*!< MA (Bit 0)                                            */
#define DMA2D_FGMAR_MA_Msk                (0xffffffffUL)            /*!< MA (Bitfield-Mask: 0xffffffff)                        */
/* =========================================================  FGOR  ========================================================== */
#define DMA2D_FGOR_LO_Pos                 (0UL)                     /*!< LO (Bit 0)                                            */
#define DMA2D_FGOR_LO_Msk                 (0x3fffUL)                /*!< LO (Bitfield-Mask: 0x3fff)                            */
/* =========================================================  BGMAR  ========================================================= */
#define DMA2D_BGMAR_MA_Pos                (0UL)                     /*!< MA (Bit 0)                                            */
#define DMA2D_BGMAR_MA_Msk                (0xffffffffUL)            /*!< MA (Bitfield-Mask: 0xffffffff)                        */
/* =========================================================  BGOR  ========================================================== */
#define DMA2D_BGOR_LO_Pos                 (0UL)                     /*!< LO (Bit 0)                                            */
#define DMA2D_BGOR_LO_Msk                 (0x3fffUL)                /*!< LO (Bitfield-Mask: 0x3fff)                            */
/* ========================================================  FGPFCCR  ======================================================== */
#define DMA2D_FGPFCCR_ALPHA_Pos           (24UL)                    /*!< ALPHA (Bit 24)                                        */
#define DMA2D_FGPFCCR_ALPHA_Msk           (0xff000000UL)            /*!< ALPHA (Bitfield-Mask: 0xff)                           */
#define DMA2D_FGPFCCR_AM_Pos              (16UL)                    /*!< AM (Bit 16)                                           */
#define DMA2D_FGPFCCR_AM_Msk              (0x30000UL)               /*!< AM (Bitfield-Mask: 0x03)                              */
#define DMA2D_FGPFCCR_CS_Pos              (8UL)                     /*!< CS (Bit 8)                                            */
#define DMA2D_FGPFCCR_CS_Msk              (0xff00UL)                /*!< CS (Bitfield-Mask: 0xff)                              */
#define DMA2D_FGPFCCR_START_Pos           (5UL)                     /*!< START (Bit 5)                                         */
#define DMA2D_FGPFCCR_START_Msk           (0x20UL)                  /*!< START (Bitfield-Mask: 0x01)                           */
#define DMA2D_FGPFCCR_CCM_Pos             (4UL)                     /*!< CCM (Bit 4)                                           */
#define DMA2D_FGPFCCR_CCM_Msk             (0x10UL)                  /*!< CCM (Bitfield-Mask: 0x01)                             */
#define DMA2D_FGPFCCR_CM_Pos              (0UL)                     /*!< CM (Bit 0)                                            */
#define DMA2D_FGPFCCR_CM_Msk              (0xfUL)                   /*!< CM (Bitfield-Mask: 0x0f)                              */
/* ========================================================  FGCOLR  ========================================================= */
#define DMA2D_FGCOLR_RED_Pos              (16UL)                    /*!< RED (Bit 16)                                          */
#define DMA2D_FGCOLR_RED_Msk              (0xff0000UL)              /*!< RED (Bitfield-Mask: 0xff)                             */
#define DMA2D_FGCOLR_GREEN_Pos            (8UL)                     /*!< GREEN (Bit 8)                                         */
#define DMA2D_FGCOLR_GREEN_Msk            (0xff00UL)                /*!< GREEN (Bitfield-Mask: 0xff)                           */
#define DMA2D_FGCOLR_BLUE_Pos             (0UL)                     /*!< BLUE (Bit 0)                                          */
#define DMA2D_FGCOLR_BLUE_Msk             (0xffUL)                  /*!< BLUE (Bitfield-Mask: 0xff)                            */
/* ========================================================  BGPFCCR  ======================================================== */
#define DMA2D_BGPFCCR_ALPHA_Pos           (24UL)                    /*!< ALPHA (Bit 24)                                        */
#define DMA2D_BGPFCCR_ALPHA_Msk           (0xff000000UL)            /*!< ALPHA (Bitfield-Mask: 0xff)                           */
#define DMA2D_BGPFCCR_AM_Pos              (16UL)                    /*!< AM (Bit 16)                                           */
#define DMA2D_BGPFCCR_AM_Msk              (0x30000UL)               /*!< AM (Bitfield-Mask: 0x03)                              */
#define DMA2D_BGPFCCR_CS_Pos              (8UL)                     /*!< CS (Bit 8)                                            */
#define DMA2D_BGPFCCR_CS_Msk              (0xff00UL)                /*!< CS (Bitfield-Mask: 0xff)                              */
#define DMA2D_BGPFCCR_START_Pos           (5UL)                     /*!< START (Bit 5)                                         */
#define DMA2D_BGPFCCR_START_Msk           (0x20UL)                  /*!< START (Bitfield-Mask: 0x01)                           */
#define DMA2D_BGPFCCR_CCM_Pos             (4UL)                     /*!< CCM (Bit 4)                                           */
#define DMA2D_BGPFCCR_CCM_Msk             (0x10UL)                  /*!< CCM (Bitfield-Mask: 0x01)                             */
#define DMA2D_BGPFCCR_CM_Pos              (0UL)                     /*!< CM (Bit 0)                                            */
#define DMA2D_BGPFCCR_CM_Msk              (0xfUL)                   /*!< CM (Bitfield-Mask: 0x0f)                              */
/* ========================================================  BGCOLR  ========================================================= */
#define DMA2D_BGCOLR_RED_Pos              (16UL)                    /*!< RED (Bit 16)                                          */
#define DMA2D_BGCOLR_RED_Msk              (0xff0000UL)              /*!< RED (Bitfield-Mask: 0xff)                             */
#define DMA2D_BGCOLR_GREEN_Pos            (8UL)                     /*!< GREEN (Bit 8)                                         */
#define DMA2D_BGCOLR_GREEN_Msk            (0xff00UL)                /*!< GREEN (Bitfield-Mask: 0xff)                           */
#define DMA2D_BGCOLR_BLUE_Pos             (0UL)                     /*!< BLUE (Bit 0)                                          */
#define DMA2D_BGCOLR_BLUE_Msk             (0xffUL)                  /*!< BLUE (Bitfield-Mask: 0xff)                            */
/* ========================================================  FGCMAR  ========================================================= */
#define DMA2D_FGCMAR_MA_Pos               (0UL)                     /*!< MA (Bit 0)                                            */
#define DMA2D_FGCMAR_MA_Msk               (0xffffffffUL)            /*!< MA (Bitfield-Mask: 0xffffffff)                        */
/* ========================================================  BGCMAR  ========================================================= */
#define DMA2D_BGCMAR_MA_Pos               (0UL)                     /*!< MA (Bit 0)                                            */
#define DMA2D_BGCMAR_MA_Msk               (0xffffffffUL)            /*!< MA (Bitfield-Mask: 0xffffffff)                        */
/* ========================================================  OPFCCR  ========================================================= */
#define DMA2D_OPFCCR_CM_Pos               (0UL)                     /*!< CM (Bit 0)                                            */
#define DMA2D_OPFCCR_CM_Msk               (0x7UL)                   /*!< CM (Bitfield-Mask: 0x07)                              */
/* =========================================================  OCOLR  ========================================================= */
#define DMA2D_OCOLR_APLHA_Pos             (24UL)                    /*!< APLHA (Bit 24)                                        */
#define DMA2D_OCOLR_APLHA_Msk             (0xff000000UL)            /*!< APLHA (Bitfield-Mask: 0xff)                           */
#define DMA2D_OCOLR_RED_Pos               (16UL)                    /*!< RED (Bit 16)                                          */
#define DMA2D_OCOLR_RED_Msk               (0xff0000UL)              /*!< RED (Bitfield-Mask: 0xff)                             */
#define DMA2D_OCOLR_GREEN_Pos             (8UL)                     /*!< GREEN (Bit 8)                                         */
#define DMA2D_OCOLR_GREEN_Msk             (0xff00UL)                /*!< GREEN (Bitfield-Mask: 0xff)                           */
#define DMA2D_OCOLR_BLUE_Pos              (0UL)                     /*!< BLUE (Bit 0)                                          */
#define DMA2D_OCOLR_BLUE_Msk              (0xffUL)                  /*!< BLUE (Bitfield-Mask: 0xff)                            */
/* =========================================================  OMAR  ========================================================== */
#define DMA2D_OMAR_MA_Pos                 (0UL)                     /*!< MA (Bit 0)                                            */
#define DMA2D_OMAR_MA_Msk                 (0xffffffffUL)            /*!< MA (Bitfield-Mask: 0xffffffff)                        */
/* ==========================================================  OOR  ========================================================== */
#define DMA2D_OOR_LO_Pos                  (0UL)                     /*!< LO (Bit 0)                                            */
#define DMA2D_OOR_LO_Msk                  (0x3fffUL)                /*!< LO (Bitfield-Mask: 0x3fff)                            */
/* ==========================================================  NLR  ========================================================== */
#define DMA2D_NLR_PL_Pos                  (16UL)                    /*!< PL (Bit 16)                                           */
#define DMA2D_NLR_PL_Msk                  (0x3fff0000UL)            /*!< PL (Bitfield-Mask: 0x3fff)                            */
#define DMA2D_NLR_NL_Pos                  (0UL)                     /*!< NL (Bit 0)                                            */
#define DMA2D_NLR_NL_Msk                  (0xffffUL)                /*!< NL (Bitfield-Mask: 0xffff)                            */
/* ==========================================================  LWR  ========================================================== */
#define DMA2D_LWR_LW_Pos                  (0UL)                     /*!< LW (Bit 0)                                            */
#define DMA2D_LWR_LW_Msk                  (0xffffUL)                /*!< LW (Bitfield-Mask: 0xffff)                            */
/* =========================================================  AMTCR  ========================================================= */
#define DMA2D_AMTCR_DT_Pos                (8UL)                     /*!< DT (Bit 8)                                            */
#define DMA2D_AMTCR_DT_Msk                (0xff00UL)                /*!< DT (Bitfield-Mask: 0xff)                              */
#define DMA2D_AMTCR_EN_Pos                (0UL)                     /*!< EN (Bit 0)                                            */
#define DMA2D_AMTCR_EN_Msk                (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ========================================================  FGCLUT  ========================================================= */
#define DMA2D_FGCLUT_APLHA_Pos            (24UL)                    /*!< APLHA (Bit 24)                                        */
#define DMA2D_FGCLUT_APLHA_Msk            (0xff000000UL)            /*!< APLHA (Bitfield-Mask: 0xff)                           */
#define DMA2D_FGCLUT_RED_Pos              (16UL)                    /*!< RED (Bit 16)                                          */
#define DMA2D_FGCLUT_RED_Msk              (0xff0000UL)              /*!< RED (Bitfield-Mask: 0xff)                             */
#define DMA2D_FGCLUT_GREEN_Pos            (8UL)                     /*!< GREEN (Bit 8)                                         */
#define DMA2D_FGCLUT_GREEN_Msk            (0xff00UL)                /*!< GREEN (Bitfield-Mask: 0xff)                           */
#define DMA2D_FGCLUT_BLUE_Pos             (0UL)                     /*!< BLUE (Bit 0)                                          */
#define DMA2D_FGCLUT_BLUE_Msk             (0xffUL)                  /*!< BLUE (Bitfield-Mask: 0xff)                            */
/* ========================================================  BGCLUT  ========================================================= */
#define DMA2D_BGCLUT_APLHA_Pos            (24UL)                    /*!< APLHA (Bit 24)                                        */
#define DMA2D_BGCLUT_APLHA_Msk            (0xff000000UL)            /*!< APLHA (Bitfield-Mask: 0xff)                           */
#define DMA2D_BGCLUT_RED_Pos              (16UL)                    /*!< RED (Bit 16)                                          */
#define DMA2D_BGCLUT_RED_Msk              (0xff0000UL)              /*!< RED (Bitfield-Mask: 0xff)                             */
#define DMA2D_BGCLUT_GREEN_Pos            (8UL)                     /*!< GREEN (Bit 8)                                         */
#define DMA2D_BGCLUT_GREEN_Msk            (0xff00UL)                /*!< GREEN (Bitfield-Mask: 0xff)                           */
#define DMA2D_BGCLUT_BLUE_Pos             (0UL)                     /*!< BLUE (Bit 0)                                          */
#define DMA2D_BGCLUT_BLUE_Msk             (0xffUL)                  /*!< BLUE (Bitfield-Mask: 0xff)                            */
