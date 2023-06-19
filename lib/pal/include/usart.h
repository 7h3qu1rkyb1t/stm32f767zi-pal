#include "core.h"
#define USART6                      ((volatile USART6_Type*)            USART6_BASE)
#define USART1                      ((volatile USART6_Type*)            USART1_BASE)
#define USART3                      ((volatile USART6_Type*)            USART3_BASE)
#define USART2                      ((volatile USART6_Type*)            USART2_BASE)
#define UART5                       ((volatile USART6_Type*)            UART5_BASE)
#define UART4                       ((volatile USART6_Type*)            UART4_BASE)
#define UART8                       ((volatile USART6_Type*)            UART8_BASE)
#define UART7                       ((volatile USART6_Type*)            UART7_BASE)

#define USART6_BASE                 0x40011400UL
#define USART1_BASE                 0x40011000UL
#define USART3_BASE                 0x40004800UL
#define USART2_BASE                 0x40004400UL
#define UART5_BASE                  0x40005000UL
#define UART4_BASE                  0x40004C00UL
#define UART8_BASE                  0x40007C00UL
#define UART7_BASE                  0x40007800UL


/* =========================================================================================================================== */
/* ================                                          USART6                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief Universal synchronous asynchronous receiver
      transmitter (USART6)
  */

typedef struct {                                /*!< (@ 0x40011400) USART6 Structure                                           */
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000000) Control register 1                                         */
    
    struct {
      __IOM uint32_t UE         : 1;            /*!< [0..0] USART enable                                                       */
      __IOM uint32_t UESM       : 1;            /*!< [1..1] USART enable in Stop mode                                          */
      __IOM uint32_t RE         : 1;            /*!< [2..2] Receiver enable                                                    */
      __IOM uint32_t TE         : 1;            /*!< [3..3] Transmitter enable                                                 */
      __IOM uint32_t IDLEIE     : 1;            /*!< [4..4] IDLE interrupt enable                                              */
      __IOM uint32_t RXNEIE     : 1;            /*!< [5..5] RXNE interrupt enable                                              */
      __IOM uint32_t TCIE       : 1;            /*!< [6..6] Transmission complete interrupt enable                             */
      __IOM uint32_t TXEIE      : 1;            /*!< [7..7] interrupt enable                                                   */
      __IOM uint32_t PEIE       : 1;            /*!< [8..8] PE interrupt enable                                                */
      __IOM uint32_t PS         : 1;            /*!< [9..9] Parity selection                                                   */
      __IOM uint32_t PCE        : 1;            /*!< [10..10] Parity control enable                                            */
      __IOM uint32_t WAKE       : 1;            /*!< [11..11] Receiver wakeup method                                           */
      __IOM uint32_t M0         : 1;            /*!< [12..12] Word length                                                      */
      __IOM uint32_t MME        : 1;            /*!< [13..13] Mute mode enable                                                 */
      __IOM uint32_t CMIE       : 1;            /*!< [14..14] Character match interrupt enable                                 */
      __IOM uint32_t OVER8      : 1;            /*!< [15..15] Oversampling mode                                                */
      __IOM uint32_t DEDT0      : 1;            /*!< [16..16] DEDT0                                                            */
      __IOM uint32_t DEDT1      : 1;            /*!< [17..17] DEDT1                                                            */
      __IOM uint32_t DEDT2      : 1;            /*!< [18..18] DEDT2                                                            */
      __IOM uint32_t DEDT3      : 1;            /*!< [19..19] DEDT3                                                            */
      __IOM uint32_t DEDT4      : 1;            /*!< [20..20] Driver Enable de-assertion time                                  */
      __IOM uint32_t DEAT0      : 1;            /*!< [21..21] DEAT0                                                            */
      __IOM uint32_t DEAT1      : 1;            /*!< [22..22] DEAT1                                                            */
      __IOM uint32_t DEAT2      : 1;            /*!< [23..23] DEAT2                                                            */
      __IOM uint32_t DEAT3      : 1;            /*!< [24..24] DEAT3                                                            */
      __IOM uint32_t DEAT4      : 1;            /*!< [25..25] Driver Enable assertion time                                     */
      __IOM uint32_t RTOIE      : 1;            /*!< [26..26] Receiver timeout interrupt enable                                */
      __IOM uint32_t EOBIE      : 1;            /*!< [27..27] End of Block interrupt enable                                    */
      __IOM uint32_t M1         : 1;            /*!< [28..28] Word length                                                      */
            uint32_t            : 3;
    } CR1_b;
  } ;
  
  union {
    __IOM uint32_t CR2;                         /*!< (@ 0x00000004) Control register 2                                         */
    
    struct {
            uint32_t            : 4;
      __IOM uint32_t ADDM7      : 1;            /*!< [4..4] 7-bit Address Detection/4-bit Address Detection                    */
      __IOM uint32_t LBDL       : 1;            /*!< [5..5] LIN break detection length                                         */
      __IOM uint32_t LBDIE      : 1;            /*!< [6..6] LIN break detection interrupt enable                               */
            uint32_t            : 1;
      __IOM uint32_t LBCL       : 1;            /*!< [8..8] Last bit clock pulse                                               */
      __IOM uint32_t CPHA       : 1;            /*!< [9..9] Clock phase                                                        */
      __IOM uint32_t CPOL       : 1;            /*!< [10..10] Clock polarity                                                   */
      __IOM uint32_t CLKEN      : 1;            /*!< [11..11] Clock enable                                                     */
      __IOM uint32_t STOP       : 2;            /*!< [13..12] STOP bits                                                        */
      __IOM uint32_t LINEN      : 1;            /*!< [14..14] LIN mode enable                                                  */
      __IOM uint32_t SWAP       : 1;            /*!< [15..15] Swap TX/RX pins                                                  */
      __IOM uint32_t RXINV      : 1;            /*!< [16..16] RX pin active level inversion                                    */
      __IOM uint32_t TXINV      : 1;            /*!< [17..17] TX pin active level inversion                                    */
      __IOM uint32_t TAINV      : 1;            /*!< [18..18] Binary data inversion                                            */
      __IOM uint32_t MSBFIRST   : 1;            /*!< [19..19] Most significant bit first                                       */
      __IOM uint32_t ABREN      : 1;            /*!< [20..20] Auto baud rate enable                                            */
      __IOM uint32_t ABRMOD0    : 1;            /*!< [21..21] ABRMOD0                                                          */
      __IOM uint32_t ABRMOD1    : 1;            /*!< [22..22] Auto baud rate mode                                              */
      __IOM uint32_t RTOEN      : 1;            /*!< [23..23] Receiver timeout enable                                          */
      __IOM uint32_t ADD0_3     : 4;            /*!< [27..24] Address of the USART node                                        */
      __IOM uint32_t ADD4_7     : 4;            /*!< [31..28] Address of the USART node                                        */
    } CR2_b;
  } ;
  
  union {
    __IOM uint32_t CR3;                         /*!< (@ 0x00000008) Control register 3                                         */
    
    struct {
      __IOM uint32_t EIE        : 1;            /*!< [0..0] Error interrupt enable                                             */
      __IOM uint32_t IREN       : 1;            /*!< [1..1] Ir mode enable                                                     */
      __IOM uint32_t IRLP       : 1;            /*!< [2..2] Ir low-power                                                       */
      __IOM uint32_t HDSEL      : 1;            /*!< [3..3] Half-duplex selection                                              */
      __IOM uint32_t NACK       : 1;            /*!< [4..4] Smartcard NACK enable                                              */
      __IOM uint32_t SCEN       : 1;            /*!< [5..5] Smartcard mode enable                                              */
      __IOM uint32_t DMAR       : 1;            /*!< [6..6] DMA enable receiver                                                */
      __IOM uint32_t DMAT       : 1;            /*!< [7..7] DMA enable transmitter                                             */
      __IOM uint32_t RTSE       : 1;            /*!< [8..8] RTS enable                                                         */
      __IOM uint32_t CTSE       : 1;            /*!< [9..9] CTS enable                                                         */
      __IOM uint32_t CTSIE      : 1;            /*!< [10..10] CTS interrupt enable                                             */
      __IOM uint32_t ONEBIT     : 1;            /*!< [11..11] One sample bit method enable                                     */
      __IOM uint32_t OVRDIS     : 1;            /*!< [12..12] Overrun Disable                                                  */
      __IOM uint32_t DDRE       : 1;            /*!< [13..13] DMA Disable on Reception Error                                   */
      __IOM uint32_t DEM        : 1;            /*!< [14..14] Driver enable mode                                               */
      __IOM uint32_t DEP        : 1;            /*!< [15..15] Driver enable polarity selection                                 */
            uint32_t            : 1;
      __IOM uint32_t SCARCNT    : 3;            /*!< [19..17] Smartcard auto-retry count                                       */
      __IOM uint32_t WUS        : 2;            /*!< [21..20] Wakeup from Stop mode interrupt flag selection                   */
      __IOM uint32_t WUFIE      : 1;            /*!< [22..22] Wakeup from Stop mode interrupt enable                           */
            uint32_t            : 9;
    } CR3_b;
  } ;
  
  union {
    __IOM uint32_t BRR;                         /*!< (@ 0x0000000C) Baud rate register                                         */
    
    struct {
      __IOM uint32_t DIV_Fraction : 4;          /*!< [3..0] DIV_Fraction                                                       */
      __IOM uint32_t DIV_Mantissa : 12;         /*!< [15..4] DIV_Mantissa                                                      */
            uint32_t            : 16;
    } BRR_b;
  } ;
  
  union {
    __IOM uint32_t GTPR;                        /*!< (@ 0x00000010) Guard time and prescaler register                          */
    
    struct {
      __IOM uint32_t PSC        : 8;            /*!< [7..0] Prescaler value                                                    */
      __IOM uint32_t GT         : 8;            /*!< [15..8] Guard time value                                                  */
            uint32_t            : 16;
    } GTPR_b;
  } ;
  
  union {
    __IOM uint32_t RTOR;                        /*!< (@ 0x00000014) Receiver timeout register                                  */
    
    struct {
      __IOM uint32_t RTO        : 24;           /*!< [23..0] Receiver timeout value                                            */
      __IOM uint32_t BLEN       : 8;            /*!< [31..24] Block Length                                                     */
    } RTOR_b;
  } ;
  
  union {
    __OM  uint32_t RQR;                         /*!< (@ 0x00000018) Request register                                           */
    
    struct {
      __OM  uint32_t ABRRQ      : 1;            /*!< [0..0] Auto baud rate request                                             */
      __OM  uint32_t SBKRQ      : 1;            /*!< [1..1] Send break request                                                 */
      __OM  uint32_t MMRQ       : 1;            /*!< [2..2] Mute mode request                                                  */
      __OM  uint32_t RXFRQ      : 1;            /*!< [3..3] Receive data flush request                                         */
      __OM  uint32_t TXFRQ      : 1;            /*!< [4..4] Transmit data flush request                                        */
            uint32_t            : 27;
    } RQR_b;
  } ;
  
  union {
    __IM  uint32_t ISR;                         /*!< (@ 0x0000001C) Interrupt & status register                                */
    
    struct {
      __IM  uint32_t PE         : 1;            /*!< [0..0] PE                                                                 */
      __IM  uint32_t FE         : 1;            /*!< [1..1] FE                                                                 */
      __IM  uint32_t NF         : 1;            /*!< [2..2] NF                                                                 */
      __IM  uint32_t ORE        : 1;            /*!< [3..3] ORE                                                                */
      __IM  uint32_t IDLE       : 1;            /*!< [4..4] IDLE                                                               */
      __IM  uint32_t RXNE       : 1;            /*!< [5..5] RXNE                                                               */
      __IM  uint32_t TC         : 1;            /*!< [6..6] TC                                                                 */
      __IM  uint32_t TXE        : 1;            /*!< [7..7] TXE                                                                */
      __IM  uint32_t LBDF       : 1;            /*!< [8..8] LBDF                                                               */
      __IM  uint32_t CTSIF      : 1;            /*!< [9..9] CTSIF                                                              */
      __IM  uint32_t CTS        : 1;            /*!< [10..10] CTS                                                              */
      __IM  uint32_t RTOF       : 1;            /*!< [11..11] RTOF                                                             */
      __IM  uint32_t EOBF       : 1;            /*!< [12..12] EOBF                                                             */
            uint32_t            : 1;
      __IM  uint32_t ABRE       : 1;            /*!< [14..14] ABRE                                                             */
      __IM  uint32_t ABRF       : 1;            /*!< [15..15] ABRF                                                             */
      __IM  uint32_t BUSY       : 1;            /*!< [16..16] BUSY                                                             */
      __IM  uint32_t CMF        : 1;            /*!< [17..17] CMF                                                              */
      __IM  uint32_t SBKF       : 1;            /*!< [18..18] SBKF                                                             */
      __IM  uint32_t RWU        : 1;            /*!< [19..19] RWU                                                              */
      __IM  uint32_t WUF        : 1;            /*!< [20..20] WUF                                                              */
      __IM  uint32_t TEACK      : 1;            /*!< [21..21] TEACK                                                            */
      __IM  uint32_t REACK      : 1;            /*!< [22..22] REACK                                                            */
            uint32_t            : 9;
    } ISR_b;
  } ;
  
  union {
    __OM  uint32_t ICR;                         /*!< (@ 0x00000020) Interrupt flag clear register                              */
    
    struct {
      __OM  uint32_t PECF       : 1;            /*!< [0..0] Parity error clear flag                                            */
      __OM  uint32_t FECF       : 1;            /*!< [1..1] Framing error clear flag                                           */
      __OM  uint32_t NCF        : 1;            /*!< [2..2] Noise detected clear flag                                          */
      __OM  uint32_t ORECF      : 1;            /*!< [3..3] Overrun error clear flag                                           */
      __OM  uint32_t IDLECF     : 1;            /*!< [4..4] Idle line detected clear flag                                      */
            uint32_t            : 1;
      __OM  uint32_t TCCF       : 1;            /*!< [6..6] Transmission complete clear flag                                   */
            uint32_t            : 1;
      __OM  uint32_t LBDCF      : 1;            /*!< [8..8] LIN break detection clear flag                                     */
      __OM  uint32_t CTSCF      : 1;            /*!< [9..9] CTS clear flag                                                     */
            uint32_t            : 1;
      __OM  uint32_t RTOCF      : 1;            /*!< [11..11] Receiver timeout clear flag                                      */
      __OM  uint32_t EOBCF      : 1;            /*!< [12..12] End of block clear flag                                          */
            uint32_t            : 4;
      __OM  uint32_t CMCF       : 1;            /*!< [17..17] Character match clear flag                                       */
            uint32_t            : 2;
      __OM  uint32_t WUCF       : 1;            /*!< [20..20] Wakeup from Stop mode clear flag                                 */
            uint32_t            : 11;
    } ICR_b;
  } ;
  
  union {
    __IM  uint32_t RDR;                         /*!< (@ 0x00000024) Receive data register                                      */
    
    struct {
      __IM  uint32_t RDR        : 9;            /*!< [8..0] Receive data value                                                 */
            uint32_t            : 23;
    } RDR_b;
  } ;
  
  union {
    __IOM uint32_t TDR;                         /*!< (@ 0x00000028) Transmit data register                                     */
    
    struct {
      __IOM uint32_t TDR        : 9;            /*!< [8..0] Transmit data value                                                */
            uint32_t            : 23;
    } TDR_b;
  } ;
} USART6_Type;                                  /*!< Size = 44 (0x2c)                                                          */



/* =========================================================================================================================== */
/* ================                                          USART6                                           ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR1  ========================================================== */
#define USART6_CR1_M1_Pos                 (28UL)                    /*!< M1 (Bit 28)                                           */
#define USART6_CR1_M1_Msk                 (0x10000000UL)            /*!< M1 (Bitfield-Mask: 0x01)                              */
#define USART6_CR1_EOBIE_Pos              (27UL)                    /*!< EOBIE (Bit 27)                                        */
#define USART6_CR1_EOBIE_Msk              (0x8000000UL)             /*!< EOBIE (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_RTOIE_Pos              (26UL)                    /*!< RTOIE (Bit 26)                                        */
#define USART6_CR1_RTOIE_Msk              (0x4000000UL)             /*!< RTOIE (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_DEAT4_Pos              (25UL)                    /*!< DEAT4 (Bit 25)                                        */
#define USART6_CR1_DEAT4_Msk              (0x2000000UL)             /*!< DEAT4 (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_DEAT3_Pos              (24UL)                    /*!< DEAT3 (Bit 24)                                        */
#define USART6_CR1_DEAT3_Msk              (0x1000000UL)             /*!< DEAT3 (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_DEAT2_Pos              (23UL)                    /*!< DEAT2 (Bit 23)                                        */
#define USART6_CR1_DEAT2_Msk              (0x800000UL)              /*!< DEAT2 (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_DEAT1_Pos              (22UL)                    /*!< DEAT1 (Bit 22)                                        */
#define USART6_CR1_DEAT1_Msk              (0x400000UL)              /*!< DEAT1 (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_DEAT0_Pos              (21UL)                    /*!< DEAT0 (Bit 21)                                        */
#define USART6_CR1_DEAT0_Msk              (0x200000UL)              /*!< DEAT0 (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_DEDT4_Pos              (20UL)                    /*!< DEDT4 (Bit 20)                                        */
#define USART6_CR1_DEDT4_Msk              (0x100000UL)              /*!< DEDT4 (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_DEDT3_Pos              (19UL)                    /*!< DEDT3 (Bit 19)                                        */
#define USART6_CR1_DEDT3_Msk              (0x80000UL)               /*!< DEDT3 (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_DEDT2_Pos              (18UL)                    /*!< DEDT2 (Bit 18)                                        */
#define USART6_CR1_DEDT2_Msk              (0x40000UL)               /*!< DEDT2 (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_DEDT1_Pos              (17UL)                    /*!< DEDT1 (Bit 17)                                        */
#define USART6_CR1_DEDT1_Msk              (0x20000UL)               /*!< DEDT1 (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_DEDT0_Pos              (16UL)                    /*!< DEDT0 (Bit 16)                                        */
#define USART6_CR1_DEDT0_Msk              (0x10000UL)               /*!< DEDT0 (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_OVER8_Pos              (15UL)                    /*!< OVER8 (Bit 15)                                        */
#define USART6_CR1_OVER8_Msk              (0x8000UL)                /*!< OVER8 (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_CMIE_Pos               (14UL)                    /*!< CMIE (Bit 14)                                         */
#define USART6_CR1_CMIE_Msk               (0x4000UL)                /*!< CMIE (Bitfield-Mask: 0x01)                            */
#define USART6_CR1_MME_Pos                (13UL)                    /*!< MME (Bit 13)                                          */
#define USART6_CR1_MME_Msk                (0x2000UL)                /*!< MME (Bitfield-Mask: 0x01)                             */
#define USART6_CR1_M0_Pos                 (12UL)                    /*!< M0 (Bit 12)                                           */
#define USART6_CR1_M0_Msk                 (0x1000UL)                /*!< M0 (Bitfield-Mask: 0x01)                              */
#define USART6_CR1_WAKE_Pos               (11UL)                    /*!< WAKE (Bit 11)                                         */
#define USART6_CR1_WAKE_Msk               (0x800UL)                 /*!< WAKE (Bitfield-Mask: 0x01)                            */
#define USART6_CR1_PCE_Pos                (10UL)                    /*!< PCE (Bit 10)                                          */
#define USART6_CR1_PCE_Msk                (0x400UL)                 /*!< PCE (Bitfield-Mask: 0x01)                             */
#define USART6_CR1_PS_Pos                 (9UL)                     /*!< PS (Bit 9)                                            */
#define USART6_CR1_PS_Msk                 (0x200UL)                 /*!< PS (Bitfield-Mask: 0x01)                              */
#define USART6_CR1_PEIE_Pos               (8UL)                     /*!< PEIE (Bit 8)                                          */
#define USART6_CR1_PEIE_Msk               (0x100UL)                 /*!< PEIE (Bitfield-Mask: 0x01)                            */
#define USART6_CR1_TXEIE_Pos              (7UL)                     /*!< TXEIE (Bit 7)                                         */
#define USART6_CR1_TXEIE_Msk              (0x80UL)                  /*!< TXEIE (Bitfield-Mask: 0x01)                           */
#define USART6_CR1_TCIE_Pos               (6UL)                     /*!< TCIE (Bit 6)                                          */
#define USART6_CR1_TCIE_Msk               (0x40UL)                  /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define USART6_CR1_RXNEIE_Pos             (5UL)                     /*!< RXNEIE (Bit 5)                                        */
#define USART6_CR1_RXNEIE_Msk             (0x20UL)                  /*!< RXNEIE (Bitfield-Mask: 0x01)                          */
#define USART6_CR1_IDLEIE_Pos             (4UL)                     /*!< IDLEIE (Bit 4)                                        */
#define USART6_CR1_IDLEIE_Msk             (0x10UL)                  /*!< IDLEIE (Bitfield-Mask: 0x01)                          */
#define USART6_CR1_TE_Pos                 (3UL)                     /*!< TE (Bit 3)                                            */
#define USART6_CR1_TE_Msk                 (0x8UL)                   /*!< TE (Bitfield-Mask: 0x01)                              */
#define USART6_CR1_RE_Pos                 (2UL)                     /*!< RE (Bit 2)                                            */
#define USART6_CR1_RE_Msk                 (0x4UL)                   /*!< RE (Bitfield-Mask: 0x01)                              */
#define USART6_CR1_UESM_Pos               (1UL)                     /*!< UESM (Bit 1)                                          */
#define USART6_CR1_UESM_Msk               (0x2UL)                   /*!< UESM (Bitfield-Mask: 0x01)                            */
#define USART6_CR1_UE_Pos                 (0UL)                     /*!< UE (Bit 0)                                            */
#define USART6_CR1_UE_Msk                 (0x1UL)                   /*!< UE (Bitfield-Mask: 0x01)                              */
/* ==========================================================  CR2  ========================================================== */
#define USART6_CR2_ADD4_7_Pos             (28UL)                    /*!< ADD4_7 (Bit 28)                                       */
#define USART6_CR2_ADD4_7_Msk             (0xf0000000UL)            /*!< ADD4_7 (Bitfield-Mask: 0x0f)                          */
#define USART6_CR2_ADD0_3_Pos             (24UL)                    /*!< ADD0_3 (Bit 24)                                       */
#define USART6_CR2_ADD0_3_Msk             (0xf000000UL)             /*!< ADD0_3 (Bitfield-Mask: 0x0f)                          */
#define USART6_CR2_RTOEN_Pos              (23UL)                    /*!< RTOEN (Bit 23)                                        */
#define USART6_CR2_RTOEN_Msk              (0x800000UL)              /*!< RTOEN (Bitfield-Mask: 0x01)                           */
#define USART6_CR2_ABRMOD1_Pos            (22UL)                    /*!< ABRMOD1 (Bit 22)                                      */
#define USART6_CR2_ABRMOD1_Msk            (0x400000UL)              /*!< ABRMOD1 (Bitfield-Mask: 0x01)                         */
#define USART6_CR2_ABRMOD0_Pos            (21UL)                    /*!< ABRMOD0 (Bit 21)                                      */
#define USART6_CR2_ABRMOD0_Msk            (0x200000UL)              /*!< ABRMOD0 (Bitfield-Mask: 0x01)                         */
#define USART6_CR2_ABREN_Pos              (20UL)                    /*!< ABREN (Bit 20)                                        */
#define USART6_CR2_ABREN_Msk              (0x100000UL)              /*!< ABREN (Bitfield-Mask: 0x01)                           */
#define USART6_CR2_MSBFIRST_Pos           (19UL)                    /*!< MSBFIRST (Bit 19)                                     */
#define USART6_CR2_MSBFIRST_Msk           (0x80000UL)               /*!< MSBFIRST (Bitfield-Mask: 0x01)                        */
#define USART6_CR2_TAINV_Pos              (18UL)                    /*!< TAINV (Bit 18)                                        */
#define USART6_CR2_TAINV_Msk              (0x40000UL)               /*!< TAINV (Bitfield-Mask: 0x01)                           */
#define USART6_CR2_TXINV_Pos              (17UL)                    /*!< TXINV (Bit 17)                                        */
#define USART6_CR2_TXINV_Msk              (0x20000UL)               /*!< TXINV (Bitfield-Mask: 0x01)                           */
#define USART6_CR2_RXINV_Pos              (16UL)                    /*!< RXINV (Bit 16)                                        */
#define USART6_CR2_RXINV_Msk              (0x10000UL)               /*!< RXINV (Bitfield-Mask: 0x01)                           */
#define USART6_CR2_SWAP_Pos               (15UL)                    /*!< SWAP (Bit 15)                                         */
#define USART6_CR2_SWAP_Msk               (0x8000UL)                /*!< SWAP (Bitfield-Mask: 0x01)                            */
#define USART6_CR2_LINEN_Pos              (14UL)                    /*!< LINEN (Bit 14)                                        */
#define USART6_CR2_LINEN_Msk              (0x4000UL)                /*!< LINEN (Bitfield-Mask: 0x01)                           */
#define USART6_CR2_STOP_Pos               (12UL)                    /*!< STOP (Bit 12)                                         */
#define USART6_CR2_STOP_Msk               (0x3000UL)                /*!< STOP (Bitfield-Mask: 0x03)                            */
#define USART6_CR2_CLKEN_Pos              (11UL)                    /*!< CLKEN (Bit 11)                                        */
#define USART6_CR2_CLKEN_Msk              (0x800UL)                 /*!< CLKEN (Bitfield-Mask: 0x01)                           */
#define USART6_CR2_CPOL_Pos               (10UL)                    /*!< CPOL (Bit 10)                                         */
#define USART6_CR2_CPOL_Msk               (0x400UL)                 /*!< CPOL (Bitfield-Mask: 0x01)                            */
#define USART6_CR2_CPHA_Pos               (9UL)                     /*!< CPHA (Bit 9)                                          */
#define USART6_CR2_CPHA_Msk               (0x200UL)                 /*!< CPHA (Bitfield-Mask: 0x01)                            */
#define USART6_CR2_LBCL_Pos               (8UL)                     /*!< LBCL (Bit 8)                                          */
#define USART6_CR2_LBCL_Msk               (0x100UL)                 /*!< LBCL (Bitfield-Mask: 0x01)                            */
#define USART6_CR2_LBDIE_Pos              (6UL)                     /*!< LBDIE (Bit 6)                                         */
#define USART6_CR2_LBDIE_Msk              (0x40UL)                  /*!< LBDIE (Bitfield-Mask: 0x01)                           */
#define USART6_CR2_LBDL_Pos               (5UL)                     /*!< LBDL (Bit 5)                                          */
#define USART6_CR2_LBDL_Msk               (0x20UL)                  /*!< LBDL (Bitfield-Mask: 0x01)                            */
#define USART6_CR2_ADDM7_Pos              (4UL)                     /*!< ADDM7 (Bit 4)                                         */
#define USART6_CR2_ADDM7_Msk              (0x10UL)                  /*!< ADDM7 (Bitfield-Mask: 0x01)                           */
/* ==========================================================  CR3  ========================================================== */
#define USART6_CR3_WUFIE_Pos              (22UL)                    /*!< WUFIE (Bit 22)                                        */
#define USART6_CR3_WUFIE_Msk              (0x400000UL)              /*!< WUFIE (Bitfield-Mask: 0x01)                           */
#define USART6_CR3_WUS_Pos                (20UL)                    /*!< WUS (Bit 20)                                          */
#define USART6_CR3_WUS_Msk                (0x300000UL)              /*!< WUS (Bitfield-Mask: 0x03)                             */
#define USART6_CR3_SCARCNT_Pos            (17UL)                    /*!< SCARCNT (Bit 17)                                      */
#define USART6_CR3_SCARCNT_Msk            (0xe0000UL)               /*!< SCARCNT (Bitfield-Mask: 0x07)                         */
#define USART6_CR3_DEP_Pos                (15UL)                    /*!< DEP (Bit 15)                                          */
#define USART6_CR3_DEP_Msk                (0x8000UL)                /*!< DEP (Bitfield-Mask: 0x01)                             */
#define USART6_CR3_DEM_Pos                (14UL)                    /*!< DEM (Bit 14)                                          */
#define USART6_CR3_DEM_Msk                (0x4000UL)                /*!< DEM (Bitfield-Mask: 0x01)                             */
#define USART6_CR3_DDRE_Pos               (13UL)                    /*!< DDRE (Bit 13)                                         */
#define USART6_CR3_DDRE_Msk               (0x2000UL)                /*!< DDRE (Bitfield-Mask: 0x01)                            */
#define USART6_CR3_OVRDIS_Pos             (12UL)                    /*!< OVRDIS (Bit 12)                                       */
#define USART6_CR3_OVRDIS_Msk             (0x1000UL)                /*!< OVRDIS (Bitfield-Mask: 0x01)                          */
#define USART6_CR3_ONEBIT_Pos             (11UL)                    /*!< ONEBIT (Bit 11)                                       */
#define USART6_CR3_ONEBIT_Msk             (0x800UL)                 /*!< ONEBIT (Bitfield-Mask: 0x01)                          */
#define USART6_CR3_CTSIE_Pos              (10UL)                    /*!< CTSIE (Bit 10)                                        */
#define USART6_CR3_CTSIE_Msk              (0x400UL)                 /*!< CTSIE (Bitfield-Mask: 0x01)                           */
#define USART6_CR3_CTSE_Pos               (9UL)                     /*!< CTSE (Bit 9)                                          */
#define USART6_CR3_CTSE_Msk               (0x200UL)                 /*!< CTSE (Bitfield-Mask: 0x01)                            */
#define USART6_CR3_RTSE_Pos               (8UL)                     /*!< RTSE (Bit 8)                                          */
#define USART6_CR3_RTSE_Msk               (0x100UL)                 /*!< RTSE (Bitfield-Mask: 0x01)                            */
#define USART6_CR3_DMAT_Pos               (7UL)                     /*!< DMAT (Bit 7)                                          */
#define USART6_CR3_DMAT_Msk               (0x80UL)                  /*!< DMAT (Bitfield-Mask: 0x01)                            */
#define USART6_CR3_DMAR_Pos               (6UL)                     /*!< DMAR (Bit 6)                                          */
#define USART6_CR3_DMAR_Msk               (0x40UL)                  /*!< DMAR (Bitfield-Mask: 0x01)                            */
#define USART6_CR3_SCEN_Pos               (5UL)                     /*!< SCEN (Bit 5)                                          */
#define USART6_CR3_SCEN_Msk               (0x20UL)                  /*!< SCEN (Bitfield-Mask: 0x01)                            */
#define USART6_CR3_NACK_Pos               (4UL)                     /*!< NACK (Bit 4)                                          */
#define USART6_CR3_NACK_Msk               (0x10UL)                  /*!< NACK (Bitfield-Mask: 0x01)                            */
#define USART6_CR3_HDSEL_Pos              (3UL)                     /*!< HDSEL (Bit 3)                                         */
#define USART6_CR3_HDSEL_Msk              (0x8UL)                   /*!< HDSEL (Bitfield-Mask: 0x01)                           */
#define USART6_CR3_IRLP_Pos               (2UL)                     /*!< IRLP (Bit 2)                                          */
#define USART6_CR3_IRLP_Msk               (0x4UL)                   /*!< IRLP (Bitfield-Mask: 0x01)                            */
#define USART6_CR3_IREN_Pos               (1UL)                     /*!< IREN (Bit 1)                                          */
#define USART6_CR3_IREN_Msk               (0x2UL)                   /*!< IREN (Bitfield-Mask: 0x01)                            */
#define USART6_CR3_EIE_Pos                (0UL)                     /*!< EIE (Bit 0)                                           */
#define USART6_CR3_EIE_Msk                (0x1UL)                   /*!< EIE (Bitfield-Mask: 0x01)                             */
/* ==========================================================  BRR  ========================================================== */
#define USART6_BRR_DIV_Mantissa_Pos       (4UL)                     /*!< DIV_Mantissa (Bit 4)                                  */
#define USART6_BRR_DIV_Mantissa_Msk       (0xfff0UL)                /*!< DIV_Mantissa (Bitfield-Mask: 0xfff)                   */
#define USART6_BRR_DIV_Fraction_Pos       (0UL)                     /*!< DIV_Fraction (Bit 0)                                  */
#define USART6_BRR_DIV_Fraction_Msk       (0xfUL)                   /*!< DIV_Fraction (Bitfield-Mask: 0x0f)                    */
/* =========================================================  GTPR  ========================================================== */
#define USART6_GTPR_GT_Pos                (8UL)                     /*!< GT (Bit 8)                                            */
#define USART6_GTPR_GT_Msk                (0xff00UL)                /*!< GT (Bitfield-Mask: 0xff)                              */
#define USART6_GTPR_PSC_Pos               (0UL)                     /*!< PSC (Bit 0)                                           */
#define USART6_GTPR_PSC_Msk               (0xffUL)                  /*!< PSC (Bitfield-Mask: 0xff)                             */
/* =========================================================  RTOR  ========================================================== */
#define USART6_RTOR_BLEN_Pos              (24UL)                    /*!< BLEN (Bit 24)                                         */
#define USART6_RTOR_BLEN_Msk              (0xff000000UL)            /*!< BLEN (Bitfield-Mask: 0xff)                            */
#define USART6_RTOR_RTO_Pos               (0UL)                     /*!< RTO (Bit 0)                                           */
#define USART6_RTOR_RTO_Msk               (0xffffffUL)              /*!< RTO (Bitfield-Mask: 0xffffff)                         */
/* ==========================================================  RQR  ========================================================== */
#define USART6_RQR_TXFRQ_Pos              (4UL)                     /*!< TXFRQ (Bit 4)                                         */
#define USART6_RQR_TXFRQ_Msk              (0x10UL)                  /*!< TXFRQ (Bitfield-Mask: 0x01)                           */
#define USART6_RQR_RXFRQ_Pos              (3UL)                     /*!< RXFRQ (Bit 3)                                         */
#define USART6_RQR_RXFRQ_Msk              (0x8UL)                   /*!< RXFRQ (Bitfield-Mask: 0x01)                           */
#define USART6_RQR_MMRQ_Pos               (2UL)                     /*!< MMRQ (Bit 2)                                          */
#define USART6_RQR_MMRQ_Msk               (0x4UL)                   /*!< MMRQ (Bitfield-Mask: 0x01)                            */
#define USART6_RQR_SBKRQ_Pos              (1UL)                     /*!< SBKRQ (Bit 1)                                         */
#define USART6_RQR_SBKRQ_Msk              (0x2UL)                   /*!< SBKRQ (Bitfield-Mask: 0x01)                           */
#define USART6_RQR_ABRRQ_Pos              (0UL)                     /*!< ABRRQ (Bit 0)                                         */
#define USART6_RQR_ABRRQ_Msk              (0x1UL)                   /*!< ABRRQ (Bitfield-Mask: 0x01)                           */
/* ==========================================================  ISR  ========================================================== */
#define USART6_ISR_REACK_Pos              (22UL)                    /*!< REACK (Bit 22)                                        */
#define USART6_ISR_REACK_Msk              (0x400000UL)              /*!< REACK (Bitfield-Mask: 0x01)                           */
#define USART6_ISR_TEACK_Pos              (21UL)                    /*!< TEACK (Bit 21)                                        */
#define USART6_ISR_TEACK_Msk              (0x200000UL)              /*!< TEACK (Bitfield-Mask: 0x01)                           */
#define USART6_ISR_WUF_Pos                (20UL)                    /*!< WUF (Bit 20)                                          */
#define USART6_ISR_WUF_Msk                (0x100000UL)              /*!< WUF (Bitfield-Mask: 0x01)                             */
#define USART6_ISR_RWU_Pos                (19UL)                    /*!< RWU (Bit 19)                                          */
#define USART6_ISR_RWU_Msk                (0x80000UL)               /*!< RWU (Bitfield-Mask: 0x01)                             */
#define USART6_ISR_SBKF_Pos               (18UL)                    /*!< SBKF (Bit 18)                                         */
#define USART6_ISR_SBKF_Msk               (0x40000UL)               /*!< SBKF (Bitfield-Mask: 0x01)                            */
#define USART6_ISR_CMF_Pos                (17UL)                    /*!< CMF (Bit 17)                                          */
#define USART6_ISR_CMF_Msk                (0x20000UL)               /*!< CMF (Bitfield-Mask: 0x01)                             */
#define USART6_ISR_BUSY_Pos               (16UL)                    /*!< BUSY (Bit 16)                                         */
#define USART6_ISR_BUSY_Msk               (0x10000UL)               /*!< BUSY (Bitfield-Mask: 0x01)                            */
#define USART6_ISR_ABRF_Pos               (15UL)                    /*!< ABRF (Bit 15)                                         */
#define USART6_ISR_ABRF_Msk               (0x8000UL)                /*!< ABRF (Bitfield-Mask: 0x01)                            */
#define USART6_ISR_ABRE_Pos               (14UL)                    /*!< ABRE (Bit 14)                                         */
#define USART6_ISR_ABRE_Msk               (0x4000UL)                /*!< ABRE (Bitfield-Mask: 0x01)                            */
#define USART6_ISR_EOBF_Pos               (12UL)                    /*!< EOBF (Bit 12)                                         */
#define USART6_ISR_EOBF_Msk               (0x1000UL)                /*!< EOBF (Bitfield-Mask: 0x01)                            */
#define USART6_ISR_RTOF_Pos               (11UL)                    /*!< RTOF (Bit 11)                                         */
#define USART6_ISR_RTOF_Msk               (0x800UL)                 /*!< RTOF (Bitfield-Mask: 0x01)                            */
#define USART6_ISR_CTS_Pos                (10UL)                    /*!< CTS (Bit 10)                                          */
#define USART6_ISR_CTS_Msk                (0x400UL)                 /*!< CTS (Bitfield-Mask: 0x01)                             */
#define USART6_ISR_CTSIF_Pos              (9UL)                     /*!< CTSIF (Bit 9)                                         */
#define USART6_ISR_CTSIF_Msk              (0x200UL)                 /*!< CTSIF (Bitfield-Mask: 0x01)                           */
#define USART6_ISR_LBDF_Pos               (8UL)                     /*!< LBDF (Bit 8)                                          */
#define USART6_ISR_LBDF_Msk               (0x100UL)                 /*!< LBDF (Bitfield-Mask: 0x01)                            */
#define USART6_ISR_TXE_Pos                (7UL)                     /*!< TXE (Bit 7)                                           */
#define USART6_ISR_TXE_Msk                (0x80UL)                  /*!< TXE (Bitfield-Mask: 0x01)                             */
#define USART6_ISR_TC_Pos                 (6UL)                     /*!< TC (Bit 6)                                            */
#define USART6_ISR_TC_Msk                 (0x40UL)                  /*!< TC (Bitfield-Mask: 0x01)                              */
#define USART6_ISR_RXNE_Pos               (5UL)                     /*!< RXNE (Bit 5)                                          */
#define USART6_ISR_RXNE_Msk               (0x20UL)                  /*!< RXNE (Bitfield-Mask: 0x01)                            */
#define USART6_ISR_IDLE_Pos               (4UL)                     /*!< IDLE (Bit 4)                                          */
#define USART6_ISR_IDLE_Msk               (0x10UL)                  /*!< IDLE (Bitfield-Mask: 0x01)                            */
#define USART6_ISR_ORE_Pos                (3UL)                     /*!< ORE (Bit 3)                                           */
#define USART6_ISR_ORE_Msk                (0x8UL)                   /*!< ORE (Bitfield-Mask: 0x01)                             */
#define USART6_ISR_NF_Pos                 (2UL)                     /*!< NF (Bit 2)                                            */
#define USART6_ISR_NF_Msk                 (0x4UL)                   /*!< NF (Bitfield-Mask: 0x01)                              */
#define USART6_ISR_FE_Pos                 (1UL)                     /*!< FE (Bit 1)                                            */
#define USART6_ISR_FE_Msk                 (0x2UL)                   /*!< FE (Bitfield-Mask: 0x01)                              */
#define USART6_ISR_PE_Pos                 (0UL)                     /*!< PE (Bit 0)                                            */
#define USART6_ISR_PE_Msk                 (0x1UL)                   /*!< PE (Bitfield-Mask: 0x01)                              */
/* ==========================================================  ICR  ========================================================== */
#define USART6_ICR_WUCF_Pos               (20UL)                    /*!< WUCF (Bit 20)                                         */
#define USART6_ICR_WUCF_Msk               (0x100000UL)              /*!< WUCF (Bitfield-Mask: 0x01)                            */
#define USART6_ICR_CMCF_Pos               (17UL)                    /*!< CMCF (Bit 17)                                         */
#define USART6_ICR_CMCF_Msk               (0x20000UL)               /*!< CMCF (Bitfield-Mask: 0x01)                            */
#define USART6_ICR_EOBCF_Pos              (12UL)                    /*!< EOBCF (Bit 12)                                        */
#define USART6_ICR_EOBCF_Msk              (0x1000UL)                /*!< EOBCF (Bitfield-Mask: 0x01)                           */
#define USART6_ICR_RTOCF_Pos              (11UL)                    /*!< RTOCF (Bit 11)                                        */
#define USART6_ICR_RTOCF_Msk              (0x800UL)                 /*!< RTOCF (Bitfield-Mask: 0x01)                           */
#define USART6_ICR_CTSCF_Pos              (9UL)                     /*!< CTSCF (Bit 9)                                         */
#define USART6_ICR_CTSCF_Msk              (0x200UL)                 /*!< CTSCF (Bitfield-Mask: 0x01)                           */
#define USART6_ICR_LBDCF_Pos              (8UL)                     /*!< LBDCF (Bit 8)                                         */
#define USART6_ICR_LBDCF_Msk              (0x100UL)                 /*!< LBDCF (Bitfield-Mask: 0x01)                           */
#define USART6_ICR_TCCF_Pos               (6UL)                     /*!< TCCF (Bit 6)                                          */
#define USART6_ICR_TCCF_Msk               (0x40UL)                  /*!< TCCF (Bitfield-Mask: 0x01)                            */
#define USART6_ICR_IDLECF_Pos             (4UL)                     /*!< IDLECF (Bit 4)                                        */
#define USART6_ICR_IDLECF_Msk             (0x10UL)                  /*!< IDLECF (Bitfield-Mask: 0x01)                          */
#define USART6_ICR_ORECF_Pos              (3UL)                     /*!< ORECF (Bit 3)                                         */
#define USART6_ICR_ORECF_Msk              (0x8UL)                   /*!< ORECF (Bitfield-Mask: 0x01)                           */
#define USART6_ICR_NCF_Pos                (2UL)                     /*!< NCF (Bit 2)                                           */
#define USART6_ICR_NCF_Msk                (0x4UL)                   /*!< NCF (Bitfield-Mask: 0x01)                             */
#define USART6_ICR_FECF_Pos               (1UL)                     /*!< FECF (Bit 1)                                          */
#define USART6_ICR_FECF_Msk               (0x2UL)                   /*!< FECF (Bitfield-Mask: 0x01)                            */
#define USART6_ICR_PECF_Pos               (0UL)                     /*!< PECF (Bit 0)                                          */
#define USART6_ICR_PECF_Msk               (0x1UL)                   /*!< PECF (Bitfield-Mask: 0x01)                            */
/* ==========================================================  RDR  ========================================================== */
#define USART6_RDR_RDR_Pos                (0UL)                     /*!< RDR (Bit 0)                                           */
#define USART6_RDR_RDR_Msk                (0x1ffUL)                 /*!< RDR (Bitfield-Mask: 0x1ff)                            */
/* ==========================================================  TDR  ========================================================== */
#define USART6_TDR_TDR_Pos                (0UL)                     /*!< TDR (Bit 0)                                           */
#define USART6_TDR_TDR_Msk                (0x1ffUL)                 /*!< TDR (Bitfield-Mask: 0x1ff)                            */

