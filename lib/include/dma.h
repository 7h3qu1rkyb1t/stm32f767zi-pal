#include "core.h"


#define DMA2_BASE                   0x40026400UL
#define DMA1_BASE                   0x40026000UL

#define DMA2                        ((DMA2_Type*)              DMA2_BASE)
#define DMA1                        ((DMA2_Type*)              DMA1_BASE)


/* =========================================================================================================================== */
/* ================                                           DMA2                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief DMA controller (DMA2)
  */

typedef struct {                                /*!< (@ 0x40026400) DMA2 Structure                                             */
  
  union {
    __IM  uint32_t LISR;                        /*!< (@ 0x00000000) low interrupt status register                              */
    
    struct {
      __IM  uint32_t FEIF0      : 1;            /*!< [0..0] Stream x FIFO error interrupt flag (x=3..0)                        */
            uint32_t            : 1;
      __IM  uint32_t DMEIF0     : 1;            /*!< [2..2] Stream x direct mode error interrupt flag (x=3..0)                 */
      __IM  uint32_t TEIF0      : 1;            /*!< [3..3] Stream x transfer error interrupt flag (x=3..0)                    */
      __IM  uint32_t HTIF0      : 1;            /*!< [4..4] Stream x half transfer interrupt flag (x=3..0)                     */
      __IM  uint32_t TCIF0      : 1;            /*!< [5..5] Stream x transfer complete interrupt flag (x = 3..0)               */
      __IM  uint32_t FEIF1      : 1;            /*!< [6..6] Stream x FIFO error interrupt flag (x=3..0)                        */
            uint32_t            : 1;
      __IM  uint32_t DMEIF1     : 1;            /*!< [8..8] Stream x direct mode error interrupt flag (x=3..0)                 */
      __IM  uint32_t TEIF1      : 1;            /*!< [9..9] Stream x transfer error interrupt flag (x=3..0)                    */
      __IM  uint32_t HTIF1      : 1;            /*!< [10..10] Stream x half transfer interrupt flag (x=3..0)                   */
      __IM  uint32_t TCIF1      : 1;            /*!< [11..11] Stream x transfer complete interrupt flag (x = 3..0)             */
            uint32_t            : 4;
      __IM  uint32_t FEIF2      : 1;            /*!< [16..16] Stream x FIFO error interrupt flag (x=3..0)                      */
            uint32_t            : 1;
      __IM  uint32_t DMEIF2     : 1;            /*!< [18..18] Stream x direct mode error interrupt flag (x=3..0)               */
      __IM  uint32_t TEIF2      : 1;            /*!< [19..19] Stream x transfer error interrupt flag (x=3..0)                  */
      __IM  uint32_t HTIF2      : 1;            /*!< [20..20] Stream x half transfer interrupt flag (x=3..0)                   */
      __IM  uint32_t TCIF2      : 1;            /*!< [21..21] Stream x transfer complete interrupt flag (x = 3..0)             */
      __IM  uint32_t FEIF3      : 1;            /*!< [22..22] Stream x FIFO error interrupt flag (x=3..0)                      */
            uint32_t            : 1;
      __IM  uint32_t DMEIF3     : 1;            /*!< [24..24] Stream x direct mode error interrupt flag (x=3..0)               */
      __IM  uint32_t TEIF3      : 1;            /*!< [25..25] Stream x transfer error interrupt flag (x=3..0)                  */
      __IM  uint32_t HTIF3      : 1;            /*!< [26..26] Stream x half transfer interrupt flag (x=3..0)                   */
      __IM  uint32_t TCIF3      : 1;            /*!< [27..27] Stream x transfer complete interrupt flag (x = 3..0)             */
            uint32_t            : 4;
    } LISR_b;
  } ;
  
  union {
    __IM  uint32_t HISR;                        /*!< (@ 0x00000004) high interrupt status register                             */
    
    struct {
      __IM  uint32_t FEIF4      : 1;            /*!< [0..0] Stream x FIFO error interrupt flag (x=7..4)                        */
            uint32_t            : 1;
      __IM  uint32_t DMEIF4     : 1;            /*!< [2..2] Stream x direct mode error interrupt flag (x=7..4)                 */
      __IM  uint32_t TEIF4      : 1;            /*!< [3..3] Stream x transfer error interrupt flag (x=7..4)                    */
      __IM  uint32_t HTIF4      : 1;            /*!< [4..4] Stream x half transfer interrupt flag (x=7..4)                     */
      __IM  uint32_t TCIF4      : 1;            /*!< [5..5] Stream x transfer complete interrupt flag (x=7..4)                 */
      __IM  uint32_t FEIF5      : 1;            /*!< [6..6] Stream x FIFO error interrupt flag (x=7..4)                        */
            uint32_t            : 1;
      __IM  uint32_t DMEIF5     : 1;            /*!< [8..8] Stream x direct mode error interrupt flag (x=7..4)                 */
      __IM  uint32_t TEIF5      : 1;            /*!< [9..9] Stream x transfer error interrupt flag (x=7..4)                    */
      __IM  uint32_t HTIF5      : 1;            /*!< [10..10] Stream x half transfer interrupt flag (x=7..4)                   */
      __IM  uint32_t TCIF5      : 1;            /*!< [11..11] Stream x transfer complete interrupt flag (x=7..4)               */
            uint32_t            : 4;
      __IM  uint32_t FEIF6      : 1;            /*!< [16..16] Stream x FIFO error interrupt flag (x=7..4)                      */
            uint32_t            : 1;
      __IM  uint32_t DMEIF6     : 1;            /*!< [18..18] Stream x direct mode error interrupt flag (x=7..4)               */
      __IM  uint32_t TEIF6      : 1;            /*!< [19..19] Stream x transfer error interrupt flag (x=7..4)                  */
      __IM  uint32_t HTIF6      : 1;            /*!< [20..20] Stream x half transfer interrupt flag (x=7..4)                   */
      __IM  uint32_t TCIF6      : 1;            /*!< [21..21] Stream x transfer complete interrupt flag (x=7..4)               */
      __IM  uint32_t FEIF7      : 1;            /*!< [22..22] Stream x FIFO error interrupt flag (x=7..4)                      */
            uint32_t            : 1;
      __IM  uint32_t DMEIF7     : 1;            /*!< [24..24] Stream x direct mode error interrupt flag (x=7..4)               */
      __IM  uint32_t TEIF7      : 1;            /*!< [25..25] Stream x transfer error interrupt flag (x=7..4)                  */
      __IM  uint32_t HTIF7      : 1;            /*!< [26..26] Stream x half transfer interrupt flag (x=7..4)                   */
      __IM  uint32_t TCIF7      : 1;            /*!< [27..27] Stream x transfer complete interrupt flag (x=7..4)               */
            uint32_t            : 4;
    } HISR_b;
  } ;
  
  union {
    __IOM uint32_t LIFCR;                       /*!< (@ 0x00000008) low interrupt flag clear register                          */
    
    struct {
      __IOM uint32_t CFEIF0     : 1;            /*!< [0..0] Stream x clear FIFO error interrupt flag (x = 3..0)                */
            uint32_t            : 1;
      __IOM uint32_t CDMEIF0    : 1;            /*!< [2..2] Stream x clear direct mode error interrupt flag (x =
                                                     3..0)                                                                     */
      __IOM uint32_t CTEIF0     : 1;            /*!< [3..3] Stream x clear transfer error interrupt flag (x = 3..0)            */
      __IOM uint32_t CHTIF0     : 1;            /*!< [4..4] Stream x clear half transfer interrupt flag (x = 3..0)             */
      __IOM uint32_t CTCIF0     : 1;            /*!< [5..5] Stream x clear transfer complete interrupt flag (x =
                                                     3..0)                                                                     */
      __IOM uint32_t CFEIF1     : 1;            /*!< [6..6] Stream x clear FIFO error interrupt flag (x = 3..0)                */
            uint32_t            : 1;
      __IOM uint32_t CDMEIF1    : 1;            /*!< [8..8] Stream x clear direct mode error interrupt flag (x =
                                                     3..0)                                                                     */
      __IOM uint32_t CTEIF1     : 1;            /*!< [9..9] Stream x clear transfer error interrupt flag (x = 3..0)            */
      __IOM uint32_t CHTIF1     : 1;            /*!< [10..10] Stream x clear half transfer interrupt flag (x = 3..0)           */
      __IOM uint32_t CTCIF1     : 1;            /*!< [11..11] Stream x clear transfer complete interrupt flag (x
                                                     = 3..0)                                                                   */
            uint32_t            : 4;
      __IOM uint32_t CFEIF2     : 1;            /*!< [16..16] Stream x clear FIFO error interrupt flag (x = 3..0)              */
            uint32_t            : 1;
      __IOM uint32_t CDMEIF2    : 1;            /*!< [18..18] Stream x clear direct mode error interrupt flag (x
                                                     = 3..0)                                                                   */
      __IOM uint32_t CTEIF2     : 1;            /*!< [19..19] Stream x clear transfer error interrupt flag (x = 3..0)          */
      __IOM uint32_t CHTIF2     : 1;            /*!< [20..20] Stream x clear half transfer interrupt flag (x = 3..0)           */
      __IOM uint32_t CTCIF2     : 1;            /*!< [21..21] Stream x clear transfer complete interrupt flag (x
                                                     = 3..0)                                                                   */
      __IOM uint32_t CFEIF3     : 1;            /*!< [22..22] Stream x clear FIFO error interrupt flag (x = 3..0)              */
            uint32_t            : 1;
      __IOM uint32_t CDMEIF3    : 1;            /*!< [24..24] Stream x clear direct mode error interrupt flag (x
                                                     = 3..0)                                                                   */
      __IOM uint32_t CTEIF3     : 1;            /*!< [25..25] Stream x clear transfer error interrupt flag (x = 3..0)          */
      __IOM uint32_t CHTIF3     : 1;            /*!< [26..26] Stream x clear half transfer interrupt flag (x = 3..0)           */
      __IOM uint32_t CTCIF3     : 1;            /*!< [27..27] Stream x clear transfer complete interrupt flag (x
                                                     = 3..0)                                                                   */
            uint32_t            : 4;
    } LIFCR_b;
  } ;
  
  union {
    __IOM uint32_t HIFCR;                       /*!< (@ 0x0000000C) high interrupt flag clear register                         */
    
    struct {
      __IOM uint32_t CFEIF4     : 1;            /*!< [0..0] Stream x clear FIFO error interrupt flag (x = 7..4)                */
            uint32_t            : 1;
      __IOM uint32_t CDMEIF4    : 1;            /*!< [2..2] Stream x clear direct mode error interrupt flag (x =
                                                     7..4)                                                                     */
      __IOM uint32_t CTEIF4     : 1;            /*!< [3..3] Stream x clear transfer error interrupt flag (x = 7..4)            */
      __IOM uint32_t CHTIF4     : 1;            /*!< [4..4] Stream x clear half transfer interrupt flag (x = 7..4)             */
      __IOM uint32_t CTCIF4     : 1;            /*!< [5..5] Stream x clear transfer complete interrupt flag (x =
                                                     7..4)                                                                     */
      __IOM uint32_t CFEIF5     : 1;            /*!< [6..6] Stream x clear FIFO error interrupt flag (x = 7..4)                */
            uint32_t            : 1;
      __IOM uint32_t CDMEIF5    : 1;            /*!< [8..8] Stream x clear direct mode error interrupt flag (x =
                                                     7..4)                                                                     */
      __IOM uint32_t CTEIF5     : 1;            /*!< [9..9] Stream x clear transfer error interrupt flag (x = 7..4)            */
      __IOM uint32_t CHTIF5     : 1;            /*!< [10..10] Stream x clear half transfer interrupt flag (x = 7..4)           */
      __IOM uint32_t CTCIF5     : 1;            /*!< [11..11] Stream x clear transfer complete interrupt flag (x
                                                     = 7..4)                                                                   */
            uint32_t            : 4;
      __IOM uint32_t CFEIF6     : 1;            /*!< [16..16] Stream x clear FIFO error interrupt flag (x = 7..4)              */
            uint32_t            : 1;
      __IOM uint32_t CDMEIF6    : 1;            /*!< [18..18] Stream x clear direct mode error interrupt flag (x
                                                     = 7..4)                                                                   */
      __IOM uint32_t CTEIF6     : 1;            /*!< [19..19] Stream x clear transfer error interrupt flag (x = 7..4)          */
      __IOM uint32_t CHTIF6     : 1;            /*!< [20..20] Stream x clear half transfer interrupt flag (x = 7..4)           */
      __IOM uint32_t CTCIF6     : 1;            /*!< [21..21] Stream x clear transfer complete interrupt flag (x
                                                     = 7..4)                                                                   */
      __IOM uint32_t CFEIF7     : 1;            /*!< [22..22] Stream x clear FIFO error interrupt flag (x = 7..4)              */
            uint32_t            : 1;
      __IOM uint32_t CDMEIF7    : 1;            /*!< [24..24] Stream x clear direct mode error interrupt flag (x
                                                     = 7..4)                                                                   */
      __IOM uint32_t CTEIF7     : 1;            /*!< [25..25] Stream x clear transfer error interrupt flag (x = 7..4)          */
      __IOM uint32_t CHTIF7     : 1;            /*!< [26..26] Stream x clear half transfer interrupt flag (x = 7..4)           */
      __IOM uint32_t CTCIF7     : 1;            /*!< [27..27] Stream x clear transfer complete interrupt flag (x
                                                     = 7..4)                                                                   */
            uint32_t            : 4;
    } HIFCR_b;
  } ;
  
  union {
    __IOM uint32_t S0CR;                        /*!< (@ 0x00000010) stream x configuration register                            */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Stream enable / flag stream ready when read low                    */
      __IOM uint32_t DMEIE      : 1;            /*!< [1..1] Direct mode error interrupt enable                                 */
      __IOM uint32_t TEIE       : 1;            /*!< [2..2] Transfer error interrupt enable                                    */
      __IOM uint32_t HTIE       : 1;            /*!< [3..3] Half transfer interrupt enable                                     */
      __IOM uint32_t TCIE       : 1;            /*!< [4..4] Transfer complete interrupt enable                                 */
      __IOM uint32_t PFCTRL     : 1;            /*!< [5..5] Peripheral flow controller                                         */
      __IOM uint32_t DIR        : 2;            /*!< [7..6] Data transfer direction                                            */
      __IOM uint32_t CIRC       : 1;            /*!< [8..8] Circular mode                                                      */
      __IOM uint32_t PINC       : 1;            /*!< [9..9] Peripheral increment mode                                          */
      __IOM uint32_t MINC       : 1;            /*!< [10..10] Memory increment mode                                            */
      __IOM uint32_t PSIZE      : 2;            /*!< [12..11] Peripheral data size                                             */
      __IOM uint32_t MSIZE      : 2;            /*!< [14..13] Memory data size                                                 */
      __IOM uint32_t PINCOS     : 1;            /*!< [15..15] Peripheral increment offset size                                 */
      __IOM uint32_t PL         : 2;            /*!< [17..16] Priority level                                                   */
      __IOM uint32_t DBM        : 1;            /*!< [18..18] Double buffer mode                                               */
      __IOM uint32_t CT         : 1;            /*!< [19..19] Current target (only in double buffer mode)                      */
            uint32_t            : 1;
      __IOM uint32_t PBURST     : 2;            /*!< [22..21] Peripheral burst transfer configuration                          */
      __IOM uint32_t MBURST     : 2;            /*!< [24..23] Memory burst transfer configuration                              */
      __IOM uint32_t CHSEL      : 4;            /*!< [28..25] Channel selection                                                */
            uint32_t            : 3;
    } S0CR_b;
  } ;
  
  union {
    __IOM uint32_t S0NDTR;                      /*!< (@ 0x00000014) stream x number of data register                           */
    
    struct {
      __IOM uint32_t NDT        : 16;           /*!< [15..0] Number of data items to transfer                                  */
            uint32_t            : 16;
    } S0NDTR_b;
  } ;
  
  union {
    __IOM uint32_t S0PAR;                       /*!< (@ 0x00000018) stream x peripheral address register                       */
    
    struct {
      __IOM uint32_t PA         : 32;           /*!< [31..0] Peripheral address                                                */
    } S0PAR_b;
  } ;
  
  union {
    __IOM uint32_t S0M0AR;                      /*!< (@ 0x0000001C) stream x memory 0 address register                         */
    
    struct {
      __IOM uint32_t M0A        : 32;           /*!< [31..0] Memory 0 address                                                  */
    } S0M0AR_b;
  } ;
  
  union {
    __IOM uint32_t S0M1AR;                      /*!< (@ 0x00000020) stream x memory 1 address register                         */
    
    struct {
      __IOM uint32_t M1A        : 32;           /*!< [31..0] Memory 1 address (used in case of Double buffer mode)             */
    } S0M1AR_b;
  } ;
  
  union {
    __IOM uint32_t S0FCR;                       /*!< (@ 0x00000024) stream x FIFO control register                             */
    
    struct {
      __IOM uint32_t FTH        : 2;            /*!< [1..0] FIFO threshold selection                                           */
      __IOM uint32_t DMDIS      : 1;            /*!< [2..2] Direct mode disable                                                */
      __IM  uint32_t FS         : 3;            /*!< [5..3] FIFO status                                                        */
            uint32_t            : 1;
      __IOM uint32_t FEIE       : 1;            /*!< [7..7] FIFO error interrupt enable                                        */
            uint32_t            : 24;
    } S0FCR_b;
  } ;
  
  union {
    __IOM uint32_t S1CR;                        /*!< (@ 0x00000028) stream x configuration register                            */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Stream enable / flag stream ready when read low                    */
      __IOM uint32_t DMEIE      : 1;            /*!< [1..1] Direct mode error interrupt enable                                 */
      __IOM uint32_t TEIE       : 1;            /*!< [2..2] Transfer error interrupt enable                                    */
      __IOM uint32_t HTIE       : 1;            /*!< [3..3] Half transfer interrupt enable                                     */
      __IOM uint32_t TCIE       : 1;            /*!< [4..4] Transfer complete interrupt enable                                 */
      __IOM uint32_t PFCTRL     : 1;            /*!< [5..5] Peripheral flow controller                                         */
      __IOM uint32_t DIR        : 2;            /*!< [7..6] Data transfer direction                                            */
      __IOM uint32_t CIRC       : 1;            /*!< [8..8] Circular mode                                                      */
      __IOM uint32_t PINC       : 1;            /*!< [9..9] Peripheral increment mode                                          */
      __IOM uint32_t MINC       : 1;            /*!< [10..10] Memory increment mode                                            */
      __IOM uint32_t PSIZE      : 2;            /*!< [12..11] Peripheral data size                                             */
      __IOM uint32_t MSIZE      : 2;            /*!< [14..13] Memory data size                                                 */
      __IOM uint32_t PINCOS     : 1;            /*!< [15..15] Peripheral increment offset size                                 */
      __IOM uint32_t PL         : 2;            /*!< [17..16] Priority level                                                   */
      __IOM uint32_t DBM        : 1;            /*!< [18..18] Double buffer mode                                               */
      __IOM uint32_t CT         : 1;            /*!< [19..19] Current target (only in double buffer mode)                      */
      __IOM uint32_t ACK        : 1;            /*!< [20..20] ACK                                                              */
      __IOM uint32_t PBURST     : 2;            /*!< [22..21] Peripheral burst transfer configuration                          */
      __IOM uint32_t MBURST     : 2;            /*!< [24..23] Memory burst transfer configuration                              */
      __IOM uint32_t CHSEL      : 4;            /*!< [28..25] Channel selection                                                */
            uint32_t            : 3;
    } S1CR_b;
  } ;
  
  union {
    __IOM uint32_t S1NDTR;                      /*!< (@ 0x0000002C) stream x number of data register                           */
    
    struct {
      __IOM uint32_t NDT        : 16;           /*!< [15..0] Number of data items to transfer                                  */
            uint32_t            : 16;
    } S1NDTR_b;
  } ;
  
  union {
    __IOM uint32_t S1PAR;                       /*!< (@ 0x00000030) stream x peripheral address register                       */
    
    struct {
      __IOM uint32_t PA         : 32;           /*!< [31..0] Peripheral address                                                */
    } S1PAR_b;
  } ;
  
  union {
    __IOM uint32_t S1M0AR;                      /*!< (@ 0x00000034) stream x memory 0 address register                         */
    
    struct {
      __IOM uint32_t M0A        : 32;           /*!< [31..0] Memory 0 address                                                  */
    } S1M0AR_b;
  } ;
  
  union {
    __IOM uint32_t S1M1AR;                      /*!< (@ 0x00000038) stream x memory 1 address register                         */
    
    struct {
      __IOM uint32_t M1A        : 32;           /*!< [31..0] Memory 1 address (used in case of Double buffer mode)             */
    } S1M1AR_b;
  } ;
  
  union {
    __IOM uint32_t S1FCR;                       /*!< (@ 0x0000003C) stream x FIFO control register                             */
    
    struct {
      __IOM uint32_t FTH        : 2;            /*!< [1..0] FIFO threshold selection                                           */
      __IOM uint32_t DMDIS      : 1;            /*!< [2..2] Direct mode disable                                                */
      __IM  uint32_t FS         : 3;            /*!< [5..3] FIFO status                                                        */
            uint32_t            : 1;
      __IOM uint32_t FEIE       : 1;            /*!< [7..7] FIFO error interrupt enable                                        */
            uint32_t            : 24;
    } S1FCR_b;
  } ;
  
  union {
    __IOM uint32_t S2CR;                        /*!< (@ 0x00000040) stream x configuration register                            */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Stream enable / flag stream ready when read low                    */
      __IOM uint32_t DMEIE      : 1;            /*!< [1..1] Direct mode error interrupt enable                                 */
      __IOM uint32_t TEIE       : 1;            /*!< [2..2] Transfer error interrupt enable                                    */
      __IOM uint32_t HTIE       : 1;            /*!< [3..3] Half transfer interrupt enable                                     */
      __IOM uint32_t TCIE       : 1;            /*!< [4..4] Transfer complete interrupt enable                                 */
      __IOM uint32_t PFCTRL     : 1;            /*!< [5..5] Peripheral flow controller                                         */
      __IOM uint32_t DIR        : 2;            /*!< [7..6] Data transfer direction                                            */
      __IOM uint32_t CIRC       : 1;            /*!< [8..8] Circular mode                                                      */
      __IOM uint32_t PINC       : 1;            /*!< [9..9] Peripheral increment mode                                          */
      __IOM uint32_t MINC       : 1;            /*!< [10..10] Memory increment mode                                            */
      __IOM uint32_t PSIZE      : 2;            /*!< [12..11] Peripheral data size                                             */
      __IOM uint32_t MSIZE      : 2;            /*!< [14..13] Memory data size                                                 */
      __IOM uint32_t PINCOS     : 1;            /*!< [15..15] Peripheral increment offset size                                 */
      __IOM uint32_t PL         : 2;            /*!< [17..16] Priority level                                                   */
      __IOM uint32_t DBM        : 1;            /*!< [18..18] Double buffer mode                                               */
      __IOM uint32_t CT         : 1;            /*!< [19..19] Current target (only in double buffer mode)                      */
      __IOM uint32_t ACK        : 1;            /*!< [20..20] ACK                                                              */
      __IOM uint32_t PBURST     : 2;            /*!< [22..21] Peripheral burst transfer configuration                          */
      __IOM uint32_t MBURST     : 2;            /*!< [24..23] Memory burst transfer configuration                              */
      __IOM uint32_t CHSEL      : 4;            /*!< [28..25] Channel selection                                                */
            uint32_t            : 3;
    } S2CR_b;
  } ;
  
  union {
    __IOM uint32_t S2NDTR;                      /*!< (@ 0x00000044) stream x number of data register                           */
    
    struct {
      __IOM uint32_t NDT        : 16;           /*!< [15..0] Number of data items to transfer                                  */
            uint32_t            : 16;
    } S2NDTR_b;
  } ;
  
  union {
    __IOM uint32_t S2PAR;                       /*!< (@ 0x00000048) stream x peripheral address register                       */
    
    struct {
      __IOM uint32_t PA         : 32;           /*!< [31..0] Peripheral address                                                */
    } S2PAR_b;
  } ;
  
  union {
    __IOM uint32_t S2M0AR;                      /*!< (@ 0x0000004C) stream x memory 0 address register                         */
    
    struct {
      __IOM uint32_t M0A        : 32;           /*!< [31..0] Memory 0 address                                                  */
    } S2M0AR_b;
  } ;
  
  union {
    __IOM uint32_t S2M1AR;                      /*!< (@ 0x00000050) stream x memory 1 address register                         */
    
    struct {
      __IOM uint32_t M1A        : 32;           /*!< [31..0] Memory 1 address (used in case of Double buffer mode)             */
    } S2M1AR_b;
  } ;
  
  union {
    __IOM uint32_t S2FCR;                       /*!< (@ 0x00000054) stream x FIFO control register                             */
    
    struct {
      __IOM uint32_t FTH        : 2;            /*!< [1..0] FIFO threshold selection                                           */
      __IOM uint32_t DMDIS      : 1;            /*!< [2..2] Direct mode disable                                                */
      __IM  uint32_t FS         : 3;            /*!< [5..3] FIFO status                                                        */
            uint32_t            : 1;
      __IOM uint32_t FEIE       : 1;            /*!< [7..7] FIFO error interrupt enable                                        */
            uint32_t            : 24;
    } S2FCR_b;
  } ;
  
  union {
    __IOM uint32_t S3CR;                        /*!< (@ 0x00000058) stream x configuration register                            */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Stream enable / flag stream ready when read low                    */
      __IOM uint32_t DMEIE      : 1;            /*!< [1..1] Direct mode error interrupt enable                                 */
      __IOM uint32_t TEIE       : 1;            /*!< [2..2] Transfer error interrupt enable                                    */
      __IOM uint32_t HTIE       : 1;            /*!< [3..3] Half transfer interrupt enable                                     */
      __IOM uint32_t TCIE       : 1;            /*!< [4..4] Transfer complete interrupt enable                                 */
      __IOM uint32_t PFCTRL     : 1;            /*!< [5..5] Peripheral flow controller                                         */
      __IOM uint32_t DIR        : 2;            /*!< [7..6] Data transfer direction                                            */
      __IOM uint32_t CIRC       : 1;            /*!< [8..8] Circular mode                                                      */
      __IOM uint32_t PINC       : 1;            /*!< [9..9] Peripheral increment mode                                          */
      __IOM uint32_t MINC       : 1;            /*!< [10..10] Memory increment mode                                            */
      __IOM uint32_t PSIZE      : 2;            /*!< [12..11] Peripheral data size                                             */
      __IOM uint32_t MSIZE      : 2;            /*!< [14..13] Memory data size                                                 */
      __IOM uint32_t PINCOS     : 1;            /*!< [15..15] Peripheral increment offset size                                 */
      __IOM uint32_t PL         : 2;            /*!< [17..16] Priority level                                                   */
      __IOM uint32_t DBM        : 1;            /*!< [18..18] Double buffer mode                                               */
      __IOM uint32_t CT         : 1;            /*!< [19..19] Current target (only in double buffer mode)                      */
      __IOM uint32_t ACK        : 1;            /*!< [20..20] ACK                                                              */
      __IOM uint32_t PBURST     : 2;            /*!< [22..21] Peripheral burst transfer configuration                          */
      __IOM uint32_t MBURST     : 2;            /*!< [24..23] Memory burst transfer configuration                              */
      __IOM uint32_t CHSEL      : 4;            /*!< [28..25] Channel selection                                                */
            uint32_t            : 3;
    } S3CR_b;
  } ;
  
  union {
    __IOM uint32_t S3NDTR;                      /*!< (@ 0x0000005C) stream x number of data register                           */
    
    struct {
      __IOM uint32_t NDT        : 16;           /*!< [15..0] Number of data items to transfer                                  */
            uint32_t            : 16;
    } S3NDTR_b;
  } ;
  
  union {
    __IOM uint32_t S3PAR;                       /*!< (@ 0x00000060) stream x peripheral address register                       */
    
    struct {
      __IOM uint32_t PA         : 32;           /*!< [31..0] Peripheral address                                                */
    } S3PAR_b;
  } ;
  
  union {
    __IOM uint32_t S3M0AR;                      /*!< (@ 0x00000064) stream x memory 0 address register                         */
    
    struct {
      __IOM uint32_t M0A        : 32;           /*!< [31..0] Memory 0 address                                                  */
    } S3M0AR_b;
  } ;
  
  union {
    __IOM uint32_t S3M1AR;                      /*!< (@ 0x00000068) stream x memory 1 address register                         */
    
    struct {
      __IOM uint32_t M1A        : 32;           /*!< [31..0] Memory 1 address (used in case of Double buffer mode)             */
    } S3M1AR_b;
  } ;
  
  union {
    __IOM uint32_t S3FCR;                       /*!< (@ 0x0000006C) stream x FIFO control register                             */
    
    struct {
      __IOM uint32_t FTH        : 2;            /*!< [1..0] FIFO threshold selection                                           */
      __IOM uint32_t DMDIS      : 1;            /*!< [2..2] Direct mode disable                                                */
      __IM  uint32_t FS         : 3;            /*!< [5..3] FIFO status                                                        */
            uint32_t            : 1;
      __IOM uint32_t FEIE       : 1;            /*!< [7..7] FIFO error interrupt enable                                        */
            uint32_t            : 24;
    } S3FCR_b;
  } ;
  
  union {
    __IOM uint32_t S4CR;                        /*!< (@ 0x00000070) stream x configuration register                            */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Stream enable / flag stream ready when read low                    */
      __IOM uint32_t DMEIE      : 1;            /*!< [1..1] Direct mode error interrupt enable                                 */
      __IOM uint32_t TEIE       : 1;            /*!< [2..2] Transfer error interrupt enable                                    */
      __IOM uint32_t HTIE       : 1;            /*!< [3..3] Half transfer interrupt enable                                     */
      __IOM uint32_t TCIE       : 1;            /*!< [4..4] Transfer complete interrupt enable                                 */
      __IOM uint32_t PFCTRL     : 1;            /*!< [5..5] Peripheral flow controller                                         */
      __IOM uint32_t DIR        : 2;            /*!< [7..6] Data transfer direction                                            */
      __IOM uint32_t CIRC       : 1;            /*!< [8..8] Circular mode                                                      */
      __IOM uint32_t PINC       : 1;            /*!< [9..9] Peripheral increment mode                                          */
      __IOM uint32_t MINC       : 1;            /*!< [10..10] Memory increment mode                                            */
      __IOM uint32_t PSIZE      : 2;            /*!< [12..11] Peripheral data size                                             */
      __IOM uint32_t MSIZE      : 2;            /*!< [14..13] Memory data size                                                 */
      __IOM uint32_t PINCOS     : 1;            /*!< [15..15] Peripheral increment offset size                                 */
      __IOM uint32_t PL         : 2;            /*!< [17..16] Priority level                                                   */
      __IOM uint32_t DBM        : 1;            /*!< [18..18] Double buffer mode                                               */
      __IOM uint32_t CT         : 1;            /*!< [19..19] Current target (only in double buffer mode)                      */
      __IOM uint32_t ACK        : 1;            /*!< [20..20] ACK                                                              */
      __IOM uint32_t PBURST     : 2;            /*!< [22..21] Peripheral burst transfer configuration                          */
      __IOM uint32_t MBURST     : 2;            /*!< [24..23] Memory burst transfer configuration                              */
      __IOM uint32_t CHSEL      : 3;            /*!< [27..25] Channel selection                                                */
            uint32_t            : 4;
    } S4CR_b;
  } ;
  
  union {
    __IOM uint32_t S4NDTR;                      /*!< (@ 0x00000074) stream x number of data register                           */
    
    struct {
      __IOM uint32_t NDT        : 16;           /*!< [15..0] Number of data items to transfer                                  */
            uint32_t            : 16;
    } S4NDTR_b;
  } ;
  
  union {
    __IOM uint32_t S4PAR;                       /*!< (@ 0x00000078) stream x peripheral address register                       */
    
    struct {
      __IOM uint32_t PA         : 32;           /*!< [31..0] Peripheral address                                                */
    } S4PAR_b;
  } ;
  
  union {
    __IOM uint32_t S4M0AR;                      /*!< (@ 0x0000007C) stream x memory 0 address register                         */
    
    struct {
      __IOM uint32_t M0A        : 32;           /*!< [31..0] Memory 0 address                                                  */
    } S4M0AR_b;
  } ;
  
  union {
    __IOM uint32_t S4M1AR;                      /*!< (@ 0x00000080) stream x memory 1 address register                         */
    
    struct {
      __IOM uint32_t M1A        : 32;           /*!< [31..0] Memory 1 address (used in case of Double buffer mode)             */
    } S4M1AR_b;
  } ;
  
  union {
    __IOM uint32_t S4FCR;                       /*!< (@ 0x00000084) stream x FIFO control register                             */
    
    struct {
      __IOM uint32_t FTH        : 2;            /*!< [1..0] FIFO threshold selection                                           */
      __IOM uint32_t DMDIS      : 1;            /*!< [2..2] Direct mode disable                                                */
      __IM  uint32_t FS         : 3;            /*!< [5..3] FIFO status                                                        */
            uint32_t            : 1;
      __IOM uint32_t FEIE       : 1;            /*!< [7..7] FIFO error interrupt enable                                        */
            uint32_t            : 24;
    } S4FCR_b;
  } ;
  
  union {
    __IOM uint32_t S5CR;                        /*!< (@ 0x00000088) stream x configuration register                            */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Stream enable / flag stream ready when read low                    */
      __IOM uint32_t DMEIE      : 1;            /*!< [1..1] Direct mode error interrupt enable                                 */
      __IOM uint32_t TEIE       : 1;            /*!< [2..2] Transfer error interrupt enable                                    */
      __IOM uint32_t HTIE       : 1;            /*!< [3..3] Half transfer interrupt enable                                     */
      __IOM uint32_t TCIE       : 1;            /*!< [4..4] Transfer complete interrupt enable                                 */
      __IOM uint32_t PFCTRL     : 1;            /*!< [5..5] Peripheral flow controller                                         */
      __IOM uint32_t DIR        : 2;            /*!< [7..6] Data transfer direction                                            */
      __IOM uint32_t CIRC       : 1;            /*!< [8..8] Circular mode                                                      */
      __IOM uint32_t PINC       : 1;            /*!< [9..9] Peripheral increment mode                                          */
      __IOM uint32_t MINC       : 1;            /*!< [10..10] Memory increment mode                                            */
      __IOM uint32_t PSIZE      : 2;            /*!< [12..11] Peripheral data size                                             */
      __IOM uint32_t MSIZE      : 2;            /*!< [14..13] Memory data size                                                 */
      __IOM uint32_t PINCOS     : 1;            /*!< [15..15] Peripheral increment offset size                                 */
      __IOM uint32_t PL         : 2;            /*!< [17..16] Priority level                                                   */
      __IOM uint32_t DBM        : 1;            /*!< [18..18] Double buffer mode                                               */
      __IOM uint32_t CT         : 1;            /*!< [19..19] Current target (only in double buffer mode)                      */
      __IOM uint32_t ACK        : 1;            /*!< [20..20] ACK                                                              */
      __IOM uint32_t PBURST     : 2;            /*!< [22..21] Peripheral burst transfer configuration                          */
      __IOM uint32_t MBURST     : 2;            /*!< [24..23] Memory burst transfer configuration                              */
      __IOM uint32_t CHSEL      : 4;            /*!< [28..25] Channel selection                                                */
            uint32_t            : 3;
    } S5CR_b;
  } ;
  
  union {
    __IOM uint32_t S5NDTR;                      /*!< (@ 0x0000008C) stream x number of data register                           */
    
    struct {
      __IOM uint32_t NDT        : 16;           /*!< [15..0] Number of data items to transfer                                  */
            uint32_t            : 16;
    } S5NDTR_b;
  } ;
  
  union {
    __IOM uint32_t S5PAR;                       /*!< (@ 0x00000090) stream x peripheral address register                       */
    
    struct {
      __IOM uint32_t PA         : 32;           /*!< [31..0] Peripheral address                                                */
    } S5PAR_b;
  } ;
  
  union {
    __IOM uint32_t S5M0AR;                      /*!< (@ 0x00000094) stream x memory 0 address register                         */
    
    struct {
      __IOM uint32_t M0A        : 32;           /*!< [31..0] Memory 0 address                                                  */
    } S5M0AR_b;
  } ;
  
  union {
    __IOM uint32_t S5M1AR;                      /*!< (@ 0x00000098) stream x memory 1 address register                         */
    
    struct {
      __IOM uint32_t M1A        : 32;           /*!< [31..0] Memory 1 address (used in case of Double buffer mode)             */
    } S5M1AR_b;
  } ;
  
  union {
    __IOM uint32_t S5FCR;                       /*!< (@ 0x0000009C) stream x FIFO control register                             */
    
    struct {
      __IOM uint32_t FTH        : 2;            /*!< [1..0] FIFO threshold selection                                           */
      __IOM uint32_t DMDIS      : 1;            /*!< [2..2] Direct mode disable                                                */
      __IM  uint32_t FS         : 3;            /*!< [5..3] FIFO status                                                        */
            uint32_t            : 1;
      __IOM uint32_t FEIE       : 1;            /*!< [7..7] FIFO error interrupt enable                                        */
            uint32_t            : 24;
    } S5FCR_b;
  } ;
  
  union {
    __IOM uint32_t S6CR;                        /*!< (@ 0x000000A0) stream x configuration register                            */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Stream enable / flag stream ready when read low                    */
      __IOM uint32_t DMEIE      : 1;            /*!< [1..1] Direct mode error interrupt enable                                 */
      __IOM uint32_t TEIE       : 1;            /*!< [2..2] Transfer error interrupt enable                                    */
      __IOM uint32_t HTIE       : 1;            /*!< [3..3] Half transfer interrupt enable                                     */
      __IOM uint32_t TCIE       : 1;            /*!< [4..4] Transfer complete interrupt enable                                 */
      __IOM uint32_t PFCTRL     : 1;            /*!< [5..5] Peripheral flow controller                                         */
      __IOM uint32_t DIR        : 2;            /*!< [7..6] Data transfer direction                                            */
      __IOM uint32_t CIRC       : 1;            /*!< [8..8] Circular mode                                                      */
      __IOM uint32_t PINC       : 1;            /*!< [9..9] Peripheral increment mode                                          */
      __IOM uint32_t MINC       : 1;            /*!< [10..10] Memory increment mode                                            */
      __IOM uint32_t PSIZE      : 2;            /*!< [12..11] Peripheral data size                                             */
      __IOM uint32_t MSIZE      : 2;            /*!< [14..13] Memory data size                                                 */
      __IOM uint32_t PINCOS     : 1;            /*!< [15..15] Peripheral increment offset size                                 */
      __IOM uint32_t PL         : 2;            /*!< [17..16] Priority level                                                   */
      __IOM uint32_t DBM        : 1;            /*!< [18..18] Double buffer mode                                               */
      __IOM uint32_t CT         : 1;            /*!< [19..19] Current target (only in double buffer mode)                      */
      __IOM uint32_t ACK        : 1;            /*!< [20..20] ACK                                                              */
      __IOM uint32_t PBURST     : 2;            /*!< [22..21] Peripheral burst transfer configuration                          */
      __IOM uint32_t MBURST     : 2;            /*!< [24..23] Memory burst transfer configuration                              */
      __IOM uint32_t CHSEL      : 4;            /*!< [28..25] Channel selection                                                */
            uint32_t            : 3;
    } S6CR_b;
  } ;
  
  union {
    __IOM uint32_t S6NDTR;                      /*!< (@ 0x000000A4) stream x number of data register                           */
    
    struct {
      __IOM uint32_t NDT        : 16;           /*!< [15..0] Number of data items to transfer                                  */
            uint32_t            : 16;
    } S6NDTR_b;
  } ;
  
  union {
    __IOM uint32_t S6PAR;                       /*!< (@ 0x000000A8) stream x peripheral address register                       */
    
    struct {
      __IOM uint32_t PA         : 32;           /*!< [31..0] Peripheral address                                                */
    } S6PAR_b;
  } ;
  
  union {
    __IOM uint32_t S6M0AR;                      /*!< (@ 0x000000AC) stream x memory 0 address register                         */
    
    struct {
      __IOM uint32_t M0A        : 32;           /*!< [31..0] Memory 0 address                                                  */
    } S6M0AR_b;
  } ;
  
  union {
    __IOM uint32_t S6M1AR;                      /*!< (@ 0x000000B0) stream x memory 1 address register                         */
    
    struct {
      __IOM uint32_t M1A        : 32;           /*!< [31..0] Memory 1 address (used in case of Double buffer mode)             */
    } S6M1AR_b;
  } ;
  
  union {
    __IOM uint32_t S6FCR;                       /*!< (@ 0x000000B4) stream x FIFO control register                             */
    
    struct {
      __IOM uint32_t FTH        : 2;            /*!< [1..0] FIFO threshold selection                                           */
      __IOM uint32_t DMDIS      : 1;            /*!< [2..2] Direct mode disable                                                */
      __IM  uint32_t FS         : 3;            /*!< [5..3] FIFO status                                                        */
            uint32_t            : 1;
      __IOM uint32_t FEIE       : 1;            /*!< [7..7] FIFO error interrupt enable                                        */
            uint32_t            : 24;
    } S6FCR_b;
  } ;
  
  union {
    __IOM uint32_t S7CR;                        /*!< (@ 0x000000B8) stream x configuration register                            */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Stream enable / flag stream ready when read low                    */
      __IOM uint32_t DMEIE      : 1;            /*!< [1..1] Direct mode error interrupt enable                                 */
      __IOM uint32_t TEIE       : 1;            /*!< [2..2] Transfer error interrupt enable                                    */
      __IOM uint32_t HTIE       : 1;            /*!< [3..3] Half transfer interrupt enable                                     */
      __IOM uint32_t TCIE       : 1;            /*!< [4..4] Transfer complete interrupt enable                                 */
      __IOM uint32_t PFCTRL     : 1;            /*!< [5..5] Peripheral flow controller                                         */
      __IOM uint32_t DIR        : 2;            /*!< [7..6] Data transfer direction                                            */
      __IOM uint32_t CIRC       : 1;            /*!< [8..8] Circular mode                                                      */
      __IOM uint32_t PINC       : 1;            /*!< [9..9] Peripheral increment mode                                          */
      __IOM uint32_t MINC       : 1;            /*!< [10..10] Memory increment mode                                            */
      __IOM uint32_t PSIZE      : 2;            /*!< [12..11] Peripheral data size                                             */
      __IOM uint32_t MSIZE      : 2;            /*!< [14..13] Memory data size                                                 */
      __IOM uint32_t PINCOS     : 1;            /*!< [15..15] Peripheral increment offset size                                 */
      __IOM uint32_t PL         : 2;            /*!< [17..16] Priority level                                                   */
      __IOM uint32_t DBM        : 1;            /*!< [18..18] Double buffer mode                                               */
      __IOM uint32_t CT         : 1;            /*!< [19..19] Current target (only in double buffer mode)                      */
      __IOM uint32_t ACK        : 1;            /*!< [20..20] ACK                                                              */
      __IOM uint32_t PBURST     : 2;            /*!< [22..21] Peripheral burst transfer configuration                          */
      __IOM uint32_t MBURST     : 2;            /*!< [24..23] Memory burst transfer configuration                              */
      __IOM uint32_t CHSEL      : 4;            /*!< [28..25] Channel selection                                                */
            uint32_t            : 3;
    } S7CR_b;
  } ;
  
  union {
    __IOM uint32_t S7NDTR;                      /*!< (@ 0x000000BC) stream x number of data register                           */
    
    struct {
      __IOM uint32_t NDT        : 16;           /*!< [15..0] Number of data items to transfer                                  */
            uint32_t            : 16;
    } S7NDTR_b;
  } ;
  
  union {
    __IOM uint32_t S7PAR;                       /*!< (@ 0x000000C0) stream x peripheral address register                       */
    
    struct {
      __IOM uint32_t PA         : 32;           /*!< [31..0] Peripheral address                                                */
    } S7PAR_b;
  } ;
  
  union {
    __IOM uint32_t S7M0AR;                      /*!< (@ 0x000000C4) stream x memory 0 address register                         */
    
    struct {
      __IOM uint32_t M0A        : 32;           /*!< [31..0] Memory 0 address                                                  */
    } S7M0AR_b;
  } ;
  
  union {
    __IOM uint32_t S7M1AR;                      /*!< (@ 0x000000C8) stream x memory 1 address register                         */
    
    struct {
      __IOM uint32_t M1A        : 32;           /*!< [31..0] Memory 1 address (used in case of Double buffer mode)             */
    } S7M1AR_b;
  } ;
  
  union {
    __IOM uint32_t S7FCR;                       /*!< (@ 0x000000CC) stream x FIFO control register                             */
    
    struct {
      __IOM uint32_t FTH        : 2;            /*!< [1..0] FIFO threshold selection                                           */
      __IOM uint32_t DMDIS      : 1;            /*!< [2..2] Direct mode disable                                                */
      __IM  uint32_t FS         : 3;            /*!< [5..3] FIFO status                                                        */
            uint32_t            : 1;
      __IOM uint32_t FEIE       : 1;            /*!< [7..7] FIFO error interrupt enable                                        */
            uint32_t            : 24;
    } S7FCR_b;
  } ;
} DMA2_Type;                                    /*!< Size = 208 (0xd0)                                                         */



/* =========================================================================================================================== */
/* ================                                           DMA2                                            ================ */
/* =========================================================================================================================== */

/* =========================================================  LISR  ========================================================== */
#define DMA2_LISR_TCIF3_Pos               (27UL)                    /*!< TCIF3 (Bit 27)                                        */
#define DMA2_LISR_TCIF3_Msk               (0x8000000UL)             /*!< TCIF3 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_HTIF3_Pos               (26UL)                    /*!< HTIF3 (Bit 26)                                        */
#define DMA2_LISR_HTIF3_Msk               (0x4000000UL)             /*!< HTIF3 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_TEIF3_Pos               (25UL)                    /*!< TEIF3 (Bit 25)                                        */
#define DMA2_LISR_TEIF3_Msk               (0x2000000UL)             /*!< TEIF3 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_DMEIF3_Pos              (24UL)                    /*!< DMEIF3 (Bit 24)                                       */
#define DMA2_LISR_DMEIF3_Msk              (0x1000000UL)             /*!< DMEIF3 (Bitfield-Mask: 0x01)                          */
#define DMA2_LISR_FEIF3_Pos               (22UL)                    /*!< FEIF3 (Bit 22)                                        */
#define DMA2_LISR_FEIF3_Msk               (0x400000UL)              /*!< FEIF3 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_TCIF2_Pos               (21UL)                    /*!< TCIF2 (Bit 21)                                        */
#define DMA2_LISR_TCIF2_Msk               (0x200000UL)              /*!< TCIF2 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_HTIF2_Pos               (20UL)                    /*!< HTIF2 (Bit 20)                                        */
#define DMA2_LISR_HTIF2_Msk               (0x100000UL)              /*!< HTIF2 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_TEIF2_Pos               (19UL)                    /*!< TEIF2 (Bit 19)                                        */
#define DMA2_LISR_TEIF2_Msk               (0x80000UL)               /*!< TEIF2 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_DMEIF2_Pos              (18UL)                    /*!< DMEIF2 (Bit 18)                                       */
#define DMA2_LISR_DMEIF2_Msk              (0x40000UL)               /*!< DMEIF2 (Bitfield-Mask: 0x01)                          */
#define DMA2_LISR_FEIF2_Pos               (16UL)                    /*!< FEIF2 (Bit 16)                                        */
#define DMA2_LISR_FEIF2_Msk               (0x10000UL)               /*!< FEIF2 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_TCIF1_Pos               (11UL)                    /*!< TCIF1 (Bit 11)                                        */
#define DMA2_LISR_TCIF1_Msk               (0x800UL)                 /*!< TCIF1 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_HTIF1_Pos               (10UL)                    /*!< HTIF1 (Bit 10)                                        */
#define DMA2_LISR_HTIF1_Msk               (0x400UL)                 /*!< HTIF1 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_TEIF1_Pos               (9UL)                     /*!< TEIF1 (Bit 9)                                         */
#define DMA2_LISR_TEIF1_Msk               (0x200UL)                 /*!< TEIF1 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_DMEIF1_Pos              (8UL)                     /*!< DMEIF1 (Bit 8)                                        */
#define DMA2_LISR_DMEIF1_Msk              (0x100UL)                 /*!< DMEIF1 (Bitfield-Mask: 0x01)                          */
#define DMA2_LISR_FEIF1_Pos               (6UL)                     /*!< FEIF1 (Bit 6)                                         */
#define DMA2_LISR_FEIF1_Msk               (0x40UL)                  /*!< FEIF1 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_TCIF0_Pos               (5UL)                     /*!< TCIF0 (Bit 5)                                         */
#define DMA2_LISR_TCIF0_Msk               (0x20UL)                  /*!< TCIF0 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_HTIF0_Pos               (4UL)                     /*!< HTIF0 (Bit 4)                                         */
#define DMA2_LISR_HTIF0_Msk               (0x10UL)                  /*!< HTIF0 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_TEIF0_Pos               (3UL)                     /*!< TEIF0 (Bit 3)                                         */
#define DMA2_LISR_TEIF0_Msk               (0x8UL)                   /*!< TEIF0 (Bitfield-Mask: 0x01)                           */
#define DMA2_LISR_DMEIF0_Pos              (2UL)                     /*!< DMEIF0 (Bit 2)                                        */
#define DMA2_LISR_DMEIF0_Msk              (0x4UL)                   /*!< DMEIF0 (Bitfield-Mask: 0x01)                          */
#define DMA2_LISR_FEIF0_Pos               (0UL)                     /*!< FEIF0 (Bit 0)                                         */
#define DMA2_LISR_FEIF0_Msk               (0x1UL)                   /*!< FEIF0 (Bitfield-Mask: 0x01)                           */
/* =========================================================  HISR  ========================================================== */
#define DMA2_HISR_TCIF7_Pos               (27UL)                    /*!< TCIF7 (Bit 27)                                        */
#define DMA2_HISR_TCIF7_Msk               (0x8000000UL)             /*!< TCIF7 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_HTIF7_Pos               (26UL)                    /*!< HTIF7 (Bit 26)                                        */
#define DMA2_HISR_HTIF7_Msk               (0x4000000UL)             /*!< HTIF7 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_TEIF7_Pos               (25UL)                    /*!< TEIF7 (Bit 25)                                        */
#define DMA2_HISR_TEIF7_Msk               (0x2000000UL)             /*!< TEIF7 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_DMEIF7_Pos              (24UL)                    /*!< DMEIF7 (Bit 24)                                       */
#define DMA2_HISR_DMEIF7_Msk              (0x1000000UL)             /*!< DMEIF7 (Bitfield-Mask: 0x01)                          */
#define DMA2_HISR_FEIF7_Pos               (22UL)                    /*!< FEIF7 (Bit 22)                                        */
#define DMA2_HISR_FEIF7_Msk               (0x400000UL)              /*!< FEIF7 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_TCIF6_Pos               (21UL)                    /*!< TCIF6 (Bit 21)                                        */
#define DMA2_HISR_TCIF6_Msk               (0x200000UL)              /*!< TCIF6 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_HTIF6_Pos               (20UL)                    /*!< HTIF6 (Bit 20)                                        */
#define DMA2_HISR_HTIF6_Msk               (0x100000UL)              /*!< HTIF6 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_TEIF6_Pos               (19UL)                    /*!< TEIF6 (Bit 19)                                        */
#define DMA2_HISR_TEIF6_Msk               (0x80000UL)               /*!< TEIF6 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_DMEIF6_Pos              (18UL)                    /*!< DMEIF6 (Bit 18)                                       */
#define DMA2_HISR_DMEIF6_Msk              (0x40000UL)               /*!< DMEIF6 (Bitfield-Mask: 0x01)                          */
#define DMA2_HISR_FEIF6_Pos               (16UL)                    /*!< FEIF6 (Bit 16)                                        */
#define DMA2_HISR_FEIF6_Msk               (0x10000UL)               /*!< FEIF6 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_TCIF5_Pos               (11UL)                    /*!< TCIF5 (Bit 11)                                        */
#define DMA2_HISR_TCIF5_Msk               (0x800UL)                 /*!< TCIF5 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_HTIF5_Pos               (10UL)                    /*!< HTIF5 (Bit 10)                                        */
#define DMA2_HISR_HTIF5_Msk               (0x400UL)                 /*!< HTIF5 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_TEIF5_Pos               (9UL)                     /*!< TEIF5 (Bit 9)                                         */
#define DMA2_HISR_TEIF5_Msk               (0x200UL)                 /*!< TEIF5 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_DMEIF5_Pos              (8UL)                     /*!< DMEIF5 (Bit 8)                                        */
#define DMA2_HISR_DMEIF5_Msk              (0x100UL)                 /*!< DMEIF5 (Bitfield-Mask: 0x01)                          */
#define DMA2_HISR_FEIF5_Pos               (6UL)                     /*!< FEIF5 (Bit 6)                                         */
#define DMA2_HISR_FEIF5_Msk               (0x40UL)                  /*!< FEIF5 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_TCIF4_Pos               (5UL)                     /*!< TCIF4 (Bit 5)                                         */
#define DMA2_HISR_TCIF4_Msk               (0x20UL)                  /*!< TCIF4 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_HTIF4_Pos               (4UL)                     /*!< HTIF4 (Bit 4)                                         */
#define DMA2_HISR_HTIF4_Msk               (0x10UL)                  /*!< HTIF4 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_TEIF4_Pos               (3UL)                     /*!< TEIF4 (Bit 3)                                         */
#define DMA2_HISR_TEIF4_Msk               (0x8UL)                   /*!< TEIF4 (Bitfield-Mask: 0x01)                           */
#define DMA2_HISR_DMEIF4_Pos              (2UL)                     /*!< DMEIF4 (Bit 2)                                        */
#define DMA2_HISR_DMEIF4_Msk              (0x4UL)                   /*!< DMEIF4 (Bitfield-Mask: 0x01)                          */
#define DMA2_HISR_FEIF4_Pos               (0UL)                     /*!< FEIF4 (Bit 0)                                         */
#define DMA2_HISR_FEIF4_Msk               (0x1UL)                   /*!< FEIF4 (Bitfield-Mask: 0x01)                           */
/* =========================================================  LIFCR  ========================================================= */
#define DMA2_LIFCR_CTCIF3_Pos             (27UL)                    /*!< CTCIF3 (Bit 27)                                       */
#define DMA2_LIFCR_CTCIF3_Msk             (0x8000000UL)             /*!< CTCIF3 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CHTIF3_Pos             (26UL)                    /*!< CHTIF3 (Bit 26)                                       */
#define DMA2_LIFCR_CHTIF3_Msk             (0x4000000UL)             /*!< CHTIF3 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CTEIF3_Pos             (25UL)                    /*!< CTEIF3 (Bit 25)                                       */
#define DMA2_LIFCR_CTEIF3_Msk             (0x2000000UL)             /*!< CTEIF3 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CDMEIF3_Pos            (24UL)                    /*!< CDMEIF3 (Bit 24)                                      */
#define DMA2_LIFCR_CDMEIF3_Msk            (0x1000000UL)             /*!< CDMEIF3 (Bitfield-Mask: 0x01)                         */
#define DMA2_LIFCR_CFEIF3_Pos             (22UL)                    /*!< CFEIF3 (Bit 22)                                       */
#define DMA2_LIFCR_CFEIF3_Msk             (0x400000UL)              /*!< CFEIF3 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CTCIF2_Pos             (21UL)                    /*!< CTCIF2 (Bit 21)                                       */
#define DMA2_LIFCR_CTCIF2_Msk             (0x200000UL)              /*!< CTCIF2 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CHTIF2_Pos             (20UL)                    /*!< CHTIF2 (Bit 20)                                       */
#define DMA2_LIFCR_CHTIF2_Msk             (0x100000UL)              /*!< CHTIF2 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CTEIF2_Pos             (19UL)                    /*!< CTEIF2 (Bit 19)                                       */
#define DMA2_LIFCR_CTEIF2_Msk             (0x80000UL)               /*!< CTEIF2 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CDMEIF2_Pos            (18UL)                    /*!< CDMEIF2 (Bit 18)                                      */
#define DMA2_LIFCR_CDMEIF2_Msk            (0x40000UL)               /*!< CDMEIF2 (Bitfield-Mask: 0x01)                         */
#define DMA2_LIFCR_CFEIF2_Pos             (16UL)                    /*!< CFEIF2 (Bit 16)                                       */
#define DMA2_LIFCR_CFEIF2_Msk             (0x10000UL)               /*!< CFEIF2 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CTCIF1_Pos             (11UL)                    /*!< CTCIF1 (Bit 11)                                       */
#define DMA2_LIFCR_CTCIF1_Msk             (0x800UL)                 /*!< CTCIF1 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CHTIF1_Pos             (10UL)                    /*!< CHTIF1 (Bit 10)                                       */
#define DMA2_LIFCR_CHTIF1_Msk             (0x400UL)                 /*!< CHTIF1 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CTEIF1_Pos             (9UL)                     /*!< CTEIF1 (Bit 9)                                        */
#define DMA2_LIFCR_CTEIF1_Msk             (0x200UL)                 /*!< CTEIF1 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CDMEIF1_Pos            (8UL)                     /*!< CDMEIF1 (Bit 8)                                       */
#define DMA2_LIFCR_CDMEIF1_Msk            (0x100UL)                 /*!< CDMEIF1 (Bitfield-Mask: 0x01)                         */
#define DMA2_LIFCR_CFEIF1_Pos             (6UL)                     /*!< CFEIF1 (Bit 6)                                        */
#define DMA2_LIFCR_CFEIF1_Msk             (0x40UL)                  /*!< CFEIF1 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CTCIF0_Pos             (5UL)                     /*!< CTCIF0 (Bit 5)                                        */
#define DMA2_LIFCR_CTCIF0_Msk             (0x20UL)                  /*!< CTCIF0 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CHTIF0_Pos             (4UL)                     /*!< CHTIF0 (Bit 4)                                        */
#define DMA2_LIFCR_CHTIF0_Msk             (0x10UL)                  /*!< CHTIF0 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CTEIF0_Pos             (3UL)                     /*!< CTEIF0 (Bit 3)                                        */
#define DMA2_LIFCR_CTEIF0_Msk             (0x8UL)                   /*!< CTEIF0 (Bitfield-Mask: 0x01)                          */
#define DMA2_LIFCR_CDMEIF0_Pos            (2UL)                     /*!< CDMEIF0 (Bit 2)                                       */
#define DMA2_LIFCR_CDMEIF0_Msk            (0x4UL)                   /*!< CDMEIF0 (Bitfield-Mask: 0x01)                         */
#define DMA2_LIFCR_CFEIF0_Pos             (0UL)                     /*!< CFEIF0 (Bit 0)                                        */
#define DMA2_LIFCR_CFEIF0_Msk             (0x1UL)                   /*!< CFEIF0 (Bitfield-Mask: 0x01)                          */
/* =========================================================  HIFCR  ========================================================= */
#define DMA2_HIFCR_CTCIF7_Pos             (27UL)                    /*!< CTCIF7 (Bit 27)                                       */
#define DMA2_HIFCR_CTCIF7_Msk             (0x8000000UL)             /*!< CTCIF7 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CHTIF7_Pos             (26UL)                    /*!< CHTIF7 (Bit 26)                                       */
#define DMA2_HIFCR_CHTIF7_Msk             (0x4000000UL)             /*!< CHTIF7 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CTEIF7_Pos             (25UL)                    /*!< CTEIF7 (Bit 25)                                       */
#define DMA2_HIFCR_CTEIF7_Msk             (0x2000000UL)             /*!< CTEIF7 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CDMEIF7_Pos            (24UL)                    /*!< CDMEIF7 (Bit 24)                                      */
#define DMA2_HIFCR_CDMEIF7_Msk            (0x1000000UL)             /*!< CDMEIF7 (Bitfield-Mask: 0x01)                         */
#define DMA2_HIFCR_CFEIF7_Pos             (22UL)                    /*!< CFEIF7 (Bit 22)                                       */
#define DMA2_HIFCR_CFEIF7_Msk             (0x400000UL)              /*!< CFEIF7 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CTCIF6_Pos             (21UL)                    /*!< CTCIF6 (Bit 21)                                       */
#define DMA2_HIFCR_CTCIF6_Msk             (0x200000UL)              /*!< CTCIF6 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CHTIF6_Pos             (20UL)                    /*!< CHTIF6 (Bit 20)                                       */
#define DMA2_HIFCR_CHTIF6_Msk             (0x100000UL)              /*!< CHTIF6 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CTEIF6_Pos             (19UL)                    /*!< CTEIF6 (Bit 19)                                       */
#define DMA2_HIFCR_CTEIF6_Msk             (0x80000UL)               /*!< CTEIF6 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CDMEIF6_Pos            (18UL)                    /*!< CDMEIF6 (Bit 18)                                      */
#define DMA2_HIFCR_CDMEIF6_Msk            (0x40000UL)               /*!< CDMEIF6 (Bitfield-Mask: 0x01)                         */
#define DMA2_HIFCR_CFEIF6_Pos             (16UL)                    /*!< CFEIF6 (Bit 16)                                       */
#define DMA2_HIFCR_CFEIF6_Msk             (0x10000UL)               /*!< CFEIF6 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CTCIF5_Pos             (11UL)                    /*!< CTCIF5 (Bit 11)                                       */
#define DMA2_HIFCR_CTCIF5_Msk             (0x800UL)                 /*!< CTCIF5 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CHTIF5_Pos             (10UL)                    /*!< CHTIF5 (Bit 10)                                       */
#define DMA2_HIFCR_CHTIF5_Msk             (0x400UL)                 /*!< CHTIF5 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CTEIF5_Pos             (9UL)                     /*!< CTEIF5 (Bit 9)                                        */
#define DMA2_HIFCR_CTEIF5_Msk             (0x200UL)                 /*!< CTEIF5 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CDMEIF5_Pos            (8UL)                     /*!< CDMEIF5 (Bit 8)                                       */
#define DMA2_HIFCR_CDMEIF5_Msk            (0x100UL)                 /*!< CDMEIF5 (Bitfield-Mask: 0x01)                         */
#define DMA2_HIFCR_CFEIF5_Pos             (6UL)                     /*!< CFEIF5 (Bit 6)                                        */
#define DMA2_HIFCR_CFEIF5_Msk             (0x40UL)                  /*!< CFEIF5 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CTCIF4_Pos             (5UL)                     /*!< CTCIF4 (Bit 5)                                        */
#define DMA2_HIFCR_CTCIF4_Msk             (0x20UL)                  /*!< CTCIF4 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CHTIF4_Pos             (4UL)                     /*!< CHTIF4 (Bit 4)                                        */
#define DMA2_HIFCR_CHTIF4_Msk             (0x10UL)                  /*!< CHTIF4 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CTEIF4_Pos             (3UL)                     /*!< CTEIF4 (Bit 3)                                        */
#define DMA2_HIFCR_CTEIF4_Msk             (0x8UL)                   /*!< CTEIF4 (Bitfield-Mask: 0x01)                          */
#define DMA2_HIFCR_CDMEIF4_Pos            (2UL)                     /*!< CDMEIF4 (Bit 2)                                       */
#define DMA2_HIFCR_CDMEIF4_Msk            (0x4UL)                   /*!< CDMEIF4 (Bitfield-Mask: 0x01)                         */
#define DMA2_HIFCR_CFEIF4_Pos             (0UL)                     /*!< CFEIF4 (Bit 0)                                        */
#define DMA2_HIFCR_CFEIF4_Msk             (0x1UL)                   /*!< CFEIF4 (Bitfield-Mask: 0x01)                          */
/* =========================================================  S0CR  ========================================================== */
#define DMA2_S0CR_CHSEL_Pos               (25UL)                    /*!< CHSEL (Bit 25)                                        */
#define DMA2_S0CR_CHSEL_Msk               (0x1e000000UL)            /*!< CHSEL (Bitfield-Mask: 0x0f)                           */
#define DMA2_S0CR_MBURST_Pos              (23UL)                    /*!< MBURST (Bit 23)                                       */
#define DMA2_S0CR_MBURST_Msk              (0x1800000UL)             /*!< MBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S0CR_PBURST_Pos              (21UL)                    /*!< PBURST (Bit 21)                                       */
#define DMA2_S0CR_PBURST_Msk              (0x600000UL)              /*!< PBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S0CR_CT_Pos                  (19UL)                    /*!< CT (Bit 19)                                           */
#define DMA2_S0CR_CT_Msk                  (0x80000UL)               /*!< CT (Bitfield-Mask: 0x01)                              */
#define DMA2_S0CR_DBM_Pos                 (18UL)                    /*!< DBM (Bit 18)                                          */
#define DMA2_S0CR_DBM_Msk                 (0x40000UL)               /*!< DBM (Bitfield-Mask: 0x01)                             */
#define DMA2_S0CR_PL_Pos                  (16UL)                    /*!< PL (Bit 16)                                           */
#define DMA2_S0CR_PL_Msk                  (0x30000UL)               /*!< PL (Bitfield-Mask: 0x03)                              */
#define DMA2_S0CR_PINCOS_Pos              (15UL)                    /*!< PINCOS (Bit 15)                                       */
#define DMA2_S0CR_PINCOS_Msk              (0x8000UL)                /*!< PINCOS (Bitfield-Mask: 0x01)                          */
#define DMA2_S0CR_MSIZE_Pos               (13UL)                    /*!< MSIZE (Bit 13)                                        */
#define DMA2_S0CR_MSIZE_Msk               (0x6000UL)                /*!< MSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S0CR_PSIZE_Pos               (11UL)                    /*!< PSIZE (Bit 11)                                        */
#define DMA2_S0CR_PSIZE_Msk               (0x1800UL)                /*!< PSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S0CR_MINC_Pos                (10UL)                    /*!< MINC (Bit 10)                                         */
#define DMA2_S0CR_MINC_Msk                (0x400UL)                 /*!< MINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S0CR_PINC_Pos                (9UL)                     /*!< PINC (Bit 9)                                          */
#define DMA2_S0CR_PINC_Msk                (0x200UL)                 /*!< PINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S0CR_CIRC_Pos                (8UL)                     /*!< CIRC (Bit 8)                                          */
#define DMA2_S0CR_CIRC_Msk                (0x100UL)                 /*!< CIRC (Bitfield-Mask: 0x01)                            */
#define DMA2_S0CR_DIR_Pos                 (6UL)                     /*!< DIR (Bit 6)                                           */
#define DMA2_S0CR_DIR_Msk                 (0xc0UL)                  /*!< DIR (Bitfield-Mask: 0x03)                             */
#define DMA2_S0CR_PFCTRL_Pos              (5UL)                     /*!< PFCTRL (Bit 5)                                        */
#define DMA2_S0CR_PFCTRL_Msk              (0x20UL)                  /*!< PFCTRL (Bitfield-Mask: 0x01)                          */
#define DMA2_S0CR_TCIE_Pos                (4UL)                     /*!< TCIE (Bit 4)                                          */
#define DMA2_S0CR_TCIE_Msk                (0x10UL)                  /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S0CR_HTIE_Pos                (3UL)                     /*!< HTIE (Bit 3)                                          */
#define DMA2_S0CR_HTIE_Msk                (0x8UL)                   /*!< HTIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S0CR_TEIE_Pos                (2UL)                     /*!< TEIE (Bit 2)                                          */
#define DMA2_S0CR_TEIE_Msk                (0x4UL)                   /*!< TEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S0CR_DMEIE_Pos               (1UL)                     /*!< DMEIE (Bit 1)                                         */
#define DMA2_S0CR_DMEIE_Msk               (0x2UL)                   /*!< DMEIE (Bitfield-Mask: 0x01)                           */
#define DMA2_S0CR_EN_Pos                  (0UL)                     /*!< EN (Bit 0)                                            */
#define DMA2_S0CR_EN_Msk                  (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ========================================================  S0NDTR  ========================================================= */
#define DMA2_S0NDTR_NDT_Pos               (0UL)                     /*!< NDT (Bit 0)                                           */
#define DMA2_S0NDTR_NDT_Msk               (0xffffUL)                /*!< NDT (Bitfield-Mask: 0xffff)                           */
/* =========================================================  S0PAR  ========================================================= */
#define DMA2_S0PAR_PA_Pos                 (0UL)                     /*!< PA (Bit 0)                                            */
#define DMA2_S0PAR_PA_Msk                 (0xffffffffUL)            /*!< PA (Bitfield-Mask: 0xffffffff)                        */
/* ========================================================  S0M0AR  ========================================================= */
#define DMA2_S0M0AR_M0A_Pos               (0UL)                     /*!< M0A (Bit 0)                                           */
#define DMA2_S0M0AR_M0A_Msk               (0xffffffffUL)            /*!< M0A (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  S0M1AR  ========================================================= */
#define DMA2_S0M1AR_M1A_Pos               (0UL)                     /*!< M1A (Bit 0)                                           */
#define DMA2_S0M1AR_M1A_Msk               (0xffffffffUL)            /*!< M1A (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  S0FCR  ========================================================= */
#define DMA2_S0FCR_FEIE_Pos               (7UL)                     /*!< FEIE (Bit 7)                                          */
#define DMA2_S0FCR_FEIE_Msk               (0x80UL)                  /*!< FEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S0FCR_FS_Pos                 (3UL)                     /*!< FS (Bit 3)                                            */
#define DMA2_S0FCR_FS_Msk                 (0x38UL)                  /*!< FS (Bitfield-Mask: 0x07)                              */
#define DMA2_S0FCR_DMDIS_Pos              (2UL)                     /*!< DMDIS (Bit 2)                                         */
#define DMA2_S0FCR_DMDIS_Msk              (0x4UL)                   /*!< DMDIS (Bitfield-Mask: 0x01)                           */
#define DMA2_S0FCR_FTH_Pos                (0UL)                     /*!< FTH (Bit 0)                                           */
#define DMA2_S0FCR_FTH_Msk                (0x3UL)                   /*!< FTH (Bitfield-Mask: 0x03)                             */
/* =========================================================  S1CR  ========================================================== */
#define DMA2_S1CR_CHSEL_Pos               (25UL)                    /*!< CHSEL (Bit 25)                                        */
#define DMA2_S1CR_CHSEL_Msk               (0x1e000000UL)            /*!< CHSEL (Bitfield-Mask: 0x0f)                           */
#define DMA2_S1CR_MBURST_Pos              (23UL)                    /*!< MBURST (Bit 23)                                       */
#define DMA2_S1CR_MBURST_Msk              (0x1800000UL)             /*!< MBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S1CR_PBURST_Pos              (21UL)                    /*!< PBURST (Bit 21)                                       */
#define DMA2_S1CR_PBURST_Msk              (0x600000UL)              /*!< PBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S1CR_ACK_Pos                 (20UL)                    /*!< ACK (Bit 20)                                          */
#define DMA2_S1CR_ACK_Msk                 (0x100000UL)              /*!< ACK (Bitfield-Mask: 0x01)                             */
#define DMA2_S1CR_CT_Pos                  (19UL)                    /*!< CT (Bit 19)                                           */
#define DMA2_S1CR_CT_Msk                  (0x80000UL)               /*!< CT (Bitfield-Mask: 0x01)                              */
#define DMA2_S1CR_DBM_Pos                 (18UL)                    /*!< DBM (Bit 18)                                          */
#define DMA2_S1CR_DBM_Msk                 (0x40000UL)               /*!< DBM (Bitfield-Mask: 0x01)                             */
#define DMA2_S1CR_PL_Pos                  (16UL)                    /*!< PL (Bit 16)                                           */
#define DMA2_S1CR_PL_Msk                  (0x30000UL)               /*!< PL (Bitfield-Mask: 0x03)                              */
#define DMA2_S1CR_PINCOS_Pos              (15UL)                    /*!< PINCOS (Bit 15)                                       */
#define DMA2_S1CR_PINCOS_Msk              (0x8000UL)                /*!< PINCOS (Bitfield-Mask: 0x01)                          */
#define DMA2_S1CR_MSIZE_Pos               (13UL)                    /*!< MSIZE (Bit 13)                                        */
#define DMA2_S1CR_MSIZE_Msk               (0x6000UL)                /*!< MSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S1CR_PSIZE_Pos               (11UL)                    /*!< PSIZE (Bit 11)                                        */
#define DMA2_S1CR_PSIZE_Msk               (0x1800UL)                /*!< PSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S1CR_MINC_Pos                (10UL)                    /*!< MINC (Bit 10)                                         */
#define DMA2_S1CR_MINC_Msk                (0x400UL)                 /*!< MINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S1CR_PINC_Pos                (9UL)                     /*!< PINC (Bit 9)                                          */
#define DMA2_S1CR_PINC_Msk                (0x200UL)                 /*!< PINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S1CR_CIRC_Pos                (8UL)                     /*!< CIRC (Bit 8)                                          */
#define DMA2_S1CR_CIRC_Msk                (0x100UL)                 /*!< CIRC (Bitfield-Mask: 0x01)                            */
#define DMA2_S1CR_DIR_Pos                 (6UL)                     /*!< DIR (Bit 6)                                           */
#define DMA2_S1CR_DIR_Msk                 (0xc0UL)                  /*!< DIR (Bitfield-Mask: 0x03)                             */
#define DMA2_S1CR_PFCTRL_Pos              (5UL)                     /*!< PFCTRL (Bit 5)                                        */
#define DMA2_S1CR_PFCTRL_Msk              (0x20UL)                  /*!< PFCTRL (Bitfield-Mask: 0x01)                          */
#define DMA2_S1CR_TCIE_Pos                (4UL)                     /*!< TCIE (Bit 4)                                          */
#define DMA2_S1CR_TCIE_Msk                (0x10UL)                  /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S1CR_HTIE_Pos                (3UL)                     /*!< HTIE (Bit 3)                                          */
#define DMA2_S1CR_HTIE_Msk                (0x8UL)                   /*!< HTIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S1CR_TEIE_Pos                (2UL)                     /*!< TEIE (Bit 2)                                          */
#define DMA2_S1CR_TEIE_Msk                (0x4UL)                   /*!< TEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S1CR_DMEIE_Pos               (1UL)                     /*!< DMEIE (Bit 1)                                         */
#define DMA2_S1CR_DMEIE_Msk               (0x2UL)                   /*!< DMEIE (Bitfield-Mask: 0x01)                           */
#define DMA2_S1CR_EN_Pos                  (0UL)                     /*!< EN (Bit 0)                                            */
#define DMA2_S1CR_EN_Msk                  (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ========================================================  S1NDTR  ========================================================= */
#define DMA2_S1NDTR_NDT_Pos               (0UL)                     /*!< NDT (Bit 0)                                           */
#define DMA2_S1NDTR_NDT_Msk               (0xffffUL)                /*!< NDT (Bitfield-Mask: 0xffff)                           */
/* =========================================================  S1PAR  ========================================================= */
#define DMA2_S1PAR_PA_Pos                 (0UL)                     /*!< PA (Bit 0)                                            */
#define DMA2_S1PAR_PA_Msk                 (0xffffffffUL)            /*!< PA (Bitfield-Mask: 0xffffffff)                        */
/* ========================================================  S1M0AR  ========================================================= */
#define DMA2_S1M0AR_M0A_Pos               (0UL)                     /*!< M0A (Bit 0)                                           */
#define DMA2_S1M0AR_M0A_Msk               (0xffffffffUL)            /*!< M0A (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  S1M1AR  ========================================================= */
#define DMA2_S1M1AR_M1A_Pos               (0UL)                     /*!< M1A (Bit 0)                                           */
#define DMA2_S1M1AR_M1A_Msk               (0xffffffffUL)            /*!< M1A (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  S1FCR  ========================================================= */
#define DMA2_S1FCR_FEIE_Pos               (7UL)                     /*!< FEIE (Bit 7)                                          */
#define DMA2_S1FCR_FEIE_Msk               (0x80UL)                  /*!< FEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S1FCR_FS_Pos                 (3UL)                     /*!< FS (Bit 3)                                            */
#define DMA2_S1FCR_FS_Msk                 (0x38UL)                  /*!< FS (Bitfield-Mask: 0x07)                              */
#define DMA2_S1FCR_DMDIS_Pos              (2UL)                     /*!< DMDIS (Bit 2)                                         */
#define DMA2_S1FCR_DMDIS_Msk              (0x4UL)                   /*!< DMDIS (Bitfield-Mask: 0x01)                           */
#define DMA2_S1FCR_FTH_Pos                (0UL)                     /*!< FTH (Bit 0)                                           */
#define DMA2_S1FCR_FTH_Msk                (0x3UL)                   /*!< FTH (Bitfield-Mask: 0x03)                             */
/* =========================================================  S2CR  ========================================================== */
#define DMA2_S2CR_CHSEL_Pos               (25UL)                    /*!< CHSEL (Bit 25)                                        */
#define DMA2_S2CR_CHSEL_Msk               (0x1e000000UL)            /*!< CHSEL (Bitfield-Mask: 0x0f)                           */
#define DMA2_S2CR_MBURST_Pos              (23UL)                    /*!< MBURST (Bit 23)                                       */
#define DMA2_S2CR_MBURST_Msk              (0x1800000UL)             /*!< MBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S2CR_PBURST_Pos              (21UL)                    /*!< PBURST (Bit 21)                                       */
#define DMA2_S2CR_PBURST_Msk              (0x600000UL)              /*!< PBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S2CR_ACK_Pos                 (20UL)                    /*!< ACK (Bit 20)                                          */
#define DMA2_S2CR_ACK_Msk                 (0x100000UL)              /*!< ACK (Bitfield-Mask: 0x01)                             */
#define DMA2_S2CR_CT_Pos                  (19UL)                    /*!< CT (Bit 19)                                           */
#define DMA2_S2CR_CT_Msk                  (0x80000UL)               /*!< CT (Bitfield-Mask: 0x01)                              */
#define DMA2_S2CR_DBM_Pos                 (18UL)                    /*!< DBM (Bit 18)                                          */
#define DMA2_S2CR_DBM_Msk                 (0x40000UL)               /*!< DBM (Bitfield-Mask: 0x01)                             */
#define DMA2_S2CR_PL_Pos                  (16UL)                    /*!< PL (Bit 16)                                           */
#define DMA2_S2CR_PL_Msk                  (0x30000UL)               /*!< PL (Bitfield-Mask: 0x03)                              */
#define DMA2_S2CR_PINCOS_Pos              (15UL)                    /*!< PINCOS (Bit 15)                                       */
#define DMA2_S2CR_PINCOS_Msk              (0x8000UL)                /*!< PINCOS (Bitfield-Mask: 0x01)                          */
#define DMA2_S2CR_MSIZE_Pos               (13UL)                    /*!< MSIZE (Bit 13)                                        */
#define DMA2_S2CR_MSIZE_Msk               (0x6000UL)                /*!< MSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S2CR_PSIZE_Pos               (11UL)                    /*!< PSIZE (Bit 11)                                        */
#define DMA2_S2CR_PSIZE_Msk               (0x1800UL)                /*!< PSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S2CR_MINC_Pos                (10UL)                    /*!< MINC (Bit 10)                                         */
#define DMA2_S2CR_MINC_Msk                (0x400UL)                 /*!< MINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S2CR_PINC_Pos                (9UL)                     /*!< PINC (Bit 9)                                          */
#define DMA2_S2CR_PINC_Msk                (0x200UL)                 /*!< PINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S2CR_CIRC_Pos                (8UL)                     /*!< CIRC (Bit 8)                                          */
#define DMA2_S2CR_CIRC_Msk                (0x100UL)                 /*!< CIRC (Bitfield-Mask: 0x01)                            */
#define DMA2_S2CR_DIR_Pos                 (6UL)                     /*!< DIR (Bit 6)                                           */
#define DMA2_S2CR_DIR_Msk                 (0xc0UL)                  /*!< DIR (Bitfield-Mask: 0x03)                             */
#define DMA2_S2CR_PFCTRL_Pos              (5UL)                     /*!< PFCTRL (Bit 5)                                        */
#define DMA2_S2CR_PFCTRL_Msk              (0x20UL)                  /*!< PFCTRL (Bitfield-Mask: 0x01)                          */
#define DMA2_S2CR_TCIE_Pos                (4UL)                     /*!< TCIE (Bit 4)                                          */
#define DMA2_S2CR_TCIE_Msk                (0x10UL)                  /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S2CR_HTIE_Pos                (3UL)                     /*!< HTIE (Bit 3)                                          */
#define DMA2_S2CR_HTIE_Msk                (0x8UL)                   /*!< HTIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S2CR_TEIE_Pos                (2UL)                     /*!< TEIE (Bit 2)                                          */
#define DMA2_S2CR_TEIE_Msk                (0x4UL)                   /*!< TEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S2CR_DMEIE_Pos               (1UL)                     /*!< DMEIE (Bit 1)                                         */
#define DMA2_S2CR_DMEIE_Msk               (0x2UL)                   /*!< DMEIE (Bitfield-Mask: 0x01)                           */
#define DMA2_S2CR_EN_Pos                  (0UL)                     /*!< EN (Bit 0)                                            */
#define DMA2_S2CR_EN_Msk                  (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ========================================================  S2NDTR  ========================================================= */
#define DMA2_S2NDTR_NDT_Pos               (0UL)                     /*!< NDT (Bit 0)                                           */
#define DMA2_S2NDTR_NDT_Msk               (0xffffUL)                /*!< NDT (Bitfield-Mask: 0xffff)                           */
/* =========================================================  S2PAR  ========================================================= */
#define DMA2_S2PAR_PA_Pos                 (0UL)                     /*!< PA (Bit 0)                                            */
#define DMA2_S2PAR_PA_Msk                 (0xffffffffUL)            /*!< PA (Bitfield-Mask: 0xffffffff)                        */
/* ========================================================  S2M0AR  ========================================================= */
#define DMA2_S2M0AR_M0A_Pos               (0UL)                     /*!< M0A (Bit 0)                                           */
#define DMA2_S2M0AR_M0A_Msk               (0xffffffffUL)            /*!< M0A (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  S2M1AR  ========================================================= */
#define DMA2_S2M1AR_M1A_Pos               (0UL)                     /*!< M1A (Bit 0)                                           */
#define DMA2_S2M1AR_M1A_Msk               (0xffffffffUL)            /*!< M1A (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  S2FCR  ========================================================= */
#define DMA2_S2FCR_FEIE_Pos               (7UL)                     /*!< FEIE (Bit 7)                                          */
#define DMA2_S2FCR_FEIE_Msk               (0x80UL)                  /*!< FEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S2FCR_FS_Pos                 (3UL)                     /*!< FS (Bit 3)                                            */
#define DMA2_S2FCR_FS_Msk                 (0x38UL)                  /*!< FS (Bitfield-Mask: 0x07)                              */
#define DMA2_S2FCR_DMDIS_Pos              (2UL)                     /*!< DMDIS (Bit 2)                                         */
#define DMA2_S2FCR_DMDIS_Msk              (0x4UL)                   /*!< DMDIS (Bitfield-Mask: 0x01)                           */
#define DMA2_S2FCR_FTH_Pos                (0UL)                     /*!< FTH (Bit 0)                                           */
#define DMA2_S2FCR_FTH_Msk                (0x3UL)                   /*!< FTH (Bitfield-Mask: 0x03)                             */
/* =========================================================  S3CR  ========================================================== */
#define DMA2_S3CR_CHSEL_Pos               (25UL)                    /*!< CHSEL (Bit 25)                                        */
#define DMA2_S3CR_CHSEL_Msk               (0x1e000000UL)            /*!< CHSEL (Bitfield-Mask: 0x0f)                           */
#define DMA2_S3CR_MBURST_Pos              (23UL)                    /*!< MBURST (Bit 23)                                       */
#define DMA2_S3CR_MBURST_Msk              (0x1800000UL)             /*!< MBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S3CR_PBURST_Pos              (21UL)                    /*!< PBURST (Bit 21)                                       */
#define DMA2_S3CR_PBURST_Msk              (0x600000UL)              /*!< PBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S3CR_ACK_Pos                 (20UL)                    /*!< ACK (Bit 20)                                          */
#define DMA2_S3CR_ACK_Msk                 (0x100000UL)              /*!< ACK (Bitfield-Mask: 0x01)                             */
#define DMA2_S3CR_CT_Pos                  (19UL)                    /*!< CT (Bit 19)                                           */
#define DMA2_S3CR_CT_Msk                  (0x80000UL)               /*!< CT (Bitfield-Mask: 0x01)                              */
#define DMA2_S3CR_DBM_Pos                 (18UL)                    /*!< DBM (Bit 18)                                          */
#define DMA2_S3CR_DBM_Msk                 (0x40000UL)               /*!< DBM (Bitfield-Mask: 0x01)                             */
#define DMA2_S3CR_PL_Pos                  (16UL)                    /*!< PL (Bit 16)                                           */
#define DMA2_S3CR_PL_Msk                  (0x30000UL)               /*!< PL (Bitfield-Mask: 0x03)                              */
#define DMA2_S3CR_PINCOS_Pos              (15UL)                    /*!< PINCOS (Bit 15)                                       */
#define DMA2_S3CR_PINCOS_Msk              (0x8000UL)                /*!< PINCOS (Bitfield-Mask: 0x01)                          */
#define DMA2_S3CR_MSIZE_Pos               (13UL)                    /*!< MSIZE (Bit 13)                                        */
#define DMA2_S3CR_MSIZE_Msk               (0x6000UL)                /*!< MSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S3CR_PSIZE_Pos               (11UL)                    /*!< PSIZE (Bit 11)                                        */
#define DMA2_S3CR_PSIZE_Msk               (0x1800UL)                /*!< PSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S3CR_MINC_Pos                (10UL)                    /*!< MINC (Bit 10)                                         */
#define DMA2_S3CR_MINC_Msk                (0x400UL)                 /*!< MINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S3CR_PINC_Pos                (9UL)                     /*!< PINC (Bit 9)                                          */
#define DMA2_S3CR_PINC_Msk                (0x200UL)                 /*!< PINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S3CR_CIRC_Pos                (8UL)                     /*!< CIRC (Bit 8)                                          */
#define DMA2_S3CR_CIRC_Msk                (0x100UL)                 /*!< CIRC (Bitfield-Mask: 0x01)                            */
#define DMA2_S3CR_DIR_Pos                 (6UL)                     /*!< DIR (Bit 6)                                           */
#define DMA2_S3CR_DIR_Msk                 (0xc0UL)                  /*!< DIR (Bitfield-Mask: 0x03)                             */
#define DMA2_S3CR_PFCTRL_Pos              (5UL)                     /*!< PFCTRL (Bit 5)                                        */
#define DMA2_S3CR_PFCTRL_Msk              (0x20UL)                  /*!< PFCTRL (Bitfield-Mask: 0x01)                          */
#define DMA2_S3CR_TCIE_Pos                (4UL)                     /*!< TCIE (Bit 4)                                          */
#define DMA2_S3CR_TCIE_Msk                (0x10UL)                  /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S3CR_HTIE_Pos                (3UL)                     /*!< HTIE (Bit 3)                                          */
#define DMA2_S3CR_HTIE_Msk                (0x8UL)                   /*!< HTIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S3CR_TEIE_Pos                (2UL)                     /*!< TEIE (Bit 2)                                          */
#define DMA2_S3CR_TEIE_Msk                (0x4UL)                   /*!< TEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S3CR_DMEIE_Pos               (1UL)                     /*!< DMEIE (Bit 1)                                         */
#define DMA2_S3CR_DMEIE_Msk               (0x2UL)                   /*!< DMEIE (Bitfield-Mask: 0x01)                           */
#define DMA2_S3CR_EN_Pos                  (0UL)                     /*!< EN (Bit 0)                                            */
#define DMA2_S3CR_EN_Msk                  (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ========================================================  S3NDTR  ========================================================= */
#define DMA2_S3NDTR_NDT_Pos               (0UL)                     /*!< NDT (Bit 0)                                           */
#define DMA2_S3NDTR_NDT_Msk               (0xffffUL)                /*!< NDT (Bitfield-Mask: 0xffff)                           */
/* =========================================================  S3PAR  ========================================================= */
#define DMA2_S3PAR_PA_Pos                 (0UL)                     /*!< PA (Bit 0)                                            */
#define DMA2_S3PAR_PA_Msk                 (0xffffffffUL)            /*!< PA (Bitfield-Mask: 0xffffffff)                        */
/* ========================================================  S3M0AR  ========================================================= */
#define DMA2_S3M0AR_M0A_Pos               (0UL)                     /*!< M0A (Bit 0)                                           */
#define DMA2_S3M0AR_M0A_Msk               (0xffffffffUL)            /*!< M0A (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  S3M1AR  ========================================================= */
#define DMA2_S3M1AR_M1A_Pos               (0UL)                     /*!< M1A (Bit 0)                                           */
#define DMA2_S3M1AR_M1A_Msk               (0xffffffffUL)            /*!< M1A (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  S3FCR  ========================================================= */
#define DMA2_S3FCR_FEIE_Pos               (7UL)                     /*!< FEIE (Bit 7)                                          */
#define DMA2_S3FCR_FEIE_Msk               (0x80UL)                  /*!< FEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S3FCR_FS_Pos                 (3UL)                     /*!< FS (Bit 3)                                            */
#define DMA2_S3FCR_FS_Msk                 (0x38UL)                  /*!< FS (Bitfield-Mask: 0x07)                              */
#define DMA2_S3FCR_DMDIS_Pos              (2UL)                     /*!< DMDIS (Bit 2)                                         */
#define DMA2_S3FCR_DMDIS_Msk              (0x4UL)                   /*!< DMDIS (Bitfield-Mask: 0x01)                           */
#define DMA2_S3FCR_FTH_Pos                (0UL)                     /*!< FTH (Bit 0)                                           */
#define DMA2_S3FCR_FTH_Msk                (0x3UL)                   /*!< FTH (Bitfield-Mask: 0x03)                             */
/* =========================================================  S4CR  ========================================================== */
#define DMA2_S4CR_CHSEL_Pos               (25UL)                    /*!< CHSEL (Bit 25)                                        */
#define DMA2_S4CR_CHSEL_Msk               (0xe000000UL)             /*!< CHSEL (Bitfield-Mask: 0x07)                           */
#define DMA2_S4CR_MBURST_Pos              (23UL)                    /*!< MBURST (Bit 23)                                       */
#define DMA2_S4CR_MBURST_Msk              (0x1800000UL)             /*!< MBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S4CR_PBURST_Pos              (21UL)                    /*!< PBURST (Bit 21)                                       */
#define DMA2_S4CR_PBURST_Msk              (0x600000UL)              /*!< PBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S4CR_ACK_Pos                 (20UL)                    /*!< ACK (Bit 20)                                          */
#define DMA2_S4CR_ACK_Msk                 (0x100000UL)              /*!< ACK (Bitfield-Mask: 0x01)                             */
#define DMA2_S4CR_CT_Pos                  (19UL)                    /*!< CT (Bit 19)                                           */
#define DMA2_S4CR_CT_Msk                  (0x80000UL)               /*!< CT (Bitfield-Mask: 0x01)                              */
#define DMA2_S4CR_DBM_Pos                 (18UL)                    /*!< DBM (Bit 18)                                          */
#define DMA2_S4CR_DBM_Msk                 (0x40000UL)               /*!< DBM (Bitfield-Mask: 0x01)                             */
#define DMA2_S4CR_PL_Pos                  (16UL)                    /*!< PL (Bit 16)                                           */
#define DMA2_S4CR_PL_Msk                  (0x30000UL)               /*!< PL (Bitfield-Mask: 0x03)                              */
#define DMA2_S4CR_PINCOS_Pos              (15UL)                    /*!< PINCOS (Bit 15)                                       */
#define DMA2_S4CR_PINCOS_Msk              (0x8000UL)                /*!< PINCOS (Bitfield-Mask: 0x01)                          */
#define DMA2_S4CR_MSIZE_Pos               (13UL)                    /*!< MSIZE (Bit 13)                                        */
#define DMA2_S4CR_MSIZE_Msk               (0x6000UL)                /*!< MSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S4CR_PSIZE_Pos               (11UL)                    /*!< PSIZE (Bit 11)                                        */
#define DMA2_S4CR_PSIZE_Msk               (0x1800UL)                /*!< PSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S4CR_MINC_Pos                (10UL)                    /*!< MINC (Bit 10)                                         */
#define DMA2_S4CR_MINC_Msk                (0x400UL)                 /*!< MINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S4CR_PINC_Pos                (9UL)                     /*!< PINC (Bit 9)                                          */
#define DMA2_S4CR_PINC_Msk                (0x200UL)                 /*!< PINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S4CR_CIRC_Pos                (8UL)                     /*!< CIRC (Bit 8)                                          */
#define DMA2_S4CR_CIRC_Msk                (0x100UL)                 /*!< CIRC (Bitfield-Mask: 0x01)                            */
#define DMA2_S4CR_DIR_Pos                 (6UL)                     /*!< DIR (Bit 6)                                           */
#define DMA2_S4CR_DIR_Msk                 (0xc0UL)                  /*!< DIR (Bitfield-Mask: 0x03)                             */
#define DMA2_S4CR_PFCTRL_Pos              (5UL)                     /*!< PFCTRL (Bit 5)                                        */
#define DMA2_S4CR_PFCTRL_Msk              (0x20UL)                  /*!< PFCTRL (Bitfield-Mask: 0x01)                          */
#define DMA2_S4CR_TCIE_Pos                (4UL)                     /*!< TCIE (Bit 4)                                          */
#define DMA2_S4CR_TCIE_Msk                (0x10UL)                  /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S4CR_HTIE_Pos                (3UL)                     /*!< HTIE (Bit 3)                                          */
#define DMA2_S4CR_HTIE_Msk                (0x8UL)                   /*!< HTIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S4CR_TEIE_Pos                (2UL)                     /*!< TEIE (Bit 2)                                          */
#define DMA2_S4CR_TEIE_Msk                (0x4UL)                   /*!< TEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S4CR_DMEIE_Pos               (1UL)                     /*!< DMEIE (Bit 1)                                         */
#define DMA2_S4CR_DMEIE_Msk               (0x2UL)                   /*!< DMEIE (Bitfield-Mask: 0x01)                           */
#define DMA2_S4CR_EN_Pos                  (0UL)                     /*!< EN (Bit 0)                                            */
#define DMA2_S4CR_EN_Msk                  (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ========================================================  S4NDTR  ========================================================= */
#define DMA2_S4NDTR_NDT_Pos               (0UL)                     /*!< NDT (Bit 0)                                           */
#define DMA2_S4NDTR_NDT_Msk               (0xffffUL)                /*!< NDT (Bitfield-Mask: 0xffff)                           */
/* =========================================================  S4PAR  ========================================================= */
#define DMA2_S4PAR_PA_Pos                 (0UL)                     /*!< PA (Bit 0)                                            */
#define DMA2_S4PAR_PA_Msk                 (0xffffffffUL)            /*!< PA (Bitfield-Mask: 0xffffffff)                        */
/* ========================================================  S4M0AR  ========================================================= */
#define DMA2_S4M0AR_M0A_Pos               (0UL)                     /*!< M0A (Bit 0)                                           */
#define DMA2_S4M0AR_M0A_Msk               (0xffffffffUL)            /*!< M0A (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  S4M1AR  ========================================================= */
#define DMA2_S4M1AR_M1A_Pos               (0UL)                     /*!< M1A (Bit 0)                                           */
#define DMA2_S4M1AR_M1A_Msk               (0xffffffffUL)            /*!< M1A (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  S4FCR  ========================================================= */
#define DMA2_S4FCR_FEIE_Pos               (7UL)                     /*!< FEIE (Bit 7)                                          */
#define DMA2_S4FCR_FEIE_Msk               (0x80UL)                  /*!< FEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S4FCR_FS_Pos                 (3UL)                     /*!< FS (Bit 3)                                            */
#define DMA2_S4FCR_FS_Msk                 (0x38UL)                  /*!< FS (Bitfield-Mask: 0x07)                              */
#define DMA2_S4FCR_DMDIS_Pos              (2UL)                     /*!< DMDIS (Bit 2)                                         */
#define DMA2_S4FCR_DMDIS_Msk              (0x4UL)                   /*!< DMDIS (Bitfield-Mask: 0x01)                           */
#define DMA2_S4FCR_FTH_Pos                (0UL)                     /*!< FTH (Bit 0)                                           */
#define DMA2_S4FCR_FTH_Msk                (0x3UL)                   /*!< FTH (Bitfield-Mask: 0x03)                             */
/* =========================================================  S5CR  ========================================================== */
#define DMA2_S5CR_CHSEL_Pos               (25UL)                    /*!< CHSEL (Bit 25)                                        */
#define DMA2_S5CR_CHSEL_Msk               (0x1e000000UL)            /*!< CHSEL (Bitfield-Mask: 0x0f)                           */
#define DMA2_S5CR_MBURST_Pos              (23UL)                    /*!< MBURST (Bit 23)                                       */
#define DMA2_S5CR_MBURST_Msk              (0x1800000UL)             /*!< MBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S5CR_PBURST_Pos              (21UL)                    /*!< PBURST (Bit 21)                                       */
#define DMA2_S5CR_PBURST_Msk              (0x600000UL)              /*!< PBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S5CR_ACK_Pos                 (20UL)                    /*!< ACK (Bit 20)                                          */
#define DMA2_S5CR_ACK_Msk                 (0x100000UL)              /*!< ACK (Bitfield-Mask: 0x01)                             */
#define DMA2_S5CR_CT_Pos                  (19UL)                    /*!< CT (Bit 19)                                           */
#define DMA2_S5CR_CT_Msk                  (0x80000UL)               /*!< CT (Bitfield-Mask: 0x01)                              */
#define DMA2_S5CR_DBM_Pos                 (18UL)                    /*!< DBM (Bit 18)                                          */
#define DMA2_S5CR_DBM_Msk                 (0x40000UL)               /*!< DBM (Bitfield-Mask: 0x01)                             */
#define DMA2_S5CR_PL_Pos                  (16UL)                    /*!< PL (Bit 16)                                           */
#define DMA2_S5CR_PL_Msk                  (0x30000UL)               /*!< PL (Bitfield-Mask: 0x03)                              */
#define DMA2_S5CR_PINCOS_Pos              (15UL)                    /*!< PINCOS (Bit 15)                                       */
#define DMA2_S5CR_PINCOS_Msk              (0x8000UL)                /*!< PINCOS (Bitfield-Mask: 0x01)                          */
#define DMA2_S5CR_MSIZE_Pos               (13UL)                    /*!< MSIZE (Bit 13)                                        */
#define DMA2_S5CR_MSIZE_Msk               (0x6000UL)                /*!< MSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S5CR_PSIZE_Pos               (11UL)                    /*!< PSIZE (Bit 11)                                        */
#define DMA2_S5CR_PSIZE_Msk               (0x1800UL)                /*!< PSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S5CR_MINC_Pos                (10UL)                    /*!< MINC (Bit 10)                                         */
#define DMA2_S5CR_MINC_Msk                (0x400UL)                 /*!< MINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S5CR_PINC_Pos                (9UL)                     /*!< PINC (Bit 9)                                          */
#define DMA2_S5CR_PINC_Msk                (0x200UL)                 /*!< PINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S5CR_CIRC_Pos                (8UL)                     /*!< CIRC (Bit 8)                                          */
#define DMA2_S5CR_CIRC_Msk                (0x100UL)                 /*!< CIRC (Bitfield-Mask: 0x01)                            */
#define DMA2_S5CR_DIR_Pos                 (6UL)                     /*!< DIR (Bit 6)                                           */
#define DMA2_S5CR_DIR_Msk                 (0xc0UL)                  /*!< DIR (Bitfield-Mask: 0x03)                             */
#define DMA2_S5CR_PFCTRL_Pos              (5UL)                     /*!< PFCTRL (Bit 5)                                        */
#define DMA2_S5CR_PFCTRL_Msk              (0x20UL)                  /*!< PFCTRL (Bitfield-Mask: 0x01)                          */
#define DMA2_S5CR_TCIE_Pos                (4UL)                     /*!< TCIE (Bit 4)                                          */
#define DMA2_S5CR_TCIE_Msk                (0x10UL)                  /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S5CR_HTIE_Pos                (3UL)                     /*!< HTIE (Bit 3)                                          */
#define DMA2_S5CR_HTIE_Msk                (0x8UL)                   /*!< HTIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S5CR_TEIE_Pos                (2UL)                     /*!< TEIE (Bit 2)                                          */
#define DMA2_S5CR_TEIE_Msk                (0x4UL)                   /*!< TEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S5CR_DMEIE_Pos               (1UL)                     /*!< DMEIE (Bit 1)                                         */
#define DMA2_S5CR_DMEIE_Msk               (0x2UL)                   /*!< DMEIE (Bitfield-Mask: 0x01)                           */
#define DMA2_S5CR_EN_Pos                  (0UL)                     /*!< EN (Bit 0)                                            */
#define DMA2_S5CR_EN_Msk                  (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ========================================================  S5NDTR  ========================================================= */
#define DMA2_S5NDTR_NDT_Pos               (0UL)                     /*!< NDT (Bit 0)                                           */
#define DMA2_S5NDTR_NDT_Msk               (0xffffUL)                /*!< NDT (Bitfield-Mask: 0xffff)                           */
/* =========================================================  S5PAR  ========================================================= */
#define DMA2_S5PAR_PA_Pos                 (0UL)                     /*!< PA (Bit 0)                                            */
#define DMA2_S5PAR_PA_Msk                 (0xffffffffUL)            /*!< PA (Bitfield-Mask: 0xffffffff)                        */
/* ========================================================  S5M0AR  ========================================================= */
#define DMA2_S5M0AR_M0A_Pos               (0UL)                     /*!< M0A (Bit 0)                                           */
#define DMA2_S5M0AR_M0A_Msk               (0xffffffffUL)            /*!< M0A (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  S5M1AR  ========================================================= */
#define DMA2_S5M1AR_M1A_Pos               (0UL)                     /*!< M1A (Bit 0)                                           */
#define DMA2_S5M1AR_M1A_Msk               (0xffffffffUL)            /*!< M1A (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  S5FCR  ========================================================= */
#define DMA2_S5FCR_FEIE_Pos               (7UL)                     /*!< FEIE (Bit 7)                                          */
#define DMA2_S5FCR_FEIE_Msk               (0x80UL)                  /*!< FEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S5FCR_FS_Pos                 (3UL)                     /*!< FS (Bit 3)                                            */
#define DMA2_S5FCR_FS_Msk                 (0x38UL)                  /*!< FS (Bitfield-Mask: 0x07)                              */
#define DMA2_S5FCR_DMDIS_Pos              (2UL)                     /*!< DMDIS (Bit 2)                                         */
#define DMA2_S5FCR_DMDIS_Msk              (0x4UL)                   /*!< DMDIS (Bitfield-Mask: 0x01)                           */
#define DMA2_S5FCR_FTH_Pos                (0UL)                     /*!< FTH (Bit 0)                                           */
#define DMA2_S5FCR_FTH_Msk                (0x3UL)                   /*!< FTH (Bitfield-Mask: 0x03)                             */
/* =========================================================  S6CR  ========================================================== */
#define DMA2_S6CR_CHSEL_Pos               (25UL)                    /*!< CHSEL (Bit 25)                                        */
#define DMA2_S6CR_CHSEL_Msk               (0x1e000000UL)            /*!< CHSEL (Bitfield-Mask: 0x0f)                           */
#define DMA2_S6CR_MBURST_Pos              (23UL)                    /*!< MBURST (Bit 23)                                       */
#define DMA2_S6CR_MBURST_Msk              (0x1800000UL)             /*!< MBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S6CR_PBURST_Pos              (21UL)                    /*!< PBURST (Bit 21)                                       */
#define DMA2_S6CR_PBURST_Msk              (0x600000UL)              /*!< PBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S6CR_ACK_Pos                 (20UL)                    /*!< ACK (Bit 20)                                          */
#define DMA2_S6CR_ACK_Msk                 (0x100000UL)              /*!< ACK (Bitfield-Mask: 0x01)                             */
#define DMA2_S6CR_CT_Pos                  (19UL)                    /*!< CT (Bit 19)                                           */
#define DMA2_S6CR_CT_Msk                  (0x80000UL)               /*!< CT (Bitfield-Mask: 0x01)                              */
#define DMA2_S6CR_DBM_Pos                 (18UL)                    /*!< DBM (Bit 18)                                          */
#define DMA2_S6CR_DBM_Msk                 (0x40000UL)               /*!< DBM (Bitfield-Mask: 0x01)                             */
#define DMA2_S6CR_PL_Pos                  (16UL)                    /*!< PL (Bit 16)                                           */
#define DMA2_S6CR_PL_Msk                  (0x30000UL)               /*!< PL (Bitfield-Mask: 0x03)                              */
#define DMA2_S6CR_PINCOS_Pos              (15UL)                    /*!< PINCOS (Bit 15)                                       */
#define DMA2_S6CR_PINCOS_Msk              (0x8000UL)                /*!< PINCOS (Bitfield-Mask: 0x01)                          */
#define DMA2_S6CR_MSIZE_Pos               (13UL)                    /*!< MSIZE (Bit 13)                                        */
#define DMA2_S6CR_MSIZE_Msk               (0x6000UL)                /*!< MSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S6CR_PSIZE_Pos               (11UL)                    /*!< PSIZE (Bit 11)                                        */
#define DMA2_S6CR_PSIZE_Msk               (0x1800UL)                /*!< PSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S6CR_MINC_Pos                (10UL)                    /*!< MINC (Bit 10)                                         */
#define DMA2_S6CR_MINC_Msk                (0x400UL)                 /*!< MINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S6CR_PINC_Pos                (9UL)                     /*!< PINC (Bit 9)                                          */
#define DMA2_S6CR_PINC_Msk                (0x200UL)                 /*!< PINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S6CR_CIRC_Pos                (8UL)                     /*!< CIRC (Bit 8)                                          */
#define DMA2_S6CR_CIRC_Msk                (0x100UL)                 /*!< CIRC (Bitfield-Mask: 0x01)                            */
#define DMA2_S6CR_DIR_Pos                 (6UL)                     /*!< DIR (Bit 6)                                           */
#define DMA2_S6CR_DIR_Msk                 (0xc0UL)                  /*!< DIR (Bitfield-Mask: 0x03)                             */
#define DMA2_S6CR_PFCTRL_Pos              (5UL)                     /*!< PFCTRL (Bit 5)                                        */
#define DMA2_S6CR_PFCTRL_Msk              (0x20UL)                  /*!< PFCTRL (Bitfield-Mask: 0x01)                          */
#define DMA2_S6CR_TCIE_Pos                (4UL)                     /*!< TCIE (Bit 4)                                          */
#define DMA2_S6CR_TCIE_Msk                (0x10UL)                  /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S6CR_HTIE_Pos                (3UL)                     /*!< HTIE (Bit 3)                                          */
#define DMA2_S6CR_HTIE_Msk                (0x8UL)                   /*!< HTIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S6CR_TEIE_Pos                (2UL)                     /*!< TEIE (Bit 2)                                          */
#define DMA2_S6CR_TEIE_Msk                (0x4UL)                   /*!< TEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S6CR_DMEIE_Pos               (1UL)                     /*!< DMEIE (Bit 1)                                         */
#define DMA2_S6CR_DMEIE_Msk               (0x2UL)                   /*!< DMEIE (Bitfield-Mask: 0x01)                           */
#define DMA2_S6CR_EN_Pos                  (0UL)                     /*!< EN (Bit 0)                                            */
#define DMA2_S6CR_EN_Msk                  (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ========================================================  S6NDTR  ========================================================= */
#define DMA2_S6NDTR_NDT_Pos               (0UL)                     /*!< NDT (Bit 0)                                           */
#define DMA2_S6NDTR_NDT_Msk               (0xffffUL)                /*!< NDT (Bitfield-Mask: 0xffff)                           */
/* =========================================================  S6PAR  ========================================================= */
#define DMA2_S6PAR_PA_Pos                 (0UL)                     /*!< PA (Bit 0)                                            */
#define DMA2_S6PAR_PA_Msk                 (0xffffffffUL)            /*!< PA (Bitfield-Mask: 0xffffffff)                        */
/* ========================================================  S6M0AR  ========================================================= */
#define DMA2_S6M0AR_M0A_Pos               (0UL)                     /*!< M0A (Bit 0)                                           */
#define DMA2_S6M0AR_M0A_Msk               (0xffffffffUL)            /*!< M0A (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  S6M1AR  ========================================================= */
#define DMA2_S6M1AR_M1A_Pos               (0UL)                     /*!< M1A (Bit 0)                                           */
#define DMA2_S6M1AR_M1A_Msk               (0xffffffffUL)            /*!< M1A (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  S6FCR  ========================================================= */
#define DMA2_S6FCR_FEIE_Pos               (7UL)                     /*!< FEIE (Bit 7)                                          */
#define DMA2_S6FCR_FEIE_Msk               (0x80UL)                  /*!< FEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S6FCR_FS_Pos                 (3UL)                     /*!< FS (Bit 3)                                            */
#define DMA2_S6FCR_FS_Msk                 (0x38UL)                  /*!< FS (Bitfield-Mask: 0x07)                              */
#define DMA2_S6FCR_DMDIS_Pos              (2UL)                     /*!< DMDIS (Bit 2)                                         */
#define DMA2_S6FCR_DMDIS_Msk              (0x4UL)                   /*!< DMDIS (Bitfield-Mask: 0x01)                           */
#define DMA2_S6FCR_FTH_Pos                (0UL)                     /*!< FTH (Bit 0)                                           */
#define DMA2_S6FCR_FTH_Msk                (0x3UL)                   /*!< FTH (Bitfield-Mask: 0x03)                             */
/* =========================================================  S7CR  ========================================================== */
#define DMA2_S7CR_CHSEL_Pos               (25UL)                    /*!< CHSEL (Bit 25)                                        */
#define DMA2_S7CR_CHSEL_Msk               (0x1e000000UL)            /*!< CHSEL (Bitfield-Mask: 0x0f)                           */
#define DMA2_S7CR_MBURST_Pos              (23UL)                    /*!< MBURST (Bit 23)                                       */
#define DMA2_S7CR_MBURST_Msk              (0x1800000UL)             /*!< MBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S7CR_PBURST_Pos              (21UL)                    /*!< PBURST (Bit 21)                                       */
#define DMA2_S7CR_PBURST_Msk              (0x600000UL)              /*!< PBURST (Bitfield-Mask: 0x03)                          */
#define DMA2_S7CR_ACK_Pos                 (20UL)                    /*!< ACK (Bit 20)                                          */
#define DMA2_S7CR_ACK_Msk                 (0x100000UL)              /*!< ACK (Bitfield-Mask: 0x01)                             */
#define DMA2_S7CR_CT_Pos                  (19UL)                    /*!< CT (Bit 19)                                           */
#define DMA2_S7CR_CT_Msk                  (0x80000UL)               /*!< CT (Bitfield-Mask: 0x01)                              */
#define DMA2_S7CR_DBM_Pos                 (18UL)                    /*!< DBM (Bit 18)                                          */
#define DMA2_S7CR_DBM_Msk                 (0x40000UL)               /*!< DBM (Bitfield-Mask: 0x01)                             */
#define DMA2_S7CR_PL_Pos                  (16UL)                    /*!< PL (Bit 16)                                           */
#define DMA2_S7CR_PL_Msk                  (0x30000UL)               /*!< PL (Bitfield-Mask: 0x03)                              */
#define DMA2_S7CR_PINCOS_Pos              (15UL)                    /*!< PINCOS (Bit 15)                                       */
#define DMA2_S7CR_PINCOS_Msk              (0x8000UL)                /*!< PINCOS (Bitfield-Mask: 0x01)                          */
#define DMA2_S7CR_MSIZE_Pos               (13UL)                    /*!< MSIZE (Bit 13)                                        */
#define DMA2_S7CR_MSIZE_Msk               (0x6000UL)                /*!< MSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S7CR_PSIZE_Pos               (11UL)                    /*!< PSIZE (Bit 11)                                        */
#define DMA2_S7CR_PSIZE_Msk               (0x1800UL)                /*!< PSIZE (Bitfield-Mask: 0x03)                           */
#define DMA2_S7CR_MINC_Pos                (10UL)                    /*!< MINC (Bit 10)                                         */
#define DMA2_S7CR_MINC_Msk                (0x400UL)                 /*!< MINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S7CR_PINC_Pos                (9UL)                     /*!< PINC (Bit 9)                                          */
#define DMA2_S7CR_PINC_Msk                (0x200UL)                 /*!< PINC (Bitfield-Mask: 0x01)                            */
#define DMA2_S7CR_CIRC_Pos                (8UL)                     /*!< CIRC (Bit 8)                                          */
#define DMA2_S7CR_CIRC_Msk                (0x100UL)                 /*!< CIRC (Bitfield-Mask: 0x01)                            */
#define DMA2_S7CR_DIR_Pos                 (6UL)                     /*!< DIR (Bit 6)                                           */
#define DMA2_S7CR_DIR_Msk                 (0xc0UL)                  /*!< DIR (Bitfield-Mask: 0x03)                             */
#define DMA2_S7CR_PFCTRL_Pos              (5UL)                     /*!< PFCTRL (Bit 5)                                        */
#define DMA2_S7CR_PFCTRL_Msk              (0x20UL)                  /*!< PFCTRL (Bitfield-Mask: 0x01)                          */
#define DMA2_S7CR_TCIE_Pos                (4UL)                     /*!< TCIE (Bit 4)                                          */
#define DMA2_S7CR_TCIE_Msk                (0x10UL)                  /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S7CR_HTIE_Pos                (3UL)                     /*!< HTIE (Bit 3)                                          */
#define DMA2_S7CR_HTIE_Msk                (0x8UL)                   /*!< HTIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S7CR_TEIE_Pos                (2UL)                     /*!< TEIE (Bit 2)                                          */
#define DMA2_S7CR_TEIE_Msk                (0x4UL)                   /*!< TEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S7CR_DMEIE_Pos               (1UL)                     /*!< DMEIE (Bit 1)                                         */
#define DMA2_S7CR_DMEIE_Msk               (0x2UL)                   /*!< DMEIE (Bitfield-Mask: 0x01)                           */
#define DMA2_S7CR_EN_Pos                  (0UL)                     /*!< EN (Bit 0)                                            */
#define DMA2_S7CR_EN_Msk                  (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ========================================================  S7NDTR  ========================================================= */
#define DMA2_S7NDTR_NDT_Pos               (0UL)                     /*!< NDT (Bit 0)                                           */
#define DMA2_S7NDTR_NDT_Msk               (0xffffUL)                /*!< NDT (Bitfield-Mask: 0xffff)                           */
/* =========================================================  S7PAR  ========================================================= */
#define DMA2_S7PAR_PA_Pos                 (0UL)                     /*!< PA (Bit 0)                                            */
#define DMA2_S7PAR_PA_Msk                 (0xffffffffUL)            /*!< PA (Bitfield-Mask: 0xffffffff)                        */
/* ========================================================  S7M0AR  ========================================================= */
#define DMA2_S7M0AR_M0A_Pos               (0UL)                     /*!< M0A (Bit 0)                                           */
#define DMA2_S7M0AR_M0A_Msk               (0xffffffffUL)            /*!< M0A (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  S7M1AR  ========================================================= */
#define DMA2_S7M1AR_M1A_Pos               (0UL)                     /*!< M1A (Bit 0)                                           */
#define DMA2_S7M1AR_M1A_Msk               (0xffffffffUL)            /*!< M1A (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  S7FCR  ========================================================= */
#define DMA2_S7FCR_FEIE_Pos               (7UL)                     /*!< FEIE (Bit 7)                                          */
#define DMA2_S7FCR_FEIE_Msk               (0x80UL)                  /*!< FEIE (Bitfield-Mask: 0x01)                            */
#define DMA2_S7FCR_FS_Pos                 (3UL)                     /*!< FS (Bit 3)                                            */
#define DMA2_S7FCR_FS_Msk                 (0x38UL)                  /*!< FS (Bitfield-Mask: 0x07)                              */
#define DMA2_S7FCR_DMDIS_Pos              (2UL)                     /*!< DMDIS (Bit 2)                                         */
#define DMA2_S7FCR_DMDIS_Msk              (0x4UL)                   /*!< DMDIS (Bitfield-Mask: 0x01)                           */
#define DMA2_S7FCR_FTH_Pos                (0UL)                     /*!< FTH (Bit 0)                                           */
#define DMA2_S7FCR_FTH_Msk                (0x3UL)                   /*!< FTH (Bitfield-Mask: 0x03)                             */
