#include "core.h"

#define MPU_BASE                    0xE000ED90UL
#define MPU                         ((volatile MPU_Type*)               MPU_BASE)

/* =========================================================================================================================== */
/* ================                                            MPU                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Memory protection unit (MPU)
  */

typedef struct {                                /*!< (@ 0xE000ED90) MPU Structure                                              */
  
  union {
    __IM  uint32_t MPU_TYPER;                   /*!< (@ 0x00000000) MPU type register                                          */
    
    struct {
      __IM  uint32_t SEPARATE   : 1;            /*!< [0..0] Separate flag                                                      */
            uint32_t            : 7;
      __IM  uint32_t DREGION    : 8;            /*!< [15..8] Number of MPU data regions                                        */
      __IM  uint32_t IREGION    : 8;            /*!< [23..16] Number of MPU instruction regions                                */
            uint32_t            : 8;
    } MPU_TYPER_b;
  } ;
  
  union {
    __IM  uint32_t MPU_CTRL;                    /*!< (@ 0x00000004) MPU control register                                       */
    
    struct {
      __IM  uint32_t ENABLE     : 1;            /*!< [0..0] Enables the MPU                                                    */
      __IM  uint32_t HFNMIENA   : 1;            /*!< [1..1] Enables the operation of MPU during hard fault                     */
      __IM  uint32_t PRIVDEFENA : 1;            /*!< [2..2] Enable priviliged software access to default memory map            */
            uint32_t            : 29;
    } MPU_CTRL_b;
  } ;
  
  union {
    __IOM uint32_t MPU_RNR;                     /*!< (@ 0x00000008) MPU region number register                                 */
    
    struct {
      __IOM uint32_t REGION     : 8;            /*!< [7..0] MPU region                                                         */
            uint32_t            : 24;
    } MPU_RNR_b;
  } ;
  
  union {
    __IOM uint32_t MPU_RBAR;                    /*!< (@ 0x0000000C) MPU region base address register                           */
    
    struct {
      __IOM uint32_t REGION     : 4;            /*!< [3..0] MPU region field                                                   */
      __IOM uint32_t VALID      : 1;            /*!< [4..4] MPU region number valid                                            */
      __IOM uint32_t ADDR       : 27;           /*!< [31..5] Region base address field                                         */
    } MPU_RBAR_b;
  } ;
  
  union {
    __IOM uint32_t MPU_RASR;                    /*!< (@ 0x00000010) MPU region attribute and size register                     */
    
    struct {
      __IOM uint32_t ENABLE     : 1;            /*!< [0..0] Region enable bit.                                                 */
      __IOM uint32_t SIZE       : 5;            /*!< [5..1] Size of the MPU protection region                                  */
            uint32_t            : 2;
      __IOM uint32_t SRD        : 8;            /*!< [15..8] Subregion disable bits                                            */
      __IOM uint32_t B          : 1;            /*!< [16..16] memory attribute                                                 */
      __IOM uint32_t C          : 1;            /*!< [17..17] memory attribute                                                 */
      __IOM uint32_t S          : 1;            /*!< [18..18] Shareable memory attribute                                       */
      __IOM uint32_t TEX        : 3;            /*!< [21..19] memory attribute                                                 */
            uint32_t            : 2;
      __IOM uint32_t AP         : 3;            /*!< [26..24] Access permission                                                */
            uint32_t            : 1;
      __IOM uint32_t XN         : 1;            /*!< [28..28] Instruction access disable bit                                   */
            uint32_t            : 3;
    } MPU_RASR_b;
  } ;
} MPU_Type;                                     /*!< Size = 20 (0x14)                                                          */



/* =========================================================================================================================== */
/* ================                                            MPU                                            ================ */
/* =========================================================================================================================== */

/* =======================================================  MPU_TYPER  ======================================================= */
#define MPU_MPU_TYPER_SEPARATE_Pos        (0UL)                     /*!< SEPARATE (Bit 0)                                      */
#define MPU_MPU_TYPER_SEPARATE_Msk        (0x1UL)                   /*!< SEPARATE (Bitfield-Mask: 0x01)                        */
#define MPU_MPU_TYPER_DREGION_Pos         (8UL)                     /*!< DREGION (Bit 8)                                       */
#define MPU_MPU_TYPER_DREGION_Msk         (0xff00UL)                /*!< DREGION (Bitfield-Mask: 0xff)                         */
#define MPU_MPU_TYPER_IREGION_Pos         (16UL)                    /*!< IREGION (Bit 16)                                      */
#define MPU_MPU_TYPER_IREGION_Msk         (0xff0000UL)              /*!< IREGION (Bitfield-Mask: 0xff)                         */
/* =======================================================  MPU_CTRL  ======================================================== */
#define MPU_MPU_CTRL_ENABLE_Pos           (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define MPU_MPU_CTRL_ENABLE_Msk           (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define MPU_MPU_CTRL_HFNMIENA_Pos         (1UL)                     /*!< HFNMIENA (Bit 1)                                      */
#define MPU_MPU_CTRL_HFNMIENA_Msk         (0x2UL)                   /*!< HFNMIENA (Bitfield-Mask: 0x01)                        */
#define MPU_MPU_CTRL_PRIVDEFENA_Pos       (2UL)                     /*!< PRIVDEFENA (Bit 2)                                    */
#define MPU_MPU_CTRL_PRIVDEFENA_Msk       (0x4UL)                   /*!< PRIVDEFENA (Bitfield-Mask: 0x01)                      */
/* ========================================================  MPU_RNR  ======================================================== */
#define MPU_MPU_RNR_REGION_Pos            (0UL)                     /*!< REGION (Bit 0)                                        */
#define MPU_MPU_RNR_REGION_Msk            (0xffUL)                  /*!< REGION (Bitfield-Mask: 0xff)                          */
/* =======================================================  MPU_RBAR  ======================================================== */
#define MPU_MPU_RBAR_REGION_Pos           (0UL)                     /*!< REGION (Bit 0)                                        */
#define MPU_MPU_RBAR_REGION_Msk           (0xfUL)                   /*!< REGION (Bitfield-Mask: 0x0f)                          */
#define MPU_MPU_RBAR_VALID_Pos            (4UL)                     /*!< VALID (Bit 4)                                         */
#define MPU_MPU_RBAR_VALID_Msk            (0x10UL)                  /*!< VALID (Bitfield-Mask: 0x01)                           */
#define MPU_MPU_RBAR_ADDR_Pos             (5UL)                     /*!< ADDR (Bit 5)                                          */
#define MPU_MPU_RBAR_ADDR_Msk             (0xffffffe0UL)            /*!< ADDR (Bitfield-Mask: 0x7ffffff)                       */
/* =======================================================  MPU_RASR  ======================================================== */
#define MPU_MPU_RASR_ENABLE_Pos           (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define MPU_MPU_RASR_ENABLE_Msk           (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define MPU_MPU_RASR_SIZE_Pos             (1UL)                     /*!< SIZE (Bit 1)                                          */
#define MPU_MPU_RASR_SIZE_Msk             (0x3eUL)                  /*!< SIZE (Bitfield-Mask: 0x1f)                            */
#define MPU_MPU_RASR_SRD_Pos              (8UL)                     /*!< SRD (Bit 8)                                           */
#define MPU_MPU_RASR_SRD_Msk              (0xff00UL)                /*!< SRD (Bitfield-Mask: 0xff)                             */
#define MPU_MPU_RASR_B_Pos                (16UL)                    /*!< B (Bit 16)                                            */
#define MPU_MPU_RASR_B_Msk                (0x10000UL)               /*!< B (Bitfield-Mask: 0x01)                               */
#define MPU_MPU_RASR_C_Pos                (17UL)                    /*!< C (Bit 17)                                            */
#define MPU_MPU_RASR_C_Msk                (0x20000UL)               /*!< C (Bitfield-Mask: 0x01)                               */
#define MPU_MPU_RASR_S_Pos                (18UL)                    /*!< S (Bit 18)                                            */
#define MPU_MPU_RASR_S_Msk                (0x40000UL)               /*!< S (Bitfield-Mask: 0x01)                               */
#define MPU_MPU_RASR_TEX_Pos              (19UL)                    /*!< TEX (Bit 19)                                          */
#define MPU_MPU_RASR_TEX_Msk              (0x380000UL)              /*!< TEX (Bitfield-Mask: 0x07)                             */
#define MPU_MPU_RASR_AP_Pos               (24UL)                    /*!< AP (Bit 24)                                           */
#define MPU_MPU_RASR_AP_Msk               (0x7000000UL)             /*!< AP (Bitfield-Mask: 0x07)                              */
#define MPU_MPU_RASR_XN_Pos               (28UL)                    /*!< XN (Bit 28)                                           */
#define MPU_MPU_RASR_XN_Msk               (0x10000000UL)            /*!< XN (Bitfield-Mask: 0x01)                              */

