#include "core.h"


#define SDMMC1_BASE                 0x40012C00UL
#define SDMMC2_BASE                 0x40011C00UL

#define SDMMC1                      ((SDMMC1_Type*)            SDMMC1_BASE)
#define SDMMC2                      ((SDMMC1_Type*)            SDMMC2_BASE)


/* =========================================================================================================================== */
/* ================                                          SDMMC1                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief Secure digital input/output
      interface (SDMMC1)
  */

typedef struct {                                /*!< (@ 0x40012C00) SDMMC1 Structure                                           */
  
  union {
    __IOM uint32_t POWER;                       /*!< (@ 0x00000000) power control register                                     */
    
    struct {
      __IOM uint32_t PWRCTRL    : 2;            /*!< [1..0] PWRCTRL                                                            */
            uint32_t            : 30;
    } POWER_b;
  } ;
  
  union {
    __IOM uint32_t CLKCR;                       /*!< (@ 0x00000004) SDI clock control register                                 */
    
    struct {
      __IOM uint32_t CLKDIV     : 8;            /*!< [7..0] Clock divide factor                                                */
      __IOM uint32_t CLKEN      : 1;            /*!< [8..8] Clock enable bit                                                   */
      __IOM uint32_t PWRSAV     : 1;            /*!< [9..9] Power saving configuration bit                                     */
      __IOM uint32_t BYPASS     : 1;            /*!< [10..10] Clock divider bypass enable bit                                  */
      __IOM uint32_t WIDBUS     : 2;            /*!< [12..11] Wide bus mode enable bit                                         */
      __IOM uint32_t NEGEDGE    : 1;            /*!< [13..13] SDIO_CK dephasing selection bit                                  */
      __IOM uint32_t HWFC_EN    : 1;            /*!< [14..14] HW Flow Control enable                                           */
            uint32_t            : 17;
    } CLKCR_b;
  } ;
  
  union {
    __IOM uint32_t ARG;                         /*!< (@ 0x00000008) argument register                                          */
    
    struct {
      __IOM uint32_t CMDARG     : 32;           /*!< [31..0] Command argument                                                  */
    } ARG_b;
  } ;
  
  union {
    __IOM uint32_t CMD;                         /*!< (@ 0x0000000C) command register                                           */
    
    struct {
      __IOM uint32_t CMDINDEX   : 6;            /*!< [5..0] Command index                                                      */
      __IOM uint32_t WAITRESP   : 2;            /*!< [7..6] Wait for response bits                                             */
      __IOM uint32_t WAITINT    : 1;            /*!< [8..8] CPSM waits for interrupt request                                   */
      __IOM uint32_t WAITPEND   : 1;            /*!< [9..9] CPSM Waits for ends of data transfer (CmdPend internal
                                                     signal)                                                                   */
      __IOM uint32_t CPSMEN     : 1;            /*!< [10..10] Command path state machine (CPSM) Enable bit                     */
      __IOM uint32_t SDIOSuspend : 1;           /*!< [11..11] SD I/O suspend command                                           */
      __IOM uint32_t ENCMDcompl : 1;            /*!< [12..12] Enable CMD completion                                            */
      __IOM uint32_t nIEN       : 1;            /*!< [13..13] not Interrupt Enable                                             */
      __IOM uint32_t CE_ATACMD  : 1;            /*!< [14..14] CE-ATA command                                                   */
            uint32_t            : 17;
    } CMD_b;
  } ;
  
  union {
    __IM  uint32_t RESPCMD;                     /*!< (@ 0x00000010) command response register                                  */
    
    struct {
      __IM  uint32_t RESPCMD    : 6;            /*!< [5..0] Response command index                                             */
            uint32_t            : 26;
    } RESPCMD_b;
  } ;
  
  union {
    __IM  uint32_t RESP1;                       /*!< (@ 0x00000014) response 1..4 register                                     */
    
    struct {
      __IM  uint32_t CARDSTATUS1 : 32;          /*!< [31..0] see Table 132                                                     */
    } RESP1_b;
  } ;
  
  union {
    __IM  uint32_t RESP2;                       /*!< (@ 0x00000018) response 1..4 register                                     */
    
    struct {
      __IM  uint32_t CARDSTATUS2 : 32;          /*!< [31..0] see Table 132                                                     */
    } RESP2_b;
  } ;
  
  union {
    __IM  uint32_t RESP3;                       /*!< (@ 0x0000001C) response 1..4 register                                     */
    
    struct {
      __IM  uint32_t CARDSTATUS3 : 32;          /*!< [31..0] see Table 132                                                     */
    } RESP3_b;
  } ;
  
  union {
    __IM  uint32_t RESP4;                       /*!< (@ 0x00000020) response 1..4 register                                     */
    
    struct {
      __IM  uint32_t CARDSTATUS4 : 32;          /*!< [31..0] see Table 132                                                     */
    } RESP4_b;
  } ;
  
  union {
    __IOM uint32_t DTIMER;                      /*!< (@ 0x00000024) data timer register                                        */
    
    struct {
      __IOM uint32_t DATATIME   : 32;           /*!< [31..0] Data timeout period                                               */
    } DTIMER_b;
  } ;
  
  union {
    __IOM uint32_t DLEN;                        /*!< (@ 0x00000028) data length register                                       */
    
    struct {
      __IOM uint32_t DATALENGTH : 25;           /*!< [24..0] Data length value                                                 */
            uint32_t            : 7;
    } DLEN_b;
  } ;
  
  union {
    __IOM uint32_t DCTRL;                       /*!< (@ 0x0000002C) data control register                                      */
    
    struct {
      __IOM uint32_t DTEN       : 1;            /*!< [0..0] DTEN                                                               */
      __IOM uint32_t DTDIR      : 1;            /*!< [1..1] Data transfer direction selection                                  */
      __IOM uint32_t DTMODE     : 1;            /*!< [2..2] Data transfer mode selection 1: Stream or SDIO multibyte
                                                     data transfer                                                             */
      __IOM uint32_t DMAEN      : 1;            /*!< [3..3] DMA enable bit                                                     */
      __IOM uint32_t DBLOCKSIZE : 4;            /*!< [7..4] Data block size                                                    */
      __IOM uint32_t RWSTART    : 1;            /*!< [8..8] Read wait start                                                    */
      __IOM uint32_t RWSTOP     : 1;            /*!< [9..9] Read wait stop                                                     */
      __IOM uint32_t RWMOD      : 1;            /*!< [10..10] Read wait mode                                                   */
      __IOM uint32_t SDIOEN     : 1;            /*!< [11..11] SD I/O enable functions                                          */
            uint32_t            : 20;
    } DCTRL_b;
  } ;
  
  union {
    __IM  uint32_t DCOUNT;                      /*!< (@ 0x00000030) data counter register                                      */
    
    struct {
      __IM  uint32_t DATACOUNT  : 25;           /*!< [24..0] Data count value                                                  */
            uint32_t            : 7;
    } DCOUNT_b;
  } ;
  
  union {
    __IM  uint32_t STA;                         /*!< (@ 0x00000034) status register                                            */
    
    struct {
      __IM  uint32_t CCRCFAIL   : 1;            /*!< [0..0] Command response received (CRC check failed)                       */
      __IM  uint32_t DCRCFAIL   : 1;            /*!< [1..1] Data block sent/received (CRC check failed)                        */
      __IM  uint32_t CTIMEOUT   : 1;            /*!< [2..2] Command response timeout                                           */
      __IM  uint32_t DTIMEOUT   : 1;            /*!< [3..3] Data timeout                                                       */
      __IM  uint32_t TXUNDERR   : 1;            /*!< [4..4] Transmit FIFO underrun error                                       */
      __IM  uint32_t RXOVERR    : 1;            /*!< [5..5] Received FIFO overrun error                                        */
      __IM  uint32_t CMDREND    : 1;            /*!< [6..6] Command response received (CRC check passed)                       */
      __IM  uint32_t CMDSENT    : 1;            /*!< [7..7] Command sent (no response required)                                */
      __IM  uint32_t DATAEND    : 1;            /*!< [8..8] Data end (data counter, SDIDCOUNT, is zero)                        */
      __IM  uint32_t STBITERR   : 1;            /*!< [9..9] Start bit not detected on all data signals in wide bus
                                                     mode                                                                      */
      __IM  uint32_t DBCKEND    : 1;            /*!< [10..10] Data block sent/received (CRC check passed)                      */
      __IM  uint32_t CMDACT     : 1;            /*!< [11..11] Command transfer in progress                                     */
      __IM  uint32_t TXACT      : 1;            /*!< [12..12] Data transmit in progress                                        */
      __IM  uint32_t RXACT      : 1;            /*!< [13..13] Data receive in progress                                         */
      __IM  uint32_t TXFIFOHE   : 1;            /*!< [14..14] Transmit FIFO half empty: at least 8 words can be written
                                                     into the FIFO                                                             */
      __IM  uint32_t RXFIFOHF   : 1;            /*!< [15..15] Receive FIFO half full: there are at least 8 words
                                                     in the FIFO                                                               */
      __IM  uint32_t TXFIFOF    : 1;            /*!< [16..16] Transmit FIFO full                                               */
      __IM  uint32_t RXFIFOF    : 1;            /*!< [17..17] Receive FIFO full                                                */
      __IM  uint32_t TXFIFOE    : 1;            /*!< [18..18] Transmit FIFO empty                                              */
      __IM  uint32_t RXFIFOE    : 1;            /*!< [19..19] Receive FIFO empty                                               */
      __IM  uint32_t TXDAVL     : 1;            /*!< [20..20] Data available in transmit FIFO                                  */
      __IM  uint32_t RXDAVL     : 1;            /*!< [21..21] Data available in receive FIFO                                   */
      __IM  uint32_t SDIOIT     : 1;            /*!< [22..22] SDIO interrupt received                                          */
      __IM  uint32_t CEATAEND   : 1;            /*!< [23..23] CE-ATA command completion signal received for CMD61              */
            uint32_t            : 8;
    } STA_b;
  } ;
  
  union {
    __IOM uint32_t ICR;                         /*!< (@ 0x00000038) interrupt clear register                                   */
    
    struct {
      __IOM uint32_t CCRCFAILC  : 1;            /*!< [0..0] CCRCFAIL flag clear bit                                            */
      __IOM uint32_t DCRCFAILC  : 1;            /*!< [1..1] DCRCFAIL flag clear bit                                            */
      __IOM uint32_t CTIMEOUTC  : 1;            /*!< [2..2] CTIMEOUT flag clear bit                                            */
      __IOM uint32_t DTIMEOUTC  : 1;            /*!< [3..3] DTIMEOUT flag clear bit                                            */
      __IOM uint32_t TXUNDERRC  : 1;            /*!< [4..4] TXUNDERR flag clear bit                                            */
      __IOM uint32_t RXOVERRC   : 1;            /*!< [5..5] RXOVERR flag clear bit                                             */
      __IOM uint32_t CMDRENDC   : 1;            /*!< [6..6] CMDREND flag clear bit                                             */
      __IOM uint32_t CMDSENTC   : 1;            /*!< [7..7] CMDSENT flag clear bit                                             */
      __IOM uint32_t DATAENDC   : 1;            /*!< [8..8] DATAEND flag clear bit                                             */
      __IOM uint32_t STBITERRC  : 1;            /*!< [9..9] STBITERR flag clear bit                                            */
      __IOM uint32_t DBCKENDC   : 1;            /*!< [10..10] DBCKEND flag clear bit                                           */
            uint32_t            : 11;
      __IOM uint32_t SDIOITC    : 1;            /*!< [22..22] SDIOIT flag clear bit                                            */
      __IOM uint32_t CEATAENDC  : 1;            /*!< [23..23] CEATAEND flag clear bit                                          */
            uint32_t            : 8;
    } ICR_b;
  } ;
  
  union {
    __IOM uint32_t MASK;                        /*!< (@ 0x0000003C) mask register                                              */
    
    struct {
      __IOM uint32_t CCRCFAILIE : 1;            /*!< [0..0] Command CRC fail interrupt enable                                  */
      __IOM uint32_t DCRCFAILIE : 1;            /*!< [1..1] Data CRC fail interrupt enable                                     */
      __IOM uint32_t CTIMEOUTIE : 1;            /*!< [2..2] Command timeout interrupt enable                                   */
      __IOM uint32_t DTIMEOUTIE : 1;            /*!< [3..3] Data timeout interrupt enable                                      */
      __IOM uint32_t TXUNDERRIE : 1;            /*!< [4..4] Tx FIFO underrun error interrupt enable                            */
      __IOM uint32_t RXOVERRIE  : 1;            /*!< [5..5] Rx FIFO overrun error interrupt enable                             */
      __IOM uint32_t CMDRENDIE  : 1;            /*!< [6..6] Command response received interrupt enable                         */
      __IOM uint32_t CMDSENTIE  : 1;            /*!< [7..7] Command sent interrupt enable                                      */
      __IOM uint32_t DATAENDIE  : 1;            /*!< [8..8] Data end interrupt enable                                          */
      __IOM uint32_t STBITERRIE : 1;            /*!< [9..9] Start bit error interrupt enable                                   */
      __IOM uint32_t DBCKENDIE  : 1;            /*!< [10..10] Data block end interrupt enable                                  */
      __IOM uint32_t CMDACTIE   : 1;            /*!< [11..11] Command acting interrupt enable                                  */
      __IOM uint32_t TXACTIE    : 1;            /*!< [12..12] Data transmit acting interrupt enable                            */
      __IOM uint32_t RXACTIE    : 1;            /*!< [13..13] Data receive acting interrupt enable                             */
      __IOM uint32_t TXFIFOHEIE : 1;            /*!< [14..14] Tx FIFO half empty interrupt enable                              */
      __IOM uint32_t RXFIFOHFIE : 1;            /*!< [15..15] Rx FIFO half full interrupt enable                               */
      __IOM uint32_t TXFIFOFIE  : 1;            /*!< [16..16] Tx FIFO full interrupt enable                                    */
      __IOM uint32_t RXFIFOFIE  : 1;            /*!< [17..17] Rx FIFO full interrupt enable                                    */
      __IOM uint32_t TXFIFOEIE  : 1;            /*!< [18..18] Tx FIFO empty interrupt enable                                   */
      __IOM uint32_t RXFIFOEIE  : 1;            /*!< [19..19] Rx FIFO empty interrupt enable                                   */
      __IOM uint32_t TXDAVLIE   : 1;            /*!< [20..20] Data available in Tx FIFO interrupt enable                       */
      __IOM uint32_t RXDAVLIE   : 1;            /*!< [21..21] Data available in Rx FIFO interrupt enable                       */
      __IOM uint32_t SDIOITIE   : 1;            /*!< [22..22] SDIO mode interrupt received interrupt enable                    */
      __IOM uint32_t CEATAENDIE : 1;            /*!< [23..23] CE-ATA command completion signal received interrupt
                                                     enable                                                                    */
            uint32_t            : 8;
    } MASK_b;
  } ;
  __IM  uint32_t  RESERVED[2];
  
  union {
    __IM  uint32_t FIFOCNT;                     /*!< (@ 0x00000048) FIFO counter register                                      */
    
    struct {
      __IM  uint32_t FIFOCOUNT  : 24;           /*!< [23..0] Remaining number of words to be written to or read from
                                                     the FIFO                                                                  */
            uint32_t            : 8;
    } FIFOCNT_b;
  } ;
  __IM  uint32_t  RESERVED1[13];
  
  union {
    __IOM uint32_t FIFO;                        /*!< (@ 0x00000080) data FIFO register                                         */
    
    struct {
      __IOM uint32_t FIFOData   : 32;           /*!< [31..0] Receive and transmit FIFO data                                    */
    } FIFO_b;
  } ;
} SDMMC1_Type;                                  /*!< Size = 132 (0x84)                                                         */



/* =========================================================================================================================== */
/* ================                                          SDMMC1                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  POWER  ========================================================= */
#define SDMMC1_POWER_PWRCTRL_Pos          (0UL)                     /*!< PWRCTRL (Bit 0)                                       */
#define SDMMC1_POWER_PWRCTRL_Msk          (0x3UL)                   /*!< PWRCTRL (Bitfield-Mask: 0x03)                         */
/* =========================================================  CLKCR  ========================================================= */
#define SDMMC1_CLKCR_HWFC_EN_Pos          (14UL)                    /*!< HWFC_EN (Bit 14)                                      */
#define SDMMC1_CLKCR_HWFC_EN_Msk          (0x4000UL)                /*!< HWFC_EN (Bitfield-Mask: 0x01)                         */
#define SDMMC1_CLKCR_NEGEDGE_Pos          (13UL)                    /*!< NEGEDGE (Bit 13)                                      */
#define SDMMC1_CLKCR_NEGEDGE_Msk          (0x2000UL)                /*!< NEGEDGE (Bitfield-Mask: 0x01)                         */
#define SDMMC1_CLKCR_WIDBUS_Pos           (11UL)                    /*!< WIDBUS (Bit 11)                                       */
#define SDMMC1_CLKCR_WIDBUS_Msk           (0x1800UL)                /*!< WIDBUS (Bitfield-Mask: 0x03)                          */
#define SDMMC1_CLKCR_BYPASS_Pos           (10UL)                    /*!< BYPASS (Bit 10)                                       */
#define SDMMC1_CLKCR_BYPASS_Msk           (0x400UL)                 /*!< BYPASS (Bitfield-Mask: 0x01)                          */
#define SDMMC1_CLKCR_PWRSAV_Pos           (9UL)                     /*!< PWRSAV (Bit 9)                                        */
#define SDMMC1_CLKCR_PWRSAV_Msk           (0x200UL)                 /*!< PWRSAV (Bitfield-Mask: 0x01)                          */
#define SDMMC1_CLKCR_CLKEN_Pos            (8UL)                     /*!< CLKEN (Bit 8)                                         */
#define SDMMC1_CLKCR_CLKEN_Msk            (0x100UL)                 /*!< CLKEN (Bitfield-Mask: 0x01)                           */
#define SDMMC1_CLKCR_CLKDIV_Pos           (0UL)                     /*!< CLKDIV (Bit 0)                                        */
#define SDMMC1_CLKCR_CLKDIV_Msk           (0xffUL)                  /*!< CLKDIV (Bitfield-Mask: 0xff)                          */
/* ==========================================================  ARG  ========================================================== */
#define SDMMC1_ARG_CMDARG_Pos             (0UL)                     /*!< CMDARG (Bit 0)                                        */
#define SDMMC1_ARG_CMDARG_Msk             (0xffffffffUL)            /*!< CMDARG (Bitfield-Mask: 0xffffffff)                    */
/* ==========================================================  CMD  ========================================================== */
#define SDMMC1_CMD_CE_ATACMD_Pos          (14UL)                    /*!< CE_ATACMD (Bit 14)                                    */
#define SDMMC1_CMD_CE_ATACMD_Msk          (0x4000UL)                /*!< CE_ATACMD (Bitfield-Mask: 0x01)                       */
#define SDMMC1_CMD_nIEN_Pos               (13UL)                    /*!< nIEN (Bit 13)                                         */
#define SDMMC1_CMD_nIEN_Msk               (0x2000UL)                /*!< nIEN (Bitfield-Mask: 0x01)                            */
#define SDMMC1_CMD_ENCMDcompl_Pos         (12UL)                    /*!< ENCMDcompl (Bit 12)                                   */
#define SDMMC1_CMD_ENCMDcompl_Msk         (0x1000UL)                /*!< ENCMDcompl (Bitfield-Mask: 0x01)                      */
#define SDMMC1_CMD_SDIOSuspend_Pos        (11UL)                    /*!< SDIOSuspend (Bit 11)                                  */
#define SDMMC1_CMD_SDIOSuspend_Msk        (0x800UL)                 /*!< SDIOSuspend (Bitfield-Mask: 0x01)                     */
#define SDMMC1_CMD_CPSMEN_Pos             (10UL)                    /*!< CPSMEN (Bit 10)                                       */
#define SDMMC1_CMD_CPSMEN_Msk             (0x400UL)                 /*!< CPSMEN (Bitfield-Mask: 0x01)                          */
#define SDMMC1_CMD_WAITPEND_Pos           (9UL)                     /*!< WAITPEND (Bit 9)                                      */
#define SDMMC1_CMD_WAITPEND_Msk           (0x200UL)                 /*!< WAITPEND (Bitfield-Mask: 0x01)                        */
#define SDMMC1_CMD_WAITINT_Pos            (8UL)                     /*!< WAITINT (Bit 8)                                       */
#define SDMMC1_CMD_WAITINT_Msk            (0x100UL)                 /*!< WAITINT (Bitfield-Mask: 0x01)                         */
#define SDMMC1_CMD_WAITRESP_Pos           (6UL)                     /*!< WAITRESP (Bit 6)                                      */
#define SDMMC1_CMD_WAITRESP_Msk           (0xc0UL)                  /*!< WAITRESP (Bitfield-Mask: 0x03)                        */
#define SDMMC1_CMD_CMDINDEX_Pos           (0UL)                     /*!< CMDINDEX (Bit 0)                                      */
#define SDMMC1_CMD_CMDINDEX_Msk           (0x3fUL)                  /*!< CMDINDEX (Bitfield-Mask: 0x3f)                        */
/* ========================================================  RESPCMD  ======================================================== */
#define SDMMC1_RESPCMD_RESPCMD_Pos        (0UL)                     /*!< RESPCMD (Bit 0)                                       */
#define SDMMC1_RESPCMD_RESPCMD_Msk        (0x3fUL)                  /*!< RESPCMD (Bitfield-Mask: 0x3f)                         */
/* =========================================================  RESP1  ========================================================= */
#define SDMMC1_RESP1_CARDSTATUS1_Pos      (0UL)                     /*!< CARDSTATUS1 (Bit 0)                                   */
#define SDMMC1_RESP1_CARDSTATUS1_Msk      (0xffffffffUL)            /*!< CARDSTATUS1 (Bitfield-Mask: 0xffffffff)               */
/* =========================================================  RESP2  ========================================================= */
#define SDMMC1_RESP2_CARDSTATUS2_Pos      (0UL)                     /*!< CARDSTATUS2 (Bit 0)                                   */
#define SDMMC1_RESP2_CARDSTATUS2_Msk      (0xffffffffUL)            /*!< CARDSTATUS2 (Bitfield-Mask: 0xffffffff)               */
/* =========================================================  RESP3  ========================================================= */
#define SDMMC1_RESP3_CARDSTATUS3_Pos      (0UL)                     /*!< CARDSTATUS3 (Bit 0)                                   */
#define SDMMC1_RESP3_CARDSTATUS3_Msk      (0xffffffffUL)            /*!< CARDSTATUS3 (Bitfield-Mask: 0xffffffff)               */
/* =========================================================  RESP4  ========================================================= */
#define SDMMC1_RESP4_CARDSTATUS4_Pos      (0UL)                     /*!< CARDSTATUS4 (Bit 0)                                   */
#define SDMMC1_RESP4_CARDSTATUS4_Msk      (0xffffffffUL)            /*!< CARDSTATUS4 (Bitfield-Mask: 0xffffffff)               */
/* ========================================================  DTIMER  ========================================================= */
#define SDMMC1_DTIMER_DATATIME_Pos        (0UL)                     /*!< DATATIME (Bit 0)                                      */
#define SDMMC1_DTIMER_DATATIME_Msk        (0xffffffffUL)            /*!< DATATIME (Bitfield-Mask: 0xffffffff)                  */
/* =========================================================  DLEN  ========================================================== */
#define SDMMC1_DLEN_DATALENGTH_Pos        (0UL)                     /*!< DATALENGTH (Bit 0)                                    */
#define SDMMC1_DLEN_DATALENGTH_Msk        (0x1ffffffUL)             /*!< DATALENGTH (Bitfield-Mask: 0x1ffffff)                 */
/* =========================================================  DCTRL  ========================================================= */
#define SDMMC1_DCTRL_SDIOEN_Pos           (11UL)                    /*!< SDIOEN (Bit 11)                                       */
#define SDMMC1_DCTRL_SDIOEN_Msk           (0x800UL)                 /*!< SDIOEN (Bitfield-Mask: 0x01)                          */
#define SDMMC1_DCTRL_RWMOD_Pos            (10UL)                    /*!< RWMOD (Bit 10)                                        */
#define SDMMC1_DCTRL_RWMOD_Msk            (0x400UL)                 /*!< RWMOD (Bitfield-Mask: 0x01)                           */
#define SDMMC1_DCTRL_RWSTOP_Pos           (9UL)                     /*!< RWSTOP (Bit 9)                                        */
#define SDMMC1_DCTRL_RWSTOP_Msk           (0x200UL)                 /*!< RWSTOP (Bitfield-Mask: 0x01)                          */
#define SDMMC1_DCTRL_RWSTART_Pos          (8UL)                     /*!< RWSTART (Bit 8)                                       */
#define SDMMC1_DCTRL_RWSTART_Msk          (0x100UL)                 /*!< RWSTART (Bitfield-Mask: 0x01)                         */
#define SDMMC1_DCTRL_DBLOCKSIZE_Pos       (4UL)                     /*!< DBLOCKSIZE (Bit 4)                                    */
#define SDMMC1_DCTRL_DBLOCKSIZE_Msk       (0xf0UL)                  /*!< DBLOCKSIZE (Bitfield-Mask: 0x0f)                      */
#define SDMMC1_DCTRL_DMAEN_Pos            (3UL)                     /*!< DMAEN (Bit 3)                                         */
#define SDMMC1_DCTRL_DMAEN_Msk            (0x8UL)                   /*!< DMAEN (Bitfield-Mask: 0x01)                           */
#define SDMMC1_DCTRL_DTMODE_Pos           (2UL)                     /*!< DTMODE (Bit 2)                                        */
#define SDMMC1_DCTRL_DTMODE_Msk           (0x4UL)                   /*!< DTMODE (Bitfield-Mask: 0x01)                          */
#define SDMMC1_DCTRL_DTDIR_Pos            (1UL)                     /*!< DTDIR (Bit 1)                                         */
#define SDMMC1_DCTRL_DTDIR_Msk            (0x2UL)                   /*!< DTDIR (Bitfield-Mask: 0x01)                           */
#define SDMMC1_DCTRL_DTEN_Pos             (0UL)                     /*!< DTEN (Bit 0)                                          */
#define SDMMC1_DCTRL_DTEN_Msk             (0x1UL)                   /*!< DTEN (Bitfield-Mask: 0x01)                            */
/* ========================================================  DCOUNT  ========================================================= */
#define SDMMC1_DCOUNT_DATACOUNT_Pos       (0UL)                     /*!< DATACOUNT (Bit 0)                                     */
#define SDMMC1_DCOUNT_DATACOUNT_Msk       (0x1ffffffUL)             /*!< DATACOUNT (Bitfield-Mask: 0x1ffffff)                  */
/* ==========================================================  STA  ========================================================== */
#define SDMMC1_STA_CEATAEND_Pos           (23UL)                    /*!< CEATAEND (Bit 23)                                     */
#define SDMMC1_STA_CEATAEND_Msk           (0x800000UL)              /*!< CEATAEND (Bitfield-Mask: 0x01)                        */
#define SDMMC1_STA_SDIOIT_Pos             (22UL)                    /*!< SDIOIT (Bit 22)                                       */
#define SDMMC1_STA_SDIOIT_Msk             (0x400000UL)              /*!< SDIOIT (Bitfield-Mask: 0x01)                          */
#define SDMMC1_STA_RXDAVL_Pos             (21UL)                    /*!< RXDAVL (Bit 21)                                       */
#define SDMMC1_STA_RXDAVL_Msk             (0x200000UL)              /*!< RXDAVL (Bitfield-Mask: 0x01)                          */
#define SDMMC1_STA_TXDAVL_Pos             (20UL)                    /*!< TXDAVL (Bit 20)                                       */
#define SDMMC1_STA_TXDAVL_Msk             (0x100000UL)              /*!< TXDAVL (Bitfield-Mask: 0x01)                          */
#define SDMMC1_STA_RXFIFOE_Pos            (19UL)                    /*!< RXFIFOE (Bit 19)                                      */
#define SDMMC1_STA_RXFIFOE_Msk            (0x80000UL)               /*!< RXFIFOE (Bitfield-Mask: 0x01)                         */
#define SDMMC1_STA_TXFIFOE_Pos            (18UL)                    /*!< TXFIFOE (Bit 18)                                      */
#define SDMMC1_STA_TXFIFOE_Msk            (0x40000UL)               /*!< TXFIFOE (Bitfield-Mask: 0x01)                         */
#define SDMMC1_STA_RXFIFOF_Pos            (17UL)                    /*!< RXFIFOF (Bit 17)                                      */
#define SDMMC1_STA_RXFIFOF_Msk            (0x20000UL)               /*!< RXFIFOF (Bitfield-Mask: 0x01)                         */
#define SDMMC1_STA_TXFIFOF_Pos            (16UL)                    /*!< TXFIFOF (Bit 16)                                      */
#define SDMMC1_STA_TXFIFOF_Msk            (0x10000UL)               /*!< TXFIFOF (Bitfield-Mask: 0x01)                         */
#define SDMMC1_STA_RXFIFOHF_Pos           (15UL)                    /*!< RXFIFOHF (Bit 15)                                     */
#define SDMMC1_STA_RXFIFOHF_Msk           (0x8000UL)                /*!< RXFIFOHF (Bitfield-Mask: 0x01)                        */
#define SDMMC1_STA_TXFIFOHE_Pos           (14UL)                    /*!< TXFIFOHE (Bit 14)                                     */
#define SDMMC1_STA_TXFIFOHE_Msk           (0x4000UL)                /*!< TXFIFOHE (Bitfield-Mask: 0x01)                        */
#define SDMMC1_STA_RXACT_Pos              (13UL)                    /*!< RXACT (Bit 13)                                        */
#define SDMMC1_STA_RXACT_Msk              (0x2000UL)                /*!< RXACT (Bitfield-Mask: 0x01)                           */
#define SDMMC1_STA_TXACT_Pos              (12UL)                    /*!< TXACT (Bit 12)                                        */
#define SDMMC1_STA_TXACT_Msk              (0x1000UL)                /*!< TXACT (Bitfield-Mask: 0x01)                           */
#define SDMMC1_STA_CMDACT_Pos             (11UL)                    /*!< CMDACT (Bit 11)                                       */
#define SDMMC1_STA_CMDACT_Msk             (0x800UL)                 /*!< CMDACT (Bitfield-Mask: 0x01)                          */
#define SDMMC1_STA_DBCKEND_Pos            (10UL)                    /*!< DBCKEND (Bit 10)                                      */
#define SDMMC1_STA_DBCKEND_Msk            (0x400UL)                 /*!< DBCKEND (Bitfield-Mask: 0x01)                         */
#define SDMMC1_STA_STBITERR_Pos           (9UL)                     /*!< STBITERR (Bit 9)                                      */
#define SDMMC1_STA_STBITERR_Msk           (0x200UL)                 /*!< STBITERR (Bitfield-Mask: 0x01)                        */
#define SDMMC1_STA_DATAEND_Pos            (8UL)                     /*!< DATAEND (Bit 8)                                       */
#define SDMMC1_STA_DATAEND_Msk            (0x100UL)                 /*!< DATAEND (Bitfield-Mask: 0x01)                         */
#define SDMMC1_STA_CMDSENT_Pos            (7UL)                     /*!< CMDSENT (Bit 7)                                       */
#define SDMMC1_STA_CMDSENT_Msk            (0x80UL)                  /*!< CMDSENT (Bitfield-Mask: 0x01)                         */
#define SDMMC1_STA_CMDREND_Pos            (6UL)                     /*!< CMDREND (Bit 6)                                       */
#define SDMMC1_STA_CMDREND_Msk            (0x40UL)                  /*!< CMDREND (Bitfield-Mask: 0x01)                         */
#define SDMMC1_STA_RXOVERR_Pos            (5UL)                     /*!< RXOVERR (Bit 5)                                       */
#define SDMMC1_STA_RXOVERR_Msk            (0x20UL)                  /*!< RXOVERR (Bitfield-Mask: 0x01)                         */
#define SDMMC1_STA_TXUNDERR_Pos           (4UL)                     /*!< TXUNDERR (Bit 4)                                      */
#define SDMMC1_STA_TXUNDERR_Msk           (0x10UL)                  /*!< TXUNDERR (Bitfield-Mask: 0x01)                        */
#define SDMMC1_STA_DTIMEOUT_Pos           (3UL)                     /*!< DTIMEOUT (Bit 3)                                      */
#define SDMMC1_STA_DTIMEOUT_Msk           (0x8UL)                   /*!< DTIMEOUT (Bitfield-Mask: 0x01)                        */
#define SDMMC1_STA_CTIMEOUT_Pos           (2UL)                     /*!< CTIMEOUT (Bit 2)                                      */
#define SDMMC1_STA_CTIMEOUT_Msk           (0x4UL)                   /*!< CTIMEOUT (Bitfield-Mask: 0x01)                        */
#define SDMMC1_STA_DCRCFAIL_Pos           (1UL)                     /*!< DCRCFAIL (Bit 1)                                      */
#define SDMMC1_STA_DCRCFAIL_Msk           (0x2UL)                   /*!< DCRCFAIL (Bitfield-Mask: 0x01)                        */
#define SDMMC1_STA_CCRCFAIL_Pos           (0UL)                     /*!< CCRCFAIL (Bit 0)                                      */
#define SDMMC1_STA_CCRCFAIL_Msk           (0x1UL)                   /*!< CCRCFAIL (Bitfield-Mask: 0x01)                        */
/* ==========================================================  ICR  ========================================================== */
#define SDMMC1_ICR_CEATAENDC_Pos          (23UL)                    /*!< CEATAENDC (Bit 23)                                    */
#define SDMMC1_ICR_CEATAENDC_Msk          (0x800000UL)              /*!< CEATAENDC (Bitfield-Mask: 0x01)                       */
#define SDMMC1_ICR_SDIOITC_Pos            (22UL)                    /*!< SDIOITC (Bit 22)                                      */
#define SDMMC1_ICR_SDIOITC_Msk            (0x400000UL)              /*!< SDIOITC (Bitfield-Mask: 0x01)                         */
#define SDMMC1_ICR_DBCKENDC_Pos           (10UL)                    /*!< DBCKENDC (Bit 10)                                     */
#define SDMMC1_ICR_DBCKENDC_Msk           (0x400UL)                 /*!< DBCKENDC (Bitfield-Mask: 0x01)                        */
#define SDMMC1_ICR_STBITERRC_Pos          (9UL)                     /*!< STBITERRC (Bit 9)                                     */
#define SDMMC1_ICR_STBITERRC_Msk          (0x200UL)                 /*!< STBITERRC (Bitfield-Mask: 0x01)                       */
#define SDMMC1_ICR_DATAENDC_Pos           (8UL)                     /*!< DATAENDC (Bit 8)                                      */
#define SDMMC1_ICR_DATAENDC_Msk           (0x100UL)                 /*!< DATAENDC (Bitfield-Mask: 0x01)                        */
#define SDMMC1_ICR_CMDSENTC_Pos           (7UL)                     /*!< CMDSENTC (Bit 7)                                      */
#define SDMMC1_ICR_CMDSENTC_Msk           (0x80UL)                  /*!< CMDSENTC (Bitfield-Mask: 0x01)                        */
#define SDMMC1_ICR_CMDRENDC_Pos           (6UL)                     /*!< CMDRENDC (Bit 6)                                      */
#define SDMMC1_ICR_CMDRENDC_Msk           (0x40UL)                  /*!< CMDRENDC (Bitfield-Mask: 0x01)                        */
#define SDMMC1_ICR_RXOVERRC_Pos           (5UL)                     /*!< RXOVERRC (Bit 5)                                      */
#define SDMMC1_ICR_RXOVERRC_Msk           (0x20UL)                  /*!< RXOVERRC (Bitfield-Mask: 0x01)                        */
#define SDMMC1_ICR_TXUNDERRC_Pos          (4UL)                     /*!< TXUNDERRC (Bit 4)                                     */
#define SDMMC1_ICR_TXUNDERRC_Msk          (0x10UL)                  /*!< TXUNDERRC (Bitfield-Mask: 0x01)                       */
#define SDMMC1_ICR_DTIMEOUTC_Pos          (3UL)                     /*!< DTIMEOUTC (Bit 3)                                     */
#define SDMMC1_ICR_DTIMEOUTC_Msk          (0x8UL)                   /*!< DTIMEOUTC (Bitfield-Mask: 0x01)                       */
#define SDMMC1_ICR_CTIMEOUTC_Pos          (2UL)                     /*!< CTIMEOUTC (Bit 2)                                     */
#define SDMMC1_ICR_CTIMEOUTC_Msk          (0x4UL)                   /*!< CTIMEOUTC (Bitfield-Mask: 0x01)                       */
#define SDMMC1_ICR_DCRCFAILC_Pos          (1UL)                     /*!< DCRCFAILC (Bit 1)                                     */
#define SDMMC1_ICR_DCRCFAILC_Msk          (0x2UL)                   /*!< DCRCFAILC (Bitfield-Mask: 0x01)                       */
#define SDMMC1_ICR_CCRCFAILC_Pos          (0UL)                     /*!< CCRCFAILC (Bit 0)                                     */
#define SDMMC1_ICR_CCRCFAILC_Msk          (0x1UL)                   /*!< CCRCFAILC (Bitfield-Mask: 0x01)                       */
/* =========================================================  MASK  ========================================================== */
#define SDMMC1_MASK_CEATAENDIE_Pos        (23UL)                    /*!< CEATAENDIE (Bit 23)                                   */
#define SDMMC1_MASK_CEATAENDIE_Msk        (0x800000UL)              /*!< CEATAENDIE (Bitfield-Mask: 0x01)                      */
#define SDMMC1_MASK_SDIOITIE_Pos          (22UL)                    /*!< SDIOITIE (Bit 22)                                     */
#define SDMMC1_MASK_SDIOITIE_Msk          (0x400000UL)              /*!< SDIOITIE (Bitfield-Mask: 0x01)                        */
#define SDMMC1_MASK_RXDAVLIE_Pos          (21UL)                    /*!< RXDAVLIE (Bit 21)                                     */
#define SDMMC1_MASK_RXDAVLIE_Msk          (0x200000UL)              /*!< RXDAVLIE (Bitfield-Mask: 0x01)                        */
#define SDMMC1_MASK_TXDAVLIE_Pos          (20UL)                    /*!< TXDAVLIE (Bit 20)                                     */
#define SDMMC1_MASK_TXDAVLIE_Msk          (0x100000UL)              /*!< TXDAVLIE (Bitfield-Mask: 0x01)                        */
#define SDMMC1_MASK_RXFIFOEIE_Pos         (19UL)                    /*!< RXFIFOEIE (Bit 19)                                    */
#define SDMMC1_MASK_RXFIFOEIE_Msk         (0x80000UL)               /*!< RXFIFOEIE (Bitfield-Mask: 0x01)                       */
#define SDMMC1_MASK_TXFIFOEIE_Pos         (18UL)                    /*!< TXFIFOEIE (Bit 18)                                    */
#define SDMMC1_MASK_TXFIFOEIE_Msk         (0x40000UL)               /*!< TXFIFOEIE (Bitfield-Mask: 0x01)                       */
#define SDMMC1_MASK_RXFIFOFIE_Pos         (17UL)                    /*!< RXFIFOFIE (Bit 17)                                    */
#define SDMMC1_MASK_RXFIFOFIE_Msk         (0x20000UL)               /*!< RXFIFOFIE (Bitfield-Mask: 0x01)                       */
#define SDMMC1_MASK_TXFIFOFIE_Pos         (16UL)                    /*!< TXFIFOFIE (Bit 16)                                    */
#define SDMMC1_MASK_TXFIFOFIE_Msk         (0x10000UL)               /*!< TXFIFOFIE (Bitfield-Mask: 0x01)                       */
#define SDMMC1_MASK_RXFIFOHFIE_Pos        (15UL)                    /*!< RXFIFOHFIE (Bit 15)                                   */
#define SDMMC1_MASK_RXFIFOHFIE_Msk        (0x8000UL)                /*!< RXFIFOHFIE (Bitfield-Mask: 0x01)                      */
#define SDMMC1_MASK_TXFIFOHEIE_Pos        (14UL)                    /*!< TXFIFOHEIE (Bit 14)                                   */
#define SDMMC1_MASK_TXFIFOHEIE_Msk        (0x4000UL)                /*!< TXFIFOHEIE (Bitfield-Mask: 0x01)                      */
#define SDMMC1_MASK_RXACTIE_Pos           (13UL)                    /*!< RXACTIE (Bit 13)                                      */
#define SDMMC1_MASK_RXACTIE_Msk           (0x2000UL)                /*!< RXACTIE (Bitfield-Mask: 0x01)                         */
#define SDMMC1_MASK_TXACTIE_Pos           (12UL)                    /*!< TXACTIE (Bit 12)                                      */
#define SDMMC1_MASK_TXACTIE_Msk           (0x1000UL)                /*!< TXACTIE (Bitfield-Mask: 0x01)                         */
#define SDMMC1_MASK_CMDACTIE_Pos          (11UL)                    /*!< CMDACTIE (Bit 11)                                     */
#define SDMMC1_MASK_CMDACTIE_Msk          (0x800UL)                 /*!< CMDACTIE (Bitfield-Mask: 0x01)                        */
#define SDMMC1_MASK_DBCKENDIE_Pos         (10UL)                    /*!< DBCKENDIE (Bit 10)                                    */
#define SDMMC1_MASK_DBCKENDIE_Msk         (0x400UL)                 /*!< DBCKENDIE (Bitfield-Mask: 0x01)                       */
#define SDMMC1_MASK_STBITERRIE_Pos        (9UL)                     /*!< STBITERRIE (Bit 9)                                    */
#define SDMMC1_MASK_STBITERRIE_Msk        (0x200UL)                 /*!< STBITERRIE (Bitfield-Mask: 0x01)                      */
#define SDMMC1_MASK_DATAENDIE_Pos         (8UL)                     /*!< DATAENDIE (Bit 8)                                     */
#define SDMMC1_MASK_DATAENDIE_Msk         (0x100UL)                 /*!< DATAENDIE (Bitfield-Mask: 0x01)                       */
#define SDMMC1_MASK_CMDSENTIE_Pos         (7UL)                     /*!< CMDSENTIE (Bit 7)                                     */
#define SDMMC1_MASK_CMDSENTIE_Msk         (0x80UL)                  /*!< CMDSENTIE (Bitfield-Mask: 0x01)                       */
#define SDMMC1_MASK_CMDRENDIE_Pos         (6UL)                     /*!< CMDRENDIE (Bit 6)                                     */
#define SDMMC1_MASK_CMDRENDIE_Msk         (0x40UL)                  /*!< CMDRENDIE (Bitfield-Mask: 0x01)                       */
#define SDMMC1_MASK_RXOVERRIE_Pos         (5UL)                     /*!< RXOVERRIE (Bit 5)                                     */
#define SDMMC1_MASK_RXOVERRIE_Msk         (0x20UL)                  /*!< RXOVERRIE (Bitfield-Mask: 0x01)                       */
#define SDMMC1_MASK_TXUNDERRIE_Pos        (4UL)                     /*!< TXUNDERRIE (Bit 4)                                    */
#define SDMMC1_MASK_TXUNDERRIE_Msk        (0x10UL)                  /*!< TXUNDERRIE (Bitfield-Mask: 0x01)                      */
#define SDMMC1_MASK_DTIMEOUTIE_Pos        (3UL)                     /*!< DTIMEOUTIE (Bit 3)                                    */
#define SDMMC1_MASK_DTIMEOUTIE_Msk        (0x8UL)                   /*!< DTIMEOUTIE (Bitfield-Mask: 0x01)                      */
#define SDMMC1_MASK_CTIMEOUTIE_Pos        (2UL)                     /*!< CTIMEOUTIE (Bit 2)                                    */
#define SDMMC1_MASK_CTIMEOUTIE_Msk        (0x4UL)                   /*!< CTIMEOUTIE (Bitfield-Mask: 0x01)                      */
#define SDMMC1_MASK_DCRCFAILIE_Pos        (1UL)                     /*!< DCRCFAILIE (Bit 1)                                    */
#define SDMMC1_MASK_DCRCFAILIE_Msk        (0x2UL)                   /*!< DCRCFAILIE (Bitfield-Mask: 0x01)                      */
#define SDMMC1_MASK_CCRCFAILIE_Pos        (0UL)                     /*!< CCRCFAILIE (Bit 0)                                    */
#define SDMMC1_MASK_CCRCFAILIE_Msk        (0x1UL)                   /*!< CCRCFAILIE (Bitfield-Mask: 0x01)                      */
/* ========================================================  FIFOCNT  ======================================================== */
#define SDMMC1_FIFOCNT_FIFOCOUNT_Pos      (0UL)                     /*!< FIFOCOUNT (Bit 0)                                     */
#define SDMMC1_FIFOCNT_FIFOCOUNT_Msk      (0xffffffUL)              /*!< FIFOCOUNT (Bitfield-Mask: 0xffffff)                   */
/* =========================================================  FIFO  ========================================================== */
#define SDMMC1_FIFO_FIFOData_Pos          (0UL)                     /*!< FIFOData (Bit 0)                                      */
#define SDMMC1_FIFO_FIFOData_Msk          (0xffffffffUL)            /*!< FIFOData (Bitfield-Mask: 0xffffffff)                  */
