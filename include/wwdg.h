#include "core.h"

#define WWDG_BASE                   0x40002C00UL

#define WWDG                        ((WWDG_Type*)              WWDG_BASE)


/* =========================================================================================================================== */
/* ================                                           WWDG                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Window watchdog (WWDG)
  */

typedef struct {                                /*!< (@ 0x40002C00) WWDG Structure                                             */
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000000) Control register                                           */
    
    struct {
      __IOM uint32_t T          : 7;            /*!< [6..0] 7-bit counter (MSB to LSB)                                         */
      __IOM uint32_t WDGA       : 1;            /*!< [7..7] Activation bit                                                     */
            uint32_t            : 24;
    } CR_b;
  } ;
  
  union {
    __IOM uint32_t CFR;                         /*!< (@ 0x00000004) Configuration register                                     */
    
    struct {
      __IOM uint32_t W          : 7;            /*!< [6..0] 7-bit window value                                                 */
      __IOM uint32_t WDGTB0     : 1;            /*!< [7..7] Timer base                                                         */
      __IOM uint32_t WDGTB1     : 1;            /*!< [8..8] Timer base                                                         */
      __IOM uint32_t EWI        : 1;            /*!< [9..9] Early wakeup interrupt                                             */
            uint32_t            : 22;
    } CFR_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000008) Status register                                            */
    
    struct {
      __IOM uint32_t EWIF       : 1;            /*!< [0..0] Early wakeup interrupt flag                                        */
            uint32_t            : 31;
    } SR_b;
  } ;
} WWDG_Type;                                    /*!< Size = 12 (0xc)                                                           */



/* =========================================================================================================================== */
/* ================                                           WWDG                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
#define WWDG_CR_WDGA_Pos                  (7UL)                     /*!< WDGA (Bit 7)                                          */
#define WWDG_CR_WDGA_Msk                  (0x80UL)                  /*!< WDGA (Bitfield-Mask: 0x01)                            */
#define WWDG_CR_T_Pos                     (0UL)                     /*!< T (Bit 0)                                             */
#define WWDG_CR_T_Msk                     (0x7fUL)                  /*!< T (Bitfield-Mask: 0x7f)                               */
/* ==========================================================  CFR  ========================================================== */
#define WWDG_CFR_EWI_Pos                  (9UL)                     /*!< EWI (Bit 9)                                           */
#define WWDG_CFR_EWI_Msk                  (0x200UL)                 /*!< EWI (Bitfield-Mask: 0x01)                             */
#define WWDG_CFR_WDGTB1_Pos               (8UL)                     /*!< WDGTB1 (Bit 8)                                        */
#define WWDG_CFR_WDGTB1_Msk               (0x100UL)                 /*!< WDGTB1 (Bitfield-Mask: 0x01)                          */
#define WWDG_CFR_WDGTB0_Pos               (7UL)                     /*!< WDGTB0 (Bit 7)                                        */
#define WWDG_CFR_WDGTB0_Msk               (0x80UL)                  /*!< WDGTB0 (Bitfield-Mask: 0x01)                          */
#define WWDG_CFR_W_Pos                    (0UL)                     /*!< W (Bit 0)                                             */
#define WWDG_CFR_W_Msk                    (0x7fUL)                  /*!< W (Bitfield-Mask: 0x7f)                               */
/* ==========================================================  SR  =========================================================== */
#define WWDG_SR_EWIF_Pos                  (0UL)                     /*!< EWIF (Bit 0)                                          */
#define WWDG_SR_EWIF_Msk                  (0x1UL)                   /*!< EWIF (Bitfield-Mask: 0x01)                            */
