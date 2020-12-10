#include "core.h"

#define DBGMCU_BASE                 0xE0042000UL
#define DBGMCU                      ((DBGMCU_Type*)            DBGMCU_BASE)

/* =========================================================================================================================== */
/* ================                                          DBGMCU                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief MCU debug component (DBGMCU)
  */

typedef struct {                                /*!< (@ 0xE0042000) DBGMCU Structure                                           */
  
  union {
    __IM  uint32_t IDCODE;                      /*!< (@ 0x00000000) DBGMCU_IDCODE                                              */
    
    struct {
      __IM  uint32_t DEV_ID     : 12;           /*!< [11..0] Device identifier                                                 */
            uint32_t            : 4;
      __IM  uint32_t REV_ID     : 16;           /*!< [31..16] Revision identifie                                               */
    } IDCODE_b;
  } ;
} DBGMCU_Type;                                  /*!< Size = 4 (0x4)                                                            */


/* =========================================================================================================================== */
/* ================                                          DBGMCU                                           ================ */
/* =========================================================================================================================== */

/* ========================================================  IDCODE  ========================================================= */
#define DBGMCU_IDCODE_DEV_ID_Pos          (0UL)                     /*!< DEV_ID (Bit 0)                                        */
#define DBGMCU_IDCODE_DEV_ID_Msk          (0xfffUL)                 /*!< DEV_ID (Bitfield-Mask: 0xfff)                         */
#define DBGMCU_IDCODE_REV_ID_Pos          (16UL)                    /*!< REV_ID (Bit 16)                                       */
#define DBGMCU_IDCODE_REV_ID_Msk          (0xffff0000UL)            /*!< REV_ID (Bitfield-Mask: 0xffff)                        */
