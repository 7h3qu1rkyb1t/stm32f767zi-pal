#include "core.h"

#define JPEG_BASE                   0x50051000UL
#define JPEG                        ((volatile JPEG_Type*)              JPEG_BASE)

/* =========================================================================================================================== */
/* ================                                           JPEG                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief JPEG codec (JPEG)
  */

typedef struct {                                /*!< (@ 0x50051000) JPEG Structure                                             */
  
  union {
    __OM  uint32_t JPEG_CONFR0;                 /*!< (@ 0x00000000) JPEG codec configuration register 0                        */
    
    struct {
      __OM  uint32_t START      : 1;            /*!< [0..0] Start                                                              */
            uint32_t            : 31;
    } JPEG_CONFR0_b;
  } ;
  
  union {
    __IOM uint32_t JPEG_CONFR1;                 /*!< (@ 0x00000004) JPEG codec configuration register 1                        */
    
    struct {
      __IOM uint32_t NF         : 2;            /*!< [1..0] Number of color components                                         */
            uint32_t            : 1;
      __IOM uint32_t DE         : 1;            /*!< [3..3] Decoding Enable                                                    */
      __IOM uint32_t COLORSPACE : 2;            /*!< [5..4] Color Space                                                        */
      __IOM uint32_t NS         : 2;            /*!< [7..6] Number of components for Scan                                      */
      __IOM uint32_t HDR        : 1;            /*!< [8..8] Header Processing                                                  */
            uint32_t            : 7;
      __IOM uint32_t YSIZE      : 16;           /*!< [31..16] Y Size                                                           */
    } JPEG_CONFR1_b;
  } ;
  
  union {
    __IOM uint32_t JPEG_CONFR2;                 /*!< (@ 0x00000008) JPEG codec configuration register 2                        */
    
    struct {
      __IOM uint32_t NMCU       : 26;           /*!< [25..0] Number of MCU                                                     */
            uint32_t            : 6;
    } JPEG_CONFR2_b;
  } ;
  
  union {
    __IOM uint32_t JPEG_CONFR3;                 /*!< (@ 0x0000000C) JPEG codec configuration register 3                        */
    
    struct {
            uint32_t            : 16;
      __IOM uint32_t XSIZE      : 16;           /*!< [31..16] X size                                                           */
    } JPEG_CONFR3_b;
  } ;
  
  union {
    __IOM uint32_t JPEG_CONFR4;                 /*!< (@ 0x00000010) JPEG codec configuration register 4                        */
    
    struct {
      __IOM uint32_t HD         : 1;            /*!< [0..0] Huffman DC                                                         */
      __IOM uint32_t HA         : 1;            /*!< [1..1] Huffman AC                                                         */
      __IOM uint32_t QT         : 2;            /*!< [3..2] Quantization Table                                                 */
      __IOM uint32_t NB         : 4;            /*!< [7..4] Number of Block                                                    */
      __IOM uint32_t VSF        : 4;            /*!< [11..8] Vertical Sampling Factor                                          */
      __IOM uint32_t HSF        : 4;            /*!< [15..12] Horizontal Sampling Factor                                       */
            uint32_t            : 16;
    } JPEG_CONFR4_b;
  } ;
  
  union {
    __IOM uint32_t JPEG_CONFR5;                 /*!< (@ 0x00000014) JPEG codec configuration register 5                        */
    
    struct {
      __IOM uint32_t HD         : 1;            /*!< [0..0] Huffman DC                                                         */
      __IOM uint32_t HA         : 1;            /*!< [1..1] Huffman AC                                                         */
      __IOM uint32_t QT         : 2;            /*!< [3..2] Quantization Table                                                 */
      __IOM uint32_t NB         : 4;            /*!< [7..4] Number of Block                                                    */
      __IOM uint32_t VSF        : 4;            /*!< [11..8] Vertical Sampling Factor                                          */
      __IOM uint32_t HSF        : 4;            /*!< [15..12] Horizontal Sampling Factor                                       */
            uint32_t            : 16;
    } JPEG_CONFR5_b;
  } ;
  
  union {
    __IOM uint32_t JPEG_CONFR6;                 /*!< (@ 0x00000018) JPEG codec configuration register 6                        */
    
    struct {
      __IOM uint32_t HD         : 1;            /*!< [0..0] Huffman DC                                                         */
      __IOM uint32_t HA         : 1;            /*!< [1..1] Huffman AC                                                         */
      __IOM uint32_t QT         : 2;            /*!< [3..2] Quantization Table                                                 */
      __IOM uint32_t NB         : 4;            /*!< [7..4] Number of Block                                                    */
      __IOM uint32_t VSF        : 4;            /*!< [11..8] Vertical Sampling Factor                                          */
      __IOM uint32_t HSF        : 4;            /*!< [15..12] Horizontal Sampling Factor                                       */
            uint32_t            : 16;
    } JPEG_CONFR6_b;
  } ;
  
  union {
    __IOM uint32_t JPEG_CONFR7;                 /*!< (@ 0x0000001C) JPEG codec configuration register 7                        */
    
    struct {
      __IOM uint32_t HD         : 1;            /*!< [0..0] Huffman DC                                                         */
      __IOM uint32_t HA         : 1;            /*!< [1..1] Huffman AC                                                         */
      __IOM uint32_t QT         : 2;            /*!< [3..2] Quantization Table                                                 */
      __IOM uint32_t NB         : 4;            /*!< [7..4] Number of Block                                                    */
      __IOM uint32_t VSF        : 4;            /*!< [11..8] Vertical Sampling Factor                                          */
      __IOM uint32_t HSF        : 4;            /*!< [15..12] Horizontal Sampling Factor                                       */
            uint32_t            : 16;
    } JPEG_CONFR7_b;
  } ;
  __IM  uint32_t  RESERVED[4];
  
  union {
    __IOM uint32_t JPEG_CR;                     /*!< (@ 0x00000030) JPEG control register                                      */
    
    struct {
      __IOM uint32_t JCEN       : 1;            /*!< [0..0] JPEG Core Enable                                                   */
      __IOM uint32_t IFTIE      : 1;            /*!< [1..1] Input FIFO Threshold Interrupt Enable                              */
      __IOM uint32_t IFNFIE     : 1;            /*!< [2..2] Input FIFO Not Full Interrupt Enable                               */
      __IOM uint32_t OFTIE      : 1;            /*!< [3..3] Output FIFO Threshold Interrupt Enable                             */
      __IOM uint32_t OFNEIE     : 1;            /*!< [4..4] Output FIFO Not Empty Interrupt Enable                             */
      __IOM uint32_t EOCIE      : 1;            /*!< [5..5] End of Conversion Interrupt Enable                                 */
      __IOM uint32_t HPDIE      : 1;            /*!< [6..6] Header Parsing Done Interrupt Enable                               */
            uint32_t            : 4;
      __IOM uint32_t IDMAEN     : 1;            /*!< [11..11] Input DMA Enable                                                 */
      __IOM uint32_t ODMAEN     : 1;            /*!< [12..12] Output DMA Enable                                                */
      __IM  uint32_t IFF        : 1;            /*!< [13..13] Input FIFO Flush                                                 */
      __IM  uint32_t OFF        : 1;            /*!< [14..14] Output FIFO Flush                                                */
            uint32_t            : 17;
    } JPEG_CR_b;
  } ;
  
  union {
    __IM  uint32_t JPEG_SR;                     /*!< (@ 0x00000034) JPEG status register                                       */
    
    struct {
            uint32_t            : 1;
      __IM  uint32_t IFTF       : 1;            /*!< [1..1] Input FIFO Threshold Flag                                          */
      __IM  uint32_t IFNFF      : 1;            /*!< [2..2] Input FIFO Not Full Flag                                           */
      __IM  uint32_t OFTF       : 1;            /*!< [3..3] Output FIFO Threshold Flag                                         */
      __IM  uint32_t OFNEF      : 1;            /*!< [4..4] Output FIFO Not Empty Flag                                         */
      __IM  uint32_t EOCF       : 1;            /*!< [5..5] End of Conversion Flag                                             */
      __IM  uint32_t HPDF       : 1;            /*!< [6..6] Header Parsing Done Flag                                           */
      __IM  uint32_t COF        : 1;            /*!< [7..7] Codec Operation Flag                                               */
            uint32_t            : 24;
    } JPEG_SR_b;
  } ;
  
  union {
    __OM  uint32_t JPEG_CFR;                    /*!< (@ 0x00000038) JPEG clear flag register                                   */
    
    struct {
            uint32_t            : 5;
      __OM  uint32_t CEOCF      : 1;            /*!< [5..5] Clear End of Conversion Flag                                       */
      __OM  uint32_t CHPDF      : 1;            /*!< [6..6] Clear Header Parsing Done Flag                                     */
            uint32_t            : 25;
    } JPEG_CFR_b;
  } ;
  __IM  uint32_t  RESERVED1;
  
  union {
    __OM  uint32_t JPEG_DIR;                    /*!< (@ 0x00000040) JPEG data input register                                   */
    
    struct {
      __OM  uint32_t DATAIN     : 32;           /*!< [31..0] Data Input FIFO                                                   */
    } JPEG_DIR_b;
  } ;
  
  union {
    __IM  uint32_t JPEG_DOR;                    /*!< (@ 0x00000044) JPEG data output register                                  */
    
    struct {
      __IM  uint32_t DATAOUT    : 32;           /*!< [31..0] Data Output FIFO                                                  */
    } JPEG_DOR_b;
  } ;
  __IM  uint32_t  RESERVED2[2];
  
  union {
    __IOM uint32_t QMEM0_0;                     /*!< (@ 0x00000050) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_0_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_1;                     /*!< (@ 0x00000054) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_1_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_2;                     /*!< (@ 0x00000058) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_2_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_3;                     /*!< (@ 0x0000005C) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_3_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_4;                     /*!< (@ 0x00000060) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_4_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_5;                     /*!< (@ 0x00000064) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_5_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_6;                     /*!< (@ 0x00000068) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_6_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_7;                     /*!< (@ 0x0000006C) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_7_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_8;                     /*!< (@ 0x00000070) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_8_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_9;                     /*!< (@ 0x00000074) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_9_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_10;                    /*!< (@ 0x00000078) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_10_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_11;                    /*!< (@ 0x0000007C) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_11_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_12;                    /*!< (@ 0x00000080) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_12_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_13;                    /*!< (@ 0x00000084) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_13_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_14;                    /*!< (@ 0x00000088) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_14_b;
  } ;
  
  union {
    __IOM uint32_t QMEM0_15;                    /*!< (@ 0x0000008C) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM0_15_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_0;                     /*!< (@ 0x00000090) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_0_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_1;                     /*!< (@ 0x00000094) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_1_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_2;                     /*!< (@ 0x00000098) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_2_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_3;                     /*!< (@ 0x0000009C) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_3_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_4;                     /*!< (@ 0x000000A0) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_4_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_5;                     /*!< (@ 0x000000A4) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_5_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_6;                     /*!< (@ 0x000000A8) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_6_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_7;                     /*!< (@ 0x000000AC) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_7_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_8;                     /*!< (@ 0x000000B0) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_8_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_9;                     /*!< (@ 0x000000B4) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_9_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_10;                    /*!< (@ 0x000000B8) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_10_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_11;                    /*!< (@ 0x000000BC) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_11_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_12;                    /*!< (@ 0x000000C0) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_12_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_13;                    /*!< (@ 0x000000C4) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_13_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_14;                    /*!< (@ 0x000000C8) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_14_b;
  } ;
  
  union {
    __IOM uint32_t QMEM1_15;                    /*!< (@ 0x000000CC) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM1_15_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_0;                     /*!< (@ 0x000000D0) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_0_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_1;                     /*!< (@ 0x000000D4) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_1_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_2;                     /*!< (@ 0x000000D8) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_2_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_3;                     /*!< (@ 0x000000DC) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_3_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_4;                     /*!< (@ 0x000000E0) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_4_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_5;                     /*!< (@ 0x000000E4) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_5_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_6;                     /*!< (@ 0x000000E8) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_6_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_7;                     /*!< (@ 0x000000EC) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_7_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_8;                     /*!< (@ 0x000000F0) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_8_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_9;                     /*!< (@ 0x000000F4) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_9_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_10;                    /*!< (@ 0x000000F8) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_10_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_11;                    /*!< (@ 0x000000FC) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_11_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_12;                    /*!< (@ 0x00000100) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_12_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_13;                    /*!< (@ 0x00000104) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_13_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_14;                    /*!< (@ 0x00000108) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_14_b;
  } ;
  
  union {
    __IOM uint32_t QMEM2_15;                    /*!< (@ 0x0000010C) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM2_15_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_0;                     /*!< (@ 0x00000110) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_0_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_1;                     /*!< (@ 0x00000114) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_1_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_2;                     /*!< (@ 0x00000118) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_2_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_3;                     /*!< (@ 0x0000011C) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_3_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_4;                     /*!< (@ 0x00000120) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_4_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_5;                     /*!< (@ 0x00000124) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_5_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_6;                     /*!< (@ 0x00000128) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_6_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_7;                     /*!< (@ 0x0000012C) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_7_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_8;                     /*!< (@ 0x00000130) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_8_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_9;                     /*!< (@ 0x00000134) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_9_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_10;                    /*!< (@ 0x00000138) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_10_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_11;                    /*!< (@ 0x0000013C) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_11_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_12;                    /*!< (@ 0x00000140) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_12_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_13;                    /*!< (@ 0x00000144) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_13_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_14;                    /*!< (@ 0x00000148) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_14_b;
  } ;
  
  union {
    __IOM uint32_t QMEM3_15;                    /*!< (@ 0x0000014C) JPEG quantization tables                                   */
    
    struct {
      __IOM uint32_t QMem_RAM   : 32;           /*!< [31..0] QMem RAM                                                          */
    } QMEM3_15_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_0;                   /*!< (@ 0x00000150) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_0_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_1;                   /*!< (@ 0x00000154) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_1_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_2;                   /*!< (@ 0x00000158) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_2_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_3;                   /*!< (@ 0x0000015C) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_3_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_4;                   /*!< (@ 0x00000160) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_4_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_5;                   /*!< (@ 0x00000164) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_5_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_6;                   /*!< (@ 0x00000168) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_6_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_7;                   /*!< (@ 0x0000016C) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_7_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_8;                   /*!< (@ 0x00000170) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_8_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_9;                   /*!< (@ 0x00000174) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_9_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_10;                  /*!< (@ 0x00000178) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_10_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_11;                  /*!< (@ 0x0000017C) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_11_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_12;                  /*!< (@ 0x00000180) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_12_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_13;                  /*!< (@ 0x00000184) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_13_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_14;                  /*!< (@ 0x00000188) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_14_b;
  } ;
  
  union {
    __IOM uint32_t HUFFMIN_15;                  /*!< (@ 0x0000018C) JPEG HuffMin tables                                        */
    
    struct {
      __IOM uint32_t HuffMin_RAM : 32;          /*!< [31..0] HuffMin RAM                                                       */
    } HUFFMIN_15_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE0;                   /*!< (@ 0x00000190) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE0_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE1;                   /*!< (@ 0x00000194) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE1_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE2;                   /*!< (@ 0x00000198) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE2_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE3;                   /*!< (@ 0x0000019C) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE3_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE4;                   /*!< (@ 0x000001A0) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE4_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE5;                   /*!< (@ 0x000001A4) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE5_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE6;                   /*!< (@ 0x000001A8) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE6_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE7;                   /*!< (@ 0x000001AC) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE7_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE8;                   /*!< (@ 0x000001B0) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE8_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE9;                   /*!< (@ 0x000001B4) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE9_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE10;                  /*!< (@ 0x000001B8) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE10_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE11;                  /*!< (@ 0x000001BC) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE11_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE12;                  /*!< (@ 0x000001C0) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE12_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE13;                  /*!< (@ 0x000001C4) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE13_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE14;                  /*!< (@ 0x000001C8) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE14_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE15;                  /*!< (@ 0x000001CC) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE15_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE16;                  /*!< (@ 0x000001D0) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE16_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE17;                  /*!< (@ 0x000001D4) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE17_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE18;                  /*!< (@ 0x000001D8) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE18_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE19;                  /*!< (@ 0x000001DC) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE19_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE20;                  /*!< (@ 0x000001E0) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE20_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE21;                  /*!< (@ 0x000001E4) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE21_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE22;                  /*!< (@ 0x000001E8) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE22_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE23;                  /*!< (@ 0x000001EC) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE23_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE24;                  /*!< (@ 0x000001F0) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE24_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE25;                  /*!< (@ 0x000001F4) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE25_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE26;                  /*!< (@ 0x000001F8) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE26_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE27;                  /*!< (@ 0x000001FC) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE27_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE28;                  /*!< (@ 0x00000200) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE28_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE29;                  /*!< (@ 0x00000204) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE29_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE30;                  /*!< (@ 0x00000208) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE30_b;
  } ;
  
  union {
    __IOM uint32_t HUFFBASE31;                  /*!< (@ 0x0000020C) JPEG HuffSymb tables                                       */
    
    struct {
      __IOM uint32_t HuffBase_RAM_0 : 9;        /*!< [8..0] HuffBase RAM                                                       */
            uint32_t            : 7;
      __IOM uint32_t HuffBase_RAM_1 : 9;        /*!< [24..16] HuffBase RAM                                                     */
            uint32_t            : 7;
    } HUFFBASE31_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB0;                   /*!< (@ 0x00000210) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB0_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB1;                   /*!< (@ 0x00000214) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB1_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB2;                   /*!< (@ 0x00000218) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB2_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB3;                   /*!< (@ 0x0000021C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB3_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB4;                   /*!< (@ 0x00000220) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB4_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB5;                   /*!< (@ 0x00000224) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB5_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB6;                   /*!< (@ 0x00000228) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB6_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB7;                   /*!< (@ 0x0000022C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB7_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB8;                   /*!< (@ 0x00000230) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB8_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB9;                   /*!< (@ 0x00000234) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB9_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB10;                  /*!< (@ 0x00000238) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB10_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB11;                  /*!< (@ 0x0000023C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB11_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB12;                  /*!< (@ 0x00000240) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB12_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB13;                  /*!< (@ 0x00000244) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB13_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB14;                  /*!< (@ 0x00000248) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB14_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB15;                  /*!< (@ 0x0000024C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB15_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB16;                  /*!< (@ 0x00000250) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB16_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB17;                  /*!< (@ 0x00000254) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB17_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB18;                  /*!< (@ 0x00000258) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB18_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB19;                  /*!< (@ 0x0000025C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB19_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB20;                  /*!< (@ 0x00000260) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB20_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB21;                  /*!< (@ 0x00000264) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB21_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB22;                  /*!< (@ 0x00000268) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB22_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB23;                  /*!< (@ 0x0000026C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB23_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB24;                  /*!< (@ 0x00000270) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB24_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB25;                  /*!< (@ 0x00000274) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB25_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB26;                  /*!< (@ 0x00000278) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB26_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB27;                  /*!< (@ 0x0000027C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB27_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB28;                  /*!< (@ 0x00000280) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB28_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB29;                  /*!< (@ 0x00000284) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB29_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB30;                  /*!< (@ 0x00000288) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB30_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB31;                  /*!< (@ 0x0000028C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB31_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB32;                  /*!< (@ 0x00000290) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB32_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB33;                  /*!< (@ 0x00000294) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB33_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB34;                  /*!< (@ 0x00000298) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB34_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB35;                  /*!< (@ 0x0000029C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB35_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB36;                  /*!< (@ 0x000002A0) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB36_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB37;                  /*!< (@ 0x000002A4) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB37_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB38;                  /*!< (@ 0x000002A8) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB38_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB39;                  /*!< (@ 0x000002AC) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB39_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB40;                  /*!< (@ 0x000002B0) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB40_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB41;                  /*!< (@ 0x000002B4) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB41_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB42;                  /*!< (@ 0x000002B8) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB42_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB43;                  /*!< (@ 0x000002BC) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB43_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB44;                  /*!< (@ 0x000002C0) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB44_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB45;                  /*!< (@ 0x000002C4) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB45_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB46;                  /*!< (@ 0x000002C8) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB46_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB47;                  /*!< (@ 0x000002CC) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB47_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB48;                  /*!< (@ 0x000002D0) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB48_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB49;                  /*!< (@ 0x000002D4) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB49_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB50;                  /*!< (@ 0x000002D8) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB50_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB51;                  /*!< (@ 0x000002DC) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB51_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB52;                  /*!< (@ 0x000002E0) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB52_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB53;                  /*!< (@ 0x000002E4) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB53_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB54;                  /*!< (@ 0x000002E8) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB54_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB55;                  /*!< (@ 0x000002EC) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB55_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB56;                  /*!< (@ 0x000002F0) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB56_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB57;                  /*!< (@ 0x000002F4) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB57_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB58;                  /*!< (@ 0x000002F8) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB58_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB59;                  /*!< (@ 0x000002FC) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB59_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB60;                  /*!< (@ 0x00000300) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB60_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB61;                  /*!< (@ 0x00000304) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB61_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB62;                  /*!< (@ 0x00000308) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB62_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB63;                  /*!< (@ 0x0000030C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB63_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB64;                  /*!< (@ 0x00000310) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB64_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB65;                  /*!< (@ 0x00000314) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB65_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB66;                  /*!< (@ 0x00000318) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB66_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB67;                  /*!< (@ 0x0000031C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB67_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB68;                  /*!< (@ 0x00000320) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB68_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB69;                  /*!< (@ 0x00000324) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB69_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB70;                  /*!< (@ 0x00000328) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB70_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB71;                  /*!< (@ 0x0000032C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB71_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB72;                  /*!< (@ 0x00000330) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB72_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB73;                  /*!< (@ 0x00000334) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB73_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB74;                  /*!< (@ 0x00000338) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB74_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB75;                  /*!< (@ 0x0000033C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB75_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB76;                  /*!< (@ 0x00000340) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB76_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB77;                  /*!< (@ 0x00000344) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB77_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB78;                  /*!< (@ 0x00000348) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB78_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB79;                  /*!< (@ 0x0000034C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB79_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB80;                  /*!< (@ 0x00000350) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB80_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB81;                  /*!< (@ 0x00000354) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB81_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB82;                  /*!< (@ 0x00000358) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB82_b;
  } ;
  
  union {
    __IOM uint32_t HUFFSYMB83;                  /*!< (@ 0x0000035C) JPEG HUFFSYMB tables                                       */
    
    struct {
      __IOM uint32_t HuffSymb_RAM : 32;         /*!< [31..0] DHTSymb RAM                                                       */
    } HUFFSYMB83_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM0;                     /*!< (@ 0x00000360) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM0_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM2;                     /*!< (@ 0x00000364) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM2_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM3;                     /*!< (@ 0x00000368) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM3_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM4;                     /*!< (@ 0x0000036C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM4_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM5;                     /*!< (@ 0x00000370) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM5_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM6;                     /*!< (@ 0x00000374) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM6_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM7;                     /*!< (@ 0x00000378) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM7_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM8;                     /*!< (@ 0x0000037C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM8_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM9;                     /*!< (@ 0x00000380) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM9_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM10;                    /*!< (@ 0x00000384) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM10_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM11;                    /*!< (@ 0x00000388) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM11_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM12;                    /*!< (@ 0x0000038C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM12_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM13;                    /*!< (@ 0x00000390) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM13_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM14;                    /*!< (@ 0x00000394) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM14_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM15;                    /*!< (@ 0x00000398) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM15_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM16;                    /*!< (@ 0x0000039C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM16_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM17;                    /*!< (@ 0x000003A0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM17_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM18;                    /*!< (@ 0x000003A4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM18_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM19;                    /*!< (@ 0x000003A8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM19_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM20;                    /*!< (@ 0x000003AC) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM20_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM21;                    /*!< (@ 0x000003B0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM21_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM22;                    /*!< (@ 0x000003B4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM22_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM23;                    /*!< (@ 0x000003B8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM23_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM24;                    /*!< (@ 0x000003BC) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM24_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM25;                    /*!< (@ 0x000003C0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM25_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM26;                    /*!< (@ 0x000003C4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM26_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM27;                    /*!< (@ 0x000003C8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM27_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM28;                    /*!< (@ 0x000003CC) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM28_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM29;                    /*!< (@ 0x000003D0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM29_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM30;                    /*!< (@ 0x000003D4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM30_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM31;                    /*!< (@ 0x000003D8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM31_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM32;                    /*!< (@ 0x000003DC) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM32_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM33;                    /*!< (@ 0x000003E0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM33_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM34;                    /*!< (@ 0x000003E4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM34_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM35;                    /*!< (@ 0x000003E8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM35_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM36;                    /*!< (@ 0x000003EC) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM36_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM37;                    /*!< (@ 0x000003F0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM37_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM38;                    /*!< (@ 0x000003F4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM38_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM39;                    /*!< (@ 0x000003F8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM39_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM40;                    /*!< (@ 0x000003FC) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM40_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM41;                    /*!< (@ 0x00000400) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM41_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM42;                    /*!< (@ 0x00000404) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM42_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM43;                    /*!< (@ 0x00000408) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM43_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM44;                    /*!< (@ 0x0000040C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM44_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM45;                    /*!< (@ 0x00000410) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM45_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM46;                    /*!< (@ 0x00000414) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM46_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM47;                    /*!< (@ 0x00000418) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM47_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM48;                    /*!< (@ 0x0000041C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM48_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM49;                    /*!< (@ 0x00000420) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM49_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM50;                    /*!< (@ 0x00000424) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM50_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM51;                    /*!< (@ 0x00000428) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM51_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM52;                    /*!< (@ 0x0000042C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM52_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM53;                    /*!< (@ 0x00000430) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM53_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM54;                    /*!< (@ 0x00000434) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM54_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM55;                    /*!< (@ 0x00000438) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM55_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM56;                    /*!< (@ 0x0000043C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM56_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM57;                    /*!< (@ 0x00000440) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM57_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM58;                    /*!< (@ 0x00000444) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM58_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM59;                    /*!< (@ 0x00000448) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM59_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM60;                    /*!< (@ 0x0000044C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM60_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM61;                    /*!< (@ 0x00000450) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM61_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM62;                    /*!< (@ 0x00000454) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM62_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM63;                    /*!< (@ 0x00000458) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM63_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM64;                    /*!< (@ 0x0000045C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM64_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM65;                    /*!< (@ 0x00000460) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM65_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM66;                    /*!< (@ 0x00000464) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM66_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM67;                    /*!< (@ 0x00000468) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM67_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM68;                    /*!< (@ 0x0000046C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM68_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM69;                    /*!< (@ 0x00000470) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM69_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM70;                    /*!< (@ 0x00000474) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM70_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM71;                    /*!< (@ 0x00000478) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM71_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM72;                    /*!< (@ 0x0000047C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM72_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM73;                    /*!< (@ 0x00000480) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM73_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM74;                    /*!< (@ 0x00000484) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM74_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM75;                    /*!< (@ 0x00000488) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM75_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM76;                    /*!< (@ 0x0000048C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM76_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM77;                    /*!< (@ 0x00000490) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM77_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM78;                    /*!< (@ 0x00000494) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM78_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM79;                    /*!< (@ 0x00000498) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM79_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM80;                    /*!< (@ 0x0000049C) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM80_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM81;                    /*!< (@ 0x000004A0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM81_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM82;                    /*!< (@ 0x000004A4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM82_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM83;                    /*!< (@ 0x000004A8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM83_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM84;                    /*!< (@ 0x000004AC) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM84_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM85;                    /*!< (@ 0x000004B0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM85_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM86;                    /*!< (@ 0x000004B4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM86_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM87;                    /*!< (@ 0x000004B8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM87_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM88;                    /*!< (@ 0x000004BC) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM88_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM89;                    /*!< (@ 0x000004C0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM89_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM90;                    /*!< (@ 0x000004C4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM90_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM91;                    /*!< (@ 0x000004C8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM91_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM92;                    /*!< (@ 0x000004CC) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM92_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM93;                    /*!< (@ 0x000004D0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM93_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM94;                    /*!< (@ 0x000004D4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM94_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM95;                    /*!< (@ 0x000004D8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM95_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM96;                    /*!< (@ 0x000004DC) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM96_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM97;                    /*!< (@ 0x000004E0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM97_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM98;                    /*!< (@ 0x000004E4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM98_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM99;                    /*!< (@ 0x000004E8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM99_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM100;                   /*!< (@ 0x000004EC) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM100_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM101;                   /*!< (@ 0x000004F0) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM101_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM102;                   /*!< (@ 0x000004F4) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM102_b;
  } ;
  
  union {
    __IOM uint32_t DHTMEM103;                   /*!< (@ 0x000004F8) JPEG DHTMem tables                                         */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } DHTMEM103_b;
  } ;
  __IM  uint32_t  RESERVED3;
  
  union {
    __IOM uint32_t HUFFENC_AC0_0;               /*!< (@ 0x00000500) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_0_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_1;               /*!< (@ 0x00000504) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_1_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_2;               /*!< (@ 0x00000508) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_2_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_3;               /*!< (@ 0x0000050C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_3_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_4;               /*!< (@ 0x00000510) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_4_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_5;               /*!< (@ 0x00000514) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_5_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_6;               /*!< (@ 0x00000518) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_6_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_7;               /*!< (@ 0x0000051C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_7_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_8;               /*!< (@ 0x00000520) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_8_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_9;               /*!< (@ 0x00000524) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_9_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_10;              /*!< (@ 0x00000528) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_10_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_11;              /*!< (@ 0x0000052C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_11_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_12;              /*!< (@ 0x00000530) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_12_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_13;              /*!< (@ 0x00000534) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_13_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_14;              /*!< (@ 0x00000538) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_14_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_15;              /*!< (@ 0x0000053C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_15_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_16;              /*!< (@ 0x00000540) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_16_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_17;              /*!< (@ 0x00000544) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_17_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_18;              /*!< (@ 0x00000548) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_18_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_19;              /*!< (@ 0x0000054C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_19_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_20;              /*!< (@ 0x00000550) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_20_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_21;              /*!< (@ 0x00000554) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_21_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_22;              /*!< (@ 0x00000558) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_22_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_23;              /*!< (@ 0x0000055C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_23_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_24;              /*!< (@ 0x00000560) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_24_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_25;              /*!< (@ 0x00000564) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_25_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_26;              /*!< (@ 0x00000568) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_26_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_27;              /*!< (@ 0x0000056C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_27_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_28;              /*!< (@ 0x00000570) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_28_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_29;              /*!< (@ 0x00000574) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_29_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_30;              /*!< (@ 0x00000578) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_30_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_31;              /*!< (@ 0x0000057C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_31_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_32;              /*!< (@ 0x00000580) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_32_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_33;              /*!< (@ 0x00000584) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_33_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_34;              /*!< (@ 0x00000588) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_34_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_35;              /*!< (@ 0x0000058C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_35_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_36;              /*!< (@ 0x00000590) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_36_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_37;              /*!< (@ 0x00000594) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_37_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_38;              /*!< (@ 0x00000598) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_38_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_39;              /*!< (@ 0x0000059C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_39_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_40;              /*!< (@ 0x000005A0) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_40_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_41;              /*!< (@ 0x000005A4) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_41_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_42;              /*!< (@ 0x000005A8) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_42_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_43;              /*!< (@ 0x000005AC) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_43_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_44;              /*!< (@ 0x000005B0) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_44_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_45;              /*!< (@ 0x000005B4) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_45_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_46;              /*!< (@ 0x000005B8) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_46_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_47;              /*!< (@ 0x000005BC) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_47_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_48;              /*!< (@ 0x000005C0) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_48_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_49;              /*!< (@ 0x000005C4) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_49_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_50;              /*!< (@ 0x000005C8) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_50_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_51;              /*!< (@ 0x000005CC) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_51_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_52;              /*!< (@ 0x000005D0) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_52_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_53;              /*!< (@ 0x000005D4) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_53_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_54;              /*!< (@ 0x000005D8) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_54_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_55;              /*!< (@ 0x000005DC) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_55_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_56;              /*!< (@ 0x000005E0) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_56_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_57;              /*!< (@ 0x000005E4) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_57_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_58;              /*!< (@ 0x000005E8) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_58_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_59;              /*!< (@ 0x000005EC) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_59_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_60;              /*!< (@ 0x000005F0) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_60_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_61;              /*!< (@ 0x000005F4) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_61_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_62;              /*!< (@ 0x000005F8) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_62_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_63;              /*!< (@ 0x000005FC) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_63_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_64;              /*!< (@ 0x00000600) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_64_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_65;              /*!< (@ 0x00000604) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_65_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_66;              /*!< (@ 0x00000608) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_66_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_67;              /*!< (@ 0x0000060C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_67_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_68;              /*!< (@ 0x00000610) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_68_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_69;              /*!< (@ 0x00000614) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_69_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_70;              /*!< (@ 0x00000618) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_70_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_71;              /*!< (@ 0x0000061C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_71_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_72;              /*!< (@ 0x00000620) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_72_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_73;              /*!< (@ 0x00000624) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_73_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_74;              /*!< (@ 0x00000628) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_74_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_75;              /*!< (@ 0x0000062C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_75_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_76;              /*!< (@ 0x00000630) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_76_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_77;              /*!< (@ 0x00000634) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_77_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_78;              /*!< (@ 0x00000638) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_78_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_79;              /*!< (@ 0x0000063C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_79_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_80;              /*!< (@ 0x00000640) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_80_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_81;              /*!< (@ 0x00000644) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_81_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_82;              /*!< (@ 0x00000648) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_82_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_83;              /*!< (@ 0x0000064C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_83_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_84;              /*!< (@ 0x00000650) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_84_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_85;              /*!< (@ 0x00000654) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_85_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_86;              /*!< (@ 0x00000658) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_86_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC0_87;              /*!< (@ 0x0000065C) JPEG encoder, AC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC0_87_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_0;               /*!< (@ 0x00000660) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_0_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_1;               /*!< (@ 0x00000664) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_1_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_2;               /*!< (@ 0x00000668) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_2_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_3;               /*!< (@ 0x0000066C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_3_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_4;               /*!< (@ 0x00000670) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_4_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_5;               /*!< (@ 0x00000674) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_5_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_6;               /*!< (@ 0x00000678) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_6_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_7;               /*!< (@ 0x0000067C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_7_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_8;               /*!< (@ 0x00000680) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_8_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_9;               /*!< (@ 0x00000684) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_9_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_10;              /*!< (@ 0x00000688) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_10_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_11;              /*!< (@ 0x0000068C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_11_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_12;              /*!< (@ 0x00000690) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_12_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_13;              /*!< (@ 0x00000694) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_13_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_14;              /*!< (@ 0x00000698) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_14_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_15;              /*!< (@ 0x0000069C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_15_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_16;              /*!< (@ 0x000006A0) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_16_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_17;              /*!< (@ 0x000006A4) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_17_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_18;              /*!< (@ 0x000006A8) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_18_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_19;              /*!< (@ 0x000006AC) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_19_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_20;              /*!< (@ 0x000006B0) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_20_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_21;              /*!< (@ 0x000006B4) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_21_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_22;              /*!< (@ 0x000006B8) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_22_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_23;              /*!< (@ 0x000006BC) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_23_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_24;              /*!< (@ 0x000006C0) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_24_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_25;              /*!< (@ 0x000006C4) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_25_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_26;              /*!< (@ 0x000006C8) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_26_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_27;              /*!< (@ 0x000006CC) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_27_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_28;              /*!< (@ 0x000006D0) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_28_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_29;              /*!< (@ 0x000006D4) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_29_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_30;              /*!< (@ 0x000006D8) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_30_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_31;              /*!< (@ 0x000006DC) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_31_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_32;              /*!< (@ 0x000006E0) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_32_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_33;              /*!< (@ 0x000006E4) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_33_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_34;              /*!< (@ 0x000006E8) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_34_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_35;              /*!< (@ 0x000006EC) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_35_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_36;              /*!< (@ 0x000006F0) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_36_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_37;              /*!< (@ 0x000006F4) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_37_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_38;              /*!< (@ 0x000006F8) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_38_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_39;              /*!< (@ 0x000006FC) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_39_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_40;              /*!< (@ 0x00000700) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_40_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_41;              /*!< (@ 0x00000704) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_41_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_42;              /*!< (@ 0x00000708) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_42_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_43;              /*!< (@ 0x0000070C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_43_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_44;              /*!< (@ 0x00000710) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_44_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_45;              /*!< (@ 0x00000714) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_45_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_46;              /*!< (@ 0x00000718) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_46_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_47;              /*!< (@ 0x0000071C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_47_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_48;              /*!< (@ 0x00000720) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_48_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_49;              /*!< (@ 0x00000724) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_49_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_50;              /*!< (@ 0x00000728) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_50_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_51;              /*!< (@ 0x0000072C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_51_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_52;              /*!< (@ 0x00000730) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_52_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_53;              /*!< (@ 0x00000734) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_53_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_54;              /*!< (@ 0x00000738) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_54_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_55;              /*!< (@ 0x0000073C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_55_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_56;              /*!< (@ 0x00000740) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_56_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_57;              /*!< (@ 0x00000744) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_57_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_58;              /*!< (@ 0x00000748) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_58_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_59;              /*!< (@ 0x0000074C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_59_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_60;              /*!< (@ 0x00000750) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_60_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_61;              /*!< (@ 0x00000754) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_61_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_62;              /*!< (@ 0x00000758) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_62_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_63;              /*!< (@ 0x0000075C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_63_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_64;              /*!< (@ 0x00000760) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_64_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_65;              /*!< (@ 0x00000764) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_65_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_66;              /*!< (@ 0x00000768) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_66_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_67;              /*!< (@ 0x0000076C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_67_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_68;              /*!< (@ 0x00000770) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_68_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_69;              /*!< (@ 0x00000774) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_69_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_70;              /*!< (@ 0x00000778) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_70_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_71;              /*!< (@ 0x0000077C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_71_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_72;              /*!< (@ 0x00000780) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_72_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_73;              /*!< (@ 0x00000784) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_73_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_74;              /*!< (@ 0x00000788) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_74_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_75;              /*!< (@ 0x0000078C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_75_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_76;              /*!< (@ 0x00000790) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_76_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_77;              /*!< (@ 0x00000794) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_77_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_78;              /*!< (@ 0x00000798) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_78_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_79;              /*!< (@ 0x0000079C) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_79_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_80;              /*!< (@ 0x000007A0) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_80_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_81;              /*!< (@ 0x000007A4) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_81_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_82;              /*!< (@ 0x000007A8) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_82_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_83;              /*!< (@ 0x000007AC) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_83_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_84;              /*!< (@ 0x000007B0) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_84_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_85;              /*!< (@ 0x000007B4) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_85_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_86;              /*!< (@ 0x000007B8) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_86_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_AC1_87;              /*!< (@ 0x000007BC) JPEG encoder, AC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_AC1_87_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC0_0;               /*!< (@ 0x000007C0) JPEG encoder, DC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC0_0_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC0_1;               /*!< (@ 0x000007C4) JPEG encoder, DC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC0_1_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC0_2;               /*!< (@ 0x000007C8) JPEG encoder, DC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC0_2_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC0_3;               /*!< (@ 0x000007CC) JPEG encoder, DC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC0_3_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC0_4;               /*!< (@ 0x000007D0) JPEG encoder, DC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC0_4_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC0_5;               /*!< (@ 0x000007D4) JPEG encoder, DC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC0_5_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC0_6;               /*!< (@ 0x000007D8) JPEG encoder, DC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC0_6_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC0_7;               /*!< (@ 0x000007DC) JPEG encoder, DC Huffman table 0                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC0_7_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC1_0;               /*!< (@ 0x000007E0) JPEG encoder, DC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC1_0_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC1_1;               /*!< (@ 0x000007E4) JPEG encoder, DC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC1_1_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC1_2;               /*!< (@ 0x000007E8) JPEG encoder, DC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC1_2_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC1_3;               /*!< (@ 0x000007EC) JPEG encoder, DC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC1_3_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC1_4;               /*!< (@ 0x000007F0) JPEG encoder, DC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC1_4_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC1_5;               /*!< (@ 0x000007F4) JPEG encoder, DC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC1_5_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC1_6;               /*!< (@ 0x000007F8) JPEG encoder, DC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC1_6_b;
  } ;
  
  union {
    __IOM uint32_t HUFFENC_DC1_7;               /*!< (@ 0x000007FC) JPEG encoder, DC Huffman table 1                           */
    
    struct {
      __IOM uint32_t DHTMem_RAM : 32;           /*!< [31..0] DHTMem RAM                                                        */
    } HUFFENC_DC1_7_b;
  } ;
} JPEG_Type;                                    /*!< Size = 2048 (0x800)                                                       */



/* =========================================================================================================================== */
/* ================                                           JPEG                                            ================ */
/* =========================================================================================================================== */

/* ======================================================  JPEG_CONFR0  ====================================================== */
#define JPEG_JPEG_CONFR0_START_Pos        (0UL)                     /*!< START (Bit 0)                                         */
#define JPEG_JPEG_CONFR0_START_Msk        (0x1UL)                   /*!< START (Bitfield-Mask: 0x01)                           */
/* ======================================================  JPEG_CONFR1  ====================================================== */
#define JPEG_JPEG_CONFR1_NF_Pos           (0UL)                     /*!< NF (Bit 0)                                            */
#define JPEG_JPEG_CONFR1_NF_Msk           (0x3UL)                   /*!< NF (Bitfield-Mask: 0x03)                              */
#define JPEG_JPEG_CONFR1_DE_Pos           (3UL)                     /*!< DE (Bit 3)                                            */
#define JPEG_JPEG_CONFR1_DE_Msk           (0x8UL)                   /*!< DE (Bitfield-Mask: 0x01)                              */
#define JPEG_JPEG_CONFR1_COLORSPACE_Pos   (4UL)                     /*!< COLORSPACE (Bit 4)                                    */
#define JPEG_JPEG_CONFR1_COLORSPACE_Msk   (0x30UL)                  /*!< COLORSPACE (Bitfield-Mask: 0x03)                      */
#define JPEG_JPEG_CONFR1_NS_Pos           (6UL)                     /*!< NS (Bit 6)                                            */
#define JPEG_JPEG_CONFR1_NS_Msk           (0xc0UL)                  /*!< NS (Bitfield-Mask: 0x03)                              */
#define JPEG_JPEG_CONFR1_HDR_Pos          (8UL)                     /*!< HDR (Bit 8)                                           */
#define JPEG_JPEG_CONFR1_HDR_Msk          (0x100UL)                 /*!< HDR (Bitfield-Mask: 0x01)                             */
#define JPEG_JPEG_CONFR1_YSIZE_Pos        (16UL)                    /*!< YSIZE (Bit 16)                                        */
#define JPEG_JPEG_CONFR1_YSIZE_Msk        (0xffff0000UL)            /*!< YSIZE (Bitfield-Mask: 0xffff)                         */
/* ======================================================  JPEG_CONFR2  ====================================================== */
#define JPEG_JPEG_CONFR2_NMCU_Pos         (0UL)                     /*!< NMCU (Bit 0)                                          */
#define JPEG_JPEG_CONFR2_NMCU_Msk         (0x3ffffffUL)             /*!< NMCU (Bitfield-Mask: 0x3ffffff)                       */
/* ======================================================  JPEG_CONFR3  ====================================================== */
#define JPEG_JPEG_CONFR3_XSIZE_Pos        (16UL)                    /*!< XSIZE (Bit 16)                                        */
#define JPEG_JPEG_CONFR3_XSIZE_Msk        (0xffff0000UL)            /*!< XSIZE (Bitfield-Mask: 0xffff)                         */
/* ======================================================  JPEG_CONFR4  ====================================================== */
#define JPEG_JPEG_CONFR4_HD_Pos           (0UL)                     /*!< HD (Bit 0)                                            */
#define JPEG_JPEG_CONFR4_HD_Msk           (0x1UL)                   /*!< HD (Bitfield-Mask: 0x01)                              */
#define JPEG_JPEG_CONFR4_HA_Pos           (1UL)                     /*!< HA (Bit 1)                                            */
#define JPEG_JPEG_CONFR4_HA_Msk           (0x2UL)                   /*!< HA (Bitfield-Mask: 0x01)                              */
#define JPEG_JPEG_CONFR4_QT_Pos           (2UL)                     /*!< QT (Bit 2)                                            */
#define JPEG_JPEG_CONFR4_QT_Msk           (0xcUL)                   /*!< QT (Bitfield-Mask: 0x03)                              */
#define JPEG_JPEG_CONFR4_NB_Pos           (4UL)                     /*!< NB (Bit 4)                                            */
#define JPEG_JPEG_CONFR4_NB_Msk           (0xf0UL)                  /*!< NB (Bitfield-Mask: 0x0f)                              */
#define JPEG_JPEG_CONFR4_VSF_Pos          (8UL)                     /*!< VSF (Bit 8)                                           */
#define JPEG_JPEG_CONFR4_VSF_Msk          (0xf00UL)                 /*!< VSF (Bitfield-Mask: 0x0f)                             */
#define JPEG_JPEG_CONFR4_HSF_Pos          (12UL)                    /*!< HSF (Bit 12)                                          */
#define JPEG_JPEG_CONFR4_HSF_Msk          (0xf000UL)                /*!< HSF (Bitfield-Mask: 0x0f)                             */
/* ======================================================  JPEG_CONFR5  ====================================================== */
#define JPEG_JPEG_CONFR5_HD_Pos           (0UL)                     /*!< HD (Bit 0)                                            */
#define JPEG_JPEG_CONFR5_HD_Msk           (0x1UL)                   /*!< HD (Bitfield-Mask: 0x01)                              */
#define JPEG_JPEG_CONFR5_HA_Pos           (1UL)                     /*!< HA (Bit 1)                                            */
#define JPEG_JPEG_CONFR5_HA_Msk           (0x2UL)                   /*!< HA (Bitfield-Mask: 0x01)                              */
#define JPEG_JPEG_CONFR5_QT_Pos           (2UL)                     /*!< QT (Bit 2)                                            */
#define JPEG_JPEG_CONFR5_QT_Msk           (0xcUL)                   /*!< QT (Bitfield-Mask: 0x03)                              */
#define JPEG_JPEG_CONFR5_NB_Pos           (4UL)                     /*!< NB (Bit 4)                                            */
#define JPEG_JPEG_CONFR5_NB_Msk           (0xf0UL)                  /*!< NB (Bitfield-Mask: 0x0f)                              */
#define JPEG_JPEG_CONFR5_VSF_Pos          (8UL)                     /*!< VSF (Bit 8)                                           */
#define JPEG_JPEG_CONFR5_VSF_Msk          (0xf00UL)                 /*!< VSF (Bitfield-Mask: 0x0f)                             */
#define JPEG_JPEG_CONFR5_HSF_Pos          (12UL)                    /*!< HSF (Bit 12)                                          */
#define JPEG_JPEG_CONFR5_HSF_Msk          (0xf000UL)                /*!< HSF (Bitfield-Mask: 0x0f)                             */
/* ======================================================  JPEG_CONFR6  ====================================================== */
#define JPEG_JPEG_CONFR6_HD_Pos           (0UL)                     /*!< HD (Bit 0)                                            */
#define JPEG_JPEG_CONFR6_HD_Msk           (0x1UL)                   /*!< HD (Bitfield-Mask: 0x01)                              */
#define JPEG_JPEG_CONFR6_HA_Pos           (1UL)                     /*!< HA (Bit 1)                                            */
#define JPEG_JPEG_CONFR6_HA_Msk           (0x2UL)                   /*!< HA (Bitfield-Mask: 0x01)                              */
#define JPEG_JPEG_CONFR6_QT_Pos           (2UL)                     /*!< QT (Bit 2)                                            */
#define JPEG_JPEG_CONFR6_QT_Msk           (0xcUL)                   /*!< QT (Bitfield-Mask: 0x03)                              */
#define JPEG_JPEG_CONFR6_NB_Pos           (4UL)                     /*!< NB (Bit 4)                                            */
#define JPEG_JPEG_CONFR6_NB_Msk           (0xf0UL)                  /*!< NB (Bitfield-Mask: 0x0f)                              */
#define JPEG_JPEG_CONFR6_VSF_Pos          (8UL)                     /*!< VSF (Bit 8)                                           */
#define JPEG_JPEG_CONFR6_VSF_Msk          (0xf00UL)                 /*!< VSF (Bitfield-Mask: 0x0f)                             */
#define JPEG_JPEG_CONFR6_HSF_Pos          (12UL)                    /*!< HSF (Bit 12)                                          */
#define JPEG_JPEG_CONFR6_HSF_Msk          (0xf000UL)                /*!< HSF (Bitfield-Mask: 0x0f)                             */
/* ======================================================  JPEG_CONFR7  ====================================================== */
#define JPEG_JPEG_CONFR7_HD_Pos           (0UL)                     /*!< HD (Bit 0)                                            */
#define JPEG_JPEG_CONFR7_HD_Msk           (0x1UL)                   /*!< HD (Bitfield-Mask: 0x01)                              */
#define JPEG_JPEG_CONFR7_HA_Pos           (1UL)                     /*!< HA (Bit 1)                                            */
#define JPEG_JPEG_CONFR7_HA_Msk           (0x2UL)                   /*!< HA (Bitfield-Mask: 0x01)                              */
#define JPEG_JPEG_CONFR7_QT_Pos           (2UL)                     /*!< QT (Bit 2)                                            */
#define JPEG_JPEG_CONFR7_QT_Msk           (0xcUL)                   /*!< QT (Bitfield-Mask: 0x03)                              */
#define JPEG_JPEG_CONFR7_NB_Pos           (4UL)                     /*!< NB (Bit 4)                                            */
#define JPEG_JPEG_CONFR7_NB_Msk           (0xf0UL)                  /*!< NB (Bitfield-Mask: 0x0f)                              */
#define JPEG_JPEG_CONFR7_VSF_Pos          (8UL)                     /*!< VSF (Bit 8)                                           */
#define JPEG_JPEG_CONFR7_VSF_Msk          (0xf00UL)                 /*!< VSF (Bitfield-Mask: 0x0f)                             */
#define JPEG_JPEG_CONFR7_HSF_Pos          (12UL)                    /*!< HSF (Bit 12)                                          */
#define JPEG_JPEG_CONFR7_HSF_Msk          (0xf000UL)                /*!< HSF (Bitfield-Mask: 0x0f)                             */
/* ========================================================  JPEG_CR  ======================================================== */
#define JPEG_JPEG_CR_JCEN_Pos             (0UL)                     /*!< JCEN (Bit 0)                                          */
#define JPEG_JPEG_CR_JCEN_Msk             (0x1UL)                   /*!< JCEN (Bitfield-Mask: 0x01)                            */
#define JPEG_JPEG_CR_IFTIE_Pos            (1UL)                     /*!< IFTIE (Bit 1)                                         */
#define JPEG_JPEG_CR_IFTIE_Msk            (0x2UL)                   /*!< IFTIE (Bitfield-Mask: 0x01)                           */
#define JPEG_JPEG_CR_IFNFIE_Pos           (2UL)                     /*!< IFNFIE (Bit 2)                                        */
#define JPEG_JPEG_CR_IFNFIE_Msk           (0x4UL)                   /*!< IFNFIE (Bitfield-Mask: 0x01)                          */
#define JPEG_JPEG_CR_OFTIE_Pos            (3UL)                     /*!< OFTIE (Bit 3)                                         */
#define JPEG_JPEG_CR_OFTIE_Msk            (0x8UL)                   /*!< OFTIE (Bitfield-Mask: 0x01)                           */
#define JPEG_JPEG_CR_OFNEIE_Pos           (4UL)                     /*!< OFNEIE (Bit 4)                                        */
#define JPEG_JPEG_CR_OFNEIE_Msk           (0x10UL)                  /*!< OFNEIE (Bitfield-Mask: 0x01)                          */
#define JPEG_JPEG_CR_EOCIE_Pos            (5UL)                     /*!< EOCIE (Bit 5)                                         */
#define JPEG_JPEG_CR_EOCIE_Msk            (0x20UL)                  /*!< EOCIE (Bitfield-Mask: 0x01)                           */
#define JPEG_JPEG_CR_HPDIE_Pos            (6UL)                     /*!< HPDIE (Bit 6)                                         */
#define JPEG_JPEG_CR_HPDIE_Msk            (0x40UL)                  /*!< HPDIE (Bitfield-Mask: 0x01)                           */
#define JPEG_JPEG_CR_IDMAEN_Pos           (11UL)                    /*!< IDMAEN (Bit 11)                                       */
#define JPEG_JPEG_CR_IDMAEN_Msk           (0x800UL)                 /*!< IDMAEN (Bitfield-Mask: 0x01)                          */
#define JPEG_JPEG_CR_ODMAEN_Pos           (12UL)                    /*!< ODMAEN (Bit 12)                                       */
#define JPEG_JPEG_CR_ODMAEN_Msk           (0x1000UL)                /*!< ODMAEN (Bitfield-Mask: 0x01)                          */
#define JPEG_JPEG_CR_IFF_Pos              (13UL)                    /*!< IFF (Bit 13)                                          */
#define JPEG_JPEG_CR_IFF_Msk              (0x2000UL)                /*!< IFF (Bitfield-Mask: 0x01)                             */
#define JPEG_JPEG_CR_OFF_Pos              (14UL)                    /*!< OFF (Bit 14)                                          */
#define JPEG_JPEG_CR_OFF_Msk              (0x4000UL)                /*!< OFF (Bitfield-Mask: 0x01)                             */
/* ========================================================  JPEG_SR  ======================================================== */
#define JPEG_JPEG_SR_IFTF_Pos             (1UL)                     /*!< IFTF (Bit 1)                                          */
#define JPEG_JPEG_SR_IFTF_Msk             (0x2UL)                   /*!< IFTF (Bitfield-Mask: 0x01)                            */
#define JPEG_JPEG_SR_IFNFF_Pos            (2UL)                     /*!< IFNFF (Bit 2)                                         */
#define JPEG_JPEG_SR_IFNFF_Msk            (0x4UL)                   /*!< IFNFF (Bitfield-Mask: 0x01)                           */
#define JPEG_JPEG_SR_OFTF_Pos             (3UL)                     /*!< OFTF (Bit 3)                                          */
#define JPEG_JPEG_SR_OFTF_Msk             (0x8UL)                   /*!< OFTF (Bitfield-Mask: 0x01)                            */
#define JPEG_JPEG_SR_OFNEF_Pos            (4UL)                     /*!< OFNEF (Bit 4)                                         */
#define JPEG_JPEG_SR_OFNEF_Msk            (0x10UL)                  /*!< OFNEF (Bitfield-Mask: 0x01)                           */
#define JPEG_JPEG_SR_EOCF_Pos             (5UL)                     /*!< EOCF (Bit 5)                                          */
#define JPEG_JPEG_SR_EOCF_Msk             (0x20UL)                  /*!< EOCF (Bitfield-Mask: 0x01)                            */
#define JPEG_JPEG_SR_HPDF_Pos             (6UL)                     /*!< HPDF (Bit 6)                                          */
#define JPEG_JPEG_SR_HPDF_Msk             (0x40UL)                  /*!< HPDF (Bitfield-Mask: 0x01)                            */
#define JPEG_JPEG_SR_COF_Pos              (7UL)                     /*!< COF (Bit 7)                                           */
#define JPEG_JPEG_SR_COF_Msk              (0x80UL)                  /*!< COF (Bitfield-Mask: 0x01)                             */
/* =======================================================  JPEG_CFR  ======================================================== */
#define JPEG_JPEG_CFR_CEOCF_Pos           (5UL)                     /*!< CEOCF (Bit 5)                                         */
#define JPEG_JPEG_CFR_CEOCF_Msk           (0x20UL)                  /*!< CEOCF (Bitfield-Mask: 0x01)                           */
#define JPEG_JPEG_CFR_CHPDF_Pos           (6UL)                     /*!< CHPDF (Bit 6)                                         */
#define JPEG_JPEG_CFR_CHPDF_Msk           (0x40UL)                  /*!< CHPDF (Bitfield-Mask: 0x01)                           */
/* =======================================================  JPEG_DIR  ======================================================== */
#define JPEG_JPEG_DIR_DATAIN_Pos          (0UL)                     /*!< DATAIN (Bit 0)                                        */
#define JPEG_JPEG_DIR_DATAIN_Msk          (0xffffffffUL)            /*!< DATAIN (Bitfield-Mask: 0xffffffff)                    */
/* =======================================================  JPEG_DOR  ======================================================== */
#define JPEG_JPEG_DOR_DATAOUT_Pos         (0UL)                     /*!< DATAOUT (Bit 0)                                       */
#define JPEG_JPEG_DOR_DATAOUT_Msk         (0xffffffffUL)            /*!< DATAOUT (Bitfield-Mask: 0xffffffff)                   */
/* ========================================================  QMEM0_0  ======================================================== */
#define JPEG_QMEM0_0_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_0_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM0_1  ======================================================== */
#define JPEG_QMEM0_1_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_1_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM0_2  ======================================================== */
#define JPEG_QMEM0_2_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_2_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM0_3  ======================================================== */
#define JPEG_QMEM0_3_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_3_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM0_4  ======================================================== */
#define JPEG_QMEM0_4_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_4_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM0_5  ======================================================== */
#define JPEG_QMEM0_5_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_5_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM0_6  ======================================================== */
#define JPEG_QMEM0_6_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_6_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM0_7  ======================================================== */
#define JPEG_QMEM0_7_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_7_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM0_8  ======================================================== */
#define JPEG_QMEM0_8_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_8_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM0_9  ======================================================== */
#define JPEG_QMEM0_9_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_9_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM0_10  ======================================================== */
#define JPEG_QMEM0_10_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_10_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM0_11  ======================================================== */
#define JPEG_QMEM0_11_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_11_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM0_12  ======================================================== */
#define JPEG_QMEM0_12_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_12_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM0_13  ======================================================== */
#define JPEG_QMEM0_13_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_13_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM0_14  ======================================================== */
#define JPEG_QMEM0_14_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_14_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM0_15  ======================================================== */
#define JPEG_QMEM0_15_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM0_15_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM1_0  ======================================================== */
#define JPEG_QMEM1_0_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_0_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM1_1  ======================================================== */
#define JPEG_QMEM1_1_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_1_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM1_2  ======================================================== */
#define JPEG_QMEM1_2_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_2_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM1_3  ======================================================== */
#define JPEG_QMEM1_3_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_3_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM1_4  ======================================================== */
#define JPEG_QMEM1_4_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_4_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM1_5  ======================================================== */
#define JPEG_QMEM1_5_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_5_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM1_6  ======================================================== */
#define JPEG_QMEM1_6_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_6_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM1_7  ======================================================== */
#define JPEG_QMEM1_7_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_7_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM1_8  ======================================================== */
#define JPEG_QMEM1_8_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_8_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM1_9  ======================================================== */
#define JPEG_QMEM1_9_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_9_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM1_10  ======================================================== */
#define JPEG_QMEM1_10_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_10_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM1_11  ======================================================== */
#define JPEG_QMEM1_11_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_11_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM1_12  ======================================================== */
#define JPEG_QMEM1_12_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_12_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM1_13  ======================================================== */
#define JPEG_QMEM1_13_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_13_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM1_14  ======================================================== */
#define JPEG_QMEM1_14_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_14_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM1_15  ======================================================== */
#define JPEG_QMEM1_15_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM1_15_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM2_0  ======================================================== */
#define JPEG_QMEM2_0_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_0_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM2_1  ======================================================== */
#define JPEG_QMEM2_1_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_1_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM2_2  ======================================================== */
#define JPEG_QMEM2_2_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_2_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM2_3  ======================================================== */
#define JPEG_QMEM2_3_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_3_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM2_4  ======================================================== */
#define JPEG_QMEM2_4_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_4_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM2_5  ======================================================== */
#define JPEG_QMEM2_5_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_5_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM2_6  ======================================================== */
#define JPEG_QMEM2_6_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_6_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM2_7  ======================================================== */
#define JPEG_QMEM2_7_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_7_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM2_8  ======================================================== */
#define JPEG_QMEM2_8_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_8_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM2_9  ======================================================== */
#define JPEG_QMEM2_9_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_9_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM2_10  ======================================================== */
#define JPEG_QMEM2_10_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_10_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM2_11  ======================================================== */
#define JPEG_QMEM2_11_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_11_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM2_12  ======================================================== */
#define JPEG_QMEM2_12_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_12_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM2_13  ======================================================== */
#define JPEG_QMEM2_13_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_13_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM2_14  ======================================================== */
#define JPEG_QMEM2_14_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_14_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM2_15  ======================================================== */
#define JPEG_QMEM2_15_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM2_15_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM3_0  ======================================================== */
#define JPEG_QMEM3_0_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_0_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM3_1  ======================================================== */
#define JPEG_QMEM3_1_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_1_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM3_2  ======================================================== */
#define JPEG_QMEM3_2_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_2_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM3_3  ======================================================== */
#define JPEG_QMEM3_3_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_3_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM3_4  ======================================================== */
#define JPEG_QMEM3_4_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_4_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM3_5  ======================================================== */
#define JPEG_QMEM3_5_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_5_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM3_6  ======================================================== */
#define JPEG_QMEM3_6_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_6_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM3_7  ======================================================== */
#define JPEG_QMEM3_7_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_7_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM3_8  ======================================================== */
#define JPEG_QMEM3_8_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_8_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* ========================================================  QMEM3_9  ======================================================== */
#define JPEG_QMEM3_9_QMem_RAM_Pos         (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_9_QMem_RAM_Msk         (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM3_10  ======================================================== */
#define JPEG_QMEM3_10_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_10_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM3_11  ======================================================== */
#define JPEG_QMEM3_11_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_11_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM3_12  ======================================================== */
#define JPEG_QMEM3_12_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_12_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM3_13  ======================================================== */
#define JPEG_QMEM3_13_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_13_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM3_14  ======================================================== */
#define JPEG_QMEM3_14_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_14_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  QMEM3_15  ======================================================== */
#define JPEG_QMEM3_15_QMem_RAM_Pos        (0UL)                     /*!< QMem_RAM (Bit 0)                                      */
#define JPEG_QMEM3_15_QMem_RAM_Msk        (0xffffffffUL)            /*!< QMem_RAM (Bitfield-Mask: 0xffffffff)                  */
/* =======================================================  HUFFMIN_0  ======================================================= */
#define JPEG_HUFFMIN_0_HuffMin_RAM_Pos    (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_0_HuffMin_RAM_Msk    (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* =======================================================  HUFFMIN_1  ======================================================= */
#define JPEG_HUFFMIN_1_HuffMin_RAM_Pos    (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_1_HuffMin_RAM_Msk    (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* =======================================================  HUFFMIN_2  ======================================================= */
#define JPEG_HUFFMIN_2_HuffMin_RAM_Pos    (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_2_HuffMin_RAM_Msk    (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* =======================================================  HUFFMIN_3  ======================================================= */
#define JPEG_HUFFMIN_3_HuffMin_RAM_Pos    (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_3_HuffMin_RAM_Msk    (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* =======================================================  HUFFMIN_4  ======================================================= */
#define JPEG_HUFFMIN_4_HuffMin_RAM_Pos    (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_4_HuffMin_RAM_Msk    (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* =======================================================  HUFFMIN_5  ======================================================= */
#define JPEG_HUFFMIN_5_HuffMin_RAM_Pos    (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_5_HuffMin_RAM_Msk    (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* =======================================================  HUFFMIN_6  ======================================================= */
#define JPEG_HUFFMIN_6_HuffMin_RAM_Pos    (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_6_HuffMin_RAM_Msk    (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* =======================================================  HUFFMIN_7  ======================================================= */
#define JPEG_HUFFMIN_7_HuffMin_RAM_Pos    (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_7_HuffMin_RAM_Msk    (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* =======================================================  HUFFMIN_8  ======================================================= */
#define JPEG_HUFFMIN_8_HuffMin_RAM_Pos    (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_8_HuffMin_RAM_Msk    (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* =======================================================  HUFFMIN_9  ======================================================= */
#define JPEG_HUFFMIN_9_HuffMin_RAM_Pos    (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_9_HuffMin_RAM_Msk    (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* ======================================================  HUFFMIN_10  ======================================================= */
#define JPEG_HUFFMIN_10_HuffMin_RAM_Pos   (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_10_HuffMin_RAM_Msk   (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* ======================================================  HUFFMIN_11  ======================================================= */
#define JPEG_HUFFMIN_11_HuffMin_RAM_Pos   (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_11_HuffMin_RAM_Msk   (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* ======================================================  HUFFMIN_12  ======================================================= */
#define JPEG_HUFFMIN_12_HuffMin_RAM_Pos   (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_12_HuffMin_RAM_Msk   (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* ======================================================  HUFFMIN_13  ======================================================= */
#define JPEG_HUFFMIN_13_HuffMin_RAM_Pos   (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_13_HuffMin_RAM_Msk   (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* ======================================================  HUFFMIN_14  ======================================================= */
#define JPEG_HUFFMIN_14_HuffMin_RAM_Pos   (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_14_HuffMin_RAM_Msk   (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* ======================================================  HUFFMIN_15  ======================================================= */
#define JPEG_HUFFMIN_15_HuffMin_RAM_Pos   (0UL)                     /*!< HuffMin_RAM (Bit 0)                                   */
#define JPEG_HUFFMIN_15_HuffMin_RAM_Msk   (0xffffffffUL)            /*!< HuffMin_RAM (Bitfield-Mask: 0xffffffff)               */
/* =======================================================  HUFFBASE0  ======================================================= */
#define JPEG_HUFFBASE0_HuffBase_RAM_0_Pos (0UL)                     /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE0_HuffBase_RAM_0_Msk (0x1ffUL)                 /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE0_HuffBase_RAM_1_Pos (16UL)                    /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE0_HuffBase_RAM_1_Msk (0x1ff0000UL)             /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* =======================================================  HUFFBASE1  ======================================================= */
#define JPEG_HUFFBASE1_HuffBase_RAM_0_Pos (0UL)                     /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE1_HuffBase_RAM_0_Msk (0x1ffUL)                 /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE1_HuffBase_RAM_1_Pos (16UL)                    /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE1_HuffBase_RAM_1_Msk (0x1ff0000UL)             /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* =======================================================  HUFFBASE2  ======================================================= */
#define JPEG_HUFFBASE2_HuffBase_RAM_0_Pos (0UL)                     /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE2_HuffBase_RAM_0_Msk (0x1ffUL)                 /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE2_HuffBase_RAM_1_Pos (16UL)                    /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE2_HuffBase_RAM_1_Msk (0x1ff0000UL)             /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* =======================================================  HUFFBASE3  ======================================================= */
#define JPEG_HUFFBASE3_HuffBase_RAM_0_Pos (0UL)                     /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE3_HuffBase_RAM_0_Msk (0x1ffUL)                 /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE3_HuffBase_RAM_1_Pos (16UL)                    /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE3_HuffBase_RAM_1_Msk (0x1ff0000UL)             /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* =======================================================  HUFFBASE4  ======================================================= */
#define JPEG_HUFFBASE4_HuffBase_RAM_0_Pos (0UL)                     /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE4_HuffBase_RAM_0_Msk (0x1ffUL)                 /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE4_HuffBase_RAM_1_Pos (16UL)                    /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE4_HuffBase_RAM_1_Msk (0x1ff0000UL)             /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* =======================================================  HUFFBASE5  ======================================================= */
#define JPEG_HUFFBASE5_HuffBase_RAM_0_Pos (0UL)                     /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE5_HuffBase_RAM_0_Msk (0x1ffUL)                 /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE5_HuffBase_RAM_1_Pos (16UL)                    /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE5_HuffBase_RAM_1_Msk (0x1ff0000UL)             /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* =======================================================  HUFFBASE6  ======================================================= */
#define JPEG_HUFFBASE6_HuffBase_RAM_0_Pos (0UL)                     /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE6_HuffBase_RAM_0_Msk (0x1ffUL)                 /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE6_HuffBase_RAM_1_Pos (16UL)                    /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE6_HuffBase_RAM_1_Msk (0x1ff0000UL)             /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* =======================================================  HUFFBASE7  ======================================================= */
#define JPEG_HUFFBASE7_HuffBase_RAM_0_Pos (0UL)                     /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE7_HuffBase_RAM_0_Msk (0x1ffUL)                 /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE7_HuffBase_RAM_1_Pos (16UL)                    /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE7_HuffBase_RAM_1_Msk (0x1ff0000UL)             /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* =======================================================  HUFFBASE8  ======================================================= */
#define JPEG_HUFFBASE8_HuffBase_RAM_0_Pos (0UL)                     /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE8_HuffBase_RAM_0_Msk (0x1ffUL)                 /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE8_HuffBase_RAM_1_Pos (16UL)                    /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE8_HuffBase_RAM_1_Msk (0x1ff0000UL)             /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* =======================================================  HUFFBASE9  ======================================================= */
#define JPEG_HUFFBASE9_HuffBase_RAM_0_Pos (0UL)                     /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE9_HuffBase_RAM_0_Msk (0x1ffUL)                 /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE9_HuffBase_RAM_1_Pos (16UL)                    /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE9_HuffBase_RAM_1_Msk (0x1ff0000UL)             /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE10  ======================================================= */
#define JPEG_HUFFBASE10_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE10_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE10_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE10_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE11  ======================================================= */
#define JPEG_HUFFBASE11_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE11_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE11_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE11_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE12  ======================================================= */
#define JPEG_HUFFBASE12_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE12_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE12_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE12_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE13  ======================================================= */
#define JPEG_HUFFBASE13_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE13_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE13_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE13_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE14  ======================================================= */
#define JPEG_HUFFBASE14_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE14_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE14_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE14_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE15  ======================================================= */
#define JPEG_HUFFBASE15_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE15_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE15_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE15_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE16  ======================================================= */
#define JPEG_HUFFBASE16_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE16_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE16_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE16_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE17  ======================================================= */
#define JPEG_HUFFBASE17_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE17_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE17_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE17_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE18  ======================================================= */
#define JPEG_HUFFBASE18_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE18_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE18_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE18_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE19  ======================================================= */
#define JPEG_HUFFBASE19_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE19_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE19_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE19_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE20  ======================================================= */
#define JPEG_HUFFBASE20_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE20_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE20_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE20_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE21  ======================================================= */
#define JPEG_HUFFBASE21_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE21_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE21_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE21_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE22  ======================================================= */
#define JPEG_HUFFBASE22_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE22_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE22_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE22_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE23  ======================================================= */
#define JPEG_HUFFBASE23_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE23_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE23_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE23_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE24  ======================================================= */
#define JPEG_HUFFBASE24_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE24_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE24_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE24_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE25  ======================================================= */
#define JPEG_HUFFBASE25_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE25_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE25_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE25_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE26  ======================================================= */
#define JPEG_HUFFBASE26_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE26_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE26_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE26_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE27  ======================================================= */
#define JPEG_HUFFBASE27_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE27_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE27_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE27_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE28  ======================================================= */
#define JPEG_HUFFBASE28_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE28_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE28_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE28_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE29  ======================================================= */
#define JPEG_HUFFBASE29_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE29_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE29_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE29_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE30  ======================================================= */
#define JPEG_HUFFBASE30_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE30_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE30_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE30_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* ======================================================  HUFFBASE31  ======================================================= */
#define JPEG_HUFFBASE31_HuffBase_RAM_0_Pos (0UL)                    /*!< HuffBase_RAM_0 (Bit 0)                                */
#define JPEG_HUFFBASE31_HuffBase_RAM_0_Msk (0x1ffUL)                /*!< HuffBase_RAM_0 (Bitfield-Mask: 0x1ff)                 */
#define JPEG_HUFFBASE31_HuffBase_RAM_1_Pos (16UL)                   /*!< HuffBase_RAM_1 (Bit 16)                               */
#define JPEG_HUFFBASE31_HuffBase_RAM_1_Msk (0x1ff0000UL)            /*!< HuffBase_RAM_1 (Bitfield-Mask: 0x1ff)                 */
/* =======================================================  HUFFSYMB0  ======================================================= */
#define JPEG_HUFFSYMB0_HuffSymb_RAM_Pos   (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB0_HuffSymb_RAM_Msk   (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* =======================================================  HUFFSYMB1  ======================================================= */
#define JPEG_HUFFSYMB1_HuffSymb_RAM_Pos   (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB1_HuffSymb_RAM_Msk   (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* =======================================================  HUFFSYMB2  ======================================================= */
#define JPEG_HUFFSYMB2_HuffSymb_RAM_Pos   (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB2_HuffSymb_RAM_Msk   (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* =======================================================  HUFFSYMB3  ======================================================= */
#define JPEG_HUFFSYMB3_HuffSymb_RAM_Pos   (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB3_HuffSymb_RAM_Msk   (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* =======================================================  HUFFSYMB4  ======================================================= */
#define JPEG_HUFFSYMB4_HuffSymb_RAM_Pos   (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB4_HuffSymb_RAM_Msk   (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* =======================================================  HUFFSYMB5  ======================================================= */
#define JPEG_HUFFSYMB5_HuffSymb_RAM_Pos   (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB5_HuffSymb_RAM_Msk   (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* =======================================================  HUFFSYMB6  ======================================================= */
#define JPEG_HUFFSYMB6_HuffSymb_RAM_Pos   (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB6_HuffSymb_RAM_Msk   (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* =======================================================  HUFFSYMB7  ======================================================= */
#define JPEG_HUFFSYMB7_HuffSymb_RAM_Pos   (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB7_HuffSymb_RAM_Msk   (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* =======================================================  HUFFSYMB8  ======================================================= */
#define JPEG_HUFFSYMB8_HuffSymb_RAM_Pos   (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB8_HuffSymb_RAM_Msk   (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* =======================================================  HUFFSYMB9  ======================================================= */
#define JPEG_HUFFSYMB9_HuffSymb_RAM_Pos   (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB9_HuffSymb_RAM_Msk   (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB10  ======================================================= */
#define JPEG_HUFFSYMB10_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB10_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB11  ======================================================= */
#define JPEG_HUFFSYMB11_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB11_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB12  ======================================================= */
#define JPEG_HUFFSYMB12_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB12_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB13  ======================================================= */
#define JPEG_HUFFSYMB13_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB13_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB14  ======================================================= */
#define JPEG_HUFFSYMB14_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB14_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB15  ======================================================= */
#define JPEG_HUFFSYMB15_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB15_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB16  ======================================================= */
#define JPEG_HUFFSYMB16_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB16_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB17  ======================================================= */
#define JPEG_HUFFSYMB17_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB17_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB18  ======================================================= */
#define JPEG_HUFFSYMB18_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB18_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB19  ======================================================= */
#define JPEG_HUFFSYMB19_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB19_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB20  ======================================================= */
#define JPEG_HUFFSYMB20_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB20_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB21  ======================================================= */
#define JPEG_HUFFSYMB21_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB21_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB22  ======================================================= */
#define JPEG_HUFFSYMB22_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB22_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB23  ======================================================= */
#define JPEG_HUFFSYMB23_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB23_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB24  ======================================================= */
#define JPEG_HUFFSYMB24_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB24_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB25  ======================================================= */
#define JPEG_HUFFSYMB25_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB25_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB26  ======================================================= */
#define JPEG_HUFFSYMB26_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB26_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB27  ======================================================= */
#define JPEG_HUFFSYMB27_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB27_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB28  ======================================================= */
#define JPEG_HUFFSYMB28_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB28_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB29  ======================================================= */
#define JPEG_HUFFSYMB29_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB29_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB30  ======================================================= */
#define JPEG_HUFFSYMB30_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB30_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB31  ======================================================= */
#define JPEG_HUFFSYMB31_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB31_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB32  ======================================================= */
#define JPEG_HUFFSYMB32_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB32_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB33  ======================================================= */
#define JPEG_HUFFSYMB33_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB33_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB34  ======================================================= */
#define JPEG_HUFFSYMB34_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB34_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB35  ======================================================= */
#define JPEG_HUFFSYMB35_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB35_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB36  ======================================================= */
#define JPEG_HUFFSYMB36_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB36_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB37  ======================================================= */
#define JPEG_HUFFSYMB37_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB37_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB38  ======================================================= */
#define JPEG_HUFFSYMB38_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB38_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB39  ======================================================= */
#define JPEG_HUFFSYMB39_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB39_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB40  ======================================================= */
#define JPEG_HUFFSYMB40_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB40_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB41  ======================================================= */
#define JPEG_HUFFSYMB41_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB41_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB42  ======================================================= */
#define JPEG_HUFFSYMB42_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB42_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB43  ======================================================= */
#define JPEG_HUFFSYMB43_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB43_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB44  ======================================================= */
#define JPEG_HUFFSYMB44_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB44_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB45  ======================================================= */
#define JPEG_HUFFSYMB45_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB45_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB46  ======================================================= */
#define JPEG_HUFFSYMB46_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB46_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB47  ======================================================= */
#define JPEG_HUFFSYMB47_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB47_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB48  ======================================================= */
#define JPEG_HUFFSYMB48_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB48_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB49  ======================================================= */
#define JPEG_HUFFSYMB49_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB49_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB50  ======================================================= */
#define JPEG_HUFFSYMB50_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB50_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB51  ======================================================= */
#define JPEG_HUFFSYMB51_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB51_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB52  ======================================================= */
#define JPEG_HUFFSYMB52_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB52_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB53  ======================================================= */
#define JPEG_HUFFSYMB53_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB53_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB54  ======================================================= */
#define JPEG_HUFFSYMB54_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB54_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB55  ======================================================= */
#define JPEG_HUFFSYMB55_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB55_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB56  ======================================================= */
#define JPEG_HUFFSYMB56_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB56_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB57  ======================================================= */
#define JPEG_HUFFSYMB57_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB57_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB58  ======================================================= */
#define JPEG_HUFFSYMB58_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB58_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB59  ======================================================= */
#define JPEG_HUFFSYMB59_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB59_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB60  ======================================================= */
#define JPEG_HUFFSYMB60_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB60_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB61  ======================================================= */
#define JPEG_HUFFSYMB61_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB61_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB62  ======================================================= */
#define JPEG_HUFFSYMB62_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB62_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB63  ======================================================= */
#define JPEG_HUFFSYMB63_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB63_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB64  ======================================================= */
#define JPEG_HUFFSYMB64_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB64_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB65  ======================================================= */
#define JPEG_HUFFSYMB65_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB65_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB66  ======================================================= */
#define JPEG_HUFFSYMB66_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB66_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB67  ======================================================= */
#define JPEG_HUFFSYMB67_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB67_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB68  ======================================================= */
#define JPEG_HUFFSYMB68_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB68_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB69  ======================================================= */
#define JPEG_HUFFSYMB69_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB69_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB70  ======================================================= */
#define JPEG_HUFFSYMB70_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB70_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB71  ======================================================= */
#define JPEG_HUFFSYMB71_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB71_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB72  ======================================================= */
#define JPEG_HUFFSYMB72_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB72_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB73  ======================================================= */
#define JPEG_HUFFSYMB73_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB73_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB74  ======================================================= */
#define JPEG_HUFFSYMB74_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB74_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB75  ======================================================= */
#define JPEG_HUFFSYMB75_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB75_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB76  ======================================================= */
#define JPEG_HUFFSYMB76_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB76_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB77  ======================================================= */
#define JPEG_HUFFSYMB77_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB77_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB78  ======================================================= */
#define JPEG_HUFFSYMB78_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB78_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB79  ======================================================= */
#define JPEG_HUFFSYMB79_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB79_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB80  ======================================================= */
#define JPEG_HUFFSYMB80_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB80_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB81  ======================================================= */
#define JPEG_HUFFSYMB81_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB81_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB82  ======================================================= */
#define JPEG_HUFFSYMB82_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB82_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ======================================================  HUFFSYMB83  ======================================================= */
#define JPEG_HUFFSYMB83_HuffSymb_RAM_Pos  (0UL)                     /*!< HuffSymb_RAM (Bit 0)                                  */
#define JPEG_HUFFSYMB83_HuffSymb_RAM_Msk  (0xffffffffUL)            /*!< HuffSymb_RAM (Bitfield-Mask: 0xffffffff)              */
/* ========================================================  DHTMEM0  ======================================================== */
#define JPEG_DHTMEM0_DHTMem_RAM_Pos       (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM0_DHTMem_RAM_Msk       (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ========================================================  DHTMEM2  ======================================================== */
#define JPEG_DHTMEM2_DHTMem_RAM_Pos       (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM2_DHTMem_RAM_Msk       (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ========================================================  DHTMEM3  ======================================================== */
#define JPEG_DHTMEM3_DHTMem_RAM_Pos       (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM3_DHTMem_RAM_Msk       (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ========================================================  DHTMEM4  ======================================================== */
#define JPEG_DHTMEM4_DHTMem_RAM_Pos       (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM4_DHTMem_RAM_Msk       (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ========================================================  DHTMEM5  ======================================================== */
#define JPEG_DHTMEM5_DHTMem_RAM_Pos       (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM5_DHTMem_RAM_Msk       (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ========================================================  DHTMEM6  ======================================================== */
#define JPEG_DHTMEM6_DHTMem_RAM_Pos       (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM6_DHTMem_RAM_Msk       (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ========================================================  DHTMEM7  ======================================================== */
#define JPEG_DHTMEM7_DHTMem_RAM_Pos       (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM7_DHTMem_RAM_Msk       (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ========================================================  DHTMEM8  ======================================================== */
#define JPEG_DHTMEM8_DHTMem_RAM_Pos       (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM8_DHTMem_RAM_Msk       (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ========================================================  DHTMEM9  ======================================================== */
#define JPEG_DHTMEM9_DHTMem_RAM_Pos       (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM9_DHTMem_RAM_Msk       (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM10  ======================================================== */
#define JPEG_DHTMEM10_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM10_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM11  ======================================================== */
#define JPEG_DHTMEM11_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM11_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM12  ======================================================== */
#define JPEG_DHTMEM12_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM12_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM13  ======================================================== */
#define JPEG_DHTMEM13_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM13_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM14  ======================================================== */
#define JPEG_DHTMEM14_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM14_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM15  ======================================================== */
#define JPEG_DHTMEM15_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM15_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM16  ======================================================== */
#define JPEG_DHTMEM16_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM16_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM17  ======================================================== */
#define JPEG_DHTMEM17_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM17_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM18  ======================================================== */
#define JPEG_DHTMEM18_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM18_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM19  ======================================================== */
#define JPEG_DHTMEM19_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM19_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM20  ======================================================== */
#define JPEG_DHTMEM20_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM20_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM21  ======================================================== */
#define JPEG_DHTMEM21_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM21_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM22  ======================================================== */
#define JPEG_DHTMEM22_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM22_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM23  ======================================================== */
#define JPEG_DHTMEM23_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM23_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM24  ======================================================== */
#define JPEG_DHTMEM24_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM24_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM25  ======================================================== */
#define JPEG_DHTMEM25_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM25_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM26  ======================================================== */
#define JPEG_DHTMEM26_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM26_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM27  ======================================================== */
#define JPEG_DHTMEM27_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM27_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM28  ======================================================== */
#define JPEG_DHTMEM28_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM28_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM29  ======================================================== */
#define JPEG_DHTMEM29_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM29_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM30  ======================================================== */
#define JPEG_DHTMEM30_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM30_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM31  ======================================================== */
#define JPEG_DHTMEM31_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM31_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM32  ======================================================== */
#define JPEG_DHTMEM32_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM32_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM33  ======================================================== */
#define JPEG_DHTMEM33_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM33_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM34  ======================================================== */
#define JPEG_DHTMEM34_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM34_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM35  ======================================================== */
#define JPEG_DHTMEM35_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM35_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM36  ======================================================== */
#define JPEG_DHTMEM36_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM36_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM37  ======================================================== */
#define JPEG_DHTMEM37_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM37_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM38  ======================================================== */
#define JPEG_DHTMEM38_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM38_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM39  ======================================================== */
#define JPEG_DHTMEM39_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM39_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM40  ======================================================== */
#define JPEG_DHTMEM40_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM40_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM41  ======================================================== */
#define JPEG_DHTMEM41_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM41_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM42  ======================================================== */
#define JPEG_DHTMEM42_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM42_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM43  ======================================================== */
#define JPEG_DHTMEM43_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM43_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM44  ======================================================== */
#define JPEG_DHTMEM44_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM44_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM45  ======================================================== */
#define JPEG_DHTMEM45_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM45_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM46  ======================================================== */
#define JPEG_DHTMEM46_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM46_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM47  ======================================================== */
#define JPEG_DHTMEM47_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM47_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM48  ======================================================== */
#define JPEG_DHTMEM48_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM48_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM49  ======================================================== */
#define JPEG_DHTMEM49_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM49_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM50  ======================================================== */
#define JPEG_DHTMEM50_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM50_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM51  ======================================================== */
#define JPEG_DHTMEM51_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM51_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM52  ======================================================== */
#define JPEG_DHTMEM52_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM52_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM53  ======================================================== */
#define JPEG_DHTMEM53_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM53_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM54  ======================================================== */
#define JPEG_DHTMEM54_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM54_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM55  ======================================================== */
#define JPEG_DHTMEM55_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM55_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM56  ======================================================== */
#define JPEG_DHTMEM56_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM56_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM57  ======================================================== */
#define JPEG_DHTMEM57_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM57_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM58  ======================================================== */
#define JPEG_DHTMEM58_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM58_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM59  ======================================================== */
#define JPEG_DHTMEM59_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM59_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM60  ======================================================== */
#define JPEG_DHTMEM60_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM60_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM61  ======================================================== */
#define JPEG_DHTMEM61_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM61_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM62  ======================================================== */
#define JPEG_DHTMEM62_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM62_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM63  ======================================================== */
#define JPEG_DHTMEM63_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM63_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM64  ======================================================== */
#define JPEG_DHTMEM64_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM64_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM65  ======================================================== */
#define JPEG_DHTMEM65_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM65_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM66  ======================================================== */
#define JPEG_DHTMEM66_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM66_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM67  ======================================================== */
#define JPEG_DHTMEM67_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM67_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM68  ======================================================== */
#define JPEG_DHTMEM68_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM68_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM69  ======================================================== */
#define JPEG_DHTMEM69_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM69_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM70  ======================================================== */
#define JPEG_DHTMEM70_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM70_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM71  ======================================================== */
#define JPEG_DHTMEM71_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM71_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM72  ======================================================== */
#define JPEG_DHTMEM72_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM72_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM73  ======================================================== */
#define JPEG_DHTMEM73_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM73_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM74  ======================================================== */
#define JPEG_DHTMEM74_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM74_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM75  ======================================================== */
#define JPEG_DHTMEM75_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM75_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM76  ======================================================== */
#define JPEG_DHTMEM76_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM76_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM77  ======================================================== */
#define JPEG_DHTMEM77_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM77_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM78  ======================================================== */
#define JPEG_DHTMEM78_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM78_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM79  ======================================================== */
#define JPEG_DHTMEM79_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM79_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM80  ======================================================== */
#define JPEG_DHTMEM80_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM80_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM81  ======================================================== */
#define JPEG_DHTMEM81_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM81_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM82  ======================================================== */
#define JPEG_DHTMEM82_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM82_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM83  ======================================================== */
#define JPEG_DHTMEM83_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM83_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM84  ======================================================== */
#define JPEG_DHTMEM84_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM84_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM85  ======================================================== */
#define JPEG_DHTMEM85_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM85_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM86  ======================================================== */
#define JPEG_DHTMEM86_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM86_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM87  ======================================================== */
#define JPEG_DHTMEM87_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM87_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM88  ======================================================== */
#define JPEG_DHTMEM88_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM88_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM89  ======================================================== */
#define JPEG_DHTMEM89_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM89_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM90  ======================================================== */
#define JPEG_DHTMEM90_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM90_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM91  ======================================================== */
#define JPEG_DHTMEM91_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM91_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM92  ======================================================== */
#define JPEG_DHTMEM92_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM92_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM93  ======================================================== */
#define JPEG_DHTMEM93_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM93_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM94  ======================================================== */
#define JPEG_DHTMEM94_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM94_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM95  ======================================================== */
#define JPEG_DHTMEM95_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM95_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM96  ======================================================== */
#define JPEG_DHTMEM96_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM96_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM97  ======================================================== */
#define JPEG_DHTMEM97_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM97_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM98  ======================================================== */
#define JPEG_DHTMEM98_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM98_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM99  ======================================================== */
#define JPEG_DHTMEM99_DHTMem_RAM_Pos      (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM99_DHTMem_RAM_Msk      (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM100  ======================================================= */
#define JPEG_DHTMEM100_DHTMem_RAM_Pos     (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM100_DHTMem_RAM_Msk     (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM101  ======================================================= */
#define JPEG_DHTMEM101_DHTMem_RAM_Pos     (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM101_DHTMem_RAM_Msk     (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM102  ======================================================= */
#define JPEG_DHTMEM102_DHTMem_RAM_Pos     (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM102_DHTMem_RAM_Msk     (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =======================================================  DHTMEM103  ======================================================= */
#define JPEG_DHTMEM103_DHTMem_RAM_Pos     (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_DHTMEM103_DHTMem_RAM_Msk     (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC0_0  ===================================================== */
#define JPEG_HUFFENC_AC0_0_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_0_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC0_1  ===================================================== */
#define JPEG_HUFFENC_AC0_1_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_1_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC0_2  ===================================================== */
#define JPEG_HUFFENC_AC0_2_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_2_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC0_3  ===================================================== */
#define JPEG_HUFFENC_AC0_3_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_3_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC0_4  ===================================================== */
#define JPEG_HUFFENC_AC0_4_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_4_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC0_5  ===================================================== */
#define JPEG_HUFFENC_AC0_5_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_5_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC0_6  ===================================================== */
#define JPEG_HUFFENC_AC0_6_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_6_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC0_7  ===================================================== */
#define JPEG_HUFFENC_AC0_7_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_7_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC0_8  ===================================================== */
#define JPEG_HUFFENC_AC0_8_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_8_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC0_9  ===================================================== */
#define JPEG_HUFFENC_AC0_9_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_9_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_10  ===================================================== */
#define JPEG_HUFFENC_AC0_10_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_10_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_11  ===================================================== */
#define JPEG_HUFFENC_AC0_11_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_11_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_12  ===================================================== */
#define JPEG_HUFFENC_AC0_12_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_12_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_13  ===================================================== */
#define JPEG_HUFFENC_AC0_13_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_13_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_14  ===================================================== */
#define JPEG_HUFFENC_AC0_14_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_14_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_15  ===================================================== */
#define JPEG_HUFFENC_AC0_15_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_15_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_16  ===================================================== */
#define JPEG_HUFFENC_AC0_16_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_16_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_17  ===================================================== */
#define JPEG_HUFFENC_AC0_17_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_17_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_18  ===================================================== */
#define JPEG_HUFFENC_AC0_18_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_18_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_19  ===================================================== */
#define JPEG_HUFFENC_AC0_19_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_19_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_20  ===================================================== */
#define JPEG_HUFFENC_AC0_20_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_20_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_21  ===================================================== */
#define JPEG_HUFFENC_AC0_21_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_21_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_22  ===================================================== */
#define JPEG_HUFFENC_AC0_22_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_22_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_23  ===================================================== */
#define JPEG_HUFFENC_AC0_23_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_23_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_24  ===================================================== */
#define JPEG_HUFFENC_AC0_24_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_24_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_25  ===================================================== */
#define JPEG_HUFFENC_AC0_25_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_25_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_26  ===================================================== */
#define JPEG_HUFFENC_AC0_26_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_26_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_27  ===================================================== */
#define JPEG_HUFFENC_AC0_27_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_27_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_28  ===================================================== */
#define JPEG_HUFFENC_AC0_28_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_28_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_29  ===================================================== */
#define JPEG_HUFFENC_AC0_29_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_29_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_30  ===================================================== */
#define JPEG_HUFFENC_AC0_30_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_30_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_31  ===================================================== */
#define JPEG_HUFFENC_AC0_31_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_31_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_32  ===================================================== */
#define JPEG_HUFFENC_AC0_32_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_32_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_33  ===================================================== */
#define JPEG_HUFFENC_AC0_33_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_33_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_34  ===================================================== */
#define JPEG_HUFFENC_AC0_34_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_34_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_35  ===================================================== */
#define JPEG_HUFFENC_AC0_35_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_35_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_36  ===================================================== */
#define JPEG_HUFFENC_AC0_36_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_36_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_37  ===================================================== */
#define JPEG_HUFFENC_AC0_37_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_37_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_38  ===================================================== */
#define JPEG_HUFFENC_AC0_38_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_38_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_39  ===================================================== */
#define JPEG_HUFFENC_AC0_39_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_39_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_40  ===================================================== */
#define JPEG_HUFFENC_AC0_40_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_40_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_41  ===================================================== */
#define JPEG_HUFFENC_AC0_41_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_41_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_42  ===================================================== */
#define JPEG_HUFFENC_AC0_42_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_42_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_43  ===================================================== */
#define JPEG_HUFFENC_AC0_43_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_43_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_44  ===================================================== */
#define JPEG_HUFFENC_AC0_44_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_44_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_45  ===================================================== */
#define JPEG_HUFFENC_AC0_45_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_45_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_46  ===================================================== */
#define JPEG_HUFFENC_AC0_46_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_46_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_47  ===================================================== */
#define JPEG_HUFFENC_AC0_47_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_47_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_48  ===================================================== */
#define JPEG_HUFFENC_AC0_48_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_48_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_49  ===================================================== */
#define JPEG_HUFFENC_AC0_49_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_49_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_50  ===================================================== */
#define JPEG_HUFFENC_AC0_50_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_50_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_51  ===================================================== */
#define JPEG_HUFFENC_AC0_51_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_51_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_52  ===================================================== */
#define JPEG_HUFFENC_AC0_52_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_52_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_53  ===================================================== */
#define JPEG_HUFFENC_AC0_53_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_53_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_54  ===================================================== */
#define JPEG_HUFFENC_AC0_54_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_54_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_55  ===================================================== */
#define JPEG_HUFFENC_AC0_55_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_55_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_56  ===================================================== */
#define JPEG_HUFFENC_AC0_56_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_56_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_57  ===================================================== */
#define JPEG_HUFFENC_AC0_57_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_57_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_58  ===================================================== */
#define JPEG_HUFFENC_AC0_58_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_58_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_59  ===================================================== */
#define JPEG_HUFFENC_AC0_59_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_59_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_60  ===================================================== */
#define JPEG_HUFFENC_AC0_60_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_60_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_61  ===================================================== */
#define JPEG_HUFFENC_AC0_61_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_61_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_62  ===================================================== */
#define JPEG_HUFFENC_AC0_62_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_62_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_63  ===================================================== */
#define JPEG_HUFFENC_AC0_63_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_63_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_64  ===================================================== */
#define JPEG_HUFFENC_AC0_64_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_64_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_65  ===================================================== */
#define JPEG_HUFFENC_AC0_65_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_65_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_66  ===================================================== */
#define JPEG_HUFFENC_AC0_66_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_66_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_67  ===================================================== */
#define JPEG_HUFFENC_AC0_67_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_67_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_68  ===================================================== */
#define JPEG_HUFFENC_AC0_68_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_68_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_69  ===================================================== */
#define JPEG_HUFFENC_AC0_69_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_69_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_70  ===================================================== */
#define JPEG_HUFFENC_AC0_70_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_70_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_71  ===================================================== */
#define JPEG_HUFFENC_AC0_71_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_71_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_72  ===================================================== */
#define JPEG_HUFFENC_AC0_72_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_72_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_73  ===================================================== */
#define JPEG_HUFFENC_AC0_73_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_73_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_74  ===================================================== */
#define JPEG_HUFFENC_AC0_74_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_74_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_75  ===================================================== */
#define JPEG_HUFFENC_AC0_75_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_75_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_76  ===================================================== */
#define JPEG_HUFFENC_AC0_76_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_76_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_77  ===================================================== */
#define JPEG_HUFFENC_AC0_77_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_77_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_78  ===================================================== */
#define JPEG_HUFFENC_AC0_78_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_78_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_79  ===================================================== */
#define JPEG_HUFFENC_AC0_79_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_79_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_80  ===================================================== */
#define JPEG_HUFFENC_AC0_80_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_80_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_81  ===================================================== */
#define JPEG_HUFFENC_AC0_81_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_81_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_82  ===================================================== */
#define JPEG_HUFFENC_AC0_82_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_82_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_83  ===================================================== */
#define JPEG_HUFFENC_AC0_83_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_83_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_84  ===================================================== */
#define JPEG_HUFFENC_AC0_84_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_84_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_85  ===================================================== */
#define JPEG_HUFFENC_AC0_85_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_85_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_86  ===================================================== */
#define JPEG_HUFFENC_AC0_86_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_86_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC0_87  ===================================================== */
#define JPEG_HUFFENC_AC0_87_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC0_87_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC1_0  ===================================================== */
#define JPEG_HUFFENC_AC1_0_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_0_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC1_1  ===================================================== */
#define JPEG_HUFFENC_AC1_1_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_1_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC1_2  ===================================================== */
#define JPEG_HUFFENC_AC1_2_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_2_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC1_3  ===================================================== */
#define JPEG_HUFFENC_AC1_3_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_3_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC1_4  ===================================================== */
#define JPEG_HUFFENC_AC1_4_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_4_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC1_5  ===================================================== */
#define JPEG_HUFFENC_AC1_5_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_5_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC1_6  ===================================================== */
#define JPEG_HUFFENC_AC1_6_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_6_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC1_7  ===================================================== */
#define JPEG_HUFFENC_AC1_7_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_7_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC1_8  ===================================================== */
#define JPEG_HUFFENC_AC1_8_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_8_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_AC1_9  ===================================================== */
#define JPEG_HUFFENC_AC1_9_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_9_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_10  ===================================================== */
#define JPEG_HUFFENC_AC1_10_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_10_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_11  ===================================================== */
#define JPEG_HUFFENC_AC1_11_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_11_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_12  ===================================================== */
#define JPEG_HUFFENC_AC1_12_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_12_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_13  ===================================================== */
#define JPEG_HUFFENC_AC1_13_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_13_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_14  ===================================================== */
#define JPEG_HUFFENC_AC1_14_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_14_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_15  ===================================================== */
#define JPEG_HUFFENC_AC1_15_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_15_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_16  ===================================================== */
#define JPEG_HUFFENC_AC1_16_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_16_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_17  ===================================================== */
#define JPEG_HUFFENC_AC1_17_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_17_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_18  ===================================================== */
#define JPEG_HUFFENC_AC1_18_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_18_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_19  ===================================================== */
#define JPEG_HUFFENC_AC1_19_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_19_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_20  ===================================================== */
#define JPEG_HUFFENC_AC1_20_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_20_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_21  ===================================================== */
#define JPEG_HUFFENC_AC1_21_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_21_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_22  ===================================================== */
#define JPEG_HUFFENC_AC1_22_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_22_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_23  ===================================================== */
#define JPEG_HUFFENC_AC1_23_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_23_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_24  ===================================================== */
#define JPEG_HUFFENC_AC1_24_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_24_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_25  ===================================================== */
#define JPEG_HUFFENC_AC1_25_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_25_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_26  ===================================================== */
#define JPEG_HUFFENC_AC1_26_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_26_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_27  ===================================================== */
#define JPEG_HUFFENC_AC1_27_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_27_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_28  ===================================================== */
#define JPEG_HUFFENC_AC1_28_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_28_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_29  ===================================================== */
#define JPEG_HUFFENC_AC1_29_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_29_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_30  ===================================================== */
#define JPEG_HUFFENC_AC1_30_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_30_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_31  ===================================================== */
#define JPEG_HUFFENC_AC1_31_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_31_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_32  ===================================================== */
#define JPEG_HUFFENC_AC1_32_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_32_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_33  ===================================================== */
#define JPEG_HUFFENC_AC1_33_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_33_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_34  ===================================================== */
#define JPEG_HUFFENC_AC1_34_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_34_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_35  ===================================================== */
#define JPEG_HUFFENC_AC1_35_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_35_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_36  ===================================================== */
#define JPEG_HUFFENC_AC1_36_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_36_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_37  ===================================================== */
#define JPEG_HUFFENC_AC1_37_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_37_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_38  ===================================================== */
#define JPEG_HUFFENC_AC1_38_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_38_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_39  ===================================================== */
#define JPEG_HUFFENC_AC1_39_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_39_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_40  ===================================================== */
#define JPEG_HUFFENC_AC1_40_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_40_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_41  ===================================================== */
#define JPEG_HUFFENC_AC1_41_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_41_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_42  ===================================================== */
#define JPEG_HUFFENC_AC1_42_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_42_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_43  ===================================================== */
#define JPEG_HUFFENC_AC1_43_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_43_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_44  ===================================================== */
#define JPEG_HUFFENC_AC1_44_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_44_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_45  ===================================================== */
#define JPEG_HUFFENC_AC1_45_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_45_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_46  ===================================================== */
#define JPEG_HUFFENC_AC1_46_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_46_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_47  ===================================================== */
#define JPEG_HUFFENC_AC1_47_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_47_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_48  ===================================================== */
#define JPEG_HUFFENC_AC1_48_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_48_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_49  ===================================================== */
#define JPEG_HUFFENC_AC1_49_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_49_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_50  ===================================================== */
#define JPEG_HUFFENC_AC1_50_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_50_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_51  ===================================================== */
#define JPEG_HUFFENC_AC1_51_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_51_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_52  ===================================================== */
#define JPEG_HUFFENC_AC1_52_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_52_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_53  ===================================================== */
#define JPEG_HUFFENC_AC1_53_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_53_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_54  ===================================================== */
#define JPEG_HUFFENC_AC1_54_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_54_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_55  ===================================================== */
#define JPEG_HUFFENC_AC1_55_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_55_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_56  ===================================================== */
#define JPEG_HUFFENC_AC1_56_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_56_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_57  ===================================================== */
#define JPEG_HUFFENC_AC1_57_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_57_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_58  ===================================================== */
#define JPEG_HUFFENC_AC1_58_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_58_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_59  ===================================================== */
#define JPEG_HUFFENC_AC1_59_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_59_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_60  ===================================================== */
#define JPEG_HUFFENC_AC1_60_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_60_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_61  ===================================================== */
#define JPEG_HUFFENC_AC1_61_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_61_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_62  ===================================================== */
#define JPEG_HUFFENC_AC1_62_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_62_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_63  ===================================================== */
#define JPEG_HUFFENC_AC1_63_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_63_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_64  ===================================================== */
#define JPEG_HUFFENC_AC1_64_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_64_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_65  ===================================================== */
#define JPEG_HUFFENC_AC1_65_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_65_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_66  ===================================================== */
#define JPEG_HUFFENC_AC1_66_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_66_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_67  ===================================================== */
#define JPEG_HUFFENC_AC1_67_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_67_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_68  ===================================================== */
#define JPEG_HUFFENC_AC1_68_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_68_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_69  ===================================================== */
#define JPEG_HUFFENC_AC1_69_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_69_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_70  ===================================================== */
#define JPEG_HUFFENC_AC1_70_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_70_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_71  ===================================================== */
#define JPEG_HUFFENC_AC1_71_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_71_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_72  ===================================================== */
#define JPEG_HUFFENC_AC1_72_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_72_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_73  ===================================================== */
#define JPEG_HUFFENC_AC1_73_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_73_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_74  ===================================================== */
#define JPEG_HUFFENC_AC1_74_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_74_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_75  ===================================================== */
#define JPEG_HUFFENC_AC1_75_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_75_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_76  ===================================================== */
#define JPEG_HUFFENC_AC1_76_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_76_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_77  ===================================================== */
#define JPEG_HUFFENC_AC1_77_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_77_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_78  ===================================================== */
#define JPEG_HUFFENC_AC1_78_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_78_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_79  ===================================================== */
#define JPEG_HUFFENC_AC1_79_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_79_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_80  ===================================================== */
#define JPEG_HUFFENC_AC1_80_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_80_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_81  ===================================================== */
#define JPEG_HUFFENC_AC1_81_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_81_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_82  ===================================================== */
#define JPEG_HUFFENC_AC1_82_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_82_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_83  ===================================================== */
#define JPEG_HUFFENC_AC1_83_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_83_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_84  ===================================================== */
#define JPEG_HUFFENC_AC1_84_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_84_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_85  ===================================================== */
#define JPEG_HUFFENC_AC1_85_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_85_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_86  ===================================================== */
#define JPEG_HUFFENC_AC1_86_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_86_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* ====================================================  HUFFENC_AC1_87  ===================================================== */
#define JPEG_HUFFENC_AC1_87_DHTMem_RAM_Pos (0UL)                    /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_AC1_87_DHTMem_RAM_Msk (0xffffffffUL)           /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC0_0  ===================================================== */
#define JPEG_HUFFENC_DC0_0_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC0_0_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC0_1  ===================================================== */
#define JPEG_HUFFENC_DC0_1_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC0_1_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC0_2  ===================================================== */
#define JPEG_HUFFENC_DC0_2_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC0_2_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC0_3  ===================================================== */
#define JPEG_HUFFENC_DC0_3_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC0_3_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC0_4  ===================================================== */
#define JPEG_HUFFENC_DC0_4_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC0_4_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC0_5  ===================================================== */
#define JPEG_HUFFENC_DC0_5_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC0_5_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC0_6  ===================================================== */
#define JPEG_HUFFENC_DC0_6_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC0_6_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC0_7  ===================================================== */
#define JPEG_HUFFENC_DC0_7_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC0_7_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC1_0  ===================================================== */
#define JPEG_HUFFENC_DC1_0_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC1_0_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC1_1  ===================================================== */
#define JPEG_HUFFENC_DC1_1_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC1_1_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC1_2  ===================================================== */
#define JPEG_HUFFENC_DC1_2_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC1_2_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC1_3  ===================================================== */
#define JPEG_HUFFENC_DC1_3_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC1_3_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC1_4  ===================================================== */
#define JPEG_HUFFENC_DC1_4_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC1_4_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC1_5  ===================================================== */
#define JPEG_HUFFENC_DC1_5_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC1_5_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC1_6  ===================================================== */
#define JPEG_HUFFENC_DC1_6_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC1_6_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */
/* =====================================================  HUFFENC_DC1_7  ===================================================== */
#define JPEG_HUFFENC_DC1_7_DHTMem_RAM_Pos (0UL)                     /*!< DHTMem_RAM (Bit 0)                                    */
#define JPEG_HUFFENC_DC1_7_DHTMem_RAM_Msk (0xffffffffUL)            /*!< DHTMem_RAM (Bitfield-Mask: 0xffffffff)                */

