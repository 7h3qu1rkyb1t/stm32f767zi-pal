#include "core.h"
 

#define CRC_BASE                    0x40023000UL

#define CRC                         ((volatile CRC_Type*)               CRC_BASE)


/* =========================================================================================================================== */
/* ================                                            CRC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Cryptographic processor (CRC)
  */

typedef struct {                                /*!< (@ 0x40023000) CRC Structure                                              */
  
  union {
    __IOM uint32_t DR;                          /*!< (@ 0x00000000) Data register                                              */
    
    struct {
      __IOM uint32_t DR         : 32;           /*!< [31..0] Data Register                                                     */
    } DR_b;
  } ;
  
  union {
    __IOM uint32_t IDR;                         /*!< (@ 0x00000004) Independent Data register                                  */
    
    struct {
      __IOM uint32_t IDR        : 8;            /*!< [7..0] Independent Data register                                          */
            uint32_t            : 24;
    } IDR_b;
  } ;
  
  union {
    __OM  uint32_t CR;                          /*!< (@ 0x00000008) Control register                                           */
    
    struct {
      __OM  uint32_t CR         : 1;            /*!< [0..0] Control regidter                                                   */
            uint32_t            : 31;
    } CR_b;
  } ;
  
  union {
    __IOM uint32_t INIT;                        /*!< (@ 0x0000000C) Initial CRC value                                          */
    
    struct {
      __IOM uint32_t CRC_INIT   : 32;           /*!< [31..0] Programmable initial CRC value                                    */
    } INIT_b;
  } ;
  
  union {
    __IOM uint32_t POL;                         /*!< (@ 0x00000010) CRC polynomial                                             */
    
    struct {
      __IOM uint32_t POL        : 32;           /*!< [31..0] Programmable polynomial                                           */
    } POL_b;
  } ;
} CRC_Type;                                     /*!< Size = 20 (0x14)                                                          */



/* =========================================================================================================================== */
/* ================                                            CRC                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  DR  =========================================================== */
#define CRC_DR_DR_Pos                     (0UL)                     /*!< DR (Bit 0)                                            */
#define CRC_DR_DR_Msk                     (0xffffffffUL)            /*!< DR (Bitfield-Mask: 0xffffffff)                        */
/* ==========================================================  IDR  ========================================================== */
#define CRC_IDR_IDR_Pos                   (0UL)                     /*!< IDR (Bit 0)                                           */
#define CRC_IDR_IDR_Msk                   (0xffUL)                  /*!< IDR (Bitfield-Mask: 0xff)                             */
/* ==========================================================  CR  =========================================================== */
#define CRC_CR_CR_Pos                     (0UL)                     /*!< CR (Bit 0)                                            */
#define CRC_CR_CR_Msk                     (0x1UL)                   /*!< CR (Bitfield-Mask: 0x01)                              */
/* =========================================================  INIT  ========================================================== */
#define CRC_INIT_CRC_INIT_Pos             (0UL)                     /*!< CRC_INIT (Bit 0)                                      */
#define CRC_INIT_CRC_INIT_Msk             (0xffffffffUL)            /*!< CRC_INIT (Bitfield-Mask: 0xffffffff)                  */
/* ==========================================================  POL  ========================================================== */
#define CRC_POL_POL_Pos                   (0UL)                     /*!< POL (Bit 0)                                           */
#define CRC_POL_POL_Msk                   (0xffffffffUL)            /*!< POL (Bitfield-Mask: 0xffffffff)                       */
