#include "core.h"


#define QUADSPI_BASE                0xA0001000UL

#define QUADSPI                     ((volatile QUADSPI_Type*)           QUADSPI_BASE)


/* =========================================================================================================================== */
/* ================                                          QUADSPI                                          ================ */
/* =========================================================================================================================== */


/**
  * @brief QuadSPI interface (QUADSPI)
  */

typedef struct {                                /*!< (@ 0xA0001000) QUADSPI Structure                                          */
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000000) control register                                           */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Enable                                                             */
      __IOM uint32_t ABORT      : 1;            /*!< [1..1] Abort request                                                      */
      __IOM uint32_t DMAEN      : 1;            /*!< [2..2] DMA enable                                                         */
      __IOM uint32_t TCEN       : 1;            /*!< [3..3] Timeout counter enable                                             */
      __IOM uint32_t SSHIFT     : 1;            /*!< [4..4] Sample shift                                                       */
            uint32_t            : 1;
      __IOM uint32_t DFM        : 1;            /*!< [6..6] Dual-flash mode                                                    */
      __IOM uint32_t FSEL       : 1;            /*!< [7..7] FLASH memory selection                                             */
      __IOM uint32_t FTHRES     : 5;            /*!< [12..8] IFO threshold level                                               */
            uint32_t            : 3;
      __IOM uint32_t TEIE       : 1;            /*!< [16..16] Transfer error interrupt enable                                  */
      __IOM uint32_t TCIE       : 1;            /*!< [17..17] Transfer complete interrupt enable                               */
      __IOM uint32_t FTIE       : 1;            /*!< [18..18] FIFO threshold interrupt enable                                  */
      __IOM uint32_t SMIE       : 1;            /*!< [19..19] Status match interrupt enable                                    */
      __IOM uint32_t TOIE       : 1;            /*!< [20..20] TimeOut interrupt enable                                         */
            uint32_t            : 1;
      __IOM uint32_t APMS       : 1;            /*!< [22..22] Automatic poll mode stop                                         */
      __IOM uint32_t PMM        : 1;            /*!< [23..23] Polling match mode                                               */
      __IOM uint32_t PRESCALER  : 8;            /*!< [31..24] Clock prescaler                                                  */
    } CR_b;
  } ;
  
  union {
    __IOM uint32_t DCR;                         /*!< (@ 0x00000004) device configuration register                              */
    
    struct {
      __IOM uint32_t CKMODE     : 1;            /*!< [0..0] Mode 0 / mode 3                                                    */
            uint32_t            : 7;
      __IOM uint32_t CSHT       : 3;            /*!< [10..8] Chip select high time                                             */
            uint32_t            : 5;
      __IOM uint32_t FSIZE      : 5;            /*!< [20..16] FLASH memory size                                                */
            uint32_t            : 11;
    } DCR_b;
  } ;
  
  union {
    __IM  uint32_t SR;                          /*!< (@ 0x00000008) status register                                            */
    
    struct {
      __IM  uint32_t TEF        : 1;            /*!< [0..0] Transfer error flag                                                */
      __IM  uint32_t TCF        : 1;            /*!< [1..1] Transfer complete flag                                             */
      __IM  uint32_t FTF        : 1;            /*!< [2..2] FIFO threshold flag                                                */
      __IM  uint32_t SMF        : 1;            /*!< [3..3] Status match flag                                                  */
      __IM  uint32_t TOF        : 1;            /*!< [4..4] Timeout flag                                                       */
      __IM  uint32_t BUSY       : 1;            /*!< [5..5] Busy                                                               */
            uint32_t            : 2;
      __IM  uint32_t FLEVEL     : 7;            /*!< [14..8] FIFO level                                                        */
            uint32_t            : 17;
    } SR_b;
  } ;
  
  union {
    __IOM uint32_t FCR;                         /*!< (@ 0x0000000C) flag clear register                                        */
    
    struct {
      __IOM uint32_t CTEF       : 1;            /*!< [0..0] Clear transfer error flag                                          */
      __IOM uint32_t CTCF       : 1;            /*!< [1..1] Clear transfer complete flag                                       */
            uint32_t            : 1;
      __IOM uint32_t CSMF       : 1;            /*!< [3..3] Clear status match flag                                            */
      __IOM uint32_t CTOF       : 1;            /*!< [4..4] Clear timeout flag                                                 */
            uint32_t            : 27;
    } FCR_b;
  } ;
  
  union {
    __IOM uint32_t DLR;                         /*!< (@ 0x00000010) data length register                                       */
    
    struct {
      __IOM uint32_t DL         : 32;           /*!< [31..0] Data length                                                       */
    } DLR_b;
  } ;
  
  union {
    __IOM uint32_t CCR;                         /*!< (@ 0x00000014) communication configuration register                       */
    
    struct {
      __IOM uint32_t INSTRUCTION : 8;           /*!< [7..0] Instruction                                                        */
      __IOM uint32_t IMODE      : 2;            /*!< [9..8] Instruction mode                                                   */
      __IOM uint32_t ADMODE     : 2;            /*!< [11..10] Address mode                                                     */
      __IOM uint32_t ADSIZE     : 2;            /*!< [13..12] Address size                                                     */
      __IOM uint32_t ABMODE     : 2;            /*!< [15..14] Alternate bytes mode                                             */
      __IOM uint32_t ABSIZE     : 2;            /*!< [17..16] Alternate bytes size                                             */
      __IOM uint32_t DCYC       : 5;            /*!< [22..18] Number of dummy cycles                                           */
            uint32_t            : 1;
      __IOM uint32_t DMODE      : 2;            /*!< [25..24] Data mode                                                        */
      __IOM uint32_t FMODE      : 2;            /*!< [27..26] Functional mode                                                  */
      __IOM uint32_t SIOO       : 1;            /*!< [28..28] Send instruction only once mode                                  */
            uint32_t            : 1;
      __IOM uint32_t DHHC       : 1;            /*!< [30..30] DDR hold half cycle                                              */
      __IOM uint32_t DDRM       : 1;            /*!< [31..31] Double data rate mode                                            */
    } CCR_b;
  } ;
  
  union {
    __IOM uint32_t AR;                          /*!< (@ 0x00000018) address register                                           */
    
    struct {
      __IOM uint32_t ADDRESS    : 32;           /*!< [31..0] Address                                                           */
    } AR_b;
  } ;
  
  union {
    __IOM uint32_t ABR;                         /*!< (@ 0x0000001C) ABR                                                        */
    
    struct {
      __IOM uint32_t ALTERNATE  : 32;           /*!< [31..0] ALTERNATE                                                         */
    } ABR_b;
  } ;
  
  union {
    __IOM uint32_t DR;                          /*!< (@ 0x00000020) data register                                              */
    
    struct {
      __IOM uint32_t DATA       : 32;           /*!< [31..0] Data                                                              */
    } DR_b;
  } ;
  
  union {
    __IOM uint32_t PSMKR;                       /*!< (@ 0x00000024) polling status mask register                               */
    
    struct {
      __IOM uint32_t MASK       : 32;           /*!< [31..0] Status mask                                                       */
    } PSMKR_b;
  } ;
  
  union {
    __IOM uint32_t PSMAR;                       /*!< (@ 0x00000028) polling status match register                              */
    
    struct {
      __IOM uint32_t MATCH      : 32;           /*!< [31..0] Status match                                                      */
    } PSMAR_b;
  } ;
  
  union {
    __IOM uint32_t PIR;                         /*!< (@ 0x0000002C) polling interval register                                  */
    
    struct {
      __IOM uint32_t INTERVAL   : 16;           /*!< [15..0] Polling interval                                                  */
            uint32_t            : 16;
    } PIR_b;
  } ;
  
  union {
    __IOM uint32_t LPTR;                        /*!< (@ 0x00000030) low-power timeout register                                 */
    
    struct {
      __IOM uint32_t TIMEOUT    : 16;           /*!< [15..0] Timeout period                                                    */
            uint32_t            : 16;
    } LPTR_b;
  } ;
} QUADSPI_Type;                                 /*!< Size = 52 (0x34)                                                          */



/* =========================================================================================================================== */
/* ================                                          QUADSPI                                          ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
#define QUADSPI_CR_PRESCALER_Pos          (24UL)                    /*!< PRESCALER (Bit 24)                                    */
#define QUADSPI_CR_PRESCALER_Msk          (0xff000000UL)            /*!< PRESCALER (Bitfield-Mask: 0xff)                       */
#define QUADSPI_CR_PMM_Pos                (23UL)                    /*!< PMM (Bit 23)                                          */
#define QUADSPI_CR_PMM_Msk                (0x800000UL)              /*!< PMM (Bitfield-Mask: 0x01)                             */
#define QUADSPI_CR_APMS_Pos               (22UL)                    /*!< APMS (Bit 22)                                         */
#define QUADSPI_CR_APMS_Msk               (0x400000UL)              /*!< APMS (Bitfield-Mask: 0x01)                            */
#define QUADSPI_CR_TOIE_Pos               (20UL)                    /*!< TOIE (Bit 20)                                         */
#define QUADSPI_CR_TOIE_Msk               (0x100000UL)              /*!< TOIE (Bitfield-Mask: 0x01)                            */
#define QUADSPI_CR_SMIE_Pos               (19UL)                    /*!< SMIE (Bit 19)                                         */
#define QUADSPI_CR_SMIE_Msk               (0x80000UL)               /*!< SMIE (Bitfield-Mask: 0x01)                            */
#define QUADSPI_CR_FTIE_Pos               (18UL)                    /*!< FTIE (Bit 18)                                         */
#define QUADSPI_CR_FTIE_Msk               (0x40000UL)               /*!< FTIE (Bitfield-Mask: 0x01)                            */
#define QUADSPI_CR_TCIE_Pos               (17UL)                    /*!< TCIE (Bit 17)                                         */
#define QUADSPI_CR_TCIE_Msk               (0x20000UL)               /*!< TCIE (Bitfield-Mask: 0x01)                            */
#define QUADSPI_CR_TEIE_Pos               (16UL)                    /*!< TEIE (Bit 16)                                         */
#define QUADSPI_CR_TEIE_Msk               (0x10000UL)               /*!< TEIE (Bitfield-Mask: 0x01)                            */
#define QUADSPI_CR_FTHRES_Pos             (8UL)                     /*!< FTHRES (Bit 8)                                        */
#define QUADSPI_CR_FTHRES_Msk             (0x1f00UL)                /*!< FTHRES (Bitfield-Mask: 0x1f)                          */
#define QUADSPI_CR_FSEL_Pos               (7UL)                     /*!< FSEL (Bit 7)                                          */
#define QUADSPI_CR_FSEL_Msk               (0x80UL)                  /*!< FSEL (Bitfield-Mask: 0x01)                            */
#define QUADSPI_CR_DFM_Pos                (6UL)                     /*!< DFM (Bit 6)                                           */
#define QUADSPI_CR_DFM_Msk                (0x40UL)                  /*!< DFM (Bitfield-Mask: 0x01)                             */
#define QUADSPI_CR_SSHIFT_Pos             (4UL)                     /*!< SSHIFT (Bit 4)                                        */
#define QUADSPI_CR_SSHIFT_Msk             (0x10UL)                  /*!< SSHIFT (Bitfield-Mask: 0x01)                          */
#define QUADSPI_CR_TCEN_Pos               (3UL)                     /*!< TCEN (Bit 3)                                          */
#define QUADSPI_CR_TCEN_Msk               (0x8UL)                   /*!< TCEN (Bitfield-Mask: 0x01)                            */
#define QUADSPI_CR_DMAEN_Pos              (2UL)                     /*!< DMAEN (Bit 2)                                         */
#define QUADSPI_CR_DMAEN_Msk              (0x4UL)                   /*!< DMAEN (Bitfield-Mask: 0x01)                           */
#define QUADSPI_CR_ABORT_Pos              (1UL)                     /*!< ABORT (Bit 1)                                         */
#define QUADSPI_CR_ABORT_Msk              (0x2UL)                   /*!< ABORT (Bitfield-Mask: 0x01)                           */
#define QUADSPI_CR_EN_Pos                 (0UL)                     /*!< EN (Bit 0)                                            */
#define QUADSPI_CR_EN_Msk                 (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
/* ==========================================================  DCR  ========================================================== */
#define QUADSPI_DCR_FSIZE_Pos             (16UL)                    /*!< FSIZE (Bit 16)                                        */
#define QUADSPI_DCR_FSIZE_Msk             (0x1f0000UL)              /*!< FSIZE (Bitfield-Mask: 0x1f)                           */
#define QUADSPI_DCR_CSHT_Pos              (8UL)                     /*!< CSHT (Bit 8)                                          */
#define QUADSPI_DCR_CSHT_Msk              (0x700UL)                 /*!< CSHT (Bitfield-Mask: 0x07)                            */
#define QUADSPI_DCR_CKMODE_Pos            (0UL)                     /*!< CKMODE (Bit 0)                                        */
#define QUADSPI_DCR_CKMODE_Msk            (0x1UL)                   /*!< CKMODE (Bitfield-Mask: 0x01)                          */
/* ==========================================================  SR  =========================================================== */
#define QUADSPI_SR_FLEVEL_Pos             (8UL)                     /*!< FLEVEL (Bit 8)                                        */
#define QUADSPI_SR_FLEVEL_Msk             (0x7f00UL)                /*!< FLEVEL (Bitfield-Mask: 0x7f)                          */
#define QUADSPI_SR_BUSY_Pos               (5UL)                     /*!< BUSY (Bit 5)                                          */
#define QUADSPI_SR_BUSY_Msk               (0x20UL)                  /*!< BUSY (Bitfield-Mask: 0x01)                            */
#define QUADSPI_SR_TOF_Pos                (4UL)                     /*!< TOF (Bit 4)                                           */
#define QUADSPI_SR_TOF_Msk                (0x10UL)                  /*!< TOF (Bitfield-Mask: 0x01)                             */
#define QUADSPI_SR_SMF_Pos                (3UL)                     /*!< SMF (Bit 3)                                           */
#define QUADSPI_SR_SMF_Msk                (0x8UL)                   /*!< SMF (Bitfield-Mask: 0x01)                             */
#define QUADSPI_SR_FTF_Pos                (2UL)                     /*!< FTF (Bit 2)                                           */
#define QUADSPI_SR_FTF_Msk                (0x4UL)                   /*!< FTF (Bitfield-Mask: 0x01)                             */
#define QUADSPI_SR_TCF_Pos                (1UL)                     /*!< TCF (Bit 1)                                           */
#define QUADSPI_SR_TCF_Msk                (0x2UL)                   /*!< TCF (Bitfield-Mask: 0x01)                             */
#define QUADSPI_SR_TEF_Pos                (0UL)                     /*!< TEF (Bit 0)                                           */
#define QUADSPI_SR_TEF_Msk                (0x1UL)                   /*!< TEF (Bitfield-Mask: 0x01)                             */
/* ==========================================================  FCR  ========================================================== */
#define QUADSPI_FCR_CTOF_Pos              (4UL)                     /*!< CTOF (Bit 4)                                          */
#define QUADSPI_FCR_CTOF_Msk              (0x10UL)                  /*!< CTOF (Bitfield-Mask: 0x01)                            */
#define QUADSPI_FCR_CSMF_Pos              (3UL)                     /*!< CSMF (Bit 3)                                          */
#define QUADSPI_FCR_CSMF_Msk              (0x8UL)                   /*!< CSMF (Bitfield-Mask: 0x01)                            */
#define QUADSPI_FCR_CTCF_Pos              (1UL)                     /*!< CTCF (Bit 1)                                          */
#define QUADSPI_FCR_CTCF_Msk              (0x2UL)                   /*!< CTCF (Bitfield-Mask: 0x01)                            */
#define QUADSPI_FCR_CTEF_Pos              (0UL)                     /*!< CTEF (Bit 0)                                          */
#define QUADSPI_FCR_CTEF_Msk              (0x1UL)                   /*!< CTEF (Bitfield-Mask: 0x01)                            */
/* ==========================================================  DLR  ========================================================== */
#define QUADSPI_DLR_DL_Pos                (0UL)                     /*!< DL (Bit 0)                                            */
#define QUADSPI_DLR_DL_Msk                (0xffffffffUL)            /*!< DL (Bitfield-Mask: 0xffffffff)                        */
/* ==========================================================  CCR  ========================================================== */
#define QUADSPI_CCR_DDRM_Pos              (31UL)                    /*!< DDRM (Bit 31)                                         */
#define QUADSPI_CCR_DDRM_Msk              (0x80000000UL)            /*!< DDRM (Bitfield-Mask: 0x01)                            */
#define QUADSPI_CCR_DHHC_Pos              (30UL)                    /*!< DHHC (Bit 30)                                         */
#define QUADSPI_CCR_DHHC_Msk              (0x40000000UL)            /*!< DHHC (Bitfield-Mask: 0x01)                            */
#define QUADSPI_CCR_SIOO_Pos              (28UL)                    /*!< SIOO (Bit 28)                                         */
#define QUADSPI_CCR_SIOO_Msk              (0x10000000UL)            /*!< SIOO (Bitfield-Mask: 0x01)                            */
#define QUADSPI_CCR_FMODE_Pos             (26UL)                    /*!< FMODE (Bit 26)                                        */
#define QUADSPI_CCR_FMODE_Msk             (0xc000000UL)             /*!< FMODE (Bitfield-Mask: 0x03)                           */
#define QUADSPI_CCR_DMODE_Pos             (24UL)                    /*!< DMODE (Bit 24)                                        */
#define QUADSPI_CCR_DMODE_Msk             (0x3000000UL)             /*!< DMODE (Bitfield-Mask: 0x03)                           */
#define QUADSPI_CCR_DCYC_Pos              (18UL)                    /*!< DCYC (Bit 18)                                         */
#define QUADSPI_CCR_DCYC_Msk              (0x7c0000UL)              /*!< DCYC (Bitfield-Mask: 0x1f)                            */
#define QUADSPI_CCR_ABSIZE_Pos            (16UL)                    /*!< ABSIZE (Bit 16)                                       */
#define QUADSPI_CCR_ABSIZE_Msk            (0x30000UL)               /*!< ABSIZE (Bitfield-Mask: 0x03)                          */
#define QUADSPI_CCR_ABMODE_Pos            (14UL)                    /*!< ABMODE (Bit 14)                                       */
#define QUADSPI_CCR_ABMODE_Msk            (0xc000UL)                /*!< ABMODE (Bitfield-Mask: 0x03)                          */
#define QUADSPI_CCR_ADSIZE_Pos            (12UL)                    /*!< ADSIZE (Bit 12)                                       */
#define QUADSPI_CCR_ADSIZE_Msk            (0x3000UL)                /*!< ADSIZE (Bitfield-Mask: 0x03)                          */
#define QUADSPI_CCR_ADMODE_Pos            (10UL)                    /*!< ADMODE (Bit 10)                                       */
#define QUADSPI_CCR_ADMODE_Msk            (0xc00UL)                 /*!< ADMODE (Bitfield-Mask: 0x03)                          */
#define QUADSPI_CCR_IMODE_Pos             (8UL)                     /*!< IMODE (Bit 8)                                         */
#define QUADSPI_CCR_IMODE_Msk             (0x300UL)                 /*!< IMODE (Bitfield-Mask: 0x03)                           */
#define QUADSPI_CCR_INSTRUCTION_Pos       (0UL)                     /*!< INSTRUCTION (Bit 0)                                   */
#define QUADSPI_CCR_INSTRUCTION_Msk       (0xffUL)                  /*!< INSTRUCTION (Bitfield-Mask: 0xff)                     */
/* ==========================================================  AR  =========================================================== */
#define QUADSPI_AR_ADDRESS_Pos            (0UL)                     /*!< ADDRESS (Bit 0)                                       */
#define QUADSPI_AR_ADDRESS_Msk            (0xffffffffUL)            /*!< ADDRESS (Bitfield-Mask: 0xffffffff)                   */
/* ==========================================================  ABR  ========================================================== */
#define QUADSPI_ABR_ALTERNATE_Pos         (0UL)                     /*!< ALTERNATE (Bit 0)                                     */
#define QUADSPI_ABR_ALTERNATE_Msk         (0xffffffffUL)            /*!< ALTERNATE (Bitfield-Mask: 0xffffffff)                 */
/* ==========================================================  DR  =========================================================== */
#define QUADSPI_DR_DATA_Pos               (0UL)                     /*!< DATA (Bit 0)                                          */
#define QUADSPI_DR_DATA_Msk               (0xffffffffUL)            /*!< DATA (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  PSMKR  ========================================================= */
#define QUADSPI_PSMKR_MASK_Pos            (0UL)                     /*!< MASK (Bit 0)                                          */
#define QUADSPI_PSMKR_MASK_Msk            (0xffffffffUL)            /*!< MASK (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  PSMAR  ========================================================= */
#define QUADSPI_PSMAR_MATCH_Pos           (0UL)                     /*!< MATCH (Bit 0)                                         */
#define QUADSPI_PSMAR_MATCH_Msk           (0xffffffffUL)            /*!< MATCH (Bitfield-Mask: 0xffffffff)                     */
/* ==========================================================  PIR  ========================================================== */
#define QUADSPI_PIR_INTERVAL_Pos          (0UL)                     /*!< INTERVAL (Bit 0)                                      */
#define QUADSPI_PIR_INTERVAL_Msk          (0xffffUL)                /*!< INTERVAL (Bitfield-Mask: 0xffff)                      */
/* =========================================================  LPTR  ========================================================== */
#define QUADSPI_LPTR_TIMEOUT_Pos          (0UL)                     /*!< TIMEOUT (Bit 0)                                       */
#define QUADSPI_LPTR_TIMEOUT_Msk          (0xffffUL)                /*!< TIMEOUT (Bitfield-Mask: 0xffff)                       */
