#include "core.h"


#define CAN1_BASE                   0x40006400UL
#define CAN2_BASE                   0x40006800UL
#define CAN3_BASE                   0x40003400UL

#define CAN1                        ((CAN1_Type*)              CAN1_BASE)
#define CAN2                        ((CAN1_Type*)              CAN2_BASE)
#define CAN3                        ((CAN1_Type*)              CAN3_BASE)


/* =========================================================================================================================== */
/* ================                                           CAN1                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Controller area network (CAN1)
  */

typedef struct {                                /*!< (@ 0x40006400) CAN1 Structure                                             */
  
  union {
    __IOM uint32_t MCR;                         /*!< (@ 0x00000000) master control register                                    */
    
    struct {
      __IOM uint32_t INRQ       : 1;            /*!< [0..0] INRQ                                                               */
      __IOM uint32_t SLEEP      : 1;            /*!< [1..1] SLEEP                                                              */
      __IOM uint32_t TXFP       : 1;            /*!< [2..2] TXFP                                                               */
      __IOM uint32_t RFLM       : 1;            /*!< [3..3] RFLM                                                               */
      __IOM uint32_t NART       : 1;            /*!< [4..4] NART                                                               */
      __IOM uint32_t AWUM       : 1;            /*!< [5..5] AWUM                                                               */
      __IOM uint32_t ABOM       : 1;            /*!< [6..6] ABOM                                                               */
      __IOM uint32_t TTCM       : 1;            /*!< [7..7] TTCM                                                               */
            uint32_t            : 7;
      __IOM uint32_t RESET      : 1;            /*!< [15..15] RESET                                                            */
      __IOM uint32_t DBF        : 1;            /*!< [16..16] DBF                                                              */
            uint32_t            : 15;
    } MCR_b;
  } ;
  
  union {
    __IOM uint32_t MSR;                         /*!< (@ 0x00000004) master status register                                     */
    
    struct {
      __IM  uint32_t INAK       : 1;            /*!< [0..0] INAK                                                               */
      __IM  uint32_t SLAK       : 1;            /*!< [1..1] SLAK                                                               */
      __IOM uint32_t ERRI       : 1;            /*!< [2..2] ERRI                                                               */
      __IOM uint32_t WKUI       : 1;            /*!< [3..3] WKUI                                                               */
      __IOM uint32_t SLAKI      : 1;            /*!< [4..4] SLAKI                                                              */
            uint32_t            : 3;
      __IM  uint32_t TXM        : 1;            /*!< [8..8] TXM                                                                */
      __IM  uint32_t RXM        : 1;            /*!< [9..9] RXM                                                                */
      __IM  uint32_t SAMP       : 1;            /*!< [10..10] SAMP                                                             */
      __IM  uint32_t RX         : 1;            /*!< [11..11] RX                                                               */
            uint32_t            : 20;
    } MSR_b;
  } ;
  
  union {
    __IOM uint32_t TSR;                         /*!< (@ 0x00000008) transmit status register                                   */
    
    struct {
      __IOM uint32_t RQCP0      : 1;            /*!< [0..0] RQCP0                                                              */
      __IOM uint32_t TXOK0      : 1;            /*!< [1..1] TXOK0                                                              */
      __IOM uint32_t ALST0      : 1;            /*!< [2..2] ALST0                                                              */
      __IOM uint32_t TERR0      : 1;            /*!< [3..3] TERR0                                                              */
            uint32_t            : 3;
      __IOM uint32_t ABRQ0      : 1;            /*!< [7..7] ABRQ0                                                              */
      __IOM uint32_t RQCP1      : 1;            /*!< [8..8] RQCP1                                                              */
      __IOM uint32_t TXOK1      : 1;            /*!< [9..9] TXOK1                                                              */
      __IOM uint32_t ALST1      : 1;            /*!< [10..10] ALST1                                                            */
      __IOM uint32_t TERR1      : 1;            /*!< [11..11] TERR1                                                            */
            uint32_t            : 3;
      __IOM uint32_t ABRQ1      : 1;            /*!< [15..15] ABRQ1                                                            */
      __IOM uint32_t RQCP2      : 1;            /*!< [16..16] RQCP2                                                            */
      __IOM uint32_t TXOK2      : 1;            /*!< [17..17] TXOK2                                                            */
      __IOM uint32_t ALST2      : 1;            /*!< [18..18] ALST2                                                            */
      __IOM uint32_t TERR2      : 1;            /*!< [19..19] TERR2                                                            */
            uint32_t            : 3;
      __IOM uint32_t ABRQ2      : 1;            /*!< [23..23] ABRQ2                                                            */
      __IM  uint32_t CODE       : 2;            /*!< [25..24] CODE                                                             */
      __IM  uint32_t TME0       : 1;            /*!< [26..26] Lowest priority flag for mailbox 0                               */
      __IM  uint32_t TME1       : 1;            /*!< [27..27] Lowest priority flag for mailbox 1                               */
      __IM  uint32_t TME2       : 1;            /*!< [28..28] Lowest priority flag for mailbox 2                               */
      __IM  uint32_t LOW0       : 1;            /*!< [29..29] Lowest priority flag for mailbox 0                               */
      __IM  uint32_t LOW1       : 1;            /*!< [30..30] Lowest priority flag for mailbox 1                               */
      __IM  uint32_t LOW2       : 1;            /*!< [31..31] Lowest priority flag for mailbox 2                               */
    } TSR_b;
  } ;
  
  union {
    __IOM uint32_t RF0R;                        /*!< (@ 0x0000000C) receive FIFO 0 register                                    */
    
    struct {
      __IM  uint32_t FMP0       : 2;            /*!< [1..0] FMP0                                                               */
            uint32_t            : 1;
      __IOM uint32_t FULL0      : 1;            /*!< [3..3] FULL0                                                              */
      __IOM uint32_t FOVR0      : 1;            /*!< [4..4] FOVR0                                                              */
      __IOM uint32_t RFOM0      : 1;            /*!< [5..5] RFOM0                                                              */
            uint32_t            : 26;
    } RF0R_b;
  } ;
  
  union {
    __IOM uint32_t RF1R;                        /*!< (@ 0x00000010) receive FIFO 1 register                                    */
    
    struct {
      __IM  uint32_t FMP1       : 2;            /*!< [1..0] FMP1                                                               */
            uint32_t            : 1;
      __IOM uint32_t FULL1      : 1;            /*!< [3..3] FULL1                                                              */
      __IOM uint32_t FOVR1      : 1;            /*!< [4..4] FOVR1                                                              */
      __IOM uint32_t RFOM1      : 1;            /*!< [5..5] RFOM1                                                              */
            uint32_t            : 26;
    } RF1R_b;
  } ;
  
  union {
    __IOM uint32_t IER;                         /*!< (@ 0x00000014) interrupt enable register                                  */
    
    struct {
      __IOM uint32_t TMEIE      : 1;            /*!< [0..0] TMEIE                                                              */
      __IOM uint32_t FMPIE0     : 1;            /*!< [1..1] FMPIE0                                                             */
      __IOM uint32_t FFIE0      : 1;            /*!< [2..2] FFIE0                                                              */
      __IOM uint32_t FOVIE0     : 1;            /*!< [3..3] FOVIE0                                                             */
      __IOM uint32_t FMPIE1     : 1;            /*!< [4..4] FMPIE1                                                             */
      __IOM uint32_t FFIE1      : 1;            /*!< [5..5] FFIE1                                                              */
      __IOM uint32_t FOVIE1     : 1;            /*!< [6..6] FOVIE1                                                             */
            uint32_t            : 1;
      __IOM uint32_t EWGIE      : 1;            /*!< [8..8] EWGIE                                                              */
      __IOM uint32_t EPVIE      : 1;            /*!< [9..9] EPVIE                                                              */
      __IOM uint32_t BOFIE      : 1;            /*!< [10..10] BOFIE                                                            */
      __IOM uint32_t LECIE      : 1;            /*!< [11..11] LECIE                                                            */
            uint32_t            : 3;
      __IOM uint32_t ERRIE      : 1;            /*!< [15..15] ERRIE                                                            */
      __IOM uint32_t WKUIE      : 1;            /*!< [16..16] WKUIE                                                            */
      __IOM uint32_t SLKIE      : 1;            /*!< [17..17] SLKIE                                                            */
            uint32_t            : 14;
    } IER_b;
  } ;
  
  union {
    __IOM uint32_t ESR;                         /*!< (@ 0x00000018) interrupt enable register                                  */
    
    struct {
      __IM  uint32_t EWGF       : 1;            /*!< [0..0] EWGF                                                               */
      __IM  uint32_t EPVF       : 1;            /*!< [1..1] EPVF                                                               */
      __IM  uint32_t BOFF       : 1;            /*!< [2..2] BOFF                                                               */
            uint32_t            : 1;
      __IOM uint32_t LEC        : 3;            /*!< [6..4] LEC                                                                */
            uint32_t            : 9;
      __IM  uint32_t TEC        : 8;            /*!< [23..16] TEC                                                              */
      __IM  uint32_t REC        : 8;            /*!< [31..24] REC                                                              */
    } ESR_b;
  } ;
  
  union {
    __IOM uint32_t BTR;                         /*!< (@ 0x0000001C) bit timing register                                        */
    
    struct {
      __IOM uint32_t BRP        : 10;           /*!< [9..0] BRP                                                                */
            uint32_t            : 6;
      __IOM uint32_t TS1        : 4;            /*!< [19..16] TS1                                                              */
      __IOM uint32_t TS2        : 3;            /*!< [22..20] TS2                                                              */
            uint32_t            : 1;
      __IOM uint32_t SJW        : 2;            /*!< [25..24] SJW                                                              */
            uint32_t            : 4;
      __IOM uint32_t LBKM       : 1;            /*!< [30..30] LBKM                                                             */
      __IOM uint32_t SILM       : 1;            /*!< [31..31] SILM                                                             */
    } BTR_b;
  } ;
  __IM  uint32_t  RESERVED[88];
  
  union {
    __IOM uint32_t TI0R;                        /*!< (@ 0x00000180) TX mailbox identifier register                             */
    
    struct {
      __IOM uint32_t TXRQ       : 1;            /*!< [0..0] TXRQ                                                               */
      __IOM uint32_t RTR        : 1;            /*!< [1..1] RTR                                                                */
      __IOM uint32_t IDE        : 1;            /*!< [2..2] IDE                                                                */
      __IOM uint32_t EXID       : 18;           /*!< [20..3] EXID                                                              */
      __IOM uint32_t STID       : 11;           /*!< [31..21] STID                                                             */
    } TI0R_b;
  } ;
  
  union {
    __IOM uint32_t TDT0R;                       /*!< (@ 0x00000184) mailbox data length control and time stamp register        */
    
    struct {
      __IOM uint32_t DLC        : 4;            /*!< [3..0] DLC                                                                */
            uint32_t            : 4;
      __IOM uint32_t TGT        : 1;            /*!< [8..8] TGT                                                                */
            uint32_t            : 7;
      __IOM uint32_t TIME       : 16;           /*!< [31..16] TIME                                                             */
    } TDT0R_b;
  } ;
  
  union {
    __IOM uint32_t TDL0R;                       /*!< (@ 0x00000188) mailbox data low register                                  */
    
    struct {
      __IOM uint32_t DATA0      : 8;            /*!< [7..0] DATA0                                                              */
      __IOM uint32_t DATA1      : 8;            /*!< [15..8] DATA1                                                             */
      __IOM uint32_t DATA2      : 8;            /*!< [23..16] DATA2                                                            */
      __IOM uint32_t DATA3      : 8;            /*!< [31..24] DATA3                                                            */
    } TDL0R_b;
  } ;
  
  union {
    __IOM uint32_t TDH0R;                       /*!< (@ 0x0000018C) mailbox data high register                                 */
    
    struct {
      __IOM uint32_t DATA4      : 8;            /*!< [7..0] DATA4                                                              */
      __IOM uint32_t DATA5      : 8;            /*!< [15..8] DATA5                                                             */
      __IOM uint32_t DATA6      : 8;            /*!< [23..16] DATA6                                                            */
      __IOM uint32_t DATA7      : 8;            /*!< [31..24] DATA7                                                            */
    } TDH0R_b;
  } ;
  
  union {
    __IOM uint32_t TI1R;                        /*!< (@ 0x00000190) mailbox identifier register                                */
    
    struct {
      __IOM uint32_t TXRQ       : 1;            /*!< [0..0] TXRQ                                                               */
      __IOM uint32_t RTR        : 1;            /*!< [1..1] RTR                                                                */
      __IOM uint32_t IDE        : 1;            /*!< [2..2] IDE                                                                */
      __IOM uint32_t EXID       : 18;           /*!< [20..3] EXID                                                              */
      __IOM uint32_t STID       : 11;           /*!< [31..21] STID                                                             */
    } TI1R_b;
  } ;
  
  union {
    __IOM uint32_t TDT1R;                       /*!< (@ 0x00000194) mailbox data length control and time stamp register        */
    
    struct {
      __IOM uint32_t DLC        : 4;            /*!< [3..0] DLC                                                                */
            uint32_t            : 4;
      __IOM uint32_t TGT        : 1;            /*!< [8..8] TGT                                                                */
            uint32_t            : 7;
      __IOM uint32_t TIME       : 16;           /*!< [31..16] TIME                                                             */
    } TDT1R_b;
  } ;
  
  union {
    __IOM uint32_t TDL1R;                       /*!< (@ 0x00000198) mailbox data low register                                  */
    
    struct {
      __IOM uint32_t DATA0      : 8;            /*!< [7..0] DATA0                                                              */
      __IOM uint32_t DATA1      : 8;            /*!< [15..8] DATA1                                                             */
      __IOM uint32_t DATA2      : 8;            /*!< [23..16] DATA2                                                            */
      __IOM uint32_t DATA3      : 8;            /*!< [31..24] DATA3                                                            */
    } TDL1R_b;
  } ;
  
  union {
    __IOM uint32_t TDH1R;                       /*!< (@ 0x0000019C) mailbox data high register                                 */
    
    struct {
      __IOM uint32_t DATA4      : 8;            /*!< [7..0] DATA4                                                              */
      __IOM uint32_t DATA5      : 8;            /*!< [15..8] DATA5                                                             */
      __IOM uint32_t DATA6      : 8;            /*!< [23..16] DATA6                                                            */
      __IOM uint32_t DATA7      : 8;            /*!< [31..24] DATA7                                                            */
    } TDH1R_b;
  } ;
  
  union {
    __IOM uint32_t TI2R;                        /*!< (@ 0x000001A0) mailbox identifier register                                */
    
    struct {
      __IOM uint32_t TXRQ       : 1;            /*!< [0..0] TXRQ                                                               */
      __IOM uint32_t RTR        : 1;            /*!< [1..1] RTR                                                                */
      __IOM uint32_t IDE        : 1;            /*!< [2..2] IDE                                                                */
      __IOM uint32_t EXID       : 18;           /*!< [20..3] EXID                                                              */
      __IOM uint32_t STID       : 11;           /*!< [31..21] STID                                                             */
    } TI2R_b;
  } ;
  
  union {
    __IOM uint32_t TDT2R;                       /*!< (@ 0x000001A4) mailbox data length control and time stamp register        */
    
    struct {
      __IOM uint32_t DLC        : 4;            /*!< [3..0] DLC                                                                */
            uint32_t            : 4;
      __IOM uint32_t TGT        : 1;            /*!< [8..8] TGT                                                                */
            uint32_t            : 7;
      __IOM uint32_t TIME       : 16;           /*!< [31..16] TIME                                                             */
    } TDT2R_b;
  } ;
  
  union {
    __IOM uint32_t TDL2R;                       /*!< (@ 0x000001A8) mailbox data low register                                  */
    
    struct {
      __IOM uint32_t DATA0      : 8;            /*!< [7..0] DATA0                                                              */
      __IOM uint32_t DATA1      : 8;            /*!< [15..8] DATA1                                                             */
      __IOM uint32_t DATA2      : 8;            /*!< [23..16] DATA2                                                            */
      __IOM uint32_t DATA3      : 8;            /*!< [31..24] DATA3                                                            */
    } TDL2R_b;
  } ;
  
  union {
    __IOM uint32_t TDH2R;                       /*!< (@ 0x000001AC) mailbox data high register                                 */
    
    struct {
      __IOM uint32_t DATA4      : 8;            /*!< [7..0] DATA4                                                              */
      __IOM uint32_t DATA5      : 8;            /*!< [15..8] DATA5                                                             */
      __IOM uint32_t DATA6      : 8;            /*!< [23..16] DATA6                                                            */
      __IOM uint32_t DATA7      : 8;            /*!< [31..24] DATA7                                                            */
    } TDH2R_b;
  } ;
  
  union {
    __IM  uint32_t RI0R;                        /*!< (@ 0x000001B0) receive FIFO mailbox identifier register                   */
    
    struct {
            uint32_t            : 1;
      __IM  uint32_t RTR        : 1;            /*!< [1..1] RTR                                                                */
      __IM  uint32_t IDE        : 1;            /*!< [2..2] IDE                                                                */
      __IM  uint32_t EXID       : 18;           /*!< [20..3] EXID                                                              */
      __IM  uint32_t STID       : 11;           /*!< [31..21] STID                                                             */
    } RI0R_b;
  } ;
  
  union {
    __IM  uint32_t RDT0R;                       /*!< (@ 0x000001B4) mailbox data high register                                 */
    
    struct {
      __IM  uint32_t DLC        : 4;            /*!< [3..0] DLC                                                                */
            uint32_t            : 4;
      __IM  uint32_t FMI        : 8;            /*!< [15..8] FMI                                                               */
      __IM  uint32_t TIME       : 16;           /*!< [31..16] TIME                                                             */
    } RDT0R_b;
  } ;
  
  union {
    __IM  uint32_t RDL0R;                       /*!< (@ 0x000001B8) mailbox data high register                                 */
    
    struct {
      __IM  uint32_t DATA0      : 8;            /*!< [7..0] DATA0                                                              */
      __IM  uint32_t DATA1      : 8;            /*!< [15..8] DATA1                                                             */
      __IM  uint32_t DATA2      : 8;            /*!< [23..16] DATA2                                                            */
      __IM  uint32_t DATA3      : 8;            /*!< [31..24] DATA3                                                            */
    } RDL0R_b;
  } ;
  
  union {
    __IM  uint32_t RDH0R;                       /*!< (@ 0x000001BC) receive FIFO mailbox data high register                    */
    
    struct {
      __IM  uint32_t DATA4      : 8;            /*!< [7..0] DATA4                                                              */
      __IM  uint32_t DATA5      : 8;            /*!< [15..8] DATA5                                                             */
      __IM  uint32_t DATA6      : 8;            /*!< [23..16] DATA6                                                            */
      __IM  uint32_t DATA7      : 8;            /*!< [31..24] DATA7                                                            */
    } RDH0R_b;
  } ;
  
  union {
    __IM  uint32_t RI1R;                        /*!< (@ 0x000001C0) mailbox data high register                                 */
    
    struct {
            uint32_t            : 1;
      __IM  uint32_t RTR        : 1;            /*!< [1..1] RTR                                                                */
      __IM  uint32_t IDE        : 1;            /*!< [2..2] IDE                                                                */
      __IM  uint32_t EXID       : 18;           /*!< [20..3] EXID                                                              */
      __IM  uint32_t STID       : 11;           /*!< [31..21] STID                                                             */
    } RI1R_b;
  } ;
  
  union {
    __IM  uint32_t RDT1R;                       /*!< (@ 0x000001C4) mailbox data high register                                 */
    
    struct {
      __IM  uint32_t DLC        : 4;            /*!< [3..0] DLC                                                                */
            uint32_t            : 4;
      __IM  uint32_t FMI        : 8;            /*!< [15..8] FMI                                                               */
      __IM  uint32_t TIME       : 16;           /*!< [31..16] TIME                                                             */
    } RDT1R_b;
  } ;
  
  union {
    __IM  uint32_t RDL1R;                       /*!< (@ 0x000001C8) mailbox data high register                                 */
    
    struct {
      __IM  uint32_t DATA0      : 8;            /*!< [7..0] DATA0                                                              */
      __IM  uint32_t DATA1      : 8;            /*!< [15..8] DATA1                                                             */
      __IM  uint32_t DATA2      : 8;            /*!< [23..16] DATA2                                                            */
      __IM  uint32_t DATA3      : 8;            /*!< [31..24] DATA3                                                            */
    } RDL1R_b;
  } ;
  
  union {
    __IM  uint32_t RDH1R;                       /*!< (@ 0x000001CC) mailbox data high register                                 */
    
    struct {
      __IM  uint32_t DATA4      : 8;            /*!< [7..0] DATA4                                                              */
      __IM  uint32_t DATA5      : 8;            /*!< [15..8] DATA5                                                             */
      __IM  uint32_t DATA6      : 8;            /*!< [23..16] DATA6                                                            */
      __IM  uint32_t DATA7      : 8;            /*!< [31..24] DATA7                                                            */
    } RDH1R_b;
  } ;
  __IM  uint32_t  RESERVED1[12];
  
  union {
    __IOM uint32_t FMR;                         /*!< (@ 0x00000200) filter master register                                     */
    
    struct {
      __IOM uint32_t FINIT      : 1;            /*!< [0..0] FINIT                                                              */
            uint32_t            : 7;
      __IOM uint32_t CAN2SB     : 6;            /*!< [13..8] CAN2SB                                                            */
            uint32_t            : 18;
    } FMR_b;
  } ;
  
  union {
    __IOM uint32_t FM1R;                        /*!< (@ 0x00000204) filter mode register                                       */
    
    struct {
      __IOM uint32_t FBM0       : 1;            /*!< [0..0] Filter mode                                                        */
      __IOM uint32_t FBM1       : 1;            /*!< [1..1] Filter mode                                                        */
      __IOM uint32_t FBM2       : 1;            /*!< [2..2] Filter mode                                                        */
      __IOM uint32_t FBM3       : 1;            /*!< [3..3] Filter mode                                                        */
      __IOM uint32_t FBM4       : 1;            /*!< [4..4] Filter mode                                                        */
      __IOM uint32_t FBM5       : 1;            /*!< [5..5] Filter mode                                                        */
      __IOM uint32_t FBM6       : 1;            /*!< [6..6] Filter mode                                                        */
      __IOM uint32_t FBM7       : 1;            /*!< [7..7] Filter mode                                                        */
      __IOM uint32_t FBM8       : 1;            /*!< [8..8] Filter mode                                                        */
      __IOM uint32_t FBM9       : 1;            /*!< [9..9] Filter mode                                                        */
      __IOM uint32_t FBM10      : 1;            /*!< [10..10] Filter mode                                                      */
      __IOM uint32_t FBM11      : 1;            /*!< [11..11] Filter mode                                                      */
      __IOM uint32_t FBM12      : 1;            /*!< [12..12] Filter mode                                                      */
      __IOM uint32_t FBM13      : 1;            /*!< [13..13] Filter mode                                                      */
      __IOM uint32_t FBM14      : 1;            /*!< [14..14] Filter mode                                                      */
      __IOM uint32_t FBM15      : 1;            /*!< [15..15] Filter mode                                                      */
      __IOM uint32_t FBM16      : 1;            /*!< [16..16] Filter mode                                                      */
      __IOM uint32_t FBM17      : 1;            /*!< [17..17] Filter mode                                                      */
      __IOM uint32_t FBM18      : 1;            /*!< [18..18] Filter mode                                                      */
      __IOM uint32_t FBM19      : 1;            /*!< [19..19] Filter mode                                                      */
      __IOM uint32_t FBM20      : 1;            /*!< [20..20] Filter mode                                                      */
      __IOM uint32_t FBM21      : 1;            /*!< [21..21] Filter mode                                                      */
      __IOM uint32_t FBM22      : 1;            /*!< [22..22] Filter mode                                                      */
      __IOM uint32_t FBM23      : 1;            /*!< [23..23] Filter mode                                                      */
      __IOM uint32_t FBM24      : 1;            /*!< [24..24] Filter mode                                                      */
      __IOM uint32_t FBM25      : 1;            /*!< [25..25] Filter mode                                                      */
      __IOM uint32_t FBM26      : 1;            /*!< [26..26] Filter mode                                                      */
      __IOM uint32_t FBM27      : 1;            /*!< [27..27] Filter mode                                                      */
            uint32_t            : 4;
    } FM1R_b;
  } ;
  __IM  uint32_t  RESERVED2;
  
  union {
    __IOM uint32_t FS1R;                        /*!< (@ 0x0000020C) filter scale register                                      */
    
    struct {
      __IOM uint32_t FSC0       : 1;            /*!< [0..0] Filter scale configuration                                         */
      __IOM uint32_t FSC1       : 1;            /*!< [1..1] Filter scale configuration                                         */
      __IOM uint32_t FSC2       : 1;            /*!< [2..2] Filter scale configuration                                         */
      __IOM uint32_t FSC3       : 1;            /*!< [3..3] Filter scale configuration                                         */
      __IOM uint32_t FSC4       : 1;            /*!< [4..4] Filter scale configuration                                         */
      __IOM uint32_t FSC5       : 1;            /*!< [5..5] Filter scale configuration                                         */
      __IOM uint32_t FSC6       : 1;            /*!< [6..6] Filter scale configuration                                         */
      __IOM uint32_t FSC7       : 1;            /*!< [7..7] Filter scale configuration                                         */
      __IOM uint32_t FSC8       : 1;            /*!< [8..8] Filter scale configuration                                         */
      __IOM uint32_t FSC9       : 1;            /*!< [9..9] Filter scale configuration                                         */
      __IOM uint32_t FSC10      : 1;            /*!< [10..10] Filter scale configuration                                       */
      __IOM uint32_t FSC11      : 1;            /*!< [11..11] Filter scale configuration                                       */
      __IOM uint32_t FSC12      : 1;            /*!< [12..12] Filter scale configuration                                       */
      __IOM uint32_t FSC13      : 1;            /*!< [13..13] Filter scale configuration                                       */
      __IOM uint32_t FSC14      : 1;            /*!< [14..14] Filter scale configuration                                       */
      __IOM uint32_t FSC15      : 1;            /*!< [15..15] Filter scale configuration                                       */
      __IOM uint32_t FSC16      : 1;            /*!< [16..16] Filter scale configuration                                       */
      __IOM uint32_t FSC17      : 1;            /*!< [17..17] Filter scale configuration                                       */
      __IOM uint32_t FSC18      : 1;            /*!< [18..18] Filter scale configuration                                       */
      __IOM uint32_t FSC19      : 1;            /*!< [19..19] Filter scale configuration                                       */
      __IOM uint32_t FSC20      : 1;            /*!< [20..20] Filter scale configuration                                       */
      __IOM uint32_t FSC21      : 1;            /*!< [21..21] Filter scale configuration                                       */
      __IOM uint32_t FSC22      : 1;            /*!< [22..22] Filter scale configuration                                       */
      __IOM uint32_t FSC23      : 1;            /*!< [23..23] Filter scale configuration                                       */
      __IOM uint32_t FSC24      : 1;            /*!< [24..24] Filter scale configuration                                       */
      __IOM uint32_t FSC25      : 1;            /*!< [25..25] Filter scale configuration                                       */
      __IOM uint32_t FSC26      : 1;            /*!< [26..26] Filter scale configuration                                       */
      __IOM uint32_t FSC27      : 1;            /*!< [27..27] Filter scale configuration                                       */
            uint32_t            : 4;
    } FS1R_b;
  } ;
  __IM  uint32_t  RESERVED3;
  
  union {
    __IOM uint32_t FFA1R;                       /*!< (@ 0x00000214) filter FIFO assignment register                            */
    
    struct {
      __IOM uint32_t FFA0       : 1;            /*!< [0..0] Filter FIFO assignment for filter 0                                */
      __IOM uint32_t FFA1       : 1;            /*!< [1..1] Filter FIFO assignment for filter 1                                */
      __IOM uint32_t FFA2       : 1;            /*!< [2..2] Filter FIFO assignment for filter 2                                */
      __IOM uint32_t FFA3       : 1;            /*!< [3..3] Filter FIFO assignment for filter 3                                */
      __IOM uint32_t FFA4       : 1;            /*!< [4..4] Filter FIFO assignment for filter 4                                */
      __IOM uint32_t FFA5       : 1;            /*!< [5..5] Filter FIFO assignment for filter 5                                */
      __IOM uint32_t FFA6       : 1;            /*!< [6..6] Filter FIFO assignment for filter 6                                */
      __IOM uint32_t FFA7       : 1;            /*!< [7..7] Filter FIFO assignment for filter 7                                */
      __IOM uint32_t FFA8       : 1;            /*!< [8..8] Filter FIFO assignment for filter 8                                */
      __IOM uint32_t FFA9       : 1;            /*!< [9..9] Filter FIFO assignment for filter 9                                */
      __IOM uint32_t FFA10      : 1;            /*!< [10..10] Filter FIFO assignment for filter 10                             */
      __IOM uint32_t FFA11      : 1;            /*!< [11..11] Filter FIFO assignment for filter 11                             */
      __IOM uint32_t FFA12      : 1;            /*!< [12..12] Filter FIFO assignment for filter 12                             */
      __IOM uint32_t FFA13      : 1;            /*!< [13..13] Filter FIFO assignment for filter 13                             */
      __IOM uint32_t FFA14      : 1;            /*!< [14..14] Filter FIFO assignment for filter 14                             */
      __IOM uint32_t FFA15      : 1;            /*!< [15..15] Filter FIFO assignment for filter 15                             */
      __IOM uint32_t FFA16      : 1;            /*!< [16..16] Filter FIFO assignment for filter 16                             */
      __IOM uint32_t FFA17      : 1;            /*!< [17..17] Filter FIFO assignment for filter 17                             */
      __IOM uint32_t FFA18      : 1;            /*!< [18..18] Filter FIFO assignment for filter 18                             */
      __IOM uint32_t FFA19      : 1;            /*!< [19..19] Filter FIFO assignment for filter 19                             */
      __IOM uint32_t FFA20      : 1;            /*!< [20..20] Filter FIFO assignment for filter 20                             */
      __IOM uint32_t FFA21      : 1;            /*!< [21..21] Filter FIFO assignment for filter 21                             */
      __IOM uint32_t FFA22      : 1;            /*!< [22..22] Filter FIFO assignment for filter 22                             */
      __IOM uint32_t FFA23      : 1;            /*!< [23..23] Filter FIFO assignment for filter 23                             */
      __IOM uint32_t FFA24      : 1;            /*!< [24..24] Filter FIFO assignment for filter 24                             */
      __IOM uint32_t FFA25      : 1;            /*!< [25..25] Filter FIFO assignment for filter 25                             */
      __IOM uint32_t FFA26      : 1;            /*!< [26..26] Filter FIFO assignment for filter 26                             */
      __IOM uint32_t FFA27      : 1;            /*!< [27..27] Filter FIFO assignment for filter 27                             */
            uint32_t            : 4;
    } FFA1R_b;
  } ;
  __IM  uint32_t  RESERVED4;
  
  union {
    __IOM uint32_t FA1R;                        /*!< (@ 0x0000021C) filter activation register                                 */
    
    struct {
      __IOM uint32_t FACT0      : 1;            /*!< [0..0] Filter active                                                      */
      __IOM uint32_t FACT1      : 1;            /*!< [1..1] Filter active                                                      */
      __IOM uint32_t FACT2      : 1;            /*!< [2..2] Filter active                                                      */
      __IOM uint32_t FACT3      : 1;            /*!< [3..3] Filter active                                                      */
      __IOM uint32_t FACT4      : 1;            /*!< [4..4] Filter active                                                      */
      __IOM uint32_t FACT5      : 1;            /*!< [5..5] Filter active                                                      */
      __IOM uint32_t FACT6      : 1;            /*!< [6..6] Filter active                                                      */
      __IOM uint32_t FACT7      : 1;            /*!< [7..7] Filter active                                                      */
      __IOM uint32_t FACT8      : 1;            /*!< [8..8] Filter active                                                      */
      __IOM uint32_t FACT9      : 1;            /*!< [9..9] Filter active                                                      */
      __IOM uint32_t FACT10     : 1;            /*!< [10..10] Filter active                                                    */
      __IOM uint32_t FACT11     : 1;            /*!< [11..11] Filter active                                                    */
      __IOM uint32_t FACT12     : 1;            /*!< [12..12] Filter active                                                    */
      __IOM uint32_t FACT13     : 1;            /*!< [13..13] Filter active                                                    */
      __IOM uint32_t FACT14     : 1;            /*!< [14..14] Filter active                                                    */
      __IOM uint32_t FACT15     : 1;            /*!< [15..15] Filter active                                                    */
      __IOM uint32_t FACT16     : 1;            /*!< [16..16] Filter active                                                    */
      __IOM uint32_t FACT17     : 1;            /*!< [17..17] Filter active                                                    */
      __IOM uint32_t FACT18     : 1;            /*!< [18..18] Filter active                                                    */
      __IOM uint32_t FACT19     : 1;            /*!< [19..19] Filter active                                                    */
      __IOM uint32_t FACT20     : 1;            /*!< [20..20] Filter active                                                    */
      __IOM uint32_t FACT21     : 1;            /*!< [21..21] Filter active                                                    */
      __IOM uint32_t FACT22     : 1;            /*!< [22..22] Filter active                                                    */
      __IOM uint32_t FACT23     : 1;            /*!< [23..23] Filter active                                                    */
      __IOM uint32_t FACT24     : 1;            /*!< [24..24] Filter active                                                    */
      __IOM uint32_t FACT25     : 1;            /*!< [25..25] Filter active                                                    */
      __IOM uint32_t FACT26     : 1;            /*!< [26..26] Filter active                                                    */
      __IOM uint32_t FACT27     : 1;            /*!< [27..27] Filter active                                                    */
            uint32_t            : 4;
    } FA1R_b;
  } ;
  __IM  uint32_t  RESERVED5[8];
  
  union {
    __IOM uint32_t F0R1;                        /*!< (@ 0x00000240) Filter bank 0 register 1                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F0R1_b;
  } ;
  
  union {
    __IOM uint32_t F0R2;                        /*!< (@ 0x00000244) Filter bank 0 register 2                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F0R2_b;
  } ;
  
  union {
    __IOM uint32_t F1R1;                        /*!< (@ 0x00000248) Filter bank 1 register 1                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F1R1_b;
  } ;
  
  union {
    __IOM uint32_t F1R2;                        /*!< (@ 0x0000024C) Filter bank 1 register 2                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F1R2_b;
  } ;
  
  union {
    __IOM uint32_t F2R1;                        /*!< (@ 0x00000250) Filter bank 2 register 1                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F2R1_b;
  } ;
  
  union {
    __IOM uint32_t F2R2;                        /*!< (@ 0x00000254) Filter bank 2 register 2                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F2R2_b;
  } ;
  
  union {
    __IOM uint32_t F3R1;                        /*!< (@ 0x00000258) Filter bank 3 register 1                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F3R1_b;
  } ;
  
  union {
    __IOM uint32_t F3R2;                        /*!< (@ 0x0000025C) Filter bank 3 register 2                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F3R2_b;
  } ;
  
  union {
    __IOM uint32_t F4R1;                        /*!< (@ 0x00000260) Filter bank 4 register 1                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F4R1_b;
  } ;
  
  union {
    __IOM uint32_t F4R2;                        /*!< (@ 0x00000264) Filter bank 4 register 2                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F4R2_b;
  } ;
  
  union {
    __IOM uint32_t F5R1;                        /*!< (@ 0x00000268) Filter bank 5 register 1                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F5R1_b;
  } ;
  
  union {
    __IOM uint32_t F5R2;                        /*!< (@ 0x0000026C) Filter bank 5 register 2                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F5R2_b;
  } ;
  
  union {
    __IOM uint32_t F6R1;                        /*!< (@ 0x00000270) Filter bank 6 register 1                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F6R1_b;
  } ;
  
  union {
    __IOM uint32_t F6R2;                        /*!< (@ 0x00000274) Filter bank 6 register 2                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F6R2_b;
  } ;
  
  union {
    __IOM uint32_t F7R1;                        /*!< (@ 0x00000278) Filter bank 7 register 1                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F7R1_b;
  } ;
  
  union {
    __IOM uint32_t F7R2;                        /*!< (@ 0x0000027C) Filter bank 7 register 2                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F7R2_b;
  } ;
  
  union {
    __IOM uint32_t F8R1;                        /*!< (@ 0x00000280) Filter bank 8 register 1                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F8R1_b;
  } ;
  
  union {
    __IOM uint32_t F8R2;                        /*!< (@ 0x00000284) Filter bank 8 register 2                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F8R2_b;
  } ;
  
  union {
    __IOM uint32_t F9R1;                        /*!< (@ 0x00000288) Filter bank 9 register 1                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F9R1_b;
  } ;
  
  union {
    __IOM uint32_t F9R2;                        /*!< (@ 0x0000028C) Filter bank 9 register 2                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F9R2_b;
  } ;
  
  union {
    __IOM uint32_t F10R1;                       /*!< (@ 0x00000290) Filter bank 10 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F10R1_b;
  } ;
  
  union {
    __IOM uint32_t F10R2;                       /*!< (@ 0x00000294) Filter bank 10 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F10R2_b;
  } ;
  
  union {
    __IOM uint32_t F11R1;                       /*!< (@ 0x00000298) Filter bank 11 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F11R1_b;
  } ;
  
  union {
    __IOM uint32_t F11R2;                       /*!< (@ 0x0000029C) Filter bank 11 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F11R2_b;
  } ;
  
  union {
    __IOM uint32_t F12R1;                       /*!< (@ 0x000002A0) Filter bank 4 register 1                                   */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F12R1_b;
  } ;
  
  union {
    __IOM uint32_t F12R2;                       /*!< (@ 0x000002A4) Filter bank 12 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F12R2_b;
  } ;
  
  union {
    __IOM uint32_t F13R1;                       /*!< (@ 0x000002A8) Filter bank 13 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F13R1_b;
  } ;
  
  union {
    __IOM uint32_t F13R2;                       /*!< (@ 0x000002AC) Filter bank 13 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F13R2_b;
  } ;
  
  union {
    __IOM uint32_t F14R1;                       /*!< (@ 0x000002B0) Filter bank 14 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F14R1_b;
  } ;
  
  union {
    __IOM uint32_t F14R2;                       /*!< (@ 0x000002B4) Filter bank 14 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F14R2_b;
  } ;
  
  union {
    __IOM uint32_t F15R1;                       /*!< (@ 0x000002B8) Filter bank 15 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F15R1_b;
  } ;
  
  union {
    __IOM uint32_t F15R2;                       /*!< (@ 0x000002BC) Filter bank 15 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F15R2_b;
  } ;
  
  union {
    __IOM uint32_t F16R1;                       /*!< (@ 0x000002C0) Filter bank 16 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F16R1_b;
  } ;
  
  union {
    __IOM uint32_t F16R2;                       /*!< (@ 0x000002C4) Filter bank 16 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F16R2_b;
  } ;
  
  union {
    __IOM uint32_t F17R1;                       /*!< (@ 0x000002C8) Filter bank 17 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F17R1_b;
  } ;
  
  union {
    __IOM uint32_t F17R2;                       /*!< (@ 0x000002CC) Filter bank 17 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F17R2_b;
  } ;
  
  union {
    __IOM uint32_t F18R1;                       /*!< (@ 0x000002D0) Filter bank 18 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F18R1_b;
  } ;
  
  union {
    __IOM uint32_t F18R2;                       /*!< (@ 0x000002D4) Filter bank 18 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F18R2_b;
  } ;
  
  union {
    __IOM uint32_t F19R1;                       /*!< (@ 0x000002D8) Filter bank 19 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F19R1_b;
  } ;
  
  union {
    __IOM uint32_t F19R2;                       /*!< (@ 0x000002DC) Filter bank 19 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F19R2_b;
  } ;
  
  union {
    __IOM uint32_t F20R1;                       /*!< (@ 0x000002E0) Filter bank 20 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F20R1_b;
  } ;
  
  union {
    __IOM uint32_t F20R2;                       /*!< (@ 0x000002E4) Filter bank 20 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F20R2_b;
  } ;
  
  union {
    __IOM uint32_t F21R1;                       /*!< (@ 0x000002E8) Filter bank 21 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F21R1_b;
  } ;
  
  union {
    __IOM uint32_t F21R2;                       /*!< (@ 0x000002EC) Filter bank 21 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F21R2_b;
  } ;
  
  union {
    __IOM uint32_t F22R1;                       /*!< (@ 0x000002F0) Filter bank 22 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F22R1_b;
  } ;
  
  union {
    __IOM uint32_t F22R2;                       /*!< (@ 0x000002F4) Filter bank 22 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F22R2_b;
  } ;
  
  union {
    __IOM uint32_t F23R1;                       /*!< (@ 0x000002F8) Filter bank 23 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F23R1_b;
  } ;
  
  union {
    __IOM uint32_t F23R2;                       /*!< (@ 0x000002FC) Filter bank 23 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F23R2_b;
  } ;
  
  union {
    __IOM uint32_t F24R1;                       /*!< (@ 0x00000300) Filter bank 24 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F24R1_b;
  } ;
  
  union {
    __IOM uint32_t F24R2;                       /*!< (@ 0x00000304) Filter bank 24 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F24R2_b;
  } ;
  
  union {
    __IOM uint32_t F25R1;                       /*!< (@ 0x00000308) Filter bank 25 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F25R1_b;
  } ;
  
  union {
    __IOM uint32_t F25R2;                       /*!< (@ 0x0000030C) Filter bank 25 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F25R2_b;
  } ;
  
  union {
    __IOM uint32_t F26R1;                       /*!< (@ 0x00000310) Filter bank 26 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F26R1_b;
  } ;
  
  union {
    __IOM uint32_t F26R2;                       /*!< (@ 0x00000314) Filter bank 26 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F26R2_b;
  } ;
  
  union {
    __IOM uint32_t F27R1;                       /*!< (@ 0x00000318) Filter bank 27 register 1                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F27R1_b;
  } ;
  
  union {
    __IOM uint32_t F27R2;                       /*!< (@ 0x0000031C) Filter bank 27 register 2                                  */
    
    struct {
      __IOM uint32_t FB0        : 1;            /*!< [0..0] Filter bits                                                        */
      __IOM uint32_t FB1        : 1;            /*!< [1..1] Filter bits                                                        */
      __IOM uint32_t FB2        : 1;            /*!< [2..2] Filter bits                                                        */
      __IOM uint32_t FB3        : 1;            /*!< [3..3] Filter bits                                                        */
      __IOM uint32_t FB4        : 1;            /*!< [4..4] Filter bits                                                        */
      __IOM uint32_t FB5        : 1;            /*!< [5..5] Filter bits                                                        */
      __IOM uint32_t FB6        : 1;            /*!< [6..6] Filter bits                                                        */
      __IOM uint32_t FB7        : 1;            /*!< [7..7] Filter bits                                                        */
      __IOM uint32_t FB8        : 1;            /*!< [8..8] Filter bits                                                        */
      __IOM uint32_t FB9        : 1;            /*!< [9..9] Filter bits                                                        */
      __IOM uint32_t FB10       : 1;            /*!< [10..10] Filter bits                                                      */
      __IOM uint32_t FB11       : 1;            /*!< [11..11] Filter bits                                                      */
      __IOM uint32_t FB12       : 1;            /*!< [12..12] Filter bits                                                      */
      __IOM uint32_t FB13       : 1;            /*!< [13..13] Filter bits                                                      */
      __IOM uint32_t FB14       : 1;            /*!< [14..14] Filter bits                                                      */
      __IOM uint32_t FB15       : 1;            /*!< [15..15] Filter bits                                                      */
      __IOM uint32_t FB16       : 1;            /*!< [16..16] Filter bits                                                      */
      __IOM uint32_t FB17       : 1;            /*!< [17..17] Filter bits                                                      */
      __IOM uint32_t FB18       : 1;            /*!< [18..18] Filter bits                                                      */
      __IOM uint32_t FB19       : 1;            /*!< [19..19] Filter bits                                                      */
      __IOM uint32_t FB20       : 1;            /*!< [20..20] Filter bits                                                      */
      __IOM uint32_t FB21       : 1;            /*!< [21..21] Filter bits                                                      */
      __IOM uint32_t FB22       : 1;            /*!< [22..22] Filter bits                                                      */
      __IOM uint32_t FB23       : 1;            /*!< [23..23] Filter bits                                                      */
      __IOM uint32_t FB24       : 1;            /*!< [24..24] Filter bits                                                      */
      __IOM uint32_t FB25       : 1;            /*!< [25..25] Filter bits                                                      */
      __IOM uint32_t FB26       : 1;            /*!< [26..26] Filter bits                                                      */
      __IOM uint32_t FB27       : 1;            /*!< [27..27] Filter bits                                                      */
      __IOM uint32_t FB28       : 1;            /*!< [28..28] Filter bits                                                      */
      __IOM uint32_t FB29       : 1;            /*!< [29..29] Filter bits                                                      */
      __IOM uint32_t FB30       : 1;            /*!< [30..30] Filter bits                                                      */
      __IOM uint32_t FB31       : 1;            /*!< [31..31] Filter bits                                                      */
    } F27R2_b;
  } ;
} CAN1_Type;                                    /*!< Size = 800 (0x320)                                                        */



/* =========================================================================================================================== */
/* ================                                           CAN1                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  MCR  ========================================================== */
#define CAN1_MCR_DBF_Pos                  (16UL)                    /*!< DBF (Bit 16)                                          */
#define CAN1_MCR_DBF_Msk                  (0x10000UL)               /*!< DBF (Bitfield-Mask: 0x01)                             */
#define CAN1_MCR_RESET_Pos                (15UL)                    /*!< RESET (Bit 15)                                        */
#define CAN1_MCR_RESET_Msk                (0x8000UL)                /*!< RESET (Bitfield-Mask: 0x01)                           */
#define CAN1_MCR_TTCM_Pos                 (7UL)                     /*!< TTCM (Bit 7)                                          */
#define CAN1_MCR_TTCM_Msk                 (0x80UL)                  /*!< TTCM (Bitfield-Mask: 0x01)                            */
#define CAN1_MCR_ABOM_Pos                 (6UL)                     /*!< ABOM (Bit 6)                                          */
#define CAN1_MCR_ABOM_Msk                 (0x40UL)                  /*!< ABOM (Bitfield-Mask: 0x01)                            */
#define CAN1_MCR_AWUM_Pos                 (5UL)                     /*!< AWUM (Bit 5)                                          */
#define CAN1_MCR_AWUM_Msk                 (0x20UL)                  /*!< AWUM (Bitfield-Mask: 0x01)                            */
#define CAN1_MCR_NART_Pos                 (4UL)                     /*!< NART (Bit 4)                                          */
#define CAN1_MCR_NART_Msk                 (0x10UL)                  /*!< NART (Bitfield-Mask: 0x01)                            */
#define CAN1_MCR_RFLM_Pos                 (3UL)                     /*!< RFLM (Bit 3)                                          */
#define CAN1_MCR_RFLM_Msk                 (0x8UL)                   /*!< RFLM (Bitfield-Mask: 0x01)                            */
#define CAN1_MCR_TXFP_Pos                 (2UL)                     /*!< TXFP (Bit 2)                                          */
#define CAN1_MCR_TXFP_Msk                 (0x4UL)                   /*!< TXFP (Bitfield-Mask: 0x01)                            */
#define CAN1_MCR_SLEEP_Pos                (1UL)                     /*!< SLEEP (Bit 1)                                         */
#define CAN1_MCR_SLEEP_Msk                (0x2UL)                   /*!< SLEEP (Bitfield-Mask: 0x01)                           */
#define CAN1_MCR_INRQ_Pos                 (0UL)                     /*!< INRQ (Bit 0)                                          */
#define CAN1_MCR_INRQ_Msk                 (0x1UL)                   /*!< INRQ (Bitfield-Mask: 0x01)                            */
/* ==========================================================  MSR  ========================================================== */
#define CAN1_MSR_RX_Pos                   (11UL)                    /*!< RX (Bit 11)                                           */
#define CAN1_MSR_RX_Msk                   (0x800UL)                 /*!< RX (Bitfield-Mask: 0x01)                              */
#define CAN1_MSR_SAMP_Pos                 (10UL)                    /*!< SAMP (Bit 10)                                         */
#define CAN1_MSR_SAMP_Msk                 (0x400UL)                 /*!< SAMP (Bitfield-Mask: 0x01)                            */
#define CAN1_MSR_RXM_Pos                  (9UL)                     /*!< RXM (Bit 9)                                           */
#define CAN1_MSR_RXM_Msk                  (0x200UL)                 /*!< RXM (Bitfield-Mask: 0x01)                             */
#define CAN1_MSR_TXM_Pos                  (8UL)                     /*!< TXM (Bit 8)                                           */
#define CAN1_MSR_TXM_Msk                  (0x100UL)                 /*!< TXM (Bitfield-Mask: 0x01)                             */
#define CAN1_MSR_SLAKI_Pos                (4UL)                     /*!< SLAKI (Bit 4)                                         */
#define CAN1_MSR_SLAKI_Msk                (0x10UL)                  /*!< SLAKI (Bitfield-Mask: 0x01)                           */
#define CAN1_MSR_WKUI_Pos                 (3UL)                     /*!< WKUI (Bit 3)                                          */
#define CAN1_MSR_WKUI_Msk                 (0x8UL)                   /*!< WKUI (Bitfield-Mask: 0x01)                            */
#define CAN1_MSR_ERRI_Pos                 (2UL)                     /*!< ERRI (Bit 2)                                          */
#define CAN1_MSR_ERRI_Msk                 (0x4UL)                   /*!< ERRI (Bitfield-Mask: 0x01)                            */
#define CAN1_MSR_SLAK_Pos                 (1UL)                     /*!< SLAK (Bit 1)                                          */
#define CAN1_MSR_SLAK_Msk                 (0x2UL)                   /*!< SLAK (Bitfield-Mask: 0x01)                            */
#define CAN1_MSR_INAK_Pos                 (0UL)                     /*!< INAK (Bit 0)                                          */
#define CAN1_MSR_INAK_Msk                 (0x1UL)                   /*!< INAK (Bitfield-Mask: 0x01)                            */
/* ==========================================================  TSR  ========================================================== */
#define CAN1_TSR_LOW2_Pos                 (31UL)                    /*!< LOW2 (Bit 31)                                         */
#define CAN1_TSR_LOW2_Msk                 (0x80000000UL)            /*!< LOW2 (Bitfield-Mask: 0x01)                            */
#define CAN1_TSR_LOW1_Pos                 (30UL)                    /*!< LOW1 (Bit 30)                                         */
#define CAN1_TSR_LOW1_Msk                 (0x40000000UL)            /*!< LOW1 (Bitfield-Mask: 0x01)                            */
#define CAN1_TSR_LOW0_Pos                 (29UL)                    /*!< LOW0 (Bit 29)                                         */
#define CAN1_TSR_LOW0_Msk                 (0x20000000UL)            /*!< LOW0 (Bitfield-Mask: 0x01)                            */
#define CAN1_TSR_TME2_Pos                 (28UL)                    /*!< TME2 (Bit 28)                                         */
#define CAN1_TSR_TME2_Msk                 (0x10000000UL)            /*!< TME2 (Bitfield-Mask: 0x01)                            */
#define CAN1_TSR_TME1_Pos                 (27UL)                    /*!< TME1 (Bit 27)                                         */
#define CAN1_TSR_TME1_Msk                 (0x8000000UL)             /*!< TME1 (Bitfield-Mask: 0x01)                            */
#define CAN1_TSR_TME0_Pos                 (26UL)                    /*!< TME0 (Bit 26)                                         */
#define CAN1_TSR_TME0_Msk                 (0x4000000UL)             /*!< TME0 (Bitfield-Mask: 0x01)                            */
#define CAN1_TSR_CODE_Pos                 (24UL)                    /*!< CODE (Bit 24)                                         */
#define CAN1_TSR_CODE_Msk                 (0x3000000UL)             /*!< CODE (Bitfield-Mask: 0x03)                            */
#define CAN1_TSR_ABRQ2_Pos                (23UL)                    /*!< ABRQ2 (Bit 23)                                        */
#define CAN1_TSR_ABRQ2_Msk                (0x800000UL)              /*!< ABRQ2 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_TERR2_Pos                (19UL)                    /*!< TERR2 (Bit 19)                                        */
#define CAN1_TSR_TERR2_Msk                (0x80000UL)               /*!< TERR2 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_ALST2_Pos                (18UL)                    /*!< ALST2 (Bit 18)                                        */
#define CAN1_TSR_ALST2_Msk                (0x40000UL)               /*!< ALST2 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_TXOK2_Pos                (17UL)                    /*!< TXOK2 (Bit 17)                                        */
#define CAN1_TSR_TXOK2_Msk                (0x20000UL)               /*!< TXOK2 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_RQCP2_Pos                (16UL)                    /*!< RQCP2 (Bit 16)                                        */
#define CAN1_TSR_RQCP2_Msk                (0x10000UL)               /*!< RQCP2 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_ABRQ1_Pos                (15UL)                    /*!< ABRQ1 (Bit 15)                                        */
#define CAN1_TSR_ABRQ1_Msk                (0x8000UL)                /*!< ABRQ1 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_TERR1_Pos                (11UL)                    /*!< TERR1 (Bit 11)                                        */
#define CAN1_TSR_TERR1_Msk                (0x800UL)                 /*!< TERR1 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_ALST1_Pos                (10UL)                    /*!< ALST1 (Bit 10)                                        */
#define CAN1_TSR_ALST1_Msk                (0x400UL)                 /*!< ALST1 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_TXOK1_Pos                (9UL)                     /*!< TXOK1 (Bit 9)                                         */
#define CAN1_TSR_TXOK1_Msk                (0x200UL)                 /*!< TXOK1 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_RQCP1_Pos                (8UL)                     /*!< RQCP1 (Bit 8)                                         */
#define CAN1_TSR_RQCP1_Msk                (0x100UL)                 /*!< RQCP1 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_ABRQ0_Pos                (7UL)                     /*!< ABRQ0 (Bit 7)                                         */
#define CAN1_TSR_ABRQ0_Msk                (0x80UL)                  /*!< ABRQ0 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_TERR0_Pos                (3UL)                     /*!< TERR0 (Bit 3)                                         */
#define CAN1_TSR_TERR0_Msk                (0x8UL)                   /*!< TERR0 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_ALST0_Pos                (2UL)                     /*!< ALST0 (Bit 2)                                         */
#define CAN1_TSR_ALST0_Msk                (0x4UL)                   /*!< ALST0 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_TXOK0_Pos                (1UL)                     /*!< TXOK0 (Bit 1)                                         */
#define CAN1_TSR_TXOK0_Msk                (0x2UL)                   /*!< TXOK0 (Bitfield-Mask: 0x01)                           */
#define CAN1_TSR_RQCP0_Pos                (0UL)                     /*!< RQCP0 (Bit 0)                                         */
#define CAN1_TSR_RQCP0_Msk                (0x1UL)                   /*!< RQCP0 (Bitfield-Mask: 0x01)                           */
/* =========================================================  RF0R  ========================================================== */
#define CAN1_RF0R_RFOM0_Pos               (5UL)                     /*!< RFOM0 (Bit 5)                                         */
#define CAN1_RF0R_RFOM0_Msk               (0x20UL)                  /*!< RFOM0 (Bitfield-Mask: 0x01)                           */
#define CAN1_RF0R_FOVR0_Pos               (4UL)                     /*!< FOVR0 (Bit 4)                                         */
#define CAN1_RF0R_FOVR0_Msk               (0x10UL)                  /*!< FOVR0 (Bitfield-Mask: 0x01)                           */
#define CAN1_RF0R_FULL0_Pos               (3UL)                     /*!< FULL0 (Bit 3)                                         */
#define CAN1_RF0R_FULL0_Msk               (0x8UL)                   /*!< FULL0 (Bitfield-Mask: 0x01)                           */
#define CAN1_RF0R_FMP0_Pos                (0UL)                     /*!< FMP0 (Bit 0)                                          */
#define CAN1_RF0R_FMP0_Msk                (0x3UL)                   /*!< FMP0 (Bitfield-Mask: 0x03)                            */
/* =========================================================  RF1R  ========================================================== */
#define CAN1_RF1R_RFOM1_Pos               (5UL)                     /*!< RFOM1 (Bit 5)                                         */
#define CAN1_RF1R_RFOM1_Msk               (0x20UL)                  /*!< RFOM1 (Bitfield-Mask: 0x01)                           */
#define CAN1_RF1R_FOVR1_Pos               (4UL)                     /*!< FOVR1 (Bit 4)                                         */
#define CAN1_RF1R_FOVR1_Msk               (0x10UL)                  /*!< FOVR1 (Bitfield-Mask: 0x01)                           */
#define CAN1_RF1R_FULL1_Pos               (3UL)                     /*!< FULL1 (Bit 3)                                         */
#define CAN1_RF1R_FULL1_Msk               (0x8UL)                   /*!< FULL1 (Bitfield-Mask: 0x01)                           */
#define CAN1_RF1R_FMP1_Pos                (0UL)                     /*!< FMP1 (Bit 0)                                          */
#define CAN1_RF1R_FMP1_Msk                (0x3UL)                   /*!< FMP1 (Bitfield-Mask: 0x03)                            */
/* ==========================================================  IER  ========================================================== */
#define CAN1_IER_SLKIE_Pos                (17UL)                    /*!< SLKIE (Bit 17)                                        */
#define CAN1_IER_SLKIE_Msk                (0x20000UL)               /*!< SLKIE (Bitfield-Mask: 0x01)                           */
#define CAN1_IER_WKUIE_Pos                (16UL)                    /*!< WKUIE (Bit 16)                                        */
#define CAN1_IER_WKUIE_Msk                (0x10000UL)               /*!< WKUIE (Bitfield-Mask: 0x01)                           */
#define CAN1_IER_ERRIE_Pos                (15UL)                    /*!< ERRIE (Bit 15)                                        */
#define CAN1_IER_ERRIE_Msk                (0x8000UL)                /*!< ERRIE (Bitfield-Mask: 0x01)                           */
#define CAN1_IER_LECIE_Pos                (11UL)                    /*!< LECIE (Bit 11)                                        */
#define CAN1_IER_LECIE_Msk                (0x800UL)                 /*!< LECIE (Bitfield-Mask: 0x01)                           */
#define CAN1_IER_BOFIE_Pos                (10UL)                    /*!< BOFIE (Bit 10)                                        */
#define CAN1_IER_BOFIE_Msk                (0x400UL)                 /*!< BOFIE (Bitfield-Mask: 0x01)                           */
#define CAN1_IER_EPVIE_Pos                (9UL)                     /*!< EPVIE (Bit 9)                                         */
#define CAN1_IER_EPVIE_Msk                (0x200UL)                 /*!< EPVIE (Bitfield-Mask: 0x01)                           */
#define CAN1_IER_EWGIE_Pos                (8UL)                     /*!< EWGIE (Bit 8)                                         */
#define CAN1_IER_EWGIE_Msk                (0x100UL)                 /*!< EWGIE (Bitfield-Mask: 0x01)                           */
#define CAN1_IER_FOVIE1_Pos               (6UL)                     /*!< FOVIE1 (Bit 6)                                        */
#define CAN1_IER_FOVIE1_Msk               (0x40UL)                  /*!< FOVIE1 (Bitfield-Mask: 0x01)                          */
#define CAN1_IER_FFIE1_Pos                (5UL)                     /*!< FFIE1 (Bit 5)                                         */
#define CAN1_IER_FFIE1_Msk                (0x20UL)                  /*!< FFIE1 (Bitfield-Mask: 0x01)                           */
#define CAN1_IER_FMPIE1_Pos               (4UL)                     /*!< FMPIE1 (Bit 4)                                        */
#define CAN1_IER_FMPIE1_Msk               (0x10UL)                  /*!< FMPIE1 (Bitfield-Mask: 0x01)                          */
#define CAN1_IER_FOVIE0_Pos               (3UL)                     /*!< FOVIE0 (Bit 3)                                        */
#define CAN1_IER_FOVIE0_Msk               (0x8UL)                   /*!< FOVIE0 (Bitfield-Mask: 0x01)                          */
#define CAN1_IER_FFIE0_Pos                (2UL)                     /*!< FFIE0 (Bit 2)                                         */
#define CAN1_IER_FFIE0_Msk                (0x4UL)                   /*!< FFIE0 (Bitfield-Mask: 0x01)                           */
#define CAN1_IER_FMPIE0_Pos               (1UL)                     /*!< FMPIE0 (Bit 1)                                        */
#define CAN1_IER_FMPIE0_Msk               (0x2UL)                   /*!< FMPIE0 (Bitfield-Mask: 0x01)                          */
#define CAN1_IER_TMEIE_Pos                (0UL)                     /*!< TMEIE (Bit 0)                                         */
#define CAN1_IER_TMEIE_Msk                (0x1UL)                   /*!< TMEIE (Bitfield-Mask: 0x01)                           */
/* ==========================================================  ESR  ========================================================== */
#define CAN1_ESR_REC_Pos                  (24UL)                    /*!< REC (Bit 24)                                          */
#define CAN1_ESR_REC_Msk                  (0xff000000UL)            /*!< REC (Bitfield-Mask: 0xff)                             */
#define CAN1_ESR_TEC_Pos                  (16UL)                    /*!< TEC (Bit 16)                                          */
#define CAN1_ESR_TEC_Msk                  (0xff0000UL)              /*!< TEC (Bitfield-Mask: 0xff)                             */
#define CAN1_ESR_LEC_Pos                  (4UL)                     /*!< LEC (Bit 4)                                           */
#define CAN1_ESR_LEC_Msk                  (0x70UL)                  /*!< LEC (Bitfield-Mask: 0x07)                             */
#define CAN1_ESR_BOFF_Pos                 (2UL)                     /*!< BOFF (Bit 2)                                          */
#define CAN1_ESR_BOFF_Msk                 (0x4UL)                   /*!< BOFF (Bitfield-Mask: 0x01)                            */
#define CAN1_ESR_EPVF_Pos                 (1UL)                     /*!< EPVF (Bit 1)                                          */
#define CAN1_ESR_EPVF_Msk                 (0x2UL)                   /*!< EPVF (Bitfield-Mask: 0x01)                            */
#define CAN1_ESR_EWGF_Pos                 (0UL)                     /*!< EWGF (Bit 0)                                          */
#define CAN1_ESR_EWGF_Msk                 (0x1UL)                   /*!< EWGF (Bitfield-Mask: 0x01)                            */
/* ==========================================================  BTR  ========================================================== */
#define CAN1_BTR_SILM_Pos                 (31UL)                    /*!< SILM (Bit 31)                                         */
#define CAN1_BTR_SILM_Msk                 (0x80000000UL)            /*!< SILM (Bitfield-Mask: 0x01)                            */
#define CAN1_BTR_LBKM_Pos                 (30UL)                    /*!< LBKM (Bit 30)                                         */
#define CAN1_BTR_LBKM_Msk                 (0x40000000UL)            /*!< LBKM (Bitfield-Mask: 0x01)                            */
#define CAN1_BTR_SJW_Pos                  (24UL)                    /*!< SJW (Bit 24)                                          */
#define CAN1_BTR_SJW_Msk                  (0x3000000UL)             /*!< SJW (Bitfield-Mask: 0x03)                             */
#define CAN1_BTR_TS2_Pos                  (20UL)                    /*!< TS2 (Bit 20)                                          */
#define CAN1_BTR_TS2_Msk                  (0x700000UL)              /*!< TS2 (Bitfield-Mask: 0x07)                             */
#define CAN1_BTR_TS1_Pos                  (16UL)                    /*!< TS1 (Bit 16)                                          */
#define CAN1_BTR_TS1_Msk                  (0xf0000UL)               /*!< TS1 (Bitfield-Mask: 0x0f)                             */
#define CAN1_BTR_BRP_Pos                  (0UL)                     /*!< BRP (Bit 0)                                           */
#define CAN1_BTR_BRP_Msk                  (0x3ffUL)                 /*!< BRP (Bitfield-Mask: 0x3ff)                            */
/* =========================================================  TI0R  ========================================================== */
#define CAN1_TI0R_STID_Pos                (21UL)                    /*!< STID (Bit 21)                                         */
#define CAN1_TI0R_STID_Msk                (0xffe00000UL)            /*!< STID (Bitfield-Mask: 0x7ff)                           */
#define CAN1_TI0R_EXID_Pos                (3UL)                     /*!< EXID (Bit 3)                                          */
#define CAN1_TI0R_EXID_Msk                (0x1ffff8UL)              /*!< EXID (Bitfield-Mask: 0x3ffff)                         */
#define CAN1_TI0R_IDE_Pos                 (2UL)                     /*!< IDE (Bit 2)                                           */
#define CAN1_TI0R_IDE_Msk                 (0x4UL)                   /*!< IDE (Bitfield-Mask: 0x01)                             */
#define CAN1_TI0R_RTR_Pos                 (1UL)                     /*!< RTR (Bit 1)                                           */
#define CAN1_TI0R_RTR_Msk                 (0x2UL)                   /*!< RTR (Bitfield-Mask: 0x01)                             */
#define CAN1_TI0R_TXRQ_Pos                (0UL)                     /*!< TXRQ (Bit 0)                                          */
#define CAN1_TI0R_TXRQ_Msk                (0x1UL)                   /*!< TXRQ (Bitfield-Mask: 0x01)                            */
/* =========================================================  TDT0R  ========================================================= */
#define CAN1_TDT0R_TIME_Pos               (16UL)                    /*!< TIME (Bit 16)                                         */
#define CAN1_TDT0R_TIME_Msk               (0xffff0000UL)            /*!< TIME (Bitfield-Mask: 0xffff)                          */
#define CAN1_TDT0R_TGT_Pos                (8UL)                     /*!< TGT (Bit 8)                                           */
#define CAN1_TDT0R_TGT_Msk                (0x100UL)                 /*!< TGT (Bitfield-Mask: 0x01)                             */
#define CAN1_TDT0R_DLC_Pos                (0UL)                     /*!< DLC (Bit 0)                                           */
#define CAN1_TDT0R_DLC_Msk                (0xfUL)                   /*!< DLC (Bitfield-Mask: 0x0f)                             */
/* =========================================================  TDL0R  ========================================================= */
#define CAN1_TDL0R_DATA3_Pos              (24UL)                    /*!< DATA3 (Bit 24)                                        */
#define CAN1_TDL0R_DATA3_Msk              (0xff000000UL)            /*!< DATA3 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDL0R_DATA2_Pos              (16UL)                    /*!< DATA2 (Bit 16)                                        */
#define CAN1_TDL0R_DATA2_Msk              (0xff0000UL)              /*!< DATA2 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDL0R_DATA1_Pos              (8UL)                     /*!< DATA1 (Bit 8)                                         */
#define CAN1_TDL0R_DATA1_Msk              (0xff00UL)                /*!< DATA1 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDL0R_DATA0_Pos              (0UL)                     /*!< DATA0 (Bit 0)                                         */
#define CAN1_TDL0R_DATA0_Msk              (0xffUL)                  /*!< DATA0 (Bitfield-Mask: 0xff)                           */
/* =========================================================  TDH0R  ========================================================= */
#define CAN1_TDH0R_DATA7_Pos              (24UL)                    /*!< DATA7 (Bit 24)                                        */
#define CAN1_TDH0R_DATA7_Msk              (0xff000000UL)            /*!< DATA7 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDH0R_DATA6_Pos              (16UL)                    /*!< DATA6 (Bit 16)                                        */
#define CAN1_TDH0R_DATA6_Msk              (0xff0000UL)              /*!< DATA6 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDH0R_DATA5_Pos              (8UL)                     /*!< DATA5 (Bit 8)                                         */
#define CAN1_TDH0R_DATA5_Msk              (0xff00UL)                /*!< DATA5 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDH0R_DATA4_Pos              (0UL)                     /*!< DATA4 (Bit 0)                                         */
#define CAN1_TDH0R_DATA4_Msk              (0xffUL)                  /*!< DATA4 (Bitfield-Mask: 0xff)                           */
/* =========================================================  TI1R  ========================================================== */
#define CAN1_TI1R_STID_Pos                (21UL)                    /*!< STID (Bit 21)                                         */
#define CAN1_TI1R_STID_Msk                (0xffe00000UL)            /*!< STID (Bitfield-Mask: 0x7ff)                           */
#define CAN1_TI1R_EXID_Pos                (3UL)                     /*!< EXID (Bit 3)                                          */
#define CAN1_TI1R_EXID_Msk                (0x1ffff8UL)              /*!< EXID (Bitfield-Mask: 0x3ffff)                         */
#define CAN1_TI1R_IDE_Pos                 (2UL)                     /*!< IDE (Bit 2)                                           */
#define CAN1_TI1R_IDE_Msk                 (0x4UL)                   /*!< IDE (Bitfield-Mask: 0x01)                             */
#define CAN1_TI1R_RTR_Pos                 (1UL)                     /*!< RTR (Bit 1)                                           */
#define CAN1_TI1R_RTR_Msk                 (0x2UL)                   /*!< RTR (Bitfield-Mask: 0x01)                             */
#define CAN1_TI1R_TXRQ_Pos                (0UL)                     /*!< TXRQ (Bit 0)                                          */
#define CAN1_TI1R_TXRQ_Msk                (0x1UL)                   /*!< TXRQ (Bitfield-Mask: 0x01)                            */
/* =========================================================  TDT1R  ========================================================= */
#define CAN1_TDT1R_TIME_Pos               (16UL)                    /*!< TIME (Bit 16)                                         */
#define CAN1_TDT1R_TIME_Msk               (0xffff0000UL)            /*!< TIME (Bitfield-Mask: 0xffff)                          */
#define CAN1_TDT1R_TGT_Pos                (8UL)                     /*!< TGT (Bit 8)                                           */
#define CAN1_TDT1R_TGT_Msk                (0x100UL)                 /*!< TGT (Bitfield-Mask: 0x01)                             */
#define CAN1_TDT1R_DLC_Pos                (0UL)                     /*!< DLC (Bit 0)                                           */
#define CAN1_TDT1R_DLC_Msk                (0xfUL)                   /*!< DLC (Bitfield-Mask: 0x0f)                             */
/* =========================================================  TDL1R  ========================================================= */
#define CAN1_TDL1R_DATA3_Pos              (24UL)                    /*!< DATA3 (Bit 24)                                        */
#define CAN1_TDL1R_DATA3_Msk              (0xff000000UL)            /*!< DATA3 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDL1R_DATA2_Pos              (16UL)                    /*!< DATA2 (Bit 16)                                        */
#define CAN1_TDL1R_DATA2_Msk              (0xff0000UL)              /*!< DATA2 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDL1R_DATA1_Pos              (8UL)                     /*!< DATA1 (Bit 8)                                         */
#define CAN1_TDL1R_DATA1_Msk              (0xff00UL)                /*!< DATA1 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDL1R_DATA0_Pos              (0UL)                     /*!< DATA0 (Bit 0)                                         */
#define CAN1_TDL1R_DATA0_Msk              (0xffUL)                  /*!< DATA0 (Bitfield-Mask: 0xff)                           */
/* =========================================================  TDH1R  ========================================================= */
#define CAN1_TDH1R_DATA7_Pos              (24UL)                    /*!< DATA7 (Bit 24)                                        */
#define CAN1_TDH1R_DATA7_Msk              (0xff000000UL)            /*!< DATA7 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDH1R_DATA6_Pos              (16UL)                    /*!< DATA6 (Bit 16)                                        */
#define CAN1_TDH1R_DATA6_Msk              (0xff0000UL)              /*!< DATA6 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDH1R_DATA5_Pos              (8UL)                     /*!< DATA5 (Bit 8)                                         */
#define CAN1_TDH1R_DATA5_Msk              (0xff00UL)                /*!< DATA5 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDH1R_DATA4_Pos              (0UL)                     /*!< DATA4 (Bit 0)                                         */
#define CAN1_TDH1R_DATA4_Msk              (0xffUL)                  /*!< DATA4 (Bitfield-Mask: 0xff)                           */
/* =========================================================  TI2R  ========================================================== */
#define CAN1_TI2R_STID_Pos                (21UL)                    /*!< STID (Bit 21)                                         */
#define CAN1_TI2R_STID_Msk                (0xffe00000UL)            /*!< STID (Bitfield-Mask: 0x7ff)                           */
#define CAN1_TI2R_EXID_Pos                (3UL)                     /*!< EXID (Bit 3)                                          */
#define CAN1_TI2R_EXID_Msk                (0x1ffff8UL)              /*!< EXID (Bitfield-Mask: 0x3ffff)                         */
#define CAN1_TI2R_IDE_Pos                 (2UL)                     /*!< IDE (Bit 2)                                           */
#define CAN1_TI2R_IDE_Msk                 (0x4UL)                   /*!< IDE (Bitfield-Mask: 0x01)                             */
#define CAN1_TI2R_RTR_Pos                 (1UL)                     /*!< RTR (Bit 1)                                           */
#define CAN1_TI2R_RTR_Msk                 (0x2UL)                   /*!< RTR (Bitfield-Mask: 0x01)                             */
#define CAN1_TI2R_TXRQ_Pos                (0UL)                     /*!< TXRQ (Bit 0)                                          */
#define CAN1_TI2R_TXRQ_Msk                (0x1UL)                   /*!< TXRQ (Bitfield-Mask: 0x01)                            */
/* =========================================================  TDT2R  ========================================================= */
#define CAN1_TDT2R_TIME_Pos               (16UL)                    /*!< TIME (Bit 16)                                         */
#define CAN1_TDT2R_TIME_Msk               (0xffff0000UL)            /*!< TIME (Bitfield-Mask: 0xffff)                          */
#define CAN1_TDT2R_TGT_Pos                (8UL)                     /*!< TGT (Bit 8)                                           */
#define CAN1_TDT2R_TGT_Msk                (0x100UL)                 /*!< TGT (Bitfield-Mask: 0x01)                             */
#define CAN1_TDT2R_DLC_Pos                (0UL)                     /*!< DLC (Bit 0)                                           */
#define CAN1_TDT2R_DLC_Msk                (0xfUL)                   /*!< DLC (Bitfield-Mask: 0x0f)                             */
/* =========================================================  TDL2R  ========================================================= */
#define CAN1_TDL2R_DATA3_Pos              (24UL)                    /*!< DATA3 (Bit 24)                                        */
#define CAN1_TDL2R_DATA3_Msk              (0xff000000UL)            /*!< DATA3 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDL2R_DATA2_Pos              (16UL)                    /*!< DATA2 (Bit 16)                                        */
#define CAN1_TDL2R_DATA2_Msk              (0xff0000UL)              /*!< DATA2 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDL2R_DATA1_Pos              (8UL)                     /*!< DATA1 (Bit 8)                                         */
#define CAN1_TDL2R_DATA1_Msk              (0xff00UL)                /*!< DATA1 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDL2R_DATA0_Pos              (0UL)                     /*!< DATA0 (Bit 0)                                         */
#define CAN1_TDL2R_DATA0_Msk              (0xffUL)                  /*!< DATA0 (Bitfield-Mask: 0xff)                           */
/* =========================================================  TDH2R  ========================================================= */
#define CAN1_TDH2R_DATA7_Pos              (24UL)                    /*!< DATA7 (Bit 24)                                        */
#define CAN1_TDH2R_DATA7_Msk              (0xff000000UL)            /*!< DATA7 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDH2R_DATA6_Pos              (16UL)                    /*!< DATA6 (Bit 16)                                        */
#define CAN1_TDH2R_DATA6_Msk              (0xff0000UL)              /*!< DATA6 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDH2R_DATA5_Pos              (8UL)                     /*!< DATA5 (Bit 8)                                         */
#define CAN1_TDH2R_DATA5_Msk              (0xff00UL)                /*!< DATA5 (Bitfield-Mask: 0xff)                           */
#define CAN1_TDH2R_DATA4_Pos              (0UL)                     /*!< DATA4 (Bit 0)                                         */
#define CAN1_TDH2R_DATA4_Msk              (0xffUL)                  /*!< DATA4 (Bitfield-Mask: 0xff)                           */
/* =========================================================  RI0R  ========================================================== */
#define CAN1_RI0R_STID_Pos                (21UL)                    /*!< STID (Bit 21)                                         */
#define CAN1_RI0R_STID_Msk                (0xffe00000UL)            /*!< STID (Bitfield-Mask: 0x7ff)                           */
#define CAN1_RI0R_EXID_Pos                (3UL)                     /*!< EXID (Bit 3)                                          */
#define CAN1_RI0R_EXID_Msk                (0x1ffff8UL)              /*!< EXID (Bitfield-Mask: 0x3ffff)                         */
#define CAN1_RI0R_IDE_Pos                 (2UL)                     /*!< IDE (Bit 2)                                           */
#define CAN1_RI0R_IDE_Msk                 (0x4UL)                   /*!< IDE (Bitfield-Mask: 0x01)                             */
#define CAN1_RI0R_RTR_Pos                 (1UL)                     /*!< RTR (Bit 1)                                           */
#define CAN1_RI0R_RTR_Msk                 (0x2UL)                   /*!< RTR (Bitfield-Mask: 0x01)                             */
/* =========================================================  RDT0R  ========================================================= */
#define CAN1_RDT0R_TIME_Pos               (16UL)                    /*!< TIME (Bit 16)                                         */
#define CAN1_RDT0R_TIME_Msk               (0xffff0000UL)            /*!< TIME (Bitfield-Mask: 0xffff)                          */
#define CAN1_RDT0R_FMI_Pos                (8UL)                     /*!< FMI (Bit 8)                                           */
#define CAN1_RDT0R_FMI_Msk                (0xff00UL)                /*!< FMI (Bitfield-Mask: 0xff)                             */
#define CAN1_RDT0R_DLC_Pos                (0UL)                     /*!< DLC (Bit 0)                                           */
#define CAN1_RDT0R_DLC_Msk                (0xfUL)                   /*!< DLC (Bitfield-Mask: 0x0f)                             */
/* =========================================================  RDL0R  ========================================================= */
#define CAN1_RDL0R_DATA3_Pos              (24UL)                    /*!< DATA3 (Bit 24)                                        */
#define CAN1_RDL0R_DATA3_Msk              (0xff000000UL)            /*!< DATA3 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDL0R_DATA2_Pos              (16UL)                    /*!< DATA2 (Bit 16)                                        */
#define CAN1_RDL0R_DATA2_Msk              (0xff0000UL)              /*!< DATA2 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDL0R_DATA1_Pos              (8UL)                     /*!< DATA1 (Bit 8)                                         */
#define CAN1_RDL0R_DATA1_Msk              (0xff00UL)                /*!< DATA1 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDL0R_DATA0_Pos              (0UL)                     /*!< DATA0 (Bit 0)                                         */
#define CAN1_RDL0R_DATA0_Msk              (0xffUL)                  /*!< DATA0 (Bitfield-Mask: 0xff)                           */
/* =========================================================  RDH0R  ========================================================= */
#define CAN1_RDH0R_DATA7_Pos              (24UL)                    /*!< DATA7 (Bit 24)                                        */
#define CAN1_RDH0R_DATA7_Msk              (0xff000000UL)            /*!< DATA7 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDH0R_DATA6_Pos              (16UL)                    /*!< DATA6 (Bit 16)                                        */
#define CAN1_RDH0R_DATA6_Msk              (0xff0000UL)              /*!< DATA6 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDH0R_DATA5_Pos              (8UL)                     /*!< DATA5 (Bit 8)                                         */
#define CAN1_RDH0R_DATA5_Msk              (0xff00UL)                /*!< DATA5 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDH0R_DATA4_Pos              (0UL)                     /*!< DATA4 (Bit 0)                                         */
#define CAN1_RDH0R_DATA4_Msk              (0xffUL)                  /*!< DATA4 (Bitfield-Mask: 0xff)                           */
/* =========================================================  RI1R  ========================================================== */
#define CAN1_RI1R_STID_Pos                (21UL)                    /*!< STID (Bit 21)                                         */
#define CAN1_RI1R_STID_Msk                (0xffe00000UL)            /*!< STID (Bitfield-Mask: 0x7ff)                           */
#define CAN1_RI1R_EXID_Pos                (3UL)                     /*!< EXID (Bit 3)                                          */
#define CAN1_RI1R_EXID_Msk                (0x1ffff8UL)              /*!< EXID (Bitfield-Mask: 0x3ffff)                         */
#define CAN1_RI1R_IDE_Pos                 (2UL)                     /*!< IDE (Bit 2)                                           */
#define CAN1_RI1R_IDE_Msk                 (0x4UL)                   /*!< IDE (Bitfield-Mask: 0x01)                             */
#define CAN1_RI1R_RTR_Pos                 (1UL)                     /*!< RTR (Bit 1)                                           */
#define CAN1_RI1R_RTR_Msk                 (0x2UL)                   /*!< RTR (Bitfield-Mask: 0x01)                             */
/* =========================================================  RDT1R  ========================================================= */
#define CAN1_RDT1R_TIME_Pos               (16UL)                    /*!< TIME (Bit 16)                                         */
#define CAN1_RDT1R_TIME_Msk               (0xffff0000UL)            /*!< TIME (Bitfield-Mask: 0xffff)                          */
#define CAN1_RDT1R_FMI_Pos                (8UL)                     /*!< FMI (Bit 8)                                           */
#define CAN1_RDT1R_FMI_Msk                (0xff00UL)                /*!< FMI (Bitfield-Mask: 0xff)                             */
#define CAN1_RDT1R_DLC_Pos                (0UL)                     /*!< DLC (Bit 0)                                           */
#define CAN1_RDT1R_DLC_Msk                (0xfUL)                   /*!< DLC (Bitfield-Mask: 0x0f)                             */
/* =========================================================  RDL1R  ========================================================= */
#define CAN1_RDL1R_DATA3_Pos              (24UL)                    /*!< DATA3 (Bit 24)                                        */
#define CAN1_RDL1R_DATA3_Msk              (0xff000000UL)            /*!< DATA3 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDL1R_DATA2_Pos              (16UL)                    /*!< DATA2 (Bit 16)                                        */
#define CAN1_RDL1R_DATA2_Msk              (0xff0000UL)              /*!< DATA2 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDL1R_DATA1_Pos              (8UL)                     /*!< DATA1 (Bit 8)                                         */
#define CAN1_RDL1R_DATA1_Msk              (0xff00UL)                /*!< DATA1 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDL1R_DATA0_Pos              (0UL)                     /*!< DATA0 (Bit 0)                                         */
#define CAN1_RDL1R_DATA0_Msk              (0xffUL)                  /*!< DATA0 (Bitfield-Mask: 0xff)                           */
/* =========================================================  RDH1R  ========================================================= */
#define CAN1_RDH1R_DATA7_Pos              (24UL)                    /*!< DATA7 (Bit 24)                                        */
#define CAN1_RDH1R_DATA7_Msk              (0xff000000UL)            /*!< DATA7 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDH1R_DATA6_Pos              (16UL)                    /*!< DATA6 (Bit 16)                                        */
#define CAN1_RDH1R_DATA6_Msk              (0xff0000UL)              /*!< DATA6 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDH1R_DATA5_Pos              (8UL)                     /*!< DATA5 (Bit 8)                                         */
#define CAN1_RDH1R_DATA5_Msk              (0xff00UL)                /*!< DATA5 (Bitfield-Mask: 0xff)                           */
#define CAN1_RDH1R_DATA4_Pos              (0UL)                     /*!< DATA4 (Bit 0)                                         */
#define CAN1_RDH1R_DATA4_Msk              (0xffUL)                  /*!< DATA4 (Bitfield-Mask: 0xff)                           */
/* ==========================================================  FMR  ========================================================== */
#define CAN1_FMR_CAN2SB_Pos               (8UL)                     /*!< CAN2SB (Bit 8)                                        */
#define CAN1_FMR_CAN2SB_Msk               (0x3f00UL)                /*!< CAN2SB (Bitfield-Mask: 0x3f)                          */
#define CAN1_FMR_FINIT_Pos                (0UL)                     /*!< FINIT (Bit 0)                                         */
#define CAN1_FMR_FINIT_Msk                (0x1UL)                   /*!< FINIT (Bitfield-Mask: 0x01)                           */
/* =========================================================  FM1R  ========================================================== */
#define CAN1_FM1R_FBM0_Pos                (0UL)                     /*!< FBM0 (Bit 0)                                          */
#define CAN1_FM1R_FBM0_Msk                (0x1UL)                   /*!< FBM0 (Bitfield-Mask: 0x01)                            */
#define CAN1_FM1R_FBM1_Pos                (1UL)                     /*!< FBM1 (Bit 1)                                          */
#define CAN1_FM1R_FBM1_Msk                (0x2UL)                   /*!< FBM1 (Bitfield-Mask: 0x01)                            */
#define CAN1_FM1R_FBM2_Pos                (2UL)                     /*!< FBM2 (Bit 2)                                          */
#define CAN1_FM1R_FBM2_Msk                (0x4UL)                   /*!< FBM2 (Bitfield-Mask: 0x01)                            */
#define CAN1_FM1R_FBM3_Pos                (3UL)                     /*!< FBM3 (Bit 3)                                          */
#define CAN1_FM1R_FBM3_Msk                (0x8UL)                   /*!< FBM3 (Bitfield-Mask: 0x01)                            */
#define CAN1_FM1R_FBM4_Pos                (4UL)                     /*!< FBM4 (Bit 4)                                          */
#define CAN1_FM1R_FBM4_Msk                (0x10UL)                  /*!< FBM4 (Bitfield-Mask: 0x01)                            */
#define CAN1_FM1R_FBM5_Pos                (5UL)                     /*!< FBM5 (Bit 5)                                          */
#define CAN1_FM1R_FBM5_Msk                (0x20UL)                  /*!< FBM5 (Bitfield-Mask: 0x01)                            */
#define CAN1_FM1R_FBM6_Pos                (6UL)                     /*!< FBM6 (Bit 6)                                          */
#define CAN1_FM1R_FBM6_Msk                (0x40UL)                  /*!< FBM6 (Bitfield-Mask: 0x01)                            */
#define CAN1_FM1R_FBM7_Pos                (7UL)                     /*!< FBM7 (Bit 7)                                          */
#define CAN1_FM1R_FBM7_Msk                (0x80UL)                  /*!< FBM7 (Bitfield-Mask: 0x01)                            */
#define CAN1_FM1R_FBM8_Pos                (8UL)                     /*!< FBM8 (Bit 8)                                          */
#define CAN1_FM1R_FBM8_Msk                (0x100UL)                 /*!< FBM8 (Bitfield-Mask: 0x01)                            */
#define CAN1_FM1R_FBM9_Pos                (9UL)                     /*!< FBM9 (Bit 9)                                          */
#define CAN1_FM1R_FBM9_Msk                (0x200UL)                 /*!< FBM9 (Bitfield-Mask: 0x01)                            */
#define CAN1_FM1R_FBM10_Pos               (10UL)                    /*!< FBM10 (Bit 10)                                        */
#define CAN1_FM1R_FBM10_Msk               (0x400UL)                 /*!< FBM10 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM11_Pos               (11UL)                    /*!< FBM11 (Bit 11)                                        */
#define CAN1_FM1R_FBM11_Msk               (0x800UL)                 /*!< FBM11 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM12_Pos               (12UL)                    /*!< FBM12 (Bit 12)                                        */
#define CAN1_FM1R_FBM12_Msk               (0x1000UL)                /*!< FBM12 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM13_Pos               (13UL)                    /*!< FBM13 (Bit 13)                                        */
#define CAN1_FM1R_FBM13_Msk               (0x2000UL)                /*!< FBM13 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM14_Pos               (14UL)                    /*!< FBM14 (Bit 14)                                        */
#define CAN1_FM1R_FBM14_Msk               (0x4000UL)                /*!< FBM14 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM15_Pos               (15UL)                    /*!< FBM15 (Bit 15)                                        */
#define CAN1_FM1R_FBM15_Msk               (0x8000UL)                /*!< FBM15 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM16_Pos               (16UL)                    /*!< FBM16 (Bit 16)                                        */
#define CAN1_FM1R_FBM16_Msk               (0x10000UL)               /*!< FBM16 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM17_Pos               (17UL)                    /*!< FBM17 (Bit 17)                                        */
#define CAN1_FM1R_FBM17_Msk               (0x20000UL)               /*!< FBM17 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM18_Pos               (18UL)                    /*!< FBM18 (Bit 18)                                        */
#define CAN1_FM1R_FBM18_Msk               (0x40000UL)               /*!< FBM18 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM19_Pos               (19UL)                    /*!< FBM19 (Bit 19)                                        */
#define CAN1_FM1R_FBM19_Msk               (0x80000UL)               /*!< FBM19 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM20_Pos               (20UL)                    /*!< FBM20 (Bit 20)                                        */
#define CAN1_FM1R_FBM20_Msk               (0x100000UL)              /*!< FBM20 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM21_Pos               (21UL)                    /*!< FBM21 (Bit 21)                                        */
#define CAN1_FM1R_FBM21_Msk               (0x200000UL)              /*!< FBM21 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM22_Pos               (22UL)                    /*!< FBM22 (Bit 22)                                        */
#define CAN1_FM1R_FBM22_Msk               (0x400000UL)              /*!< FBM22 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM23_Pos               (23UL)                    /*!< FBM23 (Bit 23)                                        */
#define CAN1_FM1R_FBM23_Msk               (0x800000UL)              /*!< FBM23 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM24_Pos               (24UL)                    /*!< FBM24 (Bit 24)                                        */
#define CAN1_FM1R_FBM24_Msk               (0x1000000UL)             /*!< FBM24 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM25_Pos               (25UL)                    /*!< FBM25 (Bit 25)                                        */
#define CAN1_FM1R_FBM25_Msk               (0x2000000UL)             /*!< FBM25 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM26_Pos               (26UL)                    /*!< FBM26 (Bit 26)                                        */
#define CAN1_FM1R_FBM26_Msk               (0x4000000UL)             /*!< FBM26 (Bitfield-Mask: 0x01)                           */
#define CAN1_FM1R_FBM27_Pos               (27UL)                    /*!< FBM27 (Bit 27)                                        */
#define CAN1_FM1R_FBM27_Msk               (0x8000000UL)             /*!< FBM27 (Bitfield-Mask: 0x01)                           */
/* =========================================================  FS1R  ========================================================== */
#define CAN1_FS1R_FSC0_Pos                (0UL)                     /*!< FSC0 (Bit 0)                                          */
#define CAN1_FS1R_FSC0_Msk                (0x1UL)                   /*!< FSC0 (Bitfield-Mask: 0x01)                            */
#define CAN1_FS1R_FSC1_Pos                (1UL)                     /*!< FSC1 (Bit 1)                                          */
#define CAN1_FS1R_FSC1_Msk                (0x2UL)                   /*!< FSC1 (Bitfield-Mask: 0x01)                            */
#define CAN1_FS1R_FSC2_Pos                (2UL)                     /*!< FSC2 (Bit 2)                                          */
#define CAN1_FS1R_FSC2_Msk                (0x4UL)                   /*!< FSC2 (Bitfield-Mask: 0x01)                            */
#define CAN1_FS1R_FSC3_Pos                (3UL)                     /*!< FSC3 (Bit 3)                                          */
#define CAN1_FS1R_FSC3_Msk                (0x8UL)                   /*!< FSC3 (Bitfield-Mask: 0x01)                            */
#define CAN1_FS1R_FSC4_Pos                (4UL)                     /*!< FSC4 (Bit 4)                                          */
#define CAN1_FS1R_FSC4_Msk                (0x10UL)                  /*!< FSC4 (Bitfield-Mask: 0x01)                            */
#define CAN1_FS1R_FSC5_Pos                (5UL)                     /*!< FSC5 (Bit 5)                                          */
#define CAN1_FS1R_FSC5_Msk                (0x20UL)                  /*!< FSC5 (Bitfield-Mask: 0x01)                            */
#define CAN1_FS1R_FSC6_Pos                (6UL)                     /*!< FSC6 (Bit 6)                                          */
#define CAN1_FS1R_FSC6_Msk                (0x40UL)                  /*!< FSC6 (Bitfield-Mask: 0x01)                            */
#define CAN1_FS1R_FSC7_Pos                (7UL)                     /*!< FSC7 (Bit 7)                                          */
#define CAN1_FS1R_FSC7_Msk                (0x80UL)                  /*!< FSC7 (Bitfield-Mask: 0x01)                            */
#define CAN1_FS1R_FSC8_Pos                (8UL)                     /*!< FSC8 (Bit 8)                                          */
#define CAN1_FS1R_FSC8_Msk                (0x100UL)                 /*!< FSC8 (Bitfield-Mask: 0x01)                            */
#define CAN1_FS1R_FSC9_Pos                (9UL)                     /*!< FSC9 (Bit 9)                                          */
#define CAN1_FS1R_FSC9_Msk                (0x200UL)                 /*!< FSC9 (Bitfield-Mask: 0x01)                            */
#define CAN1_FS1R_FSC10_Pos               (10UL)                    /*!< FSC10 (Bit 10)                                        */
#define CAN1_FS1R_FSC10_Msk               (0x400UL)                 /*!< FSC10 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC11_Pos               (11UL)                    /*!< FSC11 (Bit 11)                                        */
#define CAN1_FS1R_FSC11_Msk               (0x800UL)                 /*!< FSC11 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC12_Pos               (12UL)                    /*!< FSC12 (Bit 12)                                        */
#define CAN1_FS1R_FSC12_Msk               (0x1000UL)                /*!< FSC12 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC13_Pos               (13UL)                    /*!< FSC13 (Bit 13)                                        */
#define CAN1_FS1R_FSC13_Msk               (0x2000UL)                /*!< FSC13 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC14_Pos               (14UL)                    /*!< FSC14 (Bit 14)                                        */
#define CAN1_FS1R_FSC14_Msk               (0x4000UL)                /*!< FSC14 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC15_Pos               (15UL)                    /*!< FSC15 (Bit 15)                                        */
#define CAN1_FS1R_FSC15_Msk               (0x8000UL)                /*!< FSC15 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC16_Pos               (16UL)                    /*!< FSC16 (Bit 16)                                        */
#define CAN1_FS1R_FSC16_Msk               (0x10000UL)               /*!< FSC16 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC17_Pos               (17UL)                    /*!< FSC17 (Bit 17)                                        */
#define CAN1_FS1R_FSC17_Msk               (0x20000UL)               /*!< FSC17 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC18_Pos               (18UL)                    /*!< FSC18 (Bit 18)                                        */
#define CAN1_FS1R_FSC18_Msk               (0x40000UL)               /*!< FSC18 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC19_Pos               (19UL)                    /*!< FSC19 (Bit 19)                                        */
#define CAN1_FS1R_FSC19_Msk               (0x80000UL)               /*!< FSC19 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC20_Pos               (20UL)                    /*!< FSC20 (Bit 20)                                        */
#define CAN1_FS1R_FSC20_Msk               (0x100000UL)              /*!< FSC20 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC21_Pos               (21UL)                    /*!< FSC21 (Bit 21)                                        */
#define CAN1_FS1R_FSC21_Msk               (0x200000UL)              /*!< FSC21 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC22_Pos               (22UL)                    /*!< FSC22 (Bit 22)                                        */
#define CAN1_FS1R_FSC22_Msk               (0x400000UL)              /*!< FSC22 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC23_Pos               (23UL)                    /*!< FSC23 (Bit 23)                                        */
#define CAN1_FS1R_FSC23_Msk               (0x800000UL)              /*!< FSC23 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC24_Pos               (24UL)                    /*!< FSC24 (Bit 24)                                        */
#define CAN1_FS1R_FSC24_Msk               (0x1000000UL)             /*!< FSC24 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC25_Pos               (25UL)                    /*!< FSC25 (Bit 25)                                        */
#define CAN1_FS1R_FSC25_Msk               (0x2000000UL)             /*!< FSC25 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC26_Pos               (26UL)                    /*!< FSC26 (Bit 26)                                        */
#define CAN1_FS1R_FSC26_Msk               (0x4000000UL)             /*!< FSC26 (Bitfield-Mask: 0x01)                           */
#define CAN1_FS1R_FSC27_Pos               (27UL)                    /*!< FSC27 (Bit 27)                                        */
#define CAN1_FS1R_FSC27_Msk               (0x8000000UL)             /*!< FSC27 (Bitfield-Mask: 0x01)                           */
/* =========================================================  FFA1R  ========================================================= */
#define CAN1_FFA1R_FFA0_Pos               (0UL)                     /*!< FFA0 (Bit 0)                                          */
#define CAN1_FFA1R_FFA0_Msk               (0x1UL)                   /*!< FFA0 (Bitfield-Mask: 0x01)                            */
#define CAN1_FFA1R_FFA1_Pos               (1UL)                     /*!< FFA1 (Bit 1)                                          */
#define CAN1_FFA1R_FFA1_Msk               (0x2UL)                   /*!< FFA1 (Bitfield-Mask: 0x01)                            */
#define CAN1_FFA1R_FFA2_Pos               (2UL)                     /*!< FFA2 (Bit 2)                                          */
#define CAN1_FFA1R_FFA2_Msk               (0x4UL)                   /*!< FFA2 (Bitfield-Mask: 0x01)                            */
#define CAN1_FFA1R_FFA3_Pos               (3UL)                     /*!< FFA3 (Bit 3)                                          */
#define CAN1_FFA1R_FFA3_Msk               (0x8UL)                   /*!< FFA3 (Bitfield-Mask: 0x01)                            */
#define CAN1_FFA1R_FFA4_Pos               (4UL)                     /*!< FFA4 (Bit 4)                                          */
#define CAN1_FFA1R_FFA4_Msk               (0x10UL)                  /*!< FFA4 (Bitfield-Mask: 0x01)                            */
#define CAN1_FFA1R_FFA5_Pos               (5UL)                     /*!< FFA5 (Bit 5)                                          */
#define CAN1_FFA1R_FFA5_Msk               (0x20UL)                  /*!< FFA5 (Bitfield-Mask: 0x01)                            */
#define CAN1_FFA1R_FFA6_Pos               (6UL)                     /*!< FFA6 (Bit 6)                                          */
#define CAN1_FFA1R_FFA6_Msk               (0x40UL)                  /*!< FFA6 (Bitfield-Mask: 0x01)                            */
#define CAN1_FFA1R_FFA7_Pos               (7UL)                     /*!< FFA7 (Bit 7)                                          */
#define CAN1_FFA1R_FFA7_Msk               (0x80UL)                  /*!< FFA7 (Bitfield-Mask: 0x01)                            */
#define CAN1_FFA1R_FFA8_Pos               (8UL)                     /*!< FFA8 (Bit 8)                                          */
#define CAN1_FFA1R_FFA8_Msk               (0x100UL)                 /*!< FFA8 (Bitfield-Mask: 0x01)                            */
#define CAN1_FFA1R_FFA9_Pos               (9UL)                     /*!< FFA9 (Bit 9)                                          */
#define CAN1_FFA1R_FFA9_Msk               (0x200UL)                 /*!< FFA9 (Bitfield-Mask: 0x01)                            */
#define CAN1_FFA1R_FFA10_Pos              (10UL)                    /*!< FFA10 (Bit 10)                                        */
#define CAN1_FFA1R_FFA10_Msk              (0x400UL)                 /*!< FFA10 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA11_Pos              (11UL)                    /*!< FFA11 (Bit 11)                                        */
#define CAN1_FFA1R_FFA11_Msk              (0x800UL)                 /*!< FFA11 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA12_Pos              (12UL)                    /*!< FFA12 (Bit 12)                                        */
#define CAN1_FFA1R_FFA12_Msk              (0x1000UL)                /*!< FFA12 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA13_Pos              (13UL)                    /*!< FFA13 (Bit 13)                                        */
#define CAN1_FFA1R_FFA13_Msk              (0x2000UL)                /*!< FFA13 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA14_Pos              (14UL)                    /*!< FFA14 (Bit 14)                                        */
#define CAN1_FFA1R_FFA14_Msk              (0x4000UL)                /*!< FFA14 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA15_Pos              (15UL)                    /*!< FFA15 (Bit 15)                                        */
#define CAN1_FFA1R_FFA15_Msk              (0x8000UL)                /*!< FFA15 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA16_Pos              (16UL)                    /*!< FFA16 (Bit 16)                                        */
#define CAN1_FFA1R_FFA16_Msk              (0x10000UL)               /*!< FFA16 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA17_Pos              (17UL)                    /*!< FFA17 (Bit 17)                                        */
#define CAN1_FFA1R_FFA17_Msk              (0x20000UL)               /*!< FFA17 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA18_Pos              (18UL)                    /*!< FFA18 (Bit 18)                                        */
#define CAN1_FFA1R_FFA18_Msk              (0x40000UL)               /*!< FFA18 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA19_Pos              (19UL)                    /*!< FFA19 (Bit 19)                                        */
#define CAN1_FFA1R_FFA19_Msk              (0x80000UL)               /*!< FFA19 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA20_Pos              (20UL)                    /*!< FFA20 (Bit 20)                                        */
#define CAN1_FFA1R_FFA20_Msk              (0x100000UL)              /*!< FFA20 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA21_Pos              (21UL)                    /*!< FFA21 (Bit 21)                                        */
#define CAN1_FFA1R_FFA21_Msk              (0x200000UL)              /*!< FFA21 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA22_Pos              (22UL)                    /*!< FFA22 (Bit 22)                                        */
#define CAN1_FFA1R_FFA22_Msk              (0x400000UL)              /*!< FFA22 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA23_Pos              (23UL)                    /*!< FFA23 (Bit 23)                                        */
#define CAN1_FFA1R_FFA23_Msk              (0x800000UL)              /*!< FFA23 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA24_Pos              (24UL)                    /*!< FFA24 (Bit 24)                                        */
#define CAN1_FFA1R_FFA24_Msk              (0x1000000UL)             /*!< FFA24 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA25_Pos              (25UL)                    /*!< FFA25 (Bit 25)                                        */
#define CAN1_FFA1R_FFA25_Msk              (0x2000000UL)             /*!< FFA25 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA26_Pos              (26UL)                    /*!< FFA26 (Bit 26)                                        */
#define CAN1_FFA1R_FFA26_Msk              (0x4000000UL)             /*!< FFA26 (Bitfield-Mask: 0x01)                           */
#define CAN1_FFA1R_FFA27_Pos              (27UL)                    /*!< FFA27 (Bit 27)                                        */
#define CAN1_FFA1R_FFA27_Msk              (0x8000000UL)             /*!< FFA27 (Bitfield-Mask: 0x01)                           */
/* =========================================================  FA1R  ========================================================== */
#define CAN1_FA1R_FACT0_Pos               (0UL)                     /*!< FACT0 (Bit 0)                                         */
#define CAN1_FA1R_FACT0_Msk               (0x1UL)                   /*!< FACT0 (Bitfield-Mask: 0x01)                           */
#define CAN1_FA1R_FACT1_Pos               (1UL)                     /*!< FACT1 (Bit 1)                                         */
#define CAN1_FA1R_FACT1_Msk               (0x2UL)                   /*!< FACT1 (Bitfield-Mask: 0x01)                           */
#define CAN1_FA1R_FACT2_Pos               (2UL)                     /*!< FACT2 (Bit 2)                                         */
#define CAN1_FA1R_FACT2_Msk               (0x4UL)                   /*!< FACT2 (Bitfield-Mask: 0x01)                           */
#define CAN1_FA1R_FACT3_Pos               (3UL)                     /*!< FACT3 (Bit 3)                                         */
#define CAN1_FA1R_FACT3_Msk               (0x8UL)                   /*!< FACT3 (Bitfield-Mask: 0x01)                           */
#define CAN1_FA1R_FACT4_Pos               (4UL)                     /*!< FACT4 (Bit 4)                                         */
#define CAN1_FA1R_FACT4_Msk               (0x10UL)                  /*!< FACT4 (Bitfield-Mask: 0x01)                           */
#define CAN1_FA1R_FACT5_Pos               (5UL)                     /*!< FACT5 (Bit 5)                                         */
#define CAN1_FA1R_FACT5_Msk               (0x20UL)                  /*!< FACT5 (Bitfield-Mask: 0x01)                           */
#define CAN1_FA1R_FACT6_Pos               (6UL)                     /*!< FACT6 (Bit 6)                                         */
#define CAN1_FA1R_FACT6_Msk               (0x40UL)                  /*!< FACT6 (Bitfield-Mask: 0x01)                           */
#define CAN1_FA1R_FACT7_Pos               (7UL)                     /*!< FACT7 (Bit 7)                                         */
#define CAN1_FA1R_FACT7_Msk               (0x80UL)                  /*!< FACT7 (Bitfield-Mask: 0x01)                           */
#define CAN1_FA1R_FACT8_Pos               (8UL)                     /*!< FACT8 (Bit 8)                                         */
#define CAN1_FA1R_FACT8_Msk               (0x100UL)                 /*!< FACT8 (Bitfield-Mask: 0x01)                           */
#define CAN1_FA1R_FACT9_Pos               (9UL)                     /*!< FACT9 (Bit 9)                                         */
#define CAN1_FA1R_FACT9_Msk               (0x200UL)                 /*!< FACT9 (Bitfield-Mask: 0x01)                           */
#define CAN1_FA1R_FACT10_Pos              (10UL)                    /*!< FACT10 (Bit 10)                                       */
#define CAN1_FA1R_FACT10_Msk              (0x400UL)                 /*!< FACT10 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT11_Pos              (11UL)                    /*!< FACT11 (Bit 11)                                       */
#define CAN1_FA1R_FACT11_Msk              (0x800UL)                 /*!< FACT11 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT12_Pos              (12UL)                    /*!< FACT12 (Bit 12)                                       */
#define CAN1_FA1R_FACT12_Msk              (0x1000UL)                /*!< FACT12 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT13_Pos              (13UL)                    /*!< FACT13 (Bit 13)                                       */
#define CAN1_FA1R_FACT13_Msk              (0x2000UL)                /*!< FACT13 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT14_Pos              (14UL)                    /*!< FACT14 (Bit 14)                                       */
#define CAN1_FA1R_FACT14_Msk              (0x4000UL)                /*!< FACT14 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT15_Pos              (15UL)                    /*!< FACT15 (Bit 15)                                       */
#define CAN1_FA1R_FACT15_Msk              (0x8000UL)                /*!< FACT15 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT16_Pos              (16UL)                    /*!< FACT16 (Bit 16)                                       */
#define CAN1_FA1R_FACT16_Msk              (0x10000UL)               /*!< FACT16 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT17_Pos              (17UL)                    /*!< FACT17 (Bit 17)                                       */
#define CAN1_FA1R_FACT17_Msk              (0x20000UL)               /*!< FACT17 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT18_Pos              (18UL)                    /*!< FACT18 (Bit 18)                                       */
#define CAN1_FA1R_FACT18_Msk              (0x40000UL)               /*!< FACT18 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT19_Pos              (19UL)                    /*!< FACT19 (Bit 19)                                       */
#define CAN1_FA1R_FACT19_Msk              (0x80000UL)               /*!< FACT19 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT20_Pos              (20UL)                    /*!< FACT20 (Bit 20)                                       */
#define CAN1_FA1R_FACT20_Msk              (0x100000UL)              /*!< FACT20 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT21_Pos              (21UL)                    /*!< FACT21 (Bit 21)                                       */
#define CAN1_FA1R_FACT21_Msk              (0x200000UL)              /*!< FACT21 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT22_Pos              (22UL)                    /*!< FACT22 (Bit 22)                                       */
#define CAN1_FA1R_FACT22_Msk              (0x400000UL)              /*!< FACT22 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT23_Pos              (23UL)                    /*!< FACT23 (Bit 23)                                       */
#define CAN1_FA1R_FACT23_Msk              (0x800000UL)              /*!< FACT23 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT24_Pos              (24UL)                    /*!< FACT24 (Bit 24)                                       */
#define CAN1_FA1R_FACT24_Msk              (0x1000000UL)             /*!< FACT24 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT25_Pos              (25UL)                    /*!< FACT25 (Bit 25)                                       */
#define CAN1_FA1R_FACT25_Msk              (0x2000000UL)             /*!< FACT25 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT26_Pos              (26UL)                    /*!< FACT26 (Bit 26)                                       */
#define CAN1_FA1R_FACT26_Msk              (0x4000000UL)             /*!< FACT26 (Bitfield-Mask: 0x01)                          */
#define CAN1_FA1R_FACT27_Pos              (27UL)                    /*!< FACT27 (Bit 27)                                       */
#define CAN1_FA1R_FACT27_Msk              (0x8000000UL)             /*!< FACT27 (Bitfield-Mask: 0x01)                          */
/* =========================================================  F0R1  ========================================================== */
#define CAN1_F0R1_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F0R1_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R1_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F0R1_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R1_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F0R1_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R1_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F0R1_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R1_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F0R1_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R1_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F0R1_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R1_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F0R1_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R1_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F0R1_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R1_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F0R1_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R1_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F0R1_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R1_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F0R1_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F0R1_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F0R1_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F0R1_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F0R1_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F0R1_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F0R1_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F0R1_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F0R1_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F0R1_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F0R1_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F0R1_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F0R1_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F0R1_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F0R1_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F0R1_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F0R1_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F0R1_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F0R1_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F0R1_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F0R1_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R1_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F0R1_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F0R2  ========================================================== */
#define CAN1_F0R2_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F0R2_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R2_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F0R2_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R2_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F0R2_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R2_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F0R2_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R2_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F0R2_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R2_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F0R2_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R2_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F0R2_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R2_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F0R2_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R2_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F0R2_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R2_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F0R2_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F0R2_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F0R2_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F0R2_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F0R2_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F0R2_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F0R2_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F0R2_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F0R2_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F0R2_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F0R2_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F0R2_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F0R2_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F0R2_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F0R2_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F0R2_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F0R2_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F0R2_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F0R2_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F0R2_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F0R2_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F0R2_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F0R2_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F0R2_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F0R2_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F1R1  ========================================================== */
#define CAN1_F1R1_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F1R1_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R1_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F1R1_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R1_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F1R1_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R1_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F1R1_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R1_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F1R1_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R1_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F1R1_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R1_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F1R1_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R1_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F1R1_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R1_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F1R1_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R1_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F1R1_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R1_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F1R1_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F1R1_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F1R1_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F1R1_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F1R1_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F1R1_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F1R1_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F1R1_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F1R1_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F1R1_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F1R1_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F1R1_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F1R1_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F1R1_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F1R1_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F1R1_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F1R1_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F1R1_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F1R1_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F1R1_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F1R1_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R1_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F1R1_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F1R2  ========================================================== */
#define CAN1_F1R2_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F1R2_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R2_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F1R2_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R2_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F1R2_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R2_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F1R2_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R2_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F1R2_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R2_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F1R2_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R2_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F1R2_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R2_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F1R2_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R2_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F1R2_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R2_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F1R2_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F1R2_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F1R2_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F1R2_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F1R2_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F1R2_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F1R2_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F1R2_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F1R2_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F1R2_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F1R2_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F1R2_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F1R2_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F1R2_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F1R2_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F1R2_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F1R2_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F1R2_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F1R2_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F1R2_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F1R2_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F1R2_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F1R2_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F1R2_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F1R2_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F2R1  ========================================================== */
#define CAN1_F2R1_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F2R1_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R1_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F2R1_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R1_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F2R1_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R1_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F2R1_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R1_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F2R1_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R1_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F2R1_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R1_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F2R1_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R1_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F2R1_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R1_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F2R1_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R1_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F2R1_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R1_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F2R1_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F2R1_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F2R1_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F2R1_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F2R1_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F2R1_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F2R1_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F2R1_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F2R1_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F2R1_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F2R1_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F2R1_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F2R1_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F2R1_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F2R1_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F2R1_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F2R1_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F2R1_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F2R1_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F2R1_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F2R1_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R1_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F2R1_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F2R2  ========================================================== */
#define CAN1_F2R2_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F2R2_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R2_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F2R2_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R2_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F2R2_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R2_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F2R2_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R2_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F2R2_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R2_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F2R2_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R2_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F2R2_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R2_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F2R2_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R2_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F2R2_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R2_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F2R2_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F2R2_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F2R2_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F2R2_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F2R2_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F2R2_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F2R2_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F2R2_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F2R2_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F2R2_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F2R2_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F2R2_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F2R2_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F2R2_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F2R2_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F2R2_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F2R2_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F2R2_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F2R2_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F2R2_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F2R2_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F2R2_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F2R2_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F2R2_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F2R2_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F3R1  ========================================================== */
#define CAN1_F3R1_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F3R1_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R1_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F3R1_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R1_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F3R1_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R1_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F3R1_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R1_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F3R1_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R1_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F3R1_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R1_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F3R1_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R1_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F3R1_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R1_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F3R1_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R1_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F3R1_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R1_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F3R1_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F3R1_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F3R1_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F3R1_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F3R1_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F3R1_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F3R1_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F3R1_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F3R1_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F3R1_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F3R1_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F3R1_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F3R1_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F3R1_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F3R1_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F3R1_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F3R1_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F3R1_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F3R1_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F3R1_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F3R1_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R1_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F3R1_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F3R2  ========================================================== */
#define CAN1_F3R2_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F3R2_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R2_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F3R2_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R2_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F3R2_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R2_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F3R2_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R2_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F3R2_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R2_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F3R2_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R2_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F3R2_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R2_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F3R2_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R2_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F3R2_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R2_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F3R2_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F3R2_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F3R2_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F3R2_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F3R2_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F3R2_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F3R2_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F3R2_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F3R2_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F3R2_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F3R2_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F3R2_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F3R2_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F3R2_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F3R2_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F3R2_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F3R2_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F3R2_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F3R2_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F3R2_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F3R2_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F3R2_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F3R2_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F3R2_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F3R2_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F4R1  ========================================================== */
#define CAN1_F4R1_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F4R1_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R1_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F4R1_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R1_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F4R1_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R1_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F4R1_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R1_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F4R1_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R1_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F4R1_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R1_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F4R1_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R1_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F4R1_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R1_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F4R1_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R1_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F4R1_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R1_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F4R1_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F4R1_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F4R1_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F4R1_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F4R1_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F4R1_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F4R1_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F4R1_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F4R1_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F4R1_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F4R1_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F4R1_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F4R1_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F4R1_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F4R1_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F4R1_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F4R1_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F4R1_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F4R1_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F4R1_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F4R1_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R1_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F4R1_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F4R2  ========================================================== */
#define CAN1_F4R2_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F4R2_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R2_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F4R2_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R2_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F4R2_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R2_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F4R2_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R2_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F4R2_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R2_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F4R2_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R2_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F4R2_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R2_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F4R2_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R2_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F4R2_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R2_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F4R2_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F4R2_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F4R2_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F4R2_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F4R2_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F4R2_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F4R2_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F4R2_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F4R2_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F4R2_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F4R2_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F4R2_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F4R2_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F4R2_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F4R2_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F4R2_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F4R2_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F4R2_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F4R2_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F4R2_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F4R2_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F4R2_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F4R2_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F4R2_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F4R2_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F5R1  ========================================================== */
#define CAN1_F5R1_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F5R1_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R1_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F5R1_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R1_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F5R1_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R1_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F5R1_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R1_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F5R1_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R1_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F5R1_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R1_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F5R1_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R1_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F5R1_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R1_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F5R1_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R1_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F5R1_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R1_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F5R1_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F5R1_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F5R1_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F5R1_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F5R1_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F5R1_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F5R1_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F5R1_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F5R1_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F5R1_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F5R1_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F5R1_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F5R1_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F5R1_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F5R1_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F5R1_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F5R1_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F5R1_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F5R1_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F5R1_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F5R1_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R1_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F5R1_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F5R2  ========================================================== */
#define CAN1_F5R2_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F5R2_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R2_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F5R2_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R2_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F5R2_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R2_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F5R2_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R2_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F5R2_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R2_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F5R2_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R2_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F5R2_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R2_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F5R2_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R2_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F5R2_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R2_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F5R2_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F5R2_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F5R2_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F5R2_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F5R2_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F5R2_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F5R2_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F5R2_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F5R2_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F5R2_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F5R2_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F5R2_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F5R2_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F5R2_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F5R2_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F5R2_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F5R2_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F5R2_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F5R2_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F5R2_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F5R2_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F5R2_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F5R2_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F5R2_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F5R2_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F6R1  ========================================================== */
#define CAN1_F6R1_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F6R1_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R1_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F6R1_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R1_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F6R1_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R1_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F6R1_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R1_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F6R1_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R1_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F6R1_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R1_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F6R1_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R1_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F6R1_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R1_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F6R1_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R1_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F6R1_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R1_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F6R1_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F6R1_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F6R1_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F6R1_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F6R1_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F6R1_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F6R1_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F6R1_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F6R1_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F6R1_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F6R1_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F6R1_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F6R1_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F6R1_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F6R1_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F6R1_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F6R1_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F6R1_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F6R1_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F6R1_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F6R1_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R1_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F6R1_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F6R2  ========================================================== */
#define CAN1_F6R2_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F6R2_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R2_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F6R2_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R2_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F6R2_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R2_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F6R2_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R2_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F6R2_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R2_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F6R2_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R2_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F6R2_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R2_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F6R2_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R2_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F6R2_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R2_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F6R2_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F6R2_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F6R2_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F6R2_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F6R2_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F6R2_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F6R2_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F6R2_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F6R2_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F6R2_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F6R2_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F6R2_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F6R2_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F6R2_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F6R2_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F6R2_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F6R2_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F6R2_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F6R2_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F6R2_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F6R2_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F6R2_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F6R2_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F6R2_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F6R2_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F7R1  ========================================================== */
#define CAN1_F7R1_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F7R1_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R1_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F7R1_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R1_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F7R1_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R1_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F7R1_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R1_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F7R1_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R1_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F7R1_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R1_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F7R1_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R1_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F7R1_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R1_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F7R1_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R1_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F7R1_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R1_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F7R1_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F7R1_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F7R1_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F7R1_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F7R1_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F7R1_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F7R1_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F7R1_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F7R1_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F7R1_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F7R1_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F7R1_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F7R1_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F7R1_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F7R1_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F7R1_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F7R1_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F7R1_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F7R1_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F7R1_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F7R1_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R1_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F7R1_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F7R2  ========================================================== */
#define CAN1_F7R2_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F7R2_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R2_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F7R2_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R2_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F7R2_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R2_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F7R2_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R2_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F7R2_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R2_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F7R2_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R2_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F7R2_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R2_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F7R2_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R2_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F7R2_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R2_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F7R2_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F7R2_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F7R2_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F7R2_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F7R2_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F7R2_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F7R2_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F7R2_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F7R2_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F7R2_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F7R2_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F7R2_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F7R2_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F7R2_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F7R2_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F7R2_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F7R2_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F7R2_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F7R2_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F7R2_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F7R2_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F7R2_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F7R2_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F7R2_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F7R2_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F8R1  ========================================================== */
#define CAN1_F8R1_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F8R1_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R1_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F8R1_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R1_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F8R1_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R1_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F8R1_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R1_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F8R1_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R1_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F8R1_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R1_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F8R1_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R1_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F8R1_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R1_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F8R1_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R1_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F8R1_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R1_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F8R1_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F8R1_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F8R1_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F8R1_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F8R1_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F8R1_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F8R1_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F8R1_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F8R1_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F8R1_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F8R1_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F8R1_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F8R1_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F8R1_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F8R1_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F8R1_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F8R1_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F8R1_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F8R1_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F8R1_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F8R1_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R1_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F8R1_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F8R2  ========================================================== */
#define CAN1_F8R2_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F8R2_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R2_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F8R2_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R2_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F8R2_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R2_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F8R2_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R2_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F8R2_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R2_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F8R2_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R2_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F8R2_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R2_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F8R2_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R2_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F8R2_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R2_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F8R2_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F8R2_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F8R2_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F8R2_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F8R2_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F8R2_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F8R2_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F8R2_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F8R2_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F8R2_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F8R2_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F8R2_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F8R2_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F8R2_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F8R2_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F8R2_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F8R2_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F8R2_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F8R2_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F8R2_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F8R2_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F8R2_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F8R2_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F8R2_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F8R2_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F9R1  ========================================================== */
#define CAN1_F9R1_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F9R1_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R1_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F9R1_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R1_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F9R1_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R1_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F9R1_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R1_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F9R1_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R1_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F9R1_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R1_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F9R1_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R1_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F9R1_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R1_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F9R1_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R1_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F9R1_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R1_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F9R1_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F9R1_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F9R1_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F9R1_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F9R1_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F9R1_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F9R1_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F9R1_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F9R1_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F9R1_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F9R1_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F9R1_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F9R1_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F9R1_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F9R1_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F9R1_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F9R1_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F9R1_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F9R1_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F9R1_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F9R1_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R1_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F9R1_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F9R2  ========================================================== */
#define CAN1_F9R2_FB0_Pos                 (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F9R2_FB0_Msk                 (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R2_FB1_Pos                 (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F9R2_FB1_Msk                 (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R2_FB2_Pos                 (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F9R2_FB2_Msk                 (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R2_FB3_Pos                 (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F9R2_FB3_Msk                 (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R2_FB4_Pos                 (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F9R2_FB4_Msk                 (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R2_FB5_Pos                 (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F9R2_FB5_Msk                 (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R2_FB6_Pos                 (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F9R2_FB6_Msk                 (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R2_FB7_Pos                 (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F9R2_FB7_Msk                 (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R2_FB8_Pos                 (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F9R2_FB8_Msk                 (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R2_FB9_Pos                 (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F9R2_FB9_Msk                 (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F9R2_FB10_Pos                (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F9R2_FB10_Msk                (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB11_Pos                (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F9R2_FB11_Msk                (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB12_Pos                (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F9R2_FB12_Msk                (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB13_Pos                (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F9R2_FB13_Msk                (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB14_Pos                (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F9R2_FB14_Msk                (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB15_Pos                (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F9R2_FB15_Msk                (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB16_Pos                (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F9R2_FB16_Msk                (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB17_Pos                (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F9R2_FB17_Msk                (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB18_Pos                (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F9R2_FB18_Msk                (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB19_Pos                (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F9R2_FB19_Msk                (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB20_Pos                (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F9R2_FB20_Msk                (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB21_Pos                (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F9R2_FB21_Msk                (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB22_Pos                (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F9R2_FB22_Msk                (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB23_Pos                (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F9R2_FB23_Msk                (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB24_Pos                (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F9R2_FB24_Msk                (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB25_Pos                (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F9R2_FB25_Msk                (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB26_Pos                (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F9R2_FB26_Msk                (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB27_Pos                (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F9R2_FB27_Msk                (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB28_Pos                (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F9R2_FB28_Msk                (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB29_Pos                (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F9R2_FB29_Msk                (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB30_Pos                (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F9R2_FB30_Msk                (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F9R2_FB31_Pos                (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F9R2_FB31_Msk                (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F10R1  ========================================================= */
#define CAN1_F10R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F10R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F10R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F10R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F10R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F10R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F10R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F10R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F10R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F10R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F10R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F10R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F10R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F10R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F10R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F10R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F10R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F10R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F10R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F10R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F10R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F10R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F10R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F10R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F10R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F10R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F10R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F10R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F10R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F10R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F10R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F10R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F10R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F10R2  ========================================================= */
#define CAN1_F10R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F10R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F10R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F10R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F10R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F10R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F10R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F10R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F10R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F10R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F10R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F10R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F10R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F10R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F10R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F10R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F10R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F10R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F10R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F10R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F10R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F10R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F10R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F10R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F10R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F10R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F10R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F10R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F10R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F10R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F10R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F10R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F10R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F10R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F10R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F11R1  ========================================================= */
#define CAN1_F11R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F11R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F11R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F11R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F11R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F11R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F11R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F11R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F11R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F11R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F11R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F11R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F11R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F11R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F11R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F11R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F11R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F11R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F11R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F11R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F11R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F11R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F11R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F11R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F11R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F11R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F11R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F11R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F11R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F11R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F11R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F11R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F11R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F11R2  ========================================================= */
#define CAN1_F11R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F11R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F11R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F11R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F11R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F11R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F11R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F11R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F11R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F11R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F11R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F11R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F11R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F11R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F11R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F11R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F11R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F11R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F11R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F11R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F11R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F11R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F11R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F11R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F11R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F11R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F11R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F11R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F11R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F11R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F11R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F11R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F11R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F11R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F11R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F12R1  ========================================================= */
#define CAN1_F12R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F12R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F12R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F12R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F12R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F12R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F12R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F12R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F12R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F12R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F12R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F12R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F12R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F12R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F12R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F12R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F12R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F12R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F12R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F12R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F12R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F12R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F12R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F12R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F12R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F12R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F12R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F12R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F12R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F12R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F12R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F12R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F12R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F12R2  ========================================================= */
#define CAN1_F12R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F12R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F12R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F12R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F12R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F12R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F12R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F12R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F12R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F12R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F12R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F12R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F12R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F12R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F12R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F12R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F12R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F12R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F12R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F12R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F12R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F12R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F12R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F12R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F12R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F12R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F12R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F12R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F12R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F12R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F12R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F12R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F12R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F12R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F12R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F13R1  ========================================================= */
#define CAN1_F13R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F13R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F13R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F13R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F13R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F13R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F13R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F13R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F13R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F13R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F13R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F13R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F13R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F13R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F13R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F13R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F13R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F13R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F13R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F13R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F13R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F13R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F13R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F13R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F13R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F13R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F13R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F13R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F13R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F13R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F13R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F13R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F13R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F13R2  ========================================================= */
#define CAN1_F13R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F13R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F13R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F13R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F13R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F13R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F13R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F13R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F13R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F13R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F13R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F13R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F13R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F13R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F13R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F13R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F13R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F13R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F13R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F13R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F13R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F13R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F13R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F13R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F13R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F13R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F13R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F13R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F13R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F13R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F13R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F13R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F13R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F13R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F13R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F14R1  ========================================================= */
#define CAN1_F14R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F14R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F14R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F14R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F14R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F14R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F14R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F14R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F14R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F14R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F14R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F14R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F14R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F14R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F14R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F14R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F14R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F14R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F14R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F14R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F14R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F14R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F14R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F14R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F14R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F14R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F14R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F14R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F14R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F14R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F14R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F14R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F14R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F14R2  ========================================================= */
#define CAN1_F14R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F14R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F14R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F14R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F14R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F14R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F14R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F14R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F14R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F14R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F14R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F14R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F14R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F14R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F14R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F14R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F14R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F14R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F14R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F14R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F14R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F14R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F14R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F14R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F14R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F14R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F14R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F14R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F14R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F14R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F14R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F14R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F14R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F14R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F14R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F15R1  ========================================================= */
#define CAN1_F15R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F15R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F15R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F15R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F15R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F15R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F15R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F15R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F15R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F15R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F15R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F15R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F15R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F15R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F15R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F15R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F15R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F15R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F15R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F15R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F15R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F15R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F15R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F15R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F15R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F15R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F15R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F15R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F15R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F15R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F15R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F15R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F15R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F15R2  ========================================================= */
#define CAN1_F15R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F15R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F15R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F15R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F15R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F15R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F15R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F15R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F15R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F15R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F15R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F15R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F15R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F15R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F15R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F15R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F15R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F15R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F15R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F15R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F15R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F15R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F15R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F15R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F15R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F15R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F15R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F15R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F15R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F15R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F15R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F15R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F15R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F15R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F15R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F16R1  ========================================================= */
#define CAN1_F16R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F16R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F16R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F16R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F16R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F16R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F16R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F16R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F16R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F16R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F16R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F16R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F16R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F16R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F16R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F16R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F16R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F16R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F16R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F16R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F16R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F16R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F16R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F16R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F16R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F16R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F16R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F16R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F16R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F16R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F16R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F16R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F16R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F16R2  ========================================================= */
#define CAN1_F16R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F16R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F16R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F16R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F16R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F16R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F16R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F16R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F16R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F16R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F16R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F16R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F16R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F16R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F16R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F16R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F16R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F16R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F16R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F16R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F16R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F16R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F16R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F16R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F16R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F16R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F16R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F16R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F16R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F16R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F16R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F16R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F16R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F16R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F16R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F17R1  ========================================================= */
#define CAN1_F17R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F17R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F17R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F17R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F17R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F17R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F17R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F17R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F17R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F17R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F17R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F17R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F17R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F17R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F17R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F17R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F17R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F17R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F17R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F17R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F17R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F17R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F17R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F17R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F17R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F17R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F17R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F17R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F17R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F17R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F17R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F17R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F17R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F17R2  ========================================================= */
#define CAN1_F17R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F17R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F17R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F17R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F17R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F17R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F17R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F17R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F17R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F17R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F17R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F17R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F17R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F17R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F17R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F17R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F17R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F17R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F17R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F17R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F17R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F17R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F17R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F17R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F17R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F17R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F17R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F17R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F17R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F17R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F17R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F17R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F17R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F17R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F17R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F18R1  ========================================================= */
#define CAN1_F18R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F18R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F18R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F18R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F18R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F18R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F18R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F18R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F18R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F18R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F18R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F18R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F18R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F18R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F18R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F18R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F18R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F18R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F18R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F18R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F18R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F18R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F18R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F18R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F18R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F18R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F18R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F18R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F18R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F18R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F18R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F18R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F18R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F18R2  ========================================================= */
#define CAN1_F18R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F18R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F18R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F18R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F18R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F18R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F18R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F18R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F18R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F18R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F18R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F18R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F18R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F18R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F18R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F18R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F18R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F18R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F18R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F18R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F18R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F18R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F18R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F18R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F18R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F18R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F18R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F18R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F18R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F18R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F18R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F18R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F18R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F18R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F18R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F19R1  ========================================================= */
#define CAN1_F19R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F19R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F19R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F19R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F19R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F19R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F19R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F19R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F19R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F19R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F19R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F19R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F19R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F19R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F19R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F19R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F19R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F19R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F19R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F19R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F19R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F19R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F19R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F19R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F19R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F19R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F19R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F19R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F19R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F19R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F19R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F19R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F19R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F19R2  ========================================================= */
#define CAN1_F19R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F19R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F19R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F19R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F19R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F19R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F19R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F19R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F19R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F19R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F19R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F19R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F19R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F19R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F19R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F19R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F19R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F19R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F19R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F19R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F19R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F19R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F19R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F19R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F19R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F19R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F19R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F19R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F19R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F19R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F19R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F19R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F19R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F19R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F19R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F20R1  ========================================================= */
#define CAN1_F20R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F20R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F20R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F20R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F20R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F20R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F20R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F20R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F20R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F20R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F20R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F20R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F20R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F20R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F20R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F20R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F20R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F20R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F20R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F20R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F20R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F20R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F20R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F20R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F20R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F20R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F20R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F20R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F20R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F20R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F20R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F20R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F20R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F20R2  ========================================================= */
#define CAN1_F20R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F20R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F20R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F20R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F20R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F20R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F20R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F20R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F20R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F20R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F20R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F20R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F20R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F20R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F20R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F20R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F20R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F20R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F20R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F20R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F20R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F20R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F20R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F20R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F20R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F20R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F20R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F20R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F20R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F20R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F20R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F20R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F20R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F20R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F20R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F21R1  ========================================================= */
#define CAN1_F21R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F21R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F21R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F21R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F21R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F21R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F21R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F21R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F21R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F21R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F21R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F21R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F21R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F21R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F21R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F21R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F21R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F21R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F21R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F21R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F21R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F21R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F21R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F21R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F21R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F21R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F21R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F21R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F21R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F21R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F21R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F21R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F21R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F21R2  ========================================================= */
#define CAN1_F21R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F21R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F21R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F21R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F21R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F21R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F21R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F21R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F21R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F21R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F21R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F21R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F21R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F21R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F21R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F21R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F21R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F21R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F21R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F21R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F21R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F21R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F21R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F21R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F21R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F21R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F21R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F21R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F21R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F21R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F21R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F21R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F21R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F21R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F21R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F22R1  ========================================================= */
#define CAN1_F22R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F22R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F22R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F22R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F22R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F22R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F22R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F22R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F22R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F22R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F22R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F22R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F22R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F22R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F22R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F22R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F22R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F22R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F22R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F22R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F22R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F22R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F22R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F22R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F22R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F22R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F22R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F22R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F22R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F22R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F22R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F22R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F22R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F22R2  ========================================================= */
#define CAN1_F22R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F22R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F22R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F22R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F22R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F22R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F22R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F22R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F22R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F22R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F22R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F22R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F22R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F22R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F22R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F22R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F22R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F22R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F22R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F22R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F22R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F22R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F22R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F22R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F22R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F22R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F22R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F22R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F22R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F22R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F22R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F22R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F22R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F22R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F22R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F23R1  ========================================================= */
#define CAN1_F23R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F23R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F23R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F23R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F23R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F23R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F23R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F23R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F23R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F23R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F23R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F23R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F23R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F23R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F23R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F23R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F23R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F23R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F23R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F23R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F23R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F23R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F23R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F23R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F23R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F23R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F23R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F23R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F23R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F23R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F23R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F23R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F23R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F23R2  ========================================================= */
#define CAN1_F23R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F23R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F23R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F23R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F23R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F23R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F23R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F23R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F23R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F23R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F23R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F23R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F23R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F23R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F23R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F23R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F23R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F23R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F23R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F23R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F23R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F23R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F23R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F23R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F23R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F23R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F23R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F23R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F23R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F23R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F23R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F23R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F23R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F23R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F23R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F24R1  ========================================================= */
#define CAN1_F24R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F24R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F24R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F24R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F24R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F24R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F24R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F24R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F24R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F24R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F24R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F24R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F24R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F24R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F24R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F24R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F24R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F24R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F24R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F24R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F24R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F24R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F24R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F24R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F24R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F24R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F24R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F24R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F24R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F24R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F24R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F24R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F24R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F24R2  ========================================================= */
#define CAN1_F24R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F24R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F24R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F24R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F24R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F24R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F24R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F24R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F24R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F24R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F24R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F24R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F24R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F24R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F24R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F24R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F24R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F24R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F24R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F24R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F24R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F24R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F24R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F24R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F24R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F24R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F24R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F24R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F24R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F24R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F24R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F24R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F24R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F24R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F24R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F25R1  ========================================================= */
#define CAN1_F25R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F25R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F25R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F25R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F25R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F25R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F25R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F25R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F25R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F25R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F25R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F25R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F25R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F25R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F25R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F25R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F25R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F25R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F25R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F25R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F25R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F25R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F25R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F25R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F25R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F25R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F25R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F25R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F25R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F25R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F25R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F25R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F25R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F25R2  ========================================================= */
#define CAN1_F25R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F25R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F25R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F25R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F25R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F25R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F25R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F25R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F25R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F25R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F25R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F25R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F25R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F25R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F25R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F25R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F25R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F25R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F25R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F25R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F25R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F25R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F25R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F25R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F25R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F25R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F25R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F25R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F25R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F25R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F25R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F25R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F25R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F25R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F25R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F26R1  ========================================================= */
#define CAN1_F26R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F26R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F26R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F26R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F26R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F26R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F26R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F26R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F26R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F26R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F26R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F26R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F26R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F26R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F26R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F26R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F26R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F26R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F26R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F26R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F26R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F26R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F26R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F26R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F26R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F26R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F26R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F26R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F26R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F26R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F26R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F26R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F26R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F26R2  ========================================================= */
#define CAN1_F26R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F26R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F26R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F26R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F26R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F26R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F26R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F26R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F26R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F26R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F26R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F26R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F26R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F26R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F26R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F26R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F26R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F26R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F26R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F26R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F26R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F26R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F26R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F26R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F26R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F26R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F26R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F26R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F26R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F26R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F26R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F26R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F26R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F26R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F26R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F27R1  ========================================================= */
#define CAN1_F27R1_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F27R1_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R1_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F27R1_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R1_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F27R1_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R1_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F27R1_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R1_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F27R1_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R1_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F27R1_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R1_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F27R1_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R1_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F27R1_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R1_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F27R1_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R1_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F27R1_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R1_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F27R1_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F27R1_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F27R1_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F27R1_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F27R1_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F27R1_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F27R1_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F27R1_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F27R1_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F27R1_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F27R1_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F27R1_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F27R1_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F27R1_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F27R1_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F27R1_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F27R1_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F27R1_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F27R1_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F27R1_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F27R1_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R1_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F27R1_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
/* =========================================================  F27R2  ========================================================= */
#define CAN1_F27R2_FB0_Pos                (0UL)                     /*!< FB0 (Bit 0)                                           */
#define CAN1_F27R2_FB0_Msk                (0x1UL)                   /*!< FB0 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R2_FB1_Pos                (1UL)                     /*!< FB1 (Bit 1)                                           */
#define CAN1_F27R2_FB1_Msk                (0x2UL)                   /*!< FB1 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R2_FB2_Pos                (2UL)                     /*!< FB2 (Bit 2)                                           */
#define CAN1_F27R2_FB2_Msk                (0x4UL)                   /*!< FB2 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R2_FB3_Pos                (3UL)                     /*!< FB3 (Bit 3)                                           */
#define CAN1_F27R2_FB3_Msk                (0x8UL)                   /*!< FB3 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R2_FB4_Pos                (4UL)                     /*!< FB4 (Bit 4)                                           */
#define CAN1_F27R2_FB4_Msk                (0x10UL)                  /*!< FB4 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R2_FB5_Pos                (5UL)                     /*!< FB5 (Bit 5)                                           */
#define CAN1_F27R2_FB5_Msk                (0x20UL)                  /*!< FB5 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R2_FB6_Pos                (6UL)                     /*!< FB6 (Bit 6)                                           */
#define CAN1_F27R2_FB6_Msk                (0x40UL)                  /*!< FB6 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R2_FB7_Pos                (7UL)                     /*!< FB7 (Bit 7)                                           */
#define CAN1_F27R2_FB7_Msk                (0x80UL)                  /*!< FB7 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R2_FB8_Pos                (8UL)                     /*!< FB8 (Bit 8)                                           */
#define CAN1_F27R2_FB8_Msk                (0x100UL)                 /*!< FB8 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R2_FB9_Pos                (9UL)                     /*!< FB9 (Bit 9)                                           */
#define CAN1_F27R2_FB9_Msk                (0x200UL)                 /*!< FB9 (Bitfield-Mask: 0x01)                             */
#define CAN1_F27R2_FB10_Pos               (10UL)                    /*!< FB10 (Bit 10)                                         */
#define CAN1_F27R2_FB10_Msk               (0x400UL)                 /*!< FB10 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB11_Pos               (11UL)                    /*!< FB11 (Bit 11)                                         */
#define CAN1_F27R2_FB11_Msk               (0x800UL)                 /*!< FB11 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB12_Pos               (12UL)                    /*!< FB12 (Bit 12)                                         */
#define CAN1_F27R2_FB12_Msk               (0x1000UL)                /*!< FB12 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB13_Pos               (13UL)                    /*!< FB13 (Bit 13)                                         */
#define CAN1_F27R2_FB13_Msk               (0x2000UL)                /*!< FB13 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB14_Pos               (14UL)                    /*!< FB14 (Bit 14)                                         */
#define CAN1_F27R2_FB14_Msk               (0x4000UL)                /*!< FB14 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB15_Pos               (15UL)                    /*!< FB15 (Bit 15)                                         */
#define CAN1_F27R2_FB15_Msk               (0x8000UL)                /*!< FB15 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB16_Pos               (16UL)                    /*!< FB16 (Bit 16)                                         */
#define CAN1_F27R2_FB16_Msk               (0x10000UL)               /*!< FB16 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB17_Pos               (17UL)                    /*!< FB17 (Bit 17)                                         */
#define CAN1_F27R2_FB17_Msk               (0x20000UL)               /*!< FB17 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB18_Pos               (18UL)                    /*!< FB18 (Bit 18)                                         */
#define CAN1_F27R2_FB18_Msk               (0x40000UL)               /*!< FB18 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB19_Pos               (19UL)                    /*!< FB19 (Bit 19)                                         */
#define CAN1_F27R2_FB19_Msk               (0x80000UL)               /*!< FB19 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB20_Pos               (20UL)                    /*!< FB20 (Bit 20)                                         */
#define CAN1_F27R2_FB20_Msk               (0x100000UL)              /*!< FB20 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB21_Pos               (21UL)                    /*!< FB21 (Bit 21)                                         */
#define CAN1_F27R2_FB21_Msk               (0x200000UL)              /*!< FB21 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB22_Pos               (22UL)                    /*!< FB22 (Bit 22)                                         */
#define CAN1_F27R2_FB22_Msk               (0x400000UL)              /*!< FB22 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB23_Pos               (23UL)                    /*!< FB23 (Bit 23)                                         */
#define CAN1_F27R2_FB23_Msk               (0x800000UL)              /*!< FB23 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB24_Pos               (24UL)                    /*!< FB24 (Bit 24)                                         */
#define CAN1_F27R2_FB24_Msk               (0x1000000UL)             /*!< FB24 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB25_Pos               (25UL)                    /*!< FB25 (Bit 25)                                         */
#define CAN1_F27R2_FB25_Msk               (0x2000000UL)             /*!< FB25 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB26_Pos               (26UL)                    /*!< FB26 (Bit 26)                                         */
#define CAN1_F27R2_FB26_Msk               (0x4000000UL)             /*!< FB26 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB27_Pos               (27UL)                    /*!< FB27 (Bit 27)                                         */
#define CAN1_F27R2_FB27_Msk               (0x8000000UL)             /*!< FB27 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB28_Pos               (28UL)                    /*!< FB28 (Bit 28)                                         */
#define CAN1_F27R2_FB28_Msk               (0x10000000UL)            /*!< FB28 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB29_Pos               (29UL)                    /*!< FB29 (Bit 29)                                         */
#define CAN1_F27R2_FB29_Msk               (0x20000000UL)            /*!< FB29 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB30_Pos               (30UL)                    /*!< FB30 (Bit 30)                                         */
#define CAN1_F27R2_FB30_Msk               (0x40000000UL)            /*!< FB30 (Bitfield-Mask: 0x01)                            */
#define CAN1_F27R2_FB31_Pos               (31UL)                    /*!< FB31 (Bit 31)                                         */
#define CAN1_F27R2_FB31_Msk               (0x80000000UL)            /*!< FB31 (Bitfield-Mask: 0x01)                            */
