#include "core.h"


#define LTCD                        ((volatile LTCD_Type*)              LTCD_BASE)

#define LTCD_BASE                   0x40016800UL


/* =========================================================================================================================== */
/* ================                                           LTCD                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief LCD-TFT Controller (LTCD)
  */

typedef struct {                                /*!< (@ 0x40016800) LTCD Structure                                             */
  __IM  uint32_t  RESERVED[2];
  
  union {
    __IOM uint32_t SSCR;                        /*!< (@ 0x00000008) Synchronization Size Configuration Register                */
    
    struct {
      __IOM uint32_t VSH        : 11;           /*!< [10..0] Vertical Synchronization Height (in units of horizontal
                                                     scan line)                                                                */
            uint32_t            : 5;
      __IOM uint32_t HSW        : 10;           /*!< [25..16] Horizontal Synchronization Width (in units of pixel
                                                     clock period)                                                             */
            uint32_t            : 6;
    } SSCR_b;
  } ;
  
  union {
    __IOM uint32_t BPCR;                        /*!< (@ 0x0000000C) Back Porch Configuration Register                          */
    
    struct {
      __IOM uint32_t AVBP       : 11;           /*!< [10..0] Accumulated Vertical back porch (in units of horizontal
                                                     scan line)                                                                */
            uint32_t            : 5;
      __IOM uint32_t AHBP       : 10;           /*!< [25..16] Accumulated Horizontal back porch (in units of pixel
                                                     clock period)                                                             */
            uint32_t            : 6;
    } BPCR_b;
  } ;
  
  union {
    __IOM uint32_t AWCR;                        /*!< (@ 0x00000010) Active Width Configuration Register                        */
    
    struct {
      __IOM uint32_t AAH        : 11;           /*!< [10..0] Accumulated Active Height (in units of horizontal scan
                                                     line)                                                                     */
            uint32_t            : 5;
      __IOM uint32_t AAV        : 10;           /*!< [25..16] AAV                                                              */
            uint32_t            : 6;
    } AWCR_b;
  } ;
  
  union {
    __IOM uint32_t TWCR;                        /*!< (@ 0x00000014) Total Width Configuration Register                         */
    
    struct {
      __IOM uint32_t TOTALH     : 11;           /*!< [10..0] Total Height (in units of horizontal scan line)                   */
            uint32_t            : 5;
      __IOM uint32_t TOTALW     : 10;           /*!< [25..16] Total Width (in units of pixel clock period)                     */
            uint32_t            : 6;
    } TWCR_b;
  } ;
  
  union {
    __IOM uint32_t GCR;                         /*!< (@ 0x00000018) Global Control Register                                    */
    
    struct {
      __IOM uint32_t LTDCEN     : 1;            /*!< [0..0] LCD-TFT controller enable bit                                      */
            uint32_t            : 3;
      __IM  uint32_t DBW        : 3;            /*!< [6..4] Dither Blue Width                                                  */
            uint32_t            : 1;
      __IM  uint32_t DGW        : 3;            /*!< [10..8] Dither Green Width                                                */
            uint32_t            : 1;
      __IM  uint32_t DRW        : 3;            /*!< [14..12] Dither Red Width                                                 */
            uint32_t            : 1;
      __IOM uint32_t DEN        : 1;            /*!< [16..16] Dither Enable                                                    */
            uint32_t            : 11;
      __IOM uint32_t PCPOL      : 1;            /*!< [28..28] Pixel Clock Polarity                                             */
      __IOM uint32_t DEPOL      : 1;            /*!< [29..29] Data Enable Polarity                                             */
      __IOM uint32_t VSPOL      : 1;            /*!< [30..30] Vertical Synchronization Polarity                                */
      __IOM uint32_t HSPOL      : 1;            /*!< [31..31] Horizontal Synchronization Polarity                              */
    } GCR_b;
  } ;
  __IM  uint32_t  RESERVED1[2];
  
  union {
    __IOM uint32_t SRCR;                        /*!< (@ 0x00000024) Shadow Reload Configuration Register                       */
    
    struct {
      __IOM uint32_t IMR        : 1;            /*!< [0..0] Immediate Reload                                                   */
      __IOM uint32_t VBR        : 1;            /*!< [1..1] Vertical Blanking Reload                                           */
            uint32_t            : 30;
    } SRCR_b;
  } ;
  __IM  uint32_t  RESERVED2;
  
  union {
    __IOM uint32_t BCCR;                        /*!< (@ 0x0000002C) Background Color Configuration Register                    */
    
    struct {
      __IOM uint32_t BC         : 24;           /*!< [23..0] Background Color Red value                                        */
            uint32_t            : 8;
    } BCCR_b;
  } ;
  __IM  uint32_t  RESERVED3;
  
  union {
    __IOM uint32_t IER;                         /*!< (@ 0x00000034) Interrupt Enable Register                                  */
    
    struct {
      __IOM uint32_t LIE        : 1;            /*!< [0..0] Line Interrupt Enable                                              */
      __IOM uint32_t FUIE       : 1;            /*!< [1..1] FIFO Underrun Interrupt Enable                                     */
      __IOM uint32_t TERRIE     : 1;            /*!< [2..2] Transfer Error Interrupt Enable                                    */
      __IOM uint32_t RRIE       : 1;            /*!< [3..3] Register Reload interrupt enable                                   */
            uint32_t            : 28;
    } IER_b;
  } ;
  
  union {
    __IM  uint32_t ISR;                         /*!< (@ 0x00000038) Interrupt Status Register                                  */
    
    struct {
      __IM  uint32_t LIF        : 1;            /*!< [0..0] Line Interrupt flag                                                */
      __IM  uint32_t FUIF       : 1;            /*!< [1..1] FIFO Underrun Interrupt flag                                       */
      __IM  uint32_t TERRIF     : 1;            /*!< [2..2] Transfer Error interrupt flag                                      */
      __IM  uint32_t RRIF       : 1;            /*!< [3..3] Register Reload Interrupt Flag                                     */
            uint32_t            : 28;
    } ISR_b;
  } ;
  
  union {
    __OM  uint32_t ICR;                         /*!< (@ 0x0000003C) Interrupt Clear Register                                   */
    
    struct {
      __OM  uint32_t CLIF       : 1;            /*!< [0..0] Clears the Line Interrupt Flag                                     */
      __OM  uint32_t CFUIF      : 1;            /*!< [1..1] Clears the FIFO Underrun Interrupt flag                            */
      __OM  uint32_t CTERRIF    : 1;            /*!< [2..2] Clears the Transfer Error Interrupt Flag                           */
      __OM  uint32_t CRRIF      : 1;            /*!< [3..3] Clears Register Reload Interrupt Flag                              */
            uint32_t            : 28;
    } ICR_b;
  } ;
  
  union {
    __IOM uint32_t LIPCR;                       /*!< (@ 0x00000040) Line Interrupt Position Configuration Register             */
    
    struct {
      __IOM uint32_t LIPOS      : 11;           /*!< [10..0] Line Interrupt Position                                           */
            uint32_t            : 21;
    } LIPCR_b;
  } ;
  
  union {
    __IM  uint32_t CPSR;                        /*!< (@ 0x00000044) Current Position Status Register                           */
    
    struct {
      __IM  uint32_t CYPOS      : 16;           /*!< [15..0] Current Y Position                                                */
      __IM  uint32_t CXPOS      : 16;           /*!< [31..16] Current X Position                                               */
    } CPSR_b;
  } ;
  
  union {
    __IM  uint32_t CDSR;                        /*!< (@ 0x00000048) Current Display Status Register                            */
    
    struct {
      __IM  uint32_t VDES       : 1;            /*!< [0..0] Vertical Data Enable display Status                                */
      __IM  uint32_t HDES       : 1;            /*!< [1..1] Horizontal Data Enable display Status                              */
      __IM  uint32_t VSYNCS     : 1;            /*!< [2..2] Vertical Synchronization display Status                            */
      __IM  uint32_t HSYNCS     : 1;            /*!< [3..3] Horizontal Synchronization display Status                          */
            uint32_t            : 28;
    } CDSR_b;
  } ;
  __IM  uint32_t  RESERVED4[14];
  
  union {
    __IOM uint32_t L1CR;                        /*!< (@ 0x00000084) Layerx Control Register                                    */
    
    struct {
      __IOM uint32_t LEN        : 1;            /*!< [0..0] Layer Enable                                                       */
      __IOM uint32_t COLKEN     : 1;            /*!< [1..1] Color Keying Enable                                                */
            uint32_t            : 2;
      __IOM uint32_t CLUTEN     : 1;            /*!< [4..4] Color Look-Up Table Enable                                         */
            uint32_t            : 27;
    } L1CR_b;
  } ;
  
  union {
    __IOM uint32_t L1WHPCR;                     /*!< (@ 0x00000088) Layerx Window Horizontal Position Configuration
                                                                    Register                                                   */
    
    struct {
      __IOM uint32_t WHSTPOS    : 12;           /*!< [11..0] Window Horizontal Start Position                                  */
            uint32_t            : 4;
      __IOM uint32_t WHSPPOS    : 12;           /*!< [27..16] Window Horizontal Stop Position                                  */
            uint32_t            : 4;
    } L1WHPCR_b;
  } ;
  
  union {
    __IOM uint32_t L1WVPCR;                     /*!< (@ 0x0000008C) Layerx Window Vertical Position Configuration
                                                                    Register                                                   */
    
    struct {
      __IOM uint32_t WVSTPOS    : 11;           /*!< [10..0] Window Vertical Start Position                                    */
            uint32_t            : 5;
      __IOM uint32_t WVSPPOS    : 11;           /*!< [26..16] Window Vertical Stop Position                                    */
            uint32_t            : 5;
    } L1WVPCR_b;
  } ;
  
  union {
    __IOM uint32_t L1CKCR;                      /*!< (@ 0x00000090) Layerx Color Keying Configuration Register                 */
    
    struct {
      __IOM uint32_t CKBLUE     : 8;            /*!< [7..0] Color Key Blue value                                               */
      __IOM uint32_t CKGREEN    : 8;            /*!< [15..8] Color Key Green value                                             */
      __IOM uint32_t CKRED      : 8;            /*!< [23..16] Color Key Red value                                              */
            uint32_t            : 8;
    } L1CKCR_b;
  } ;
  
  union {
    __IOM uint32_t L1PFCR;                      /*!< (@ 0x00000094) Layerx Pixel Format Configuration Register                 */
    
    struct {
      __IOM uint32_t PF         : 3;            /*!< [2..0] Pixel Format                                                       */
            uint32_t            : 29;
    } L1PFCR_b;
  } ;
  
  union {
    __IOM uint32_t L1CACR;                      /*!< (@ 0x00000098) Layerx Constant Alpha Configuration Register               */
    
    struct {
      __IOM uint32_t CONSTA     : 8;            /*!< [7..0] Constant Alpha                                                     */
            uint32_t            : 24;
    } L1CACR_b;
  } ;
  
  union {
    __IOM uint32_t L1DCCR;                      /*!< (@ 0x0000009C) Layerx Default Color Configuration Register                */
    
    struct {
      __IOM uint32_t DCBLUE     : 8;            /*!< [7..0] Default Color Blue                                                 */
      __IOM uint32_t DCGREEN    : 8;            /*!< [15..8] Default Color Green                                               */
      __IOM uint32_t DCRED      : 8;            /*!< [23..16] Default Color Red                                                */
      __IOM uint32_t DCALPHA    : 8;            /*!< [31..24] Default Color Alpha                                              */
    } L1DCCR_b;
  } ;
  
  union {
    __IOM uint32_t L1BFCR;                      /*!< (@ 0x000000A0) Layerx Blending Factors Configuration Register             */
    
    struct {
      __IOM uint32_t BF2        : 3;            /*!< [2..0] Blending Factor 2                                                  */
            uint32_t            : 5;
      __IOM uint32_t BF1        : 3;            /*!< [10..8] Blending Factor 1                                                 */
            uint32_t            : 21;
    } L1BFCR_b;
  } ;
  __IM  uint32_t  RESERVED5[2];
  
  union {
    __IOM uint32_t L1CFBAR;                     /*!< (@ 0x000000AC) Layerx Color Frame Buffer Address Register                 */
    
    struct {
      __IOM uint32_t CFBADD     : 32;           /*!< [31..0] Color Frame Buffer Start Address                                  */
    } L1CFBAR_b;
  } ;
  
  union {
    __IOM uint32_t L1CFBLR;                     /*!< (@ 0x000000B0) Layerx Color Frame Buffer Length Register                  */
    
    struct {
      __IOM uint32_t CFBLL      : 13;           /*!< [12..0] Color Frame Buffer Line Length                                    */
            uint32_t            : 3;
      __IOM uint32_t CFBP       : 13;           /*!< [28..16] Color Frame Buffer Pitch in bytes                                */
            uint32_t            : 3;
    } L1CFBLR_b;
  } ;
  
  union {
    __IOM uint32_t L1CFBLNR;                    /*!< (@ 0x000000B4) Layerx ColorFrame Buffer Line Number Register              */
    
    struct {
      __IOM uint32_t CFBLNBR    : 11;           /*!< [10..0] Frame Buffer Line Number                                          */
            uint32_t            : 21;
    } L1CFBLNR_b;
  } ;
  __IM  uint32_t  RESERVED6[3];
  
  union {
    __OM  uint32_t L1CLUTWR;                    /*!< (@ 0x000000C4) Layerx CLUT Write Register                                 */
    
    struct {
      __OM  uint32_t BLUE       : 8;            /*!< [7..0] Blue value                                                         */
      __OM  uint32_t GREEN      : 8;            /*!< [15..8] Green value                                                       */
      __OM  uint32_t RED        : 8;            /*!< [23..16] Red value                                                        */
      __OM  uint32_t CLUTADD    : 8;            /*!< [31..24] CLUT Address                                                     */
    } L1CLUTWR_b;
  } ;
  __IM  uint32_t  RESERVED7[15];
  
  union {
    __IOM uint32_t L2CR;                        /*!< (@ 0x00000104) Layerx Control Register                                    */
    
    struct {
      __IOM uint32_t LEN        : 1;            /*!< [0..0] Layer Enable                                                       */
      __IOM uint32_t COLKEN     : 1;            /*!< [1..1] Color Keying Enable                                                */
            uint32_t            : 2;
      __IOM uint32_t CLUTEN     : 1;            /*!< [4..4] Color Look-Up Table Enable                                         */
            uint32_t            : 27;
    } L2CR_b;
  } ;
  
  union {
    __IOM uint32_t L2WHPCR;                     /*!< (@ 0x00000108) Layerx Window Horizontal Position Configuration
                                                                    Register                                                   */
    
    struct {
      __IOM uint32_t WHSTPOS    : 12;           /*!< [11..0] Window Horizontal Start Position                                  */
            uint32_t            : 4;
      __IOM uint32_t WHSPPOS    : 12;           /*!< [27..16] Window Horizontal Stop Position                                  */
            uint32_t            : 4;
    } L2WHPCR_b;
  } ;
  
  union {
    __IOM uint32_t L2WVPCR;                     /*!< (@ 0x0000010C) Layerx Window Vertical Position Configuration
                                                                    Register                                                   */
    
    struct {
      __IOM uint32_t WVSTPOS    : 11;           /*!< [10..0] Window Vertical Start Position                                    */
            uint32_t            : 5;
      __IOM uint32_t WVSPPOS    : 11;           /*!< [26..16] Window Vertical Stop Position                                    */
            uint32_t            : 5;
    } L2WVPCR_b;
  } ;
  
  union {
    __IOM uint32_t L2CKCR;                      /*!< (@ 0x00000110) Layerx Color Keying Configuration Register                 */
    
    struct {
      __IOM uint32_t CKBLUE     : 8;            /*!< [7..0] Color Key Blue value                                               */
      __IOM uint32_t CKGREEN    : 7;            /*!< [14..8] Color Key Green value                                             */
      __IOM uint32_t CKRED      : 9;            /*!< [23..15] Color Key Red value                                              */
            uint32_t            : 8;
    } L2CKCR_b;
  } ;
  
  union {
    __IOM uint32_t L2PFCR;                      /*!< (@ 0x00000114) Layerx Pixel Format Configuration Register                 */
    
    struct {
      __IOM uint32_t PF         : 3;            /*!< [2..0] Pixel Format                                                       */
            uint32_t            : 29;
    } L2PFCR_b;
  } ;
  
  union {
    __IOM uint32_t L2CACR;                      /*!< (@ 0x00000118) Layerx Constant Alpha Configuration Register               */
    
    struct {
      __IOM uint32_t CONSTA     : 8;            /*!< [7..0] Constant Alpha                                                     */
            uint32_t            : 24;
    } L2CACR_b;
  } ;
  
  union {
    __IOM uint32_t L2DCCR;                      /*!< (@ 0x0000011C) Layerx Default Color Configuration Register                */
    
    struct {
      __IOM uint32_t DCBLUE     : 8;            /*!< [7..0] Default Color Blue                                                 */
      __IOM uint32_t DCGREEN    : 8;            /*!< [15..8] Default Color Green                                               */
      __IOM uint32_t DCRED      : 8;            /*!< [23..16] Default Color Red                                                */
      __IOM uint32_t DCALPHA    : 8;            /*!< [31..24] Default Color Alpha                                              */
    } L2DCCR_b;
  } ;
  
  union {
    __IOM uint32_t L2BFCR;                      /*!< (@ 0x00000120) Layerx Blending Factors Configuration Register             */
    
    struct {
      __IOM uint32_t BF2        : 3;            /*!< [2..0] Blending Factor 2                                                  */
            uint32_t            : 5;
      __IOM uint32_t BF1        : 3;            /*!< [10..8] Blending Factor 1                                                 */
            uint32_t            : 21;
    } L2BFCR_b;
  } ;
  __IM  uint32_t  RESERVED8[2];
  
  union {
    __IOM uint32_t L2CFBAR;                     /*!< (@ 0x0000012C) Layerx Color Frame Buffer Address Register                 */
    
    struct {
      __IOM uint32_t CFBADD     : 32;           /*!< [31..0] Color Frame Buffer Start Address                                  */
    } L2CFBAR_b;
  } ;
  
  union {
    __IOM uint32_t L2CFBLR;                     /*!< (@ 0x00000130) Layerx Color Frame Buffer Length Register                  */
    
    struct {
      __IOM uint32_t CFBLL      : 13;           /*!< [12..0] Color Frame Buffer Line Length                                    */
            uint32_t            : 3;
      __IOM uint32_t CFBP       : 13;           /*!< [28..16] Color Frame Buffer Pitch in bytes                                */
            uint32_t            : 3;
    } L2CFBLR_b;
  } ;
  
  union {
    __IOM uint32_t L2CFBLNR;                    /*!< (@ 0x00000134) Layerx ColorFrame Buffer Line Number Register              */
    
    struct {
      __IOM uint32_t CFBLNBR    : 11;           /*!< [10..0] Frame Buffer Line Number                                          */
            uint32_t            : 21;
    } L2CFBLNR_b;
  } ;
  __IM  uint32_t  RESERVED9[3];
  
  union {
    __OM  uint32_t L2CLUTWR;                    /*!< (@ 0x00000144) Layerx CLUT Write Register                                 */
    
    struct {
      __OM  uint32_t BLUE       : 8;            /*!< [7..0] Blue value                                                         */
      __OM  uint32_t GREEN      : 8;            /*!< [15..8] Green value                                                       */
      __OM  uint32_t RED        : 8;            /*!< [23..16] Red value                                                        */
      __OM  uint32_t CLUTADD    : 8;            /*!< [31..24] CLUT Address                                                     */
    } L2CLUTWR_b;
  } ;
} LTCD_Type;                                    /*!< Size = 328 (0x148)                                                        */



/* =========================================================================================================================== */
/* ================                                           LTCD                                            ================ */
/* =========================================================================================================================== */

/* =========================================================  SSCR  ========================================================== */
#define LTCD_SSCR_HSW_Pos                 (16UL)                    /*!< HSW (Bit 16)                                          */
#define LTCD_SSCR_HSW_Msk                 (0x3ff0000UL)             /*!< HSW (Bitfield-Mask: 0x3ff)                            */
#define LTCD_SSCR_VSH_Pos                 (0UL)                     /*!< VSH (Bit 0)                                           */
#define LTCD_SSCR_VSH_Msk                 (0x7ffUL)                 /*!< VSH (Bitfield-Mask: 0x7ff)                            */
/* =========================================================  BPCR  ========================================================== */
#define LTCD_BPCR_AHBP_Pos                (16UL)                    /*!< AHBP (Bit 16)                                         */
#define LTCD_BPCR_AHBP_Msk                (0x3ff0000UL)             /*!< AHBP (Bitfield-Mask: 0x3ff)                           */
#define LTCD_BPCR_AVBP_Pos                (0UL)                     /*!< AVBP (Bit 0)                                          */
#define LTCD_BPCR_AVBP_Msk                (0x7ffUL)                 /*!< AVBP (Bitfield-Mask: 0x7ff)                           */
/* =========================================================  AWCR  ========================================================== */
#define LTCD_AWCR_AAV_Pos                 (16UL)                    /*!< AAV (Bit 16)                                          */
#define LTCD_AWCR_AAV_Msk                 (0x3ff0000UL)             /*!< AAV (Bitfield-Mask: 0x3ff)                            */
#define LTCD_AWCR_AAH_Pos                 (0UL)                     /*!< AAH (Bit 0)                                           */
#define LTCD_AWCR_AAH_Msk                 (0x7ffUL)                 /*!< AAH (Bitfield-Mask: 0x7ff)                            */
/* =========================================================  TWCR  ========================================================== */
#define LTCD_TWCR_TOTALW_Pos              (16UL)                    /*!< TOTALW (Bit 16)                                       */
#define LTCD_TWCR_TOTALW_Msk              (0x3ff0000UL)             /*!< TOTALW (Bitfield-Mask: 0x3ff)                         */
#define LTCD_TWCR_TOTALH_Pos              (0UL)                     /*!< TOTALH (Bit 0)                                        */
#define LTCD_TWCR_TOTALH_Msk              (0x7ffUL)                 /*!< TOTALH (Bitfield-Mask: 0x7ff)                         */
/* ==========================================================  GCR  ========================================================== */
#define LTCD_GCR_HSPOL_Pos                (31UL)                    /*!< HSPOL (Bit 31)                                        */
#define LTCD_GCR_HSPOL_Msk                (0x80000000UL)            /*!< HSPOL (Bitfield-Mask: 0x01)                           */
#define LTCD_GCR_VSPOL_Pos                (30UL)                    /*!< VSPOL (Bit 30)                                        */
#define LTCD_GCR_VSPOL_Msk                (0x40000000UL)            /*!< VSPOL (Bitfield-Mask: 0x01)                           */
#define LTCD_GCR_DEPOL_Pos                (29UL)                    /*!< DEPOL (Bit 29)                                        */
#define LTCD_GCR_DEPOL_Msk                (0x20000000UL)            /*!< DEPOL (Bitfield-Mask: 0x01)                           */
#define LTCD_GCR_PCPOL_Pos                (28UL)                    /*!< PCPOL (Bit 28)                                        */
#define LTCD_GCR_PCPOL_Msk                (0x10000000UL)            /*!< PCPOL (Bitfield-Mask: 0x01)                           */
#define LTCD_GCR_DEN_Pos                  (16UL)                    /*!< DEN (Bit 16)                                          */
#define LTCD_GCR_DEN_Msk                  (0x10000UL)               /*!< DEN (Bitfield-Mask: 0x01)                             */
#define LTCD_GCR_DRW_Pos                  (12UL)                    /*!< DRW (Bit 12)                                          */
#define LTCD_GCR_DRW_Msk                  (0x7000UL)                /*!< DRW (Bitfield-Mask: 0x07)                             */
#define LTCD_GCR_DGW_Pos                  (8UL)                     /*!< DGW (Bit 8)                                           */
#define LTCD_GCR_DGW_Msk                  (0x700UL)                 /*!< DGW (Bitfield-Mask: 0x07)                             */
#define LTCD_GCR_DBW_Pos                  (4UL)                     /*!< DBW (Bit 4)                                           */
#define LTCD_GCR_DBW_Msk                  (0x70UL)                  /*!< DBW (Bitfield-Mask: 0x07)                             */
#define LTCD_GCR_LTDCEN_Pos               (0UL)                     /*!< LTDCEN (Bit 0)                                        */
#define LTCD_GCR_LTDCEN_Msk               (0x1UL)                   /*!< LTDCEN (Bitfield-Mask: 0x01)                          */
/* =========================================================  SRCR  ========================================================== */
#define LTCD_SRCR_VBR_Pos                 (1UL)                     /*!< VBR (Bit 1)                                           */
#define LTCD_SRCR_VBR_Msk                 (0x2UL)                   /*!< VBR (Bitfield-Mask: 0x01)                             */
#define LTCD_SRCR_IMR_Pos                 (0UL)                     /*!< IMR (Bit 0)                                           */
#define LTCD_SRCR_IMR_Msk                 (0x1UL)                   /*!< IMR (Bitfield-Mask: 0x01)                             */
/* =========================================================  BCCR  ========================================================== */
#define LTCD_BCCR_BC_Pos                  (0UL)                     /*!< BC (Bit 0)                                            */
#define LTCD_BCCR_BC_Msk                  (0xffffffUL)              /*!< BC (Bitfield-Mask: 0xffffff)                          */
/* ==========================================================  IER  ========================================================== */
#define LTCD_IER_RRIE_Pos                 (3UL)                     /*!< RRIE (Bit 3)                                          */
#define LTCD_IER_RRIE_Msk                 (0x8UL)                   /*!< RRIE (Bitfield-Mask: 0x01)                            */
#define LTCD_IER_TERRIE_Pos               (2UL)                     /*!< TERRIE (Bit 2)                                        */
#define LTCD_IER_TERRIE_Msk               (0x4UL)                   /*!< TERRIE (Bitfield-Mask: 0x01)                          */
#define LTCD_IER_FUIE_Pos                 (1UL)                     /*!< FUIE (Bit 1)                                          */
#define LTCD_IER_FUIE_Msk                 (0x2UL)                   /*!< FUIE (Bitfield-Mask: 0x01)                            */
#define LTCD_IER_LIE_Pos                  (0UL)                     /*!< LIE (Bit 0)                                           */
#define LTCD_IER_LIE_Msk                  (0x1UL)                   /*!< LIE (Bitfield-Mask: 0x01)                             */
/* ==========================================================  ISR  ========================================================== */
#define LTCD_ISR_RRIF_Pos                 (3UL)                     /*!< RRIF (Bit 3)                                          */
#define LTCD_ISR_RRIF_Msk                 (0x8UL)                   /*!< RRIF (Bitfield-Mask: 0x01)                            */
#define LTCD_ISR_TERRIF_Pos               (2UL)                     /*!< TERRIF (Bit 2)                                        */
#define LTCD_ISR_TERRIF_Msk               (0x4UL)                   /*!< TERRIF (Bitfield-Mask: 0x01)                          */
#define LTCD_ISR_FUIF_Pos                 (1UL)                     /*!< FUIF (Bit 1)                                          */
#define LTCD_ISR_FUIF_Msk                 (0x2UL)                   /*!< FUIF (Bitfield-Mask: 0x01)                            */
#define LTCD_ISR_LIF_Pos                  (0UL)                     /*!< LIF (Bit 0)                                           */
#define LTCD_ISR_LIF_Msk                  (0x1UL)                   /*!< LIF (Bitfield-Mask: 0x01)                             */
/* ==========================================================  ICR  ========================================================== */
#define LTCD_ICR_CRRIF_Pos                (3UL)                     /*!< CRRIF (Bit 3)                                         */
#define LTCD_ICR_CRRIF_Msk                (0x8UL)                   /*!< CRRIF (Bitfield-Mask: 0x01)                           */
#define LTCD_ICR_CTERRIF_Pos              (2UL)                     /*!< CTERRIF (Bit 2)                                       */
#define LTCD_ICR_CTERRIF_Msk              (0x4UL)                   /*!< CTERRIF (Bitfield-Mask: 0x01)                         */
#define LTCD_ICR_CFUIF_Pos                (1UL)                     /*!< CFUIF (Bit 1)                                         */
#define LTCD_ICR_CFUIF_Msk                (0x2UL)                   /*!< CFUIF (Bitfield-Mask: 0x01)                           */
#define LTCD_ICR_CLIF_Pos                 (0UL)                     /*!< CLIF (Bit 0)                                          */
#define LTCD_ICR_CLIF_Msk                 (0x1UL)                   /*!< CLIF (Bitfield-Mask: 0x01)                            */
/* =========================================================  LIPCR  ========================================================= */
#define LTCD_LIPCR_LIPOS_Pos              (0UL)                     /*!< LIPOS (Bit 0)                                         */
#define LTCD_LIPCR_LIPOS_Msk              (0x7ffUL)                 /*!< LIPOS (Bitfield-Mask: 0x7ff)                          */
/* =========================================================  CPSR  ========================================================== */
#define LTCD_CPSR_CXPOS_Pos               (16UL)                    /*!< CXPOS (Bit 16)                                        */
#define LTCD_CPSR_CXPOS_Msk               (0xffff0000UL)            /*!< CXPOS (Bitfield-Mask: 0xffff)                         */
#define LTCD_CPSR_CYPOS_Pos               (0UL)                     /*!< CYPOS (Bit 0)                                         */
#define LTCD_CPSR_CYPOS_Msk               (0xffffUL)                /*!< CYPOS (Bitfield-Mask: 0xffff)                         */
/* =========================================================  CDSR  ========================================================== */
#define LTCD_CDSR_HSYNCS_Pos              (3UL)                     /*!< HSYNCS (Bit 3)                                        */
#define LTCD_CDSR_HSYNCS_Msk              (0x8UL)                   /*!< HSYNCS (Bitfield-Mask: 0x01)                          */
#define LTCD_CDSR_VSYNCS_Pos              (2UL)                     /*!< VSYNCS (Bit 2)                                        */
#define LTCD_CDSR_VSYNCS_Msk              (0x4UL)                   /*!< VSYNCS (Bitfield-Mask: 0x01)                          */
#define LTCD_CDSR_HDES_Pos                (1UL)                     /*!< HDES (Bit 1)                                          */
#define LTCD_CDSR_HDES_Msk                (0x2UL)                   /*!< HDES (Bitfield-Mask: 0x01)                            */
#define LTCD_CDSR_VDES_Pos                (0UL)                     /*!< VDES (Bit 0)                                          */
#define LTCD_CDSR_VDES_Msk                (0x1UL)                   /*!< VDES (Bitfield-Mask: 0x01)                            */
/* =========================================================  L1CR  ========================================================== */
#define LTCD_L1CR_CLUTEN_Pos              (4UL)                     /*!< CLUTEN (Bit 4)                                        */
#define LTCD_L1CR_CLUTEN_Msk              (0x10UL)                  /*!< CLUTEN (Bitfield-Mask: 0x01)                          */
#define LTCD_L1CR_COLKEN_Pos              (1UL)                     /*!< COLKEN (Bit 1)                                        */
#define LTCD_L1CR_COLKEN_Msk              (0x2UL)                   /*!< COLKEN (Bitfield-Mask: 0x01)                          */
#define LTCD_L1CR_LEN_Pos                 (0UL)                     /*!< LEN (Bit 0)                                           */
#define LTCD_L1CR_LEN_Msk                 (0x1UL)                   /*!< LEN (Bitfield-Mask: 0x01)                             */
/* ========================================================  L1WHPCR  ======================================================== */
#define LTCD_L1WHPCR_WHSPPOS_Pos          (16UL)                    /*!< WHSPPOS (Bit 16)                                      */
#define LTCD_L1WHPCR_WHSPPOS_Msk          (0xfff0000UL)             /*!< WHSPPOS (Bitfield-Mask: 0xfff)                        */
#define LTCD_L1WHPCR_WHSTPOS_Pos          (0UL)                     /*!< WHSTPOS (Bit 0)                                       */
#define LTCD_L1WHPCR_WHSTPOS_Msk          (0xfffUL)                 /*!< WHSTPOS (Bitfield-Mask: 0xfff)                        */
/* ========================================================  L1WVPCR  ======================================================== */
#define LTCD_L1WVPCR_WVSPPOS_Pos          (16UL)                    /*!< WVSPPOS (Bit 16)                                      */
#define LTCD_L1WVPCR_WVSPPOS_Msk          (0x7ff0000UL)             /*!< WVSPPOS (Bitfield-Mask: 0x7ff)                        */
#define LTCD_L1WVPCR_WVSTPOS_Pos          (0UL)                     /*!< WVSTPOS (Bit 0)                                       */
#define LTCD_L1WVPCR_WVSTPOS_Msk          (0x7ffUL)                 /*!< WVSTPOS (Bitfield-Mask: 0x7ff)                        */
/* ========================================================  L1CKCR  ========================================================= */
#define LTCD_L1CKCR_CKRED_Pos             (16UL)                    /*!< CKRED (Bit 16)                                        */
#define LTCD_L1CKCR_CKRED_Msk             (0xff0000UL)              /*!< CKRED (Bitfield-Mask: 0xff)                           */
#define LTCD_L1CKCR_CKGREEN_Pos           (8UL)                     /*!< CKGREEN (Bit 8)                                       */
#define LTCD_L1CKCR_CKGREEN_Msk           (0xff00UL)                /*!< CKGREEN (Bitfield-Mask: 0xff)                         */
#define LTCD_L1CKCR_CKBLUE_Pos            (0UL)                     /*!< CKBLUE (Bit 0)                                        */
#define LTCD_L1CKCR_CKBLUE_Msk            (0xffUL)                  /*!< CKBLUE (Bitfield-Mask: 0xff)                          */
/* ========================================================  L1PFCR  ========================================================= */
#define LTCD_L1PFCR_PF_Pos                (0UL)                     /*!< PF (Bit 0)                                            */
#define LTCD_L1PFCR_PF_Msk                (0x7UL)                   /*!< PF (Bitfield-Mask: 0x07)                              */
/* ========================================================  L1CACR  ========================================================= */
#define LTCD_L1CACR_CONSTA_Pos            (0UL)                     /*!< CONSTA (Bit 0)                                        */
#define LTCD_L1CACR_CONSTA_Msk            (0xffUL)                  /*!< CONSTA (Bitfield-Mask: 0xff)                          */
/* ========================================================  L1DCCR  ========================================================= */
#define LTCD_L1DCCR_DCALPHA_Pos           (24UL)                    /*!< DCALPHA (Bit 24)                                      */
#define LTCD_L1DCCR_DCALPHA_Msk           (0xff000000UL)            /*!< DCALPHA (Bitfield-Mask: 0xff)                         */
#define LTCD_L1DCCR_DCRED_Pos             (16UL)                    /*!< DCRED (Bit 16)                                        */
#define LTCD_L1DCCR_DCRED_Msk             (0xff0000UL)              /*!< DCRED (Bitfield-Mask: 0xff)                           */
#define LTCD_L1DCCR_DCGREEN_Pos           (8UL)                     /*!< DCGREEN (Bit 8)                                       */
#define LTCD_L1DCCR_DCGREEN_Msk           (0xff00UL)                /*!< DCGREEN (Bitfield-Mask: 0xff)                         */
#define LTCD_L1DCCR_DCBLUE_Pos            (0UL)                     /*!< DCBLUE (Bit 0)                                        */
#define LTCD_L1DCCR_DCBLUE_Msk            (0xffUL)                  /*!< DCBLUE (Bitfield-Mask: 0xff)                          */
/* ========================================================  L1BFCR  ========================================================= */
#define LTCD_L1BFCR_BF1_Pos               (8UL)                     /*!< BF1 (Bit 8)                                           */
#define LTCD_L1BFCR_BF1_Msk               (0x700UL)                 /*!< BF1 (Bitfield-Mask: 0x07)                             */
#define LTCD_L1BFCR_BF2_Pos               (0UL)                     /*!< BF2 (Bit 0)                                           */
#define LTCD_L1BFCR_BF2_Msk               (0x7UL)                   /*!< BF2 (Bitfield-Mask: 0x07)                             */
/* ========================================================  L1CFBAR  ======================================================== */
#define LTCD_L1CFBAR_CFBADD_Pos           (0UL)                     /*!< CFBADD (Bit 0)                                        */
#define LTCD_L1CFBAR_CFBADD_Msk           (0xffffffffUL)            /*!< CFBADD (Bitfield-Mask: 0xffffffff)                    */
/* ========================================================  L1CFBLR  ======================================================== */
#define LTCD_L1CFBLR_CFBP_Pos             (16UL)                    /*!< CFBP (Bit 16)                                         */
#define LTCD_L1CFBLR_CFBP_Msk             (0x1fff0000UL)            /*!< CFBP (Bitfield-Mask: 0x1fff)                          */
#define LTCD_L1CFBLR_CFBLL_Pos            (0UL)                     /*!< CFBLL (Bit 0)                                         */
#define LTCD_L1CFBLR_CFBLL_Msk            (0x1fffUL)                /*!< CFBLL (Bitfield-Mask: 0x1fff)                         */
/* =======================================================  L1CFBLNR  ======================================================== */
#define LTCD_L1CFBLNR_CFBLNBR_Pos         (0UL)                     /*!< CFBLNBR (Bit 0)                                       */
#define LTCD_L1CFBLNR_CFBLNBR_Msk         (0x7ffUL)                 /*!< CFBLNBR (Bitfield-Mask: 0x7ff)                        */
/* =======================================================  L1CLUTWR  ======================================================== */
#define LTCD_L1CLUTWR_CLUTADD_Pos         (24UL)                    /*!< CLUTADD (Bit 24)                                      */
#define LTCD_L1CLUTWR_CLUTADD_Msk         (0xff000000UL)            /*!< CLUTADD (Bitfield-Mask: 0xff)                         */
#define LTCD_L1CLUTWR_RED_Pos             (16UL)                    /*!< RED (Bit 16)                                          */
#define LTCD_L1CLUTWR_RED_Msk             (0xff0000UL)              /*!< RED (Bitfield-Mask: 0xff)                             */
#define LTCD_L1CLUTWR_GREEN_Pos           (8UL)                     /*!< GREEN (Bit 8)                                         */
#define LTCD_L1CLUTWR_GREEN_Msk           (0xff00UL)                /*!< GREEN (Bitfield-Mask: 0xff)                           */
#define LTCD_L1CLUTWR_BLUE_Pos            (0UL)                     /*!< BLUE (Bit 0)                                          */
#define LTCD_L1CLUTWR_BLUE_Msk            (0xffUL)                  /*!< BLUE (Bitfield-Mask: 0xff)                            */
/* =========================================================  L2CR  ========================================================== */
#define LTCD_L2CR_CLUTEN_Pos              (4UL)                     /*!< CLUTEN (Bit 4)                                        */
#define LTCD_L2CR_CLUTEN_Msk              (0x10UL)                  /*!< CLUTEN (Bitfield-Mask: 0x01)                          */
#define LTCD_L2CR_COLKEN_Pos              (1UL)                     /*!< COLKEN (Bit 1)                                        */
#define LTCD_L2CR_COLKEN_Msk              (0x2UL)                   /*!< COLKEN (Bitfield-Mask: 0x01)                          */
#define LTCD_L2CR_LEN_Pos                 (0UL)                     /*!< LEN (Bit 0)                                           */
#define LTCD_L2CR_LEN_Msk                 (0x1UL)                   /*!< LEN (Bitfield-Mask: 0x01)                             */
/* ========================================================  L2WHPCR  ======================================================== */
#define LTCD_L2WHPCR_WHSPPOS_Pos          (16UL)                    /*!< WHSPPOS (Bit 16)                                      */
#define LTCD_L2WHPCR_WHSPPOS_Msk          (0xfff0000UL)             /*!< WHSPPOS (Bitfield-Mask: 0xfff)                        */
#define LTCD_L2WHPCR_WHSTPOS_Pos          (0UL)                     /*!< WHSTPOS (Bit 0)                                       */
#define LTCD_L2WHPCR_WHSTPOS_Msk          (0xfffUL)                 /*!< WHSTPOS (Bitfield-Mask: 0xfff)                        */
/* ========================================================  L2WVPCR  ======================================================== */
#define LTCD_L2WVPCR_WVSPPOS_Pos          (16UL)                    /*!< WVSPPOS (Bit 16)                                      */
#define LTCD_L2WVPCR_WVSPPOS_Msk          (0x7ff0000UL)             /*!< WVSPPOS (Bitfield-Mask: 0x7ff)                        */
#define LTCD_L2WVPCR_WVSTPOS_Pos          (0UL)                     /*!< WVSTPOS (Bit 0)                                       */
#define LTCD_L2WVPCR_WVSTPOS_Msk          (0x7ffUL)                 /*!< WVSTPOS (Bitfield-Mask: 0x7ff)                        */
/* ========================================================  L2CKCR  ========================================================= */
#define LTCD_L2CKCR_CKRED_Pos             (15UL)                    /*!< CKRED (Bit 15)                                        */
#define LTCD_L2CKCR_CKRED_Msk             (0xff8000UL)              /*!< CKRED (Bitfield-Mask: 0x1ff)                          */
#define LTCD_L2CKCR_CKGREEN_Pos           (8UL)                     /*!< CKGREEN (Bit 8)                                       */
#define LTCD_L2CKCR_CKGREEN_Msk           (0x7f00UL)                /*!< CKGREEN (Bitfield-Mask: 0x7f)                         */
#define LTCD_L2CKCR_CKBLUE_Pos            (0UL)                     /*!< CKBLUE (Bit 0)                                        */
#define LTCD_L2CKCR_CKBLUE_Msk            (0xffUL)                  /*!< CKBLUE (Bitfield-Mask: 0xff)                          */
/* ========================================================  L2PFCR  ========================================================= */
#define LTCD_L2PFCR_PF_Pos                (0UL)                     /*!< PF (Bit 0)                                            */
#define LTCD_L2PFCR_PF_Msk                (0x7UL)                   /*!< PF (Bitfield-Mask: 0x07)                              */
/* ========================================================  L2CACR  ========================================================= */
#define LTCD_L2CACR_CONSTA_Pos            (0UL)                     /*!< CONSTA (Bit 0)                                        */
#define LTCD_L2CACR_CONSTA_Msk            (0xffUL)                  /*!< CONSTA (Bitfield-Mask: 0xff)                          */
/* ========================================================  L2DCCR  ========================================================= */
#define LTCD_L2DCCR_DCALPHA_Pos           (24UL)                    /*!< DCALPHA (Bit 24)                                      */
#define LTCD_L2DCCR_DCALPHA_Msk           (0xff000000UL)            /*!< DCALPHA (Bitfield-Mask: 0xff)                         */
#define LTCD_L2DCCR_DCRED_Pos             (16UL)                    /*!< DCRED (Bit 16)                                        */
#define LTCD_L2DCCR_DCRED_Msk             (0xff0000UL)              /*!< DCRED (Bitfield-Mask: 0xff)                           */
#define LTCD_L2DCCR_DCGREEN_Pos           (8UL)                     /*!< DCGREEN (Bit 8)                                       */
#define LTCD_L2DCCR_DCGREEN_Msk           (0xff00UL)                /*!< DCGREEN (Bitfield-Mask: 0xff)                         */
#define LTCD_L2DCCR_DCBLUE_Pos            (0UL)                     /*!< DCBLUE (Bit 0)                                        */
#define LTCD_L2DCCR_DCBLUE_Msk            (0xffUL)                  /*!< DCBLUE (Bitfield-Mask: 0xff)                          */
/* ========================================================  L2BFCR  ========================================================= */
#define LTCD_L2BFCR_BF1_Pos               (8UL)                     /*!< BF1 (Bit 8)                                           */
#define LTCD_L2BFCR_BF1_Msk               (0x700UL)                 /*!< BF1 (Bitfield-Mask: 0x07)                             */
#define LTCD_L2BFCR_BF2_Pos               (0UL)                     /*!< BF2 (Bit 0)                                           */
#define LTCD_L2BFCR_BF2_Msk               (0x7UL)                   /*!< BF2 (Bitfield-Mask: 0x07)                             */
/* ========================================================  L2CFBAR  ======================================================== */
#define LTCD_L2CFBAR_CFBADD_Pos           (0UL)                     /*!< CFBADD (Bit 0)                                        */
#define LTCD_L2CFBAR_CFBADD_Msk           (0xffffffffUL)            /*!< CFBADD (Bitfield-Mask: 0xffffffff)                    */
/* ========================================================  L2CFBLR  ======================================================== */
#define LTCD_L2CFBLR_CFBP_Pos             (16UL)                    /*!< CFBP (Bit 16)                                         */
#define LTCD_L2CFBLR_CFBP_Msk             (0x1fff0000UL)            /*!< CFBP (Bitfield-Mask: 0x1fff)                          */
#define LTCD_L2CFBLR_CFBLL_Pos            (0UL)                     /*!< CFBLL (Bit 0)                                         */
#define LTCD_L2CFBLR_CFBLL_Msk            (0x1fffUL)                /*!< CFBLL (Bitfield-Mask: 0x1fff)                         */
/* =======================================================  L2CFBLNR  ======================================================== */
#define LTCD_L2CFBLNR_CFBLNBR_Pos         (0UL)                     /*!< CFBLNBR (Bit 0)                                       */
#define LTCD_L2CFBLNR_CFBLNBR_Msk         (0x7ffUL)                 /*!< CFBLNBR (Bitfield-Mask: 0x7ff)                        */
/* =======================================================  L2CLUTWR  ======================================================== */
#define LTCD_L2CLUTWR_CLUTADD_Pos         (24UL)                    /*!< CLUTADD (Bit 24)                                      */
#define LTCD_L2CLUTWR_CLUTADD_Msk         (0xff000000UL)            /*!< CLUTADD (Bitfield-Mask: 0xff)                         */
#define LTCD_L2CLUTWR_RED_Pos             (16UL)                    /*!< RED (Bit 16)                                          */
#define LTCD_L2CLUTWR_RED_Msk             (0xff0000UL)              /*!< RED (Bitfield-Mask: 0xff)                             */
#define LTCD_L2CLUTWR_GREEN_Pos           (8UL)                     /*!< GREEN (Bit 8)                                         */
#define LTCD_L2CLUTWR_GREEN_Msk           (0xff00UL)                /*!< GREEN (Bitfield-Mask: 0xff)                           */
#define LTCD_L2CLUTWR_BLUE_Pos            (0UL)                     /*!< BLUE (Bit 0)                                          */
#define LTCD_L2CLUTWR_BLUE_Msk            (0xffUL)                  /*!< BLUE (Bitfield-Mask: 0xff)                            */
