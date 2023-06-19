#include "core.h"

#define I2C1_BASE                   0x40005400UL
#define I2C2_BASE                   0x40005800UL
#define I2C3_BASE                   0x40005C00UL
#define I2C4_BASE                   0x40006000UL

#define I2C1                        ((volatile I2C1_Type*)              I2C1_BASE)
#define I2C2                        ((volatile I2C1_Type*)              I2C2_BASE)
#define I2C3                        ((volatile I2C1_Type*)              I2C3_BASE)
#define I2C4                        ((volatile I2C1_Type*)              I2C4_BASE)


/* =========================================================================================================================== */
/* ================                                           I2C1                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Inter-integrated circuit (I2C1)
  */

typedef struct {                                /*!< (@ 0x40005400) I2C1 Structure                                             */
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000000) Control register 1                                         */
    
    struct {
      __IOM uint32_t PE         : 1;            /*!< [0..0] Peripheral enable                                                  */
      __IOM uint32_t TXIE       : 1;            /*!< [1..1] TX Interrupt enable                                                */
      __IOM uint32_t RXIE       : 1;            /*!< [2..2] RX Interrupt enable                                                */
      __IOM uint32_t ADDRIE     : 1;            /*!< [3..3] Address match interrupt enable (slave only)                        */
      __IOM uint32_t NACKIE     : 1;            /*!< [4..4] Not acknowledge received interrupt enable                          */
      __IOM uint32_t STOPIE     : 1;            /*!< [5..5] STOP detection Interrupt enable                                    */
      __IOM uint32_t TCIE       : 1;            /*!< [6..6] Transfer Complete interrupt enable                                 */
      __IOM uint32_t ERRIE      : 1;            /*!< [7..7] Error interrupts enable                                            */
      __IOM uint32_t DNF        : 4;            /*!< [11..8] Digital noise filter                                              */
      __IOM uint32_t ANFOFF     : 1;            /*!< [12..12] Analog noise filter OFF                                          */
            uint32_t            : 1;
      __IOM uint32_t TXDMAEN    : 1;            /*!< [14..14] DMA transmission requests enable                                 */
      __IOM uint32_t RXDMAEN    : 1;            /*!< [15..15] DMA reception requests enable                                    */
      __IOM uint32_t SBC        : 1;            /*!< [16..16] Slave byte control                                               */
      __IOM uint32_t NOSTRETCH  : 1;            /*!< [17..17] Clock stretching disable                                         */
      __IOM uint32_t WUPEN      : 1;            /*!< [18..18] Wakeup from STOP enable                                          */
      __IOM uint32_t GCEN       : 1;            /*!< [19..19] General call enable                                              */
      __IOM uint32_t SMBHEN     : 1;            /*!< [20..20] SMBus Host address enable                                        */
      __IOM uint32_t SMBDEN     : 1;            /*!< [21..21] SMBus Device Default address enable                              */
      __IOM uint32_t ALERTEN    : 1;            /*!< [22..22] SMBUS alert enable                                               */
      __IOM uint32_t PECEN      : 1;            /*!< [23..23] PEC enable                                                       */
            uint32_t            : 8;
    } CR1_b;
  } ;
  
  union {
    __IOM uint32_t CR2;                         /*!< (@ 0x00000004) Control register 2                                         */
    
    struct {
      __IOM uint32_t SADD       : 10;           /*!< [9..0] Slave address bit (master mode)                                    */
      __IOM uint32_t RD_WRN     : 1;            /*!< [10..10] Transfer direction (master mode)                                 */
      __IOM uint32_t ADD10      : 1;            /*!< [11..11] 10-bit addressing mode (master mode)                             */
      __IOM uint32_t HEAD10R    : 1;            /*!< [12..12] 10-bit address header only read direction (master receiver
                                                     mode)                                                                     */
      __IOM uint32_t START      : 1;            /*!< [13..13] Start generation                                                 */
      __IOM uint32_t STOP       : 1;            /*!< [14..14] Stop generation (master mode)                                    */
      __IOM uint32_t NACK       : 1;            /*!< [15..15] NACK generation (slave mode)                                     */
      __IOM uint32_t NBYTES     : 8;            /*!< [23..16] Number of bytes                                                  */
      __IOM uint32_t RELOAD     : 1;            /*!< [24..24] NBYTES reload mode                                               */
      __IOM uint32_t AUTOEND    : 1;            /*!< [25..25] Automatic end mode (master mode)                                 */
      __IOM uint32_t PECBYTE    : 1;            /*!< [26..26] Packet error checking byte                                       */
            uint32_t            : 5;
    } CR2_b;
  } ;
  
  union {
    __IOM uint32_t OAR1;                        /*!< (@ 0x00000008) Own address register 1                                     */
    
    struct {
      __IOM uint32_t OA1        : 10;           /*!< [9..0] Interface address                                                  */
      __IOM uint32_t OA1MODE    : 1;            /*!< [10..10] Own Address 1 10-bit mode                                        */
            uint32_t            : 4;
      __IOM uint32_t OA1EN      : 1;            /*!< [15..15] Own Address 1 enable                                             */
            uint32_t            : 16;
    } OAR1_b;
  } ;
  
  union {
    __IOM uint32_t OAR2;                        /*!< (@ 0x0000000C) Own address register 2                                     */
    
    struct {
            uint32_t            : 1;
      __IOM uint32_t OA2        : 7;            /*!< [7..1] Interface address                                                  */
      __IOM uint32_t OA2MSK     : 3;            /*!< [10..8] Own Address 2 masks                                               */
            uint32_t            : 4;
      __IOM uint32_t OA2EN      : 1;            /*!< [15..15] Own Address 2 enable                                             */
            uint32_t            : 16;
    } OAR2_b;
  } ;
  
  union {
    __IOM uint32_t TIMINGR;                     /*!< (@ 0x00000010) Timing register                                            */
    
    struct {
      __IOM uint32_t SCLL       : 8;            /*!< [7..0] SCL low period (master mode)                                       */
      __IOM uint32_t SCLH       : 8;            /*!< [15..8] SCL high period (master mode)                                     */
      __IOM uint32_t SDADEL     : 4;            /*!< [19..16] Data hold time                                                   */
      __IOM uint32_t SCLDEL     : 4;            /*!< [23..20] Data setup time                                                  */
            uint32_t            : 4;
      __IOM uint32_t PRESC      : 4;            /*!< [31..28] Timing prescaler                                                 */
    } TIMINGR_b;
  } ;
  
  union {
    __IOM uint32_t TIMEOUTR;                    /*!< (@ 0x00000014) Status register 1                                          */
    
    struct {
      __IOM uint32_t TIMEOUTA   : 12;           /*!< [11..0] Bus timeout A                                                     */
      __IOM uint32_t TIDLE      : 1;            /*!< [12..12] Idle clock timeout detection                                     */
            uint32_t            : 2;
      __IOM uint32_t TIMOUTEN   : 1;            /*!< [15..15] Clock timeout enable                                             */
      __IOM uint32_t TIMEOUTB   : 12;           /*!< [27..16] Bus timeout B                                                    */
            uint32_t            : 3;
      __IOM uint32_t TEXTEN     : 1;            /*!< [31..31] Extended clock timeout enable                                    */
    } TIMEOUTR_b;
  } ;
  
  union {
    __IOM uint32_t ISR;                         /*!< (@ 0x00000018) Interrupt and Status register                              */
    
    struct {
      __IOM uint32_t TXE        : 1;            /*!< [0..0] Transmit data register empty (transmitters)                        */
      __IOM uint32_t TXIS       : 1;            /*!< [1..1] Transmit interrupt status (transmitters)                           */
      __IM  uint32_t RXNE       : 1;            /*!< [2..2] Receive data register not empty (receivers)                        */
      __IM  uint32_t ADDR       : 1;            /*!< [3..3] Address matched (slave mode)                                       */
      __IM  uint32_t NACKF      : 1;            /*!< [4..4] Not acknowledge received flag                                      */
      __IM  uint32_t STOPF      : 1;            /*!< [5..5] Stop detection flag                                                */
      __IM  uint32_t TC         : 1;            /*!< [6..6] Transfer Complete (master mode)                                    */
      __IM  uint32_t TCR        : 1;            /*!< [7..7] Transfer Complete Reload                                           */
      __IM  uint32_t BERR       : 1;            /*!< [8..8] Bus error                                                          */
      __IM  uint32_t ARLO       : 1;            /*!< [9..9] Arbitration lost                                                   */
      __IM  uint32_t OVR        : 1;            /*!< [10..10] Overrun/Underrun (slave mode)                                    */
      __IM  uint32_t PECERR     : 1;            /*!< [11..11] PEC Error in reception                                           */
      __IM  uint32_t TIMEOUT    : 1;            /*!< [12..12] Timeout or t_low detection flag                                  */
      __IM  uint32_t ALERT      : 1;            /*!< [13..13] SMBus alert                                                      */
            uint32_t            : 1;
      __IM  uint32_t BUSY       : 1;            /*!< [15..15] Bus busy                                                         */
      __IM  uint32_t DIR        : 1;            /*!< [16..16] Transfer direction (Slave mode)                                  */
      __IM  uint32_t ADDCODE    : 7;            /*!< [23..17] Address match code (Slave mode)                                  */
            uint32_t            : 8;
    } ISR_b;
  } ;
  
  union {
    __OM  uint32_t ICR;                         /*!< (@ 0x0000001C) Interrupt clear register                                   */
    
    struct {
            uint32_t            : 3;
      __OM  uint32_t ADDRCF     : 1;            /*!< [3..3] Address Matched flag clear                                         */
      __OM  uint32_t NACKCF     : 1;            /*!< [4..4] Not Acknowledge flag clear                                         */
      __OM  uint32_t STOPCF     : 1;            /*!< [5..5] Stop detection flag clear                                          */
            uint32_t            : 2;
      __OM  uint32_t BERRCF     : 1;            /*!< [8..8] Bus error flag clear                                               */
      __OM  uint32_t ARLOCF     : 1;            /*!< [9..9] Arbitration lost flag clear                                        */
      __OM  uint32_t OVRCF      : 1;            /*!< [10..10] Overrun/Underrun flag clear                                      */
      __OM  uint32_t PECCF      : 1;            /*!< [11..11] PEC Error flag clear                                             */
      __OM  uint32_t TIMOUTCF   : 1;            /*!< [12..12] Timeout detection flag clear                                     */
      __OM  uint32_t ALERTCF    : 1;            /*!< [13..13] Alert flag clear                                                 */
            uint32_t            : 18;
    } ICR_b;
  } ;
  
  union {
    __IM  uint32_t PECR;                        /*!< (@ 0x00000020) PEC register                                               */
    
    struct {
      __IM  uint32_t PEC        : 8;            /*!< [7..0] Packet error checking register                                     */
            uint32_t            : 24;
    } PECR_b;
  } ;
  
  union {
    __IM  uint32_t RXDR;                        /*!< (@ 0x00000024) Receive data register                                      */
    
    struct {
      __IM  uint32_t RXDATA     : 8;            /*!< [7..0] 8-bit receive data                                                 */
            uint32_t            : 24;
    } RXDR_b;
  } ;
  
  union {
    __IOM uint32_t TXDR;                        /*!< (@ 0x00000028) Transmit data register                                     */
    
    struct {
      __IOM uint32_t TXDATA     : 8;            /*!< [7..0] 8-bit transmit data                                                */
            uint32_t            : 24;
    } TXDR_b;
  } ;
} I2C1_Type;                                    /*!< Size = 44 (0x2c)                                                          */



/* =========================================================================================================================== */
/* ================                                           I2C1                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR1  ========================================================== */
#define I2C1_CR1_PE_Pos                   (0UL)                     /*!< PE (Bit 0)                                            */
#define I2C1_CR1_PE_Msk                   (0x1UL)                   /*!< PE (Bitfield-Mask: 0x01)                              */
#define I2C1_CR1_TXIE_Pos                 (1UL)                     /*!< TXIE (Bit 1)                                          */
#define I2C1_CR1_TXIE_Msk                 (0x2UL)                   /*!< TXIE (Bitfield-Mask: 0x01)                            */
#define I2C1_CR1_RXIE_Pos                 (2UL)                     /*!< RXIE (Bit 2)                                          */
#define I2C1_CR1_RXIE_Msk                 (0x4UL)                   /*!< RXIE (Bitfield-Mask: 0x01)                            */
#define I2C1_CR1_ADDRIE_Pos               (3UL)                     /*!< ADDRIE (Bit 3)                                        */
#define I2C1_CR1_ADDRIE_Msk               (0x8UL)                   /*!< ADDRIE (Bitfield-Mask: 0x01)                          */
#define I2C1_CR1_NACKIE_Pos               (4UL)                     /*!< NACKIE (Bit 4)                                        */
#define I2C1_CR1_NACKIE_Msk               (0x10UL)                  /*!< NACKIE (Bitfield-Mask: 0x01)                          */
#define I2C1_CR1_STOPIE_Pos               (5UL)                     /*!< STOPIE (Bit 5)                                        */
#define I2C1_CR1_STOPIE_Msk               (0x20UL)                  /*!< STOPIE (Bitfield-Mask: 0x01)                          */
#define I2C1_CR1_TCIE_Pos                 (6UL)                     /*!< TCIE (Bit 6)                                          */
#define I2C1_CR1_TCIE_Msk                 (0x40UL)                  /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define I2C1_CR1_ERRIE_Pos                (7UL)                     /*!< ERRIE (Bit 7)                                         */
#define I2C1_CR1_ERRIE_Msk                (0x80UL)                  /*!< ERRIE (Bitfield-Mask: 0x01)                           */
#define I2C1_CR1_DNF_Pos                  (8UL)                     /*!< DNF (Bit 8)                                           */
#define I2C1_CR1_DNF_Msk                  (0xf00UL)                 /*!< DNF (Bitfield-Mask: 0x0f)                             */
#define I2C1_CR1_ANFOFF_Pos               (12UL)                    /*!< ANFOFF (Bit 12)                                       */
#define I2C1_CR1_ANFOFF_Msk               (0x1000UL)                /*!< ANFOFF (Bitfield-Mask: 0x01)                          */
#define I2C1_CR1_TXDMAEN_Pos              (14UL)                    /*!< TXDMAEN (Bit 14)                                      */
#define I2C1_CR1_TXDMAEN_Msk              (0x4000UL)                /*!< TXDMAEN (Bitfield-Mask: 0x01)                         */
#define I2C1_CR1_RXDMAEN_Pos              (15UL)                    /*!< RXDMAEN (Bit 15)                                      */
#define I2C1_CR1_RXDMAEN_Msk              (0x8000UL)                /*!< RXDMAEN (Bitfield-Mask: 0x01)                         */
#define I2C1_CR1_SBC_Pos                  (16UL)                    /*!< SBC (Bit 16)                                          */
#define I2C1_CR1_SBC_Msk                  (0x10000UL)               /*!< SBC (Bitfield-Mask: 0x01)                             */
#define I2C1_CR1_NOSTRETCH_Pos            (17UL)                    /*!< NOSTRETCH (Bit 17)                                    */
#define I2C1_CR1_NOSTRETCH_Msk            (0x20000UL)               /*!< NOSTRETCH (Bitfield-Mask: 0x01)                       */
#define I2C1_CR1_WUPEN_Pos                (18UL)                    /*!< WUPEN (Bit 18)                                        */
#define I2C1_CR1_WUPEN_Msk                (0x40000UL)               /*!< WUPEN (Bitfield-Mask: 0x01)                           */
#define I2C1_CR1_GCEN_Pos                 (19UL)                    /*!< GCEN (Bit 19)                                         */
#define I2C1_CR1_GCEN_Msk                 (0x80000UL)               /*!< GCEN (Bitfield-Mask: 0x01)                            */
#define I2C1_CR1_SMBHEN_Pos               (20UL)                    /*!< SMBHEN (Bit 20)                                       */
#define I2C1_CR1_SMBHEN_Msk               (0x100000UL)              /*!< SMBHEN (Bitfield-Mask: 0x01)                          */
#define I2C1_CR1_SMBDEN_Pos               (21UL)                    /*!< SMBDEN (Bit 21)                                       */
#define I2C1_CR1_SMBDEN_Msk               (0x200000UL)              /*!< SMBDEN (Bitfield-Mask: 0x01)                          */
#define I2C1_CR1_ALERTEN_Pos              (22UL)                    /*!< ALERTEN (Bit 22)                                      */
#define I2C1_CR1_ALERTEN_Msk              (0x400000UL)              /*!< ALERTEN (Bitfield-Mask: 0x01)                         */
#define I2C1_CR1_PECEN_Pos                (23UL)                    /*!< PECEN (Bit 23)                                        */
#define I2C1_CR1_PECEN_Msk                (0x800000UL)              /*!< PECEN (Bitfield-Mask: 0x01)                           */
/* ==========================================================  CR2  ========================================================== */
#define I2C1_CR2_PECBYTE_Pos              (26UL)                    /*!< PECBYTE (Bit 26)                                      */
#define I2C1_CR2_PECBYTE_Msk              (0x4000000UL)             /*!< PECBYTE (Bitfield-Mask: 0x01)                         */
#define I2C1_CR2_AUTOEND_Pos              (25UL)                    /*!< AUTOEND (Bit 25)                                      */
#define I2C1_CR2_AUTOEND_Msk              (0x2000000UL)             /*!< AUTOEND (Bitfield-Mask: 0x01)                         */
#define I2C1_CR2_RELOAD_Pos               (24UL)                    /*!< RELOAD (Bit 24)                                       */
#define I2C1_CR2_RELOAD_Msk               (0x1000000UL)             /*!< RELOAD (Bitfield-Mask: 0x01)                          */
#define I2C1_CR2_NBYTES_Pos               (16UL)                    /*!< NBYTES (Bit 16)                                       */
#define I2C1_CR2_NBYTES_Msk               (0xff0000UL)              /*!< NBYTES (Bitfield-Mask: 0xff)                          */
#define I2C1_CR2_NACK_Pos                 (15UL)                    /*!< NACK (Bit 15)                                         */
#define I2C1_CR2_NACK_Msk                 (0x8000UL)                /*!< NACK (Bitfield-Mask: 0x01)                            */
#define I2C1_CR2_STOP_Pos                 (14UL)                    /*!< STOP (Bit 14)                                         */
#define I2C1_CR2_STOP_Msk                 (0x4000UL)                /*!< STOP (Bitfield-Mask: 0x01)                            */
#define I2C1_CR2_START_Pos                (13UL)                    /*!< START (Bit 13)                                        */
#define I2C1_CR2_START_Msk                (0x2000UL)                /*!< START (Bitfield-Mask: 0x01)                           */
#define I2C1_CR2_HEAD10R_Pos              (12UL)                    /*!< HEAD10R (Bit 12)                                      */
#define I2C1_CR2_HEAD10R_Msk              (0x1000UL)                /*!< HEAD10R (Bitfield-Mask: 0x01)                         */
#define I2C1_CR2_ADD10_Pos                (11UL)                    /*!< ADD10 (Bit 11)                                        */
#define I2C1_CR2_ADD10_Msk                (0x800UL)                 /*!< ADD10 (Bitfield-Mask: 0x01)                           */
#define I2C1_CR2_RD_WRN_Pos               (10UL)                    /*!< RD_WRN (Bit 10)                                       */
#define I2C1_CR2_RD_WRN_Msk               (0x400UL)                 /*!< RD_WRN (Bitfield-Mask: 0x01)                          */
#define I2C1_CR2_SADD_Pos                 (0UL)                     /*!< SADD (Bit 0)                                          */
#define I2C1_CR2_SADD_Msk                 (0x3ffUL)                 /*!< SADD (Bitfield-Mask: 0x3ff)                           */
/* =========================================================  OAR1  ========================================================== */
#define I2C1_OAR1_OA1_Pos                 (0UL)                     /*!< OA1 (Bit 0)                                           */
#define I2C1_OAR1_OA1_Msk                 (0x3ffUL)                 /*!< OA1 (Bitfield-Mask: 0x3ff)                            */
#define I2C1_OAR1_OA1MODE_Pos             (10UL)                    /*!< OA1MODE (Bit 10)                                      */
#define I2C1_OAR1_OA1MODE_Msk             (0x400UL)                 /*!< OA1MODE (Bitfield-Mask: 0x01)                         */
#define I2C1_OAR1_OA1EN_Pos               (15UL)                    /*!< OA1EN (Bit 15)                                        */
#define I2C1_OAR1_OA1EN_Msk               (0x8000UL)                /*!< OA1EN (Bitfield-Mask: 0x01)                           */
/* =========================================================  OAR2  ========================================================== */
#define I2C1_OAR2_OA2_Pos                 (1UL)                     /*!< OA2 (Bit 1)                                           */
#define I2C1_OAR2_OA2_Msk                 (0xfeUL)                  /*!< OA2 (Bitfield-Mask: 0x7f)                             */
#define I2C1_OAR2_OA2MSK_Pos              (8UL)                     /*!< OA2MSK (Bit 8)                                        */
#define I2C1_OAR2_OA2MSK_Msk              (0x700UL)                 /*!< OA2MSK (Bitfield-Mask: 0x07)                          */
#define I2C1_OAR2_OA2EN_Pos               (15UL)                    /*!< OA2EN (Bit 15)                                        */
#define I2C1_OAR2_OA2EN_Msk               (0x8000UL)                /*!< OA2EN (Bitfield-Mask: 0x01)                           */
/* ========================================================  TIMINGR  ======================================================== */
#define I2C1_TIMINGR_SCLL_Pos             (0UL)                     /*!< SCLL (Bit 0)                                          */
#define I2C1_TIMINGR_SCLL_Msk             (0xffUL)                  /*!< SCLL (Bitfield-Mask: 0xff)                            */
#define I2C1_TIMINGR_SCLH_Pos             (8UL)                     /*!< SCLH (Bit 8)                                          */
#define I2C1_TIMINGR_SCLH_Msk             (0xff00UL)                /*!< SCLH (Bitfield-Mask: 0xff)                            */
#define I2C1_TIMINGR_SDADEL_Pos           (16UL)                    /*!< SDADEL (Bit 16)                                       */
#define I2C1_TIMINGR_SDADEL_Msk           (0xf0000UL)               /*!< SDADEL (Bitfield-Mask: 0x0f)                          */
#define I2C1_TIMINGR_SCLDEL_Pos           (20UL)                    /*!< SCLDEL (Bit 20)                                       */
#define I2C1_TIMINGR_SCLDEL_Msk           (0xf00000UL)              /*!< SCLDEL (Bitfield-Mask: 0x0f)                          */
#define I2C1_TIMINGR_PRESC_Pos            (28UL)                    /*!< PRESC (Bit 28)                                        */
#define I2C1_TIMINGR_PRESC_Msk            (0xf0000000UL)            /*!< PRESC (Bitfield-Mask: 0x0f)                           */
/* =======================================================  TIMEOUTR  ======================================================== */
#define I2C1_TIMEOUTR_TIMEOUTA_Pos        (0UL)                     /*!< TIMEOUTA (Bit 0)                                      */
#define I2C1_TIMEOUTR_TIMEOUTA_Msk        (0xfffUL)                 /*!< TIMEOUTA (Bitfield-Mask: 0xfff)                       */
#define I2C1_TIMEOUTR_TIDLE_Pos           (12UL)                    /*!< TIDLE (Bit 12)                                        */
#define I2C1_TIMEOUTR_TIDLE_Msk           (0x1000UL)                /*!< TIDLE (Bitfield-Mask: 0x01)                           */
#define I2C1_TIMEOUTR_TIMOUTEN_Pos        (15UL)                    /*!< TIMOUTEN (Bit 15)                                     */
#define I2C1_TIMEOUTR_TIMOUTEN_Msk        (0x8000UL)                /*!< TIMOUTEN (Bitfield-Mask: 0x01)                        */
#define I2C1_TIMEOUTR_TIMEOUTB_Pos        (16UL)                    /*!< TIMEOUTB (Bit 16)                                     */
#define I2C1_TIMEOUTR_TIMEOUTB_Msk        (0xfff0000UL)             /*!< TIMEOUTB (Bitfield-Mask: 0xfff)                       */
#define I2C1_TIMEOUTR_TEXTEN_Pos          (31UL)                    /*!< TEXTEN (Bit 31)                                       */
#define I2C1_TIMEOUTR_TEXTEN_Msk          (0x80000000UL)            /*!< TEXTEN (Bitfield-Mask: 0x01)                          */
/* ==========================================================  ISR  ========================================================== */
#define I2C1_ISR_ADDCODE_Pos              (17UL)                    /*!< ADDCODE (Bit 17)                                      */
#define I2C1_ISR_ADDCODE_Msk              (0xfe0000UL)              /*!< ADDCODE (Bitfield-Mask: 0x7f)                         */
#define I2C1_ISR_DIR_Pos                  (16UL)                    /*!< DIR (Bit 16)                                          */
#define I2C1_ISR_DIR_Msk                  (0x10000UL)               /*!< DIR (Bitfield-Mask: 0x01)                             */
#define I2C1_ISR_BUSY_Pos                 (15UL)                    /*!< BUSY (Bit 15)                                         */
#define I2C1_ISR_BUSY_Msk                 (0x8000UL)                /*!< BUSY (Bitfield-Mask: 0x01)                            */
#define I2C1_ISR_ALERT_Pos                (13UL)                    /*!< ALERT (Bit 13)                                        */
#define I2C1_ISR_ALERT_Msk                (0x2000UL)                /*!< ALERT (Bitfield-Mask: 0x01)                           */
#define I2C1_ISR_TIMEOUT_Pos              (12UL)                    /*!< TIMEOUT (Bit 12)                                      */
#define I2C1_ISR_TIMEOUT_Msk              (0x1000UL)                /*!< TIMEOUT (Bitfield-Mask: 0x01)                         */
#define I2C1_ISR_PECERR_Pos               (11UL)                    /*!< PECERR (Bit 11)                                       */
#define I2C1_ISR_PECERR_Msk               (0x800UL)                 /*!< PECERR (Bitfield-Mask: 0x01)                          */
#define I2C1_ISR_OVR_Pos                  (10UL)                    /*!< OVR (Bit 10)                                          */
#define I2C1_ISR_OVR_Msk                  (0x400UL)                 /*!< OVR (Bitfield-Mask: 0x01)                             */
#define I2C1_ISR_ARLO_Pos                 (9UL)                     /*!< ARLO (Bit 9)                                          */
#define I2C1_ISR_ARLO_Msk                 (0x200UL)                 /*!< ARLO (Bitfield-Mask: 0x01)                            */
#define I2C1_ISR_BERR_Pos                 (8UL)                     /*!< BERR (Bit 8)                                          */
#define I2C1_ISR_BERR_Msk                 (0x100UL)                 /*!< BERR (Bitfield-Mask: 0x01)                            */
#define I2C1_ISR_TCR_Pos                  (7UL)                     /*!< TCR (Bit 7)                                           */
#define I2C1_ISR_TCR_Msk                  (0x80UL)                  /*!< TCR (Bitfield-Mask: 0x01)                             */
#define I2C1_ISR_TC_Pos                   (6UL)                     /*!< TC (Bit 6)                                            */
#define I2C1_ISR_TC_Msk                   (0x40UL)                  /*!< TC (Bitfield-Mask: 0x01)                              */
#define I2C1_ISR_STOPF_Pos                (5UL)                     /*!< STOPF (Bit 5)                                         */
#define I2C1_ISR_STOPF_Msk                (0x20UL)                  /*!< STOPF (Bitfield-Mask: 0x01)                           */
#define I2C1_ISR_NACKF_Pos                (4UL)                     /*!< NACKF (Bit 4)                                         */
#define I2C1_ISR_NACKF_Msk                (0x10UL)                  /*!< NACKF (Bitfield-Mask: 0x01)                           */
#define I2C1_ISR_ADDR_Pos                 (3UL)                     /*!< ADDR (Bit 3)                                          */
#define I2C1_ISR_ADDR_Msk                 (0x8UL)                   /*!< ADDR (Bitfield-Mask: 0x01)                            */
#define I2C1_ISR_RXNE_Pos                 (2UL)                     /*!< RXNE (Bit 2)                                          */
#define I2C1_ISR_RXNE_Msk                 (0x4UL)                   /*!< RXNE (Bitfield-Mask: 0x01)                            */
#define I2C1_ISR_TXIS_Pos                 (1UL)                     /*!< TXIS (Bit 1)                                          */
#define I2C1_ISR_TXIS_Msk                 (0x2UL)                   /*!< TXIS (Bitfield-Mask: 0x01)                            */
#define I2C1_ISR_TXE_Pos                  (0UL)                     /*!< TXE (Bit 0)                                           */
#define I2C1_ISR_TXE_Msk                  (0x1UL)                   /*!< TXE (Bitfield-Mask: 0x01)                             */
/* ==========================================================  ICR  ========================================================== */
#define I2C1_ICR_ALERTCF_Pos              (13UL)                    /*!< ALERTCF (Bit 13)                                      */
#define I2C1_ICR_ALERTCF_Msk              (0x2000UL)                /*!< ALERTCF (Bitfield-Mask: 0x01)                         */
#define I2C1_ICR_TIMOUTCF_Pos             (12UL)                    /*!< TIMOUTCF (Bit 12)                                     */
#define I2C1_ICR_TIMOUTCF_Msk             (0x1000UL)                /*!< TIMOUTCF (Bitfield-Mask: 0x01)                        */
#define I2C1_ICR_PECCF_Pos                (11UL)                    /*!< PECCF (Bit 11)                                        */
#define I2C1_ICR_PECCF_Msk                (0x800UL)                 /*!< PECCF (Bitfield-Mask: 0x01)                           */
#define I2C1_ICR_OVRCF_Pos                (10UL)                    /*!< OVRCF (Bit 10)                                        */
#define I2C1_ICR_OVRCF_Msk                (0x400UL)                 /*!< OVRCF (Bitfield-Mask: 0x01)                           */
#define I2C1_ICR_ARLOCF_Pos               (9UL)                     /*!< ARLOCF (Bit 9)                                        */
#define I2C1_ICR_ARLOCF_Msk               (0x200UL)                 /*!< ARLOCF (Bitfield-Mask: 0x01)                          */
#define I2C1_ICR_BERRCF_Pos               (8UL)                     /*!< BERRCF (Bit 8)                                        */
#define I2C1_ICR_BERRCF_Msk               (0x100UL)                 /*!< BERRCF (Bitfield-Mask: 0x01)                          */
#define I2C1_ICR_STOPCF_Pos               (5UL)                     /*!< STOPCF (Bit 5)                                        */
#define I2C1_ICR_STOPCF_Msk               (0x20UL)                  /*!< STOPCF (Bitfield-Mask: 0x01)                          */
#define I2C1_ICR_NACKCF_Pos               (4UL)                     /*!< NACKCF (Bit 4)                                        */
#define I2C1_ICR_NACKCF_Msk               (0x10UL)                  /*!< NACKCF (Bitfield-Mask: 0x01)                          */
#define I2C1_ICR_ADDRCF_Pos               (3UL)                     /*!< ADDRCF (Bit 3)                                        */
#define I2C1_ICR_ADDRCF_Msk               (0x8UL)                   /*!< ADDRCF (Bitfield-Mask: 0x01)                          */
/* =========================================================  PECR  ========================================================== */
#define I2C1_PECR_PEC_Pos                 (0UL)                     /*!< PEC (Bit 0)                                           */
#define I2C1_PECR_PEC_Msk                 (0xffUL)                  /*!< PEC (Bitfield-Mask: 0xff)                             */
/* =========================================================  RXDR  ========================================================== */
#define I2C1_RXDR_RXDATA_Pos              (0UL)                     /*!< RXDATA (Bit 0)                                        */
#define I2C1_RXDR_RXDATA_Msk              (0xffUL)                  /*!< RXDATA (Bitfield-Mask: 0xff)                          */
/* =========================================================  TXDR  ========================================================== */
#define I2C1_TXDR_TXDATA_Pos              (0UL)                     /*!< TXDATA (Bit 0)                                        */
#define I2C1_TXDR_TXDATA_Msk              (0xffUL)                  /*!< TXDATA (Bitfield-Mask: 0xff)                          */
