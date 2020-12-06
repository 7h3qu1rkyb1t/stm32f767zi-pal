#include "core.h"


#define SPI1_BASE                   0x40013000UL
#define SPI2_BASE                   0x40003800UL
#define SPI4_BASE                   0x40013400UL
#define SPI5_BASE                   0x40015000UL
#define SPI3_BASE                   0x40003C00UL
#define SPI6_BASE                   0x40015400UL

#define SPI1                        ((SPI1_Type*)              SPI1_BASE)
#define SPI2                        ((SPI1_Type*)              SPI2_BASE)
#define SPI4                        ((SPI1_Type*)              SPI4_BASE)
#define SPI5                        ((SPI1_Type*)              SPI5_BASE)
#define SPI3                        ((SPI1_Type*)              SPI3_BASE)
#define SPI6                        ((SPI1_Type*)              SPI6_BASE)


/* =========================================================================================================================== */
/* ================                                           SPI1                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Serial peripheral interface (SPI1)
  */

typedef struct {                                /*!< (@ 0x40013000) SPI1 Structure                                             */
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000000) control register 1                                         */
    
    struct {
      __IOM uint32_t CPHA       : 1;            /*!< [0..0] Clock phase                                                        */
      __IOM uint32_t CPOL       : 1;            /*!< [1..1] Clock polarity                                                     */
      __IOM uint32_t MSTR       : 1;            /*!< [2..2] Master selection                                                   */
      __IOM uint32_t BR         : 3;            /*!< [5..3] Baud rate control                                                  */
      __IOM uint32_t SPE        : 1;            /*!< [6..6] SPI enable                                                         */
      __IOM uint32_t LSBFIRST   : 1;            /*!< [7..7] Frame format                                                       */
      __IOM uint32_t SSI        : 1;            /*!< [8..8] Internal slave select                                              */
      __IOM uint32_t SSM        : 1;            /*!< [9..9] Software slave management                                          */
      __IOM uint32_t RXONLY     : 1;            /*!< [10..10] Receive only                                                     */
      __IOM uint32_t CRCL       : 1;            /*!< [11..11] CRC length                                                       */
      __IOM uint32_t CRCNEXT    : 1;            /*!< [12..12] CRC transfer next                                                */
      __IOM uint32_t CRCEN      : 1;            /*!< [13..13] Hardware CRC calculation enable                                  */
      __IOM uint32_t BIDIOE     : 1;            /*!< [14..14] Output enable in bidirectional mode                              */
      __IOM uint32_t BIDIMODE   : 1;            /*!< [15..15] Bidirectional data mode enable                                   */
            uint32_t            : 16;
    } CR1_b;
  } ;
  
  union {
    __IOM uint32_t CR2;                         /*!< (@ 0x00000004) control register 2                                         */
    
    struct {
      __IOM uint32_t RXDMAEN    : 1;            /*!< [0..0] Rx buffer DMA enable                                               */
      __IOM uint32_t TXDMAEN    : 1;            /*!< [1..1] Tx buffer DMA enable                                               */
      __IOM uint32_t SSOE       : 1;            /*!< [2..2] SS output enable                                                   */
      __IOM uint32_t NSSP       : 1;            /*!< [3..3] NSS pulse management                                               */
      __IOM uint32_t FRF        : 1;            /*!< [4..4] Frame format                                                       */
      __IOM uint32_t ERRIE      : 1;            /*!< [5..5] Error interrupt enable                                             */
      __IOM uint32_t RXNEIE     : 1;            /*!< [6..6] RX buffer not empty interrupt enable                               */
      __IOM uint32_t TXEIE      : 1;            /*!< [7..7] Tx buffer empty interrupt enable                                   */
      __IOM uint32_t DS         : 4;            /*!< [11..8] Data size                                                         */
      __IOM uint32_t FRXTH      : 1;            /*!< [12..12] FIFO reception threshold                                         */
      __IOM uint32_t LDMA_RX    : 1;            /*!< [13..13] Last DMA transfer for reception                                  */
      __IOM uint32_t LDMA_TX    : 1;            /*!< [14..14] Last DMA transfer for transmission                               */
            uint32_t            : 17;
    } CR2_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000008) status register                                            */
    
    struct {
      __IM  uint32_t RXNE       : 1;            /*!< [0..0] Receive buffer not empty                                           */
      __IM  uint32_t TXE        : 1;            /*!< [1..1] Transmit buffer empty                                              */
      __IM  uint32_t CHSIDE     : 1;            /*!< [2..2] Channel side                                                       */
      __IM  uint32_t UDR        : 1;            /*!< [3..3] Underrun flag                                                      */
      __IOM uint32_t CRCERR     : 1;            /*!< [4..4] CRC error flag                                                     */
      __IM  uint32_t MODF       : 1;            /*!< [5..5] Mode fault                                                         */
      __IM  uint32_t OVR        : 1;            /*!< [6..6] Overrun flag                                                       */
      __IM  uint32_t BSY        : 1;            /*!< [7..7] Busy flag                                                          */
      __IM  uint32_t FRE        : 1;            /*!< [8..8] Frame format error                                                 */
      __IM  uint32_t FRLVL      : 2;            /*!< [10..9] FIFO reception level                                              */
      __IM  uint32_t FTLVL      : 2;            /*!< [12..11] FIFO Transmission Level                                          */
            uint32_t            : 19;
    } SR_b;
  } ;
  
  union {
    __IOM uint32_t DR;                          /*!< (@ 0x0000000C) data register                                              */
    
    struct {
      __IOM uint32_t DR         : 16;           /*!< [15..0] Data register                                                     */
            uint32_t            : 16;
    } DR_b;
  } ;
  
  union {
    __IOM uint32_t CRCPR;                       /*!< (@ 0x00000010) CRC polynomial register                                    */
    
    struct {
      __IOM uint32_t CRCPOLY    : 16;           /*!< [15..0] CRC polynomial register                                           */
            uint32_t            : 16;
    } CRCPR_b;
  } ;
  
  union {
    __IM  uint32_t RXCRCR;                      /*!< (@ 0x00000014) RX CRC register                                            */
    
    struct {
      __IM  uint32_t RxCRC      : 16;           /*!< [15..0] Rx CRC register                                                   */
            uint32_t            : 16;
    } RXCRCR_b;
  } ;
  
  union {
    __IM  uint32_t TXCRCR;                      /*!< (@ 0x00000018) TX CRC register                                            */
    
    struct {
      __IM  uint32_t TxCRC      : 16;           /*!< [15..0] Tx CRC register                                                   */
            uint32_t            : 16;
    } TXCRCR_b;
  } ;
  
  union {
    __IOM uint32_t I2SCFGR;                     /*!< (@ 0x0000001C) I2S configuration register                                 */
    
    struct {
      __IOM uint32_t CHLEN      : 1;            /*!< [0..0] Channel length (number of bits per audio channel)                  */
      __IOM uint32_t DATLEN     : 2;            /*!< [2..1] Data length to be transferred                                      */
      __IOM uint32_t CKPOL      : 1;            /*!< [3..3] Steady state clock polarity                                        */
      __IOM uint32_t I2SSTD     : 2;            /*!< [5..4] I2S standard selection                                             */
            uint32_t            : 1;
      __IOM uint32_t PCMSYNC    : 1;            /*!< [7..7] PCM frame synchronization                                          */
      __IOM uint32_t I2SCFG     : 2;            /*!< [9..8] I2S configuration mode                                             */
      __IOM uint32_t I2SE       : 1;            /*!< [10..10] I2S Enable                                                       */
      __IOM uint32_t I2SMOD     : 1;            /*!< [11..11] I2S mode selection                                               */
      __IOM uint32_t ASTRTEN    : 1;            /*!< [12..12] Asynchronous start enable                                        */
            uint32_t            : 19;
    } I2SCFGR_b;
  } ;
  
  union {
    __IOM uint32_t I2SPR;                       /*!< (@ 0x00000020) I2S prescaler register                                     */
    
    struct {
      __IOM uint32_t I2SDIV     : 8;            /*!< [7..0] I2S Linear prescaler                                               */
      __IOM uint32_t ODD        : 1;            /*!< [8..8] Odd factor for the prescaler                                       */
      __IOM uint32_t MCKOE      : 1;            /*!< [9..9] Master clock output enable                                         */
            uint32_t            : 22;
    } I2SPR_b;
  } ;
} SPI1_Type;                                    /*!< Size = 36 (0x24)                                                          */



/* =========================================================================================================================== */
/* ================                                           SPI1                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR1  ========================================================== */
#define SPI1_CR1_BIDIMODE_Pos             (15UL)                    /*!< BIDIMODE (Bit 15)                                     */
#define SPI1_CR1_BIDIMODE_Msk             (0x8000UL)                /*!< BIDIMODE (Bitfield-Mask: 0x01)                        */
#define SPI1_CR1_BIDIOE_Pos               (14UL)                    /*!< BIDIOE (Bit 14)                                       */
#define SPI1_CR1_BIDIOE_Msk               (0x4000UL)                /*!< BIDIOE (Bitfield-Mask: 0x01)                          */
#define SPI1_CR1_CRCEN_Pos                (13UL)                    /*!< CRCEN (Bit 13)                                        */
#define SPI1_CR1_CRCEN_Msk                (0x2000UL)                /*!< CRCEN (Bitfield-Mask: 0x01)                           */
#define SPI1_CR1_CRCNEXT_Pos              (12UL)                    /*!< CRCNEXT (Bit 12)                                      */
#define SPI1_CR1_CRCNEXT_Msk              (0x1000UL)                /*!< CRCNEXT (Bitfield-Mask: 0x01)                         */
#define SPI1_CR1_CRCL_Pos                 (11UL)                    /*!< CRCL (Bit 11)                                         */
#define SPI1_CR1_CRCL_Msk                 (0x800UL)                 /*!< CRCL (Bitfield-Mask: 0x01)                            */
#define SPI1_CR1_RXONLY_Pos               (10UL)                    /*!< RXONLY (Bit 10)                                       */
#define SPI1_CR1_RXONLY_Msk               (0x400UL)                 /*!< RXONLY (Bitfield-Mask: 0x01)                          */
#define SPI1_CR1_SSM_Pos                  (9UL)                     /*!< SSM (Bit 9)                                           */
#define SPI1_CR1_SSM_Msk                  (0x200UL)                 /*!< SSM (Bitfield-Mask: 0x01)                             */
#define SPI1_CR1_SSI_Pos                  (8UL)                     /*!< SSI (Bit 8)                                           */
#define SPI1_CR1_SSI_Msk                  (0x100UL)                 /*!< SSI (Bitfield-Mask: 0x01)                             */
#define SPI1_CR1_LSBFIRST_Pos             (7UL)                     /*!< LSBFIRST (Bit 7)                                      */
#define SPI1_CR1_LSBFIRST_Msk             (0x80UL)                  /*!< LSBFIRST (Bitfield-Mask: 0x01)                        */
#define SPI1_CR1_SPE_Pos                  (6UL)                     /*!< SPE (Bit 6)                                           */
#define SPI1_CR1_SPE_Msk                  (0x40UL)                  /*!< SPE (Bitfield-Mask: 0x01)                             */
#define SPI1_CR1_BR_Pos                   (3UL)                     /*!< BR (Bit 3)                                            */
#define SPI1_CR1_BR_Msk                   (0x38UL)                  /*!< BR (Bitfield-Mask: 0x07)                              */
#define SPI1_CR1_MSTR_Pos                 (2UL)                     /*!< MSTR (Bit 2)                                          */
#define SPI1_CR1_MSTR_Msk                 (0x4UL)                   /*!< MSTR (Bitfield-Mask: 0x01)                            */
#define SPI1_CR1_CPOL_Pos                 (1UL)                     /*!< CPOL (Bit 1)                                          */
#define SPI1_CR1_CPOL_Msk                 (0x2UL)                   /*!< CPOL (Bitfield-Mask: 0x01)                            */
#define SPI1_CR1_CPHA_Pos                 (0UL)                     /*!< CPHA (Bit 0)                                          */
#define SPI1_CR1_CPHA_Msk                 (0x1UL)                   /*!< CPHA (Bitfield-Mask: 0x01)                            */
/* ==========================================================  CR2  ========================================================== */
#define SPI1_CR2_RXDMAEN_Pos              (0UL)                     /*!< RXDMAEN (Bit 0)                                       */
#define SPI1_CR2_RXDMAEN_Msk              (0x1UL)                   /*!< RXDMAEN (Bitfield-Mask: 0x01)                         */
#define SPI1_CR2_TXDMAEN_Pos              (1UL)                     /*!< TXDMAEN (Bit 1)                                       */
#define SPI1_CR2_TXDMAEN_Msk              (0x2UL)                   /*!< TXDMAEN (Bitfield-Mask: 0x01)                         */
#define SPI1_CR2_SSOE_Pos                 (2UL)                     /*!< SSOE (Bit 2)                                          */
#define SPI1_CR2_SSOE_Msk                 (0x4UL)                   /*!< SSOE (Bitfield-Mask: 0x01)                            */
#define SPI1_CR2_NSSP_Pos                 (3UL)                     /*!< NSSP (Bit 3)                                          */
#define SPI1_CR2_NSSP_Msk                 (0x8UL)                   /*!< NSSP (Bitfield-Mask: 0x01)                            */
#define SPI1_CR2_FRF_Pos                  (4UL)                     /*!< FRF (Bit 4)                                           */
#define SPI1_CR2_FRF_Msk                  (0x10UL)                  /*!< FRF (Bitfield-Mask: 0x01)                             */
#define SPI1_CR2_ERRIE_Pos                (5UL)                     /*!< ERRIE (Bit 5)                                         */
#define SPI1_CR2_ERRIE_Msk                (0x20UL)                  /*!< ERRIE (Bitfield-Mask: 0x01)                           */
#define SPI1_CR2_RXNEIE_Pos               (6UL)                     /*!< RXNEIE (Bit 6)                                        */
#define SPI1_CR2_RXNEIE_Msk               (0x40UL)                  /*!< RXNEIE (Bitfield-Mask: 0x01)                          */
#define SPI1_CR2_TXEIE_Pos                (7UL)                     /*!< TXEIE (Bit 7)                                         */
#define SPI1_CR2_TXEIE_Msk                (0x80UL)                  /*!< TXEIE (Bitfield-Mask: 0x01)                           */
#define SPI1_CR2_DS_Pos                   (8UL)                     /*!< DS (Bit 8)                                            */
#define SPI1_CR2_DS_Msk                   (0xf00UL)                 /*!< DS (Bitfield-Mask: 0x0f)                              */
#define SPI1_CR2_FRXTH_Pos                (12UL)                    /*!< FRXTH (Bit 12)                                        */
#define SPI1_CR2_FRXTH_Msk                (0x1000UL)                /*!< FRXTH (Bitfield-Mask: 0x01)                           */
#define SPI1_CR2_LDMA_RX_Pos              (13UL)                    /*!< LDMA_RX (Bit 13)                                      */
#define SPI1_CR2_LDMA_RX_Msk              (0x2000UL)                /*!< LDMA_RX (Bitfield-Mask: 0x01)                         */
#define SPI1_CR2_LDMA_TX_Pos              (14UL)                    /*!< LDMA_TX (Bit 14)                                      */
#define SPI1_CR2_LDMA_TX_Msk              (0x4000UL)                /*!< LDMA_TX (Bitfield-Mask: 0x01)                         */
/* ==========================================================  SR  =========================================================== */
#define SPI1_SR_FRE_Pos                   (8UL)                     /*!< FRE (Bit 8)                                           */
#define SPI1_SR_FRE_Msk                   (0x100UL)                 /*!< FRE (Bitfield-Mask: 0x01)                             */
#define SPI1_SR_BSY_Pos                   (7UL)                     /*!< BSY (Bit 7)                                           */
#define SPI1_SR_BSY_Msk                   (0x80UL)                  /*!< BSY (Bitfield-Mask: 0x01)                             */
#define SPI1_SR_OVR_Pos                   (6UL)                     /*!< OVR (Bit 6)                                           */
#define SPI1_SR_OVR_Msk                   (0x40UL)                  /*!< OVR (Bitfield-Mask: 0x01)                             */
#define SPI1_SR_MODF_Pos                  (5UL)                     /*!< MODF (Bit 5)                                          */
#define SPI1_SR_MODF_Msk                  (0x20UL)                  /*!< MODF (Bitfield-Mask: 0x01)                            */
#define SPI1_SR_CRCERR_Pos                (4UL)                     /*!< CRCERR (Bit 4)                                        */
#define SPI1_SR_CRCERR_Msk                (0x10UL)                  /*!< CRCERR (Bitfield-Mask: 0x01)                          */
#define SPI1_SR_UDR_Pos                   (3UL)                     /*!< UDR (Bit 3)                                           */
#define SPI1_SR_UDR_Msk                   (0x8UL)                   /*!< UDR (Bitfield-Mask: 0x01)                             */
#define SPI1_SR_CHSIDE_Pos                (2UL)                     /*!< CHSIDE (Bit 2)                                        */
#define SPI1_SR_CHSIDE_Msk                (0x4UL)                   /*!< CHSIDE (Bitfield-Mask: 0x01)                          */
#define SPI1_SR_TXE_Pos                   (1UL)                     /*!< TXE (Bit 1)                                           */
#define SPI1_SR_TXE_Msk                   (0x2UL)                   /*!< TXE (Bitfield-Mask: 0x01)                             */
#define SPI1_SR_RXNE_Pos                  (0UL)                     /*!< RXNE (Bit 0)                                          */
#define SPI1_SR_RXNE_Msk                  (0x1UL)                   /*!< RXNE (Bitfield-Mask: 0x01)                            */
#define SPI1_SR_FRLVL_Pos                 (9UL)                     /*!< FRLVL (Bit 9)                                         */
#define SPI1_SR_FRLVL_Msk                 (0x600UL)                 /*!< FRLVL (Bitfield-Mask: 0x03)                           */
#define SPI1_SR_FTLVL_Pos                 (11UL)                    /*!< FTLVL (Bit 11)                                        */
#define SPI1_SR_FTLVL_Msk                 (0x1800UL)                /*!< FTLVL (Bitfield-Mask: 0x03)                           */
/* ==========================================================  DR  =========================================================== */
#define SPI1_DR_DR_Pos                    (0UL)                     /*!< DR (Bit 0)                                            */
#define SPI1_DR_DR_Msk                    (0xffffUL)                /*!< DR (Bitfield-Mask: 0xffff)                            */
/* =========================================================  CRCPR  ========================================================= */
#define SPI1_CRCPR_CRCPOLY_Pos            (0UL)                     /*!< CRCPOLY (Bit 0)                                       */
#define SPI1_CRCPR_CRCPOLY_Msk            (0xffffUL)                /*!< CRCPOLY (Bitfield-Mask: 0xffff)                       */
/* ========================================================  RXCRCR  ========================================================= */
#define SPI1_RXCRCR_RxCRC_Pos             (0UL)                     /*!< RxCRC (Bit 0)                                         */
#define SPI1_RXCRCR_RxCRC_Msk             (0xffffUL)                /*!< RxCRC (Bitfield-Mask: 0xffff)                         */
/* ========================================================  TXCRCR  ========================================================= */
#define SPI1_TXCRCR_TxCRC_Pos             (0UL)                     /*!< TxCRC (Bit 0)                                         */
#define SPI1_TXCRCR_TxCRC_Msk             (0xffffUL)                /*!< TxCRC (Bitfield-Mask: 0xffff)                         */
/* ========================================================  I2SCFGR  ======================================================== */
#define SPI1_I2SCFGR_I2SMOD_Pos           (11UL)                    /*!< I2SMOD (Bit 11)                                       */
#define SPI1_I2SCFGR_I2SMOD_Msk           (0x800UL)                 /*!< I2SMOD (Bitfield-Mask: 0x01)                          */
#define SPI1_I2SCFGR_I2SE_Pos             (10UL)                    /*!< I2SE (Bit 10)                                         */
#define SPI1_I2SCFGR_I2SE_Msk             (0x400UL)                 /*!< I2SE (Bitfield-Mask: 0x01)                            */
#define SPI1_I2SCFGR_I2SCFG_Pos           (8UL)                     /*!< I2SCFG (Bit 8)                                        */
#define SPI1_I2SCFGR_I2SCFG_Msk           (0x300UL)                 /*!< I2SCFG (Bitfield-Mask: 0x03)                          */
#define SPI1_I2SCFGR_PCMSYNC_Pos          (7UL)                     /*!< PCMSYNC (Bit 7)                                       */
#define SPI1_I2SCFGR_PCMSYNC_Msk          (0x80UL)                  /*!< PCMSYNC (Bitfield-Mask: 0x01)                         */
#define SPI1_I2SCFGR_I2SSTD_Pos           (4UL)                     /*!< I2SSTD (Bit 4)                                        */
#define SPI1_I2SCFGR_I2SSTD_Msk           (0x30UL)                  /*!< I2SSTD (Bitfield-Mask: 0x03)                          */
#define SPI1_I2SCFGR_CKPOL_Pos            (3UL)                     /*!< CKPOL (Bit 3)                                         */
#define SPI1_I2SCFGR_CKPOL_Msk            (0x8UL)                   /*!< CKPOL (Bitfield-Mask: 0x01)                           */
#define SPI1_I2SCFGR_DATLEN_Pos           (1UL)                     /*!< DATLEN (Bit 1)                                        */
#define SPI1_I2SCFGR_DATLEN_Msk           (0x6UL)                   /*!< DATLEN (Bitfield-Mask: 0x03)                          */
#define SPI1_I2SCFGR_CHLEN_Pos            (0UL)                     /*!< CHLEN (Bit 0)                                         */
#define SPI1_I2SCFGR_CHLEN_Msk            (0x1UL)                   /*!< CHLEN (Bitfield-Mask: 0x01)                           */
#define SPI1_I2SCFGR_ASTRTEN_Pos          (12UL)                    /*!< ASTRTEN (Bit 12)                                      */
#define SPI1_I2SCFGR_ASTRTEN_Msk          (0x1000UL)                /*!< ASTRTEN (Bitfield-Mask: 0x01)                         */
/* =========================================================  I2SPR  ========================================================= */
#define SPI1_I2SPR_MCKOE_Pos              (9UL)                     /*!< MCKOE (Bit 9)                                         */
#define SPI1_I2SPR_MCKOE_Msk              (0x200UL)                 /*!< MCKOE (Bitfield-Mask: 0x01)                           */
#define SPI1_I2SPR_ODD_Pos                (8UL)                     /*!< ODD (Bit 8)                                           */
#define SPI1_I2SPR_ODD_Msk                (0x100UL)                 /*!< ODD (Bitfield-Mask: 0x01)                             */
#define SPI1_I2SPR_I2SDIV_Pos             (0UL)                     /*!< I2SDIV (Bit 0)                                        */
#define SPI1_I2SPR_I2SDIV_Msk             (0xffUL)                  /*!< I2SDIV (Bitfield-Mask: 0xff)                          */
