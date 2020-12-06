#include "core.h"


#define SYSCFG_BASE                 0x40013800UL

#define SYSCFG                      ((SYSCFG_Type*)            SYSCFG_BASE)


/* =========================================================================================================================== */
/* ================                                          SYSCFG                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief System configuration controller (SYSCFG)
  */

typedef struct {                                /*!< (@ 0x40013800) SYSCFG Structure                                           */
  
  union {
    __IOM uint32_t MEMRM;                       /*!< (@ 0x00000000) memory remap register                                      */
    
    struct {
      __IOM uint32_t MEM_MODE   : 3;            /*!< [2..0] Memory mapping selection                                           */
            uint32_t            : 5;
      __IOM uint32_t FB_MODE    : 1;            /*!< [8..8] Flash bank mode selection                                          */
            uint32_t            : 1;
      __IOM uint32_t SWP_FMC    : 2;            /*!< [11..10] FMC memory mapping swap                                          */
            uint32_t            : 20;
    } MEMRM_b;
  } ;
  
  union {
    __IOM uint32_t PMC;                         /*!< (@ 0x00000004) peripheral mode configuration register                     */
    
    struct {
            uint32_t            : 16;
      __IOM uint32_t ADC1DC2    : 1;            /*!< [16..16] ADC1DC2                                                          */
      __IOM uint32_t ADC2DC2    : 1;            /*!< [17..17] ADC2DC2                                                          */
      __IOM uint32_t ADC3DC2    : 1;            /*!< [18..18] ADC3DC2                                                          */
            uint32_t            : 4;
      __IOM uint32_t MII_RMII_SEL : 1;          /*!< [23..23] Ethernet PHY interface selection                                 */
            uint32_t            : 8;
    } PMC_b;
  } ;
  
  union {
    __IOM uint32_t EXTICR1;                     /*!< (@ 0x00000008) external interrupt configuration register 1                */
    
    struct {
      __IOM uint32_t EXTI0      : 4;            /*!< [3..0] EXTI x configuration (x = 0 to 3)                                  */
      __IOM uint32_t EXTI1      : 4;            /*!< [7..4] EXTI x configuration (x = 0 to 3)                                  */
      __IOM uint32_t EXTI2      : 4;            /*!< [11..8] EXTI x configuration (x = 0 to 3)                                 */
      __IOM uint32_t EXTI3      : 4;            /*!< [15..12] EXTI x configuration (x = 0 to 3)                                */
            uint32_t            : 16;
    } EXTICR1_b;
  } ;
  
  union {
    __IOM uint32_t EXTICR2;                     /*!< (@ 0x0000000C) external interrupt configuration register 2                */
    
    struct {
      __IOM uint32_t EXTI4      : 4;            /*!< [3..0] EXTI x configuration (x = 4 to 7)                                  */
      __IOM uint32_t EXTI5      : 4;            /*!< [7..4] EXTI x configuration (x = 4 to 7)                                  */
      __IOM uint32_t EXTI6      : 4;            /*!< [11..8] EXTI x configuration (x = 4 to 7)                                 */
      __IOM uint32_t EXTI7      : 4;            /*!< [15..12] EXTI x configuration (x = 4 to 7)                                */
            uint32_t            : 16;
    } EXTICR2_b;
  } ;
  
  union {
    __IOM uint32_t EXTICR3;                     /*!< (@ 0x00000010) external interrupt configuration register 3                */
    
    struct {
      __IOM uint32_t EXTI8      : 4;            /*!< [3..0] EXTI x configuration (x = 8 to 11)                                 */
      __IOM uint32_t EXTI9      : 4;            /*!< [7..4] EXTI x configuration (x = 8 to 11)                                 */
      __IOM uint32_t EXTI10     : 4;            /*!< [11..8] EXTI10                                                            */
      __IOM uint32_t EXTI11     : 4;            /*!< [15..12] EXTI x configuration (x = 8 to 11)                               */
            uint32_t            : 16;
    } EXTICR3_b;
  } ;
  
  union {
    __IOM uint32_t EXTICR4;                     /*!< (@ 0x00000014) external interrupt configuration register 4                */
    
    struct {
      __IOM uint32_t EXTI12     : 4;            /*!< [3..0] EXTI x configuration (x = 12 to 15)                                */
      __IOM uint32_t EXTI13     : 4;            /*!< [7..4] EXTI x configuration (x = 12 to 15)                                */
      __IOM uint32_t EXTI14     : 4;            /*!< [11..8] EXTI x configuration (x = 12 to 15)                               */
      __IOM uint32_t EXTI15     : 4;            /*!< [15..12] EXTI x configuration (x = 12 to 15)                              */
            uint32_t            : 16;
    } EXTICR4_b;
  } ;
  __IM  uint32_t  RESERVED[2];
  
  union {
    __IM  uint32_t CMPCR;                       /*!< (@ 0x00000020) Compensation cell control register                         */
    
    struct {
      __IM  uint32_t CMP_PD     : 1;            /*!< [0..0] Compensation cell power-down                                       */
            uint32_t            : 7;
      __IM  uint32_t READY      : 1;            /*!< [8..8] READY                                                              */
            uint32_t            : 23;
    } CMPCR_b;
  } ;
} SYSCFG_Type;                                  /*!< Size = 36 (0x24)                                                          */



/* =========================================================================================================================== */
/* ================                                          SYSCFG                                           ================ */
/* =========================================================================================================================== */

/* =========================================================  MEMRM  ========================================================= */
#define SYSCFG_MEMRM_MEM_MODE_Pos         (0UL)                     /*!< MEM_MODE (Bit 0)                                      */
#define SYSCFG_MEMRM_MEM_MODE_Msk         (0x7UL)                   /*!< MEM_MODE (Bitfield-Mask: 0x07)                        */
#define SYSCFG_MEMRM_FB_MODE_Pos          (8UL)                     /*!< FB_MODE (Bit 8)                                       */
#define SYSCFG_MEMRM_FB_MODE_Msk          (0x100UL)                 /*!< FB_MODE (Bitfield-Mask: 0x01)                         */
#define SYSCFG_MEMRM_SWP_FMC_Pos          (10UL)                    /*!< SWP_FMC (Bit 10)                                      */
#define SYSCFG_MEMRM_SWP_FMC_Msk          (0xc00UL)                 /*!< SWP_FMC (Bitfield-Mask: 0x03)                         */
/* ==========================================================  PMC  ========================================================== */
#define SYSCFG_PMC_MII_RMII_SEL_Pos       (23UL)                    /*!< MII_RMII_SEL (Bit 23)                                 */
#define SYSCFG_PMC_MII_RMII_SEL_Msk       (0x800000UL)              /*!< MII_RMII_SEL (Bitfield-Mask: 0x01)                    */
#define SYSCFG_PMC_ADC1DC2_Pos            (16UL)                    /*!< ADC1DC2 (Bit 16)                                      */
#define SYSCFG_PMC_ADC1DC2_Msk            (0x10000UL)               /*!< ADC1DC2 (Bitfield-Mask: 0x01)                         */
#define SYSCFG_PMC_ADC2DC2_Pos            (17UL)                    /*!< ADC2DC2 (Bit 17)                                      */
#define SYSCFG_PMC_ADC2DC2_Msk            (0x20000UL)               /*!< ADC2DC2 (Bitfield-Mask: 0x01)                         */
#define SYSCFG_PMC_ADC3DC2_Pos            (18UL)                    /*!< ADC3DC2 (Bit 18)                                      */
#define SYSCFG_PMC_ADC3DC2_Msk            (0x40000UL)               /*!< ADC3DC2 (Bitfield-Mask: 0x01)                         */
/* ========================================================  EXTICR1  ======================================================== */
#define SYSCFG_EXTICR1_EXTI3_Pos          (12UL)                    /*!< EXTI3 (Bit 12)                                        */
#define SYSCFG_EXTICR1_EXTI3_Msk          (0xf000UL)                /*!< EXTI3 (Bitfield-Mask: 0x0f)                           */
#define SYSCFG_EXTICR1_EXTI2_Pos          (8UL)                     /*!< EXTI2 (Bit 8)                                         */
#define SYSCFG_EXTICR1_EXTI2_Msk          (0xf00UL)                 /*!< EXTI2 (Bitfield-Mask: 0x0f)                           */
#define SYSCFG_EXTICR1_EXTI1_Pos          (4UL)                     /*!< EXTI1 (Bit 4)                                         */
#define SYSCFG_EXTICR1_EXTI1_Msk          (0xf0UL)                  /*!< EXTI1 (Bitfield-Mask: 0x0f)                           */
#define SYSCFG_EXTICR1_EXTI0_Pos          (0UL)                     /*!< EXTI0 (Bit 0)                                         */
#define SYSCFG_EXTICR1_EXTI0_Msk          (0xfUL)                   /*!< EXTI0 (Bitfield-Mask: 0x0f)                           */
/* ========================================================  EXTICR2  ======================================================== */
#define SYSCFG_EXTICR2_EXTI7_Pos          (12UL)                    /*!< EXTI7 (Bit 12)                                        */
#define SYSCFG_EXTICR2_EXTI7_Msk          (0xf000UL)                /*!< EXTI7 (Bitfield-Mask: 0x0f)                           */
#define SYSCFG_EXTICR2_EXTI6_Pos          (8UL)                     /*!< EXTI6 (Bit 8)                                         */
#define SYSCFG_EXTICR2_EXTI6_Msk          (0xf00UL)                 /*!< EXTI6 (Bitfield-Mask: 0x0f)                           */
#define SYSCFG_EXTICR2_EXTI5_Pos          (4UL)                     /*!< EXTI5 (Bit 4)                                         */
#define SYSCFG_EXTICR2_EXTI5_Msk          (0xf0UL)                  /*!< EXTI5 (Bitfield-Mask: 0x0f)                           */
#define SYSCFG_EXTICR2_EXTI4_Pos          (0UL)                     /*!< EXTI4 (Bit 0)                                         */
#define SYSCFG_EXTICR2_EXTI4_Msk          (0xfUL)                   /*!< EXTI4 (Bitfield-Mask: 0x0f)                           */
/* ========================================================  EXTICR3  ======================================================== */
#define SYSCFG_EXTICR3_EXTI11_Pos         (12UL)                    /*!< EXTI11 (Bit 12)                                       */
#define SYSCFG_EXTICR3_EXTI11_Msk         (0xf000UL)                /*!< EXTI11 (Bitfield-Mask: 0x0f)                          */
#define SYSCFG_EXTICR3_EXTI10_Pos         (8UL)                     /*!< EXTI10 (Bit 8)                                        */
#define SYSCFG_EXTICR3_EXTI10_Msk         (0xf00UL)                 /*!< EXTI10 (Bitfield-Mask: 0x0f)                          */
#define SYSCFG_EXTICR3_EXTI9_Pos          (4UL)                     /*!< EXTI9 (Bit 4)                                         */
#define SYSCFG_EXTICR3_EXTI9_Msk          (0xf0UL)                  /*!< EXTI9 (Bitfield-Mask: 0x0f)                           */
#define SYSCFG_EXTICR3_EXTI8_Pos          (0UL)                     /*!< EXTI8 (Bit 0)                                         */
#define SYSCFG_EXTICR3_EXTI8_Msk          (0xfUL)                   /*!< EXTI8 (Bitfield-Mask: 0x0f)                           */
/* ========================================================  EXTICR4  ======================================================== */
#define SYSCFG_EXTICR4_EXTI15_Pos         (12UL)                    /*!< EXTI15 (Bit 12)                                       */
#define SYSCFG_EXTICR4_EXTI15_Msk         (0xf000UL)                /*!< EXTI15 (Bitfield-Mask: 0x0f)                          */
#define SYSCFG_EXTICR4_EXTI14_Pos         (8UL)                     /*!< EXTI14 (Bit 8)                                        */
#define SYSCFG_EXTICR4_EXTI14_Msk         (0xf00UL)                 /*!< EXTI14 (Bitfield-Mask: 0x0f)                          */
#define SYSCFG_EXTICR4_EXTI13_Pos         (4UL)                     /*!< EXTI13 (Bit 4)                                        */
#define SYSCFG_EXTICR4_EXTI13_Msk         (0xf0UL)                  /*!< EXTI13 (Bitfield-Mask: 0x0f)                          */
#define SYSCFG_EXTICR4_EXTI12_Pos         (0UL)                     /*!< EXTI12 (Bit 0)                                        */
#define SYSCFG_EXTICR4_EXTI12_Msk         (0xfUL)                   /*!< EXTI12 (Bitfield-Mask: 0x0f)                          */
/* =========================================================  CMPCR  ========================================================= */
#define SYSCFG_CMPCR_READY_Pos            (8UL)                     /*!< READY (Bit 8)                                         */
#define SYSCFG_CMPCR_READY_Msk            (0x100UL)                 /*!< READY (Bitfield-Mask: 0x01)                           */
#define SYSCFG_CMPCR_CMP_PD_Pos           (0UL)                     /*!< CMP_PD (Bit 0)                                        */
#define SYSCFG_CMPCR_CMP_PD_Msk           (0x1UL)                   /*!< CMP_PD (Bitfield-Mask: 0x01)                          */
