#include "core.h"

#define FPU_CPACR_BASE              0xE000ED88UL
#define FPU_CPACR                   ((volatile FPU_CPACR_Type*)         FPU_CPACR_BASE)

#define FPU_BASE                    0xE000EF34UL
#define FPU                         ((volatile FPU_Type*)               FPU_BASE)

/* =========================================================================================================================== */
/* ================                                            FPU                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Floting point unit (FPU)
  */

typedef struct {                                /*!< (@ 0xE000EF34) FPU Structure                                              */
  
  union {
    __IOM uint32_t FPCCR;                       /*!< (@ 0x00000000) Floating-point context control register                    */
    
    struct {
      __IOM uint32_t LSPACT     : 1;            /*!< [0..0] LSPACT                                                             */
      __IOM uint32_t USER       : 1;            /*!< [1..1] USER                                                               */
            uint32_t            : 1;
      __IOM uint32_t THREAD     : 1;            /*!< [3..3] THREAD                                                             */
      __IOM uint32_t HFRDY      : 1;            /*!< [4..4] HFRDY                                                              */
      __IOM uint32_t MMRDY      : 1;            /*!< [5..5] MMRDY                                                              */
      __IOM uint32_t BFRDY      : 1;            /*!< [6..6] BFRDY                                                              */
            uint32_t            : 1;
      __IOM uint32_t MONRDY     : 1;            /*!< [8..8] MONRDY                                                             */
            uint32_t            : 21;
      __IOM uint32_t LSPEN      : 1;            /*!< [30..30] LSPEN                                                            */
      __IOM uint32_t ASPEN      : 1;            /*!< [31..31] ASPEN                                                            */
    } FPCCR_b;
  } ;
  
  union {
    __IOM uint32_t FPCAR;                       /*!< (@ 0x00000004) Floating-point context address register                    */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t ADDRESS    : 29;           /*!< [31..3] Location of unpopulated floating-point                            */
    } FPCAR_b;
  } ;
  
  union {
    __IOM uint32_t FPSCR;                       /*!< (@ 0x00000008) Floating-point status control register                     */
    
    struct {
      __IOM uint32_t IOC        : 1;            /*!< [0..0] Invalid operation cumulative exception bit                         */
      __IOM uint32_t DZC        : 1;            /*!< [1..1] Division by zero cumulative exception bit.                         */
      __IOM uint32_t OFC        : 1;            /*!< [2..2] Overflow cumulative exception bit                                  */
      __IOM uint32_t UFC        : 1;            /*!< [3..3] Underflow cumulative exception bit                                 */
      __IOM uint32_t IXC        : 1;            /*!< [4..4] Inexact cumulative exception bit                                   */
            uint32_t            : 2;
      __IOM uint32_t IDC        : 1;            /*!< [7..7] Input denormal cumulative exception bit.                           */
            uint32_t            : 14;
      __IOM uint32_t RMode      : 2;            /*!< [23..22] Rounding Mode control field                                      */
      __IOM uint32_t FZ         : 1;            /*!< [24..24] Flush-to-zero mode control bit:                                  */
      __IOM uint32_t DN         : 1;            /*!< [25..25] Default NaN mode control bit                                     */
      __IOM uint32_t AHP        : 1;            /*!< [26..26] Alternative half-precision control bit                           */
            uint32_t            : 1;
      __IOM uint32_t V          : 1;            /*!< [28..28] Overflow condition code flag                                     */
      __IOM uint32_t C          : 1;            /*!< [29..29] Carry condition code flag                                        */
      __IOM uint32_t Z          : 1;            /*!< [30..30] Zero condition code flag                                         */
      __IOM uint32_t N          : 1;            /*!< [31..31] Negative condition code flag                                     */
    } FPSCR_b;
  } ;
} FPU_Type;                                     /*!< Size = 12 (0xc)                                                           */



/* =========================================================================================================================== */
/* ================                                         FPU_CPACR                                         ================ */
/* =========================================================================================================================== */


/**
  * @brief Floating point unit CPACR (FPU_CPACR)
  */

typedef struct {                                /*!< (@ 0xE000ED88) FPU_CPACR Structure                                        */
  
  union {
    __IOM uint32_t CPACR;                       /*!< (@ 0x00000000) Coprocessor access control register                        */
    
    struct {
            uint32_t            : 20;
      __IOM uint32_t CP         : 4;            /*!< [23..20] CP                                                               */
            uint32_t            : 8;
    } CPACR_b;
  } ;
} FPU_CPACR_Type;                               /*!< Size = 4 (0x4)                                                            */



/* =========================================================================================================================== */
/* ================                                            FPU                                            ================ */
/* =========================================================================================================================== */

/* =========================================================  FPCCR  ========================================================= */
#define FPU_FPCCR_LSPACT_Pos              (0UL)                     /*!< LSPACT (Bit 0)                                        */
#define FPU_FPCCR_LSPACT_Msk              (0x1UL)                   /*!< LSPACT (Bitfield-Mask: 0x01)                          */
#define FPU_FPCCR_USER_Pos                (1UL)                     /*!< USER (Bit 1)                                          */
#define FPU_FPCCR_USER_Msk                (0x2UL)                   /*!< USER (Bitfield-Mask: 0x01)                            */
#define FPU_FPCCR_THREAD_Pos              (3UL)                     /*!< THREAD (Bit 3)                                        */
#define FPU_FPCCR_THREAD_Msk              (0x8UL)                   /*!< THREAD (Bitfield-Mask: 0x01)                          */
#define FPU_FPCCR_HFRDY_Pos               (4UL)                     /*!< HFRDY (Bit 4)                                         */
#define FPU_FPCCR_HFRDY_Msk               (0x10UL)                  /*!< HFRDY (Bitfield-Mask: 0x01)                           */
#define FPU_FPCCR_MMRDY_Pos               (5UL)                     /*!< MMRDY (Bit 5)                                         */
#define FPU_FPCCR_MMRDY_Msk               (0x20UL)                  /*!< MMRDY (Bitfield-Mask: 0x01)                           */
#define FPU_FPCCR_BFRDY_Pos               (6UL)                     /*!< BFRDY (Bit 6)                                         */
#define FPU_FPCCR_BFRDY_Msk               (0x40UL)                  /*!< BFRDY (Bitfield-Mask: 0x01)                           */
#define FPU_FPCCR_MONRDY_Pos              (8UL)                     /*!< MONRDY (Bit 8)                                        */
#define FPU_FPCCR_MONRDY_Msk              (0x100UL)                 /*!< MONRDY (Bitfield-Mask: 0x01)                          */
#define FPU_FPCCR_LSPEN_Pos               (30UL)                    /*!< LSPEN (Bit 30)                                        */
#define FPU_FPCCR_LSPEN_Msk               (0x40000000UL)            /*!< LSPEN (Bitfield-Mask: 0x01)                           */
#define FPU_FPCCR_ASPEN_Pos               (31UL)                    /*!< ASPEN (Bit 31)                                        */
#define FPU_FPCCR_ASPEN_Msk               (0x80000000UL)            /*!< ASPEN (Bitfield-Mask: 0x01)                           */
/* =========================================================  FPCAR  ========================================================= */
#define FPU_FPCAR_ADDRESS_Pos             (3UL)                     /*!< ADDRESS (Bit 3)                                       */
#define FPU_FPCAR_ADDRESS_Msk             (0xfffffff8UL)            /*!< ADDRESS (Bitfield-Mask: 0x1fffffff)                   */
/* =========================================================  FPSCR  ========================================================= */
#define FPU_FPSCR_IOC_Pos                 (0UL)                     /*!< IOC (Bit 0)                                           */
#define FPU_FPSCR_IOC_Msk                 (0x1UL)                   /*!< IOC (Bitfield-Mask: 0x01)                             */
#define FPU_FPSCR_DZC_Pos                 (1UL)                     /*!< DZC (Bit 1)                                           */
#define FPU_FPSCR_DZC_Msk                 (0x2UL)                   /*!< DZC (Bitfield-Mask: 0x01)                             */
#define FPU_FPSCR_OFC_Pos                 (2UL)                     /*!< OFC (Bit 2)                                           */
#define FPU_FPSCR_OFC_Msk                 (0x4UL)                   /*!< OFC (Bitfield-Mask: 0x01)                             */
#define FPU_FPSCR_UFC_Pos                 (3UL)                     /*!< UFC (Bit 3)                                           */
#define FPU_FPSCR_UFC_Msk                 (0x8UL)                   /*!< UFC (Bitfield-Mask: 0x01)                             */
#define FPU_FPSCR_IXC_Pos                 (4UL)                     /*!< IXC (Bit 4)                                           */
#define FPU_FPSCR_IXC_Msk                 (0x10UL)                  /*!< IXC (Bitfield-Mask: 0x01)                             */
#define FPU_FPSCR_IDC_Pos                 (7UL)                     /*!< IDC (Bit 7)                                           */
#define FPU_FPSCR_IDC_Msk                 (0x80UL)                  /*!< IDC (Bitfield-Mask: 0x01)                             */
#define FPU_FPSCR_RMode_Pos               (22UL)                    /*!< RMode (Bit 22)                                        */
#define FPU_FPSCR_RMode_Msk               (0xc00000UL)              /*!< RMode (Bitfield-Mask: 0x03)                           */
#define FPU_FPSCR_FZ_Pos                  (24UL)                    /*!< FZ (Bit 24)                                           */
#define FPU_FPSCR_FZ_Msk                  (0x1000000UL)             /*!< FZ (Bitfield-Mask: 0x01)                              */
#define FPU_FPSCR_DN_Pos                  (25UL)                    /*!< DN (Bit 25)                                           */
#define FPU_FPSCR_DN_Msk                  (0x2000000UL)             /*!< DN (Bitfield-Mask: 0x01)                              */
#define FPU_FPSCR_AHP_Pos                 (26UL)                    /*!< AHP (Bit 26)                                          */
#define FPU_FPSCR_AHP_Msk                 (0x4000000UL)             /*!< AHP (Bitfield-Mask: 0x01)                             */
#define FPU_FPSCR_V_Pos                   (28UL)                    /*!< V (Bit 28)                                            */
#define FPU_FPSCR_V_Msk                   (0x10000000UL)            /*!< V (Bitfield-Mask: 0x01)                               */
#define FPU_FPSCR_C_Pos                   (29UL)                    /*!< C (Bit 29)                                            */
#define FPU_FPSCR_C_Msk                   (0x20000000UL)            /*!< C (Bitfield-Mask: 0x01)                               */
#define FPU_FPSCR_Z_Pos                   (30UL)                    /*!< Z (Bit 30)                                            */
#define FPU_FPSCR_Z_Msk                   (0x40000000UL)            /*!< Z (Bitfield-Mask: 0x01)                               */
#define FPU_FPSCR_N_Pos                   (31UL)                    /*!< N (Bit 31)                                            */
#define FPU_FPSCR_N_Msk                   (0x80000000UL)            /*!< N (Bitfield-Mask: 0x01)                               */


/* =========================================================================================================================== */
/* ================                                         FPU_CPACR                                         ================ */
/* =========================================================================================================================== */

/* =========================================================  CPACR  ========================================================= */
#define FPU_CPACR_CPACR_CP_Pos            (20UL)                    /*!< CP (Bit 20)                                           */
#define FPU_CPACR_CPACR_CP_Msk            (0xf00000UL)              /*!< CP (Bitfield-Mask: 0x0f)                              */

