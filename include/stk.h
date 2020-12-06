#include "core.h"

#define STK_BASE                    0xE000E010UL
#define STK                         ((STK_Type*)               STK_BASE)


/* =========================================================================================================================== */
/* ================                                            STK                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief SysTick timer (STK)
  */

typedef struct {                                /*!< (@ 0xE000E010) STK Structure                                              */
  
  union {
    __IOM uint32_t CSR;                         /*!< (@ 0x00000000) SysTick control and status register                        */
    
    struct {
      __IOM uint32_t ENABLE     : 1;            /*!< [0..0] Counter enable                                                     */
      __IOM uint32_t TICKINT    : 1;            /*!< [1..1] SysTick exception request enable                                   */
      __IOM uint32_t CLKSOURCE  : 1;            /*!< [2..2] Clock source selection                                             */
            uint32_t            : 13;
      __IOM uint32_t COUNTFLAG  : 1;            /*!< [16..16] COUNTFLAG                                                        */
            uint32_t            : 15;
    } CSR_b;
  } ;
  
  union {
    __IOM uint32_t RVR;                         /*!< (@ 0x00000004) SysTick reload value register                              */
    
    struct {
      __IOM uint32_t RELOAD     : 24;           /*!< [23..0] RELOAD value                                                      */
            uint32_t            : 8;
    } RVR_b;
  } ;
  
  union {
    __IOM uint32_t CVR;                         /*!< (@ 0x00000008) SysTick current value register                             */
    
    struct {
      __IOM uint32_t CURRENT    : 24;           /*!< [23..0] Current counter value                                             */
            uint32_t            : 8;
    } CVR_b;
  } ;
  
  union {
    __IOM uint32_t CALIB;                       /*!< (@ 0x0000000C) SysTick calibration value register                         */
    
    struct {
      __IOM uint32_t TENMS      : 24;           /*!< [23..0] Calibration value                                                 */
            uint32_t            : 6;
      __IOM uint32_t SKEW       : 1;            /*!< [30..30] SKEW flag: Indicates whether the TENMS value is exact            */
      __IOM uint32_t NOREF      : 1;            /*!< [31..31] NOREF flag. Reads as zero                                        */
    } CALIB_b;
  } ;
} STK_Type;                                     /*!< Size = 16 (0x10)                                                          */



/* =========================================================================================================================== */
/* ================                                            STK                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CSR  ========================================================== */
#define STK_CSR_ENABLE_Pos                (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define STK_CSR_ENABLE_Msk                (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define STK_CSR_TICKINT_Pos               (1UL)                     /*!< TICKINT (Bit 1)                                       */
#define STK_CSR_TICKINT_Msk               (0x2UL)                   /*!< TICKINT (Bitfield-Mask: 0x01)                         */
#define STK_CSR_CLKSOURCE_Pos             (2UL)                     /*!< CLKSOURCE (Bit 2)                                     */
#define STK_CSR_CLKSOURCE_Msk             (0x4UL)                   /*!< CLKSOURCE (Bitfield-Mask: 0x01)                       */
#define STK_CSR_COUNTFLAG_Pos             (16UL)                    /*!< COUNTFLAG (Bit 16)                                    */
#define STK_CSR_COUNTFLAG_Msk             (0x10000UL)               /*!< COUNTFLAG (Bitfield-Mask: 0x01)                       */
/* ==========================================================  RVR  ========================================================== */
#define STK_RVR_RELOAD_Pos                (0UL)                     /*!< RELOAD (Bit 0)                                        */
#define STK_RVR_RELOAD_Msk                (0xffffffUL)              /*!< RELOAD (Bitfield-Mask: 0xffffff)                      */
/* ==========================================================  CVR  ========================================================== */
#define STK_CVR_CURRENT_Pos               (0UL)                     /*!< CURRENT (Bit 0)                                       */
#define STK_CVR_CURRENT_Msk               (0xffffffUL)              /*!< CURRENT (Bitfield-Mask: 0xffffff)                     */
/* =========================================================  CALIB  ========================================================= */
#define STK_CALIB_TENMS_Pos               (0UL)                     /*!< TENMS (Bit 0)                                         */
#define STK_CALIB_TENMS_Msk               (0xffffffUL)              /*!< TENMS (Bitfield-Mask: 0xffffff)                       */
#define STK_CALIB_SKEW_Pos                (30UL)                    /*!< SKEW (Bit 30)                                         */
#define STK_CALIB_SKEW_Msk                (0x40000000UL)            /*!< SKEW (Bitfield-Mask: 0x01)                            */
#define STK_CALIB_NOREF_Pos               (31UL)                    /*!< NOREF (Bit 31)                                        */
#define STK_CALIB_NOREF_Msk               (0x80000000UL)            /*!< NOREF (Bitfield-Mask: 0x01)                           */

