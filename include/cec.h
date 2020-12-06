#include "core.h"


#define CEC_BASE                    0x40006C00UL

#define CEC                         ((CEC_Type*)               CEC_BASE)


/* =========================================================================================================================== */
/* ================                                            CEC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief HDMI-CEC controller (CEC)
  */

typedef struct {                                /*!< (@ 0x40006C00) CEC Structure                                              */
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000000) control register                                           */
    
    struct {
      __IOM uint32_t CECEN      : 1;            /*!< [0..0] CEC Enable                                                         */
      __IOM uint32_t TXSOM      : 1;            /*!< [1..1] Tx start of message                                                */
      __IOM uint32_t TXEOM      : 1;            /*!< [2..2] Tx End Of Message                                                  */
            uint32_t            : 29;
    } CR_b;
  } ;
  
  union {
    __IOM uint32_t CFGR;                        /*!< (@ 0x00000004) configuration register                                     */
    
    struct {
      __IOM uint32_t SFT        : 3;            /*!< [2..0] Signal Free Time                                                   */
      __IOM uint32_t RXTOL      : 1;            /*!< [3..3] Rx-Tolerance                                                       */
      __IOM uint32_t BRESTP     : 1;            /*!< [4..4] Rx-stop on bit rising error                                        */
      __IOM uint32_t BREGEN     : 1;            /*!< [5..5] Generate error-bit on bit rising error                             */
      __IOM uint32_t LBPEGEN    : 1;            /*!< [6..6] Generate Error-Bit on Long Bit Period Error                        */
      __IOM uint32_t BRDNOGEN   : 1;            /*!< [7..7] Avoid Error-Bit Generation in Broadcast                            */
      __IOM uint32_t SFTOP      : 1;            /*!< [8..8] SFT Option Bit                                                     */
            uint32_t            : 7;
      __IOM uint32_t OAR        : 15;           /*!< [30..16] Own addresses configuration                                      */
      __IOM uint32_t LSTN       : 1;            /*!< [31..31] Listen mode                                                      */
    } CFGR_b;
  } ;
  
  union {
    __OM  uint32_t TXDR;                        /*!< (@ 0x00000008) Tx data register                                           */
    
    struct {
      __OM  uint32_t TXD        : 8;            /*!< [7..0] Tx Data register                                                   */
            uint32_t            : 24;
    } TXDR_b;
  } ;
  
  union {
    __IM  uint32_t RXDR;                        /*!< (@ 0x0000000C) Rx Data Register                                           */
    
    struct {
      __IM  uint32_t RXDR       : 8;            /*!< [7..0] CEC Rx Data Register                                               */
            uint32_t            : 24;
    } RXDR_b;
  } ;
  
  union {
    __IOM uint32_t ISR;                         /*!< (@ 0x00000010) Interrupt and Status Register                              */
    
    struct {
      __IOM uint32_t RXBR       : 1;            /*!< [0..0] Rx-Byte Received                                                   */
      __IOM uint32_t RXEND      : 1;            /*!< [1..1] End Of Reception                                                   */
      __IOM uint32_t RXOVR      : 1;            /*!< [2..2] Rx-Overrun                                                         */
      __IOM uint32_t BRE        : 1;            /*!< [3..3] Rx-Bit rising error                                                */
      __IOM uint32_t SBPE       : 1;            /*!< [4..4] Rx-Short Bit period error                                          */
      __IOM uint32_t LBPE       : 1;            /*!< [5..5] Rx-Long Bit Period Error                                           */
      __IOM uint32_t RXACKE     : 1;            /*!< [6..6] Rx-Missing Acknowledge                                             */
      __IOM uint32_t ARBLST     : 1;            /*!< [7..7] Arbitration Lost                                                   */
      __IOM uint32_t TXBR       : 1;            /*!< [8..8] Tx-Byte Request                                                    */
      __IOM uint32_t TXEND      : 1;            /*!< [9..9] End of Transmission                                                */
      __IOM uint32_t TXUDR      : 1;            /*!< [10..10] Tx-Buffer Underrun                                               */
      __IOM uint32_t TXERR      : 1;            /*!< [11..11] Tx-Error                                                         */
      __IOM uint32_t TXACKE     : 1;            /*!< [12..12] Tx-Missing acknowledge error                                     */
            uint32_t            : 19;
    } ISR_b;
  } ;
  
  union {
    __IOM uint32_t IER;                         /*!< (@ 0x00000014) interrupt enable register                                  */
    
    struct {
      __IOM uint32_t RXBRIE     : 1;            /*!< [0..0] Rx-Byte Received Interrupt Enable                                  */
      __IOM uint32_t RXENDIE    : 1;            /*!< [1..1] End Of Reception Interrupt Enable                                  */
      __IOM uint32_t RXOVRIE    : 1;            /*!< [2..2] Rx-Buffer Overrun Interrupt Enable                                 */
      __IOM uint32_t BREIE      : 1;            /*!< [3..3] Bit Rising Error Interrupt Enable                                  */
      __IOM uint32_t SBPEIE     : 1;            /*!< [4..4] Short Bit Period Error Interrupt Enable                            */
      __IOM uint32_t LBPEIE     : 1;            /*!< [5..5] Long Bit Period Error Interrupt Enable                             */
      __IOM uint32_t RXACKIE    : 1;            /*!< [6..6] Rx-Missing Acknowledge Error Interrupt Enable                      */
      __IOM uint32_t ARBLSTIE   : 1;            /*!< [7..7] Arbitration Lost Interrupt Enable                                  */
      __IOM uint32_t TXBRIE     : 1;            /*!< [8..8] Tx-Byte Request Interrupt Enable                                   */
      __IOM uint32_t TXENDIE    : 1;            /*!< [9..9] Tx-End of message interrupt enable                                 */
      __IOM uint32_t TXUDRIE    : 1;            /*!< [10..10] Tx-Underrun interrupt enable                                     */
      __IOM uint32_t TXERRIE    : 1;            /*!< [11..11] Tx-Error Interrupt Enable                                        */
      __IOM uint32_t TXACKIE    : 1;            /*!< [12..12] Tx-Missing Acknowledge Error Interrupt Enable                    */
            uint32_t            : 19;
    } IER_b;
  } ;
} CEC_Type;                                     /*!< Size = 24 (0x18)                                                          */



/* =========================================================================================================================== */
/* ================                                            CEC                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
#define CEC_CR_TXEOM_Pos                  (2UL)                     /*!< TXEOM (Bit 2)                                         */
#define CEC_CR_TXEOM_Msk                  (0x4UL)                   /*!< TXEOM (Bitfield-Mask: 0x01)                           */
#define CEC_CR_TXSOM_Pos                  (1UL)                     /*!< TXSOM (Bit 1)                                         */
#define CEC_CR_TXSOM_Msk                  (0x2UL)                   /*!< TXSOM (Bitfield-Mask: 0x01)                           */
#define CEC_CR_CECEN_Pos                  (0UL)                     /*!< CECEN (Bit 0)                                         */
#define CEC_CR_CECEN_Msk                  (0x1UL)                   /*!< CECEN (Bitfield-Mask: 0x01)                           */
/* =========================================================  CFGR  ========================================================== */
#define CEC_CFGR_SFT_Pos                  (0UL)                     /*!< SFT (Bit 0)                                           */
#define CEC_CFGR_SFT_Msk                  (0x7UL)                   /*!< SFT (Bitfield-Mask: 0x07)                             */
#define CEC_CFGR_RXTOL_Pos                (3UL)                     /*!< RXTOL (Bit 3)                                         */
#define CEC_CFGR_RXTOL_Msk                (0x8UL)                   /*!< RXTOL (Bitfield-Mask: 0x01)                           */
#define CEC_CFGR_BRESTP_Pos               (4UL)                     /*!< BRESTP (Bit 4)                                        */
#define CEC_CFGR_BRESTP_Msk               (0x10UL)                  /*!< BRESTP (Bitfield-Mask: 0x01)                          */
#define CEC_CFGR_BREGEN_Pos               (5UL)                     /*!< BREGEN (Bit 5)                                        */
#define CEC_CFGR_BREGEN_Msk               (0x20UL)                  /*!< BREGEN (Bitfield-Mask: 0x01)                          */
#define CEC_CFGR_LBPEGEN_Pos              (6UL)                     /*!< LBPEGEN (Bit 6)                                       */
#define CEC_CFGR_LBPEGEN_Msk              (0x40UL)                  /*!< LBPEGEN (Bitfield-Mask: 0x01)                         */
#define CEC_CFGR_BRDNOGEN_Pos             (7UL)                     /*!< BRDNOGEN (Bit 7)                                      */
#define CEC_CFGR_BRDNOGEN_Msk             (0x80UL)                  /*!< BRDNOGEN (Bitfield-Mask: 0x01)                        */
#define CEC_CFGR_SFTOP_Pos                (8UL)                     /*!< SFTOP (Bit 8)                                         */
#define CEC_CFGR_SFTOP_Msk                (0x100UL)                 /*!< SFTOP (Bitfield-Mask: 0x01)                           */
#define CEC_CFGR_OAR_Pos                  (16UL)                    /*!< OAR (Bit 16)                                          */
#define CEC_CFGR_OAR_Msk                  (0x7fff0000UL)            /*!< OAR (Bitfield-Mask: 0x7fff)                           */
#define CEC_CFGR_LSTN_Pos                 (31UL)                    /*!< LSTN (Bit 31)                                         */
#define CEC_CFGR_LSTN_Msk                 (0x80000000UL)            /*!< LSTN (Bitfield-Mask: 0x01)                            */
/* =========================================================  TXDR  ========================================================== */
#define CEC_TXDR_TXD_Pos                  (0UL)                     /*!< TXD (Bit 0)                                           */
#define CEC_TXDR_TXD_Msk                  (0xffUL)                  /*!< TXD (Bitfield-Mask: 0xff)                             */
/* =========================================================  RXDR  ========================================================== */
#define CEC_RXDR_RXDR_Pos                 (0UL)                     /*!< RXDR (Bit 0)                                          */
#define CEC_RXDR_RXDR_Msk                 (0xffUL)                  /*!< RXDR (Bitfield-Mask: 0xff)                            */
/* ==========================================================  ISR  ========================================================== */
#define CEC_ISR_TXACKE_Pos                (12UL)                    /*!< TXACKE (Bit 12)                                       */
#define CEC_ISR_TXACKE_Msk                (0x1000UL)                /*!< TXACKE (Bitfield-Mask: 0x01)                          */
#define CEC_ISR_TXERR_Pos                 (11UL)                    /*!< TXERR (Bit 11)                                        */
#define CEC_ISR_TXERR_Msk                 (0x800UL)                 /*!< TXERR (Bitfield-Mask: 0x01)                           */
#define CEC_ISR_TXUDR_Pos                 (10UL)                    /*!< TXUDR (Bit 10)                                        */
#define CEC_ISR_TXUDR_Msk                 (0x400UL)                 /*!< TXUDR (Bitfield-Mask: 0x01)                           */
#define CEC_ISR_TXEND_Pos                 (9UL)                     /*!< TXEND (Bit 9)                                         */
#define CEC_ISR_TXEND_Msk                 (0x200UL)                 /*!< TXEND (Bitfield-Mask: 0x01)                           */
#define CEC_ISR_TXBR_Pos                  (8UL)                     /*!< TXBR (Bit 8)                                          */
#define CEC_ISR_TXBR_Msk                  (0x100UL)                 /*!< TXBR (Bitfield-Mask: 0x01)                            */
#define CEC_ISR_ARBLST_Pos                (7UL)                     /*!< ARBLST (Bit 7)                                        */
#define CEC_ISR_ARBLST_Msk                (0x80UL)                  /*!< ARBLST (Bitfield-Mask: 0x01)                          */
#define CEC_ISR_RXACKE_Pos                (6UL)                     /*!< RXACKE (Bit 6)                                        */
#define CEC_ISR_RXACKE_Msk                (0x40UL)                  /*!< RXACKE (Bitfield-Mask: 0x01)                          */
#define CEC_ISR_LBPE_Pos                  (5UL)                     /*!< LBPE (Bit 5)                                          */
#define CEC_ISR_LBPE_Msk                  (0x20UL)                  /*!< LBPE (Bitfield-Mask: 0x01)                            */
#define CEC_ISR_SBPE_Pos                  (4UL)                     /*!< SBPE (Bit 4)                                          */
#define CEC_ISR_SBPE_Msk                  (0x10UL)                  /*!< SBPE (Bitfield-Mask: 0x01)                            */
#define CEC_ISR_BRE_Pos                   (3UL)                     /*!< BRE (Bit 3)                                           */
#define CEC_ISR_BRE_Msk                   (0x8UL)                   /*!< BRE (Bitfield-Mask: 0x01)                             */
#define CEC_ISR_RXOVR_Pos                 (2UL)                     /*!< RXOVR (Bit 2)                                         */
#define CEC_ISR_RXOVR_Msk                 (0x4UL)                   /*!< RXOVR (Bitfield-Mask: 0x01)                           */
#define CEC_ISR_RXEND_Pos                 (1UL)                     /*!< RXEND (Bit 1)                                         */
#define CEC_ISR_RXEND_Msk                 (0x2UL)                   /*!< RXEND (Bitfield-Mask: 0x01)                           */
#define CEC_ISR_RXBR_Pos                  (0UL)                     /*!< RXBR (Bit 0)                                          */
#define CEC_ISR_RXBR_Msk                  (0x1UL)                   /*!< RXBR (Bitfield-Mask: 0x01)                            */
/* ==========================================================  IER  ========================================================== */
#define CEC_IER_TXACKIE_Pos               (12UL)                    /*!< TXACKIE (Bit 12)                                      */
#define CEC_IER_TXACKIE_Msk               (0x1000UL)                /*!< TXACKIE (Bitfield-Mask: 0x01)                         */
#define CEC_IER_TXERRIE_Pos               (11UL)                    /*!< TXERRIE (Bit 11)                                      */
#define CEC_IER_TXERRIE_Msk               (0x800UL)                 /*!< TXERRIE (Bitfield-Mask: 0x01)                         */
#define CEC_IER_TXUDRIE_Pos               (10UL)                    /*!< TXUDRIE (Bit 10)                                      */
#define CEC_IER_TXUDRIE_Msk               (0x400UL)                 /*!< TXUDRIE (Bitfield-Mask: 0x01)                         */
#define CEC_IER_TXENDIE_Pos               (9UL)                     /*!< TXENDIE (Bit 9)                                       */
#define CEC_IER_TXENDIE_Msk               (0x200UL)                 /*!< TXENDIE (Bitfield-Mask: 0x01)                         */
#define CEC_IER_TXBRIE_Pos                (8UL)                     /*!< TXBRIE (Bit 8)                                        */
#define CEC_IER_TXBRIE_Msk                (0x100UL)                 /*!< TXBRIE (Bitfield-Mask: 0x01)                          */
#define CEC_IER_ARBLSTIE_Pos              (7UL)                     /*!< ARBLSTIE (Bit 7)                                      */
#define CEC_IER_ARBLSTIE_Msk              (0x80UL)                  /*!< ARBLSTIE (Bitfield-Mask: 0x01)                        */
#define CEC_IER_RXACKIE_Pos               (6UL)                     /*!< RXACKIE (Bit 6)                                       */
#define CEC_IER_RXACKIE_Msk               (0x40UL)                  /*!< RXACKIE (Bitfield-Mask: 0x01)                         */
#define CEC_IER_LBPEIE_Pos                (5UL)                     /*!< LBPEIE (Bit 5)                                        */
#define CEC_IER_LBPEIE_Msk                (0x20UL)                  /*!< LBPEIE (Bitfield-Mask: 0x01)                          */
#define CEC_IER_SBPEIE_Pos                (4UL)                     /*!< SBPEIE (Bit 4)                                        */
#define CEC_IER_SBPEIE_Msk                (0x10UL)                  /*!< SBPEIE (Bitfield-Mask: 0x01)                          */
#define CEC_IER_BREIE_Pos                 (3UL)                     /*!< BREIE (Bit 3)                                         */
#define CEC_IER_BREIE_Msk                 (0x8UL)                   /*!< BREIE (Bitfield-Mask: 0x01)                           */
#define CEC_IER_RXOVRIE_Pos               (2UL)                     /*!< RXOVRIE (Bit 2)                                       */
#define CEC_IER_RXOVRIE_Msk               (0x4UL)                   /*!< RXOVRIE (Bitfield-Mask: 0x01)                         */
#define CEC_IER_RXENDIE_Pos               (1UL)                     /*!< RXENDIE (Bit 1)                                       */
#define CEC_IER_RXENDIE_Msk               (0x2UL)                   /*!< RXENDIE (Bitfield-Mask: 0x01)                         */
#define CEC_IER_RXBRIE_Pos                (0UL)                     /*!< RXBRIE (Bit 0)                                        */
#define CEC_IER_RXBRIE_Msk                (0x1UL)                   /*!< RXBRIE (Bitfield-Mask: 0x01)                          */
