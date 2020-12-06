#include "core.h"


#define IWDG_BASE                   0x40003000UL

#define IWDG                        ((IWDG_Type*)              IWDG_BASE)


/* =========================================================================================================================== */
/* ================                                           IWDG                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Independent watchdog (IWDG)
  */

typedef struct {                                /*!< (@ 0x40003000) IWDG Structure                                             */
  
  union {
    __OM  uint32_t KR;                          /*!< (@ 0x00000000) Key register                                               */
    
    struct {
      __OM  uint32_t KEY        : 16;           /*!< [15..0] Key value (write only, read 0000h)                                */
            uint32_t            : 16;
    } KR_b;
  } ;
  
  union {
    __IOM uint32_t PR;                          /*!< (@ 0x00000004) Prescaler register                                         */
    
    struct {
      __IOM uint32_t PR         : 3;            /*!< [2..0] Prescaler divider                                                  */
            uint32_t            : 29;
    } PR_b;
  } ;
  
  union {
    __IOM uint32_t RLR;                         /*!< (@ 0x00000008) Reload register                                            */
    
    struct {
      __IOM uint32_t RL         : 12;           /*!< [11..0] Watchdog counter reload value                                     */
            uint32_t            : 20;
    } RLR_b;
  } ;
  
  union {
    __IM  uint32_t SR;                          /*!< (@ 0x0000000C) Status register                                            */
    
    struct {
      __IM  uint32_t PVU        : 1;            /*!< [0..0] Watchdog prescaler value update                                    */
      __IM  uint32_t RVU        : 1;            /*!< [1..1] Watchdog counter reload value update                               */
            uint32_t            : 30;
    } SR_b;
  } ;
  
  union {
    __IOM uint32_t WINR;                        /*!< (@ 0x00000010) Window register                                            */
    
    struct {
      __IOM uint32_t WIN        : 12;           /*!< [11..0] Watchdog counter window value                                     */
            uint32_t            : 20;
    } WINR_b;
  } ;
} IWDG_Type;                                    /*!< Size = 20 (0x14)                                                          */



/* =========================================================================================================================== */
/* ================                                           IWDG                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  KR  =========================================================== */
#define IWDG_KR_KEY_Pos                   (0UL)                     /*!< KEY (Bit 0)                                           */
#define IWDG_KR_KEY_Msk                   (0xffffUL)                /*!< KEY (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  PR  =========================================================== */
#define IWDG_PR_PR_Pos                    (0UL)                     /*!< PR (Bit 0)                                            */
#define IWDG_PR_PR_Msk                    (0x7UL)                   /*!< PR (Bitfield-Mask: 0x07)                              */
/* ==========================================================  RLR  ========================================================== */
#define IWDG_RLR_RL_Pos                   (0UL)                     /*!< RL (Bit 0)                                            */
#define IWDG_RLR_RL_Msk                   (0xfffUL)                 /*!< RL (Bitfield-Mask: 0xfff)                             */
/* ==========================================================  SR  =========================================================== */
#define IWDG_SR_RVU_Pos                   (1UL)                     /*!< RVU (Bit 1)                                           */
#define IWDG_SR_RVU_Msk                   (0x2UL)                   /*!< RVU (Bitfield-Mask: 0x01)                             */
#define IWDG_SR_PVU_Pos                   (0UL)                     /*!< PVU (Bit 0)                                           */
#define IWDG_SR_PVU_Msk                   (0x1UL)                   /*!< PVU (Bitfield-Mask: 0x01)                             */
/* =========================================================  WINR  ========================================================== */
#define IWDG_WINR_WIN_Pos                 (0UL)                     /*!< WIN (Bit 0)                                           */
#define IWDG_WINR_WIN_Msk                 (0xfffUL)                 /*!< WIN (Bitfield-Mask: 0xfff)                            */
