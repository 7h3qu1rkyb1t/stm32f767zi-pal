#include "core.h"


#define Flash_BASE                  0x40023C00UL

#define Flash                       ((volatile Flash_Type*)             Flash_BASE)


/* =========================================================================================================================== */
/* ================                                           Flash                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief FLASH (Flash)
  */

typedef struct {                                /*!< (@ 0x40023C00) Flash Structure                                            */
  
  union {
    __IOM uint32_t ACR;                         /*!< (@ 0x00000000) Flash access control register                              */
    
    struct {
      __IOM uint32_t LATENCY    : 4;            /*!< [3..0] Latency                                                            */
            uint32_t            : 4;
      __IOM uint32_t PRFTEN     : 1;            /*!< [8..8] Prefetch enable                                                    */
      __IOM uint32_t ARTEN      : 1;            /*!< [9..9] ART Accelerator Enable                                             */
            uint32_t            : 1;
      __IOM uint32_t ARTRST     : 1;            /*!< [11..11] ART Accelerator reset                                            */
            uint32_t            : 20;
    } ACR_b;
  } ;
  
  union {
    __OM  uint32_t KEYR;                        /*!< (@ 0x00000004) Flash key register                                         */
    
    struct {
      __OM  uint32_t KEY        : 32;           /*!< [31..0] FPEC key                                                          */
    } KEYR_b;
  } ;
  
  union {
    __OM  uint32_t OPTKEYR;                     /*!< (@ 0x00000008) Flash option key register                                  */
    
    struct {
      __OM  uint32_t OPTKEY     : 32;           /*!< [31..0] Option byte key                                                   */
    } OPTKEYR_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x0000000C) Status register                                            */
    
    struct {
      __IOM uint32_t EOP        : 1;            /*!< [0..0] End of operation                                                   */
      __IOM uint32_t OPERR      : 1;            /*!< [1..1] Operation error                                                    */
            uint32_t            : 2;
      __IOM uint32_t WRPERR     : 1;            /*!< [4..4] Write protection error                                             */
      __IOM uint32_t PGAERR     : 1;            /*!< [5..5] Programming alignment error                                        */
      __IOM uint32_t PGPERR     : 1;            /*!< [6..6] Programming parallelism error                                      */
      __IOM uint32_t PGSERR     : 1;            /*!< [7..7] Programming sequence error                                         */
            uint32_t            : 8;
      __IM  uint32_t BSY        : 1;            /*!< [16..16] Busy                                                             */
            uint32_t            : 15;
    } SR_b;
  } ;
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000010) Control register                                           */
    
    struct {
      __IOM uint32_t PG         : 1;            /*!< [0..0] Programming                                                        */
      __IOM uint32_t SER        : 1;            /*!< [1..1] Sector Erase                                                       */
      __IOM uint32_t MER        : 1;            /*!< [2..2] Mass Erase of sectors 0 to 11                                      */
      __IOM uint32_t SNB        : 5;            /*!< [7..3] Sector number                                                      */
      __IOM uint32_t PSIZE      : 2;            /*!< [9..8] Program size                                                       */
            uint32_t            : 5;
      __IOM uint32_t MER1       : 1;            /*!< [15..15] Mass Erase of sectors 12 to 23                                   */
      __IOM uint32_t STRT       : 1;            /*!< [16..16] Start                                                            */
            uint32_t            : 7;
      __IOM uint32_t EOPIE      : 1;            /*!< [24..24] End of operation interrupt enable                                */
      __IOM uint32_t ERRIE      : 1;            /*!< [25..25] Error interrupt enable                                           */
            uint32_t            : 5;
      __IOM uint32_t LOCK       : 1;            /*!< [31..31] Lock                                                             */
    } CR_b;
  } ;
  
  union {
    __IOM uint32_t OPTCR;                       /*!< (@ 0x00000014) Flash option control register                              */
    
    struct {
      __IOM uint32_t OPTLOCK    : 1;            /*!< [0..0] Option lock                                                        */
      __IOM uint32_t OPTSTRT    : 1;            /*!< [1..1] Option start                                                       */
      __IOM uint32_t BOR_LEV    : 2;            /*!< [3..2] BOR reset Level                                                    */
      __IOM uint32_t WWDG_SW    : 1;            /*!< [4..4] User option bytes                                                  */
      __IOM uint32_t IWDG_SW    : 1;            /*!< [5..5] User option bytes                                                  */
      __IOM uint32_t nRST_STOP  : 1;            /*!< [6..6] User option bytes                                                  */
      __IOM uint32_t nRST_STDBY : 1;            /*!< [7..7] User option bytes                                                  */
      __IOM uint32_t RDP        : 8;            /*!< [15..8] Read protect                                                      */
      __IOM uint32_t nWRP       : 12;           /*!< [27..16] Not write protect                                                */
      __IOM uint32_t nDBOOT     : 1;            /*!< [28..28] Dual Boot mode (valid only when nDBANK=0)                        */
      __IOM uint32_t nDBANK     : 1;            /*!< [29..29] Not dual bank mode                                               */
      __IOM uint32_t IWDG_STDBY : 1;            /*!< [30..30] Independent watchdog counter freeze in standby mode              */
      __IOM uint32_t IWDG_STOP  : 1;            /*!< [31..31] Independent watchdog counter freeze in Stop mode                 */
    } OPTCR_b;
  } ;
  
  union {
    __IOM uint32_t OPTCR1;                      /*!< (@ 0x00000018) Flash option control register 1                            */
    
    struct {
      __IOM uint32_t BOOT_ADD0  : 16;           /*!< [15..0] Boot base address when Boot pin =0                                */
      __IOM uint32_t BOOT_ADD1  : 16;           /*!< [31..16] Boot base address when Boot pin =1                               */
    } OPTCR1_b;
  } ;
} Flash_Type;                                   /*!< Size = 28 (0x1c)                                                          */



/* =========================================================================================================================== */
/* ================                                           Flash                                           ================ */
/* =========================================================================================================================== */

/* ==========================================================  ACR  ========================================================== */
#define Flash_ACR_LATENCY_Pos             (0UL)                     /*!< LATENCY (Bit 0)                                       */
#define Flash_ACR_LATENCY_Msk             (0xfUL)                   /*!< LATENCY (Bitfield-Mask: 0x0f)                         */
#define Flash_ACR_PRFTEN_Pos              (8UL)                     /*!< PRFTEN (Bit 8)                                        */
#define Flash_ACR_PRFTEN_Msk              (0x100UL)                 /*!< PRFTEN (Bitfield-Mask: 0x01)                          */
#define Flash_ACR_ARTEN_Pos               (9UL)                     /*!< ARTEN (Bit 9)                                         */
#define Flash_ACR_ARTEN_Msk               (0x200UL)                 /*!< ARTEN (Bitfield-Mask: 0x01)                           */
#define Flash_ACR_ARTRST_Pos              (11UL)                    /*!< ARTRST (Bit 11)                                       */
#define Flash_ACR_ARTRST_Msk              (0x800UL)                 /*!< ARTRST (Bitfield-Mask: 0x01)                          */
/* =========================================================  KEYR  ========================================================== */
#define Flash_KEYR_KEY_Pos                (0UL)                     /*!< KEY (Bit 0)                                           */
#define Flash_KEYR_KEY_Msk                (0xffffffffUL)            /*!< KEY (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  OPTKEYR  ======================================================== */
#define Flash_OPTKEYR_OPTKEY_Pos          (0UL)                     /*!< OPTKEY (Bit 0)                                        */
#define Flash_OPTKEYR_OPTKEY_Msk          (0xffffffffUL)            /*!< OPTKEY (Bitfield-Mask: 0xffffffff)                    */
/* ==========================================================  SR  =========================================================== */
#define Flash_SR_EOP_Pos                  (0UL)                     /*!< EOP (Bit 0)                                           */
#define Flash_SR_EOP_Msk                  (0x1UL)                   /*!< EOP (Bitfield-Mask: 0x01)                             */
#define Flash_SR_OPERR_Pos                (1UL)                     /*!< OPERR (Bit 1)                                         */
#define Flash_SR_OPERR_Msk                (0x2UL)                   /*!< OPERR (Bitfield-Mask: 0x01)                           */
#define Flash_SR_WRPERR_Pos               (4UL)                     /*!< WRPERR (Bit 4)                                        */
#define Flash_SR_WRPERR_Msk               (0x10UL)                  /*!< WRPERR (Bitfield-Mask: 0x01)                          */
#define Flash_SR_PGAERR_Pos               (5UL)                     /*!< PGAERR (Bit 5)                                        */
#define Flash_SR_PGAERR_Msk               (0x20UL)                  /*!< PGAERR (Bitfield-Mask: 0x01)                          */
#define Flash_SR_PGPERR_Pos               (6UL)                     /*!< PGPERR (Bit 6)                                        */
#define Flash_SR_PGPERR_Msk               (0x40UL)                  /*!< PGPERR (Bitfield-Mask: 0x01)                          */
#define Flash_SR_PGSERR_Pos               (7UL)                     /*!< PGSERR (Bit 7)                                        */
#define Flash_SR_PGSERR_Msk               (0x80UL)                  /*!< PGSERR (Bitfield-Mask: 0x01)                          */
#define Flash_SR_BSY_Pos                  (16UL)                    /*!< BSY (Bit 16)                                          */
#define Flash_SR_BSY_Msk                  (0x10000UL)               /*!< BSY (Bitfield-Mask: 0x01)                             */
/* ==========================================================  CR  =========================================================== */
#define Flash_CR_PG_Pos                   (0UL)                     /*!< PG (Bit 0)                                            */
#define Flash_CR_PG_Msk                   (0x1UL)                   /*!< PG (Bitfield-Mask: 0x01)                              */
#define Flash_CR_SER_Pos                  (1UL)                     /*!< SER (Bit 1)                                           */
#define Flash_CR_SER_Msk                  (0x2UL)                   /*!< SER (Bitfield-Mask: 0x01)                             */
#define Flash_CR_MER_Pos                  (2UL)                     /*!< MER (Bit 2)                                           */
#define Flash_CR_MER_Msk                  (0x4UL)                   /*!< MER (Bitfield-Mask: 0x01)                             */
#define Flash_CR_SNB_Pos                  (3UL)                     /*!< SNB (Bit 3)                                           */
#define Flash_CR_SNB_Msk                  (0xf8UL)                  /*!< SNB (Bitfield-Mask: 0x1f)                             */
#define Flash_CR_PSIZE_Pos                (8UL)                     /*!< PSIZE (Bit 8)                                         */
#define Flash_CR_PSIZE_Msk                (0x300UL)                 /*!< PSIZE (Bitfield-Mask: 0x03)                           */
#define Flash_CR_MER1_Pos                 (15UL)                    /*!< MER1 (Bit 15)                                         */
#define Flash_CR_MER1_Msk                 (0x8000UL)                /*!< MER1 (Bitfield-Mask: 0x01)                            */
#define Flash_CR_STRT_Pos                 (16UL)                    /*!< STRT (Bit 16)                                         */
#define Flash_CR_STRT_Msk                 (0x10000UL)               /*!< STRT (Bitfield-Mask: 0x01)                            */
#define Flash_CR_EOPIE_Pos                (24UL)                    /*!< EOPIE (Bit 24)                                        */
#define Flash_CR_EOPIE_Msk                (0x1000000UL)             /*!< EOPIE (Bitfield-Mask: 0x01)                           */
#define Flash_CR_ERRIE_Pos                (25UL)                    /*!< ERRIE (Bit 25)                                        */
#define Flash_CR_ERRIE_Msk                (0x2000000UL)             /*!< ERRIE (Bitfield-Mask: 0x01)                           */
#define Flash_CR_LOCK_Pos                 (31UL)                    /*!< LOCK (Bit 31)                                         */
#define Flash_CR_LOCK_Msk                 (0x80000000UL)            /*!< LOCK (Bitfield-Mask: 0x01)                            */
/* =========================================================  OPTCR  ========================================================= */
#define Flash_OPTCR_OPTLOCK_Pos           (0UL)                     /*!< OPTLOCK (Bit 0)                                       */
#define Flash_OPTCR_OPTLOCK_Msk           (0x1UL)                   /*!< OPTLOCK (Bitfield-Mask: 0x01)                         */
#define Flash_OPTCR_OPTSTRT_Pos           (1UL)                     /*!< OPTSTRT (Bit 1)                                       */
#define Flash_OPTCR_OPTSTRT_Msk           (0x2UL)                   /*!< OPTSTRT (Bitfield-Mask: 0x01)                         */
#define Flash_OPTCR_BOR_LEV_Pos           (2UL)                     /*!< BOR_LEV (Bit 2)                                       */
#define Flash_OPTCR_BOR_LEV_Msk           (0xcUL)                   /*!< BOR_LEV (Bitfield-Mask: 0x03)                         */
#define Flash_OPTCR_WWDG_SW_Pos           (4UL)                     /*!< WWDG_SW (Bit 4)                                       */
#define Flash_OPTCR_WWDG_SW_Msk           (0x10UL)                  /*!< WWDG_SW (Bitfield-Mask: 0x01)                         */
#define Flash_OPTCR_IWDG_SW_Pos           (5UL)                     /*!< IWDG_SW (Bit 5)                                       */
#define Flash_OPTCR_IWDG_SW_Msk           (0x20UL)                  /*!< IWDG_SW (Bitfield-Mask: 0x01)                         */
#define Flash_OPTCR_nRST_STOP_Pos         (6UL)                     /*!< nRST_STOP (Bit 6)                                     */
#define Flash_OPTCR_nRST_STOP_Msk         (0x40UL)                  /*!< nRST_STOP (Bitfield-Mask: 0x01)                       */
#define Flash_OPTCR_nRST_STDBY_Pos        (7UL)                     /*!< nRST_STDBY (Bit 7)                                    */
#define Flash_OPTCR_nRST_STDBY_Msk        (0x80UL)                  /*!< nRST_STDBY (Bitfield-Mask: 0x01)                      */
#define Flash_OPTCR_RDP_Pos               (8UL)                     /*!< RDP (Bit 8)                                           */
#define Flash_OPTCR_RDP_Msk               (0xff00UL)                /*!< RDP (Bitfield-Mask: 0xff)                             */
#define Flash_OPTCR_nWRP_Pos              (16UL)                    /*!< nWRP (Bit 16)                                         */
#define Flash_OPTCR_nWRP_Msk              (0xfff0000UL)             /*!< nWRP (Bitfield-Mask: 0xfff)                           */
#define Flash_OPTCR_nDBOOT_Pos            (28UL)                    /*!< nDBOOT (Bit 28)                                       */
#define Flash_OPTCR_nDBOOT_Msk            (0x10000000UL)            /*!< nDBOOT (Bitfield-Mask: 0x01)                          */
#define Flash_OPTCR_nDBANK_Pos            (29UL)                    /*!< nDBANK (Bit 29)                                       */
#define Flash_OPTCR_nDBANK_Msk            (0x20000000UL)            /*!< nDBANK (Bitfield-Mask: 0x01)                          */
#define Flash_OPTCR_IWDG_STDBY_Pos        (30UL)                    /*!< IWDG_STDBY (Bit 30)                                   */
#define Flash_OPTCR_IWDG_STDBY_Msk        (0x40000000UL)            /*!< IWDG_STDBY (Bitfield-Mask: 0x01)                      */
#define Flash_OPTCR_IWDG_STOP_Pos         (31UL)                    /*!< IWDG_STOP (Bit 31)                                    */
#define Flash_OPTCR_IWDG_STOP_Msk         (0x80000000UL)            /*!< IWDG_STOP (Bitfield-Mask: 0x01)                       */
/* ========================================================  OPTCR1  ========================================================= */
#define Flash_OPTCR1_BOOT_ADD0_Pos        (0UL)                     /*!< BOOT_ADD0 (Bit 0)                                     */
#define Flash_OPTCR1_BOOT_ADD0_Msk        (0xffffUL)                /*!< BOOT_ADD0 (Bitfield-Mask: 0xffff)                     */
#define Flash_OPTCR1_BOOT_ADD1_Pos        (16UL)                    /*!< BOOT_ADD1 (Bit 16)                                    */
#define Flash_OPTCR1_BOOT_ADD1_Msk        (0xffff0000UL)            /*!< BOOT_ADD1 (Bitfield-Mask: 0xffff)                     */
