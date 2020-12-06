#include "core.h"


#define SPDIFRX_BASE                0x40004000UL

#define SPDIFRX                     ((SPDIFRX_Type*)           SPDIFRX_BASE)


/* =========================================================================================================================== */
/* ================                                          SPDIFRX                                          ================ */
/* =========================================================================================================================== */


/**
  * @brief Receiver Interface (SPDIFRX)
  */

typedef struct {                                /*!< (@ 0x40004000) SPDIFRX Structure                                          */
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000000) Control register                                           */
    
    struct {
      __IOM uint32_t SPDIFEN    : 2;            /*!< [1..0] Peripheral Block Enable                                            */
      __IOM uint32_t RXDMAEN    : 1;            /*!< [2..2] Receiver DMA ENable for data flow                                  */
      __IOM uint32_t RXSTEO     : 1;            /*!< [3..3] STerEO Mode                                                        */
      __IOM uint32_t DRFMT      : 2;            /*!< [5..4] RX Data format                                                     */
      __IOM uint32_t PMSK       : 1;            /*!< [6..6] Mask Parity error bit                                              */
      __IOM uint32_t VMSK       : 1;            /*!< [7..7] Mask of Validity bit                                               */
      __IOM uint32_t CUMSK      : 1;            /*!< [8..8] Mask of channel status and user bits                               */
      __IOM uint32_t PTMSK      : 1;            /*!< [9..9] Mask of Preamble Type bits                                         */
      __IOM uint32_t CBDMAEN    : 1;            /*!< [10..10] Control Buffer DMA ENable for control flow                       */
      __IOM uint32_t CHSEL      : 1;            /*!< [11..11] Channel Selection                                                */
      __IOM uint32_t NBTR       : 2;            /*!< [13..12] Maximum allowed re-tries during synchronization phase            */
      __IOM uint32_t WFA        : 1;            /*!< [14..14] Wait For Activity                                                */
            uint32_t            : 1;
      __IOM uint32_t INSEL      : 3;            /*!< [18..16] input selection                                                  */
            uint32_t            : 13;
    } CR_b;
  } ;
  
  union {
    __IOM uint32_t IMR;                         /*!< (@ 0x00000004) Interrupt mask register                                    */
    
    struct {
      __IOM uint32_t RXNEIE     : 1;            /*!< [0..0] RXNE interrupt enable                                              */
      __IOM uint32_t CSRNEIE    : 1;            /*!< [1..1] Control Buffer Ready Interrupt Enable                              */
      __IOM uint32_t PERRIE     : 1;            /*!< [2..2] Parity error interrupt enable                                      */
      __IOM uint32_t OVRIE      : 1;            /*!< [3..3] Overrun error Interrupt Enable                                     */
      __IOM uint32_t SBLKIE     : 1;            /*!< [4..4] Synchronization Block Detected Interrupt Enable                    */
      __IOM uint32_t SYNCDIE    : 1;            /*!< [5..5] Synchronization Done                                               */
      __IOM uint32_t IFEIE      : 1;            /*!< [6..6] Serial Interface Error Interrupt Enable                            */
            uint32_t            : 25;
    } IMR_b;
  } ;
  
  union {
    __IM  uint32_t SR;                          /*!< (@ 0x00000008) Status register                                            */
    
    struct {
      __IM  uint32_t RXNE       : 1;            /*!< [0..0] Read data register not empty                                       */
      __IM  uint32_t CSRNE      : 1;            /*!< [1..1] Control Buffer register is not empty                               */
      __IM  uint32_t PERR       : 1;            /*!< [2..2] Parity error                                                       */
      __IM  uint32_t OVR        : 1;            /*!< [3..3] Overrun error                                                      */
      __IM  uint32_t SBD        : 1;            /*!< [4..4] Synchronization Block Detected                                     */
      __IM  uint32_t SYNCD      : 1;            /*!< [5..5] Synchronization Done                                               */
      __IM  uint32_t FERR       : 1;            /*!< [6..6] Framing error                                                      */
      __IM  uint32_t SERR       : 1;            /*!< [7..7] Synchronization error                                              */
      __IM  uint32_t TERR       : 1;            /*!< [8..8] Time-out error                                                     */
            uint32_t            : 7;
      __IM  uint32_t WIDTH5     : 15;           /*!< [30..16] Duration of 5 symbols counted with SPDIF_CLK                     */
            uint32_t            : 1;
    } SR_b;
  } ;
  
  union {
    __OM  uint32_t IFCR;                        /*!< (@ 0x0000000C) Interrupt Flag Clear register                              */
    
    struct {
            uint32_t            : 2;
      __OM  uint32_t PERRCF     : 1;            /*!< [2..2] Clears the Parity error flag                                       */
      __OM  uint32_t OVRCF      : 1;            /*!< [3..3] Clears the Overrun error flag                                      */
      __OM  uint32_t SBDCF      : 1;            /*!< [4..4] Clears the Synchronization Block Detected flag                     */
      __OM  uint32_t SYNCDCF    : 1;            /*!< [5..5] Clears the Synchronization Done flag                               */
            uint32_t            : 26;
    } IFCR_b;
  } ;
  
  union {
    __IM  uint32_t DR;                          /*!< (@ 0x00000010) Data input register                                        */
    
    struct {
      __IM  uint32_t DR         : 24;           /*!< [23..0] Parity Error bit                                                  */
      __IM  uint32_t PE         : 1;            /*!< [24..24] Parity Error bit                                                 */
      __IM  uint32_t V          : 1;            /*!< [25..25] Validity bit                                                     */
      __IM  uint32_t U          : 1;            /*!< [26..26] User bit                                                         */
      __IM  uint32_t C          : 1;            /*!< [27..27] Channel Status bit                                               */
      __IM  uint32_t PT         : 2;            /*!< [29..28] Preamble Type                                                    */
            uint32_t            : 2;
    } DR_b;
  } ;
  
  union {
    __IM  uint32_t CSR;                         /*!< (@ 0x00000014) Channel Status register                                    */
    
    struct {
      __IM  uint32_t USR        : 16;           /*!< [15..0] User data information                                             */
      __IM  uint32_t CS         : 8;            /*!< [23..16] Channel A status information                                     */
      __IM  uint32_t SOB        : 1;            /*!< [24..24] Start Of Block                                                   */
            uint32_t            : 7;
    } CSR_b;
  } ;
  
  union {
    __IM  uint32_t DIR;                         /*!< (@ 0x00000018) Debug Information register                                 */
    
    struct {
      __IM  uint32_t THI        : 13;           /*!< [12..0] Threshold HIGH                                                    */
            uint32_t            : 3;
      __IM  uint32_t TLO        : 13;           /*!< [28..16] Threshold LOW                                                    */
            uint32_t            : 3;
    } DIR_b;
  } ;
} SPDIFRX_Type;                                 /*!< Size = 28 (0x1c)                                                          */



/* =========================================================================================================================== */
/* ================                                          SPDIFRX                                          ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
#define SPDIFRX_CR_SPDIFEN_Pos            (0UL)                     /*!< SPDIFEN (Bit 0)                                       */
#define SPDIFRX_CR_SPDIFEN_Msk            (0x3UL)                   /*!< SPDIFEN (Bitfield-Mask: 0x03)                         */
#define SPDIFRX_CR_RXDMAEN_Pos            (2UL)                     /*!< RXDMAEN (Bit 2)                                       */
#define SPDIFRX_CR_RXDMAEN_Msk            (0x4UL)                   /*!< RXDMAEN (Bitfield-Mask: 0x01)                         */
#define SPDIFRX_CR_RXSTEO_Pos             (3UL)                     /*!< RXSTEO (Bit 3)                                        */
#define SPDIFRX_CR_RXSTEO_Msk             (0x8UL)                   /*!< RXSTEO (Bitfield-Mask: 0x01)                          */
#define SPDIFRX_CR_DRFMT_Pos              (4UL)                     /*!< DRFMT (Bit 4)                                         */
#define SPDIFRX_CR_DRFMT_Msk              (0x30UL)                  /*!< DRFMT (Bitfield-Mask: 0x03)                           */
#define SPDIFRX_CR_PMSK_Pos               (6UL)                     /*!< PMSK (Bit 6)                                          */
#define SPDIFRX_CR_PMSK_Msk               (0x40UL)                  /*!< PMSK (Bitfield-Mask: 0x01)                            */
#define SPDIFRX_CR_VMSK_Pos               (7UL)                     /*!< VMSK (Bit 7)                                          */
#define SPDIFRX_CR_VMSK_Msk               (0x80UL)                  /*!< VMSK (Bitfield-Mask: 0x01)                            */
#define SPDIFRX_CR_CUMSK_Pos              (8UL)                     /*!< CUMSK (Bit 8)                                         */
#define SPDIFRX_CR_CUMSK_Msk              (0x100UL)                 /*!< CUMSK (Bitfield-Mask: 0x01)                           */
#define SPDIFRX_CR_PTMSK_Pos              (9UL)                     /*!< PTMSK (Bit 9)                                         */
#define SPDIFRX_CR_PTMSK_Msk              (0x200UL)                 /*!< PTMSK (Bitfield-Mask: 0x01)                           */
#define SPDIFRX_CR_CBDMAEN_Pos            (10UL)                    /*!< CBDMAEN (Bit 10)                                      */
#define SPDIFRX_CR_CBDMAEN_Msk            (0x400UL)                 /*!< CBDMAEN (Bitfield-Mask: 0x01)                         */
#define SPDIFRX_CR_CHSEL_Pos              (11UL)                    /*!< CHSEL (Bit 11)                                        */
#define SPDIFRX_CR_CHSEL_Msk              (0x800UL)                 /*!< CHSEL (Bitfield-Mask: 0x01)                           */
#define SPDIFRX_CR_NBTR_Pos               (12UL)                    /*!< NBTR (Bit 12)                                         */
#define SPDIFRX_CR_NBTR_Msk               (0x3000UL)                /*!< NBTR (Bitfield-Mask: 0x03)                            */
#define SPDIFRX_CR_WFA_Pos                (14UL)                    /*!< WFA (Bit 14)                                          */
#define SPDIFRX_CR_WFA_Msk                (0x4000UL)                /*!< WFA (Bitfield-Mask: 0x01)                             */
#define SPDIFRX_CR_INSEL_Pos              (16UL)                    /*!< INSEL (Bit 16)                                        */
#define SPDIFRX_CR_INSEL_Msk              (0x70000UL)               /*!< INSEL (Bitfield-Mask: 0x07)                           */
/* ==========================================================  IMR  ========================================================== */
#define SPDIFRX_IMR_RXNEIE_Pos            (0UL)                     /*!< RXNEIE (Bit 0)                                        */
#define SPDIFRX_IMR_RXNEIE_Msk            (0x1UL)                   /*!< RXNEIE (Bitfield-Mask: 0x01)                          */
#define SPDIFRX_IMR_CSRNEIE_Pos           (1UL)                     /*!< CSRNEIE (Bit 1)                                       */
#define SPDIFRX_IMR_CSRNEIE_Msk           (0x2UL)                   /*!< CSRNEIE (Bitfield-Mask: 0x01)                         */
#define SPDIFRX_IMR_PERRIE_Pos            (2UL)                     /*!< PERRIE (Bit 2)                                        */
#define SPDIFRX_IMR_PERRIE_Msk            (0x4UL)                   /*!< PERRIE (Bitfield-Mask: 0x01)                          */
#define SPDIFRX_IMR_OVRIE_Pos             (3UL)                     /*!< OVRIE (Bit 3)                                         */
#define SPDIFRX_IMR_OVRIE_Msk             (0x8UL)                   /*!< OVRIE (Bitfield-Mask: 0x01)                           */
#define SPDIFRX_IMR_SBLKIE_Pos            (4UL)                     /*!< SBLKIE (Bit 4)                                        */
#define SPDIFRX_IMR_SBLKIE_Msk            (0x10UL)                  /*!< SBLKIE (Bitfield-Mask: 0x01)                          */
#define SPDIFRX_IMR_SYNCDIE_Pos           (5UL)                     /*!< SYNCDIE (Bit 5)                                       */
#define SPDIFRX_IMR_SYNCDIE_Msk           (0x20UL)                  /*!< SYNCDIE (Bitfield-Mask: 0x01)                         */
#define SPDIFRX_IMR_IFEIE_Pos             (6UL)                     /*!< IFEIE (Bit 6)                                         */
#define SPDIFRX_IMR_IFEIE_Msk             (0x40UL)                  /*!< IFEIE (Bitfield-Mask: 0x01)                           */
/* ==========================================================  SR  =========================================================== */
#define SPDIFRX_SR_RXNE_Pos               (0UL)                     /*!< RXNE (Bit 0)                                          */
#define SPDIFRX_SR_RXNE_Msk               (0x1UL)                   /*!< RXNE (Bitfield-Mask: 0x01)                            */
#define SPDIFRX_SR_CSRNE_Pos              (1UL)                     /*!< CSRNE (Bit 1)                                         */
#define SPDIFRX_SR_CSRNE_Msk              (0x2UL)                   /*!< CSRNE (Bitfield-Mask: 0x01)                           */
#define SPDIFRX_SR_PERR_Pos               (2UL)                     /*!< PERR (Bit 2)                                          */
#define SPDIFRX_SR_PERR_Msk               (0x4UL)                   /*!< PERR (Bitfield-Mask: 0x01)                            */
#define SPDIFRX_SR_OVR_Pos                (3UL)                     /*!< OVR (Bit 3)                                           */
#define SPDIFRX_SR_OVR_Msk                (0x8UL)                   /*!< OVR (Bitfield-Mask: 0x01)                             */
#define SPDIFRX_SR_SBD_Pos                (4UL)                     /*!< SBD (Bit 4)                                           */
#define SPDIFRX_SR_SBD_Msk                (0x10UL)                  /*!< SBD (Bitfield-Mask: 0x01)                             */
#define SPDIFRX_SR_SYNCD_Pos              (5UL)                     /*!< SYNCD (Bit 5)                                         */
#define SPDIFRX_SR_SYNCD_Msk              (0x20UL)                  /*!< SYNCD (Bitfield-Mask: 0x01)                           */
#define SPDIFRX_SR_FERR_Pos               (6UL)                     /*!< FERR (Bit 6)                                          */
#define SPDIFRX_SR_FERR_Msk               (0x40UL)                  /*!< FERR (Bitfield-Mask: 0x01)                            */
#define SPDIFRX_SR_SERR_Pos               (7UL)                     /*!< SERR (Bit 7)                                          */
#define SPDIFRX_SR_SERR_Msk               (0x80UL)                  /*!< SERR (Bitfield-Mask: 0x01)                            */
#define SPDIFRX_SR_TERR_Pos               (8UL)                     /*!< TERR (Bit 8)                                          */
#define SPDIFRX_SR_TERR_Msk               (0x100UL)                 /*!< TERR (Bitfield-Mask: 0x01)                            */
#define SPDIFRX_SR_WIDTH5_Pos             (16UL)                    /*!< WIDTH5 (Bit 16)                                       */
#define SPDIFRX_SR_WIDTH5_Msk             (0x7fff0000UL)            /*!< WIDTH5 (Bitfield-Mask: 0x7fff)                        */
/* =========================================================  IFCR  ========================================================== */
#define SPDIFRX_IFCR_PERRCF_Pos           (2UL)                     /*!< PERRCF (Bit 2)                                        */
#define SPDIFRX_IFCR_PERRCF_Msk           (0x4UL)                   /*!< PERRCF (Bitfield-Mask: 0x01)                          */
#define SPDIFRX_IFCR_OVRCF_Pos            (3UL)                     /*!< OVRCF (Bit 3)                                         */
#define SPDIFRX_IFCR_OVRCF_Msk            (0x8UL)                   /*!< OVRCF (Bitfield-Mask: 0x01)                           */
#define SPDIFRX_IFCR_SBDCF_Pos            (4UL)                     /*!< SBDCF (Bit 4)                                         */
#define SPDIFRX_IFCR_SBDCF_Msk            (0x10UL)                  /*!< SBDCF (Bitfield-Mask: 0x01)                           */
#define SPDIFRX_IFCR_SYNCDCF_Pos          (5UL)                     /*!< SYNCDCF (Bit 5)                                       */
#define SPDIFRX_IFCR_SYNCDCF_Msk          (0x20UL)                  /*!< SYNCDCF (Bitfield-Mask: 0x01)                         */
/* ==========================================================  DR  =========================================================== */
#define SPDIFRX_DR_DR_Pos                 (0UL)                     /*!< DR (Bit 0)                                            */
#define SPDIFRX_DR_DR_Msk                 (0xffffffUL)              /*!< DR (Bitfield-Mask: 0xffffff)                          */
#define SPDIFRX_DR_PE_Pos                 (24UL)                    /*!< PE (Bit 24)                                           */
#define SPDIFRX_DR_PE_Msk                 (0x1000000UL)             /*!< PE (Bitfield-Mask: 0x01)                              */
#define SPDIFRX_DR_V_Pos                  (25UL)                    /*!< V (Bit 25)                                            */
#define SPDIFRX_DR_V_Msk                  (0x2000000UL)             /*!< V (Bitfield-Mask: 0x01)                               */
#define SPDIFRX_DR_U_Pos                  (26UL)                    /*!< U (Bit 26)                                            */
#define SPDIFRX_DR_U_Msk                  (0x4000000UL)             /*!< U (Bitfield-Mask: 0x01)                               */
#define SPDIFRX_DR_C_Pos                  (27UL)                    /*!< C (Bit 27)                                            */
#define SPDIFRX_DR_C_Msk                  (0x8000000UL)             /*!< C (Bitfield-Mask: 0x01)                               */
#define SPDIFRX_DR_PT_Pos                 (28UL)                    /*!< PT (Bit 28)                                           */
#define SPDIFRX_DR_PT_Msk                 (0x30000000UL)            /*!< PT (Bitfield-Mask: 0x03)                              */
/* ==========================================================  CSR  ========================================================== */
#define SPDIFRX_CSR_USR_Pos               (0UL)                     /*!< USR (Bit 0)                                           */
#define SPDIFRX_CSR_USR_Msk               (0xffffUL)                /*!< USR (Bitfield-Mask: 0xffff)                           */
#define SPDIFRX_CSR_CS_Pos                (16UL)                    /*!< CS (Bit 16)                                           */
#define SPDIFRX_CSR_CS_Msk                (0xff0000UL)              /*!< CS (Bitfield-Mask: 0xff)                              */
#define SPDIFRX_CSR_SOB_Pos               (24UL)                    /*!< SOB (Bit 24)                                          */
#define SPDIFRX_CSR_SOB_Msk               (0x1000000UL)             /*!< SOB (Bitfield-Mask: 0x01)                             */
/* ==========================================================  DIR  ========================================================== */
#define SPDIFRX_DIR_THI_Pos               (0UL)                     /*!< THI (Bit 0)                                           */
#define SPDIFRX_DIR_THI_Msk               (0x1fffUL)                /*!< THI (Bitfield-Mask: 0x1fff)                           */
#define SPDIFRX_DIR_TLO_Pos               (16UL)                    /*!< TLO (Bit 16)                                          */
#define SPDIFRX_DIR_TLO_Msk               (0x1fff0000UL)            /*!< TLO (Bitfield-Mask: 0x1fff)                           */
