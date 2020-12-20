#include "core.h"


#define RNG_BASE                    0x50060800UL

#define RNG                         ((RNG_Type*)               RNG_BASE)


/* =========================================================================================================================== */
/* ================                                            RNG                                            ================ */
/* =========================================================================================================================== */

/**
  * @brief Random number generator (RNG)
  */

typedef struct {                                /*!< (@ 0x50060800) RNG Structure                                              */
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000000) control register                                           */
    
    struct {
            uint32_t            : 2;
      __IOM uint32_t RNGEN      : 1;            /*!< [2..2] Random number generator enable                                     */
      __IOM uint32_t IE         : 1;            /*!< [3..3] Interrupt enable                                                   */
            uint32_t            : 28;
    } CR_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000004) status register                                            */
    
    struct {
      __IM  uint32_t DRDY       : 1;            /*!< [0..0] Data ready                                                         */
      __IM  uint32_t CECS       : 1;            /*!< [1..1] Clock error current status                                         */
      __IM  uint32_t SECS       : 1;            /*!< [2..2] Seed error current status                                          */
            uint32_t            : 2;
      __IOM uint32_t CEIS       : 1;            /*!< [5..5] Clock error interrupt status                                       */
      __IOM uint32_t SEIS       : 1;            /*!< [6..6] Seed error interrupt status                                        */
            uint32_t            : 25;
    } SR_b;
  } ;
  
  union {
    __IM  uint32_t DR;                          /*!< (@ 0x00000008) data register                                              */
    
    struct {
      __IM  uint32_t RNDATA     : 32;           /*!< [31..0] Random data                                                       */
    } DR_b;
  } ;
} RNG_Type;                                     /*!< Size = 12 (0xc)                                                           */



/* =========================================================================================================================== */
/* ================                                            RNG                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
#define RNG_CR_IE_Pos                     (3UL)                     /*!< IE (Bit 3)                                            */
#define RNG_CR_IE_Msk                     (0x8UL)                   /*!< IE (Bitfield-Mask: 0x01)                              */
#define RNG_CR_RNGEN_Pos                  (2UL)                     /*!< RNGEN (Bit 2)                                         */
#define RNG_CR_RNGEN_Msk                  (0x4UL)                   /*!< RNGEN (Bitfield-Mask: 0x01)                           */
/* ==========================================================  SR  =========================================================== */
#define RNG_SR_SEIS_Pos                   (6UL)                     /*!< SEIS (Bit 6)                                          */
#define RNG_SR_SEIS_Msk                   (0x40UL)                  /*!< SEIS (Bitfield-Mask: 0x01)                            */
#define RNG_SR_CEIS_Pos                   (5UL)                     /*!< CEIS (Bit 5)                                          */
#define RNG_SR_CEIS_Msk                   (0x20UL)                  /*!< CEIS (Bitfield-Mask: 0x01)                            */
#define RNG_SR_SECS_Pos                   (2UL)                     /*!< SECS (Bit 2)                                          */
#define RNG_SR_SECS_Msk                   (0x4UL)                   /*!< SECS (Bitfield-Mask: 0x01)                            */
#define RNG_SR_CECS_Pos                   (1UL)                     /*!< CECS (Bit 1)                                          */
#define RNG_SR_CECS_Msk                   (0x2UL)                   /*!< CECS (Bitfield-Mask: 0x01)                            */
#define RNG_SR_DRDY_Pos                   (0UL)                     /*!< DRDY (Bit 0)                                          */
#define RNG_SR_DRDY_Msk                   (0x1UL)                   /*!< DRDY (Bitfield-Mask: 0x01)                            */
/* ==========================================================  DR  =========================================================== */
#define RNG_DR_RNDATA_Pos                 (0UL)                     /*!< RNDATA (Bit 0)                                        */
#define RNG_DR_RNDATA_Msk                 (0xffffffffUL)            /*!< RNDATA (Bitfield-Mask: 0xffffffff)                    */

