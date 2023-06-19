#include "core.h"

#define DSI_BASE                    0x40016C00UL
#define DSI                         ((volatile DSI_Type*)               DSI_BASE)

/* =========================================================================================================================== */
/* ================                                            DSI                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief DSI Host (DSI)
  */

typedef struct {                                /*!< (@ 0x40016C00) DSI Structure                                              */
  
  union {
    __IM  uint32_t DSI_VR;                      /*!< (@ 0x00000000) DSI Host Version Register                                  */
    
    struct {
      __IM  uint32_t VERSION    : 32;           /*!< [31..0] Version of the DSI Host                                           */
    } DSI_VR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_CR;                      /*!< (@ 0x00000004) DSI Host Control Register                                  */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Enable                                                             */
            uint32_t            : 31;
    } DSI_CR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_CCR;                     /*!< (@ 0x00000008) DSI HOST Clock Control Register                            */
    
    struct {
      __IOM uint32_t TXECKDIV   : 8;            /*!< [7..0] TX Escape Clock Division                                           */
      __IOM uint32_t TOCKDIV    : 8;            /*!< [15..8] Timeout Clock Division                                            */
            uint32_t            : 16;
    } DSI_CCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_LVCIDR;                  /*!< (@ 0x0000000C) DSI Host LTDC VCID Register                                */
    
    struct {
      __IOM uint32_t VCID       : 2;            /*!< [1..0] Virtual Channel ID                                                 */
            uint32_t            : 30;
    } DSI_LVCIDR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_LCOLCR;                  /*!< (@ 0x00000010) DSI Host LTDC Color Coding Register                        */
    
    struct {
      __IOM uint32_t COLC       : 4;            /*!< [3..0] Color Coding                                                       */
            uint32_t            : 4;
      __IOM uint32_t LPE        : 1;            /*!< [8..8] Loosely Packet Enable                                              */
            uint32_t            : 23;
    } DSI_LCOLCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_LPCR;                    /*!< (@ 0x00000014) DSI Host LTDC Polarity Configuration Register              */
    
    struct {
      __IOM uint32_t DEP        : 1;            /*!< [0..0] Data Enable Polarity                                               */
      __IOM uint32_t VSP        : 1;            /*!< [1..1] VSYNC Polarity                                                     */
      __IOM uint32_t HSP        : 1;            /*!< [2..2] HSYNC Polarity                                                     */
            uint32_t            : 29;
    } DSI_LPCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_LPMCR;                   /*!< (@ 0x00000018) DSI Host Low-Power mode Configuration Register             */
    
    struct {
      __IOM uint32_t VLPSIZE    : 8;            /*!< [7..0] VACT Largest Packet Size                                           */
            uint32_t            : 8;
      __IOM uint32_t LPSIZE     : 8;            /*!< [23..16] Largest Packet Size                                              */
            uint32_t            : 8;
    } DSI_LPMCR_b;
  } ;
  __IM  uint32_t  RESERVED[4];
  
  union {
    __IOM uint32_t DSI_PCR;                     /*!< (@ 0x0000002C) DSI Host Protocol Configuration Register                   */
    
    struct {
      __IOM uint32_t ETTXE      : 1;            /*!< [0..0] EoTp Transmission Enable                                           */
      __IOM uint32_t ETRXE      : 1;            /*!< [1..1] EoTp Reception Enable                                              */
      __IOM uint32_t BTAE       : 1;            /*!< [2..2] Bus Turn Around Enable                                             */
      __IOM uint32_t ECCRXE     : 1;            /*!< [3..3] ECC Reception Enable                                               */
      __IOM uint32_t CRCRXE     : 1;            /*!< [4..4] CRC Reception Enable                                               */
            uint32_t            : 27;
    } DSI_PCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_GVCIDR;                  /*!< (@ 0x00000030) DSI Host Generic VCID Register                             */
    
    struct {
      __IOM uint32_t VCID       : 2;            /*!< [1..0] Virtual Channel ID                                                 */
            uint32_t            : 30;
    } DSI_GVCIDR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_MCR;                     /*!< (@ 0x00000034) DSI Host mode Configuration Register                       */
    
    struct {
      __IOM uint32_t CMDM       : 1;            /*!< [0..0] Command mode                                                       */
            uint32_t            : 31;
    } DSI_MCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_VMCR;                    /*!< (@ 0x00000038) DSI Host Video mode Configuration Register                 */
    
    struct {
      __IOM uint32_t VMT        : 2;            /*!< [1..0] Video mode Type                                                    */
            uint32_t            : 6;
      __IOM uint32_t LPVSAE     : 1;            /*!< [8..8] Low-Power Vertical Sync Active Enable                              */
      __IOM uint32_t LPVBPE     : 1;            /*!< [9..9] Low-power Vertical Back-Porch Enable                               */
      __IOM uint32_t LPVFPE     : 1;            /*!< [10..10] Low-power Vertical Front-porch Enable                            */
      __IOM uint32_t LPVAE      : 1;            /*!< [11..11] Low-Power Vertical Active Enable                                 */
      __IOM uint32_t LPHBPE     : 1;            /*!< [12..12] Low-Power Horizontal Back-Porch Enable                           */
      __IOM uint32_t LPHFPE     : 1;            /*!< [13..13] Low-Power Horizontal Front-Porch Enable                          */
      __IOM uint32_t FBTAAE     : 1;            /*!< [14..14] Frame Bus-Turn-Around Acknowledge Enable                         */
      __IOM uint32_t LPCE       : 1;            /*!< [15..15] Low-Power Command Enable                                         */
      __IOM uint32_t PGE        : 1;            /*!< [16..16] Pattern Generator Enable                                         */
            uint32_t            : 3;
      __IOM uint32_t PGM        : 1;            /*!< [20..20] Pattern Generator mode                                           */
            uint32_t            : 3;
      __IOM uint32_t PGO        : 1;            /*!< [24..24] Pattern Generator Orientation                                    */
            uint32_t            : 7;
    } DSI_VMCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_VPCR;                    /*!< (@ 0x0000003C) DSI Host Video Packet Configuration Register               */
    
    struct {
      __IOM uint32_t VPSIZE     : 14;           /*!< [13..0] Video Packet Size                                                 */
            uint32_t            : 18;
    } DSI_VPCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_VCCR;                    /*!< (@ 0x00000040) DSI Host Video Chunks Configuration Register               */
    
    struct {
      __IOM uint32_t NUMC       : 13;           /*!< [12..0] Number of Chunks                                                  */
            uint32_t            : 19;
    } DSI_VCCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_VNPCR;                   /*!< (@ 0x00000044) DSI Host Video Null Packet Configuration Register          */
    
    struct {
      __IOM uint32_t NPSIZE     : 13;           /*!< [12..0] Null Packet Size                                                  */
            uint32_t            : 19;
    } DSI_VNPCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_VHSACR;                  /*!< (@ 0x00000048) DSI Host Video HSA Configuration Register                  */
    
    struct {
      __IOM uint32_t HSA        : 12;           /*!< [11..0] Horizontal Synchronism Active duration                            */
            uint32_t            : 20;
    } DSI_VHSACR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_VHBPCR;                  /*!< (@ 0x0000004C) DSI Host Video HBP Configuration Register                  */
    
    struct {
      __IOM uint32_t HBP        : 12;           /*!< [11..0] Horizontal Back-Porch duration                                    */
            uint32_t            : 20;
    } DSI_VHBPCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_VLCR;                    /*!< (@ 0x00000050) DSI Host Video Line Configuration Register                 */
    
    struct {
      __IOM uint32_t HLINE      : 15;           /*!< [14..0] Horizontal Line duration                                          */
            uint32_t            : 17;
    } DSI_VLCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_VVSACR;                  /*!< (@ 0x00000054) DSI Host Video VSA Configuration Register                  */
    
    struct {
      __IOM uint32_t VSA        : 10;           /*!< [9..0] Vertical Synchronism Active duration                               */
            uint32_t            : 22;
    } DSI_VVSACR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_VVBPCR;                  /*!< (@ 0x00000058) DSI Host Video VBP Configuration Register                  */
    
    struct {
      __IOM uint32_t VBP        : 10;           /*!< [9..0] Vertical Back-Porch duration                                       */
            uint32_t            : 22;
    } DSI_VVBPCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_VVFPCR;                  /*!< (@ 0x0000005C) DSI Host Video VFP Configuration Register                  */
    
    struct {
      __IOM uint32_t VFP        : 10;           /*!< [9..0] Vertical Front-Porch duration                                      */
            uint32_t            : 22;
    } DSI_VVFPCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_VVACR;                   /*!< (@ 0x00000060) DSI Host Video VA Configuration Register                   */
    
    struct {
      __IOM uint32_t VA         : 14;           /*!< [13..0] Vertical Active duration                                          */
            uint32_t            : 18;
    } DSI_VVACR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_LCCR;                    /*!< (@ 0x00000064) DSI Host LTDC Command Configuration Register               */
    
    struct {
      __IOM uint32_t CMDSIZE    : 16;           /*!< [15..0] Command Size                                                      */
            uint32_t            : 16;
    } DSI_LCCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_CMCR;                    /*!< (@ 0x00000068) DSI Host Command mode Configuration Register               */
    
    struct {
      __IOM uint32_t TEARE      : 1;            /*!< [0..0] Tearing Effect Acknowledge Request Enable                          */
      __IOM uint32_t ARE        : 1;            /*!< [1..1] Acknowledge Request Enable                                         */
            uint32_t            : 6;
      __IOM uint32_t GSW0TX     : 1;            /*!< [8..8] Generic Short Write Zero parameters Transmission                   */
      __IOM uint32_t GSW1TX     : 1;            /*!< [9..9] Generic Short Write One parameters Transmission                    */
      __IOM uint32_t GSW2TX     : 1;            /*!< [10..10] Generic Short Write Two parameters Transmission                  */
      __IOM uint32_t GSR0TX     : 1;            /*!< [11..11] Generic Short Read Zero parameters Transmission                  */
      __IOM uint32_t GSR1TX     : 1;            /*!< [12..12] Generic Short Read One parameters Transmission                   */
      __IOM uint32_t GSR2TX     : 1;            /*!< [13..13] Generic Short Read Two parameters Transmission                   */
      __IOM uint32_t GLWTX      : 1;            /*!< [14..14] Generic Long Write Transmission                                  */
            uint32_t            : 1;
      __IOM uint32_t DSW0TX     : 1;            /*!< [16..16] DCS Short Write Zero parameter Transmission                      */
      __IOM uint32_t DSW1TX     : 1;            /*!< [17..17] DCS Short Read One parameter Transmission                        */
      __IOM uint32_t DSR0TX     : 1;            /*!< [18..18] DCS Short Read Zero parameter Transmission                       */
      __IOM uint32_t DLWTX      : 1;            /*!< [19..19] DCS Long Write Transmission                                      */
            uint32_t            : 4;
      __IOM uint32_t MRDPS      : 1;            /*!< [24..24] Maximum Read Packet Size                                         */
            uint32_t            : 7;
    } DSI_CMCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_GHCR;                    /*!< (@ 0x0000006C) DSI Host Generic Header Configuration Register             */
    
    struct {
      __IOM uint32_t DT         : 6;            /*!< [5..0] Type                                                               */
      __IOM uint32_t VCID       : 2;            /*!< [7..6] Channel                                                            */
      __IOM uint32_t WCLSB      : 8;            /*!< [15..8] WordCount LSB                                                     */
      __IOM uint32_t WCMSB      : 8;            /*!< [23..16] WordCount MSB                                                    */
            uint32_t            : 8;
    } DSI_GHCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_GPDR;                    /*!< (@ 0x00000070) DSI Host Generic Payload Data Register                     */
    
    struct {
      __IOM uint32_t DATA1      : 8;            /*!< [7..0] Payload Byte 1                                                     */
      __IOM uint32_t DATA2      : 8;            /*!< [15..8] Payload Byte 2                                                    */
      __IOM uint32_t DATA3      : 8;            /*!< [23..16] Payload Byte 3                                                   */
      __IOM uint32_t DATA4      : 8;            /*!< [31..24] Payload Byte 4                                                   */
    } DSI_GPDR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_GPSR;                    /*!< (@ 0x00000074) DSI Host Generic Packet Status Register                    */
    
    struct {
      __IM  uint32_t CMDFE      : 1;            /*!< [0..0] Command FIFO Empty                                                 */
      __IM  uint32_t CMDFF      : 1;            /*!< [1..1] Command FIFO Full                                                  */
      __IM  uint32_t PWRFE      : 1;            /*!< [2..2] Payload Write FIFO Empty                                           */
      __IM  uint32_t PWRFF      : 1;            /*!< [3..3] Payload Write FIFO Full                                            */
      __IM  uint32_t PRDFE      : 1;            /*!< [4..4] Payload Read FIFO Empty                                            */
      __IM  uint32_t PRDFF      : 1;            /*!< [5..5] Payload Read FIFO Full                                             */
      __IM  uint32_t RCB        : 1;            /*!< [6..6] Read Command Busy                                                  */
            uint32_t            : 25;
    } DSI_GPSR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_TCCR0;                   /*!< (@ 0x00000078) DSI Host Timeout Counter Configuration Register
                                                                    0                                                          */
    
    struct {
      __IOM uint32_t LPRX_TOCNT : 16;           /*!< [15..0] Low-power Reception Timeout Counter                               */
      __IOM uint32_t HSTX_TOCNT : 16;           /*!< [31..16] High-Speed Transmission Timeout Counter                          */
    } DSI_TCCR0_b;
  } ;
  
  union {
    __IOM uint32_t DSI_TCCR1;                   /*!< (@ 0x0000007C) DSI Host Timeout Counter Configuration Register
                                                                    1                                                          */
    
    struct {
      __IOM uint32_t HSRD_TOCNT : 16;           /*!< [15..0] High-Speed Read Timeout Counter                                   */
            uint32_t            : 16;
    } DSI_TCCR1_b;
  } ;
  
  union {
    __IOM uint32_t DSI_TCCR2;                   /*!< (@ 0x00000080) DSI Host Timeout Counter Configuration Register
                                                                    2                                                          */
    
    struct {
      __IOM uint32_t LPRD_TOCNT : 16;           /*!< [15..0] Low-Power Read Timeout Counter                                    */
            uint32_t            : 16;
    } DSI_TCCR2_b;
  } ;
  
  union {
    __IOM uint32_t DSI_TCCR3;                   /*!< (@ 0x00000084) DSI Host Timeout Counter Configuration Register
                                                                    3                                                          */
    
    struct {
      __IOM uint32_t HSWR_TOCNT : 16;           /*!< [15..0] High-Speed Write Timeout Counter                                  */
            uint32_t            : 8;
      __IOM uint32_t PM         : 1;            /*!< [24..24] Presp mode                                                       */
            uint32_t            : 7;
    } DSI_TCCR3_b;
  } ;
  
  union {
    __IOM uint32_t DSI_TCCR4;                   /*!< (@ 0x00000088) DSI Host Timeout Counter Configuration Register
                                                                    4                                                          */
    
    struct {
      __IOM uint32_t LSWR_TOCNT : 16;           /*!< [15..0] Low-Power Write Timeout Counter                                   */
            uint32_t            : 16;
    } DSI_TCCR4_b;
  } ;
  
  union {
    __IOM uint32_t DSI_TCCR5;                   /*!< (@ 0x0000008C) DSI Host Timeout Counter Configuration Register
                                                                    5                                                          */
    
    struct {
      __IOM uint32_t BTA_TOCNT  : 16;           /*!< [15..0] Bus-Turn-Around Timeout Counter                                   */
            uint32_t            : 16;
    } DSI_TCCR5_b;
  } ;
  __IM  uint32_t  RESERVED1;
  
  union {
    __IOM uint32_t DSI_CLCR;                    /*!< (@ 0x00000094) DSI Host Clock Lane Configuration Register                 */
    
    struct {
      __IOM uint32_t DPCC       : 1;            /*!< [0..0] D-PHY Clock Control                                                */
      __IOM uint32_t ACR        : 1;            /*!< [1..1] Automatic Clock lane Control                                       */
            uint32_t            : 30;
    } DSI_CLCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_CLTCR;                   /*!< (@ 0x00000098) DSI Host Clock Lane Timer Configuration Register           */
    
    struct {
      __IOM uint32_t LP2HS_TIME : 10;           /*!< [9..0] Low-Power to High-Speed Time                                       */
            uint32_t            : 6;
      __IOM uint32_t HS2LP_TIME : 10;           /*!< [25..16] High-Speed to Low-Power Time                                     */
            uint32_t            : 6;
    } DSI_CLTCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_DLTCR;                   /*!< (@ 0x0000009C) DSI Host Data Lane Timer Configuration Register            */
    
    struct {
      __IOM uint32_t MRD_TIME   : 15;           /*!< [14..0] Maximum Read Time                                                 */
            uint32_t            : 1;
      __IOM uint32_t LP2HS_TIME : 8;            /*!< [23..16] Low-Power To High-Speed Time                                     */
      __IOM uint32_t HS2LP_TIME : 8;            /*!< [31..24] High-Speed To Low-Power Time                                     */
    } DSI_DLTCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_PCTLR;                   /*!< (@ 0x000000A0) DSI Host PHY Control Register                              */
    
    struct {
            uint32_t            : 1;
      __IOM uint32_t DEN        : 1;            /*!< [1..1] Digital Enable                                                     */
      __IOM uint32_t CKE        : 1;            /*!< [2..2] Clock Enable                                                       */
            uint32_t            : 29;
    } DSI_PCTLR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_PCONFR;                  /*!< (@ 0x000000A4) DSI Host PHY Configuration Register                        */
    
    struct {
      __IOM uint32_t NL         : 2;            /*!< [1..0] Number of Lanes                                                    */
            uint32_t            : 6;
      __IOM uint32_t SW_TIME    : 8;            /*!< [15..8] Stop Wait Time                                                    */
            uint32_t            : 16;
    } DSI_PCONFR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_PUCR;                    /*!< (@ 0x000000A8) DSI Host PHY ULPS Control Register                         */
    
    struct {
      __IOM uint32_t URCL       : 1;            /*!< [0..0] ULPS Request on Clock Lane                                         */
      __IOM uint32_t UECL       : 1;            /*!< [1..1] ULPS Exit on Clock Lane                                            */
      __IOM uint32_t URDL       : 1;            /*!< [2..2] ULPS Request on Data Lane                                          */
      __IOM uint32_t UEDL       : 1;            /*!< [3..3] ULPS Exit on Data Lane                                             */
            uint32_t            : 28;
    } DSI_PUCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_PTTCR;                   /*!< (@ 0x000000AC) DSI Host PHY TX Triggers Configuration Register            */
    
    struct {
      __IOM uint32_t TX_TRIG    : 4;            /*!< [3..0] Transmission Trigger                                               */
            uint32_t            : 28;
    } DSI_PTTCR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_PSR;                     /*!< (@ 0x000000B0) DSI Host PHY Status Register                               */
    
    struct {
            uint32_t            : 1;
      __IM  uint32_t PD         : 1;            /*!< [1..1] PHY Direction                                                      */
      __IM  uint32_t PSSC       : 1;            /*!< [2..2] PHY Stop State Clock lane                                          */
      __IM  uint32_t UANC       : 1;            /*!< [3..3] ULPS Active Not Clock lane                                         */
      __IM  uint32_t PSS0       : 1;            /*!< [4..4] PHY Stop State lane 0                                              */
      __IM  uint32_t UAN0       : 1;            /*!< [5..5] ULPS Active Not lane 1                                             */
      __IM  uint32_t RUE0       : 1;            /*!< [6..6] RX ULPS Escape lane 0                                              */
      __IM  uint32_t PSS1       : 1;            /*!< [7..7] PHY Stop State lane 1                                              */
      __IM  uint32_t UAN1       : 1;            /*!< [8..8] ULPS Active Not lane 1                                             */
            uint32_t            : 23;
    } DSI_PSR_b;
  } ;
  __IM  uint32_t  RESERVED2[2];
  
  union {
    __IM  uint32_t DSI_ISR0;                    /*!< (@ 0x000000BC) DSI Host Interrupt & Status Register 0                     */
    
    struct {
      __IM  uint32_t AE0        : 1;            /*!< [0..0] Acknowledge Error 0                                                */
      __IM  uint32_t AE1        : 1;            /*!< [1..1] Acknowledge Error 1                                                */
      __IM  uint32_t AE2        : 1;            /*!< [2..2] Acknowledge Error 2                                                */
      __IM  uint32_t AE3        : 1;            /*!< [3..3] Acknowledge Error 3                                                */
      __IM  uint32_t AE4        : 1;            /*!< [4..4] Acknowledge Error 4                                                */
      __IM  uint32_t AE5        : 1;            /*!< [5..5] Acknowledge Error 5                                                */
      __IM  uint32_t AE6        : 1;            /*!< [6..6] Acknowledge Error 6                                                */
      __IM  uint32_t AE7        : 1;            /*!< [7..7] Acknowledge Error 7                                                */
      __IM  uint32_t AE8        : 1;            /*!< [8..8] Acknowledge Error 8                                                */
      __IM  uint32_t AE9        : 1;            /*!< [9..9] Acknowledge Error 9                                                */
      __IM  uint32_t AE10       : 1;            /*!< [10..10] Acknowledge Error 10                                             */
      __IM  uint32_t AE11       : 1;            /*!< [11..11] Acknowledge Error 11                                             */
      __IM  uint32_t AE12       : 1;            /*!< [12..12] Acknowledge Error 12                                             */
      __IM  uint32_t AE13       : 1;            /*!< [13..13] Acknowledge Error 13                                             */
      __IM  uint32_t AE14       : 1;            /*!< [14..14] Acknowledge Error 14                                             */
      __IM  uint32_t AE15       : 1;            /*!< [15..15] Acknowledge Error 15                                             */
      __IM  uint32_t PE0        : 1;            /*!< [16..16] PHY Error 0                                                      */
      __IM  uint32_t PE1        : 1;            /*!< [17..17] PHY Error 1                                                      */
      __IM  uint32_t PE2        : 1;            /*!< [18..18] PHY Error 2                                                      */
      __IM  uint32_t PE3        : 1;            /*!< [19..19] PHY Error 3                                                      */
      __IM  uint32_t PE4        : 1;            /*!< [20..20] PHY Error 4                                                      */
            uint32_t            : 11;
    } DSI_ISR0_b;
  } ;
  
  union {
    __IM  uint32_t DSI_ISR1;                    /*!< (@ 0x000000C0) DSI Host Interrupt & Status Register 1                     */
    
    struct {
      __IM  uint32_t TOHSTX     : 1;            /*!< [0..0] Timeout High-Speed Transmission                                    */
      __IM  uint32_t TOLPRX     : 1;            /*!< [1..1] Timeout Low-Power Reception                                        */
      __IM  uint32_t ECCSE      : 1;            /*!< [2..2] ECC Single-bit Error                                               */
      __IM  uint32_t ECCME      : 1;            /*!< [3..3] ECC Multi-bit Error                                                */
      __IM  uint32_t CRCE       : 1;            /*!< [4..4] CRC Error                                                          */
      __IM  uint32_t PSE        : 1;            /*!< [5..5] Packet Size Error                                                  */
      __IM  uint32_t EOTPE      : 1;            /*!< [6..6] EoTp Error                                                         */
      __IM  uint32_t LPWRE      : 1;            /*!< [7..7] LTDC Payload Write Error                                           */
      __IM  uint32_t GCWRE      : 1;            /*!< [8..8] Generic Command Write Error                                        */
      __IM  uint32_t GPWRE      : 1;            /*!< [9..9] Generic Payload Write Error                                        */
      __IM  uint32_t GPTXE      : 1;            /*!< [10..10] Generic Payload Transmit Error                                   */
      __IM  uint32_t GPRDE      : 1;            /*!< [11..11] Generic Payload Read Error                                       */
      __IM  uint32_t GPRXE      : 1;            /*!< [12..12] Generic Payload Receive Error                                    */
            uint32_t            : 19;
    } DSI_ISR1_b;
  } ;
  
  union {
    __IOM uint32_t DSI_IER0;                    /*!< (@ 0x000000C4) DSI Host Interrupt Enable Register 0                       */
    
    struct {
      __IOM uint32_t AE0IE      : 1;            /*!< [0..0] Acknowledge Error 0 Interrupt Enable                               */
      __IOM uint32_t AE1IE      : 1;            /*!< [1..1] Acknowledge Error 1 Interrupt Enable                               */
      __IOM uint32_t AE2IE      : 1;            /*!< [2..2] Acknowledge Error 2 Interrupt Enable                               */
      __IOM uint32_t AE3IE      : 1;            /*!< [3..3] Acknowledge Error 3 Interrupt Enable                               */
      __IOM uint32_t AE4IE      : 1;            /*!< [4..4] Acknowledge Error 4 Interrupt Enable                               */
      __IOM uint32_t AE5IE      : 1;            /*!< [5..5] Acknowledge Error 5 Interrupt Enable                               */
      __IOM uint32_t AE6IE      : 1;            /*!< [6..6] Acknowledge Error 6 Interrupt Enable                               */
      __IOM uint32_t AE7IE      : 1;            /*!< [7..7] Acknowledge Error 7 Interrupt Enable                               */
      __IOM uint32_t AE8IE      : 1;            /*!< [8..8] Acknowledge Error 8 Interrupt Enable                               */
      __IOM uint32_t AE9IE      : 1;            /*!< [9..9] Acknowledge Error 9 Interrupt Enable                               */
      __IOM uint32_t AE10IE     : 1;            /*!< [10..10] Acknowledge Error 10 Interrupt Enable                            */
      __IOM uint32_t AE11IE     : 1;            /*!< [11..11] Acknowledge Error 11 Interrupt Enable                            */
      __IOM uint32_t AE12IE     : 1;            /*!< [12..12] Acknowledge Error 12 Interrupt Enable                            */
      __IOM uint32_t AE13IE     : 1;            /*!< [13..13] Acknowledge Error 13 Interrupt Enable                            */
      __IOM uint32_t AE14IE     : 1;            /*!< [14..14] Acknowledge Error 14 Interrupt Enable                            */
      __IOM uint32_t AE15IE     : 1;            /*!< [15..15] Acknowledge Error 15 Interrupt Enable                            */
      __IOM uint32_t PE0IE      : 1;            /*!< [16..16] PHY Error 0 Interrupt Enable                                     */
      __IOM uint32_t PE1IE      : 1;            /*!< [17..17] PHY Error 1 Interrupt Enable                                     */
      __IOM uint32_t PE2IE      : 1;            /*!< [18..18] PHY Error 2 Interrupt Enable                                     */
      __IOM uint32_t PE3IE      : 1;            /*!< [19..19] PHY Error 3 Interrupt Enable                                     */
      __IOM uint32_t PE4IE      : 1;            /*!< [20..20] PHY Error 4 Interrupt Enable                                     */
            uint32_t            : 11;
    } DSI_IER0_b;
  } ;
  
  union {
    __IOM uint32_t DSI_IER1;                    /*!< (@ 0x000000C8) DSI Host Interrupt Enable Register 1                       */
    
    struct {
      __IOM uint32_t TOHSTXIE   : 1;            /*!< [0..0] Timeout High-Speed Transmission Interrupt Enable                   */
      __IOM uint32_t TOLPRXIE   : 1;            /*!< [1..1] Timeout Low-Power Reception Interrupt Enable                       */
      __IOM uint32_t ECCSEIE    : 1;            /*!< [2..2] ECC Single-bit Error Interrupt Enable                              */
      __IOM uint32_t ECCMEIE    : 1;            /*!< [3..3] ECC Multi-bit Error Interrupt Enable                               */
      __IOM uint32_t CRCEIE     : 1;            /*!< [4..4] CRC Error Interrupt Enable                                         */
      __IOM uint32_t PSEIE      : 1;            /*!< [5..5] Packet Size Error Interrupt Enable                                 */
      __IOM uint32_t EOTPEIE    : 1;            /*!< [6..6] EoTp Error Interrupt Enable                                        */
      __IOM uint32_t LPWREIE    : 1;            /*!< [7..7] LTDC Payload Write Error Interrupt Enable                          */
      __IOM uint32_t GCWREIE    : 1;            /*!< [8..8] Generic Command Write Error Interrupt Enable                       */
      __IOM uint32_t GPWREIE    : 1;            /*!< [9..9] Generic Payload Write Error Interrupt Enable                       */
      __IOM uint32_t GPTXEIE    : 1;            /*!< [10..10] Generic Payload Transmit Error Interrupt Enable                  */
      __IOM uint32_t GPRDEIE    : 1;            /*!< [11..11] Generic Payload Read Error Interrupt Enable                      */
      __IOM uint32_t GPRXEIE    : 1;            /*!< [12..12] Generic Payload Receive Error Interrupt Enable                   */
            uint32_t            : 19;
    } DSI_IER1_b;
  } ;
  __IM  uint32_t  RESERVED3[3];
  
  union {
    __OM  uint32_t DSI_FIR0;                    /*!< (@ 0x000000D8) DSI Host Force Interrupt Register 0                        */
    
    struct {
      __OM  uint32_t FAE0       : 1;            /*!< [0..0] Force Acknowledge Error 0                                          */
      __OM  uint32_t FAE1       : 1;            /*!< [1..1] Force Acknowledge Error 1                                          */
      __OM  uint32_t FAE2       : 1;            /*!< [2..2] Force Acknowledge Error 2                                          */
      __OM  uint32_t FAE3       : 1;            /*!< [3..3] Force Acknowledge Error 3                                          */
      __OM  uint32_t FAE4       : 1;            /*!< [4..4] Force Acknowledge Error 4                                          */
      __OM  uint32_t FAE5       : 1;            /*!< [5..5] Force Acknowledge Error 5                                          */
      __OM  uint32_t FAE6       : 1;            /*!< [6..6] Force Acknowledge Error 6                                          */
      __OM  uint32_t FAE7       : 1;            /*!< [7..7] Force Acknowledge Error 7                                          */
      __OM  uint32_t FAE8       : 1;            /*!< [8..8] Force Acknowledge Error 8                                          */
      __OM  uint32_t FAE9       : 1;            /*!< [9..9] Force Acknowledge Error 9                                          */
      __OM  uint32_t FAE10      : 1;            /*!< [10..10] Force Acknowledge Error 10                                       */
      __OM  uint32_t FAE11      : 1;            /*!< [11..11] Force Acknowledge Error 11                                       */
      __OM  uint32_t FAE12      : 1;            /*!< [12..12] Force Acknowledge Error 12                                       */
      __OM  uint32_t FAE13      : 1;            /*!< [13..13] Force Acknowledge Error 13                                       */
      __OM  uint32_t FAE14      : 1;            /*!< [14..14] Force Acknowledge Error 14                                       */
      __OM  uint32_t FAE15      : 1;            /*!< [15..15] Force Acknowledge Error 15                                       */
      __OM  uint32_t FPE0       : 1;            /*!< [16..16] Force PHY Error 0                                                */
      __OM  uint32_t FPE1       : 1;            /*!< [17..17] Force PHY Error 1                                                */
      __OM  uint32_t FPE2       : 1;            /*!< [18..18] Force PHY Error 2                                                */
      __OM  uint32_t FPE3       : 1;            /*!< [19..19] Force PHY Error 3                                                */
      __OM  uint32_t FPE4       : 1;            /*!< [20..20] Force PHY Error 4                                                */
            uint32_t            : 11;
    } DSI_FIR0_b;
  } ;
  
  union {
    __OM  uint32_t DSI_FIR1;                    /*!< (@ 0x000000DC) DSI Host Force Interrupt Register 1                        */
    
    struct {
      __OM  uint32_t FTOHSTX    : 1;            /*!< [0..0] Force Timeout High-Speed Transmission                              */
      __OM  uint32_t FTOLPRX    : 1;            /*!< [1..1] Force Timeout Low-Power Reception                                  */
      __OM  uint32_t FECCSE     : 1;            /*!< [2..2] Force ECC Single-bit Error                                         */
      __OM  uint32_t FECCME     : 1;            /*!< [3..3] Force ECC Multi-bit Error                                          */
      __OM  uint32_t FCRCE      : 1;            /*!< [4..4] Force CRC Error                                                    */
      __OM  uint32_t FPSE       : 1;            /*!< [5..5] Force Packet Size Error                                            */
      __OM  uint32_t FEOTPE     : 1;            /*!< [6..6] Force EoTp Error                                                   */
      __OM  uint32_t FLPWRE     : 1;            /*!< [7..7] Force LTDC Payload Write Error                                     */
      __OM  uint32_t FGCWRE     : 1;            /*!< [8..8] Force Generic Command Write Error                                  */
      __OM  uint32_t FGPWRE     : 1;            /*!< [9..9] Force Generic Payload Write Error                                  */
      __OM  uint32_t FGPTXE     : 1;            /*!< [10..10] Force Generic Payload Transmit Error                             */
      __OM  uint32_t FGPRDE     : 1;            /*!< [11..11] Force Generic Payload Read Error                                 */
      __OM  uint32_t FGPRXE     : 1;            /*!< [12..12] Force Generic Payload Receive Error                              */
            uint32_t            : 19;
    } DSI_FIR1_b;
  } ;
  __IM  uint32_t  RESERVED4[8];
  
  union {
    __IOM uint32_t DSI_VSCR;                    /*!< (@ 0x00000100) DSI Host Video Shadow Control Register                     */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Enable                                                             */
            uint32_t            : 7;
      __IOM uint32_t UR         : 1;            /*!< [8..8] Update Register                                                    */
            uint32_t            : 23;
    } DSI_VSCR_b;
  } ;
  __IM  uint32_t  RESERVED5[2];
  
  union {
    __IM  uint32_t DSI_LCVCIDR;                 /*!< (@ 0x0000010C) DSI Host LTDC Current VCID Register                        */
    
    struct {
      __IM  uint32_t VCID       : 2;            /*!< [1..0] Virtual Channel ID                                                 */
            uint32_t            : 30;
    } DSI_LCVCIDR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_LCCCR;                   /*!< (@ 0x00000110) DSI Host LTDC Current Color Coding Register                */
    
    struct {
      __IM  uint32_t COLC       : 4;            /*!< [3..0] Color Coding                                                       */
            uint32_t            : 4;
      __IM  uint32_t LPE        : 1;            /*!< [8..8] Loosely Packed Enable                                              */
            uint32_t            : 23;
    } DSI_LCCCR_b;
  } ;
  __IM  uint32_t  RESERVED6;
  
  union {
    __IM  uint32_t DSI_LPMCCR;                  /*!< (@ 0x00000118) DSI Host Low-Power mode Current Configuration
                                                                    Register                                                   */
    
    struct {
      __IM  uint32_t VLPSIZE    : 8;            /*!< [7..0] VACT Largest Packet Size                                           */
            uint32_t            : 8;
      __IM  uint32_t LPSIZE     : 8;            /*!< [23..16] Largest Packet Size                                              */
            uint32_t            : 8;
    } DSI_LPMCCR_b;
  } ;
  __IM  uint32_t  RESERVED7[7];
  
  union {
    __IM  uint32_t DSI_VMCCR;                   /*!< (@ 0x00000138) DSI Host Video mode Current Configuration Register         */
    
    struct {
      __IM  uint32_t VMT        : 2;            /*!< [1..0] Video mode Type                                                    */
      __IM  uint32_t LPVSAE     : 1;            /*!< [2..2] Low-Power Vertical Sync time Enable                                */
      __IM  uint32_t LPVBPE     : 1;            /*!< [3..3] Low-power Vertical Back-Porch Enable                               */
      __IM  uint32_t LPVFPE     : 1;            /*!< [4..4] Low-power Vertical Front-Porch Enable                              */
      __IM  uint32_t LPVAE      : 1;            /*!< [5..5] Low-Power Vertical Active Enable                                   */
      __IM  uint32_t LPHBPE     : 1;            /*!< [6..6] Low-power Horizontal Back-Porch Enable                             */
      __IM  uint32_t LPHFE      : 1;            /*!< [7..7] Low-Power Horizontal Front-Porch Enable                            */
      __IM  uint32_t FBTAAE     : 1;            /*!< [8..8] Frame BTA Acknowledge Enable                                       */
      __IM  uint32_t LPCE       : 1;            /*!< [9..9] Low-Power Command Enable                                           */
            uint32_t            : 22;
    } DSI_VMCCR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_VPCCR;                   /*!< (@ 0x0000013C) DSI Host Video Packet Current Configuration Register       */
    
    struct {
      __IM  uint32_t VPSIZE     : 14;           /*!< [13..0] Video Packet Size                                                 */
            uint32_t            : 18;
    } DSI_VPCCR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_VCCCR;                   /*!< (@ 0x00000140) DSI Host Video Chunks Current Configuration Register       */
    
    struct {
      __IM  uint32_t NUMC       : 13;           /*!< [12..0] Number of Chunks                                                  */
            uint32_t            : 19;
    } DSI_VCCCR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_VNPCCR;                  /*!< (@ 0x00000144) DSI Host Video Null Packet Current Configuration
                                                                    Register                                                   */
    
    struct {
      __IM  uint32_t NPSIZE     : 13;           /*!< [12..0] Null Packet Size                                                  */
            uint32_t            : 19;
    } DSI_VNPCCR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_VHSACCR;                 /*!< (@ 0x00000148) DSI Host Video HSA Current Configuration Register          */
    
    struct {
      __IM  uint32_t HSA        : 12;           /*!< [11..0] Horizontal Synchronism Active duration                            */
            uint32_t            : 20;
    } DSI_VHSACCR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_VHBPCCR;                 /*!< (@ 0x0000014C) DSI Host Video HBP Current Configuration Register          */
    
    struct {
      __IM  uint32_t HBP        : 12;           /*!< [11..0] Horizontal Back-Porch duration                                    */
            uint32_t            : 20;
    } DSI_VHBPCCR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_VLCCR;                   /*!< (@ 0x00000150) DSI Host Video Line Current Configuration Register         */
    
    struct {
      __IM  uint32_t HLINE      : 15;           /*!< [14..0] Horizontal Line duration                                          */
            uint32_t            : 17;
    } DSI_VLCCR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_VVSACCR;                 /*!< (@ 0x00000154) DSI Host Video VSA Current Configuration Register          */
    
    struct {
      __IM  uint32_t VSA        : 10;           /*!< [9..0] Vertical Synchronism Active duration                               */
            uint32_t            : 22;
    } DSI_VVSACCR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_VVBPCCR;                 /*!< (@ 0x00000158) DSI Host Video VBP Current Configuration Register          */
    
    struct {
      __IM  uint32_t VBP        : 10;           /*!< [9..0] Vertical Back-Porch duration                                       */
            uint32_t            : 22;
    } DSI_VVBPCCR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_VVFPCCR;                 /*!< (@ 0x0000015C) DSI Host Video VFP Current Configuration Register          */
    
    struct {
      __IM  uint32_t VFP        : 10;           /*!< [9..0] Vertical Front-Porch duration                                      */
            uint32_t            : 22;
    } DSI_VVFPCCR_b;
  } ;
  
  union {
    __IM  uint32_t DSI_VVACCR;                  /*!< (@ 0x00000160) DSI Host Video VA Current Configuration Register           */
    
    struct {
      __IM  uint32_t VA         : 14;           /*!< [13..0] Vertical Active duration                                          */
            uint32_t            : 18;
    } DSI_VVACCR_b;
  } ;
  __IM  uint32_t  RESERVED8[167];
  
  union {
    __IOM uint32_t DSI_WCFGR;                   /*!< (@ 0x00000400) DSI Wrapper Configuration Register                         */
    
    struct {
      __IOM uint32_t DSIM       : 1;            /*!< [0..0] DSI Mode                                                           */
      __IOM uint32_t COLMUX     : 3;            /*!< [3..1] Color Multiplexing                                                 */
      __IOM uint32_t TESRC      : 1;            /*!< [4..4] TE Source                                                          */
      __IOM uint32_t TEPOL      : 1;            /*!< [5..5] TE Polarity                                                        */
      __IOM uint32_t AR         : 1;            /*!< [6..6] Automatic Refresh                                                  */
      __IOM uint32_t VSPOL      : 1;            /*!< [7..7] VSync Polarity                                                     */
            uint32_t            : 24;
    } DSI_WCFGR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_WCR;                     /*!< (@ 0x00000404) DSI Wrapper Control Register                               */
    
    struct {
      __IOM uint32_t COLM       : 1;            /*!< [0..0] Color Mode                                                         */
      __IOM uint32_t SHTDN      : 1;            /*!< [1..1] Shutdown                                                           */
      __IOM uint32_t LTDCEN     : 1;            /*!< [2..2] LTDC Enable                                                        */
      __IOM uint32_t DSIEN      : 1;            /*!< [3..3] DSI Enable                                                         */
            uint32_t            : 28;
    } DSI_WCR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_WIER;                    /*!< (@ 0x00000408) DSI Wrapper Interrupt Enable Register                      */
    
    struct {
      __IOM uint32_t TEIE       : 1;            /*!< [0..0] Tearing Effect Interrupt Enable                                    */
      __IOM uint32_t ERIE       : 1;            /*!< [1..1] End of Refresh Interrupt Enable                                    */
            uint32_t            : 7;
      __IOM uint32_t PLLLIE     : 1;            /*!< [9..9] PLL Lock Interrupt Enable                                          */
      __IOM uint32_t PLLUIE     : 1;            /*!< [10..10] PLL Unlock Interrupt Enable                                      */
            uint32_t            : 2;
      __IOM uint32_t RRIE       : 1;            /*!< [13..13] Regulator Ready Interrupt Enable                                 */
            uint32_t            : 18;
    } DSI_WIER_b;
  } ;
  
  union {
    __IM  uint32_t DSI_WISR;                    /*!< (@ 0x0000040C) DSI Wrapper Interrupt & Status Register                    */
    
    struct {
      __IM  uint32_t TEIF       : 1;            /*!< [0..0] Tearing Effect Interrupt Flag                                      */
      __IM  uint32_t ERIF       : 1;            /*!< [1..1] End of Refresh Interrupt Flag                                      */
      __IM  uint32_t BUSY       : 1;            /*!< [2..2] Busy Flag                                                          */
            uint32_t            : 5;
      __IM  uint32_t PLLLS      : 1;            /*!< [8..8] PLL Lock Status                                                    */
      __IM  uint32_t PLLLIF     : 1;            /*!< [9..9] PLL Lock Interrupt Flag                                            */
      __IM  uint32_t PLLUIF     : 1;            /*!< [10..10] PLL Unlock Interrupt Flag                                        */
            uint32_t            : 1;
      __IM  uint32_t RRS        : 1;            /*!< [12..12] Regulator Ready Status                                           */
      __IM  uint32_t RRIF       : 1;            /*!< [13..13] Regulator Ready Interrupt Flag                                   */
            uint32_t            : 18;
    } DSI_WISR_b;
  } ;
  
  union {
    __IOM uint32_t DSI_WIFCR;                   /*!< (@ 0x00000410) DSI Wrapper Interrupt Flag Clear Register                  */
    
    struct {
      __IOM uint32_t CTEIF      : 1;            /*!< [0..0] Clear Tearing Effect Interrupt Flag                                */
      __IOM uint32_t CERIF      : 1;            /*!< [1..1] Clear End of Refresh Interrupt Flag                                */
            uint32_t            : 7;
      __IOM uint32_t CPLLLIF    : 1;            /*!< [9..9] Clear PLL Lock Interrupt Flag                                      */
      __IOM uint32_t CPLLUIF    : 1;            /*!< [10..10] Clear PLL Unlock Interrupt Flag                                  */
            uint32_t            : 2;
      __IOM uint32_t CRRIF      : 1;            /*!< [13..13] Clear Regulator Ready Interrupt Flag                             */
            uint32_t            : 18;
    } DSI_WIFCR_b;
  } ;
  __IM  uint32_t  RESERVED9;
  
  union {
    __IOM uint32_t DSI_WPCR1;                   /*!< (@ 0x00000418) DSI Wrapper PHY Configuration Register 1                   */
    
    struct {
      __IOM uint32_t UIX4       : 6;            /*!< [5..0] Unit Interval multiplied by 4                                      */
      __IOM uint32_t SWCL       : 1;            /*!< [6..6] Swap Clock Lane pins                                               */
      __IOM uint32_t SWDL0      : 1;            /*!< [7..7] Swap Data Lane 0 pins                                              */
      __IOM uint32_t SWDL1      : 1;            /*!< [8..8] Swap Data Lane 1 pins                                              */
      __IOM uint32_t HSICL      : 1;            /*!< [9..9] Invert Hight-Speed data signal on Clock Lane                       */
      __IOM uint32_t HSIDL0     : 1;            /*!< [10..10] Invert the Hight-Speed data signal on Data Lane 0                */
      __IOM uint32_t HSIDL1     : 1;            /*!< [11..11] Invert the High-Speed data signal on Data Lane 1                 */
      __IOM uint32_t FTXSMCL    : 1;            /*!< [12..12] Force in TX Stop Mode the Clock Lane                             */
      __IOM uint32_t FTXSMDL    : 1;            /*!< [13..13] Force in TX Stop Mode the Data Lanes                             */
      __IOM uint32_t CDOFFDL    : 1;            /*!< [14..14] Contention Detection OFF on Data Lanes                           */
            uint32_t            : 1;
      __IOM uint32_t TDDL       : 1;            /*!< [16..16] Turn Disable Data Lanes                                          */
            uint32_t            : 1;
      __IOM uint32_t PDEN       : 1;            /*!< [18..18] Pull-Down Enable                                                 */
      __IOM uint32_t TCLKPREPEN : 1;            /*!< [19..19] custom time for tCLK-PREPARE Enable                              */
      __IOM uint32_t TCLKZEROEN : 1;            /*!< [20..20] custom time for tCLK-ZERO Enable                                 */
      __IOM uint32_t THSPREPEN  : 1;            /*!< [21..21] custom time for tHS-PREPARE Enable                               */
      __IOM uint32_t THSTRAILEN : 1;            /*!< [22..22] custom time for tHS-TRAIL Enable                                 */
      __IOM uint32_t THSZEROEN  : 1;            /*!< [23..23] custom time for tHS-ZERO Enable                                  */
      __IOM uint32_t TLPXDEN    : 1;            /*!< [24..24] custom time for tLPX for Data lanes Enable                       */
      __IOM uint32_t THSEXITEN  : 1;            /*!< [25..25] custom time for tHS-EXIT Enable                                  */
      __IOM uint32_t TLPXCEN    : 1;            /*!< [26..26] custom time for tLPX for Clock lane Enable                       */
      __IOM uint32_t TCLKPOSTEN : 1;            /*!< [27..27] custom time for tCLK-POST Enable                                 */
            uint32_t            : 4;
    } DSI_WPCR1_b;
  } ;
  
  union {
    __IOM uint32_t DSI_WPCR2;                   /*!< (@ 0x0000041C) DSI Wrapper PHY Configuration Register 2                   */
    
    struct {
      __IOM uint32_t HSTXDCL    : 2;            /*!< [1..0] High-Speed Transmission Delay on Clock Lane                        */
      __IOM uint32_t HSTXDLL    : 2;            /*!< [3..2] High-Speed Transmission Delay on Data Lanes                        */
            uint32_t            : 2;
      __IOM uint32_t LPSRCL     : 2;            /*!< [7..6] Low-Power transmission Slew Rate Compensation on Clock
                                                     Lane                                                                      */
      __IOM uint32_t LPSRDL     : 2;            /*!< [9..8] Low-Power transmission Slew Rate Compensation on Data
                                                     Lanes                                                                     */
            uint32_t            : 2;
      __IOM uint32_t SDCC       : 1;            /*!< [12..12] SDD Control                                                      */
            uint32_t            : 3;
      __IOM uint32_t HSTXSRCCL  : 2;            /*!< [17..16] High-Speed Transmission Slew Rate Control on Clock
                                                     Lane                                                                      */
      __IOM uint32_t HSTXSRCDL  : 2;            /*!< [19..18] High-Speed Transmission Slew Rate Control on Data Lanes          */
            uint32_t            : 2;
      __IOM uint32_t FLPRXLPM   : 1;            /*!< [22..22] Forces LP Receiver in Low-Power Mode                             */
            uint32_t            : 2;
      __IOM uint32_t LPRXFT     : 2;            /*!< [26..25] Low-Power RX low-pass Filtering Tuning                           */
            uint32_t            : 5;
    } DSI_WPCR2_b;
  } ;
  
  union {
    __IOM uint32_t DSI_WPCR3;                   /*!< (@ 0x00000420) DSI Wrapper PHY Configuration Register 3                   */
    
    struct {
      __IOM uint32_t TCLKPREP   : 8;            /*!< [7..0] tCLK-PREPARE                                                       */
      __IOM uint32_t TCLKZEO    : 8;            /*!< [15..8] tCLK-ZERO                                                         */
      __IOM uint32_t THSPREP    : 8;            /*!< [23..16] tHS-PREPARE                                                      */
      __IOM uint32_t THSTRAIL   : 8;            /*!< [31..24] tHSTRAIL                                                         */
    } DSI_WPCR3_b;
  } ;
  
  union {
    __IOM uint32_t DSI_WPCR4;                   /*!< (@ 0x00000424) DSI_WPCR4                                                  */
    
    struct {
      __IOM uint32_t THSZERO    : 8;            /*!< [7..0] tHS-ZERO                                                           */
      __IOM uint32_t TLPXD      : 8;            /*!< [15..8] tLPX for Data lanes                                               */
      __IOM uint32_t THSEXIT    : 8;            /*!< [23..16] tHSEXIT                                                          */
      __IOM uint32_t TLPXC      : 8;            /*!< [31..24] tLPXC for Clock lane                                             */
    } DSI_WPCR4_b;
  } ;
  
  union {
    __IOM uint32_t DSI_WPCR5;                   /*!< (@ 0x00000428) DSI Wrapper PHY Configuration Register 5                   */
    
    struct {
      __IOM uint32_t THSZERO    : 8;            /*!< [7..0] tCLK-POST                                                          */
            uint32_t            : 24;
    } DSI_WPCR5_b;
  } ;
  __IM  uint32_t  RESERVED10;
  
  union {
    __IOM uint32_t DSI_WRPCR;                   /*!< (@ 0x00000430) DSI Wrapper Regulator and PLL Control Register             */
    
    struct {
      __IOM uint32_t PLLEN      : 1;            /*!< [0..0] PLL Enable                                                         */
            uint32_t            : 1;
      __IOM uint32_t NDIV       : 7;            /*!< [8..2] PLL Loop Division Factor                                           */
            uint32_t            : 2;
      __IOM uint32_t IDF        : 4;            /*!< [14..11] PLL Input Division Factor                                        */
            uint32_t            : 1;
      __IOM uint32_t ODF        : 2;            /*!< [17..16] PLL Output Division Factor                                       */
            uint32_t            : 6;
      __IOM uint32_t REGEN      : 1;            /*!< [24..24] Regulator Enable                                                 */
            uint32_t            : 7;
    } DSI_WRPCR_b;
  } ;
} DSI_Type;                                     /*!< Size = 1076 (0x434)                                                       */



/* =========================================================================================================================== */
/* ================                                            DSI                                            ================ */
/* =========================================================================================================================== */

/* ========================================================  DSI_VR  ========================================================= */
#define DSI_DSI_VR_VERSION_Pos            (0UL)                     /*!< VERSION (Bit 0)                                       */
#define DSI_DSI_VR_VERSION_Msk            (0xffffffffUL)            /*!< VERSION (Bitfield-Mask: 0xffffffff)                   */
/* ========================================================  DSI_CR  ========================================================= */
#define DSI_DSI_CR_EN_Pos                 (0UL)                     /*!< EN (Bit 0)                                            */
#define DSI_DSI_CR_EN_Msk                 (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ========================================================  DSI_CCR  ======================================================== */
#define DSI_DSI_CCR_TXECKDIV_Pos          (0UL)                     /*!< TXECKDIV (Bit 0)                                      */
#define DSI_DSI_CCR_TXECKDIV_Msk          (0xffUL)                  /*!< TXECKDIV (Bitfield-Mask: 0xff)                        */
#define DSI_DSI_CCR_TOCKDIV_Pos           (8UL)                     /*!< TOCKDIV (Bit 8)                                       */
#define DSI_DSI_CCR_TOCKDIV_Msk           (0xff00UL)                /*!< TOCKDIV (Bitfield-Mask: 0xff)                         */
/* ======================================================  DSI_LVCIDR  ======================================================= */
#define DSI_DSI_LVCIDR_VCID_Pos           (0UL)                     /*!< VCID (Bit 0)                                          */
#define DSI_DSI_LVCIDR_VCID_Msk           (0x3UL)                   /*!< VCID (Bitfield-Mask: 0x03)                            */
/* ======================================================  DSI_LCOLCR  ======================================================= */
#define DSI_DSI_LCOLCR_COLC_Pos           (0UL)                     /*!< COLC (Bit 0)                                          */
#define DSI_DSI_LCOLCR_COLC_Msk           (0xfUL)                   /*!< COLC (Bitfield-Mask: 0x0f)                            */
#define DSI_DSI_LCOLCR_LPE_Pos            (8UL)                     /*!< LPE (Bit 8)                                           */
#define DSI_DSI_LCOLCR_LPE_Msk            (0x100UL)                 /*!< LPE (Bitfield-Mask: 0x01)                             */
/* =======================================================  DSI_LPCR  ======================================================== */
#define DSI_DSI_LPCR_DEP_Pos              (0UL)                     /*!< DEP (Bit 0)                                           */
#define DSI_DSI_LPCR_DEP_Msk              (0x1UL)                   /*!< DEP (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_LPCR_VSP_Pos              (1UL)                     /*!< VSP (Bit 1)                                           */
#define DSI_DSI_LPCR_VSP_Msk              (0x2UL)                   /*!< VSP (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_LPCR_HSP_Pos              (2UL)                     /*!< HSP (Bit 2)                                           */
#define DSI_DSI_LPCR_HSP_Msk              (0x4UL)                   /*!< HSP (Bitfield-Mask: 0x01)                             */
/* =======================================================  DSI_LPMCR  ======================================================= */
#define DSI_DSI_LPMCR_VLPSIZE_Pos         (0UL)                     /*!< VLPSIZE (Bit 0)                                       */
#define DSI_DSI_LPMCR_VLPSIZE_Msk         (0xffUL)                  /*!< VLPSIZE (Bitfield-Mask: 0xff)                         */
#define DSI_DSI_LPMCR_LPSIZE_Pos          (16UL)                    /*!< LPSIZE (Bit 16)                                       */
#define DSI_DSI_LPMCR_LPSIZE_Msk          (0xff0000UL)              /*!< LPSIZE (Bitfield-Mask: 0xff)                          */
/* ========================================================  DSI_PCR  ======================================================== */
#define DSI_DSI_PCR_ETTXE_Pos             (0UL)                     /*!< ETTXE (Bit 0)                                         */
#define DSI_DSI_PCR_ETTXE_Msk             (0x1UL)                   /*!< ETTXE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_PCR_ETRXE_Pos             (1UL)                     /*!< ETRXE (Bit 1)                                         */
#define DSI_DSI_PCR_ETRXE_Msk             (0x2UL)                   /*!< ETRXE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_PCR_BTAE_Pos              (2UL)                     /*!< BTAE (Bit 2)                                          */
#define DSI_DSI_PCR_BTAE_Msk              (0x4UL)                   /*!< BTAE (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_PCR_ECCRXE_Pos            (3UL)                     /*!< ECCRXE (Bit 3)                                        */
#define DSI_DSI_PCR_ECCRXE_Msk            (0x8UL)                   /*!< ECCRXE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_PCR_CRCRXE_Pos            (4UL)                     /*!< CRCRXE (Bit 4)                                        */
#define DSI_DSI_PCR_CRCRXE_Msk            (0x10UL)                  /*!< CRCRXE (Bitfield-Mask: 0x01)                          */
/* ======================================================  DSI_GVCIDR  ======================================================= */
#define DSI_DSI_GVCIDR_VCID_Pos           (0UL)                     /*!< VCID (Bit 0)                                          */
#define DSI_DSI_GVCIDR_VCID_Msk           (0x3UL)                   /*!< VCID (Bitfield-Mask: 0x03)                            */
/* ========================================================  DSI_MCR  ======================================================== */
#define DSI_DSI_MCR_CMDM_Pos              (0UL)                     /*!< CMDM (Bit 0)                                          */
#define DSI_DSI_MCR_CMDM_Msk              (0x1UL)                   /*!< CMDM (Bitfield-Mask: 0x01)                            */
/* =======================================================  DSI_VMCR  ======================================================== */
#define DSI_DSI_VMCR_VMT_Pos              (0UL)                     /*!< VMT (Bit 0)                                           */
#define DSI_DSI_VMCR_VMT_Msk              (0x3UL)                   /*!< VMT (Bitfield-Mask: 0x03)                             */
#define DSI_DSI_VMCR_LPVSAE_Pos           (8UL)                     /*!< LPVSAE (Bit 8)                                        */
#define DSI_DSI_VMCR_LPVSAE_Msk           (0x100UL)                 /*!< LPVSAE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_VMCR_LPVBPE_Pos           (9UL)                     /*!< LPVBPE (Bit 9)                                        */
#define DSI_DSI_VMCR_LPVBPE_Msk           (0x200UL)                 /*!< LPVBPE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_VMCR_LPVFPE_Pos           (10UL)                    /*!< LPVFPE (Bit 10)                                       */
#define DSI_DSI_VMCR_LPVFPE_Msk           (0x400UL)                 /*!< LPVFPE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_VMCR_LPVAE_Pos            (11UL)                    /*!< LPVAE (Bit 11)                                        */
#define DSI_DSI_VMCR_LPVAE_Msk            (0x800UL)                 /*!< LPVAE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_VMCR_LPHBPE_Pos           (12UL)                    /*!< LPHBPE (Bit 12)                                       */
#define DSI_DSI_VMCR_LPHBPE_Msk           (0x1000UL)                /*!< LPHBPE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_VMCR_LPHFPE_Pos           (13UL)                    /*!< LPHFPE (Bit 13)                                       */
#define DSI_DSI_VMCR_LPHFPE_Msk           (0x2000UL)                /*!< LPHFPE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_VMCR_FBTAAE_Pos           (14UL)                    /*!< FBTAAE (Bit 14)                                       */
#define DSI_DSI_VMCR_FBTAAE_Msk           (0x4000UL)                /*!< FBTAAE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_VMCR_LPCE_Pos             (15UL)                    /*!< LPCE (Bit 15)                                         */
#define DSI_DSI_VMCR_LPCE_Msk             (0x8000UL)                /*!< LPCE (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_VMCR_PGE_Pos              (16UL)                    /*!< PGE (Bit 16)                                          */
#define DSI_DSI_VMCR_PGE_Msk              (0x10000UL)               /*!< PGE (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_VMCR_PGM_Pos              (20UL)                    /*!< PGM (Bit 20)                                          */
#define DSI_DSI_VMCR_PGM_Msk              (0x100000UL)              /*!< PGM (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_VMCR_PGO_Pos              (24UL)                    /*!< PGO (Bit 24)                                          */
#define DSI_DSI_VMCR_PGO_Msk              (0x1000000UL)             /*!< PGO (Bitfield-Mask: 0x01)                             */
/* =======================================================  DSI_VPCR  ======================================================== */
#define DSI_DSI_VPCR_VPSIZE_Pos           (0UL)                     /*!< VPSIZE (Bit 0)                                        */
#define DSI_DSI_VPCR_VPSIZE_Msk           (0x3fffUL)                /*!< VPSIZE (Bitfield-Mask: 0x3fff)                        */
/* =======================================================  DSI_VCCR  ======================================================== */
#define DSI_DSI_VCCR_NUMC_Pos             (0UL)                     /*!< NUMC (Bit 0)                                          */
#define DSI_DSI_VCCR_NUMC_Msk             (0x1fffUL)                /*!< NUMC (Bitfield-Mask: 0x1fff)                          */
/* =======================================================  DSI_VNPCR  ======================================================= */
#define DSI_DSI_VNPCR_NPSIZE_Pos          (0UL)                     /*!< NPSIZE (Bit 0)                                        */
#define DSI_DSI_VNPCR_NPSIZE_Msk          (0x1fffUL)                /*!< NPSIZE (Bitfield-Mask: 0x1fff)                        */
/* ======================================================  DSI_VHSACR  ======================================================= */
#define DSI_DSI_VHSACR_HSA_Pos            (0UL)                     /*!< HSA (Bit 0)                                           */
#define DSI_DSI_VHSACR_HSA_Msk            (0xfffUL)                 /*!< HSA (Bitfield-Mask: 0xfff)                            */
/* ======================================================  DSI_VHBPCR  ======================================================= */
#define DSI_DSI_VHBPCR_HBP_Pos            (0UL)                     /*!< HBP (Bit 0)                                           */
#define DSI_DSI_VHBPCR_HBP_Msk            (0xfffUL)                 /*!< HBP (Bitfield-Mask: 0xfff)                            */
/* =======================================================  DSI_VLCR  ======================================================== */
#define DSI_DSI_VLCR_HLINE_Pos            (0UL)                     /*!< HLINE (Bit 0)                                         */
#define DSI_DSI_VLCR_HLINE_Msk            (0x7fffUL)                /*!< HLINE (Bitfield-Mask: 0x7fff)                         */
/* ======================================================  DSI_VVSACR  ======================================================= */
#define DSI_DSI_VVSACR_VSA_Pos            (0UL)                     /*!< VSA (Bit 0)                                           */
#define DSI_DSI_VVSACR_VSA_Msk            (0x3ffUL)                 /*!< VSA (Bitfield-Mask: 0x3ff)                            */
/* ======================================================  DSI_VVBPCR  ======================================================= */
#define DSI_DSI_VVBPCR_VBP_Pos            (0UL)                     /*!< VBP (Bit 0)                                           */
#define DSI_DSI_VVBPCR_VBP_Msk            (0x3ffUL)                 /*!< VBP (Bitfield-Mask: 0x3ff)                            */
/* ======================================================  DSI_VVFPCR  ======================================================= */
#define DSI_DSI_VVFPCR_VFP_Pos            (0UL)                     /*!< VFP (Bit 0)                                           */
#define DSI_DSI_VVFPCR_VFP_Msk            (0x3ffUL)                 /*!< VFP (Bitfield-Mask: 0x3ff)                            */
/* =======================================================  DSI_VVACR  ======================================================= */
#define DSI_DSI_VVACR_VA_Pos              (0UL)                     /*!< VA (Bit 0)                                            */
#define DSI_DSI_VVACR_VA_Msk              (0x3fffUL)                /*!< VA (Bitfield-Mask: 0x3fff)                            */
/* =======================================================  DSI_LCCR  ======================================================== */
#define DSI_DSI_LCCR_CMDSIZE_Pos          (0UL)                     /*!< CMDSIZE (Bit 0)                                       */
#define DSI_DSI_LCCR_CMDSIZE_Msk          (0xffffUL)                /*!< CMDSIZE (Bitfield-Mask: 0xffff)                       */
/* =======================================================  DSI_CMCR  ======================================================== */
#define DSI_DSI_CMCR_TEARE_Pos            (0UL)                     /*!< TEARE (Bit 0)                                         */
#define DSI_DSI_CMCR_TEARE_Msk            (0x1UL)                   /*!< TEARE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_CMCR_ARE_Pos              (1UL)                     /*!< ARE (Bit 1)                                           */
#define DSI_DSI_CMCR_ARE_Msk              (0x2UL)                   /*!< ARE (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_CMCR_GSW0TX_Pos           (8UL)                     /*!< GSW0TX (Bit 8)                                        */
#define DSI_DSI_CMCR_GSW0TX_Msk           (0x100UL)                 /*!< GSW0TX (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_CMCR_GSW1TX_Pos           (9UL)                     /*!< GSW1TX (Bit 9)                                        */
#define DSI_DSI_CMCR_GSW1TX_Msk           (0x200UL)                 /*!< GSW1TX (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_CMCR_GSW2TX_Pos           (10UL)                    /*!< GSW2TX (Bit 10)                                       */
#define DSI_DSI_CMCR_GSW2TX_Msk           (0x400UL)                 /*!< GSW2TX (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_CMCR_GSR0TX_Pos           (11UL)                    /*!< GSR0TX (Bit 11)                                       */
#define DSI_DSI_CMCR_GSR0TX_Msk           (0x800UL)                 /*!< GSR0TX (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_CMCR_GSR1TX_Pos           (12UL)                    /*!< GSR1TX (Bit 12)                                       */
#define DSI_DSI_CMCR_GSR1TX_Msk           (0x1000UL)                /*!< GSR1TX (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_CMCR_GSR2TX_Pos           (13UL)                    /*!< GSR2TX (Bit 13)                                       */
#define DSI_DSI_CMCR_GSR2TX_Msk           (0x2000UL)                /*!< GSR2TX (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_CMCR_GLWTX_Pos            (14UL)                    /*!< GLWTX (Bit 14)                                        */
#define DSI_DSI_CMCR_GLWTX_Msk            (0x4000UL)                /*!< GLWTX (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_CMCR_DSW0TX_Pos           (16UL)                    /*!< DSW0TX (Bit 16)                                       */
#define DSI_DSI_CMCR_DSW0TX_Msk           (0x10000UL)               /*!< DSW0TX (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_CMCR_DSW1TX_Pos           (17UL)                    /*!< DSW1TX (Bit 17)                                       */
#define DSI_DSI_CMCR_DSW1TX_Msk           (0x20000UL)               /*!< DSW1TX (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_CMCR_DSR0TX_Pos           (18UL)                    /*!< DSR0TX (Bit 18)                                       */
#define DSI_DSI_CMCR_DSR0TX_Msk           (0x40000UL)               /*!< DSR0TX (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_CMCR_DLWTX_Pos            (19UL)                    /*!< DLWTX (Bit 19)                                        */
#define DSI_DSI_CMCR_DLWTX_Msk            (0x80000UL)               /*!< DLWTX (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_CMCR_MRDPS_Pos            (24UL)                    /*!< MRDPS (Bit 24)                                        */
#define DSI_DSI_CMCR_MRDPS_Msk            (0x1000000UL)             /*!< MRDPS (Bitfield-Mask: 0x01)                           */
/* =======================================================  DSI_GHCR  ======================================================== */
#define DSI_DSI_GHCR_DT_Pos               (0UL)                     /*!< DT (Bit 0)                                            */
#define DSI_DSI_GHCR_DT_Msk               (0x3fUL)                  /*!< DT (Bitfield-Mask: 0x3f)                              */
#define DSI_DSI_GHCR_VCID_Pos             (6UL)                     /*!< VCID (Bit 6)                                          */
#define DSI_DSI_GHCR_VCID_Msk             (0xc0UL)                  /*!< VCID (Bitfield-Mask: 0x03)                            */
#define DSI_DSI_GHCR_WCLSB_Pos            (8UL)                     /*!< WCLSB (Bit 8)                                         */
#define DSI_DSI_GHCR_WCLSB_Msk            (0xff00UL)                /*!< WCLSB (Bitfield-Mask: 0xff)                           */
#define DSI_DSI_GHCR_WCMSB_Pos            (16UL)                    /*!< WCMSB (Bit 16)                                        */
#define DSI_DSI_GHCR_WCMSB_Msk            (0xff0000UL)              /*!< WCMSB (Bitfield-Mask: 0xff)                           */
/* =======================================================  DSI_GPDR  ======================================================== */
#define DSI_DSI_GPDR_DATA1_Pos            (0UL)                     /*!< DATA1 (Bit 0)                                         */
#define DSI_DSI_GPDR_DATA1_Msk            (0xffUL)                  /*!< DATA1 (Bitfield-Mask: 0xff)                           */
#define DSI_DSI_GPDR_DATA2_Pos            (8UL)                     /*!< DATA2 (Bit 8)                                         */
#define DSI_DSI_GPDR_DATA2_Msk            (0xff00UL)                /*!< DATA2 (Bitfield-Mask: 0xff)                           */
#define DSI_DSI_GPDR_DATA3_Pos            (16UL)                    /*!< DATA3 (Bit 16)                                        */
#define DSI_DSI_GPDR_DATA3_Msk            (0xff0000UL)              /*!< DATA3 (Bitfield-Mask: 0xff)                           */
#define DSI_DSI_GPDR_DATA4_Pos            (24UL)                    /*!< DATA4 (Bit 24)                                        */
#define DSI_DSI_GPDR_DATA4_Msk            (0xff000000UL)            /*!< DATA4 (Bitfield-Mask: 0xff)                           */
/* =======================================================  DSI_GPSR  ======================================================== */
#define DSI_DSI_GPSR_CMDFE_Pos            (0UL)                     /*!< CMDFE (Bit 0)                                         */
#define DSI_DSI_GPSR_CMDFE_Msk            (0x1UL)                   /*!< CMDFE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_GPSR_CMDFF_Pos            (1UL)                     /*!< CMDFF (Bit 1)                                         */
#define DSI_DSI_GPSR_CMDFF_Msk            (0x2UL)                   /*!< CMDFF (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_GPSR_PWRFE_Pos            (2UL)                     /*!< PWRFE (Bit 2)                                         */
#define DSI_DSI_GPSR_PWRFE_Msk            (0x4UL)                   /*!< PWRFE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_GPSR_PWRFF_Pos            (3UL)                     /*!< PWRFF (Bit 3)                                         */
#define DSI_DSI_GPSR_PWRFF_Msk            (0x8UL)                   /*!< PWRFF (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_GPSR_PRDFE_Pos            (4UL)                     /*!< PRDFE (Bit 4)                                         */
#define DSI_DSI_GPSR_PRDFE_Msk            (0x10UL)                  /*!< PRDFE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_GPSR_PRDFF_Pos            (5UL)                     /*!< PRDFF (Bit 5)                                         */
#define DSI_DSI_GPSR_PRDFF_Msk            (0x20UL)                  /*!< PRDFF (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_GPSR_RCB_Pos              (6UL)                     /*!< RCB (Bit 6)                                           */
#define DSI_DSI_GPSR_RCB_Msk              (0x40UL)                  /*!< RCB (Bitfield-Mask: 0x01)                             */
/* =======================================================  DSI_TCCR0  ======================================================= */
#define DSI_DSI_TCCR0_LPRX_TOCNT_Pos      (0UL)                     /*!< LPRX_TOCNT (Bit 0)                                    */
#define DSI_DSI_TCCR0_LPRX_TOCNT_Msk      (0xffffUL)                /*!< LPRX_TOCNT (Bitfield-Mask: 0xffff)                    */
#define DSI_DSI_TCCR0_HSTX_TOCNT_Pos      (16UL)                    /*!< HSTX_TOCNT (Bit 16)                                   */
#define DSI_DSI_TCCR0_HSTX_TOCNT_Msk      (0xffff0000UL)            /*!< HSTX_TOCNT (Bitfield-Mask: 0xffff)                    */
/* =======================================================  DSI_TCCR1  ======================================================= */
#define DSI_DSI_TCCR1_HSRD_TOCNT_Pos      (0UL)                     /*!< HSRD_TOCNT (Bit 0)                                    */
#define DSI_DSI_TCCR1_HSRD_TOCNT_Msk      (0xffffUL)                /*!< HSRD_TOCNT (Bitfield-Mask: 0xffff)                    */
/* =======================================================  DSI_TCCR2  ======================================================= */
#define DSI_DSI_TCCR2_LPRD_TOCNT_Pos      (0UL)                     /*!< LPRD_TOCNT (Bit 0)                                    */
#define DSI_DSI_TCCR2_LPRD_TOCNT_Msk      (0xffffUL)                /*!< LPRD_TOCNT (Bitfield-Mask: 0xffff)                    */
/* =======================================================  DSI_TCCR3  ======================================================= */
#define DSI_DSI_TCCR3_HSWR_TOCNT_Pos      (0UL)                     /*!< HSWR_TOCNT (Bit 0)                                    */
#define DSI_DSI_TCCR3_HSWR_TOCNT_Msk      (0xffffUL)                /*!< HSWR_TOCNT (Bitfield-Mask: 0xffff)                    */
#define DSI_DSI_TCCR3_PM_Pos              (24UL)                    /*!< PM (Bit 24)                                           */
#define DSI_DSI_TCCR3_PM_Msk              (0x1000000UL)             /*!< PM (Bitfield-Mask: 0x01)                              */
/* =======================================================  DSI_TCCR4  ======================================================= */
#define DSI_DSI_TCCR4_LSWR_TOCNT_Pos      (0UL)                     /*!< LSWR_TOCNT (Bit 0)                                    */
#define DSI_DSI_TCCR4_LSWR_TOCNT_Msk      (0xffffUL)                /*!< LSWR_TOCNT (Bitfield-Mask: 0xffff)                    */
/* =======================================================  DSI_TCCR5  ======================================================= */
#define DSI_DSI_TCCR5_BTA_TOCNT_Pos       (0UL)                     /*!< BTA_TOCNT (Bit 0)                                     */
#define DSI_DSI_TCCR5_BTA_TOCNT_Msk       (0xffffUL)                /*!< BTA_TOCNT (Bitfield-Mask: 0xffff)                     */
/* =======================================================  DSI_CLCR  ======================================================== */
#define DSI_DSI_CLCR_DPCC_Pos             (0UL)                     /*!< DPCC (Bit 0)                                          */
#define DSI_DSI_CLCR_DPCC_Msk             (0x1UL)                   /*!< DPCC (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_CLCR_ACR_Pos              (1UL)                     /*!< ACR (Bit 1)                                           */
#define DSI_DSI_CLCR_ACR_Msk              (0x2UL)                   /*!< ACR (Bitfield-Mask: 0x01)                             */
/* =======================================================  DSI_CLTCR  ======================================================= */
#define DSI_DSI_CLTCR_LP2HS_TIME_Pos      (0UL)                     /*!< LP2HS_TIME (Bit 0)                                    */
#define DSI_DSI_CLTCR_LP2HS_TIME_Msk      (0x3ffUL)                 /*!< LP2HS_TIME (Bitfield-Mask: 0x3ff)                     */
#define DSI_DSI_CLTCR_HS2LP_TIME_Pos      (16UL)                    /*!< HS2LP_TIME (Bit 16)                                   */
#define DSI_DSI_CLTCR_HS2LP_TIME_Msk      (0x3ff0000UL)             /*!< HS2LP_TIME (Bitfield-Mask: 0x3ff)                     */
/* =======================================================  DSI_DLTCR  ======================================================= */
#define DSI_DSI_DLTCR_MRD_TIME_Pos        (0UL)                     /*!< MRD_TIME (Bit 0)                                      */
#define DSI_DSI_DLTCR_MRD_TIME_Msk        (0x7fffUL)                /*!< MRD_TIME (Bitfield-Mask: 0x7fff)                      */
#define DSI_DSI_DLTCR_LP2HS_TIME_Pos      (16UL)                    /*!< LP2HS_TIME (Bit 16)                                   */
#define DSI_DSI_DLTCR_LP2HS_TIME_Msk      (0xff0000UL)              /*!< LP2HS_TIME (Bitfield-Mask: 0xff)                      */
#define DSI_DSI_DLTCR_HS2LP_TIME_Pos      (24UL)                    /*!< HS2LP_TIME (Bit 24)                                   */
#define DSI_DSI_DLTCR_HS2LP_TIME_Msk      (0xff000000UL)            /*!< HS2LP_TIME (Bitfield-Mask: 0xff)                      */
/* =======================================================  DSI_PCTLR  ======================================================= */
#define DSI_DSI_PCTLR_DEN_Pos             (1UL)                     /*!< DEN (Bit 1)                                           */
#define DSI_DSI_PCTLR_DEN_Msk             (0x2UL)                   /*!< DEN (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_PCTLR_CKE_Pos             (2UL)                     /*!< CKE (Bit 2)                                           */
#define DSI_DSI_PCTLR_CKE_Msk             (0x4UL)                   /*!< CKE (Bitfield-Mask: 0x01)                             */
/* ======================================================  DSI_PCONFR  ======================================================= */
#define DSI_DSI_PCONFR_NL_Pos             (0UL)                     /*!< NL (Bit 0)                                            */
#define DSI_DSI_PCONFR_NL_Msk             (0x3UL)                   /*!< NL (Bitfield-Mask: 0x03)                              */
#define DSI_DSI_PCONFR_SW_TIME_Pos        (8UL)                     /*!< SW_TIME (Bit 8)                                       */
#define DSI_DSI_PCONFR_SW_TIME_Msk        (0xff00UL)                /*!< SW_TIME (Bitfield-Mask: 0xff)                         */
/* =======================================================  DSI_PUCR  ======================================================== */
#define DSI_DSI_PUCR_URCL_Pos             (0UL)                     /*!< URCL (Bit 0)                                          */
#define DSI_DSI_PUCR_URCL_Msk             (0x1UL)                   /*!< URCL (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_PUCR_UECL_Pos             (1UL)                     /*!< UECL (Bit 1)                                          */
#define DSI_DSI_PUCR_UECL_Msk             (0x2UL)                   /*!< UECL (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_PUCR_URDL_Pos             (2UL)                     /*!< URDL (Bit 2)                                          */
#define DSI_DSI_PUCR_URDL_Msk             (0x4UL)                   /*!< URDL (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_PUCR_UEDL_Pos             (3UL)                     /*!< UEDL (Bit 3)                                          */
#define DSI_DSI_PUCR_UEDL_Msk             (0x8UL)                   /*!< UEDL (Bitfield-Mask: 0x01)                            */
/* =======================================================  DSI_PTTCR  ======================================================= */
#define DSI_DSI_PTTCR_TX_TRIG_Pos         (0UL)                     /*!< TX_TRIG (Bit 0)                                       */
#define DSI_DSI_PTTCR_TX_TRIG_Msk         (0xfUL)                   /*!< TX_TRIG (Bitfield-Mask: 0x0f)                         */
/* ========================================================  DSI_PSR  ======================================================== */
#define DSI_DSI_PSR_PD_Pos                (1UL)                     /*!< PD (Bit 1)                                            */
#define DSI_DSI_PSR_PD_Msk                (0x2UL)                   /*!< PD (Bitfield-Mask: 0x01)                              */
#define DSI_DSI_PSR_PSSC_Pos              (2UL)                     /*!< PSSC (Bit 2)                                          */
#define DSI_DSI_PSR_PSSC_Msk              (0x4UL)                   /*!< PSSC (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_PSR_UANC_Pos              (3UL)                     /*!< UANC (Bit 3)                                          */
#define DSI_DSI_PSR_UANC_Msk              (0x8UL)                   /*!< UANC (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_PSR_PSS0_Pos              (4UL)                     /*!< PSS0 (Bit 4)                                          */
#define DSI_DSI_PSR_PSS0_Msk              (0x10UL)                  /*!< PSS0 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_PSR_UAN0_Pos              (5UL)                     /*!< UAN0 (Bit 5)                                          */
#define DSI_DSI_PSR_UAN0_Msk              (0x20UL)                  /*!< UAN0 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_PSR_RUE0_Pos              (6UL)                     /*!< RUE0 (Bit 6)                                          */
#define DSI_DSI_PSR_RUE0_Msk              (0x40UL)                  /*!< RUE0 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_PSR_PSS1_Pos              (7UL)                     /*!< PSS1 (Bit 7)                                          */
#define DSI_DSI_PSR_PSS1_Msk              (0x80UL)                  /*!< PSS1 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_PSR_UAN1_Pos              (8UL)                     /*!< UAN1 (Bit 8)                                          */
#define DSI_DSI_PSR_UAN1_Msk              (0x100UL)                 /*!< UAN1 (Bitfield-Mask: 0x01)                            */
/* =======================================================  DSI_ISR0  ======================================================== */
#define DSI_DSI_ISR0_AE0_Pos              (0UL)                     /*!< AE0 (Bit 0)                                           */
#define DSI_DSI_ISR0_AE0_Msk              (0x1UL)                   /*!< AE0 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_AE1_Pos              (1UL)                     /*!< AE1 (Bit 1)                                           */
#define DSI_DSI_ISR0_AE1_Msk              (0x2UL)                   /*!< AE1 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_AE2_Pos              (2UL)                     /*!< AE2 (Bit 2)                                           */
#define DSI_DSI_ISR0_AE2_Msk              (0x4UL)                   /*!< AE2 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_AE3_Pos              (3UL)                     /*!< AE3 (Bit 3)                                           */
#define DSI_DSI_ISR0_AE3_Msk              (0x8UL)                   /*!< AE3 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_AE4_Pos              (4UL)                     /*!< AE4 (Bit 4)                                           */
#define DSI_DSI_ISR0_AE4_Msk              (0x10UL)                  /*!< AE4 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_AE5_Pos              (5UL)                     /*!< AE5 (Bit 5)                                           */
#define DSI_DSI_ISR0_AE5_Msk              (0x20UL)                  /*!< AE5 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_AE6_Pos              (6UL)                     /*!< AE6 (Bit 6)                                           */
#define DSI_DSI_ISR0_AE6_Msk              (0x40UL)                  /*!< AE6 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_AE7_Pos              (7UL)                     /*!< AE7 (Bit 7)                                           */
#define DSI_DSI_ISR0_AE7_Msk              (0x80UL)                  /*!< AE7 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_AE8_Pos              (8UL)                     /*!< AE8 (Bit 8)                                           */
#define DSI_DSI_ISR0_AE8_Msk              (0x100UL)                 /*!< AE8 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_AE9_Pos              (9UL)                     /*!< AE9 (Bit 9)                                           */
#define DSI_DSI_ISR0_AE9_Msk              (0x200UL)                 /*!< AE9 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_AE10_Pos             (10UL)                    /*!< AE10 (Bit 10)                                         */
#define DSI_DSI_ISR0_AE10_Msk             (0x400UL)                 /*!< AE10 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_ISR0_AE11_Pos             (11UL)                    /*!< AE11 (Bit 11)                                         */
#define DSI_DSI_ISR0_AE11_Msk             (0x800UL)                 /*!< AE11 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_ISR0_AE12_Pos             (12UL)                    /*!< AE12 (Bit 12)                                         */
#define DSI_DSI_ISR0_AE12_Msk             (0x1000UL)                /*!< AE12 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_ISR0_AE13_Pos             (13UL)                    /*!< AE13 (Bit 13)                                         */
#define DSI_DSI_ISR0_AE13_Msk             (0x2000UL)                /*!< AE13 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_ISR0_AE14_Pos             (14UL)                    /*!< AE14 (Bit 14)                                         */
#define DSI_DSI_ISR0_AE14_Msk             (0x4000UL)                /*!< AE14 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_ISR0_AE15_Pos             (15UL)                    /*!< AE15 (Bit 15)                                         */
#define DSI_DSI_ISR0_AE15_Msk             (0x8000UL)                /*!< AE15 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_ISR0_PE0_Pos              (16UL)                    /*!< PE0 (Bit 16)                                          */
#define DSI_DSI_ISR0_PE0_Msk              (0x10000UL)               /*!< PE0 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_PE1_Pos              (17UL)                    /*!< PE1 (Bit 17)                                          */
#define DSI_DSI_ISR0_PE1_Msk              (0x20000UL)               /*!< PE1 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_PE2_Pos              (18UL)                    /*!< PE2 (Bit 18)                                          */
#define DSI_DSI_ISR0_PE2_Msk              (0x40000UL)               /*!< PE2 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_PE3_Pos              (19UL)                    /*!< PE3 (Bit 19)                                          */
#define DSI_DSI_ISR0_PE3_Msk              (0x80000UL)               /*!< PE3 (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR0_PE4_Pos              (20UL)                    /*!< PE4 (Bit 20)                                          */
#define DSI_DSI_ISR0_PE4_Msk              (0x100000UL)              /*!< PE4 (Bitfield-Mask: 0x01)                             */
/* =======================================================  DSI_ISR1  ======================================================== */
#define DSI_DSI_ISR1_TOHSTX_Pos           (0UL)                     /*!< TOHSTX (Bit 0)                                        */
#define DSI_DSI_ISR1_TOHSTX_Msk           (0x1UL)                   /*!< TOHSTX (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_ISR1_TOLPRX_Pos           (1UL)                     /*!< TOLPRX (Bit 1)                                        */
#define DSI_DSI_ISR1_TOLPRX_Msk           (0x2UL)                   /*!< TOLPRX (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_ISR1_ECCSE_Pos            (2UL)                     /*!< ECCSE (Bit 2)                                         */
#define DSI_DSI_ISR1_ECCSE_Msk            (0x4UL)                   /*!< ECCSE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_ISR1_ECCME_Pos            (3UL)                     /*!< ECCME (Bit 3)                                         */
#define DSI_DSI_ISR1_ECCME_Msk            (0x8UL)                   /*!< ECCME (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_ISR1_CRCE_Pos             (4UL)                     /*!< CRCE (Bit 4)                                          */
#define DSI_DSI_ISR1_CRCE_Msk             (0x10UL)                  /*!< CRCE (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_ISR1_PSE_Pos              (5UL)                     /*!< PSE (Bit 5)                                           */
#define DSI_DSI_ISR1_PSE_Msk              (0x20UL)                  /*!< PSE (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_ISR1_EOTPE_Pos            (6UL)                     /*!< EOTPE (Bit 6)                                         */
#define DSI_DSI_ISR1_EOTPE_Msk            (0x40UL)                  /*!< EOTPE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_ISR1_LPWRE_Pos            (7UL)                     /*!< LPWRE (Bit 7)                                         */
#define DSI_DSI_ISR1_LPWRE_Msk            (0x80UL)                  /*!< LPWRE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_ISR1_GCWRE_Pos            (8UL)                     /*!< GCWRE (Bit 8)                                         */
#define DSI_DSI_ISR1_GCWRE_Msk            (0x100UL)                 /*!< GCWRE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_ISR1_GPWRE_Pos            (9UL)                     /*!< GPWRE (Bit 9)                                         */
#define DSI_DSI_ISR1_GPWRE_Msk            (0x200UL)                 /*!< GPWRE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_ISR1_GPTXE_Pos            (10UL)                    /*!< GPTXE (Bit 10)                                        */
#define DSI_DSI_ISR1_GPTXE_Msk            (0x400UL)                 /*!< GPTXE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_ISR1_GPRDE_Pos            (11UL)                    /*!< GPRDE (Bit 11)                                        */
#define DSI_DSI_ISR1_GPRDE_Msk            (0x800UL)                 /*!< GPRDE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_ISR1_GPRXE_Pos            (12UL)                    /*!< GPRXE (Bit 12)                                        */
#define DSI_DSI_ISR1_GPRXE_Msk            (0x1000UL)                /*!< GPRXE (Bitfield-Mask: 0x01)                           */
/* =======================================================  DSI_IER0  ======================================================== */
#define DSI_DSI_IER0_AE0IE_Pos            (0UL)                     /*!< AE0IE (Bit 0)                                         */
#define DSI_DSI_IER0_AE0IE_Msk            (0x1UL)                   /*!< AE0IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_AE1IE_Pos            (1UL)                     /*!< AE1IE (Bit 1)                                         */
#define DSI_DSI_IER0_AE1IE_Msk            (0x2UL)                   /*!< AE1IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_AE2IE_Pos            (2UL)                     /*!< AE2IE (Bit 2)                                         */
#define DSI_DSI_IER0_AE2IE_Msk            (0x4UL)                   /*!< AE2IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_AE3IE_Pos            (3UL)                     /*!< AE3IE (Bit 3)                                         */
#define DSI_DSI_IER0_AE3IE_Msk            (0x8UL)                   /*!< AE3IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_AE4IE_Pos            (4UL)                     /*!< AE4IE (Bit 4)                                         */
#define DSI_DSI_IER0_AE4IE_Msk            (0x10UL)                  /*!< AE4IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_AE5IE_Pos            (5UL)                     /*!< AE5IE (Bit 5)                                         */
#define DSI_DSI_IER0_AE5IE_Msk            (0x20UL)                  /*!< AE5IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_AE6IE_Pos            (6UL)                     /*!< AE6IE (Bit 6)                                         */
#define DSI_DSI_IER0_AE6IE_Msk            (0x40UL)                  /*!< AE6IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_AE7IE_Pos            (7UL)                     /*!< AE7IE (Bit 7)                                         */
#define DSI_DSI_IER0_AE7IE_Msk            (0x80UL)                  /*!< AE7IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_AE8IE_Pos            (8UL)                     /*!< AE8IE (Bit 8)                                         */
#define DSI_DSI_IER0_AE8IE_Msk            (0x100UL)                 /*!< AE8IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_AE9IE_Pos            (9UL)                     /*!< AE9IE (Bit 9)                                         */
#define DSI_DSI_IER0_AE9IE_Msk            (0x200UL)                 /*!< AE9IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_AE10IE_Pos           (10UL)                    /*!< AE10IE (Bit 10)                                       */
#define DSI_DSI_IER0_AE10IE_Msk           (0x400UL)                 /*!< AE10IE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_IER0_AE11IE_Pos           (11UL)                    /*!< AE11IE (Bit 11)                                       */
#define DSI_DSI_IER0_AE11IE_Msk           (0x800UL)                 /*!< AE11IE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_IER0_AE12IE_Pos           (12UL)                    /*!< AE12IE (Bit 12)                                       */
#define DSI_DSI_IER0_AE12IE_Msk           (0x1000UL)                /*!< AE12IE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_IER0_AE13IE_Pos           (13UL)                    /*!< AE13IE (Bit 13)                                       */
#define DSI_DSI_IER0_AE13IE_Msk           (0x2000UL)                /*!< AE13IE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_IER0_AE14IE_Pos           (14UL)                    /*!< AE14IE (Bit 14)                                       */
#define DSI_DSI_IER0_AE14IE_Msk           (0x4000UL)                /*!< AE14IE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_IER0_AE15IE_Pos           (15UL)                    /*!< AE15IE (Bit 15)                                       */
#define DSI_DSI_IER0_AE15IE_Msk           (0x8000UL)                /*!< AE15IE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_IER0_PE0IE_Pos            (16UL)                    /*!< PE0IE (Bit 16)                                        */
#define DSI_DSI_IER0_PE0IE_Msk            (0x10000UL)               /*!< PE0IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_PE1IE_Pos            (17UL)                    /*!< PE1IE (Bit 17)                                        */
#define DSI_DSI_IER0_PE1IE_Msk            (0x20000UL)               /*!< PE1IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_PE2IE_Pos            (18UL)                    /*!< PE2IE (Bit 18)                                        */
#define DSI_DSI_IER0_PE2IE_Msk            (0x40000UL)               /*!< PE2IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_PE3IE_Pos            (19UL)                    /*!< PE3IE (Bit 19)                                        */
#define DSI_DSI_IER0_PE3IE_Msk            (0x80000UL)               /*!< PE3IE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER0_PE4IE_Pos            (20UL)                    /*!< PE4IE (Bit 20)                                        */
#define DSI_DSI_IER0_PE4IE_Msk            (0x100000UL)              /*!< PE4IE (Bitfield-Mask: 0x01)                           */
/* =======================================================  DSI_IER1  ======================================================== */
#define DSI_DSI_IER1_TOHSTXIE_Pos         (0UL)                     /*!< TOHSTXIE (Bit 0)                                      */
#define DSI_DSI_IER1_TOHSTXIE_Msk         (0x1UL)                   /*!< TOHSTXIE (Bitfield-Mask: 0x01)                        */
#define DSI_DSI_IER1_TOLPRXIE_Pos         (1UL)                     /*!< TOLPRXIE (Bit 1)                                      */
#define DSI_DSI_IER1_TOLPRXIE_Msk         (0x2UL)                   /*!< TOLPRXIE (Bitfield-Mask: 0x01)                        */
#define DSI_DSI_IER1_ECCSEIE_Pos          (2UL)                     /*!< ECCSEIE (Bit 2)                                       */
#define DSI_DSI_IER1_ECCSEIE_Msk          (0x4UL)                   /*!< ECCSEIE (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_IER1_ECCMEIE_Pos          (3UL)                     /*!< ECCMEIE (Bit 3)                                       */
#define DSI_DSI_IER1_ECCMEIE_Msk          (0x8UL)                   /*!< ECCMEIE (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_IER1_CRCEIE_Pos           (4UL)                     /*!< CRCEIE (Bit 4)                                        */
#define DSI_DSI_IER1_CRCEIE_Msk           (0x10UL)                  /*!< CRCEIE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_IER1_PSEIE_Pos            (5UL)                     /*!< PSEIE (Bit 5)                                         */
#define DSI_DSI_IER1_PSEIE_Msk            (0x20UL)                  /*!< PSEIE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_IER1_EOTPEIE_Pos          (6UL)                     /*!< EOTPEIE (Bit 6)                                       */
#define DSI_DSI_IER1_EOTPEIE_Msk          (0x40UL)                  /*!< EOTPEIE (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_IER1_LPWREIE_Pos          (7UL)                     /*!< LPWREIE (Bit 7)                                       */
#define DSI_DSI_IER1_LPWREIE_Msk          (0x80UL)                  /*!< LPWREIE (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_IER1_GCWREIE_Pos          (8UL)                     /*!< GCWREIE (Bit 8)                                       */
#define DSI_DSI_IER1_GCWREIE_Msk          (0x100UL)                 /*!< GCWREIE (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_IER1_GPWREIE_Pos          (9UL)                     /*!< GPWREIE (Bit 9)                                       */
#define DSI_DSI_IER1_GPWREIE_Msk          (0x200UL)                 /*!< GPWREIE (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_IER1_GPTXEIE_Pos          (10UL)                    /*!< GPTXEIE (Bit 10)                                      */
#define DSI_DSI_IER1_GPTXEIE_Msk          (0x400UL)                 /*!< GPTXEIE (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_IER1_GPRDEIE_Pos          (11UL)                    /*!< GPRDEIE (Bit 11)                                      */
#define DSI_DSI_IER1_GPRDEIE_Msk          (0x800UL)                 /*!< GPRDEIE (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_IER1_GPRXEIE_Pos          (12UL)                    /*!< GPRXEIE (Bit 12)                                      */
#define DSI_DSI_IER1_GPRXEIE_Msk          (0x1000UL)                /*!< GPRXEIE (Bitfield-Mask: 0x01)                         */
/* =======================================================  DSI_FIR0  ======================================================== */
#define DSI_DSI_FIR0_FAE0_Pos             (0UL)                     /*!< FAE0 (Bit 0)                                          */
#define DSI_DSI_FIR0_FAE0_Msk             (0x1UL)                   /*!< FAE0 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FAE1_Pos             (1UL)                     /*!< FAE1 (Bit 1)                                          */
#define DSI_DSI_FIR0_FAE1_Msk             (0x2UL)                   /*!< FAE1 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FAE2_Pos             (2UL)                     /*!< FAE2 (Bit 2)                                          */
#define DSI_DSI_FIR0_FAE2_Msk             (0x4UL)                   /*!< FAE2 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FAE3_Pos             (3UL)                     /*!< FAE3 (Bit 3)                                          */
#define DSI_DSI_FIR0_FAE3_Msk             (0x8UL)                   /*!< FAE3 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FAE4_Pos             (4UL)                     /*!< FAE4 (Bit 4)                                          */
#define DSI_DSI_FIR0_FAE4_Msk             (0x10UL)                  /*!< FAE4 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FAE5_Pos             (5UL)                     /*!< FAE5 (Bit 5)                                          */
#define DSI_DSI_FIR0_FAE5_Msk             (0x20UL)                  /*!< FAE5 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FAE6_Pos             (6UL)                     /*!< FAE6 (Bit 6)                                          */
#define DSI_DSI_FIR0_FAE6_Msk             (0x40UL)                  /*!< FAE6 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FAE7_Pos             (7UL)                     /*!< FAE7 (Bit 7)                                          */
#define DSI_DSI_FIR0_FAE7_Msk             (0x80UL)                  /*!< FAE7 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FAE8_Pos             (8UL)                     /*!< FAE8 (Bit 8)                                          */
#define DSI_DSI_FIR0_FAE8_Msk             (0x100UL)                 /*!< FAE8 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FAE9_Pos             (9UL)                     /*!< FAE9 (Bit 9)                                          */
#define DSI_DSI_FIR0_FAE9_Msk             (0x200UL)                 /*!< FAE9 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FAE10_Pos            (10UL)                    /*!< FAE10 (Bit 10)                                        */
#define DSI_DSI_FIR0_FAE10_Msk            (0x400UL)                 /*!< FAE10 (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_FIR0_FAE11_Pos            (11UL)                    /*!< FAE11 (Bit 11)                                        */
#define DSI_DSI_FIR0_FAE11_Msk            (0x800UL)                 /*!< FAE11 (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_FIR0_FAE12_Pos            (12UL)                    /*!< FAE12 (Bit 12)                                        */
#define DSI_DSI_FIR0_FAE12_Msk            (0x1000UL)                /*!< FAE12 (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_FIR0_FAE13_Pos            (13UL)                    /*!< FAE13 (Bit 13)                                        */
#define DSI_DSI_FIR0_FAE13_Msk            (0x2000UL)                /*!< FAE13 (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_FIR0_FAE14_Pos            (14UL)                    /*!< FAE14 (Bit 14)                                        */
#define DSI_DSI_FIR0_FAE14_Msk            (0x4000UL)                /*!< FAE14 (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_FIR0_FAE15_Pos            (15UL)                    /*!< FAE15 (Bit 15)                                        */
#define DSI_DSI_FIR0_FAE15_Msk            (0x8000UL)                /*!< FAE15 (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_FIR0_FPE0_Pos             (16UL)                    /*!< FPE0 (Bit 16)                                         */
#define DSI_DSI_FIR0_FPE0_Msk             (0x10000UL)               /*!< FPE0 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FPE1_Pos             (17UL)                    /*!< FPE1 (Bit 17)                                         */
#define DSI_DSI_FIR0_FPE1_Msk             (0x20000UL)               /*!< FPE1 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FPE2_Pos             (18UL)                    /*!< FPE2 (Bit 18)                                         */
#define DSI_DSI_FIR0_FPE2_Msk             (0x40000UL)               /*!< FPE2 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FPE3_Pos             (19UL)                    /*!< FPE3 (Bit 19)                                         */
#define DSI_DSI_FIR0_FPE3_Msk             (0x80000UL)               /*!< FPE3 (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR0_FPE4_Pos             (20UL)                    /*!< FPE4 (Bit 20)                                         */
#define DSI_DSI_FIR0_FPE4_Msk             (0x100000UL)              /*!< FPE4 (Bitfield-Mask: 0x01)                            */
/* =======================================================  DSI_FIR1  ======================================================== */
#define DSI_DSI_FIR1_FTOHSTX_Pos          (0UL)                     /*!< FTOHSTX (Bit 0)                                       */
#define DSI_DSI_FIR1_FTOHSTX_Msk          (0x1UL)                   /*!< FTOHSTX (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_FIR1_FTOLPRX_Pos          (1UL)                     /*!< FTOLPRX (Bit 1)                                       */
#define DSI_DSI_FIR1_FTOLPRX_Msk          (0x2UL)                   /*!< FTOLPRX (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_FIR1_FECCSE_Pos           (2UL)                     /*!< FECCSE (Bit 2)                                        */
#define DSI_DSI_FIR1_FECCSE_Msk           (0x4UL)                   /*!< FECCSE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_FIR1_FECCME_Pos           (3UL)                     /*!< FECCME (Bit 3)                                        */
#define DSI_DSI_FIR1_FECCME_Msk           (0x8UL)                   /*!< FECCME (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_FIR1_FCRCE_Pos            (4UL)                     /*!< FCRCE (Bit 4)                                         */
#define DSI_DSI_FIR1_FCRCE_Msk            (0x10UL)                  /*!< FCRCE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_FIR1_FPSE_Pos             (5UL)                     /*!< FPSE (Bit 5)                                          */
#define DSI_DSI_FIR1_FPSE_Msk             (0x20UL)                  /*!< FPSE (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_FIR1_FEOTPE_Pos           (6UL)                     /*!< FEOTPE (Bit 6)                                        */
#define DSI_DSI_FIR1_FEOTPE_Msk           (0x40UL)                  /*!< FEOTPE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_FIR1_FLPWRE_Pos           (7UL)                     /*!< FLPWRE (Bit 7)                                        */
#define DSI_DSI_FIR1_FLPWRE_Msk           (0x80UL)                  /*!< FLPWRE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_FIR1_FGCWRE_Pos           (8UL)                     /*!< FGCWRE (Bit 8)                                        */
#define DSI_DSI_FIR1_FGCWRE_Msk           (0x100UL)                 /*!< FGCWRE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_FIR1_FGPWRE_Pos           (9UL)                     /*!< FGPWRE (Bit 9)                                        */
#define DSI_DSI_FIR1_FGPWRE_Msk           (0x200UL)                 /*!< FGPWRE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_FIR1_FGPTXE_Pos           (10UL)                    /*!< FGPTXE (Bit 10)                                       */
#define DSI_DSI_FIR1_FGPTXE_Msk           (0x400UL)                 /*!< FGPTXE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_FIR1_FGPRDE_Pos           (11UL)                    /*!< FGPRDE (Bit 11)                                       */
#define DSI_DSI_FIR1_FGPRDE_Msk           (0x800UL)                 /*!< FGPRDE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_FIR1_FGPRXE_Pos           (12UL)                    /*!< FGPRXE (Bit 12)                                       */
#define DSI_DSI_FIR1_FGPRXE_Msk           (0x1000UL)                /*!< FGPRXE (Bitfield-Mask: 0x01)                          */
/* =======================================================  DSI_VSCR  ======================================================== */
#define DSI_DSI_VSCR_EN_Pos               (0UL)                     /*!< EN (Bit 0)                                            */
#define DSI_DSI_VSCR_EN_Msk               (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
#define DSI_DSI_VSCR_UR_Pos               (8UL)                     /*!< UR (Bit 8)                                            */
#define DSI_DSI_VSCR_UR_Msk               (0x100UL)                 /*!< UR (Bitfield-Mask: 0x01)                              */
/* ======================================================  DSI_LCVCIDR  ====================================================== */
#define DSI_DSI_LCVCIDR_VCID_Pos          (0UL)                     /*!< VCID (Bit 0)                                          */
#define DSI_DSI_LCVCIDR_VCID_Msk          (0x3UL)                   /*!< VCID (Bitfield-Mask: 0x03)                            */
/* =======================================================  DSI_LCCCR  ======================================================= */
#define DSI_DSI_LCCCR_COLC_Pos            (0UL)                     /*!< COLC (Bit 0)                                          */
#define DSI_DSI_LCCCR_COLC_Msk            (0xfUL)                   /*!< COLC (Bitfield-Mask: 0x0f)                            */
#define DSI_DSI_LCCCR_LPE_Pos             (8UL)                     /*!< LPE (Bit 8)                                           */
#define DSI_DSI_LCCCR_LPE_Msk             (0x100UL)                 /*!< LPE (Bitfield-Mask: 0x01)                             */
/* ======================================================  DSI_LPMCCR  ======================================================= */
#define DSI_DSI_LPMCCR_VLPSIZE_Pos        (0UL)                     /*!< VLPSIZE (Bit 0)                                       */
#define DSI_DSI_LPMCCR_VLPSIZE_Msk        (0xffUL)                  /*!< VLPSIZE (Bitfield-Mask: 0xff)                         */
#define DSI_DSI_LPMCCR_LPSIZE_Pos         (16UL)                    /*!< LPSIZE (Bit 16)                                       */
#define DSI_DSI_LPMCCR_LPSIZE_Msk         (0xff0000UL)              /*!< LPSIZE (Bitfield-Mask: 0xff)                          */
/* =======================================================  DSI_VMCCR  ======================================================= */
#define DSI_DSI_VMCCR_VMT_Pos             (0UL)                     /*!< VMT (Bit 0)                                           */
#define DSI_DSI_VMCCR_VMT_Msk             (0x3UL)                   /*!< VMT (Bitfield-Mask: 0x03)                             */
#define DSI_DSI_VMCCR_LPVSAE_Pos          (2UL)                     /*!< LPVSAE (Bit 2)                                        */
#define DSI_DSI_VMCCR_LPVSAE_Msk          (0x4UL)                   /*!< LPVSAE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_VMCCR_LPVBPE_Pos          (3UL)                     /*!< LPVBPE (Bit 3)                                        */
#define DSI_DSI_VMCCR_LPVBPE_Msk          (0x8UL)                   /*!< LPVBPE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_VMCCR_LPVFPE_Pos          (4UL)                     /*!< LPVFPE (Bit 4)                                        */
#define DSI_DSI_VMCCR_LPVFPE_Msk          (0x10UL)                  /*!< LPVFPE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_VMCCR_LPVAE_Pos           (5UL)                     /*!< LPVAE (Bit 5)                                         */
#define DSI_DSI_VMCCR_LPVAE_Msk           (0x20UL)                  /*!< LPVAE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_VMCCR_LPHBPE_Pos          (6UL)                     /*!< LPHBPE (Bit 6)                                        */
#define DSI_DSI_VMCCR_LPHBPE_Msk          (0x40UL)                  /*!< LPHBPE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_VMCCR_LPHFE_Pos           (7UL)                     /*!< LPHFE (Bit 7)                                         */
#define DSI_DSI_VMCCR_LPHFE_Msk           (0x80UL)                  /*!< LPHFE (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_VMCCR_FBTAAE_Pos          (8UL)                     /*!< FBTAAE (Bit 8)                                        */
#define DSI_DSI_VMCCR_FBTAAE_Msk          (0x100UL)                 /*!< FBTAAE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_VMCCR_LPCE_Pos            (9UL)                     /*!< LPCE (Bit 9)                                          */
#define DSI_DSI_VMCCR_LPCE_Msk            (0x200UL)                 /*!< LPCE (Bitfield-Mask: 0x01)                            */
/* =======================================================  DSI_VPCCR  ======================================================= */
#define DSI_DSI_VPCCR_VPSIZE_Pos          (0UL)                     /*!< VPSIZE (Bit 0)                                        */
#define DSI_DSI_VPCCR_VPSIZE_Msk          (0x3fffUL)                /*!< VPSIZE (Bitfield-Mask: 0x3fff)                        */
/* =======================================================  DSI_VCCCR  ======================================================= */
#define DSI_DSI_VCCCR_NUMC_Pos            (0UL)                     /*!< NUMC (Bit 0)                                          */
#define DSI_DSI_VCCCR_NUMC_Msk            (0x1fffUL)                /*!< NUMC (Bitfield-Mask: 0x1fff)                          */
/* ======================================================  DSI_VNPCCR  ======================================================= */
#define DSI_DSI_VNPCCR_NPSIZE_Pos         (0UL)                     /*!< NPSIZE (Bit 0)                                        */
#define DSI_DSI_VNPCCR_NPSIZE_Msk         (0x1fffUL)                /*!< NPSIZE (Bitfield-Mask: 0x1fff)                        */
/* ======================================================  DSI_VHSACCR  ====================================================== */
#define DSI_DSI_VHSACCR_HSA_Pos           (0UL)                     /*!< HSA (Bit 0)                                           */
#define DSI_DSI_VHSACCR_HSA_Msk           (0xfffUL)                 /*!< HSA (Bitfield-Mask: 0xfff)                            */
/* ======================================================  DSI_VHBPCCR  ====================================================== */
#define DSI_DSI_VHBPCCR_HBP_Pos           (0UL)                     /*!< HBP (Bit 0)                                           */
#define DSI_DSI_VHBPCCR_HBP_Msk           (0xfffUL)                 /*!< HBP (Bitfield-Mask: 0xfff)                            */
/* =======================================================  DSI_VLCCR  ======================================================= */
#define DSI_DSI_VLCCR_HLINE_Pos           (0UL)                     /*!< HLINE (Bit 0)                                         */
#define DSI_DSI_VLCCR_HLINE_Msk           (0x7fffUL)                /*!< HLINE (Bitfield-Mask: 0x7fff)                         */
/* ======================================================  DSI_VVSACCR  ====================================================== */
#define DSI_DSI_VVSACCR_VSA_Pos           (0UL)                     /*!< VSA (Bit 0)                                           */
#define DSI_DSI_VVSACCR_VSA_Msk           (0x3ffUL)                 /*!< VSA (Bitfield-Mask: 0x3ff)                            */
/* ======================================================  DSI_VVBPCCR  ====================================================== */
#define DSI_DSI_VVBPCCR_VBP_Pos           (0UL)                     /*!< VBP (Bit 0)                                           */
#define DSI_DSI_VVBPCCR_VBP_Msk           (0x3ffUL)                 /*!< VBP (Bitfield-Mask: 0x3ff)                            */
/* ======================================================  DSI_VVFPCCR  ====================================================== */
#define DSI_DSI_VVFPCCR_VFP_Pos           (0UL)                     /*!< VFP (Bit 0)                                           */
#define DSI_DSI_VVFPCCR_VFP_Msk           (0x3ffUL)                 /*!< VFP (Bitfield-Mask: 0x3ff)                            */
/* ======================================================  DSI_VVACCR  ======================================================= */
#define DSI_DSI_VVACCR_VA_Pos             (0UL)                     /*!< VA (Bit 0)                                            */
#define DSI_DSI_VVACCR_VA_Msk             (0x3fffUL)                /*!< VA (Bitfield-Mask: 0x3fff)                            */
/* =======================================================  DSI_WCFGR  ======================================================= */
#define DSI_DSI_WCFGR_VSPOL_Pos           (7UL)                     /*!< VSPOL (Bit 7)                                         */
#define DSI_DSI_WCFGR_VSPOL_Msk           (0x80UL)                  /*!< VSPOL (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WCFGR_AR_Pos              (6UL)                     /*!< AR (Bit 6)                                            */
#define DSI_DSI_WCFGR_AR_Msk              (0x40UL)                  /*!< AR (Bitfield-Mask: 0x01)                              */
#define DSI_DSI_WCFGR_TEPOL_Pos           (5UL)                     /*!< TEPOL (Bit 5)                                         */
#define DSI_DSI_WCFGR_TEPOL_Msk           (0x20UL)                  /*!< TEPOL (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WCFGR_TESRC_Pos           (4UL)                     /*!< TESRC (Bit 4)                                         */
#define DSI_DSI_WCFGR_TESRC_Msk           (0x10UL)                  /*!< TESRC (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WCFGR_COLMUX_Pos          (1UL)                     /*!< COLMUX (Bit 1)                                        */
#define DSI_DSI_WCFGR_COLMUX_Msk          (0xeUL)                   /*!< COLMUX (Bitfield-Mask: 0x07)                          */
#define DSI_DSI_WCFGR_DSIM_Pos            (0UL)                     /*!< DSIM (Bit 0)                                          */
#define DSI_DSI_WCFGR_DSIM_Msk            (0x1UL)                   /*!< DSIM (Bitfield-Mask: 0x01)                            */
/* ========================================================  DSI_WCR  ======================================================== */
#define DSI_DSI_WCR_DSIEN_Pos             (3UL)                     /*!< DSIEN (Bit 3)                                         */
#define DSI_DSI_WCR_DSIEN_Msk             (0x8UL)                   /*!< DSIEN (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WCR_LTDCEN_Pos            (2UL)                     /*!< LTDCEN (Bit 2)                                        */
#define DSI_DSI_WCR_LTDCEN_Msk            (0x4UL)                   /*!< LTDCEN (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_WCR_SHTDN_Pos             (1UL)                     /*!< SHTDN (Bit 1)                                         */
#define DSI_DSI_WCR_SHTDN_Msk             (0x2UL)                   /*!< SHTDN (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WCR_COLM_Pos              (0UL)                     /*!< COLM (Bit 0)                                          */
#define DSI_DSI_WCR_COLM_Msk              (0x1UL)                   /*!< COLM (Bitfield-Mask: 0x01)                            */
/* =======================================================  DSI_WIER  ======================================================== */
#define DSI_DSI_WIER_RRIE_Pos             (13UL)                    /*!< RRIE (Bit 13)                                         */
#define DSI_DSI_WIER_RRIE_Msk             (0x2000UL)                /*!< RRIE (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_WIER_PLLUIE_Pos           (10UL)                    /*!< PLLUIE (Bit 10)                                       */
#define DSI_DSI_WIER_PLLUIE_Msk           (0x400UL)                 /*!< PLLUIE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_WIER_PLLLIE_Pos           (9UL)                     /*!< PLLLIE (Bit 9)                                        */
#define DSI_DSI_WIER_PLLLIE_Msk           (0x200UL)                 /*!< PLLLIE (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_WIER_ERIE_Pos             (1UL)                     /*!< ERIE (Bit 1)                                          */
#define DSI_DSI_WIER_ERIE_Msk             (0x2UL)                   /*!< ERIE (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_WIER_TEIE_Pos             (0UL)                     /*!< TEIE (Bit 0)                                          */
#define DSI_DSI_WIER_TEIE_Msk             (0x1UL)                   /*!< TEIE (Bitfield-Mask: 0x01)                            */
/* =======================================================  DSI_WISR  ======================================================== */
#define DSI_DSI_WISR_RRIF_Pos             (13UL)                    /*!< RRIF (Bit 13)                                         */
#define DSI_DSI_WISR_RRIF_Msk             (0x2000UL)                /*!< RRIF (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_WISR_RRS_Pos              (12UL)                    /*!< RRS (Bit 12)                                          */
#define DSI_DSI_WISR_RRS_Msk              (0x1000UL)                /*!< RRS (Bitfield-Mask: 0x01)                             */
#define DSI_DSI_WISR_PLLUIF_Pos           (10UL)                    /*!< PLLUIF (Bit 10)                                       */
#define DSI_DSI_WISR_PLLUIF_Msk           (0x400UL)                 /*!< PLLUIF (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_WISR_PLLLIF_Pos           (9UL)                     /*!< PLLLIF (Bit 9)                                        */
#define DSI_DSI_WISR_PLLLIF_Msk           (0x200UL)                 /*!< PLLLIF (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_WISR_PLLLS_Pos            (8UL)                     /*!< PLLLS (Bit 8)                                         */
#define DSI_DSI_WISR_PLLLS_Msk            (0x100UL)                 /*!< PLLLS (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WISR_BUSY_Pos             (2UL)                     /*!< BUSY (Bit 2)                                          */
#define DSI_DSI_WISR_BUSY_Msk             (0x4UL)                   /*!< BUSY (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_WISR_ERIF_Pos             (1UL)                     /*!< ERIF (Bit 1)                                          */
#define DSI_DSI_WISR_ERIF_Msk             (0x2UL)                   /*!< ERIF (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_WISR_TEIF_Pos             (0UL)                     /*!< TEIF (Bit 0)                                          */
#define DSI_DSI_WISR_TEIF_Msk             (0x1UL)                   /*!< TEIF (Bitfield-Mask: 0x01)                            */
/* =======================================================  DSI_WIFCR  ======================================================= */
#define DSI_DSI_WIFCR_CRRIF_Pos           (13UL)                    /*!< CRRIF (Bit 13)                                        */
#define DSI_DSI_WIFCR_CRRIF_Msk           (0x2000UL)                /*!< CRRIF (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WIFCR_CPLLUIF_Pos         (10UL)                    /*!< CPLLUIF (Bit 10)                                      */
#define DSI_DSI_WIFCR_CPLLUIF_Msk         (0x400UL)                 /*!< CPLLUIF (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_WIFCR_CPLLLIF_Pos         (9UL)                     /*!< CPLLLIF (Bit 9)                                       */
#define DSI_DSI_WIFCR_CPLLLIF_Msk         (0x200UL)                 /*!< CPLLLIF (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_WIFCR_CERIF_Pos           (1UL)                     /*!< CERIF (Bit 1)                                         */
#define DSI_DSI_WIFCR_CERIF_Msk           (0x2UL)                   /*!< CERIF (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WIFCR_CTEIF_Pos           (0UL)                     /*!< CTEIF (Bit 0)                                         */
#define DSI_DSI_WIFCR_CTEIF_Msk           (0x1UL)                   /*!< CTEIF (Bitfield-Mask: 0x01)                           */
/* =======================================================  DSI_WPCR1  ======================================================= */
#define DSI_DSI_WPCR1_TCLKPOSTEN_Pos      (27UL)                    /*!< TCLKPOSTEN (Bit 27)                                   */
#define DSI_DSI_WPCR1_TCLKPOSTEN_Msk      (0x8000000UL)             /*!< TCLKPOSTEN (Bitfield-Mask: 0x01)                      */
#define DSI_DSI_WPCR1_TLPXCEN_Pos         (26UL)                    /*!< TLPXCEN (Bit 26)                                      */
#define DSI_DSI_WPCR1_TLPXCEN_Msk         (0x4000000UL)             /*!< TLPXCEN (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_WPCR1_THSEXITEN_Pos       (25UL)                    /*!< THSEXITEN (Bit 25)                                    */
#define DSI_DSI_WPCR1_THSEXITEN_Msk       (0x2000000UL)             /*!< THSEXITEN (Bitfield-Mask: 0x01)                       */
#define DSI_DSI_WPCR1_TLPXDEN_Pos         (24UL)                    /*!< TLPXDEN (Bit 24)                                      */
#define DSI_DSI_WPCR1_TLPXDEN_Msk         (0x1000000UL)             /*!< TLPXDEN (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_WPCR1_THSZEROEN_Pos       (23UL)                    /*!< THSZEROEN (Bit 23)                                    */
#define DSI_DSI_WPCR1_THSZEROEN_Msk       (0x800000UL)              /*!< THSZEROEN (Bitfield-Mask: 0x01)                       */
#define DSI_DSI_WPCR1_THSTRAILEN_Pos      (22UL)                    /*!< THSTRAILEN (Bit 22)                                   */
#define DSI_DSI_WPCR1_THSTRAILEN_Msk      (0x400000UL)              /*!< THSTRAILEN (Bitfield-Mask: 0x01)                      */
#define DSI_DSI_WPCR1_THSPREPEN_Pos       (21UL)                    /*!< THSPREPEN (Bit 21)                                    */
#define DSI_DSI_WPCR1_THSPREPEN_Msk       (0x200000UL)              /*!< THSPREPEN (Bitfield-Mask: 0x01)                       */
#define DSI_DSI_WPCR1_TCLKZEROEN_Pos      (20UL)                    /*!< TCLKZEROEN (Bit 20)                                   */
#define DSI_DSI_WPCR1_TCLKZEROEN_Msk      (0x100000UL)              /*!< TCLKZEROEN (Bitfield-Mask: 0x01)                      */
#define DSI_DSI_WPCR1_TCLKPREPEN_Pos      (19UL)                    /*!< TCLKPREPEN (Bit 19)                                   */
#define DSI_DSI_WPCR1_TCLKPREPEN_Msk      (0x80000UL)               /*!< TCLKPREPEN (Bitfield-Mask: 0x01)                      */
#define DSI_DSI_WPCR1_PDEN_Pos            (18UL)                    /*!< PDEN (Bit 18)                                         */
#define DSI_DSI_WPCR1_PDEN_Msk            (0x40000UL)               /*!< PDEN (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_WPCR1_TDDL_Pos            (16UL)                    /*!< TDDL (Bit 16)                                         */
#define DSI_DSI_WPCR1_TDDL_Msk            (0x10000UL)               /*!< TDDL (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_WPCR1_CDOFFDL_Pos         (14UL)                    /*!< CDOFFDL (Bit 14)                                      */
#define DSI_DSI_WPCR1_CDOFFDL_Msk         (0x4000UL)                /*!< CDOFFDL (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_WPCR1_FTXSMDL_Pos         (13UL)                    /*!< FTXSMDL (Bit 13)                                      */
#define DSI_DSI_WPCR1_FTXSMDL_Msk         (0x2000UL)                /*!< FTXSMDL (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_WPCR1_FTXSMCL_Pos         (12UL)                    /*!< FTXSMCL (Bit 12)                                      */
#define DSI_DSI_WPCR1_FTXSMCL_Msk         (0x1000UL)                /*!< FTXSMCL (Bitfield-Mask: 0x01)                         */
#define DSI_DSI_WPCR1_HSIDL1_Pos          (11UL)                    /*!< HSIDL1 (Bit 11)                                       */
#define DSI_DSI_WPCR1_HSIDL1_Msk          (0x800UL)                 /*!< HSIDL1 (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_WPCR1_HSIDL0_Pos          (10UL)                    /*!< HSIDL0 (Bit 10)                                       */
#define DSI_DSI_WPCR1_HSIDL0_Msk          (0x400UL)                 /*!< HSIDL0 (Bitfield-Mask: 0x01)                          */
#define DSI_DSI_WPCR1_HSICL_Pos           (9UL)                     /*!< HSICL (Bit 9)                                         */
#define DSI_DSI_WPCR1_HSICL_Msk           (0x200UL)                 /*!< HSICL (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WPCR1_SWDL1_Pos           (8UL)                     /*!< SWDL1 (Bit 8)                                         */
#define DSI_DSI_WPCR1_SWDL1_Msk           (0x100UL)                 /*!< SWDL1 (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WPCR1_SWDL0_Pos           (7UL)                     /*!< SWDL0 (Bit 7)                                         */
#define DSI_DSI_WPCR1_SWDL0_Msk           (0x80UL)                  /*!< SWDL0 (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WPCR1_SWCL_Pos            (6UL)                     /*!< SWCL (Bit 6)                                          */
#define DSI_DSI_WPCR1_SWCL_Msk            (0x40UL)                  /*!< SWCL (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_WPCR1_UIX4_Pos            (0UL)                     /*!< UIX4 (Bit 0)                                          */
#define DSI_DSI_WPCR1_UIX4_Msk            (0x3fUL)                  /*!< UIX4 (Bitfield-Mask: 0x3f)                            */
/* =======================================================  DSI_WPCR2  ======================================================= */
#define DSI_DSI_WPCR2_LPRXFT_Pos          (25UL)                    /*!< LPRXFT (Bit 25)                                       */
#define DSI_DSI_WPCR2_LPRXFT_Msk          (0x6000000UL)             /*!< LPRXFT (Bitfield-Mask: 0x03)                          */
#define DSI_DSI_WPCR2_FLPRXLPM_Pos        (22UL)                    /*!< FLPRXLPM (Bit 22)                                     */
#define DSI_DSI_WPCR2_FLPRXLPM_Msk        (0x400000UL)              /*!< FLPRXLPM (Bitfield-Mask: 0x01)                        */
#define DSI_DSI_WPCR2_HSTXSRCDL_Pos       (18UL)                    /*!< HSTXSRCDL (Bit 18)                                    */
#define DSI_DSI_WPCR2_HSTXSRCDL_Msk       (0xc0000UL)               /*!< HSTXSRCDL (Bitfield-Mask: 0x03)                       */
#define DSI_DSI_WPCR2_HSTXSRCCL_Pos       (16UL)                    /*!< HSTXSRCCL (Bit 16)                                    */
#define DSI_DSI_WPCR2_HSTXSRCCL_Msk       (0x30000UL)               /*!< HSTXSRCCL (Bitfield-Mask: 0x03)                       */
#define DSI_DSI_WPCR2_SDCC_Pos            (12UL)                    /*!< SDCC (Bit 12)                                         */
#define DSI_DSI_WPCR2_SDCC_Msk            (0x1000UL)                /*!< SDCC (Bitfield-Mask: 0x01)                            */
#define DSI_DSI_WPCR2_LPSRDL_Pos          (8UL)                     /*!< LPSRDL (Bit 8)                                        */
#define DSI_DSI_WPCR2_LPSRDL_Msk          (0x300UL)                 /*!< LPSRDL (Bitfield-Mask: 0x03)                          */
#define DSI_DSI_WPCR2_LPSRCL_Pos          (6UL)                     /*!< LPSRCL (Bit 6)                                        */
#define DSI_DSI_WPCR2_LPSRCL_Msk          (0xc0UL)                  /*!< LPSRCL (Bitfield-Mask: 0x03)                          */
#define DSI_DSI_WPCR2_HSTXDLL_Pos         (2UL)                     /*!< HSTXDLL (Bit 2)                                       */
#define DSI_DSI_WPCR2_HSTXDLL_Msk         (0xcUL)                   /*!< HSTXDLL (Bitfield-Mask: 0x03)                         */
#define DSI_DSI_WPCR2_HSTXDCL_Pos         (0UL)                     /*!< HSTXDCL (Bit 0)                                       */
#define DSI_DSI_WPCR2_HSTXDCL_Msk         (0x3UL)                   /*!< HSTXDCL (Bitfield-Mask: 0x03)                         */
/* =======================================================  DSI_WPCR3  ======================================================= */
#define DSI_DSI_WPCR3_THSTRAIL_Pos        (24UL)                    /*!< THSTRAIL (Bit 24)                                     */
#define DSI_DSI_WPCR3_THSTRAIL_Msk        (0xff000000UL)            /*!< THSTRAIL (Bitfield-Mask: 0xff)                        */
#define DSI_DSI_WPCR3_THSPREP_Pos         (16UL)                    /*!< THSPREP (Bit 16)                                      */
#define DSI_DSI_WPCR3_THSPREP_Msk         (0xff0000UL)              /*!< THSPREP (Bitfield-Mask: 0xff)                         */
#define DSI_DSI_WPCR3_TCLKZEO_Pos         (8UL)                     /*!< TCLKZEO (Bit 8)                                       */
#define DSI_DSI_WPCR3_TCLKZEO_Msk         (0xff00UL)                /*!< TCLKZEO (Bitfield-Mask: 0xff)                         */
#define DSI_DSI_WPCR3_TCLKPREP_Pos        (0UL)                     /*!< TCLKPREP (Bit 0)                                      */
#define DSI_DSI_WPCR3_TCLKPREP_Msk        (0xffUL)                  /*!< TCLKPREP (Bitfield-Mask: 0xff)                        */
/* =======================================================  DSI_WPCR4  ======================================================= */
#define DSI_DSI_WPCR4_TLPXC_Pos           (24UL)                    /*!< TLPXC (Bit 24)                                        */
#define DSI_DSI_WPCR4_TLPXC_Msk           (0xff000000UL)            /*!< TLPXC (Bitfield-Mask: 0xff)                           */
#define DSI_DSI_WPCR4_THSEXIT_Pos         (16UL)                    /*!< THSEXIT (Bit 16)                                      */
#define DSI_DSI_WPCR4_THSEXIT_Msk         (0xff0000UL)              /*!< THSEXIT (Bitfield-Mask: 0xff)                         */
#define DSI_DSI_WPCR4_TLPXD_Pos           (8UL)                     /*!< TLPXD (Bit 8)                                         */
#define DSI_DSI_WPCR4_TLPXD_Msk           (0xff00UL)                /*!< TLPXD (Bitfield-Mask: 0xff)                           */
#define DSI_DSI_WPCR4_THSZERO_Pos         (0UL)                     /*!< THSZERO (Bit 0)                                       */
#define DSI_DSI_WPCR4_THSZERO_Msk         (0xffUL)                  /*!< THSZERO (Bitfield-Mask: 0xff)                         */
/* =======================================================  DSI_WPCR5  ======================================================= */
#define DSI_DSI_WPCR5_THSZERO_Pos         (0UL)                     /*!< THSZERO (Bit 0)                                       */
#define DSI_DSI_WPCR5_THSZERO_Msk         (0xffUL)                  /*!< THSZERO (Bitfield-Mask: 0xff)                         */
/* =======================================================  DSI_WRPCR  ======================================================= */
#define DSI_DSI_WRPCR_REGEN_Pos           (24UL)                    /*!< REGEN (Bit 24)                                        */
#define DSI_DSI_WRPCR_REGEN_Msk           (0x1000000UL)             /*!< REGEN (Bitfield-Mask: 0x01)                           */
#define DSI_DSI_WRPCR_ODF_Pos             (16UL)                    /*!< ODF (Bit 16)                                          */
#define DSI_DSI_WRPCR_ODF_Msk             (0x30000UL)               /*!< ODF (Bitfield-Mask: 0x03)                             */
#define DSI_DSI_WRPCR_IDF_Pos             (11UL)                    /*!< IDF (Bit 11)                                          */
#define DSI_DSI_WRPCR_IDF_Msk             (0x7800UL)                /*!< IDF (Bitfield-Mask: 0x0f)                             */
#define DSI_DSI_WRPCR_NDIV_Pos            (2UL)                     /*!< NDIV (Bit 2)                                          */
#define DSI_DSI_WRPCR_NDIV_Msk            (0x1fcUL)                 /*!< NDIV (Bitfield-Mask: 0x7f)                            */
#define DSI_DSI_WRPCR_PLLEN_Pos           (0UL)                     /*!< PLLEN (Bit 0)                                         */
#define DSI_DSI_WRPCR_PLLEN_Msk           (0x1UL)                   /*!< PLLEN (Bitfield-Mask: 0x01)                           */

