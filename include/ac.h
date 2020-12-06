#include "core.h"

#define AC_BASE                     0xE000EF90UL
#define AC                          ((AC_Type*)                AC_BASE)


/* =========================================================================================================================== */
/* ================                                            AC                                             ================ */
/* =========================================================================================================================== */


/**
  * @brief Access control (AC)
  */

typedef struct {                                /*!< (@ 0xE000EF90) AC Structure                                               */
  
  union {
    __IOM uint32_t ITCMCR;                      /*!< (@ 0x00000000) Instruction and Data Tightly-Coupled Memory Control
                                                                    Registers                                                  */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] EN                                                                 */
      __IOM uint32_t RMW        : 1;            /*!< [1..1] RMW                                                                */
      __IOM uint32_t RETEN      : 1;            /*!< [2..2] RETEN                                                              */
      __IOM uint32_t SZ         : 4;            /*!< [6..3] SZ                                                                 */
            uint32_t            : 25;
    } ITCMCR_b;
  } ;
  
  union {
    __IOM uint32_t DTCMCR;                      /*!< (@ 0x00000004) Instruction and Data Tightly-Coupled Memory Control
                                                                    Registers                                                  */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] EN                                                                 */
      __IOM uint32_t RMW        : 1;            /*!< [1..1] RMW                                                                */
      __IOM uint32_t RETEN      : 1;            /*!< [2..2] RETEN                                                              */
      __IOM uint32_t SZ         : 4;            /*!< [6..3] SZ                                                                 */
            uint32_t            : 25;
    } DTCMCR_b;
  } ;
  
  union {
    __IOM uint32_t AHBPCR;                      /*!< (@ 0x00000008) AHBP Control register                                      */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] EN                                                                 */
      __IOM uint32_t SZ         : 3;            /*!< [3..1] SZ                                                                 */
            uint32_t            : 28;
    } AHBPCR_b;
  } ;
  
  union {
    __IOM uint32_t CACR;                        /*!< (@ 0x0000000C) Auxiliary Cache Control register                           */
    
    struct {
      __IOM uint32_t SIWT       : 1;            /*!< [0..0] SIWT                                                               */
      __IOM uint32_t ECCEN      : 1;            /*!< [1..1] ECCEN                                                              */
      __IOM uint32_t FORCEWT    : 1;            /*!< [2..2] FORCEWT                                                            */
            uint32_t            : 29;
    } CACR_b;
  } ;
  
  union {
    __IOM uint32_t AHBSCR;                      /*!< (@ 0x00000010) AHB Slave Control register                                 */
    
    struct {
      __IOM uint32_t CTL        : 2;            /*!< [1..0] CTL                                                                */
      __IOM uint32_t TPRI       : 9;            /*!< [10..2] TPRI                                                              */
      __IOM uint32_t INITCOUNT  : 5;            /*!< [15..11] INITCOUNT                                                        */
            uint32_t            : 16;
    } AHBSCR_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IOM uint32_t ABFSR;                       /*!< (@ 0x00000018) Auxiliary Bus Fault Status register                        */
    
    struct {
      __IOM uint32_t ITCM       : 1;            /*!< [0..0] ITCM                                                               */
      __IOM uint32_t DTCM       : 1;            /*!< [1..1] DTCM                                                               */
      __IOM uint32_t AHBP       : 1;            /*!< [2..2] AHBP                                                               */
      __IOM uint32_t AXIM       : 1;            /*!< [3..3] AXIM                                                               */
      __IOM uint32_t EPPB       : 1;            /*!< [4..4] EPPB                                                               */
            uint32_t            : 3;
      __IOM uint32_t AXIMTYPE   : 2;            /*!< [9..8] AXIMTYPE                                                           */
            uint32_t            : 22;
    } ABFSR_b;
  } ;
} AC_Type;                                      /*!< Size = 28 (0x1c)                                                          */

/* =========================================================================================================================== */
/* ================                                            AC                                             ================ */
/* =========================================================================================================================== */

/* ========================================================  ITCMCR  ========================================================= */
#define AC_ITCMCR_EN_Pos                  (0UL)                     /*!< EN (Bit 0)                                            */
#define AC_ITCMCR_EN_Msk                  (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
#define AC_ITCMCR_RMW_Pos                 (1UL)                     /*!< RMW (Bit 1)                                           */
#define AC_ITCMCR_RMW_Msk                 (0x2UL)                   /*!< RMW (Bitfield-Mask: 0x01)                             */
#define AC_ITCMCR_RETEN_Pos               (2UL)                     /*!< RETEN (Bit 2)                                         */
#define AC_ITCMCR_RETEN_Msk               (0x4UL)                   /*!< RETEN (Bitfield-Mask: 0x01)                           */
#define AC_ITCMCR_SZ_Pos                  (3UL)                     /*!< SZ (Bit 3)                                            */
#define AC_ITCMCR_SZ_Msk                  (0x78UL)                  /*!< SZ (Bitfield-Mask: 0x0f)                              */
/* ========================================================  DTCMCR  ========================================================= */
#define AC_DTCMCR_EN_Pos                  (0UL)                     /*!< EN (Bit 0)                                            */
#define AC_DTCMCR_EN_Msk                  (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
#define AC_DTCMCR_RMW_Pos                 (1UL)                     /*!< RMW (Bit 1)                                           */
#define AC_DTCMCR_RMW_Msk                 (0x2UL)                   /*!< RMW (Bitfield-Mask: 0x01)                             */
#define AC_DTCMCR_RETEN_Pos               (2UL)                     /*!< RETEN (Bit 2)                                         */
#define AC_DTCMCR_RETEN_Msk               (0x4UL)                   /*!< RETEN (Bitfield-Mask: 0x01)                           */
#define AC_DTCMCR_SZ_Pos                  (3UL)                     /*!< SZ (Bit 3)                                            */
#define AC_DTCMCR_SZ_Msk                  (0x78UL)                  /*!< SZ (Bitfield-Mask: 0x0f)                              */
/* ========================================================  AHBPCR  ========================================================= */
#define AC_AHBPCR_EN_Pos                  (0UL)                     /*!< EN (Bit 0)                                            */
#define AC_AHBPCR_EN_Msk                  (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
#define AC_AHBPCR_SZ_Pos                  (1UL)                     /*!< SZ (Bit 1)                                            */
#define AC_AHBPCR_SZ_Msk                  (0xeUL)                   /*!< SZ (Bitfield-Mask: 0x07)                              */
/* =========================================================  CACR  ========================================================== */
#define AC_CACR_SIWT_Pos                  (0UL)                     /*!< SIWT (Bit 0)                                          */
#define AC_CACR_SIWT_Msk                  (0x1UL)                   /*!< SIWT (Bitfield-Mask: 0x01)                            */
#define AC_CACR_ECCEN_Pos                 (1UL)                     /*!< ECCEN (Bit 1)                                         */
#define AC_CACR_ECCEN_Msk                 (0x2UL)                   /*!< ECCEN (Bitfield-Mask: 0x01)                           */
#define AC_CACR_FORCEWT_Pos               (2UL)                     /*!< FORCEWT (Bit 2)                                       */
#define AC_CACR_FORCEWT_Msk               (0x4UL)                   /*!< FORCEWT (Bitfield-Mask: 0x01)                         */
/* ========================================================  AHBSCR  ========================================================= */
#define AC_AHBSCR_CTL_Pos                 (0UL)                     /*!< CTL (Bit 0)                                           */
#define AC_AHBSCR_CTL_Msk                 (0x3UL)                   /*!< CTL (Bitfield-Mask: 0x03)                             */
#define AC_AHBSCR_TPRI_Pos                (2UL)                     /*!< TPRI (Bit 2)                                          */
#define AC_AHBSCR_TPRI_Msk                (0x7fcUL)                 /*!< TPRI (Bitfield-Mask: 0x1ff)                           */
#define AC_AHBSCR_INITCOUNT_Pos           (11UL)                    /*!< INITCOUNT (Bit 11)                                    */
#define AC_AHBSCR_INITCOUNT_Msk           (0xf800UL)                /*!< INITCOUNT (Bitfield-Mask: 0x1f)                       */
/* =========================================================  ABFSR  ========================================================= */
#define AC_ABFSR_ITCM_Pos                 (0UL)                     /*!< ITCM (Bit 0)                                          */
#define AC_ABFSR_ITCM_Msk                 (0x1UL)                   /*!< ITCM (Bitfield-Mask: 0x01)                            */
#define AC_ABFSR_DTCM_Pos                 (1UL)                     /*!< DTCM (Bit 1)                                          */
#define AC_ABFSR_DTCM_Msk                 (0x2UL)                   /*!< DTCM (Bitfield-Mask: 0x01)                            */
#define AC_ABFSR_AHBP_Pos                 (2UL)                     /*!< AHBP (Bit 2)                                          */
#define AC_ABFSR_AHBP_Msk                 (0x4UL)                   /*!< AHBP (Bitfield-Mask: 0x01)                            */
#define AC_ABFSR_AXIM_Pos                 (3UL)                     /*!< AXIM (Bit 3)                                          */
#define AC_ABFSR_AXIM_Msk                 (0x8UL)                   /*!< AXIM (Bitfield-Mask: 0x01)                            */
#define AC_ABFSR_EPPB_Pos                 (4UL)                     /*!< EPPB (Bit 4)                                          */
#define AC_ABFSR_EPPB_Msk                 (0x10UL)                  /*!< EPPB (Bitfield-Mask: 0x01)                            */
#define AC_ABFSR_AXIMTYPE_Pos             (8UL)                     /*!< AXIMTYPE (Bit 8)                                      */
#define AC_ABFSR_AXIMTYPE_Msk             (0x300UL)                 /*!< AXIMTYPE (Bitfield-Mask: 0x03)                        */

