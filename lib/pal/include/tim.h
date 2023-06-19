#include "core.h"

#define LPTIM1_BASE                 0x40002400UL
#define TIM1_BASE                   0x40010000UL
#define TIM8_BASE                   0x40010400UL
#define TIM2_BASE                   0x40000000UL
#define TIM3_BASE                   0x40000400UL
#define TIM4_BASE                   0x40000800UL
#define TIM5_BASE                   0x40000C00UL
#define TIM9_BASE                   0x40014000UL
#define TIM12_BASE                  0x40001800UL
#define TIM10_BASE                  0x40014400UL
#define TIM11_BASE                  0x40014800UL
#define TIM13_BASE                  0x40001C00UL
#define TIM14_BASE                  0x40002000UL
#define TIM6_BASE                   0x40001000UL
#define TIM7_BASE                   0x40001400UL

#define TIM1                        ((volatile TIM1_Type*)              TIM1_BASE)
#define TIM8                        ((volatile TIM1_Type*)              TIM8_BASE)
#define TIM2                        ((volatile TIM2_Type*)              TIM2_BASE)
#define TIM3                        ((volatile TIM3_Type*)              TIM3_BASE)
#define TIM4                        ((volatile TIM4_Type*)              TIM4_BASE)
#define TIM5                        ((volatile TIM4_Type*)              TIM5_BASE)
#define TIM9                        ((volatile TIM9_Type*)              TIM9_BASE)
#define TIM12                       ((volatile TIM9_Type*)              TIM12_BASE)
#define TIM10                       ((volatile TIM10_Type*)             TIM10_BASE)
#define TIM11                       ((volatile TIM10_Type*)             TIM11_BASE)
#define TIM13                       ((volatile TIM10_Type*)             TIM13_BASE)
#define TIM14                       ((volatile TIM10_Type*)             TIM14_BASE)
#define TIM6                        ((volatile TIM6_Type*)              TIM6_BASE)
#define TIM7                        ((volatile TIM6_Type*)              TIM7_BASE)
#define LPTIM1                      ((volatile LPTIM1_Type*)            LPTIM1_BASE)


/* =========================================================================================================================== */
/* ================                                          LPTIM1                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief Low power timer (LPTIM1)
  */

typedef struct {                                /*!< (@ 0x40002400) LPTIM1 Structure                                           */
  
  union {
    __IM  uint32_t ISR;                         /*!< (@ 0x00000000) Interrupt and Status Register                              */
    
    struct {
      __IM  uint32_t CMPM       : 1;            /*!< [0..0] Compare match                                                      */
      __IM  uint32_t ARRM       : 1;            /*!< [1..1] Autoreload match                                                   */
      __IM  uint32_t EXTTRIG    : 1;            /*!< [2..2] External trigger edge event                                        */
      __IM  uint32_t CMPOK      : 1;            /*!< [3..3] Compare register update OK                                         */
      __IM  uint32_t ARROK      : 1;            /*!< [4..4] Autoreload register update OK                                      */
      __IM  uint32_t UP         : 1;            /*!< [5..5] Counter direction change down to up                                */
      __IM  uint32_t DOWN       : 1;            /*!< [6..6] Counter direction change up to down                                */
            uint32_t            : 25;
    } ISR_b;
  } ;
  
  union {
    __OM  uint32_t ICR;                         /*!< (@ 0x00000004) Interrupt Clear Register                                   */
    
    struct {
      __OM  uint32_t CMPMCF     : 1;            /*!< [0..0] compare match Clear Flag                                           */
      __OM  uint32_t ARRMCF     : 1;            /*!< [1..1] Autoreload match Clear Flag                                        */
      __OM  uint32_t EXTTRIGCF  : 1;            /*!< [2..2] External trigger valid edge Clear Flag                             */
      __OM  uint32_t CMPOKCF    : 1;            /*!< [3..3] Compare register update OK Clear Flag                              */
      __OM  uint32_t ARROKCF    : 1;            /*!< [4..4] Autoreload register update OK Clear Flag                           */
      __OM  uint32_t UPCF       : 1;            /*!< [5..5] Direction change to UP Clear Flag                                  */
      __OM  uint32_t DOWNCF     : 1;            /*!< [6..6] Direction change to down Clear Flag                                */
            uint32_t            : 25;
    } ICR_b;
  } ;
  
  union {
    __IOM uint32_t IER;                         /*!< (@ 0x00000008) Interrupt Enable Register                                  */
    
    struct {
      __IOM uint32_t CMPMIE     : 1;            /*!< [0..0] Compare match Interrupt Enable                                     */
      __IOM uint32_t ARRMIE     : 1;            /*!< [1..1] Autoreload match Interrupt Enable                                  */
      __IOM uint32_t EXTTRIGIE  : 1;            /*!< [2..2] External trigger valid edge Interrupt Enable                       */
      __IOM uint32_t CMPOKIE    : 1;            /*!< [3..3] Compare register update OK Interrupt Enable                        */
      __IOM uint32_t ARROKIE    : 1;            /*!< [4..4] Autoreload register update OK Interrupt Enable                     */
      __IOM uint32_t UPIE       : 1;            /*!< [5..5] Direction change to UP Interrupt Enable                            */
      __IOM uint32_t DOWNIE     : 1;            /*!< [6..6] Direction change to down Interrupt Enable                          */
            uint32_t            : 25;
    } IER_b;
  } ;
  
  union {
    __IOM uint32_t CFGR;                        /*!< (@ 0x0000000C) Configuration Register                                     */
    
    struct {
      __IOM uint32_t CKSEL      : 1;            /*!< [0..0] Clock selector                                                     */
      __IOM uint32_t CKPOL      : 2;            /*!< [2..1] Clock Polarity                                                     */
      __IOM uint32_t CKFLT      : 2;            /*!< [4..3] Configurable digital filter for external clock                     */
            uint32_t            : 1;
      __IOM uint32_t TRGFLT     : 2;            /*!< [7..6] Configurable digital filter for trigger                            */
            uint32_t            : 1;
      __IOM uint32_t PRESC      : 3;            /*!< [11..9] Clock prescaler                                                   */
            uint32_t            : 1;
      __IOM uint32_t TRIGSEL    : 3;            /*!< [15..13] Trigger selector                                                 */
            uint32_t            : 1;
      __IOM uint32_t TRIGEN     : 2;            /*!< [18..17] Trigger enable and polarity                                      */
      __IOM uint32_t TIMOUT     : 1;            /*!< [19..19] Timeout enable                                                   */
      __IOM uint32_t WAVE       : 1;            /*!< [20..20] Waveform shape                                                   */
      __IOM uint32_t WAVPOL     : 1;            /*!< [21..21] Waveform shape polarity                                          */
      __IOM uint32_t PRELOAD    : 1;            /*!< [22..22] Registers update mode                                            */
      __IOM uint32_t COUNTMODE  : 1;            /*!< [23..23] counter mode enabled                                             */
      __IOM uint32_t ENC        : 1;            /*!< [24..24] Encoder mode enable                                              */
            uint32_t            : 7;
    } CFGR_b;
  } ;
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000010) Control Register                                           */
    
    struct {
      __IOM uint32_t ENABLE     : 1;            /*!< [0..0] LPTIM Enable                                                       */
      __IOM uint32_t SNGSTRT    : 1;            /*!< [1..1] LPTIM start in single mode                                         */
      __IOM uint32_t CNTSTRT    : 1;            /*!< [2..2] Timer start in continuous mode                                     */
            uint32_t            : 29;
    } CR_b;
  } ;
  
  union {
    __IOM uint32_t CMP;                         /*!< (@ 0x00000014) Compare Register                                           */
    
    struct {
      __IOM uint32_t CMP        : 16;           /*!< [15..0] Compare value                                                     */
            uint32_t            : 16;
    } CMP_b;
  } ;
  
  union {
    __IOM uint32_t ARR;                         /*!< (@ 0x00000018) Autoreload Register                                        */
    
    struct {
      __IOM uint32_t ARR        : 16;           /*!< [15..0] Auto reload value                                                 */
            uint32_t            : 16;
    } ARR_b;
  } ;
  
  union {
    __IM  uint32_t CNT;                         /*!< (@ 0x0000001C) Counter Register                                           */
    
    struct {
      __IM  uint32_t CNT        : 16;           /*!< [15..0] Counter value                                                     */
            uint32_t            : 16;
    } CNT_b;
  } ;
} LPTIM1_Type;                                  /*!< Size = 32 (0x20)                                                          */



/* =========================================================================================================================== */
/* ================                                           TIM6                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Basic timers (TIM6)
  */

typedef struct {                                /*!< (@ 0x40001000) TIM6 Structure                                             */
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000000) control register 1                                         */
    
    struct {
      __IOM uint32_t CEN        : 1;            /*!< [0..0] Counter enable                                                     */
      __IOM uint32_t UDIS       : 1;            /*!< [1..1] Update disable                                                     */
      __IOM uint32_t URS        : 1;            /*!< [2..2] Update request source                                              */
      __IOM uint32_t OPM        : 1;            /*!< [3..3] One-pulse mode                                                     */
            uint32_t            : 3;
      __IOM uint32_t ARPE       : 1;            /*!< [7..7] Auto-reload preload enable                                         */
            uint32_t            : 24;
    } CR1_b;
  } ;
  
  union {
    __IOM uint32_t CR2;                         /*!< (@ 0x00000004) control register 2                                         */
    
    struct {
            uint32_t            : 4;
      __IOM uint32_t MMS        : 3;            /*!< [6..4] Master mode selection                                              */
            uint32_t            : 25;
    } CR2_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IOM uint32_t DIER;                        /*!< (@ 0x0000000C) DMA/Interrupt enable register                              */
    
    struct {
      __IOM uint32_t UIE        : 1;            /*!< [0..0] Update interrupt enable                                            */
            uint32_t            : 7;
      __IOM uint32_t UDE        : 1;            /*!< [8..8] Update DMA request enable                                          */
            uint32_t            : 23;
    } DIER_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000010) status register                                            */
    
    struct {
      __IOM uint32_t UIF        : 1;            /*!< [0..0] Update interrupt flag                                              */
            uint32_t            : 31;
    } SR_b;
  } ;
  
  union {
    __OM  uint32_t EGR;                         /*!< (@ 0x00000014) event generation register                                  */
    
    struct {
      __OM  uint32_t UG         : 1;            /*!< [0..0] Update generation                                                  */
            uint32_t            : 31;
    } EGR_b;
  } ;
  __IM  uint32_t  RESERVED1[3];
  
  union {
    __IOM uint32_t CNT;                         /*!< (@ 0x00000024) counter                                                    */
    
    struct {
      __IOM uint32_t CNT        : 16;           /*!< [15..0] Low counter value                                                 */
            uint32_t            : 16;
    } CNT_b;
  } ;
  
  union {
    __IOM uint32_t PSC;                         /*!< (@ 0x00000028) prescaler                                                  */
    
    struct {
      __IOM uint32_t PSC        : 16;           /*!< [15..0] Prescaler value                                                   */
            uint32_t            : 16;
    } PSC_b;
  } ;
  
  union {
    __IOM uint32_t ARR;                         /*!< (@ 0x0000002C) auto-reload register                                       */
    
    struct {
      __IOM uint32_t ARR        : 16;           /*!< [15..0] Low Auto-reload value                                             */
            uint32_t            : 16;
    } ARR_b;
  } ;
} TIM6_Type;                                    /*!< Size = 48 (0x30)                                                          */



/* =========================================================================================================================== */
/* ================                                           TIM10                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief General-purpose-timers (TIM10)
  */

typedef struct {                                /*!< (@ 0x40014400) TIM10 Structure                                            */
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000000) control register 1                                         */
    
    struct {
      __IOM uint32_t CEN        : 1;            /*!< [0..0] Counter enable                                                     */
      __IOM uint32_t UDIS       : 1;            /*!< [1..1] Update disable                                                     */
      __IOM uint32_t URS        : 1;            /*!< [2..2] Update request source                                              */
            uint32_t            : 4;
      __IOM uint32_t ARPE       : 1;            /*!< [7..7] Auto-reload preload enable                                         */
      __IOM uint32_t CKD        : 2;            /*!< [9..8] Clock division                                                     */
            uint32_t            : 22;
    } CR1_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IOM uint32_t SMCR;                        /*!< (@ 0x00000008) slave mode control register                                */
    
    struct {
      __IOM uint32_t SMS        : 3;            /*!< [2..0] Slave mode selection                                               */
            uint32_t            : 1;
      __IOM uint32_t TS         : 3;            /*!< [6..4] Trigger selection                                                  */
      __IOM uint32_t MSM        : 1;            /*!< [7..7] Master/slave mode                                                  */
      __IOM uint32_t ETF        : 4;            /*!< [11..8] External trigger filter                                           */
      __IOM uint32_t ETPS       : 2;            /*!< [13..12] External trigger prescaler                                       */
      __IOM uint32_t ECE        : 1;            /*!< [14..14] External clock enable                                            */
      __IOM uint32_t ETP        : 1;            /*!< [15..15] External trigger polarity                                        */
      __IOM uint32_t SMS3       : 1;            /*!< [16..16] Slave mode selection                                             */
            uint32_t            : 15;
    } SMCR_b;
  } ;
  
  union {
    __IOM uint32_t DIER;                        /*!< (@ 0x0000000C) DMA/Interrupt enable register                              */
    
    struct {
      __IOM uint32_t UIE        : 1;            /*!< [0..0] Update interrupt enable                                            */
      __IOM uint32_t CC1IE      : 1;            /*!< [1..1] Capture/Compare 1 interrupt enable                                 */
            uint32_t            : 30;
    } DIER_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000010) status register                                            */
    
    struct {
      __IOM uint32_t UIF        : 1;            /*!< [0..0] Update interrupt flag                                              */
      __IOM uint32_t CC1IF      : 1;            /*!< [1..1] Capture/compare 1 interrupt flag                                   */
            uint32_t            : 7;
      __IOM uint32_t CC1OF      : 1;            /*!< [9..9] Capture/Compare 1 overcapture flag                                 */
            uint32_t            : 22;
    } SR_b;
  } ;
  
  union {
    __OM  uint32_t EGR;                         /*!< (@ 0x00000014) event generation register                                  */
    
    struct {
      __OM  uint32_t UG         : 1;            /*!< [0..0] Update generation                                                  */
      __OM  uint32_t CC1G       : 1;            /*!< [1..1] Capture/compare 1 generation                                       */
            uint32_t            : 30;
    } EGR_b;
  } ;
  
  union {
    union {
      __IOM uint32_t CCMR1_Output;              /*!< (@ 0x00000018) capture/compare mode register 1 (output mode)              */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] Capture/Compare 1 selection                                        */
        __IOM uint32_t OC1FE    : 1;            /*!< [2..2] Output Compare 1 fast enable                                       */
        __IOM uint32_t OC1PE    : 1;            /*!< [3..3] Output Compare 1 preload enable                                    */
        __IOM uint32_t OC1M     : 3;            /*!< [6..4] Output Compare 1 mode                                              */
              uint32_t          : 25;
      } CCMR1_Output_b;
    } ;
    
    union {
      __IOM uint32_t CCMR1_Input;               /*!< (@ 0x00000018) capture/compare mode register 1 (input mode)               */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] Capture/Compare 1 selection                                        */
        __IOM uint32_t ICPCS    : 2;            /*!< [3..2] Input capture 1 prescaler                                          */
        __IOM uint32_t IC1F     : 4;            /*!< [7..4] Input capture 1 filter                                             */
              uint32_t          : 24;
      } CCMR1_Input_b;
    } ;
  };
  __IM  uint32_t  RESERVED1;
  
  union {
    __IOM uint32_t CCER;                        /*!< (@ 0x00000020) capture/compare enable register                            */
    
    struct {
      __IOM uint32_t CC1E       : 1;            /*!< [0..0] Capture/Compare 1 output enable                                    */
      __IOM uint32_t CC1P       : 1;            /*!< [1..1] Capture/Compare 1 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC1NP      : 1;            /*!< [3..3] Capture/Compare 1 output Polarity                                  */
            uint32_t            : 28;
    } CCER_b;
  } ;
  
  union {
    __IOM uint32_t CNT;                         /*!< (@ 0x00000024) counter                                                    */
    
    struct {
      __IOM uint32_t CNT        : 16;           /*!< [15..0] counter value                                                     */
            uint32_t            : 16;
    } CNT_b;
  } ;
  
  union {
    __IOM uint32_t PSC;                         /*!< (@ 0x00000028) prescaler                                                  */
    
    struct {
      __IOM uint32_t PSC        : 16;           /*!< [15..0] Prescaler value                                                   */
            uint32_t            : 16;
    } PSC_b;
  } ;
  
  union {
    __IOM uint32_t ARR;                         /*!< (@ 0x0000002C) auto-reload register                                       */
    
    struct {
      __IOM uint32_t ARR        : 16;           /*!< [15..0] Auto-reload value                                                 */
            uint32_t            : 16;
    } ARR_b;
  } ;
  __IM  uint32_t  RESERVED2;
  
  union {
    __IOM uint32_t CCR1;                        /*!< (@ 0x00000034) capture/compare register 1                                 */
    
    struct {
      __IOM uint32_t CCR1       : 16;           /*!< [15..0] Capture/Compare 1 value                                           */
            uint32_t            : 16;
    } CCR1_b;
  } ;
  __IM  uint32_t  RESERVED3[6];
  
  union {
    __IOM uint32_t OR;                          /*!< (@ 0x00000050) option register                                            */
    
    struct {
      __IOM uint32_t TI1_RMP    : 2;            /*!< [1..0] TIM11 Input 1 remapping capability                                 */
            uint32_t            : 30;
    } OR_b;
  } ;
} TIM10_Type;                                   /*!< Size = 84 (0x54)                                                          */



/* =========================================================================================================================== */
/* ================                                           TIM9                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief General purpose timers (TIM9)
  */

typedef struct {                                /*!< (@ 0x40014000) TIM9 Structure                                             */
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000000) control register 1                                         */
    
    struct {
      __IOM uint32_t CEN        : 1;            /*!< [0..0] Counter enable                                                     */
      __IOM uint32_t UDIS       : 1;            /*!< [1..1] Update disable                                                     */
      __IOM uint32_t URS        : 1;            /*!< [2..2] Update request source                                              */
      __IOM uint32_t OPM        : 1;            /*!< [3..3] One-pulse mode                                                     */
            uint32_t            : 3;
      __IOM uint32_t ARPE       : 1;            /*!< [7..7] Auto-reload preload enable                                         */
      __IOM uint32_t CKD        : 2;            /*!< [9..8] Clock division                                                     */
            uint32_t            : 22;
    } CR1_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IOM uint32_t SMCR;                        /*!< (@ 0x00000008) slave mode control register                                */
    
    struct {
      __IOM uint32_t SMS        : 3;            /*!< [2..0] Slave mode selection                                               */
            uint32_t            : 1;
      __IOM uint32_t TS         : 3;            /*!< [6..4] Trigger selection                                                  */
      __IOM uint32_t MSM        : 1;            /*!< [7..7] Master/Slave mode                                                  */
            uint32_t            : 24;
    } SMCR_b;
  } ;
  
  union {
    __IOM uint32_t DIER;                        /*!< (@ 0x0000000C) DMA/Interrupt enable register                              */
    
    struct {
      __IOM uint32_t UIE        : 1;            /*!< [0..0] Update interrupt enable                                            */
      __IOM uint32_t CC1IE      : 1;            /*!< [1..1] Capture/Compare 1 interrupt enable                                 */
      __IOM uint32_t CC2IE      : 1;            /*!< [2..2] Capture/Compare 2 interrupt enable                                 */
            uint32_t            : 3;
      __IOM uint32_t TIE        : 1;            /*!< [6..6] Trigger interrupt enable                                           */
            uint32_t            : 25;
    } DIER_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000010) status register                                            */
    
    struct {
      __IOM uint32_t UIF        : 1;            /*!< [0..0] Update interrupt flag                                              */
      __IOM uint32_t CC1IF      : 1;            /*!< [1..1] Capture/compare 1 interrupt flag                                   */
      __IOM uint32_t CC2IF      : 1;            /*!< [2..2] Capture/Compare 2 interrupt flag                                   */
            uint32_t            : 3;
      __IOM uint32_t TIF        : 1;            /*!< [6..6] Trigger interrupt flag                                             */
            uint32_t            : 2;
      __IOM uint32_t CC1OF      : 1;            /*!< [9..9] Capture/Compare 1 overcapture flag                                 */
      __IOM uint32_t CC2OF      : 1;            /*!< [10..10] Capture/compare 2 overcapture flag                               */
            uint32_t            : 21;
    } SR_b;
  } ;
  
  union {
    __OM  uint32_t EGR;                         /*!< (@ 0x00000014) event generation register                                  */
    
    struct {
      __OM  uint32_t UG         : 1;            /*!< [0..0] Update generation                                                  */
      __OM  uint32_t CC1G       : 1;            /*!< [1..1] Capture/compare 1 generation                                       */
      __OM  uint32_t CC2G       : 1;            /*!< [2..2] Capture/compare 2 generation                                       */
            uint32_t            : 3;
      __OM  uint32_t TG         : 1;            /*!< [6..6] Trigger generation                                                 */
            uint32_t            : 25;
    } EGR_b;
  } ;
  
  union {
    union {
      __IOM uint32_t CCMR1_Output;              /*!< (@ 0x00000018) capture/compare mode register 1 (output mode)              */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] Capture/Compare 1 selection                                        */
        __IOM uint32_t OC1FE    : 1;            /*!< [2..2] Output Compare 1 fast enable                                       */
        __IOM uint32_t OC1PE    : 1;            /*!< [3..3] Output Compare 1 preload enable                                    */
        __IOM uint32_t OC1M     : 3;            /*!< [6..4] Output Compare 1 mode                                              */
              uint32_t          : 1;
        __IOM uint32_t CC2S     : 2;            /*!< [9..8] Capture/Compare 2 selection                                        */
        __IOM uint32_t OC2FE    : 1;            /*!< [10..10] Output Compare 2 fast enable                                     */
        __IOM uint32_t OC2PE    : 1;            /*!< [11..11] Output Compare 2 preload enable                                  */
        __IOM uint32_t OC2M     : 3;            /*!< [14..12] Output Compare 2 mode                                            */
              uint32_t          : 17;
      } CCMR1_Output_b;
    } ;
    
    union {
      __IOM uint32_t CCMR1_Input;               /*!< (@ 0x00000018) capture/compare mode register 1 (input mode)               */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] Capture/Compare 1 selection                                        */
        __IOM uint32_t ICPCS    : 2;            /*!< [3..2] Input capture 1 prescaler                                          */
        __IOM uint32_t IC1F     : 3;            /*!< [6..4] Input capture 1 filter                                             */
              uint32_t          : 1;
        __IOM uint32_t CC2S     : 2;            /*!< [9..8] Capture/Compare 2 selection                                        */
        __IOM uint32_t IC2PCS   : 2;            /*!< [11..10] Input capture 2 prescaler                                        */
        __IOM uint32_t IC2F     : 3;            /*!< [14..12] Input capture 2 filter                                           */
              uint32_t          : 17;
      } CCMR1_Input_b;
    } ;
  };
  __IM  uint32_t  RESERVED1;
  
  union {
    __IOM uint32_t CCER;                        /*!< (@ 0x00000020) capture/compare enable register                            */
    
    struct {
      __IOM uint32_t CC1E       : 1;            /*!< [0..0] Capture/Compare 1 output enable                                    */
      __IOM uint32_t CC1P       : 1;            /*!< [1..1] Capture/Compare 1 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC1NP      : 1;            /*!< [3..3] Capture/Compare 1 output Polarity                                  */
      __IOM uint32_t CC2E       : 1;            /*!< [4..4] Capture/Compare 2 output enable                                    */
      __IOM uint32_t CC2P       : 1;            /*!< [5..5] Capture/Compare 2 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC2NP      : 1;            /*!< [7..7] Capture/Compare 2 output Polarity                                  */
            uint32_t            : 24;
    } CCER_b;
  } ;
  
  union {
    __IOM uint32_t CNT;                         /*!< (@ 0x00000024) counter                                                    */
    
    struct {
      __IOM uint32_t CNT        : 16;           /*!< [15..0] counter value                                                     */
            uint32_t            : 16;
    } CNT_b;
  } ;
  
  union {
    __IOM uint32_t PSC;                         /*!< (@ 0x00000028) prescaler                                                  */
    
    struct {
      __IOM uint32_t PSC        : 16;           /*!< [15..0] Prescaler value                                                   */
            uint32_t            : 16;
    } PSC_b;
  } ;
  
  union {
    __IOM uint32_t ARR;                         /*!< (@ 0x0000002C) auto-reload register                                       */
    
    struct {
      __IOM uint32_t ARR        : 16;           /*!< [15..0] Auto-reload value                                                 */
            uint32_t            : 16;
    } ARR_b;
  } ;
  __IM  uint32_t  RESERVED2;
  
  union {
    __IOM uint32_t CCR1;                        /*!< (@ 0x00000034) capture/compare register 1                                 */
    
    struct {
      __IOM uint32_t CCR1       : 16;           /*!< [15..0] Capture/Compare 1 value                                           */
            uint32_t            : 16;
    } CCR1_b;
  } ;
  
  union {
    __IOM uint32_t CCR2;                        /*!< (@ 0x00000038) capture/compare register 2                                 */
    
    struct {
      __IOM uint32_t CCR2       : 16;           /*!< [15..0] Capture/Compare 2 value                                           */
            uint32_t            : 16;
    } CCR2_b;
  } ;
} TIM9_Type;                                    /*!< Size = 60 (0x3c)                                                          */



/* =========================================================================================================================== */
/* ================                                           TIM4                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief General purpose timers (TIM4)
  */

typedef struct {                                /*!< (@ 0x40000800) TIM4 Structure                                             */
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000000) control register 1                                         */
    
    struct {
      __IOM uint32_t CEN        : 1;            /*!< [0..0] Counter enable                                                     */
      __IOM uint32_t UDIS       : 1;            /*!< [1..1] Update disable                                                     */
      __IOM uint32_t URS        : 1;            /*!< [2..2] Update request source                                              */
      __IOM uint32_t OPM        : 1;            /*!< [3..3] One-pulse mode                                                     */
      __IOM uint32_t DIR        : 1;            /*!< [4..4] Direction                                                          */
      __IOM uint32_t CMS        : 2;            /*!< [6..5] Center-aligned mode selection                                      */
      __IOM uint32_t ARPE       : 1;            /*!< [7..7] Auto-reload preload enable                                         */
      __IOM uint32_t CKD        : 2;            /*!< [9..8] Clock division                                                     */
            uint32_t            : 22;
    } CR1_b;
  } ;
  
  union {
    __IOM uint32_t CR2;                         /*!< (@ 0x00000004) control register 2                                         */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t CCDS       : 1;            /*!< [3..3] Capture/compare DMA selection                                      */
      __IOM uint32_t MMS        : 3;            /*!< [6..4] Master mode selection                                              */
      __IOM uint32_t TI1S       : 1;            /*!< [7..7] TI1 selection                                                      */
            uint32_t            : 24;
    } CR2_b;
  } ;
  
  union {
    __IOM uint32_t SMCR;                        /*!< (@ 0x00000008) slave mode control register                                */
    
    struct {
      __IOM uint32_t SMS        : 3;            /*!< [2..0] Slave mode selection                                               */
            uint32_t            : 1;
      __IOM uint32_t TS         : 3;            /*!< [6..4] Trigger selection                                                  */
      __IOM uint32_t MSM        : 1;            /*!< [7..7] Master/Slave mode                                                  */
      __IOM uint32_t ETF        : 4;            /*!< [11..8] External trigger filter                                           */
      __IOM uint32_t ETPS       : 2;            /*!< [13..12] External trigger prescaler                                       */
      __IOM uint32_t ECE        : 1;            /*!< [14..14] External clock enable                                            */
      __IOM uint32_t ETP        : 1;            /*!< [15..15] External trigger polarity                                        */
            uint32_t            : 16;
    } SMCR_b;
  } ;
  
  union {
    __IOM uint32_t DIER;                        /*!< (@ 0x0000000C) DMA/Interrupt enable register                              */
    
    struct {
      __IOM uint32_t UIE        : 1;            /*!< [0..0] Update interrupt enable                                            */
      __IOM uint32_t CC1IE      : 1;            /*!< [1..1] Capture/Compare 1 interrupt enable                                 */
      __IOM uint32_t CC2IE      : 1;            /*!< [2..2] Capture/Compare 2 interrupt enable                                 */
      __IOM uint32_t CC3IE      : 1;            /*!< [3..3] Capture/Compare 3 interrupt enable                                 */
      __IOM uint32_t CC4IE      : 1;            /*!< [4..4] Capture/Compare 4 interrupt enable                                 */
            uint32_t            : 1;
      __IOM uint32_t TIE        : 1;            /*!< [6..6] Trigger interrupt enable                                           */
            uint32_t            : 1;
      __IOM uint32_t UDE        : 1;            /*!< [8..8] Update DMA request enable                                          */
      __IOM uint32_t CC1DE      : 1;            /*!< [9..9] Capture/Compare 1 DMA request enable                               */
      __IOM uint32_t CC2DE      : 1;            /*!< [10..10] Capture/Compare 2 DMA request enable                             */
      __IOM uint32_t CC3DE      : 1;            /*!< [11..11] Capture/Compare 3 DMA request enable                             */
      __IOM uint32_t CC4DE      : 1;            /*!< [12..12] Capture/Compare 4 DMA request enable                             */
            uint32_t            : 1;
      __IOM uint32_t TDE        : 1;            /*!< [14..14] Trigger DMA request enable                                       */
            uint32_t            : 17;
    } DIER_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000010) status register                                            */
    
    struct {
      __IOM uint32_t UIF        : 1;            /*!< [0..0] Update interrupt flag                                              */
      __IOM uint32_t CC1IF      : 1;            /*!< [1..1] Capture/compare 1 interrupt flag                                   */
      __IOM uint32_t CC2IF      : 1;            /*!< [2..2] Capture/Compare 2 interrupt flag                                   */
      __IOM uint32_t CC3IF      : 1;            /*!< [3..3] Capture/Compare 3 interrupt flag                                   */
      __IOM uint32_t CC4IF      : 1;            /*!< [4..4] Capture/Compare 4 interrupt flag                                   */
            uint32_t            : 1;
      __IOM uint32_t TIF        : 1;            /*!< [6..6] Trigger interrupt flag                                             */
            uint32_t            : 2;
      __IOM uint32_t CC1OF      : 1;            /*!< [9..9] Capture/Compare 1 overcapture flag                                 */
      __IOM uint32_t CC2OF      : 1;            /*!< [10..10] Capture/compare 2 overcapture flag                               */
      __IOM uint32_t CC3OF      : 1;            /*!< [11..11] Capture/Compare 3 overcapture flag                               */
      __IOM uint32_t CC4OF      : 1;            /*!< [12..12] Capture/Compare 4 overcapture flag                               */
            uint32_t            : 19;
    } SR_b;
  } ;
  
  union {
    __OM  uint32_t EGR;                         /*!< (@ 0x00000014) event generation register                                  */
    
    struct {
      __OM  uint32_t UG         : 1;            /*!< [0..0] Update generation                                                  */
      __OM  uint32_t CC1G       : 1;            /*!< [1..1] Capture/compare 1 generation                                       */
      __OM  uint32_t CC2G       : 1;            /*!< [2..2] Capture/compare 2 generation                                       */
      __OM  uint32_t CC3G       : 1;            /*!< [3..3] Capture/compare 3 generation                                       */
      __OM  uint32_t CC4G       : 1;            /*!< [4..4] Capture/compare 4 generation                                       */
            uint32_t            : 1;
      __OM  uint32_t TG         : 1;            /*!< [6..6] Trigger generation                                                 */
            uint32_t            : 25;
    } EGR_b;
  } ;
  
  union {
    union {
      __IOM uint32_t CCMR1_Output;              /*!< (@ 0x00000018) capture/compare mode register 1 (output mode)              */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] CC1S                                                               */
        __IOM uint32_t OC1FE    : 1;            /*!< [2..2] OC1FE                                                              */
        __IOM uint32_t OC1PE    : 1;            /*!< [3..3] OC1PE                                                              */
        __IOM uint32_t OC1M     : 3;            /*!< [6..4] OC1M                                                               */
        __IOM uint32_t OC1CE    : 1;            /*!< [7..7] OC1CE                                                              */
        __IOM uint32_t CC2S     : 2;            /*!< [9..8] CC2S                                                               */
        __IOM uint32_t OC2FE    : 1;            /*!< [10..10] OC2FE                                                            */
        __IOM uint32_t OC2PE    : 1;            /*!< [11..11] OC2PE                                                            */
        __IOM uint32_t OC2M     : 3;            /*!< [14..12] OC2M                                                             */
        __IOM uint32_t OC2CE    : 1;            /*!< [15..15] OC2CE                                                            */
              uint32_t          : 16;
      } CCMR1_Output_b;
    } ;
    
    union {
      __IOM uint32_t CCMR1_Input;               /*!< (@ 0x00000018) capture/compare mode register 1 (input mode)               */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] Capture/Compare 1 selection                                        */
        __IOM uint32_t ICPCS    : 2;            /*!< [3..2] Input capture 1 prescaler                                          */
        __IOM uint32_t IC1F     : 4;            /*!< [7..4] Input capture 1 filter                                             */
        __IOM uint32_t CC2S     : 2;            /*!< [9..8] Capture/Compare 2 selection                                        */
        __IOM uint32_t IC2PCS   : 2;            /*!< [11..10] Input capture 2 prescaler                                        */
        __IOM uint32_t IC2F     : 4;            /*!< [15..12] Input capture 2 filter                                           */
              uint32_t          : 16;
      } CCMR1_Input_b;
    } ;
  };
  
  union {
    union {
      __IOM uint32_t CCMR2_Output;              /*!< (@ 0x0000001C) capture/compare mode register 2 (output mode)              */
      
      struct {
        __IOM uint32_t CC3S     : 2;            /*!< [1..0] CC3S                                                               */
        __IOM uint32_t OC3FE    : 1;            /*!< [2..2] OC3FE                                                              */
        __IOM uint32_t OC3PE    : 1;            /*!< [3..3] OC3PE                                                              */
        __IOM uint32_t OC3M     : 3;            /*!< [6..4] OC3M                                                               */
        __IOM uint32_t OC3CE    : 1;            /*!< [7..7] OC3CE                                                              */
        __IOM uint32_t CC4S     : 2;            /*!< [9..8] CC4S                                                               */
        __IOM uint32_t OC4FE    : 1;            /*!< [10..10] OC4FE                                                            */
        __IOM uint32_t OC4PE    : 1;            /*!< [11..11] OC4PE                                                            */
        __IOM uint32_t OC4M     : 3;            /*!< [14..12] OC4M                                                             */
        __IOM uint32_t O24CE    : 1;            /*!< [15..15] O24CE                                                            */
              uint32_t          : 16;
      } CCMR2_Output_b;
    } ;
    
    union {
      __IOM uint32_t CCMR2_Input;               /*!< (@ 0x0000001C) capture/compare mode register 2 (input mode)               */
      
      struct {
        __IOM uint32_t CC3S     : 2;            /*!< [1..0] Capture/compare 3 selection                                        */
        __IOM uint32_t IC3PSC   : 2;            /*!< [3..2] Input capture 3 prescaler                                          */
        __IOM uint32_t IC3F     : 4;            /*!< [7..4] Input capture 3 filter                                             */
        __IOM uint32_t CC4S     : 2;            /*!< [9..8] Capture/Compare 4 selection                                        */
        __IOM uint32_t IC4PSC   : 2;            /*!< [11..10] Input capture 4 prescaler                                        */
        __IOM uint32_t IC4F     : 4;            /*!< [15..12] Input capture 4 filter                                           */
              uint32_t          : 16;
      } CCMR2_Input_b;
    } ;
  };
  
  union {
    __IOM uint32_t CCER;                        /*!< (@ 0x00000020) capture/compare enable register                            */
    
    struct {
      __IOM uint32_t CC1E       : 1;            /*!< [0..0] Capture/Compare 1 output enable                                    */
      __IOM uint32_t CC1P       : 1;            /*!< [1..1] Capture/Compare 1 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC1NP      : 1;            /*!< [3..3] Capture/Compare 1 output Polarity                                  */
      __IOM uint32_t CC2E       : 1;            /*!< [4..4] Capture/Compare 2 output enable                                    */
      __IOM uint32_t CC2P       : 1;            /*!< [5..5] Capture/Compare 2 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC2NP      : 1;            /*!< [7..7] Capture/Compare 2 output Polarity                                  */
      __IOM uint32_t CC3E       : 1;            /*!< [8..8] Capture/Compare 3 output enable                                    */
      __IOM uint32_t CC3P       : 1;            /*!< [9..9] Capture/Compare 3 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC3NP      : 1;            /*!< [11..11] Capture/Compare 3 output Polarity                                */
      __IOM uint32_t CC4E       : 1;            /*!< [12..12] Capture/Compare 4 output enable                                  */
      __IOM uint32_t CC4P       : 1;            /*!< [13..13] Capture/Compare 3 output Polarity                                */
            uint32_t            : 1;
      __IOM uint32_t CC4NP      : 1;            /*!< [15..15] Capture/Compare 4 output Polarity                                */
            uint32_t            : 16;
    } CCER_b;
  } ;
  
  union {
    __IOM uint32_t CNT;                         /*!< (@ 0x00000024) counter                                                    */
    
    struct {
      __IOM uint32_t CNT_L      : 16;           /*!< [15..0] Low counter value                                                 */
      __IOM uint32_t CNT_H      : 16;           /*!< [31..16] High counter value                                               */
    } CNT_b;
  } ;
  
  union {
    __IOM uint32_t PSC;                         /*!< (@ 0x00000028) prescaler                                                  */
    
    struct {
      __IOM uint32_t PSC        : 16;           /*!< [15..0] Prescaler value                                                   */
            uint32_t            : 16;
    } PSC_b;
  } ;
  
  union {
    __IOM uint32_t ARR;                         /*!< (@ 0x0000002C) auto-reload register                                       */
    
    struct {
      __IOM uint32_t ARR_L      : 16;           /*!< [15..0] Low Auto-reload value                                             */
      __IOM uint32_t ARR_H      : 16;           /*!< [31..16] High Auto-reload value                                           */
    } ARR_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IOM uint32_t CCR1;                        /*!< (@ 0x00000034) capture/compare register 1                                 */
    
    struct {
      __IOM uint32_t CCR1_L     : 16;           /*!< [15..0] Low Capture/Compare 1 value                                       */
      __IOM uint32_t CCR1_H     : 16;           /*!< [31..16] High Capture/Compare 1 value                                     */
    } CCR1_b;
  } ;
  
  union {
    __IOM uint32_t CCR2;                        /*!< (@ 0x00000038) capture/compare register 2                                 */
    
    struct {
      __IOM uint32_t CCR2_L     : 16;           /*!< [15..0] Low Capture/Compare 2 value                                       */
      __IOM uint32_t CCR2_H     : 16;           /*!< [31..16] High Capture/Compare 2 value                                     */
    } CCR2_b;
  } ;
  
  union {
    __IOM uint32_t CCR3;                        /*!< (@ 0x0000003C) capture/compare register 3                                 */
    
    struct {
      __IOM uint32_t CCR3_L     : 16;           /*!< [15..0] Low Capture/Compare value                                         */
      __IOM uint32_t CCR3_H     : 16;           /*!< [31..16] High Capture/Compare value                                       */
    } CCR3_b;
  } ;
  
  union {
    __IOM uint32_t CCR4;                        /*!< (@ 0x00000040) capture/compare register 4                                 */
    
    struct {
      __IOM uint32_t CCR4_L     : 16;           /*!< [15..0] Low Capture/Compare value                                         */
      __IOM uint32_t CCR4_H     : 16;           /*!< [31..16] High Capture/Compare value                                       */
    } CCR4_b;
  } ;
  __IM  uint32_t  RESERVED1;
  
  union {
    __IOM uint32_t DCR;                         /*!< (@ 0x00000048) DMA control register                                       */
    
    struct {
      __IOM uint32_t DBA        : 5;            /*!< [4..0] DMA base address                                                   */
            uint32_t            : 3;
      __IOM uint32_t DBL        : 5;            /*!< [12..8] DMA burst length                                                  */
            uint32_t            : 19;
    } DCR_b;
  } ;
  
  union {
    __IOM uint32_t DMAR;                        /*!< (@ 0x0000004C) DMA address for full transfer                              */
    
    struct {
      __IOM uint32_t DMAB       : 16;           /*!< [15..0] DMA register for burst accesses                                   */
            uint32_t            : 16;
    } DMAR_b;
  } ;
} TIM4_Type;                                    /*!< Size = 80 (0x50)                                                          */



/* =========================================================================================================================== */
/* ================                                           TIM3                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief General purpose timers (TIM3)
  */

typedef struct {                                /*!< (@ 0x40000400) TIM3 Structure                                             */
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000000) control register 1                                         */
    
    struct {
      __IOM uint32_t CEN        : 1;            /*!< [0..0] Counter enable                                                     */
      __IOM uint32_t UDIS       : 1;            /*!< [1..1] Update disable                                                     */
      __IOM uint32_t URS        : 1;            /*!< [2..2] Update request source                                              */
      __IOM uint32_t OPM        : 1;            /*!< [3..3] One-pulse mode                                                     */
      __IOM uint32_t DIR        : 1;            /*!< [4..4] Direction                                                          */
      __IOM uint32_t CMS        : 2;            /*!< [6..5] Center-aligned mode selection                                      */
      __IOM uint32_t ARPE       : 1;            /*!< [7..7] Auto-reload preload enable                                         */
      __IOM uint32_t CKD        : 2;            /*!< [9..8] Clock division                                                     */
            uint32_t            : 22;
    } CR1_b;
  } ;
  
  union {
    __IOM uint32_t CR2;                         /*!< (@ 0x00000004) control register 2                                         */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t CCDS       : 1;            /*!< [3..3] Capture/compare DMA selection                                      */
      __IOM uint32_t MMS        : 3;            /*!< [6..4] Master mode selection                                              */
      __IOM uint32_t TI1S       : 1;            /*!< [7..7] TI1 selection                                                      */
            uint32_t            : 24;
    } CR2_b;
  } ;
  
  union {
    __IOM uint32_t SMCR;                        /*!< (@ 0x00000008) slave mode control register                                */
    
    struct {
      __IOM uint32_t SMS        : 3;            /*!< [2..0] Slave mode selection                                               */
            uint32_t            : 1;
      __IOM uint32_t TS         : 3;            /*!< [6..4] Trigger selection                                                  */
      __IOM uint32_t MSM        : 1;            /*!< [7..7] Master/Slave mode                                                  */
      __IOM uint32_t ETF        : 4;            /*!< [11..8] External trigger filter                                           */
      __IOM uint32_t ETPS       : 2;            /*!< [13..12] External trigger prescaler                                       */
      __IOM uint32_t ECE        : 1;            /*!< [14..14] External clock enable                                            */
      __IOM uint32_t ETP        : 1;            /*!< [15..15] External trigger polarity                                        */
            uint32_t            : 16;
    } SMCR_b;
  } ;
  
  union {
    __IOM uint32_t DIER;                        /*!< (@ 0x0000000C) DMA/Interrupt enable register                              */
    
    struct {
      __IOM uint32_t UIE        : 1;            /*!< [0..0] Update interrupt enable                                            */
      __IOM uint32_t CC1IE      : 1;            /*!< [1..1] Capture/Compare 1 interrupt enable                                 */
      __IOM uint32_t CC2IE      : 1;            /*!< [2..2] Capture/Compare 2 interrupt enable                                 */
      __IOM uint32_t CC3IE      : 1;            /*!< [3..3] Capture/Compare 3 interrupt enable                                 */
      __IOM uint32_t CC4IE      : 1;            /*!< [4..4] Capture/Compare 4 interrupt enable                                 */
            uint32_t            : 1;
      __IOM uint32_t TIE        : 1;            /*!< [6..6] Trigger interrupt enable                                           */
            uint32_t            : 1;
      __IOM uint32_t UDE        : 1;            /*!< [8..8] Update DMA request enable                                          */
      __IOM uint32_t CC1DE      : 1;            /*!< [9..9] Capture/Compare 1 DMA request enable                               */
      __IOM uint32_t CC2DE      : 1;            /*!< [10..10] Capture/Compare 2 DMA request enable                             */
      __IOM uint32_t CC3DE      : 1;            /*!< [11..11] Capture/Compare 3 DMA request enable                             */
      __IOM uint32_t CC4DE      : 1;            /*!< [12..12] Capture/Compare 4 DMA request enable                             */
            uint32_t            : 1;
      __IOM uint32_t TDE        : 1;            /*!< [14..14] Trigger DMA request enable                                       */
            uint32_t            : 17;
    } DIER_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000010) status register                                            */
    
    struct {
      __IOM uint32_t UIF        : 1;            /*!< [0..0] Update interrupt flag                                              */
      __IOM uint32_t CC1IF      : 1;            /*!< [1..1] Capture/compare 1 interrupt flag                                   */
      __IOM uint32_t CC2IF      : 1;            /*!< [2..2] Capture/Compare 2 interrupt flag                                   */
      __IOM uint32_t CC3IF      : 1;            /*!< [3..3] Capture/Compare 3 interrupt flag                                   */
      __IOM uint32_t CC4IF      : 1;            /*!< [4..4] Capture/Compare 4 interrupt flag                                   */
            uint32_t            : 1;
      __IOM uint32_t TIF        : 1;            /*!< [6..6] Trigger interrupt flag                                             */
            uint32_t            : 2;
      __IOM uint32_t CC1OF      : 1;            /*!< [9..9] Capture/Compare 1 overcapture flag                                 */
      __IOM uint32_t CC2OF      : 1;            /*!< [10..10] Capture/compare 2 overcapture flag                               */
      __IOM uint32_t CC3OF      : 1;            /*!< [11..11] Capture/Compare 3 overcapture flag                               */
      __IOM uint32_t CC4OF      : 1;            /*!< [12..12] Capture/Compare 4 overcapture flag                               */
            uint32_t            : 19;
    } SR_b;
  } ;
  
  union {
    __OM  uint32_t EGR;                         /*!< (@ 0x00000014) event generation register                                  */
    
    struct {
      __OM  uint32_t UG         : 1;            /*!< [0..0] Update generation                                                  */
      __OM  uint32_t CC1G       : 1;            /*!< [1..1] Capture/compare 1 generation                                       */
      __OM  uint32_t CC2G       : 1;            /*!< [2..2] Capture/compare 2 generation                                       */
      __OM  uint32_t CC3G       : 1;            /*!< [3..3] Capture/compare 3 generation                                       */
      __OM  uint32_t CC4G       : 1;            /*!< [4..4] Capture/compare 4 generation                                       */
            uint32_t            : 1;
      __OM  uint32_t TG         : 1;            /*!< [6..6] Trigger generation                                                 */
            uint32_t            : 25;
    } EGR_b;
  } ;
  
  union {
    union {
      __IOM uint32_t CCMR1_Output;              /*!< (@ 0x00000018) capture/compare mode register 1 (output mode)              */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] CC1S                                                               */
        __IOM uint32_t OC1FE    : 1;            /*!< [2..2] OC1FE                                                              */
        __IOM uint32_t OC1PE    : 1;            /*!< [3..3] OC1PE                                                              */
        __IOM uint32_t OC1M     : 3;            /*!< [6..4] OC1M                                                               */
        __IOM uint32_t OC1CE    : 1;            /*!< [7..7] OC1CE                                                              */
        __IOM uint32_t CC2S     : 2;            /*!< [9..8] CC2S                                                               */
        __IOM uint32_t OC2FE    : 1;            /*!< [10..10] OC2FE                                                            */
        __IOM uint32_t OC2PE    : 1;            /*!< [11..11] OC2PE                                                            */
        __IOM uint32_t OC2M     : 3;            /*!< [14..12] OC2M                                                             */
        __IOM uint32_t OC2CE    : 1;            /*!< [15..15] OC2CE                                                            */
              uint32_t          : 16;
      } CCMR1_Output_b;
    } ;
    
    union {
      __IOM uint32_t CCMR1_Input;               /*!< (@ 0x00000018) capture/compare mode register 1 (input mode)               */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] Capture/Compare 1 selection                                        */
        __IOM uint32_t ICPCS    : 2;            /*!< [3..2] Input capture 1 prescaler                                          */
        __IOM uint32_t IC1F     : 4;            /*!< [7..4] Input capture 1 filter                                             */
        __IOM uint32_t CC2S     : 2;            /*!< [9..8] Capture/Compare 2 selection                                        */
        __IOM uint32_t IC2PCS   : 2;            /*!< [11..10] Input capture 2 prescaler                                        */
        __IOM uint32_t IC2F     : 4;            /*!< [15..12] Input capture 2 filter                                           */
              uint32_t          : 16;
      } CCMR1_Input_b;
    } ;
  };
  
  union {
    union {
      __IOM uint32_t CCMR2_Output;              /*!< (@ 0x0000001C) capture/compare mode register 2 (output mode)              */
      
      struct {
        __IOM uint32_t CC3S     : 2;            /*!< [1..0] CC3S                                                               */
        __IOM uint32_t OC3FE    : 1;            /*!< [2..2] OC3FE                                                              */
        __IOM uint32_t OC3PE    : 1;            /*!< [3..3] OC3PE                                                              */
        __IOM uint32_t OC3M     : 3;            /*!< [6..4] OC3M                                                               */
        __IOM uint32_t OC3CE    : 1;            /*!< [7..7] OC3CE                                                              */
        __IOM uint32_t CC4S     : 2;            /*!< [9..8] CC4S                                                               */
        __IOM uint32_t OC4FE    : 1;            /*!< [10..10] OC4FE                                                            */
        __IOM uint32_t OC4PE    : 1;            /*!< [11..11] OC4PE                                                            */
        __IOM uint32_t OC4M     : 3;            /*!< [14..12] OC4M                                                             */
        __IOM uint32_t O24CE    : 1;            /*!< [15..15] O24CE                                                            */
              uint32_t          : 16;
      } CCMR2_Output_b;
    } ;
    
    union {
      __IOM uint32_t CCMR2_Input;               /*!< (@ 0x0000001C) capture/compare mode register 2 (input mode)               */
      
      struct {
        __IOM uint32_t CC3S     : 2;            /*!< [1..0] Capture/compare 3 selection                                        */
        __IOM uint32_t IC3PSC   : 2;            /*!< [3..2] Input capture 3 prescaler                                          */
        __IOM uint32_t IC3F     : 4;            /*!< [7..4] Input capture 3 filter                                             */
        __IOM uint32_t CC4S     : 2;            /*!< [9..8] Capture/Compare 4 selection                                        */
        __IOM uint32_t IC4PSC   : 2;            /*!< [11..10] Input capture 4 prescaler                                        */
        __IOM uint32_t IC4F     : 4;            /*!< [15..12] Input capture 4 filter                                           */
              uint32_t          : 16;
      } CCMR2_Input_b;
    } ;
  };
  
  union {
    __IOM uint32_t CCER;                        /*!< (@ 0x00000020) capture/compare enable register                            */
    
    struct {
      __IOM uint32_t CC1E       : 1;            /*!< [0..0] Capture/Compare 1 output enable                                    */
      __IOM uint32_t CC1P       : 1;            /*!< [1..1] Capture/Compare 1 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC1NP      : 1;            /*!< [3..3] Capture/Compare 1 output Polarity                                  */
      __IOM uint32_t CC2E       : 1;            /*!< [4..4] Capture/Compare 2 output enable                                    */
      __IOM uint32_t CC2P       : 1;            /*!< [5..5] Capture/Compare 2 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC2NP      : 1;            /*!< [7..7] Capture/Compare 2 output Polarity                                  */
      __IOM uint32_t CC3E       : 1;            /*!< [8..8] Capture/Compare 3 output enable                                    */
      __IOM uint32_t CC3P       : 1;            /*!< [9..9] Capture/Compare 3 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC3NP      : 1;            /*!< [11..11] Capture/Compare 3 output Polarity                                */
      __IOM uint32_t CC4E       : 1;            /*!< [12..12] Capture/Compare 4 output enable                                  */
      __IOM uint32_t CC4P       : 1;            /*!< [13..13] Capture/Compare 3 output Polarity                                */
            uint32_t            : 1;
      __IOM uint32_t CC4NP      : 1;            /*!< [15..15] Capture/Compare 4 output Polarity                                */
            uint32_t            : 16;
    } CCER_b;
  } ;
  
  union {
    __IOM uint32_t CNT;                         /*!< (@ 0x00000024) counter                                                    */
    
    struct {
      __IOM uint32_t CNT_L      : 16;           /*!< [15..0] Low counter value                                                 */
      __IOM uint32_t CNT_H      : 16;           /*!< [31..16] High counter value                                               */
    } CNT_b;
  } ;
  
  union {
    __IOM uint32_t PSC;                         /*!< (@ 0x00000028) prescaler                                                  */
    
    struct {
      __IOM uint32_t PSC        : 16;           /*!< [15..0] Prescaler value                                                   */
            uint32_t            : 16;
    } PSC_b;
  } ;
  
  union {
    __IOM uint32_t ARR;                         /*!< (@ 0x0000002C) auto-reload register                                       */
    
    struct {
      __IOM uint32_t ARR_L      : 16;           /*!< [15..0] Low Auto-reload value                                             */
      __IOM uint32_t ARR_H      : 16;           /*!< [31..16] High Auto-reload value                                           */
    } ARR_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IOM uint32_t CCR1;                        /*!< (@ 0x00000034) capture/compare register 1                                 */
    
    struct {
      __IOM uint32_t CCR1_L     : 16;           /*!< [15..0] Low Capture/Compare 1 value                                       */
      __IOM uint32_t CCR1_H     : 16;           /*!< [31..16] High Capture/Compare 1 value                                     */
    } CCR1_b;
  } ;
  
  union {
    __IOM uint32_t CCR2;                        /*!< (@ 0x00000038) capture/compare register 2                                 */
    
    struct {
      __IOM uint32_t CCR2_L     : 16;           /*!< [15..0] Low Capture/Compare 2 value                                       */
      __IOM uint32_t CCR2_H     : 16;           /*!< [31..16] High Capture/Compare 2 value                                     */
    } CCR2_b;
  } ;
  
  union {
    __IOM uint32_t CCR3;                        /*!< (@ 0x0000003C) capture/compare register 3                                 */
    
    struct {
      __IOM uint32_t CCR3_L     : 16;           /*!< [15..0] Low Capture/Compare value                                         */
      __IOM uint32_t CCR3_H     : 16;           /*!< [31..16] High Capture/Compare value                                       */
    } CCR3_b;
  } ;
  
  union {
    __IOM uint32_t CCR4;                        /*!< (@ 0x00000040) capture/compare register 4                                 */
    
    struct {
      __IOM uint32_t CCR4_L     : 16;           /*!< [15..0] Low Capture/Compare value                                         */
      __IOM uint32_t CCR4_H     : 16;           /*!< [31..16] High Capture/Compare value                                       */
    } CCR4_b;
  } ;
  __IM  uint32_t  RESERVED1;
  
  union {
    __IOM uint32_t DCR;                         /*!< (@ 0x00000048) DMA control register                                       */
    
    struct {
      __IOM uint32_t DBA        : 5;            /*!< [4..0] DMA base address                                                   */
            uint32_t            : 3;
      __IOM uint32_t DBL        : 5;            /*!< [12..8] DMA burst length                                                  */
            uint32_t            : 19;
    } DCR_b;
  } ;
  
  union {
    __IOM uint32_t DMAR;                        /*!< (@ 0x0000004C) DMA address for full transfer                              */
    
    struct {
      __IOM uint32_t DMAB       : 16;           /*!< [15..0] DMA register for burst accesses                                   */
            uint32_t            : 16;
    } DMAR_b;
  } ;
  
  union {
    __IOM uint32_t OR1;                         /*!< (@ 0x00000050) TIM3 option register 1                                     */
    
    struct {
      __IOM uint32_t TI1_RMP    : 2;            /*!< [1..0] Input Capture 1 remap                                              */
            uint32_t            : 30;
    } OR1_b;
  } ;
  __IM  uint32_t  RESERVED2[3];
  
  union {
    __IOM uint32_t OR2;                         /*!< (@ 0x00000060) TIM3 option register 2                                     */
    
    struct {
            uint32_t            : 14;
      __IOM uint32_t ETRSEL     : 3;            /*!< [16..14] ETR source selection                                             */
            uint32_t            : 15;
    } OR2_b;
  } ;
} TIM3_Type;                                    /*!< Size = 100 (0x64)                                                         */



/* =========================================================================================================================== */
/* ================                                           TIM2                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief General purpose timers (TIM2)
  */

typedef struct {                                /*!< (@ 0x40000000) TIM2 Structure                                             */
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000000) control register 1                                         */
    
    struct {
      __IOM uint32_t CEN        : 1;            /*!< [0..0] Counter enable                                                     */
      __IOM uint32_t UDIS       : 1;            /*!< [1..1] Update disable                                                     */
      __IOM uint32_t URS        : 1;            /*!< [2..2] Update request source                                              */
      __IOM uint32_t OPM        : 1;            /*!< [3..3] One-pulse mode                                                     */
      __IOM uint32_t DIR        : 1;            /*!< [4..4] Direction                                                          */
      __IOM uint32_t CMS        : 2;            /*!< [6..5] Center-aligned mode selection                                      */
      __IOM uint32_t ARPE       : 1;            /*!< [7..7] Auto-reload preload enable                                         */
      __IOM uint32_t CKD        : 2;            /*!< [9..8] Clock division                                                     */
            uint32_t            : 22;
    } CR1_b;
  } ;
  
  union {
    __IOM uint32_t CR2;                         /*!< (@ 0x00000004) control register 2                                         */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t CCDS       : 1;            /*!< [3..3] Capture/compare DMA selection                                      */
      __IOM uint32_t MMS        : 3;            /*!< [6..4] Master mode selection                                              */
      __IOM uint32_t TI1S       : 1;            /*!< [7..7] TI1 selection                                                      */
            uint32_t            : 24;
    } CR2_b;
  } ;
  
  union {
    __IOM uint32_t SMCR;                        /*!< (@ 0x00000008) slave mode control register                                */
    
    struct {
      __IOM uint32_t SMS        : 3;            /*!< [2..0] Slave mode selection                                               */
            uint32_t            : 1;
      __IOM uint32_t TS         : 3;            /*!< [6..4] Trigger selection                                                  */
      __IOM uint32_t MSM        : 1;            /*!< [7..7] Master/Slave mode                                                  */
      __IOM uint32_t ETF        : 4;            /*!< [11..8] External trigger filter                                           */
      __IOM uint32_t ETPS       : 2;            /*!< [13..12] External trigger prescaler                                       */
      __IOM uint32_t ECE        : 1;            /*!< [14..14] External clock enable                                            */
      __IOM uint32_t ETP        : 1;            /*!< [15..15] External trigger polarity                                        */
            uint32_t            : 16;
    } SMCR_b;
  } ;
  
  union {
    __IOM uint32_t DIER;                        /*!< (@ 0x0000000C) DMA/Interrupt enable register                              */
    
    struct {
      __IOM uint32_t UIE        : 1;            /*!< [0..0] Update interrupt enable                                            */
      __IOM uint32_t CC1IE      : 1;            /*!< [1..1] Capture/Compare 1 interrupt enable                                 */
      __IOM uint32_t CC2IE      : 1;            /*!< [2..2] Capture/Compare 2 interrupt enable                                 */
      __IOM uint32_t CC3IE      : 1;            /*!< [3..3] Capture/Compare 3 interrupt enable                                 */
      __IOM uint32_t CC4IE      : 1;            /*!< [4..4] Capture/Compare 4 interrupt enable                                 */
            uint32_t            : 1;
      __IOM uint32_t TIE        : 1;            /*!< [6..6] Trigger interrupt enable                                           */
            uint32_t            : 1;
      __IOM uint32_t UDE        : 1;            /*!< [8..8] Update DMA request enable                                          */
      __IOM uint32_t CC1DE      : 1;            /*!< [9..9] Capture/Compare 1 DMA request enable                               */
      __IOM uint32_t CC2DE      : 1;            /*!< [10..10] Capture/Compare 2 DMA request enable                             */
      __IOM uint32_t CC3DE      : 1;            /*!< [11..11] Capture/Compare 3 DMA request enable                             */
      __IOM uint32_t CC4DE      : 1;            /*!< [12..12] Capture/Compare 4 DMA request enable                             */
            uint32_t            : 1;
      __IOM uint32_t TDE        : 1;            /*!< [14..14] Trigger DMA request enable                                       */
            uint32_t            : 17;
    } DIER_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000010) status register                                            */
    
    struct {
      __IOM uint32_t UIF        : 1;            /*!< [0..0] Update interrupt flag                                              */
      __IOM uint32_t CC1IF      : 1;            /*!< [1..1] Capture/compare 1 interrupt flag                                   */
      __IOM uint32_t CC2IF      : 1;            /*!< [2..2] Capture/Compare 2 interrupt flag                                   */
      __IOM uint32_t CC3IF      : 1;            /*!< [3..3] Capture/Compare 3 interrupt flag                                   */
      __IOM uint32_t CC4IF      : 1;            /*!< [4..4] Capture/Compare 4 interrupt flag                                   */
            uint32_t            : 1;
      __IOM uint32_t TIF        : 1;            /*!< [6..6] Trigger interrupt flag                                             */
            uint32_t            : 2;
      __IOM uint32_t CC1OF      : 1;            /*!< [9..9] Capture/Compare 1 overcapture flag                                 */
      __IOM uint32_t CC2OF      : 1;            /*!< [10..10] Capture/compare 2 overcapture flag                               */
      __IOM uint32_t CC3OF      : 1;            /*!< [11..11] Capture/Compare 3 overcapture flag                               */
      __IOM uint32_t CC4OF      : 1;            /*!< [12..12] Capture/Compare 4 overcapture flag                               */
            uint32_t            : 19;
    } SR_b;
  } ;
  
  union {
    __OM  uint32_t EGR;                         /*!< (@ 0x00000014) event generation register                                  */
    
    struct {
      __OM  uint32_t UG         : 1;            /*!< [0..0] Update generation                                                  */
      __OM  uint32_t CC1G       : 1;            /*!< [1..1] Capture/compare 1 generation                                       */
      __OM  uint32_t CC2G       : 1;            /*!< [2..2] Capture/compare 2 generation                                       */
      __OM  uint32_t CC3G       : 1;            /*!< [3..3] Capture/compare 3 generation                                       */
      __OM  uint32_t CC4G       : 1;            /*!< [4..4] Capture/compare 4 generation                                       */
            uint32_t            : 1;
      __OM  uint32_t TG         : 1;            /*!< [6..6] Trigger generation                                                 */
            uint32_t            : 25;
    } EGR_b;
  } ;
  
  union {
    union {
      __IOM uint32_t CCMR1_Output;              /*!< (@ 0x00000018) capture/compare mode register 1 (output mode)              */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] CC1S                                                               */
        __IOM uint32_t OC1FE    : 1;            /*!< [2..2] OC1FE                                                              */
        __IOM uint32_t OC1PE    : 1;            /*!< [3..3] OC1PE                                                              */
        __IOM uint32_t OC1M     : 3;            /*!< [6..4] OC1M                                                               */
        __IOM uint32_t OC1CE    : 1;            /*!< [7..7] OC1CE                                                              */
        __IOM uint32_t CC2S     : 2;            /*!< [9..8] CC2S                                                               */
        __IOM uint32_t OC2FE    : 1;            /*!< [10..10] OC2FE                                                            */
        __IOM uint32_t OC2PE    : 1;            /*!< [11..11] OC2PE                                                            */
        __IOM uint32_t OC2M     : 3;            /*!< [14..12] OC2M                                                             */
        __IOM uint32_t OC2CE    : 1;            /*!< [15..15] OC2CE                                                            */
              uint32_t          : 16;
      } CCMR1_Output_b;
    } ;
    
    union {
      __IOM uint32_t CCMR1_Input;               /*!< (@ 0x00000018) capture/compare mode register 1 (input mode)               */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] Capture/Compare 1 selection                                        */
        __IOM uint32_t ICPCS    : 2;            /*!< [3..2] Input capture 1 prescaler                                          */
        __IOM uint32_t IC1F     : 4;            /*!< [7..4] Input capture 1 filter                                             */
        __IOM uint32_t CC2S     : 2;            /*!< [9..8] Capture/Compare 2 selection                                        */
        __IOM uint32_t IC2PCS   : 2;            /*!< [11..10] Input capture 2 prescaler                                        */
        __IOM uint32_t IC2F     : 4;            /*!< [15..12] Input capture 2 filter                                           */
              uint32_t          : 16;
      } CCMR1_Input_b;
    } ;
  };
  
  union {
    union {
      __IOM uint32_t CCMR2_Output;              /*!< (@ 0x0000001C) capture/compare mode register 2 (output mode)              */
      
      struct {
        __IOM uint32_t CC3S     : 2;            /*!< [1..0] CC3S                                                               */
        __IOM uint32_t OC3FE    : 1;            /*!< [2..2] OC3FE                                                              */
        __IOM uint32_t OC3PE    : 1;            /*!< [3..3] OC3PE                                                              */
        __IOM uint32_t OC3M     : 3;            /*!< [6..4] OC3M                                                               */
        __IOM uint32_t OC3CE    : 1;            /*!< [7..7] OC3CE                                                              */
        __IOM uint32_t CC4S     : 2;            /*!< [9..8] CC4S                                                               */
        __IOM uint32_t OC4FE    : 1;            /*!< [10..10] OC4FE                                                            */
        __IOM uint32_t OC4PE    : 1;            /*!< [11..11] OC4PE                                                            */
        __IOM uint32_t OC4M     : 3;            /*!< [14..12] OC4M                                                             */
        __IOM uint32_t O24CE    : 1;            /*!< [15..15] O24CE                                                            */
              uint32_t          : 16;
      } CCMR2_Output_b;
    } ;
    
    union {
      __IOM uint32_t CCMR2_Input;               /*!< (@ 0x0000001C) capture/compare mode register 2 (input mode)               */
      
      struct {
        __IOM uint32_t CC3S     : 2;            /*!< [1..0] Capture/compare 3 selection                                        */
        __IOM uint32_t IC3PSC   : 2;            /*!< [3..2] Input capture 3 prescaler                                          */
        __IOM uint32_t IC3F     : 4;            /*!< [7..4] Input capture 3 filter                                             */
        __IOM uint32_t CC4S     : 2;            /*!< [9..8] Capture/Compare 4 selection                                        */
        __IOM uint32_t IC4PSC   : 2;            /*!< [11..10] Input capture 4 prescaler                                        */
        __IOM uint32_t IC4F     : 4;            /*!< [15..12] Input capture 4 filter                                           */
              uint32_t          : 16;
      } CCMR2_Input_b;
    } ;
  };
  
  union {
    __IOM uint32_t CCER;                        /*!< (@ 0x00000020) capture/compare enable register                            */
    
    struct {
      __IOM uint32_t CC1E       : 1;            /*!< [0..0] Capture/Compare 1 output enable                                    */
      __IOM uint32_t CC1P       : 1;            /*!< [1..1] Capture/Compare 1 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC1NP      : 1;            /*!< [3..3] Capture/Compare 1 output Polarity                                  */
      __IOM uint32_t CC2E       : 1;            /*!< [4..4] Capture/Compare 2 output enable                                    */
      __IOM uint32_t CC2P       : 1;            /*!< [5..5] Capture/Compare 2 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC2NP      : 1;            /*!< [7..7] Capture/Compare 2 output Polarity                                  */
      __IOM uint32_t CC3E       : 1;            /*!< [8..8] Capture/Compare 3 output enable                                    */
      __IOM uint32_t CC3P       : 1;            /*!< [9..9] Capture/Compare 3 output Polarity                                  */
            uint32_t            : 1;
      __IOM uint32_t CC3NP      : 1;            /*!< [11..11] Capture/Compare 3 output Polarity                                */
      __IOM uint32_t CC4E       : 1;            /*!< [12..12] Capture/Compare 4 output enable                                  */
      __IOM uint32_t CC4P       : 1;            /*!< [13..13] Capture/Compare 3 output Polarity                                */
            uint32_t            : 1;
      __IOM uint32_t CC4NP      : 1;            /*!< [15..15] Capture/Compare 4 output Polarity                                */
            uint32_t            : 16;
    } CCER_b;
  } ;
  
  union {
    __IOM uint32_t CNT;                         /*!< (@ 0x00000024) counter                                                    */
    
    struct {
      __IOM uint32_t CNT_L      : 16;           /*!< [15..0] Low counter value                                                 */
      __IOM uint32_t CNT_H      : 16;           /*!< [31..16] High counter value                                               */
    } CNT_b;
  } ;
  
  union {
    __IOM uint32_t PSC;                         /*!< (@ 0x00000028) prescaler                                                  */
    
    struct {
      __IOM uint32_t PSC        : 16;           /*!< [15..0] Prescaler value                                                   */
            uint32_t            : 16;
    } PSC_b;
  } ;
  
  union {
    __IOM uint32_t ARR;                         /*!< (@ 0x0000002C) auto-reload register                                       */
    
    struct {
      __IOM uint32_t ARR_L      : 16;           /*!< [15..0] Low Auto-reload value                                             */
      __IOM uint32_t ARR_H      : 16;           /*!< [31..16] High Auto-reload value                                           */
    } ARR_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IOM uint32_t CCR1;                        /*!< (@ 0x00000034) capture/compare register 1                                 */
    
    struct {
      __IOM uint32_t CCR1_L     : 16;           /*!< [15..0] Low Capture/Compare 1 value                                       */
      __IOM uint32_t CCR1_H     : 16;           /*!< [31..16] High Capture/Compare 1 value                                     */
    } CCR1_b;
  } ;
  
  union {
    __IOM uint32_t CCR2;                        /*!< (@ 0x00000038) capture/compare register 2                                 */
    
    struct {
      __IOM uint32_t CCR2_L     : 16;           /*!< [15..0] Low Capture/Compare 2 value                                       */
      __IOM uint32_t CCR2_H     : 16;           /*!< [31..16] High Capture/Compare 2 value                                     */
    } CCR2_b;
  } ;
  
  union {
    __IOM uint32_t CCR3;                        /*!< (@ 0x0000003C) capture/compare register 3                                 */
    
    struct {
      __IOM uint32_t CCR3_L     : 16;           /*!< [15..0] Low Capture/Compare value                                         */
      __IOM uint32_t CCR3_H     : 16;           /*!< [31..16] High Capture/Compare value                                       */
    } CCR3_b;
  } ;
  
  union {
    __IOM uint32_t CCR4;                        /*!< (@ 0x00000040) capture/compare register 4                                 */
    
    struct {
      __IOM uint32_t CCR4_L     : 16;           /*!< [15..0] Low Capture/Compare value                                         */
      __IOM uint32_t CCR4_H     : 16;           /*!< [31..16] High Capture/Compare value                                       */
    } CCR4_b;
  } ;
  __IM  uint32_t  RESERVED1;
  
  union {
    __IOM uint32_t DCR;                         /*!< (@ 0x00000048) DMA control register                                       */
    
    struct {
      __IOM uint32_t DBA        : 5;            /*!< [4..0] DMA base address                                                   */
            uint32_t            : 3;
      __IOM uint32_t DBL        : 5;            /*!< [12..8] DMA burst length                                                  */
            uint32_t            : 19;
    } DCR_b;
  } ;
  
  union {
    __IOM uint32_t DMAR;                        /*!< (@ 0x0000004C) DMA address for full transfer                              */
    
    struct {
      __IOM uint32_t DMAB       : 16;           /*!< [15..0] DMA register for burst accesses                                   */
            uint32_t            : 16;
    } DMAR_b;
  } ;
  
  union {
    __IOM uint32_t OR1;                         /*!< (@ 0x00000050) TIM2 option register 1                                     */
    
    struct {
      __IOM uint32_t ITR1_RMP   : 1;            /*!< [0..0] Internal trigger 1 remap                                           */
      __IOM uint32_t ETR1_RMP   : 1;            /*!< [1..1] External trigger remap                                             */
      __IOM uint32_t TI4_RMP    : 2;            /*!< [3..2] Input Capture 4 remap                                              */
            uint32_t            : 28;
    } OR1_b;
  } ;
  __IM  uint32_t  RESERVED2[3];
  
  union {
    __IOM uint32_t OR2;                         /*!< (@ 0x00000060) TIM2 option register 2                                     */
    
    struct {
            uint32_t            : 14;
      __IOM uint32_t ETRSEL     : 3;            /*!< [16..14] ETR source selection                                             */
            uint32_t            : 15;
    } OR2_b;
  } ;
} TIM2_Type;                                    /*!< Size = 100 (0x64)                                                         */



/* =========================================================================================================================== */
/* ================                                           TIM1                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Advanced-timers (TIM1)
  */

typedef struct {                                /*!< (@ 0x40010000) TIM1 Structure                                             */
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000000) control register 1                                         */
    
    struct {
      __IOM uint32_t CEN        : 1;            /*!< [0..0] Counter enable                                                     */
      __IOM uint32_t UDIS       : 1;            /*!< [1..1] Update disable                                                     */
      __IOM uint32_t URS        : 1;            /*!< [2..2] Update request source                                              */
      __IOM uint32_t OPM        : 1;            /*!< [3..3] One-pulse mode                                                     */
      __IOM uint32_t DIR        : 1;            /*!< [4..4] Direction                                                          */
      __IOM uint32_t CMS        : 2;            /*!< [6..5] Center-aligned mode selection                                      */
      __IOM uint32_t ARPE       : 1;            /*!< [7..7] Auto-reload preload enable                                         */
      __IOM uint32_t CKD        : 2;            /*!< [9..8] Clock division                                                     */
            uint32_t            : 22;
    } CR1_b;
  } ;
  
  union {
    __IOM uint32_t CR2;                         /*!< (@ 0x00000004) control register 2                                         */
    
    struct {
      __IOM uint32_t CCPC       : 1;            /*!< [0..0] Capture/compare preloaded control                                  */
            uint32_t            : 1;
      __IOM uint32_t CCUS       : 1;            /*!< [2..2] Capture/compare control update selection                           */
      __IOM uint32_t CCDS       : 1;            /*!< [3..3] Capture/compare DMA selection                                      */
      __IOM uint32_t MMS        : 3;            /*!< [6..4] Master mode selection                                              */
      __IOM uint32_t TI1S       : 1;            /*!< [7..7] TI1 selection                                                      */
      __IOM uint32_t OIS1       : 1;            /*!< [8..8] Output Idle state 1                                                */
      __IOM uint32_t OIS1N      : 1;            /*!< [9..9] Output Idle state 1                                                */
      __IOM uint32_t OIS2       : 1;            /*!< [10..10] Output Idle state 2                                              */
      __IOM uint32_t OIS2N      : 1;            /*!< [11..11] Output Idle state 2                                              */
      __IOM uint32_t OIS3       : 1;            /*!< [12..12] Output Idle state 3                                              */
      __IOM uint32_t OIS3N      : 1;            /*!< [13..13] Output Idle state 3                                              */
      __IOM uint32_t OIS4       : 1;            /*!< [14..14] Output Idle state 4                                              */
            uint32_t            : 17;
    } CR2_b;
  } ;
  
  union {
    __IOM uint32_t SMCR;                        /*!< (@ 0x00000008) slave mode control register                                */
    
    struct {
      __IOM uint32_t SMS        : 3;            /*!< [2..0] Slave mode selection                                               */
            uint32_t            : 1;
      __IOM uint32_t TS         : 3;            /*!< [6..4] Trigger selection                                                  */
      __IOM uint32_t MSM        : 1;            /*!< [7..7] Master/Slave mode                                                  */
      __IOM uint32_t ETF        : 4;            /*!< [11..8] External trigger filter                                           */
      __IOM uint32_t ETPS       : 2;            /*!< [13..12] External trigger prescaler                                       */
      __IOM uint32_t ECE        : 1;            /*!< [14..14] External clock enable                                            */
      __IOM uint32_t ETP        : 1;            /*!< [15..15] External trigger polarity                                        */
            uint32_t            : 16;
    } SMCR_b;
  } ;
  
  union {
    __IOM uint32_t DIER;                        /*!< (@ 0x0000000C) DMA/Interrupt enable register                              */
    
    struct {
      __IOM uint32_t UIE        : 1;            /*!< [0..0] Update interrupt enable                                            */
      __IOM uint32_t CC1IE      : 1;            /*!< [1..1] Capture/Compare 1 interrupt enable                                 */
      __IOM uint32_t CC2IE      : 1;            /*!< [2..2] Capture/Compare 2 interrupt enable                                 */
      __IOM uint32_t CC3IE      : 1;            /*!< [3..3] Capture/Compare 3 interrupt enable                                 */
      __IOM uint32_t CC4IE      : 1;            /*!< [4..4] Capture/Compare 4 interrupt enable                                 */
      __IOM uint32_t COMIE      : 1;            /*!< [5..5] COM interrupt enable                                               */
      __IOM uint32_t TIE        : 1;            /*!< [6..6] Trigger interrupt enable                                           */
      __IOM uint32_t BIE        : 1;            /*!< [7..7] Break interrupt enable                                             */
      __IOM uint32_t UDE        : 1;            /*!< [8..8] Update DMA request enable                                          */
      __IOM uint32_t CC1DE      : 1;            /*!< [9..9] Capture/Compare 1 DMA request enable                               */
      __IOM uint32_t CC2DE      : 1;            /*!< [10..10] Capture/Compare 2 DMA request enable                             */
      __IOM uint32_t CC3DE      : 1;            /*!< [11..11] Capture/Compare 3 DMA request enable                             */
      __IOM uint32_t CC4DE      : 1;            /*!< [12..12] Capture/Compare 4 DMA request enable                             */
      __IOM uint32_t COMDE      : 1;            /*!< [13..13] COM DMA request enable                                           */
      __IOM uint32_t TDE        : 1;            /*!< [14..14] Trigger DMA request enable                                       */
            uint32_t            : 17;
    } DIER_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000010) status register                                            */
    
    struct {
      __IOM uint32_t UIF        : 1;            /*!< [0..0] Update interrupt flag                                              */
      __IOM uint32_t CC1IF      : 1;            /*!< [1..1] Capture/compare 1 interrupt flag                                   */
      __IOM uint32_t CC2IF      : 1;            /*!< [2..2] Capture/Compare 2 interrupt flag                                   */
      __IOM uint32_t CC3IF      : 1;            /*!< [3..3] Capture/Compare 3 interrupt flag                                   */
      __IOM uint32_t CC4IF      : 1;            /*!< [4..4] Capture/Compare 4 interrupt flag                                   */
      __IOM uint32_t COMIF      : 1;            /*!< [5..5] COM interrupt flag                                                 */
      __IOM uint32_t TIF        : 1;            /*!< [6..6] Trigger interrupt flag                                             */
      __IOM uint32_t BIF        : 1;            /*!< [7..7] Break interrupt flag                                               */
            uint32_t            : 1;
      __IOM uint32_t CC1OF      : 1;            /*!< [9..9] Capture/Compare 1 overcapture flag                                 */
      __IOM uint32_t CC2OF      : 1;            /*!< [10..10] Capture/compare 2 overcapture flag                               */
      __IOM uint32_t CC3OF      : 1;            /*!< [11..11] Capture/Compare 3 overcapture flag                               */
      __IOM uint32_t CC4OF      : 1;            /*!< [12..12] Capture/Compare 4 overcapture flag                               */
            uint32_t            : 19;
    } SR_b;
  } ;
  
  union {
    __OM  uint32_t EGR;                         /*!< (@ 0x00000014) event generation register                                  */
    
    struct {
      __OM  uint32_t UG         : 1;            /*!< [0..0] Update generation                                                  */
      __OM  uint32_t CC1G       : 1;            /*!< [1..1] Capture/compare 1 generation                                       */
      __OM  uint32_t CC2G       : 1;            /*!< [2..2] Capture/compare 2 generation                                       */
      __OM  uint32_t CC3G       : 1;            /*!< [3..3] Capture/compare 3 generation                                       */
      __OM  uint32_t CC4G       : 1;            /*!< [4..4] Capture/compare 4 generation                                       */
      __OM  uint32_t COMG       : 1;            /*!< [5..5] Capture/Compare control update generation                          */
      __OM  uint32_t TG         : 1;            /*!< [6..6] Trigger generation                                                 */
      __OM  uint32_t BG         : 1;            /*!< [7..7] Break generation                                                   */
            uint32_t            : 24;
    } EGR_b;
  } ;
  
  union {
    union {
      __IOM uint32_t CCMR1_Output;              /*!< (@ 0x00000018) capture/compare mode register 1 (output mode)              */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] Capture/Compare 1 selection                                        */
        __IOM uint32_t OC1FE    : 1;            /*!< [2..2] Output Compare 1 fast enable                                       */
        __IOM uint32_t OC1PE    : 1;            /*!< [3..3] Output Compare 1 preload enable                                    */
        __IOM uint32_t OC1M     : 3;            /*!< [6..4] Output Compare 1 mode                                              */
        __IOM uint32_t OC1CE    : 1;            /*!< [7..7] Output Compare 1 clear enable                                      */
        __IOM uint32_t CC2S     : 2;            /*!< [9..8] Capture/Compare 2 selection                                        */
        __IOM uint32_t OC2FE    : 1;            /*!< [10..10] Output Compare 2 fast enable                                     */
        __IOM uint32_t OC2PE    : 1;            /*!< [11..11] Output Compare 2 preload enable                                  */
        __IOM uint32_t OC2M     : 3;            /*!< [14..12] Output Compare 2 mode                                            */
        __IOM uint32_t OC2CE    : 1;            /*!< [15..15] Output Compare 2 clear enable                                    */
              uint32_t          : 16;
      } CCMR1_Output_b;
    } ;
    
    union {
      __IOM uint32_t CCMR1_Input;               /*!< (@ 0x00000018) capture/compare mode register 1 (input mode)               */
      
      struct {
        __IOM uint32_t CC1S     : 2;            /*!< [1..0] Capture/Compare 1 selection                                        */
        __IOM uint32_t ICPCS    : 2;            /*!< [3..2] Input capture 1 prescaler                                          */
        __IOM uint32_t IC1F     : 4;            /*!< [7..4] Input capture 1 filter                                             */
        __IOM uint32_t CC2S     : 2;            /*!< [9..8] Capture/Compare 2 selection                                        */
        __IOM uint32_t IC2PCS   : 2;            /*!< [11..10] Input capture 2 prescaler                                        */
        __IOM uint32_t IC2F     : 4;            /*!< [15..12] Input capture 2 filter                                           */
              uint32_t          : 16;
      } CCMR1_Input_b;
    } ;
  };
  
  union {
    union {
      __IOM uint32_t CCMR2_Output;              /*!< (@ 0x0000001C) capture/compare mode register 2 (output mode)              */
      
      struct {
        __IOM uint32_t CC3S     : 2;            /*!< [1..0] Capture/Compare 3 selection                                        */
        __IOM uint32_t OC3FE    : 1;            /*!< [2..2] Output compare 3 fast enable                                       */
        __IOM uint32_t OC3PE    : 1;            /*!< [3..3] Output compare 3 preload enable                                    */
        __IOM uint32_t OC3M     : 3;            /*!< [6..4] Output compare 3 mode                                              */
        __IOM uint32_t OC3CE    : 1;            /*!< [7..7] Output compare 3 clear enable                                      */
        __IOM uint32_t CC4S     : 2;            /*!< [9..8] Capture/Compare 4 selection                                        */
        __IOM uint32_t OC4FE    : 1;            /*!< [10..10] Output compare 4 fast enable                                     */
        __IOM uint32_t OC4PE    : 1;            /*!< [11..11] Output compare 4 preload enable                                  */
        __IOM uint32_t OC4M     : 3;            /*!< [14..12] Output compare 4 mode                                            */
        __IOM uint32_t OC4CE    : 1;            /*!< [15..15] Output compare 4 clear enable                                    */
              uint32_t          : 16;
      } CCMR2_Output_b;
    } ;
    
    union {
      __IOM uint32_t CCMR2_Input;               /*!< (@ 0x0000001C) capture/compare mode register 2 (input mode)               */
      
      struct {
        __IOM uint32_t CC3S     : 2;            /*!< [1..0] Capture/compare 3 selection                                        */
        __IOM uint32_t IC3PSC   : 2;            /*!< [3..2] Input capture 3 prescaler                                          */
        __IOM uint32_t IC3F     : 4;            /*!< [7..4] Input capture 3 filter                                             */
        __IOM uint32_t CC4S     : 2;            /*!< [9..8] Capture/Compare 4 selection                                        */
        __IOM uint32_t IC4PSC   : 2;            /*!< [11..10] Input capture 4 prescaler                                        */
        __IOM uint32_t IC4F     : 4;            /*!< [15..12] Input capture 4 filter                                           */
              uint32_t          : 16;
      } CCMR2_Input_b;
    } ;
  };
  
  union {
    __IOM uint32_t CCER;                        /*!< (@ 0x00000020) capture/compare enable register                            */
    
    struct {
      __IOM uint32_t CC1E       : 1;            /*!< [0..0] Capture/Compare 1 output enable                                    */
      __IOM uint32_t CC1P       : 1;            /*!< [1..1] Capture/Compare 1 output Polarity                                  */
      __IOM uint32_t CC1NE      : 1;            /*!< [2..2] Capture/Compare 1 complementary output enable                      */
      __IOM uint32_t CC1NP      : 1;            /*!< [3..3] Capture/Compare 1 output Polarity                                  */
      __IOM uint32_t CC2E       : 1;            /*!< [4..4] Capture/Compare 2 output enable                                    */
      __IOM uint32_t CC2P       : 1;            /*!< [5..5] Capture/Compare 2 output Polarity                                  */
      __IOM uint32_t CC2NE      : 1;            /*!< [6..6] Capture/Compare 2 complementary output enable                      */
      __IOM uint32_t CC2NP      : 1;            /*!< [7..7] Capture/Compare 2 output Polarity                                  */
      __IOM uint32_t CC3E       : 1;            /*!< [8..8] Capture/Compare 3 output enable                                    */
      __IOM uint32_t CC3P       : 1;            /*!< [9..9] Capture/Compare 3 output Polarity                                  */
      __IOM uint32_t CC3NE      : 1;            /*!< [10..10] Capture/Compare 3 complementary output enable                    */
      __IOM uint32_t CC3NP      : 1;            /*!< [11..11] Capture/Compare 3 output Polarity                                */
      __IOM uint32_t CC4E       : 1;            /*!< [12..12] Capture/Compare 4 output enable                                  */
      __IOM uint32_t CC4P       : 1;            /*!< [13..13] Capture/Compare 3 output Polarity                                */
            uint32_t            : 18;
    } CCER_b;
  } ;
  
  union {
    __IOM uint32_t CNT;                         /*!< (@ 0x00000024) counter                                                    */
    
    struct {
      __IOM uint32_t CNT        : 16;           /*!< [15..0] counter value                                                     */
            uint32_t            : 16;
    } CNT_b;
  } ;
  
  union {
    __IOM uint32_t PSC;                         /*!< (@ 0x00000028) prescaler                                                  */
    
    struct {
      __IOM uint32_t PSC        : 16;           /*!< [15..0] Prescaler value                                                   */
            uint32_t            : 16;
    } PSC_b;
  } ;
  
  union {
    __IOM uint32_t ARR;                         /*!< (@ 0x0000002C) auto-reload register                                       */
    
    struct {
      __IOM uint32_t ARR        : 16;           /*!< [15..0] Auto-reload value                                                 */
            uint32_t            : 16;
    } ARR_b;
  } ;
  
  union {
    __IOM uint32_t RCR;                         /*!< (@ 0x00000030) repetition counter register                                */
    
    struct {
      __IOM uint32_t REP        : 8;            /*!< [7..0] Repetition counter value                                           */
            uint32_t            : 24;
    } RCR_b;
  } ;
  
  union {
    __IOM uint32_t CCR1;                        /*!< (@ 0x00000034) capture/compare register 1                                 */
    
    struct {
      __IOM uint32_t CCR1       : 16;           /*!< [15..0] Capture/Compare 1 value                                           */
            uint32_t            : 16;
    } CCR1_b;
  } ;
  
  union {
    __IOM uint32_t CCR2;                        /*!< (@ 0x00000038) capture/compare register 2                                 */
    
    struct {
      __IOM uint32_t CCR2       : 16;           /*!< [15..0] Capture/Compare 2 value                                           */
            uint32_t            : 16;
    } CCR2_b;
  } ;
  
  union {
    __IOM uint32_t CCR3;                        /*!< (@ 0x0000003C) capture/compare register 3                                 */
    
    struct {
      __IOM uint32_t CCR3       : 16;           /*!< [15..0] Capture/Compare value                                             */
            uint32_t            : 16;
    } CCR3_b;
  } ;
  
  union {
    __IOM uint32_t CCR4;                        /*!< (@ 0x00000040) capture/compare register 4                                 */
    
    struct {
      __IOM uint32_t CCR4       : 16;           /*!< [15..0] Capture/Compare value                                             */
            uint32_t            : 16;
    } CCR4_b;
  } ;
  
  union {
    __IOM uint32_t BDTR;                        /*!< (@ 0x00000044) break and dead-time register                               */
    
    struct {
      __IOM uint32_t DTG        : 8;            /*!< [7..0] Dead-time generator setup                                          */
      __IOM uint32_t LOCK       : 2;            /*!< [9..8] Lock configuration                                                 */
      __IOM uint32_t OSSI       : 1;            /*!< [10..10] Off-state selection for Idle mode                                */
      __IOM uint32_t OSSR       : 1;            /*!< [11..11] Off-state selection for Run mode                                 */
      __IOM uint32_t BKE        : 1;            /*!< [12..12] Break enable                                                     */
      __IOM uint32_t BKP        : 1;            /*!< [13..13] Break polarity                                                   */
      __IOM uint32_t AOE        : 1;            /*!< [14..14] Automatic output enable                                          */
      __IOM uint32_t MOE        : 1;            /*!< [15..15] Main output enable                                               */
      __IOM uint32_t BKF        : 4;            /*!< [19..16] Break filter                                                     */
      __IOM uint32_t BK2F       : 4;            /*!< [23..20] Break 2 filter                                                   */
      __IOM uint32_t BK2E       : 1;            /*!< [24..24] Break 2 enable                                                   */
      __IOM uint32_t BK2P       : 1;            /*!< [25..25] Break 2 polarity                                                 */
            uint32_t            : 6;
    } BDTR_b;
  } ;
  
  union {
    __IOM uint32_t DCR;                         /*!< (@ 0x00000048) DMA control register                                       */
    
    struct {
      __IOM uint32_t DBA        : 5;            /*!< [4..0] DMA base address                                                   */
            uint32_t            : 3;
      __IOM uint32_t DBL        : 5;            /*!< [12..8] DMA burst length                                                  */
            uint32_t            : 19;
    } DCR_b;
  } ;
  
  union {
    __IOM uint32_t DMAR;                        /*!< (@ 0x0000004C) DMA address for full transfer                              */
    
    struct {
      __IOM uint32_t DMAB       : 16;           /*!< [15..0] DMA register for burst accesses                                   */
            uint32_t            : 16;
    } DMAR_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IOM uint32_t CCMR3_Output;                /*!< (@ 0x00000054) capture/compare mode register 3 (output mode)              */
    
    struct {
            uint32_t            : 2;
      __IOM uint32_t OC5FE      : 1;            /*!< [2..2] Output compare 5 fast enable                                       */
      __IOM uint32_t OC5PE      : 1;            /*!< [3..3] Output compare 5 preload enable                                    */
      __IOM uint32_t OC5M       : 3;            /*!< [6..4] Output compare 5 mode                                              */
      __IOM uint32_t OC5CE      : 1;            /*!< [7..7] Output compare 5 clear enable                                      */
            uint32_t            : 2;
      __IOM uint32_t OC6FE      : 1;            /*!< [10..10] Output compare 6 fast enable                                     */
      __IOM uint32_t OC6PE      : 1;            /*!< [11..11] Output compare 6 preload enable                                  */
      __IOM uint32_t OC6M       : 3;            /*!< [14..12] Output compare 6 mode                                            */
      __IOM uint32_t OC6CE      : 1;            /*!< [15..15] Output compare 6 clear enable                                    */
      __IOM uint32_t OC5M3      : 1;            /*!< [16..16] Output Compare 5 mode                                            */
            uint32_t            : 7;
      __IOM uint32_t OC6M3      : 1;            /*!< [24..24] Output Compare 6 mode                                            */
            uint32_t            : 7;
    } CCMR3_Output_b;
  } ;
  
  union {
    __IOM uint32_t CCR5;                        /*!< (@ 0x00000058) capture/compare register 5                                 */
    
    struct {
      __IOM uint32_t CCR5       : 16;           /*!< [15..0] Capture/Compare 5 value                                           */
            uint32_t            : 13;
      __IOM uint32_t GC5C1      : 1;            /*!< [29..29] Group Channel 5 and Channel 1                                    */
      __IOM uint32_t GC5C2      : 1;            /*!< [30..30] Group Channel 5 and Channel 2                                    */
      __IOM uint32_t GC5C3      : 1;            /*!< [31..31] Group Channel 5 and Channel 3                                    */
    } CCR5_b;
  } ;
  
  union {
    __IOM uint32_t CRR6;                        /*!< (@ 0x0000005C) capture/compare register 6                                 */
    
    struct {
      __IOM uint32_t CCR6       : 16;           /*!< [15..0] Capture/Compare 6 value                                           */
            uint32_t            : 16;
    } CRR6_b;
  } ;
  
  union {
    __IOM uint32_t AF1;                         /*!< (@ 0x00000060) alternate function option register 1                       */
    
    struct {
      __IOM uint32_t BKINE      : 1;            /*!< [0..0] BRK BKIN input enable                                              */
            uint32_t            : 7;
      __IOM uint32_t BKDFBKE    : 1;            /*!< [8..8] BRK DFSDM_BREAK[0] enable                                          */
      __IOM uint32_t BKINP      : 1;            /*!< [9..9] BRK BKIN input polarity                                            */
            uint32_t            : 22;
    } AF1_b;
  } ;
  
  union {
    __IOM uint32_t AF2;                         /*!< (@ 0x00000064) alternate function option register 2                       */
    
    struct {
      __IOM uint32_t BK2INE     : 1;            /*!< [0..0] BRK2 BKIN input enable                                             */
            uint32_t            : 7;
      __IOM uint32_t BK2DFBKE   : 1;            /*!< [8..8] BRK2 DFSDM_BREAK enable                                            */
      __IOM uint32_t BK2INP     : 1;            /*!< [9..9] BRK2 BKIN2 input polarity                                          */
            uint32_t            : 22;
    } AF2_b;
  } ;
} TIM1_Type;                                    /*!< Size = 104 (0x68)                                                         */



/* =========================================================================================================================== */
/* ================                                          LPTIM1                                           ================ */
/* =========================================================================================================================== */

/* ==========================================================  ISR  ========================================================== */
#define LPTIM1_ISR_DOWN_Pos               (6UL)                     /*!< DOWN (Bit 6)                                          */
#define LPTIM1_ISR_DOWN_Msk               (0x40UL)                  /*!< DOWN (Bitfield-Mask: 0x01)                            */
#define LPTIM1_ISR_UP_Pos                 (5UL)                     /*!< UP (Bit 5)                                            */
#define LPTIM1_ISR_UP_Msk                 (0x20UL)                  /*!< UP (Bitfield-Mask: 0x01)                              */
#define LPTIM1_ISR_ARROK_Pos              (4UL)                     /*!< ARROK (Bit 4)                                         */
#define LPTIM1_ISR_ARROK_Msk              (0x10UL)                  /*!< ARROK (Bitfield-Mask: 0x01)                           */
#define LPTIM1_ISR_CMPOK_Pos              (3UL)                     /*!< CMPOK (Bit 3)                                         */
#define LPTIM1_ISR_CMPOK_Msk              (0x8UL)                   /*!< CMPOK (Bitfield-Mask: 0x01)                           */
#define LPTIM1_ISR_EXTTRIG_Pos            (2UL)                     /*!< EXTTRIG (Bit 2)                                       */
#define LPTIM1_ISR_EXTTRIG_Msk            (0x4UL)                   /*!< EXTTRIG (Bitfield-Mask: 0x01)                         */
#define LPTIM1_ISR_ARRM_Pos               (1UL)                     /*!< ARRM (Bit 1)                                          */
#define LPTIM1_ISR_ARRM_Msk               (0x2UL)                   /*!< ARRM (Bitfield-Mask: 0x01)                            */
#define LPTIM1_ISR_CMPM_Pos               (0UL)                     /*!< CMPM (Bit 0)                                          */
#define LPTIM1_ISR_CMPM_Msk               (0x1UL)                   /*!< CMPM (Bitfield-Mask: 0x01)                            */
/* ==========================================================  ICR  ========================================================== */
#define LPTIM1_ICR_DOWNCF_Pos             (6UL)                     /*!< DOWNCF (Bit 6)                                        */
#define LPTIM1_ICR_DOWNCF_Msk             (0x40UL)                  /*!< DOWNCF (Bitfield-Mask: 0x01)                          */
#define LPTIM1_ICR_UPCF_Pos               (5UL)                     /*!< UPCF (Bit 5)                                          */
#define LPTIM1_ICR_UPCF_Msk               (0x20UL)                  /*!< UPCF (Bitfield-Mask: 0x01)                            */
#define LPTIM1_ICR_ARROKCF_Pos            (4UL)                     /*!< ARROKCF (Bit 4)                                       */
#define LPTIM1_ICR_ARROKCF_Msk            (0x10UL)                  /*!< ARROKCF (Bitfield-Mask: 0x01)                         */
#define LPTIM1_ICR_CMPOKCF_Pos            (3UL)                     /*!< CMPOKCF (Bit 3)                                       */
#define LPTIM1_ICR_CMPOKCF_Msk            (0x8UL)                   /*!< CMPOKCF (Bitfield-Mask: 0x01)                         */
#define LPTIM1_ICR_EXTTRIGCF_Pos          (2UL)                     /*!< EXTTRIGCF (Bit 2)                                     */
#define LPTIM1_ICR_EXTTRIGCF_Msk          (0x4UL)                   /*!< EXTTRIGCF (Bitfield-Mask: 0x01)                       */
#define LPTIM1_ICR_ARRMCF_Pos             (1UL)                     /*!< ARRMCF (Bit 1)                                        */
#define LPTIM1_ICR_ARRMCF_Msk             (0x2UL)                   /*!< ARRMCF (Bitfield-Mask: 0x01)                          */
#define LPTIM1_ICR_CMPMCF_Pos             (0UL)                     /*!< CMPMCF (Bit 0)                                        */
#define LPTIM1_ICR_CMPMCF_Msk             (0x1UL)                   /*!< CMPMCF (Bitfield-Mask: 0x01)                          */
/* ==========================================================  IER  ========================================================== */
#define LPTIM1_IER_DOWNIE_Pos             (6UL)                     /*!< DOWNIE (Bit 6)                                        */
#define LPTIM1_IER_DOWNIE_Msk             (0x40UL)                  /*!< DOWNIE (Bitfield-Mask: 0x01)                          */
#define LPTIM1_IER_UPIE_Pos               (5UL)                     /*!< UPIE (Bit 5)                                          */
#define LPTIM1_IER_UPIE_Msk               (0x20UL)                  /*!< UPIE (Bitfield-Mask: 0x01)                            */
#define LPTIM1_IER_ARROKIE_Pos            (4UL)                     /*!< ARROKIE (Bit 4)                                       */
#define LPTIM1_IER_ARROKIE_Msk            (0x10UL)                  /*!< ARROKIE (Bitfield-Mask: 0x01)                         */
#define LPTIM1_IER_CMPOKIE_Pos            (3UL)                     /*!< CMPOKIE (Bit 3)                                       */
#define LPTIM1_IER_CMPOKIE_Msk            (0x8UL)                   /*!< CMPOKIE (Bitfield-Mask: 0x01)                         */
#define LPTIM1_IER_EXTTRIGIE_Pos          (2UL)                     /*!< EXTTRIGIE (Bit 2)                                     */
#define LPTIM1_IER_EXTTRIGIE_Msk          (0x4UL)                   /*!< EXTTRIGIE (Bitfield-Mask: 0x01)                       */
#define LPTIM1_IER_ARRMIE_Pos             (1UL)                     /*!< ARRMIE (Bit 1)                                        */
#define LPTIM1_IER_ARRMIE_Msk             (0x2UL)                   /*!< ARRMIE (Bitfield-Mask: 0x01)                          */
#define LPTIM1_IER_CMPMIE_Pos             (0UL)                     /*!< CMPMIE (Bit 0)                                        */
#define LPTIM1_IER_CMPMIE_Msk             (0x1UL)                   /*!< CMPMIE (Bitfield-Mask: 0x01)                          */
/* =========================================================  CFGR  ========================================================== */
#define LPTIM1_CFGR_ENC_Pos               (24UL)                    /*!< ENC (Bit 24)                                          */
#define LPTIM1_CFGR_ENC_Msk               (0x1000000UL)             /*!< ENC (Bitfield-Mask: 0x01)                             */
#define LPTIM1_CFGR_COUNTMODE_Pos         (23UL)                    /*!< COUNTMODE (Bit 23)                                    */
#define LPTIM1_CFGR_COUNTMODE_Msk         (0x800000UL)              /*!< COUNTMODE (Bitfield-Mask: 0x01)                       */
#define LPTIM1_CFGR_PRELOAD_Pos           (22UL)                    /*!< PRELOAD (Bit 22)                                      */
#define LPTIM1_CFGR_PRELOAD_Msk           (0x400000UL)              /*!< PRELOAD (Bitfield-Mask: 0x01)                         */
#define LPTIM1_CFGR_WAVPOL_Pos            (21UL)                    /*!< WAVPOL (Bit 21)                                       */
#define LPTIM1_CFGR_WAVPOL_Msk            (0x200000UL)              /*!< WAVPOL (Bitfield-Mask: 0x01)                          */
#define LPTIM1_CFGR_WAVE_Pos              (20UL)                    /*!< WAVE (Bit 20)                                         */
#define LPTIM1_CFGR_WAVE_Msk              (0x100000UL)              /*!< WAVE (Bitfield-Mask: 0x01)                            */
#define LPTIM1_CFGR_TIMOUT_Pos            (19UL)                    /*!< TIMOUT (Bit 19)                                       */
#define LPTIM1_CFGR_TIMOUT_Msk            (0x80000UL)               /*!< TIMOUT (Bitfield-Mask: 0x01)                          */
#define LPTIM1_CFGR_TRIGEN_Pos            (17UL)                    /*!< TRIGEN (Bit 17)                                       */
#define LPTIM1_CFGR_TRIGEN_Msk            (0x60000UL)               /*!< TRIGEN (Bitfield-Mask: 0x03)                          */
#define LPTIM1_CFGR_TRIGSEL_Pos           (13UL)                    /*!< TRIGSEL (Bit 13)                                      */
#define LPTIM1_CFGR_TRIGSEL_Msk           (0xe000UL)                /*!< TRIGSEL (Bitfield-Mask: 0x07)                         */
#define LPTIM1_CFGR_PRESC_Pos             (9UL)                     /*!< PRESC (Bit 9)                                         */
#define LPTIM1_CFGR_PRESC_Msk             (0xe00UL)                 /*!< PRESC (Bitfield-Mask: 0x07)                           */
#define LPTIM1_CFGR_TRGFLT_Pos            (6UL)                     /*!< TRGFLT (Bit 6)                                        */
#define LPTIM1_CFGR_TRGFLT_Msk            (0xc0UL)                  /*!< TRGFLT (Bitfield-Mask: 0x03)                          */
#define LPTIM1_CFGR_CKFLT_Pos             (3UL)                     /*!< CKFLT (Bit 3)                                         */
#define LPTIM1_CFGR_CKFLT_Msk             (0x18UL)                  /*!< CKFLT (Bitfield-Mask: 0x03)                           */
#define LPTIM1_CFGR_CKPOL_Pos             (1UL)                     /*!< CKPOL (Bit 1)                                         */
#define LPTIM1_CFGR_CKPOL_Msk             (0x6UL)                   /*!< CKPOL (Bitfield-Mask: 0x03)                           */
#define LPTIM1_CFGR_CKSEL_Pos             (0UL)                     /*!< CKSEL (Bit 0)                                         */
#define LPTIM1_CFGR_CKSEL_Msk             (0x1UL)                   /*!< CKSEL (Bitfield-Mask: 0x01)                           */
/* ==========================================================  CR  =========================================================== */
#define LPTIM1_CR_CNTSTRT_Pos             (2UL)                     /*!< CNTSTRT (Bit 2)                                       */
#define LPTIM1_CR_CNTSTRT_Msk             (0x4UL)                   /*!< CNTSTRT (Bitfield-Mask: 0x01)                         */
#define LPTIM1_CR_SNGSTRT_Pos             (1UL)                     /*!< SNGSTRT (Bit 1)                                       */
#define LPTIM1_CR_SNGSTRT_Msk             (0x2UL)                   /*!< SNGSTRT (Bitfield-Mask: 0x01)                         */
#define LPTIM1_CR_ENABLE_Pos              (0UL)                     /*!< ENABLE (Bit 0)                                        */
#define LPTIM1_CR_ENABLE_Msk              (0x1UL)                   /*!< ENABLE (Bitfield-Mask: 0x01)                          */
/* ==========================================================  CMP  ========================================================== */
#define LPTIM1_CMP_CMP_Pos                (0UL)                     /*!< CMP (Bit 0)                                           */
#define LPTIM1_CMP_CMP_Msk                (0xffffUL)                /*!< CMP (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  ARR  ========================================================== */
#define LPTIM1_ARR_ARR_Pos                (0UL)                     /*!< ARR (Bit 0)                                           */
#define LPTIM1_ARR_ARR_Msk                (0xffffUL)                /*!< ARR (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  CNT  ========================================================== */
#define LPTIM1_CNT_CNT_Pos                (0UL)                     /*!< CNT (Bit 0)                                           */
#define LPTIM1_CNT_CNT_Msk                (0xffffUL)                /*!< CNT (Bitfield-Mask: 0xffff)                           */


/* =========================================================================================================================== */
/* ================                                           TIM6                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR1  ========================================================== */
#define TIM6_CR1_ARPE_Pos                 (7UL)                     /*!< ARPE (Bit 7)                                          */
#define TIM6_CR1_ARPE_Msk                 (0x80UL)                  /*!< ARPE (Bitfield-Mask: 0x01)                            */
#define TIM6_CR1_OPM_Pos                  (3UL)                     /*!< OPM (Bit 3)                                           */
#define TIM6_CR1_OPM_Msk                  (0x8UL)                   /*!< OPM (Bitfield-Mask: 0x01)                             */
#define TIM6_CR1_URS_Pos                  (2UL)                     /*!< URS (Bit 2)                                           */
#define TIM6_CR1_URS_Msk                  (0x4UL)                   /*!< URS (Bitfield-Mask: 0x01)                             */
#define TIM6_CR1_UDIS_Pos                 (1UL)                     /*!< UDIS (Bit 1)                                          */
#define TIM6_CR1_UDIS_Msk                 (0x2UL)                   /*!< UDIS (Bitfield-Mask: 0x01)                            */
#define TIM6_CR1_CEN_Pos                  (0UL)                     /*!< CEN (Bit 0)                                           */
#define TIM6_CR1_CEN_Msk                  (0x1UL)                   /*!< CEN (Bitfield-Mask: 0x01)                             */
/* ==========================================================  CR2  ========================================================== */
#define TIM6_CR2_MMS_Pos                  (4UL)                     /*!< MMS (Bit 4)                                           */
#define TIM6_CR2_MMS_Msk                  (0x70UL)                  /*!< MMS (Bitfield-Mask: 0x07)                             */
/* =========================================================  DIER  ========================================================== */
#define TIM6_DIER_UDE_Pos                 (8UL)                     /*!< UDE (Bit 8)                                           */
#define TIM6_DIER_UDE_Msk                 (0x100UL)                 /*!< UDE (Bitfield-Mask: 0x01)                             */
#define TIM6_DIER_UIE_Pos                 (0UL)                     /*!< UIE (Bit 0)                                           */
#define TIM6_DIER_UIE_Msk                 (0x1UL)                   /*!< UIE (Bitfield-Mask: 0x01)                             */
/* ==========================================================  SR  =========================================================== */
#define TIM6_SR_UIF_Pos                   (0UL)                     /*!< UIF (Bit 0)                                           */
#define TIM6_SR_UIF_Msk                   (0x1UL)                   /*!< UIF (Bitfield-Mask: 0x01)                             */
/* ==========================================================  EGR  ========================================================== */
#define TIM6_EGR_UG_Pos                   (0UL)                     /*!< UG (Bit 0)                                            */
#define TIM6_EGR_UG_Msk                   (0x1UL)                   /*!< UG (Bitfield-Mask: 0x01)                              */
/* ==========================================================  CNT  ========================================================== */
#define TIM6_CNT_CNT_Pos                  (0UL)                     /*!< CNT (Bit 0)                                           */
#define TIM6_CNT_CNT_Msk                  (0xffffUL)                /*!< CNT (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  PSC  ========================================================== */
#define TIM6_PSC_PSC_Pos                  (0UL)                     /*!< PSC (Bit 0)                                           */
#define TIM6_PSC_PSC_Msk                  (0xffffUL)                /*!< PSC (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  ARR  ========================================================== */
#define TIM6_ARR_ARR_Pos                  (0UL)                     /*!< ARR (Bit 0)                                           */
#define TIM6_ARR_ARR_Msk                  (0xffffUL)                /*!< ARR (Bitfield-Mask: 0xffff)                           */


/* =========================================================================================================================== */
/* ================                                           TIM10                                           ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR1  ========================================================== */
#define TIM10_CR1_CKD_Pos                 (8UL)                     /*!< CKD (Bit 8)                                           */
#define TIM10_CR1_CKD_Msk                 (0x300UL)                 /*!< CKD (Bitfield-Mask: 0x03)                             */
#define TIM10_CR1_ARPE_Pos                (7UL)                     /*!< ARPE (Bit 7)                                          */
#define TIM10_CR1_ARPE_Msk                (0x80UL)                  /*!< ARPE (Bitfield-Mask: 0x01)                            */
#define TIM10_CR1_URS_Pos                 (2UL)                     /*!< URS (Bit 2)                                           */
#define TIM10_CR1_URS_Msk                 (0x4UL)                   /*!< URS (Bitfield-Mask: 0x01)                             */
#define TIM10_CR1_UDIS_Pos                (1UL)                     /*!< UDIS (Bit 1)                                          */
#define TIM10_CR1_UDIS_Msk                (0x2UL)                   /*!< UDIS (Bitfield-Mask: 0x01)                            */
#define TIM10_CR1_CEN_Pos                 (0UL)                     /*!< CEN (Bit 0)                                           */
#define TIM10_CR1_CEN_Msk                 (0x1UL)                   /*!< CEN (Bitfield-Mask: 0x01)                             */
/* =========================================================  DIER  ========================================================== */
#define TIM10_DIER_CC1IE_Pos              (1UL)                     /*!< CC1IE (Bit 1)                                         */
#define TIM10_DIER_CC1IE_Msk              (0x2UL)                   /*!< CC1IE (Bitfield-Mask: 0x01)                           */
#define TIM10_DIER_UIE_Pos                (0UL)                     /*!< UIE (Bit 0)                                           */
#define TIM10_DIER_UIE_Msk                (0x1UL)                   /*!< UIE (Bitfield-Mask: 0x01)                             */
/* ==========================================================  SR  =========================================================== */
#define TIM10_SR_CC1OF_Pos                (9UL)                     /*!< CC1OF (Bit 9)                                         */
#define TIM10_SR_CC1OF_Msk                (0x200UL)                 /*!< CC1OF (Bitfield-Mask: 0x01)                           */
#define TIM10_SR_CC1IF_Pos                (1UL)                     /*!< CC1IF (Bit 1)                                         */
#define TIM10_SR_CC1IF_Msk                (0x2UL)                   /*!< CC1IF (Bitfield-Mask: 0x01)                           */
#define TIM10_SR_UIF_Pos                  (0UL)                     /*!< UIF (Bit 0)                                           */
#define TIM10_SR_UIF_Msk                  (0x1UL)                   /*!< UIF (Bitfield-Mask: 0x01)                             */
/* ==========================================================  EGR  ========================================================== */
#define TIM10_EGR_CC1G_Pos                (1UL)                     /*!< CC1G (Bit 1)                                          */
#define TIM10_EGR_CC1G_Msk                (0x2UL)                   /*!< CC1G (Bitfield-Mask: 0x01)                            */
#define TIM10_EGR_UG_Pos                  (0UL)                     /*!< UG (Bit 0)                                            */
#define TIM10_EGR_UG_Msk                  (0x1UL)                   /*!< UG (Bitfield-Mask: 0x01)                              */
/* =====================================================  CCMR1_Output  ====================================================== */
#define TIM10_CCMR1_Output_OC1M_Pos       (4UL)                     /*!< OC1M (Bit 4)                                          */
#define TIM10_CCMR1_Output_OC1M_Msk       (0x70UL)                  /*!< OC1M (Bitfield-Mask: 0x07)                            */
#define TIM10_CCMR1_Output_OC1PE_Pos      (3UL)                     /*!< OC1PE (Bit 3)                                         */
#define TIM10_CCMR1_Output_OC1PE_Msk      (0x8UL)                   /*!< OC1PE (Bitfield-Mask: 0x01)                           */
#define TIM10_CCMR1_Output_OC1FE_Pos      (2UL)                     /*!< OC1FE (Bit 2)                                         */
#define TIM10_CCMR1_Output_OC1FE_Msk      (0x4UL)                   /*!< OC1FE (Bitfield-Mask: 0x01)                           */
#define TIM10_CCMR1_Output_CC1S_Pos       (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM10_CCMR1_Output_CC1S_Msk       (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* ======================================================  CCMR1_Input  ====================================================== */
#define TIM10_CCMR1_Input_IC1F_Pos        (4UL)                     /*!< IC1F (Bit 4)                                          */
#define TIM10_CCMR1_Input_IC1F_Msk        (0xf0UL)                  /*!< IC1F (Bitfield-Mask: 0x0f)                            */
#define TIM10_CCMR1_Input_ICPCS_Pos       (2UL)                     /*!< ICPCS (Bit 2)                                         */
#define TIM10_CCMR1_Input_ICPCS_Msk       (0xcUL)                   /*!< ICPCS (Bitfield-Mask: 0x03)                           */
#define TIM10_CCMR1_Input_CC1S_Pos        (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM10_CCMR1_Input_CC1S_Msk        (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* =========================================================  CCER  ========================================================== */
#define TIM10_CCER_CC1NP_Pos              (3UL)                     /*!< CC1NP (Bit 3)                                         */
#define TIM10_CCER_CC1NP_Msk              (0x8UL)                   /*!< CC1NP (Bitfield-Mask: 0x01)                           */
#define TIM10_CCER_CC1P_Pos               (1UL)                     /*!< CC1P (Bit 1)                                          */
#define TIM10_CCER_CC1P_Msk               (0x2UL)                   /*!< CC1P (Bitfield-Mask: 0x01)                            */
#define TIM10_CCER_CC1E_Pos               (0UL)                     /*!< CC1E (Bit 0)                                          */
#define TIM10_CCER_CC1E_Msk               (0x1UL)                   /*!< CC1E (Bitfield-Mask: 0x01)                            */
/* ==========================================================  CNT  ========================================================== */
#define TIM10_CNT_CNT_Pos                 (0UL)                     /*!< CNT (Bit 0)                                           */
#define TIM10_CNT_CNT_Msk                 (0xffffUL)                /*!< CNT (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  PSC  ========================================================== */
#define TIM10_PSC_PSC_Pos                 (0UL)                     /*!< PSC (Bit 0)                                           */
#define TIM10_PSC_PSC_Msk                 (0xffffUL)                /*!< PSC (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  ARR  ========================================================== */
#define TIM10_ARR_ARR_Pos                 (0UL)                     /*!< ARR (Bit 0)                                           */
#define TIM10_ARR_ARR_Msk                 (0xffffUL)                /*!< ARR (Bitfield-Mask: 0xffff)                           */
/* =========================================================  CCR1  ========================================================== */
#define TIM10_CCR1_CCR1_Pos               (0UL)                     /*!< CCR1 (Bit 0)                                          */
#define TIM10_CCR1_CCR1_Msk               (0xffffUL)                /*!< CCR1 (Bitfield-Mask: 0xffff)                          */
/* =========================================================  SMCR  ========================================================== */
#define TIM10_SMCR_SMS3_Pos               (16UL)                    /*!< SMS3 (Bit 16)                                         */
#define TIM10_SMCR_SMS3_Msk               (0x10000UL)               /*!< SMS3 (Bitfield-Mask: 0x01)                            */
#define TIM10_SMCR_ETP_Pos                (15UL)                    /*!< ETP (Bit 15)                                          */
#define TIM10_SMCR_ETP_Msk                (0x8000UL)                /*!< ETP (Bitfield-Mask: 0x01)                             */
#define TIM10_SMCR_ECE_Pos                (14UL)                    /*!< ECE (Bit 14)                                          */
#define TIM10_SMCR_ECE_Msk                (0x4000UL)                /*!< ECE (Bitfield-Mask: 0x01)                             */
#define TIM10_SMCR_ETPS_Pos               (12UL)                    /*!< ETPS (Bit 12)                                         */
#define TIM10_SMCR_ETPS_Msk               (0x3000UL)                /*!< ETPS (Bitfield-Mask: 0x03)                            */
#define TIM10_SMCR_ETF_Pos                (8UL)                     /*!< ETF (Bit 8)                                           */
#define TIM10_SMCR_ETF_Msk                (0xf00UL)                 /*!< ETF (Bitfield-Mask: 0x0f)                             */
#define TIM10_SMCR_MSM_Pos                (7UL)                     /*!< MSM (Bit 7)                                           */
#define TIM10_SMCR_MSM_Msk                (0x80UL)                  /*!< MSM (Bitfield-Mask: 0x01)                             */
#define TIM10_SMCR_TS_Pos                 (4UL)                     /*!< TS (Bit 4)                                            */
#define TIM10_SMCR_TS_Msk                 (0x70UL)                  /*!< TS (Bitfield-Mask: 0x07)                              */
#define TIM10_SMCR_SMS_Pos                (0UL)                     /*!< SMS (Bit 0)                                           */
#define TIM10_SMCR_SMS_Msk                (0x7UL)                   /*!< SMS (Bitfield-Mask: 0x07)                             */
/* ==========================================================  OR  =========================================================== */
#define TIM10_OR_TI1_RMP_Pos              (0UL)                     /*!< TI1_RMP (Bit 0)                                       */
#define TIM10_OR_TI1_RMP_Msk              (0x3UL)                   /*!< TI1_RMP (Bitfield-Mask: 0x03)                         */


/* =========================================================================================================================== */
/* ================                                           TIM9                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR1  ========================================================== */
#define TIM9_CR1_CKD_Pos                  (8UL)                     /*!< CKD (Bit 8)                                           */
#define TIM9_CR1_CKD_Msk                  (0x300UL)                 /*!< CKD (Bitfield-Mask: 0x03)                             */
#define TIM9_CR1_ARPE_Pos                 (7UL)                     /*!< ARPE (Bit 7)                                          */
#define TIM9_CR1_ARPE_Msk                 (0x80UL)                  /*!< ARPE (Bitfield-Mask: 0x01)                            */
#define TIM9_CR1_OPM_Pos                  (3UL)                     /*!< OPM (Bit 3)                                           */
#define TIM9_CR1_OPM_Msk                  (0x8UL)                   /*!< OPM (Bitfield-Mask: 0x01)                             */
#define TIM9_CR1_URS_Pos                  (2UL)                     /*!< URS (Bit 2)                                           */
#define TIM9_CR1_URS_Msk                  (0x4UL)                   /*!< URS (Bitfield-Mask: 0x01)                             */
#define TIM9_CR1_UDIS_Pos                 (1UL)                     /*!< UDIS (Bit 1)                                          */
#define TIM9_CR1_UDIS_Msk                 (0x2UL)                   /*!< UDIS (Bitfield-Mask: 0x01)                            */
#define TIM9_CR1_CEN_Pos                  (0UL)                     /*!< CEN (Bit 0)                                           */
#define TIM9_CR1_CEN_Msk                  (0x1UL)                   /*!< CEN (Bitfield-Mask: 0x01)                             */
/* =========================================================  SMCR  ========================================================== */
#define TIM9_SMCR_MSM_Pos                 (7UL)                     /*!< MSM (Bit 7)                                           */
#define TIM9_SMCR_MSM_Msk                 (0x80UL)                  /*!< MSM (Bitfield-Mask: 0x01)                             */
#define TIM9_SMCR_TS_Pos                  (4UL)                     /*!< TS (Bit 4)                                            */
#define TIM9_SMCR_TS_Msk                  (0x70UL)                  /*!< TS (Bitfield-Mask: 0x07)                              */
#define TIM9_SMCR_SMS_Pos                 (0UL)                     /*!< SMS (Bit 0)                                           */
#define TIM9_SMCR_SMS_Msk                 (0x7UL)                   /*!< SMS (Bitfield-Mask: 0x07)                             */
/* =========================================================  DIER  ========================================================== */
#define TIM9_DIER_TIE_Pos                 (6UL)                     /*!< TIE (Bit 6)                                           */
#define TIM9_DIER_TIE_Msk                 (0x40UL)                  /*!< TIE (Bitfield-Mask: 0x01)                             */
#define TIM9_DIER_CC2IE_Pos               (2UL)                     /*!< CC2IE (Bit 2)                                         */
#define TIM9_DIER_CC2IE_Msk               (0x4UL)                   /*!< CC2IE (Bitfield-Mask: 0x01)                           */
#define TIM9_DIER_CC1IE_Pos               (1UL)                     /*!< CC1IE (Bit 1)                                         */
#define TIM9_DIER_CC1IE_Msk               (0x2UL)                   /*!< CC1IE (Bitfield-Mask: 0x01)                           */
#define TIM9_DIER_UIE_Pos                 (0UL)                     /*!< UIE (Bit 0)                                           */
#define TIM9_DIER_UIE_Msk                 (0x1UL)                   /*!< UIE (Bitfield-Mask: 0x01)                             */
/* ==========================================================  SR  =========================================================== */
#define TIM9_SR_CC2OF_Pos                 (10UL)                    /*!< CC2OF (Bit 10)                                        */
#define TIM9_SR_CC2OF_Msk                 (0x400UL)                 /*!< CC2OF (Bitfield-Mask: 0x01)                           */
#define TIM9_SR_CC1OF_Pos                 (9UL)                     /*!< CC1OF (Bit 9)                                         */
#define TIM9_SR_CC1OF_Msk                 (0x200UL)                 /*!< CC1OF (Bitfield-Mask: 0x01)                           */
#define TIM9_SR_TIF_Pos                   (6UL)                     /*!< TIF (Bit 6)                                           */
#define TIM9_SR_TIF_Msk                   (0x40UL)                  /*!< TIF (Bitfield-Mask: 0x01)                             */
#define TIM9_SR_CC2IF_Pos                 (2UL)                     /*!< CC2IF (Bit 2)                                         */
#define TIM9_SR_CC2IF_Msk                 (0x4UL)                   /*!< CC2IF (Bitfield-Mask: 0x01)                           */
#define TIM9_SR_CC1IF_Pos                 (1UL)                     /*!< CC1IF (Bit 1)                                         */
#define TIM9_SR_CC1IF_Msk                 (0x2UL)                   /*!< CC1IF (Bitfield-Mask: 0x01)                           */
#define TIM9_SR_UIF_Pos                   (0UL)                     /*!< UIF (Bit 0)                                           */
#define TIM9_SR_UIF_Msk                   (0x1UL)                   /*!< UIF (Bitfield-Mask: 0x01)                             */
/* ==========================================================  EGR  ========================================================== */
#define TIM9_EGR_TG_Pos                   (6UL)                     /*!< TG (Bit 6)                                            */
#define TIM9_EGR_TG_Msk                   (0x40UL)                  /*!< TG (Bitfield-Mask: 0x01)                              */
#define TIM9_EGR_CC2G_Pos                 (2UL)                     /*!< CC2G (Bit 2)                                          */
#define TIM9_EGR_CC2G_Msk                 (0x4UL)                   /*!< CC2G (Bitfield-Mask: 0x01)                            */
#define TIM9_EGR_CC1G_Pos                 (1UL)                     /*!< CC1G (Bit 1)                                          */
#define TIM9_EGR_CC1G_Msk                 (0x2UL)                   /*!< CC1G (Bitfield-Mask: 0x01)                            */
#define TIM9_EGR_UG_Pos                   (0UL)                     /*!< UG (Bit 0)                                            */
#define TIM9_EGR_UG_Msk                   (0x1UL)                   /*!< UG (Bitfield-Mask: 0x01)                              */
/* =====================================================  CCMR1_Output  ====================================================== */
#define TIM9_CCMR1_Output_OC2M_Pos        (12UL)                    /*!< OC2M (Bit 12)                                         */
#define TIM9_CCMR1_Output_OC2M_Msk        (0x7000UL)                /*!< OC2M (Bitfield-Mask: 0x07)                            */
#define TIM9_CCMR1_Output_OC2PE_Pos       (11UL)                    /*!< OC2PE (Bit 11)                                        */
#define TIM9_CCMR1_Output_OC2PE_Msk       (0x800UL)                 /*!< OC2PE (Bitfield-Mask: 0x01)                           */
#define TIM9_CCMR1_Output_OC2FE_Pos       (10UL)                    /*!< OC2FE (Bit 10)                                        */
#define TIM9_CCMR1_Output_OC2FE_Msk       (0x400UL)                 /*!< OC2FE (Bitfield-Mask: 0x01)                           */
#define TIM9_CCMR1_Output_CC2S_Pos        (8UL)                     /*!< CC2S (Bit 8)                                          */
#define TIM9_CCMR1_Output_CC2S_Msk        (0x300UL)                 /*!< CC2S (Bitfield-Mask: 0x03)                            */
#define TIM9_CCMR1_Output_OC1M_Pos        (4UL)                     /*!< OC1M (Bit 4)                                          */
#define TIM9_CCMR1_Output_OC1M_Msk        (0x70UL)                  /*!< OC1M (Bitfield-Mask: 0x07)                            */
#define TIM9_CCMR1_Output_OC1PE_Pos       (3UL)                     /*!< OC1PE (Bit 3)                                         */
#define TIM9_CCMR1_Output_OC1PE_Msk       (0x8UL)                   /*!< OC1PE (Bitfield-Mask: 0x01)                           */
#define TIM9_CCMR1_Output_OC1FE_Pos       (2UL)                     /*!< OC1FE (Bit 2)                                         */
#define TIM9_CCMR1_Output_OC1FE_Msk       (0x4UL)                   /*!< OC1FE (Bitfield-Mask: 0x01)                           */
#define TIM9_CCMR1_Output_CC1S_Pos        (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM9_CCMR1_Output_CC1S_Msk        (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* ======================================================  CCMR1_Input  ====================================================== */
#define TIM9_CCMR1_Input_IC2F_Pos         (12UL)                    /*!< IC2F (Bit 12)                                         */
#define TIM9_CCMR1_Input_IC2F_Msk         (0x7000UL)                /*!< IC2F (Bitfield-Mask: 0x07)                            */
#define TIM9_CCMR1_Input_IC2PCS_Pos       (10UL)                    /*!< IC2PCS (Bit 10)                                       */
#define TIM9_CCMR1_Input_IC2PCS_Msk       (0xc00UL)                 /*!< IC2PCS (Bitfield-Mask: 0x03)                          */
#define TIM9_CCMR1_Input_CC2S_Pos         (8UL)                     /*!< CC2S (Bit 8)                                          */
#define TIM9_CCMR1_Input_CC2S_Msk         (0x300UL)                 /*!< CC2S (Bitfield-Mask: 0x03)                            */
#define TIM9_CCMR1_Input_IC1F_Pos         (4UL)                     /*!< IC1F (Bit 4)                                          */
#define TIM9_CCMR1_Input_IC1F_Msk         (0x70UL)                  /*!< IC1F (Bitfield-Mask: 0x07)                            */
#define TIM9_CCMR1_Input_ICPCS_Pos        (2UL)                     /*!< ICPCS (Bit 2)                                         */
#define TIM9_CCMR1_Input_ICPCS_Msk        (0xcUL)                   /*!< ICPCS (Bitfield-Mask: 0x03)                           */
#define TIM9_CCMR1_Input_CC1S_Pos         (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM9_CCMR1_Input_CC1S_Msk         (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* =========================================================  CCER  ========================================================== */
#define TIM9_CCER_CC2NP_Pos               (7UL)                     /*!< CC2NP (Bit 7)                                         */
#define TIM9_CCER_CC2NP_Msk               (0x80UL)                  /*!< CC2NP (Bitfield-Mask: 0x01)                           */
#define TIM9_CCER_CC2P_Pos                (5UL)                     /*!< CC2P (Bit 5)                                          */
#define TIM9_CCER_CC2P_Msk                (0x20UL)                  /*!< CC2P (Bitfield-Mask: 0x01)                            */
#define TIM9_CCER_CC2E_Pos                (4UL)                     /*!< CC2E (Bit 4)                                          */
#define TIM9_CCER_CC2E_Msk                (0x10UL)                  /*!< CC2E (Bitfield-Mask: 0x01)                            */
#define TIM9_CCER_CC1NP_Pos               (3UL)                     /*!< CC1NP (Bit 3)                                         */
#define TIM9_CCER_CC1NP_Msk               (0x8UL)                   /*!< CC1NP (Bitfield-Mask: 0x01)                           */
#define TIM9_CCER_CC1P_Pos                (1UL)                     /*!< CC1P (Bit 1)                                          */
#define TIM9_CCER_CC1P_Msk                (0x2UL)                   /*!< CC1P (Bitfield-Mask: 0x01)                            */
#define TIM9_CCER_CC1E_Pos                (0UL)                     /*!< CC1E (Bit 0)                                          */
#define TIM9_CCER_CC1E_Msk                (0x1UL)                   /*!< CC1E (Bitfield-Mask: 0x01)                            */
/* ==========================================================  CNT  ========================================================== */
#define TIM9_CNT_CNT_Pos                  (0UL)                     /*!< CNT (Bit 0)                                           */
#define TIM9_CNT_CNT_Msk                  (0xffffUL)                /*!< CNT (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  PSC  ========================================================== */
#define TIM9_PSC_PSC_Pos                  (0UL)                     /*!< PSC (Bit 0)                                           */
#define TIM9_PSC_PSC_Msk                  (0xffffUL)                /*!< PSC (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  ARR  ========================================================== */
#define TIM9_ARR_ARR_Pos                  (0UL)                     /*!< ARR (Bit 0)                                           */
#define TIM9_ARR_ARR_Msk                  (0xffffUL)                /*!< ARR (Bitfield-Mask: 0xffff)                           */
/* =========================================================  CCR1  ========================================================== */
#define TIM9_CCR1_CCR1_Pos                (0UL)                     /*!< CCR1 (Bit 0)                                          */
#define TIM9_CCR1_CCR1_Msk                (0xffffUL)                /*!< CCR1 (Bitfield-Mask: 0xffff)                          */
/* =========================================================  CCR2  ========================================================== */
#define TIM9_CCR2_CCR2_Pos                (0UL)                     /*!< CCR2 (Bit 0)                                          */
#define TIM9_CCR2_CCR2_Msk                (0xffffUL)                /*!< CCR2 (Bitfield-Mask: 0xffff)                          */


/* =========================================================================================================================== */
/* ================                                           TIM4                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR1  ========================================================== */
#define TIM4_CR1_CKD_Pos                  (8UL)                     /*!< CKD (Bit 8)                                           */
#define TIM4_CR1_CKD_Msk                  (0x300UL)                 /*!< CKD (Bitfield-Mask: 0x03)                             */
#define TIM4_CR1_ARPE_Pos                 (7UL)                     /*!< ARPE (Bit 7)                                          */
#define TIM4_CR1_ARPE_Msk                 (0x80UL)                  /*!< ARPE (Bitfield-Mask: 0x01)                            */
#define TIM4_CR1_CMS_Pos                  (5UL)                     /*!< CMS (Bit 5)                                           */
#define TIM4_CR1_CMS_Msk                  (0x60UL)                  /*!< CMS (Bitfield-Mask: 0x03)                             */
#define TIM4_CR1_DIR_Pos                  (4UL)                     /*!< DIR (Bit 4)                                           */
#define TIM4_CR1_DIR_Msk                  (0x10UL)                  /*!< DIR (Bitfield-Mask: 0x01)                             */
#define TIM4_CR1_OPM_Pos                  (3UL)                     /*!< OPM (Bit 3)                                           */
#define TIM4_CR1_OPM_Msk                  (0x8UL)                   /*!< OPM (Bitfield-Mask: 0x01)                             */
#define TIM4_CR1_URS_Pos                  (2UL)                     /*!< URS (Bit 2)                                           */
#define TIM4_CR1_URS_Msk                  (0x4UL)                   /*!< URS (Bitfield-Mask: 0x01)                             */
#define TIM4_CR1_UDIS_Pos                 (1UL)                     /*!< UDIS (Bit 1)                                          */
#define TIM4_CR1_UDIS_Msk                 (0x2UL)                   /*!< UDIS (Bitfield-Mask: 0x01)                            */
#define TIM4_CR1_CEN_Pos                  (0UL)                     /*!< CEN (Bit 0)                                           */
#define TIM4_CR1_CEN_Msk                  (0x1UL)                   /*!< CEN (Bitfield-Mask: 0x01)                             */
/* ==========================================================  CR2  ========================================================== */
#define TIM4_CR2_TI1S_Pos                 (7UL)                     /*!< TI1S (Bit 7)                                          */
#define TIM4_CR2_TI1S_Msk                 (0x80UL)                  /*!< TI1S (Bitfield-Mask: 0x01)                            */
#define TIM4_CR2_MMS_Pos                  (4UL)                     /*!< MMS (Bit 4)                                           */
#define TIM4_CR2_MMS_Msk                  (0x70UL)                  /*!< MMS (Bitfield-Mask: 0x07)                             */
#define TIM4_CR2_CCDS_Pos                 (3UL)                     /*!< CCDS (Bit 3)                                          */
#define TIM4_CR2_CCDS_Msk                 (0x8UL)                   /*!< CCDS (Bitfield-Mask: 0x01)                            */
/* =========================================================  SMCR  ========================================================== */
#define TIM4_SMCR_ETP_Pos                 (15UL)                    /*!< ETP (Bit 15)                                          */
#define TIM4_SMCR_ETP_Msk                 (0x8000UL)                /*!< ETP (Bitfield-Mask: 0x01)                             */
#define TIM4_SMCR_ECE_Pos                 (14UL)                    /*!< ECE (Bit 14)                                          */
#define TIM4_SMCR_ECE_Msk                 (0x4000UL)                /*!< ECE (Bitfield-Mask: 0x01)                             */
#define TIM4_SMCR_ETPS_Pos                (12UL)                    /*!< ETPS (Bit 12)                                         */
#define TIM4_SMCR_ETPS_Msk                (0x3000UL)                /*!< ETPS (Bitfield-Mask: 0x03)                            */
#define TIM4_SMCR_ETF_Pos                 (8UL)                     /*!< ETF (Bit 8)                                           */
#define TIM4_SMCR_ETF_Msk                 (0xf00UL)                 /*!< ETF (Bitfield-Mask: 0x0f)                             */
#define TIM4_SMCR_MSM_Pos                 (7UL)                     /*!< MSM (Bit 7)                                           */
#define TIM4_SMCR_MSM_Msk                 (0x80UL)                  /*!< MSM (Bitfield-Mask: 0x01)                             */
#define TIM4_SMCR_TS_Pos                  (4UL)                     /*!< TS (Bit 4)                                            */
#define TIM4_SMCR_TS_Msk                  (0x70UL)                  /*!< TS (Bitfield-Mask: 0x07)                              */
#define TIM4_SMCR_SMS_Pos                 (0UL)                     /*!< SMS (Bit 0)                                           */
#define TIM4_SMCR_SMS_Msk                 (0x7UL)                   /*!< SMS (Bitfield-Mask: 0x07)                             */
/* =========================================================  DIER  ========================================================== */
#define TIM4_DIER_TDE_Pos                 (14UL)                    /*!< TDE (Bit 14)                                          */
#define TIM4_DIER_TDE_Msk                 (0x4000UL)                /*!< TDE (Bitfield-Mask: 0x01)                             */
#define TIM4_DIER_CC4DE_Pos               (12UL)                    /*!< CC4DE (Bit 12)                                        */
#define TIM4_DIER_CC4DE_Msk               (0x1000UL)                /*!< CC4DE (Bitfield-Mask: 0x01)                           */
#define TIM4_DIER_CC3DE_Pos               (11UL)                    /*!< CC3DE (Bit 11)                                        */
#define TIM4_DIER_CC3DE_Msk               (0x800UL)                 /*!< CC3DE (Bitfield-Mask: 0x01)                           */
#define TIM4_DIER_CC2DE_Pos               (10UL)                    /*!< CC2DE (Bit 10)                                        */
#define TIM4_DIER_CC2DE_Msk               (0x400UL)                 /*!< CC2DE (Bitfield-Mask: 0x01)                           */
#define TIM4_DIER_CC1DE_Pos               (9UL)                     /*!< CC1DE (Bit 9)                                         */
#define TIM4_DIER_CC1DE_Msk               (0x200UL)                 /*!< CC1DE (Bitfield-Mask: 0x01)                           */
#define TIM4_DIER_UDE_Pos                 (8UL)                     /*!< UDE (Bit 8)                                           */
#define TIM4_DIER_UDE_Msk                 (0x100UL)                 /*!< UDE (Bitfield-Mask: 0x01)                             */
#define TIM4_DIER_TIE_Pos                 (6UL)                     /*!< TIE (Bit 6)                                           */
#define TIM4_DIER_TIE_Msk                 (0x40UL)                  /*!< TIE (Bitfield-Mask: 0x01)                             */
#define TIM4_DIER_CC4IE_Pos               (4UL)                     /*!< CC4IE (Bit 4)                                         */
#define TIM4_DIER_CC4IE_Msk               (0x10UL)                  /*!< CC4IE (Bitfield-Mask: 0x01)                           */
#define TIM4_DIER_CC3IE_Pos               (3UL)                     /*!< CC3IE (Bit 3)                                         */
#define TIM4_DIER_CC3IE_Msk               (0x8UL)                   /*!< CC3IE (Bitfield-Mask: 0x01)                           */
#define TIM4_DIER_CC2IE_Pos               (2UL)                     /*!< CC2IE (Bit 2)                                         */
#define TIM4_DIER_CC2IE_Msk               (0x4UL)                   /*!< CC2IE (Bitfield-Mask: 0x01)                           */
#define TIM4_DIER_CC1IE_Pos               (1UL)                     /*!< CC1IE (Bit 1)                                         */
#define TIM4_DIER_CC1IE_Msk               (0x2UL)                   /*!< CC1IE (Bitfield-Mask: 0x01)                           */
#define TIM4_DIER_UIE_Pos                 (0UL)                     /*!< UIE (Bit 0)                                           */
#define TIM4_DIER_UIE_Msk                 (0x1UL)                   /*!< UIE (Bitfield-Mask: 0x01)                             */
/* ==========================================================  SR  =========================================================== */
#define TIM4_SR_CC4OF_Pos                 (12UL)                    /*!< CC4OF (Bit 12)                                        */
#define TIM4_SR_CC4OF_Msk                 (0x1000UL)                /*!< CC4OF (Bitfield-Mask: 0x01)                           */
#define TIM4_SR_CC3OF_Pos                 (11UL)                    /*!< CC3OF (Bit 11)                                        */
#define TIM4_SR_CC3OF_Msk                 (0x800UL)                 /*!< CC3OF (Bitfield-Mask: 0x01)                           */
#define TIM4_SR_CC2OF_Pos                 (10UL)                    /*!< CC2OF (Bit 10)                                        */
#define TIM4_SR_CC2OF_Msk                 (0x400UL)                 /*!< CC2OF (Bitfield-Mask: 0x01)                           */
#define TIM4_SR_CC1OF_Pos                 (9UL)                     /*!< CC1OF (Bit 9)                                         */
#define TIM4_SR_CC1OF_Msk                 (0x200UL)                 /*!< CC1OF (Bitfield-Mask: 0x01)                           */
#define TIM4_SR_TIF_Pos                   (6UL)                     /*!< TIF (Bit 6)                                           */
#define TIM4_SR_TIF_Msk                   (0x40UL)                  /*!< TIF (Bitfield-Mask: 0x01)                             */
#define TIM4_SR_CC4IF_Pos                 (4UL)                     /*!< CC4IF (Bit 4)                                         */
#define TIM4_SR_CC4IF_Msk                 (0x10UL)                  /*!< CC4IF (Bitfield-Mask: 0x01)                           */
#define TIM4_SR_CC3IF_Pos                 (3UL)                     /*!< CC3IF (Bit 3)                                         */
#define TIM4_SR_CC3IF_Msk                 (0x8UL)                   /*!< CC3IF (Bitfield-Mask: 0x01)                           */
#define TIM4_SR_CC2IF_Pos                 (2UL)                     /*!< CC2IF (Bit 2)                                         */
#define TIM4_SR_CC2IF_Msk                 (0x4UL)                   /*!< CC2IF (Bitfield-Mask: 0x01)                           */
#define TIM4_SR_CC1IF_Pos                 (1UL)                     /*!< CC1IF (Bit 1)                                         */
#define TIM4_SR_CC1IF_Msk                 (0x2UL)                   /*!< CC1IF (Bitfield-Mask: 0x01)                           */
#define TIM4_SR_UIF_Pos                   (0UL)                     /*!< UIF (Bit 0)                                           */
#define TIM4_SR_UIF_Msk                   (0x1UL)                   /*!< UIF (Bitfield-Mask: 0x01)                             */
/* ==========================================================  EGR  ========================================================== */
#define TIM4_EGR_TG_Pos                   (6UL)                     /*!< TG (Bit 6)                                            */
#define TIM4_EGR_TG_Msk                   (0x40UL)                  /*!< TG (Bitfield-Mask: 0x01)                              */
#define TIM4_EGR_CC4G_Pos                 (4UL)                     /*!< CC4G (Bit 4)                                          */
#define TIM4_EGR_CC4G_Msk                 (0x10UL)                  /*!< CC4G (Bitfield-Mask: 0x01)                            */
#define TIM4_EGR_CC3G_Pos                 (3UL)                     /*!< CC3G (Bit 3)                                          */
#define TIM4_EGR_CC3G_Msk                 (0x8UL)                   /*!< CC3G (Bitfield-Mask: 0x01)                            */
#define TIM4_EGR_CC2G_Pos                 (2UL)                     /*!< CC2G (Bit 2)                                          */
#define TIM4_EGR_CC2G_Msk                 (0x4UL)                   /*!< CC2G (Bitfield-Mask: 0x01)                            */
#define TIM4_EGR_CC1G_Pos                 (1UL)                     /*!< CC1G (Bit 1)                                          */
#define TIM4_EGR_CC1G_Msk                 (0x2UL)                   /*!< CC1G (Bitfield-Mask: 0x01)                            */
#define TIM4_EGR_UG_Pos                   (0UL)                     /*!< UG (Bit 0)                                            */
#define TIM4_EGR_UG_Msk                   (0x1UL)                   /*!< UG (Bitfield-Mask: 0x01)                              */
/* =====================================================  CCMR1_Output  ====================================================== */
#define TIM4_CCMR1_Output_OC2CE_Pos       (15UL)                    /*!< OC2CE (Bit 15)                                        */
#define TIM4_CCMR1_Output_OC2CE_Msk       (0x8000UL)                /*!< OC2CE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR1_Output_OC2M_Pos        (12UL)                    /*!< OC2M (Bit 12)                                         */
#define TIM4_CCMR1_Output_OC2M_Msk        (0x7000UL)                /*!< OC2M (Bitfield-Mask: 0x07)                            */
#define TIM4_CCMR1_Output_OC2PE_Pos       (11UL)                    /*!< OC2PE (Bit 11)                                        */
#define TIM4_CCMR1_Output_OC2PE_Msk       (0x800UL)                 /*!< OC2PE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR1_Output_OC2FE_Pos       (10UL)                    /*!< OC2FE (Bit 10)                                        */
#define TIM4_CCMR1_Output_OC2FE_Msk       (0x400UL)                 /*!< OC2FE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR1_Output_CC2S_Pos        (8UL)                     /*!< CC2S (Bit 8)                                          */
#define TIM4_CCMR1_Output_CC2S_Msk        (0x300UL)                 /*!< CC2S (Bitfield-Mask: 0x03)                            */
#define TIM4_CCMR1_Output_OC1CE_Pos       (7UL)                     /*!< OC1CE (Bit 7)                                         */
#define TIM4_CCMR1_Output_OC1CE_Msk       (0x80UL)                  /*!< OC1CE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR1_Output_OC1M_Pos        (4UL)                     /*!< OC1M (Bit 4)                                          */
#define TIM4_CCMR1_Output_OC1M_Msk        (0x70UL)                  /*!< OC1M (Bitfield-Mask: 0x07)                            */
#define TIM4_CCMR1_Output_OC1PE_Pos       (3UL)                     /*!< OC1PE (Bit 3)                                         */
#define TIM4_CCMR1_Output_OC1PE_Msk       (0x8UL)                   /*!< OC1PE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR1_Output_OC1FE_Pos       (2UL)                     /*!< OC1FE (Bit 2)                                         */
#define TIM4_CCMR1_Output_OC1FE_Msk       (0x4UL)                   /*!< OC1FE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR1_Output_CC1S_Pos        (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM4_CCMR1_Output_CC1S_Msk        (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* ======================================================  CCMR1_Input  ====================================================== */
#define TIM4_CCMR1_Input_IC2F_Pos         (12UL)                    /*!< IC2F (Bit 12)                                         */
#define TIM4_CCMR1_Input_IC2F_Msk         (0xf000UL)                /*!< IC2F (Bitfield-Mask: 0x0f)                            */
#define TIM4_CCMR1_Input_IC2PCS_Pos       (10UL)                    /*!< IC2PCS (Bit 10)                                       */
#define TIM4_CCMR1_Input_IC2PCS_Msk       (0xc00UL)                 /*!< IC2PCS (Bitfield-Mask: 0x03)                          */
#define TIM4_CCMR1_Input_CC2S_Pos         (8UL)                     /*!< CC2S (Bit 8)                                          */
#define TIM4_CCMR1_Input_CC2S_Msk         (0x300UL)                 /*!< CC2S (Bitfield-Mask: 0x03)                            */
#define TIM4_CCMR1_Input_IC1F_Pos         (4UL)                     /*!< IC1F (Bit 4)                                          */
#define TIM4_CCMR1_Input_IC1F_Msk         (0xf0UL)                  /*!< IC1F (Bitfield-Mask: 0x0f)                            */
#define TIM4_CCMR1_Input_ICPCS_Pos        (2UL)                     /*!< ICPCS (Bit 2)                                         */
#define TIM4_CCMR1_Input_ICPCS_Msk        (0xcUL)                   /*!< ICPCS (Bitfield-Mask: 0x03)                           */
#define TIM4_CCMR1_Input_CC1S_Pos         (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM4_CCMR1_Input_CC1S_Msk         (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* =====================================================  CCMR2_Output  ====================================================== */
#define TIM4_CCMR2_Output_O24CE_Pos       (15UL)                    /*!< O24CE (Bit 15)                                        */
#define TIM4_CCMR2_Output_O24CE_Msk       (0x8000UL)                /*!< O24CE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR2_Output_OC4M_Pos        (12UL)                    /*!< OC4M (Bit 12)                                         */
#define TIM4_CCMR2_Output_OC4M_Msk        (0x7000UL)                /*!< OC4M (Bitfield-Mask: 0x07)                            */
#define TIM4_CCMR2_Output_OC4PE_Pos       (11UL)                    /*!< OC4PE (Bit 11)                                        */
#define TIM4_CCMR2_Output_OC4PE_Msk       (0x800UL)                 /*!< OC4PE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR2_Output_OC4FE_Pos       (10UL)                    /*!< OC4FE (Bit 10)                                        */
#define TIM4_CCMR2_Output_OC4FE_Msk       (0x400UL)                 /*!< OC4FE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR2_Output_CC4S_Pos        (8UL)                     /*!< CC4S (Bit 8)                                          */
#define TIM4_CCMR2_Output_CC4S_Msk        (0x300UL)                 /*!< CC4S (Bitfield-Mask: 0x03)                            */
#define TIM4_CCMR2_Output_OC3CE_Pos       (7UL)                     /*!< OC3CE (Bit 7)                                         */
#define TIM4_CCMR2_Output_OC3CE_Msk       (0x80UL)                  /*!< OC3CE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR2_Output_OC3M_Pos        (4UL)                     /*!< OC3M (Bit 4)                                          */
#define TIM4_CCMR2_Output_OC3M_Msk        (0x70UL)                  /*!< OC3M (Bitfield-Mask: 0x07)                            */
#define TIM4_CCMR2_Output_OC3PE_Pos       (3UL)                     /*!< OC3PE (Bit 3)                                         */
#define TIM4_CCMR2_Output_OC3PE_Msk       (0x8UL)                   /*!< OC3PE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR2_Output_OC3FE_Pos       (2UL)                     /*!< OC3FE (Bit 2)                                         */
#define TIM4_CCMR2_Output_OC3FE_Msk       (0x4UL)                   /*!< OC3FE (Bitfield-Mask: 0x01)                           */
#define TIM4_CCMR2_Output_CC3S_Pos        (0UL)                     /*!< CC3S (Bit 0)                                          */
#define TIM4_CCMR2_Output_CC3S_Msk        (0x3UL)                   /*!< CC3S (Bitfield-Mask: 0x03)                            */
/* ======================================================  CCMR2_Input  ====================================================== */
#define TIM4_CCMR2_Input_IC4F_Pos         (12UL)                    /*!< IC4F (Bit 12)                                         */
#define TIM4_CCMR2_Input_IC4F_Msk         (0xf000UL)                /*!< IC4F (Bitfield-Mask: 0x0f)                            */
#define TIM4_CCMR2_Input_IC4PSC_Pos       (10UL)                    /*!< IC4PSC (Bit 10)                                       */
#define TIM4_CCMR2_Input_IC4PSC_Msk       (0xc00UL)                 /*!< IC4PSC (Bitfield-Mask: 0x03)                          */
#define TIM4_CCMR2_Input_CC4S_Pos         (8UL)                     /*!< CC4S (Bit 8)                                          */
#define TIM4_CCMR2_Input_CC4S_Msk         (0x300UL)                 /*!< CC4S (Bitfield-Mask: 0x03)                            */
#define TIM4_CCMR2_Input_IC3F_Pos         (4UL)                     /*!< IC3F (Bit 4)                                          */
#define TIM4_CCMR2_Input_IC3F_Msk         (0xf0UL)                  /*!< IC3F (Bitfield-Mask: 0x0f)                            */
#define TIM4_CCMR2_Input_IC3PSC_Pos       (2UL)                     /*!< IC3PSC (Bit 2)                                        */
#define TIM4_CCMR2_Input_IC3PSC_Msk       (0xcUL)                   /*!< IC3PSC (Bitfield-Mask: 0x03)                          */
#define TIM4_CCMR2_Input_CC3S_Pos         (0UL)                     /*!< CC3S (Bit 0)                                          */
#define TIM4_CCMR2_Input_CC3S_Msk         (0x3UL)                   /*!< CC3S (Bitfield-Mask: 0x03)                            */
/* =========================================================  CCER  ========================================================== */
#define TIM4_CCER_CC4NP_Pos               (15UL)                    /*!< CC4NP (Bit 15)                                        */
#define TIM4_CCER_CC4NP_Msk               (0x8000UL)                /*!< CC4NP (Bitfield-Mask: 0x01)                           */
#define TIM4_CCER_CC4P_Pos                (13UL)                    /*!< CC4P (Bit 13)                                         */
#define TIM4_CCER_CC4P_Msk                (0x2000UL)                /*!< CC4P (Bitfield-Mask: 0x01)                            */
#define TIM4_CCER_CC4E_Pos                (12UL)                    /*!< CC4E (Bit 12)                                         */
#define TIM4_CCER_CC4E_Msk                (0x1000UL)                /*!< CC4E (Bitfield-Mask: 0x01)                            */
#define TIM4_CCER_CC3NP_Pos               (11UL)                    /*!< CC3NP (Bit 11)                                        */
#define TIM4_CCER_CC3NP_Msk               (0x800UL)                 /*!< CC3NP (Bitfield-Mask: 0x01)                           */
#define TIM4_CCER_CC3P_Pos                (9UL)                     /*!< CC3P (Bit 9)                                          */
#define TIM4_CCER_CC3P_Msk                (0x200UL)                 /*!< CC3P (Bitfield-Mask: 0x01)                            */
#define TIM4_CCER_CC3E_Pos                (8UL)                     /*!< CC3E (Bit 8)                                          */
#define TIM4_CCER_CC3E_Msk                (0x100UL)                 /*!< CC3E (Bitfield-Mask: 0x01)                            */
#define TIM4_CCER_CC2NP_Pos               (7UL)                     /*!< CC2NP (Bit 7)                                         */
#define TIM4_CCER_CC2NP_Msk               (0x80UL)                  /*!< CC2NP (Bitfield-Mask: 0x01)                           */
#define TIM4_CCER_CC2P_Pos                (5UL)                     /*!< CC2P (Bit 5)                                          */
#define TIM4_CCER_CC2P_Msk                (0x20UL)                  /*!< CC2P (Bitfield-Mask: 0x01)                            */
#define TIM4_CCER_CC2E_Pos                (4UL)                     /*!< CC2E (Bit 4)                                          */
#define TIM4_CCER_CC2E_Msk                (0x10UL)                  /*!< CC2E (Bitfield-Mask: 0x01)                            */
#define TIM4_CCER_CC1NP_Pos               (3UL)                     /*!< CC1NP (Bit 3)                                         */
#define TIM4_CCER_CC1NP_Msk               (0x8UL)                   /*!< CC1NP (Bitfield-Mask: 0x01)                           */
#define TIM4_CCER_CC1P_Pos                (1UL)                     /*!< CC1P (Bit 1)                                          */
#define TIM4_CCER_CC1P_Msk                (0x2UL)                   /*!< CC1P (Bitfield-Mask: 0x01)                            */
#define TIM4_CCER_CC1E_Pos                (0UL)                     /*!< CC1E (Bit 0)                                          */
#define TIM4_CCER_CC1E_Msk                (0x1UL)                   /*!< CC1E (Bitfield-Mask: 0x01)                            */
/* ==========================================================  CNT  ========================================================== */
#define TIM4_CNT_CNT_H_Pos                (16UL)                    /*!< CNT_H (Bit 16)                                        */
#define TIM4_CNT_CNT_H_Msk                (0xffff0000UL)            /*!< CNT_H (Bitfield-Mask: 0xffff)                         */
#define TIM4_CNT_CNT_L_Pos                (0UL)                     /*!< CNT_L (Bit 0)                                         */
#define TIM4_CNT_CNT_L_Msk                (0xffffUL)                /*!< CNT_L (Bitfield-Mask: 0xffff)                         */
/* ==========================================================  PSC  ========================================================== */
#define TIM4_PSC_PSC_Pos                  (0UL)                     /*!< PSC (Bit 0)                                           */
#define TIM4_PSC_PSC_Msk                  (0xffffUL)                /*!< PSC (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  ARR  ========================================================== */
#define TIM4_ARR_ARR_H_Pos                (16UL)                    /*!< ARR_H (Bit 16)                                        */
#define TIM4_ARR_ARR_H_Msk                (0xffff0000UL)            /*!< ARR_H (Bitfield-Mask: 0xffff)                         */
#define TIM4_ARR_ARR_L_Pos                (0UL)                     /*!< ARR_L (Bit 0)                                         */
#define TIM4_ARR_ARR_L_Msk                (0xffffUL)                /*!< ARR_L (Bitfield-Mask: 0xffff)                         */
/* =========================================================  CCR1  ========================================================== */
#define TIM4_CCR1_CCR1_H_Pos              (16UL)                    /*!< CCR1_H (Bit 16)                                       */
#define TIM4_CCR1_CCR1_H_Msk              (0xffff0000UL)            /*!< CCR1_H (Bitfield-Mask: 0xffff)                        */
#define TIM4_CCR1_CCR1_L_Pos              (0UL)                     /*!< CCR1_L (Bit 0)                                        */
#define TIM4_CCR1_CCR1_L_Msk              (0xffffUL)                /*!< CCR1_L (Bitfield-Mask: 0xffff)                        */
/* =========================================================  CCR2  ========================================================== */
#define TIM4_CCR2_CCR2_H_Pos              (16UL)                    /*!< CCR2_H (Bit 16)                                       */
#define TIM4_CCR2_CCR2_H_Msk              (0xffff0000UL)            /*!< CCR2_H (Bitfield-Mask: 0xffff)                        */
#define TIM4_CCR2_CCR2_L_Pos              (0UL)                     /*!< CCR2_L (Bit 0)                                        */
#define TIM4_CCR2_CCR2_L_Msk              (0xffffUL)                /*!< CCR2_L (Bitfield-Mask: 0xffff)                        */
/* =========================================================  CCR3  ========================================================== */
#define TIM4_CCR3_CCR3_H_Pos              (16UL)                    /*!< CCR3_H (Bit 16)                                       */
#define TIM4_CCR3_CCR3_H_Msk              (0xffff0000UL)            /*!< CCR3_H (Bitfield-Mask: 0xffff)                        */
#define TIM4_CCR3_CCR3_L_Pos              (0UL)                     /*!< CCR3_L (Bit 0)                                        */
#define TIM4_CCR3_CCR3_L_Msk              (0xffffUL)                /*!< CCR3_L (Bitfield-Mask: 0xffff)                        */
/* =========================================================  CCR4  ========================================================== */
#define TIM4_CCR4_CCR4_H_Pos              (16UL)                    /*!< CCR4_H (Bit 16)                                       */
#define TIM4_CCR4_CCR4_H_Msk              (0xffff0000UL)            /*!< CCR4_H (Bitfield-Mask: 0xffff)                        */
#define TIM4_CCR4_CCR4_L_Pos              (0UL)                     /*!< CCR4_L (Bit 0)                                        */
#define TIM4_CCR4_CCR4_L_Msk              (0xffffUL)                /*!< CCR4_L (Bitfield-Mask: 0xffff)                        */
/* ==========================================================  DCR  ========================================================== */
#define TIM4_DCR_DBL_Pos                  (8UL)                     /*!< DBL (Bit 8)                                           */
#define TIM4_DCR_DBL_Msk                  (0x1f00UL)                /*!< DBL (Bitfield-Mask: 0x1f)                             */
#define TIM4_DCR_DBA_Pos                  (0UL)                     /*!< DBA (Bit 0)                                           */
#define TIM4_DCR_DBA_Msk                  (0x1fUL)                  /*!< DBA (Bitfield-Mask: 0x1f)                             */
/* =========================================================  DMAR  ========================================================== */
#define TIM4_DMAR_DMAB_Pos                (0UL)                     /*!< DMAB (Bit 0)                                          */
#define TIM4_DMAR_DMAB_Msk                (0xffffUL)                /*!< DMAB (Bitfield-Mask: 0xffff)                          */


/* =========================================================================================================================== */
/* ================                                           TIM3                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR1  ========================================================== */
#define TIM3_CR1_CKD_Pos                  (8UL)                     /*!< CKD (Bit 8)                                           */
#define TIM3_CR1_CKD_Msk                  (0x300UL)                 /*!< CKD (Bitfield-Mask: 0x03)                             */
#define TIM3_CR1_ARPE_Pos                 (7UL)                     /*!< ARPE (Bit 7)                                          */
#define TIM3_CR1_ARPE_Msk                 (0x80UL)                  /*!< ARPE (Bitfield-Mask: 0x01)                            */
#define TIM3_CR1_CMS_Pos                  (5UL)                     /*!< CMS (Bit 5)                                           */
#define TIM3_CR1_CMS_Msk                  (0x60UL)                  /*!< CMS (Bitfield-Mask: 0x03)                             */
#define TIM3_CR1_DIR_Pos                  (4UL)                     /*!< DIR (Bit 4)                                           */
#define TIM3_CR1_DIR_Msk                  (0x10UL)                  /*!< DIR (Bitfield-Mask: 0x01)                             */
#define TIM3_CR1_OPM_Pos                  (3UL)                     /*!< OPM (Bit 3)                                           */
#define TIM3_CR1_OPM_Msk                  (0x8UL)                   /*!< OPM (Bitfield-Mask: 0x01)                             */
#define TIM3_CR1_URS_Pos                  (2UL)                     /*!< URS (Bit 2)                                           */
#define TIM3_CR1_URS_Msk                  (0x4UL)                   /*!< URS (Bitfield-Mask: 0x01)                             */
#define TIM3_CR1_UDIS_Pos                 (1UL)                     /*!< UDIS (Bit 1)                                          */
#define TIM3_CR1_UDIS_Msk                 (0x2UL)                   /*!< UDIS (Bitfield-Mask: 0x01)                            */
#define TIM3_CR1_CEN_Pos                  (0UL)                     /*!< CEN (Bit 0)                                           */
#define TIM3_CR1_CEN_Msk                  (0x1UL)                   /*!< CEN (Bitfield-Mask: 0x01)                             */
/* ==========================================================  CR2  ========================================================== */
#define TIM3_CR2_TI1S_Pos                 (7UL)                     /*!< TI1S (Bit 7)                                          */
#define TIM3_CR2_TI1S_Msk                 (0x80UL)                  /*!< TI1S (Bitfield-Mask: 0x01)                            */
#define TIM3_CR2_MMS_Pos                  (4UL)                     /*!< MMS (Bit 4)                                           */
#define TIM3_CR2_MMS_Msk                  (0x70UL)                  /*!< MMS (Bitfield-Mask: 0x07)                             */
#define TIM3_CR2_CCDS_Pos                 (3UL)                     /*!< CCDS (Bit 3)                                          */
#define TIM3_CR2_CCDS_Msk                 (0x8UL)                   /*!< CCDS (Bitfield-Mask: 0x01)                            */
/* =========================================================  SMCR  ========================================================== */
#define TIM3_SMCR_ETP_Pos                 (15UL)                    /*!< ETP (Bit 15)                                          */
#define TIM3_SMCR_ETP_Msk                 (0x8000UL)                /*!< ETP (Bitfield-Mask: 0x01)                             */
#define TIM3_SMCR_ECE_Pos                 (14UL)                    /*!< ECE (Bit 14)                                          */
#define TIM3_SMCR_ECE_Msk                 (0x4000UL)                /*!< ECE (Bitfield-Mask: 0x01)                             */
#define TIM3_SMCR_ETPS_Pos                (12UL)                    /*!< ETPS (Bit 12)                                         */
#define TIM3_SMCR_ETPS_Msk                (0x3000UL)                /*!< ETPS (Bitfield-Mask: 0x03)                            */
#define TIM3_SMCR_ETF_Pos                 (8UL)                     /*!< ETF (Bit 8)                                           */
#define TIM3_SMCR_ETF_Msk                 (0xf00UL)                 /*!< ETF (Bitfield-Mask: 0x0f)                             */
#define TIM3_SMCR_MSM_Pos                 (7UL)                     /*!< MSM (Bit 7)                                           */
#define TIM3_SMCR_MSM_Msk                 (0x80UL)                  /*!< MSM (Bitfield-Mask: 0x01)                             */
#define TIM3_SMCR_TS_Pos                  (4UL)                     /*!< TS (Bit 4)                                            */
#define TIM3_SMCR_TS_Msk                  (0x70UL)                  /*!< TS (Bitfield-Mask: 0x07)                              */
#define TIM3_SMCR_SMS_Pos                 (0UL)                     /*!< SMS (Bit 0)                                           */
#define TIM3_SMCR_SMS_Msk                 (0x7UL)                   /*!< SMS (Bitfield-Mask: 0x07)                             */
/* =========================================================  DIER  ========================================================== */
#define TIM3_DIER_TDE_Pos                 (14UL)                    /*!< TDE (Bit 14)                                          */
#define TIM3_DIER_TDE_Msk                 (0x4000UL)                /*!< TDE (Bitfield-Mask: 0x01)                             */
#define TIM3_DIER_CC4DE_Pos               (12UL)                    /*!< CC4DE (Bit 12)                                        */
#define TIM3_DIER_CC4DE_Msk               (0x1000UL)                /*!< CC4DE (Bitfield-Mask: 0x01)                           */
#define TIM3_DIER_CC3DE_Pos               (11UL)                    /*!< CC3DE (Bit 11)                                        */
#define TIM3_DIER_CC3DE_Msk               (0x800UL)                 /*!< CC3DE (Bitfield-Mask: 0x01)                           */
#define TIM3_DIER_CC2DE_Pos               (10UL)                    /*!< CC2DE (Bit 10)                                        */
#define TIM3_DIER_CC2DE_Msk               (0x400UL)                 /*!< CC2DE (Bitfield-Mask: 0x01)                           */
#define TIM3_DIER_CC1DE_Pos               (9UL)                     /*!< CC1DE (Bit 9)                                         */
#define TIM3_DIER_CC1DE_Msk               (0x200UL)                 /*!< CC1DE (Bitfield-Mask: 0x01)                           */
#define TIM3_DIER_UDE_Pos                 (8UL)                     /*!< UDE (Bit 8)                                           */
#define TIM3_DIER_UDE_Msk                 (0x100UL)                 /*!< UDE (Bitfield-Mask: 0x01)                             */
#define TIM3_DIER_TIE_Pos                 (6UL)                     /*!< TIE (Bit 6)                                           */
#define TIM3_DIER_TIE_Msk                 (0x40UL)                  /*!< TIE (Bitfield-Mask: 0x01)                             */
#define TIM3_DIER_CC4IE_Pos               (4UL)                     /*!< CC4IE (Bit 4)                                         */
#define TIM3_DIER_CC4IE_Msk               (0x10UL)                  /*!< CC4IE (Bitfield-Mask: 0x01)                           */
#define TIM3_DIER_CC3IE_Pos               (3UL)                     /*!< CC3IE (Bit 3)                                         */
#define TIM3_DIER_CC3IE_Msk               (0x8UL)                   /*!< CC3IE (Bitfield-Mask: 0x01)                           */
#define TIM3_DIER_CC2IE_Pos               (2UL)                     /*!< CC2IE (Bit 2)                                         */
#define TIM3_DIER_CC2IE_Msk               (0x4UL)                   /*!< CC2IE (Bitfield-Mask: 0x01)                           */
#define TIM3_DIER_CC1IE_Pos               (1UL)                     /*!< CC1IE (Bit 1)                                         */
#define TIM3_DIER_CC1IE_Msk               (0x2UL)                   /*!< CC1IE (Bitfield-Mask: 0x01)                           */
#define TIM3_DIER_UIE_Pos                 (0UL)                     /*!< UIE (Bit 0)                                           */
#define TIM3_DIER_UIE_Msk                 (0x1UL)                   /*!< UIE (Bitfield-Mask: 0x01)                             */
/* ==========================================================  SR  =========================================================== */
#define TIM3_SR_CC4OF_Pos                 (12UL)                    /*!< CC4OF (Bit 12)                                        */
#define TIM3_SR_CC4OF_Msk                 (0x1000UL)                /*!< CC4OF (Bitfield-Mask: 0x01)                           */
#define TIM3_SR_CC3OF_Pos                 (11UL)                    /*!< CC3OF (Bit 11)                                        */
#define TIM3_SR_CC3OF_Msk                 (0x800UL)                 /*!< CC3OF (Bitfield-Mask: 0x01)                           */
#define TIM3_SR_CC2OF_Pos                 (10UL)                    /*!< CC2OF (Bit 10)                                        */
#define TIM3_SR_CC2OF_Msk                 (0x400UL)                 /*!< CC2OF (Bitfield-Mask: 0x01)                           */
#define TIM3_SR_CC1OF_Pos                 (9UL)                     /*!< CC1OF (Bit 9)                                         */
#define TIM3_SR_CC1OF_Msk                 (0x200UL)                 /*!< CC1OF (Bitfield-Mask: 0x01)                           */
#define TIM3_SR_TIF_Pos                   (6UL)                     /*!< TIF (Bit 6)                                           */
#define TIM3_SR_TIF_Msk                   (0x40UL)                  /*!< TIF (Bitfield-Mask: 0x01)                             */
#define TIM3_SR_CC4IF_Pos                 (4UL)                     /*!< CC4IF (Bit 4)                                         */
#define TIM3_SR_CC4IF_Msk                 (0x10UL)                  /*!< CC4IF (Bitfield-Mask: 0x01)                           */
#define TIM3_SR_CC3IF_Pos                 (3UL)                     /*!< CC3IF (Bit 3)                                         */
#define TIM3_SR_CC3IF_Msk                 (0x8UL)                   /*!< CC3IF (Bitfield-Mask: 0x01)                           */
#define TIM3_SR_CC2IF_Pos                 (2UL)                     /*!< CC2IF (Bit 2)                                         */
#define TIM3_SR_CC2IF_Msk                 (0x4UL)                   /*!< CC2IF (Bitfield-Mask: 0x01)                           */
#define TIM3_SR_CC1IF_Pos                 (1UL)                     /*!< CC1IF (Bit 1)                                         */
#define TIM3_SR_CC1IF_Msk                 (0x2UL)                   /*!< CC1IF (Bitfield-Mask: 0x01)                           */
#define TIM3_SR_UIF_Pos                   (0UL)                     /*!< UIF (Bit 0)                                           */
#define TIM3_SR_UIF_Msk                   (0x1UL)                   /*!< UIF (Bitfield-Mask: 0x01)                             */
/* ==========================================================  EGR  ========================================================== */
#define TIM3_EGR_TG_Pos                   (6UL)                     /*!< TG (Bit 6)                                            */
#define TIM3_EGR_TG_Msk                   (0x40UL)                  /*!< TG (Bitfield-Mask: 0x01)                              */
#define TIM3_EGR_CC4G_Pos                 (4UL)                     /*!< CC4G (Bit 4)                                          */
#define TIM3_EGR_CC4G_Msk                 (0x10UL)                  /*!< CC4G (Bitfield-Mask: 0x01)                            */
#define TIM3_EGR_CC3G_Pos                 (3UL)                     /*!< CC3G (Bit 3)                                          */
#define TIM3_EGR_CC3G_Msk                 (0x8UL)                   /*!< CC3G (Bitfield-Mask: 0x01)                            */
#define TIM3_EGR_CC2G_Pos                 (2UL)                     /*!< CC2G (Bit 2)                                          */
#define TIM3_EGR_CC2G_Msk                 (0x4UL)                   /*!< CC2G (Bitfield-Mask: 0x01)                            */
#define TIM3_EGR_CC1G_Pos                 (1UL)                     /*!< CC1G (Bit 1)                                          */
#define TIM3_EGR_CC1G_Msk                 (0x2UL)                   /*!< CC1G (Bitfield-Mask: 0x01)                            */
#define TIM3_EGR_UG_Pos                   (0UL)                     /*!< UG (Bit 0)                                            */
#define TIM3_EGR_UG_Msk                   (0x1UL)                   /*!< UG (Bitfield-Mask: 0x01)                              */
/* =====================================================  CCMR1_Output  ====================================================== */
#define TIM3_CCMR1_Output_OC2CE_Pos       (15UL)                    /*!< OC2CE (Bit 15)                                        */
#define TIM3_CCMR1_Output_OC2CE_Msk       (0x8000UL)                /*!< OC2CE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR1_Output_OC2M_Pos        (12UL)                    /*!< OC2M (Bit 12)                                         */
#define TIM3_CCMR1_Output_OC2M_Msk        (0x7000UL)                /*!< OC2M (Bitfield-Mask: 0x07)                            */
#define TIM3_CCMR1_Output_OC2PE_Pos       (11UL)                    /*!< OC2PE (Bit 11)                                        */
#define TIM3_CCMR1_Output_OC2PE_Msk       (0x800UL)                 /*!< OC2PE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR1_Output_OC2FE_Pos       (10UL)                    /*!< OC2FE (Bit 10)                                        */
#define TIM3_CCMR1_Output_OC2FE_Msk       (0x400UL)                 /*!< OC2FE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR1_Output_CC2S_Pos        (8UL)                     /*!< CC2S (Bit 8)                                          */
#define TIM3_CCMR1_Output_CC2S_Msk        (0x300UL)                 /*!< CC2S (Bitfield-Mask: 0x03)                            */
#define TIM3_CCMR1_Output_OC1CE_Pos       (7UL)                     /*!< OC1CE (Bit 7)                                         */
#define TIM3_CCMR1_Output_OC1CE_Msk       (0x80UL)                  /*!< OC1CE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR1_Output_OC1M_Pos        (4UL)                     /*!< OC1M (Bit 4)                                          */
#define TIM3_CCMR1_Output_OC1M_Msk        (0x70UL)                  /*!< OC1M (Bitfield-Mask: 0x07)                            */
#define TIM3_CCMR1_Output_OC1PE_Pos       (3UL)                     /*!< OC1PE (Bit 3)                                         */
#define TIM3_CCMR1_Output_OC1PE_Msk       (0x8UL)                   /*!< OC1PE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR1_Output_OC1FE_Pos       (2UL)                     /*!< OC1FE (Bit 2)                                         */
#define TIM3_CCMR1_Output_OC1FE_Msk       (0x4UL)                   /*!< OC1FE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR1_Output_CC1S_Pos        (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM3_CCMR1_Output_CC1S_Msk        (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* ======================================================  CCMR1_Input  ====================================================== */
#define TIM3_CCMR1_Input_IC2F_Pos         (12UL)                    /*!< IC2F (Bit 12)                                         */
#define TIM3_CCMR1_Input_IC2F_Msk         (0xf000UL)                /*!< IC2F (Bitfield-Mask: 0x0f)                            */
#define TIM3_CCMR1_Input_IC2PCS_Pos       (10UL)                    /*!< IC2PCS (Bit 10)                                       */
#define TIM3_CCMR1_Input_IC2PCS_Msk       (0xc00UL)                 /*!< IC2PCS (Bitfield-Mask: 0x03)                          */
#define TIM3_CCMR1_Input_CC2S_Pos         (8UL)                     /*!< CC2S (Bit 8)                                          */
#define TIM3_CCMR1_Input_CC2S_Msk         (0x300UL)                 /*!< CC2S (Bitfield-Mask: 0x03)                            */
#define TIM3_CCMR1_Input_IC1F_Pos         (4UL)                     /*!< IC1F (Bit 4)                                          */
#define TIM3_CCMR1_Input_IC1F_Msk         (0xf0UL)                  /*!< IC1F (Bitfield-Mask: 0x0f)                            */
#define TIM3_CCMR1_Input_ICPCS_Pos        (2UL)                     /*!< ICPCS (Bit 2)                                         */
#define TIM3_CCMR1_Input_ICPCS_Msk        (0xcUL)                   /*!< ICPCS (Bitfield-Mask: 0x03)                           */
#define TIM3_CCMR1_Input_CC1S_Pos         (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM3_CCMR1_Input_CC1S_Msk         (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* =====================================================  CCMR2_Output  ====================================================== */
#define TIM3_CCMR2_Output_O24CE_Pos       (15UL)                    /*!< O24CE (Bit 15)                                        */
#define TIM3_CCMR2_Output_O24CE_Msk       (0x8000UL)                /*!< O24CE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR2_Output_OC4M_Pos        (12UL)                    /*!< OC4M (Bit 12)                                         */
#define TIM3_CCMR2_Output_OC4M_Msk        (0x7000UL)                /*!< OC4M (Bitfield-Mask: 0x07)                            */
#define TIM3_CCMR2_Output_OC4PE_Pos       (11UL)                    /*!< OC4PE (Bit 11)                                        */
#define TIM3_CCMR2_Output_OC4PE_Msk       (0x800UL)                 /*!< OC4PE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR2_Output_OC4FE_Pos       (10UL)                    /*!< OC4FE (Bit 10)                                        */
#define TIM3_CCMR2_Output_OC4FE_Msk       (0x400UL)                 /*!< OC4FE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR2_Output_CC4S_Pos        (8UL)                     /*!< CC4S (Bit 8)                                          */
#define TIM3_CCMR2_Output_CC4S_Msk        (0x300UL)                 /*!< CC4S (Bitfield-Mask: 0x03)                            */
#define TIM3_CCMR2_Output_OC3CE_Pos       (7UL)                     /*!< OC3CE (Bit 7)                                         */
#define TIM3_CCMR2_Output_OC3CE_Msk       (0x80UL)                  /*!< OC3CE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR2_Output_OC3M_Pos        (4UL)                     /*!< OC3M (Bit 4)                                          */
#define TIM3_CCMR2_Output_OC3M_Msk        (0x70UL)                  /*!< OC3M (Bitfield-Mask: 0x07)                            */
#define TIM3_CCMR2_Output_OC3PE_Pos       (3UL)                     /*!< OC3PE (Bit 3)                                         */
#define TIM3_CCMR2_Output_OC3PE_Msk       (0x8UL)                   /*!< OC3PE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR2_Output_OC3FE_Pos       (2UL)                     /*!< OC3FE (Bit 2)                                         */
#define TIM3_CCMR2_Output_OC3FE_Msk       (0x4UL)                   /*!< OC3FE (Bitfield-Mask: 0x01)                           */
#define TIM3_CCMR2_Output_CC3S_Pos        (0UL)                     /*!< CC3S (Bit 0)                                          */
#define TIM3_CCMR2_Output_CC3S_Msk        (0x3UL)                   /*!< CC3S (Bitfield-Mask: 0x03)                            */
/* ======================================================  CCMR2_Input  ====================================================== */
#define TIM3_CCMR2_Input_IC4F_Pos         (12UL)                    /*!< IC4F (Bit 12)                                         */
#define TIM3_CCMR2_Input_IC4F_Msk         (0xf000UL)                /*!< IC4F (Bitfield-Mask: 0x0f)                            */
#define TIM3_CCMR2_Input_IC4PSC_Pos       (10UL)                    /*!< IC4PSC (Bit 10)                                       */
#define TIM3_CCMR2_Input_IC4PSC_Msk       (0xc00UL)                 /*!< IC4PSC (Bitfield-Mask: 0x03)                          */
#define TIM3_CCMR2_Input_CC4S_Pos         (8UL)                     /*!< CC4S (Bit 8)                                          */
#define TIM3_CCMR2_Input_CC4S_Msk         (0x300UL)                 /*!< CC4S (Bitfield-Mask: 0x03)                            */
#define TIM3_CCMR2_Input_IC3F_Pos         (4UL)                     /*!< IC3F (Bit 4)                                          */
#define TIM3_CCMR2_Input_IC3F_Msk         (0xf0UL)                  /*!< IC3F (Bitfield-Mask: 0x0f)                            */
#define TIM3_CCMR2_Input_IC3PSC_Pos       (2UL)                     /*!< IC3PSC (Bit 2)                                        */
#define TIM3_CCMR2_Input_IC3PSC_Msk       (0xcUL)                   /*!< IC3PSC (Bitfield-Mask: 0x03)                          */
#define TIM3_CCMR2_Input_CC3S_Pos         (0UL)                     /*!< CC3S (Bit 0)                                          */
#define TIM3_CCMR2_Input_CC3S_Msk         (0x3UL)                   /*!< CC3S (Bitfield-Mask: 0x03)                            */
/* =========================================================  CCER  ========================================================== */
#define TIM3_CCER_CC4NP_Pos               (15UL)                    /*!< CC4NP (Bit 15)                                        */
#define TIM3_CCER_CC4NP_Msk               (0x8000UL)                /*!< CC4NP (Bitfield-Mask: 0x01)                           */
#define TIM3_CCER_CC4P_Pos                (13UL)                    /*!< CC4P (Bit 13)                                         */
#define TIM3_CCER_CC4P_Msk                (0x2000UL)                /*!< CC4P (Bitfield-Mask: 0x01)                            */
#define TIM3_CCER_CC4E_Pos                (12UL)                    /*!< CC4E (Bit 12)                                         */
#define TIM3_CCER_CC4E_Msk                (0x1000UL)                /*!< CC4E (Bitfield-Mask: 0x01)                            */
#define TIM3_CCER_CC3NP_Pos               (11UL)                    /*!< CC3NP (Bit 11)                                        */
#define TIM3_CCER_CC3NP_Msk               (0x800UL)                 /*!< CC3NP (Bitfield-Mask: 0x01)                           */
#define TIM3_CCER_CC3P_Pos                (9UL)                     /*!< CC3P (Bit 9)                                          */
#define TIM3_CCER_CC3P_Msk                (0x200UL)                 /*!< CC3P (Bitfield-Mask: 0x01)                            */
#define TIM3_CCER_CC3E_Pos                (8UL)                     /*!< CC3E (Bit 8)                                          */
#define TIM3_CCER_CC3E_Msk                (0x100UL)                 /*!< CC3E (Bitfield-Mask: 0x01)                            */
#define TIM3_CCER_CC2NP_Pos               (7UL)                     /*!< CC2NP (Bit 7)                                         */
#define TIM3_CCER_CC2NP_Msk               (0x80UL)                  /*!< CC2NP (Bitfield-Mask: 0x01)                           */
#define TIM3_CCER_CC2P_Pos                (5UL)                     /*!< CC2P (Bit 5)                                          */
#define TIM3_CCER_CC2P_Msk                (0x20UL)                  /*!< CC2P (Bitfield-Mask: 0x01)                            */
#define TIM3_CCER_CC2E_Pos                (4UL)                     /*!< CC2E (Bit 4)                                          */
#define TIM3_CCER_CC2E_Msk                (0x10UL)                  /*!< CC2E (Bitfield-Mask: 0x01)                            */
#define TIM3_CCER_CC1NP_Pos               (3UL)                     /*!< CC1NP (Bit 3)                                         */
#define TIM3_CCER_CC1NP_Msk               (0x8UL)                   /*!< CC1NP (Bitfield-Mask: 0x01)                           */
#define TIM3_CCER_CC1P_Pos                (1UL)                     /*!< CC1P (Bit 1)                                          */
#define TIM3_CCER_CC1P_Msk                (0x2UL)                   /*!< CC1P (Bitfield-Mask: 0x01)                            */
#define TIM3_CCER_CC1E_Pos                (0UL)                     /*!< CC1E (Bit 0)                                          */
#define TIM3_CCER_CC1E_Msk                (0x1UL)                   /*!< CC1E (Bitfield-Mask: 0x01)                            */
/* ==========================================================  CNT  ========================================================== */
#define TIM3_CNT_CNT_H_Pos                (16UL)                    /*!< CNT_H (Bit 16)                                        */
#define TIM3_CNT_CNT_H_Msk                (0xffff0000UL)            /*!< CNT_H (Bitfield-Mask: 0xffff)                         */
#define TIM3_CNT_CNT_L_Pos                (0UL)                     /*!< CNT_L (Bit 0)                                         */
#define TIM3_CNT_CNT_L_Msk                (0xffffUL)                /*!< CNT_L (Bitfield-Mask: 0xffff)                         */
/* ==========================================================  PSC  ========================================================== */
#define TIM3_PSC_PSC_Pos                  (0UL)                     /*!< PSC (Bit 0)                                           */
#define TIM3_PSC_PSC_Msk                  (0xffffUL)                /*!< PSC (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  ARR  ========================================================== */
#define TIM3_ARR_ARR_H_Pos                (16UL)                    /*!< ARR_H (Bit 16)                                        */
#define TIM3_ARR_ARR_H_Msk                (0xffff0000UL)            /*!< ARR_H (Bitfield-Mask: 0xffff)                         */
#define TIM3_ARR_ARR_L_Pos                (0UL)                     /*!< ARR_L (Bit 0)                                         */
#define TIM3_ARR_ARR_L_Msk                (0xffffUL)                /*!< ARR_L (Bitfield-Mask: 0xffff)                         */
/* =========================================================  CCR1  ========================================================== */
#define TIM3_CCR1_CCR1_H_Pos              (16UL)                    /*!< CCR1_H (Bit 16)                                       */
#define TIM3_CCR1_CCR1_H_Msk              (0xffff0000UL)            /*!< CCR1_H (Bitfield-Mask: 0xffff)                        */
#define TIM3_CCR1_CCR1_L_Pos              (0UL)                     /*!< CCR1_L (Bit 0)                                        */
#define TIM3_CCR1_CCR1_L_Msk              (0xffffUL)                /*!< CCR1_L (Bitfield-Mask: 0xffff)                        */
/* =========================================================  CCR2  ========================================================== */
#define TIM3_CCR2_CCR2_H_Pos              (16UL)                    /*!< CCR2_H (Bit 16)                                       */
#define TIM3_CCR2_CCR2_H_Msk              (0xffff0000UL)            /*!< CCR2_H (Bitfield-Mask: 0xffff)                        */
#define TIM3_CCR2_CCR2_L_Pos              (0UL)                     /*!< CCR2_L (Bit 0)                                        */
#define TIM3_CCR2_CCR2_L_Msk              (0xffffUL)                /*!< CCR2_L (Bitfield-Mask: 0xffff)                        */
/* =========================================================  CCR3  ========================================================== */
#define TIM3_CCR3_CCR3_H_Pos              (16UL)                    /*!< CCR3_H (Bit 16)                                       */
#define TIM3_CCR3_CCR3_H_Msk              (0xffff0000UL)            /*!< CCR3_H (Bitfield-Mask: 0xffff)                        */
#define TIM3_CCR3_CCR3_L_Pos              (0UL)                     /*!< CCR3_L (Bit 0)                                        */
#define TIM3_CCR3_CCR3_L_Msk              (0xffffUL)                /*!< CCR3_L (Bitfield-Mask: 0xffff)                        */
/* =========================================================  CCR4  ========================================================== */
#define TIM3_CCR4_CCR4_H_Pos              (16UL)                    /*!< CCR4_H (Bit 16)                                       */
#define TIM3_CCR4_CCR4_H_Msk              (0xffff0000UL)            /*!< CCR4_H (Bitfield-Mask: 0xffff)                        */
#define TIM3_CCR4_CCR4_L_Pos              (0UL)                     /*!< CCR4_L (Bit 0)                                        */
#define TIM3_CCR4_CCR4_L_Msk              (0xffffUL)                /*!< CCR4_L (Bitfield-Mask: 0xffff)                        */
/* ==========================================================  DCR  ========================================================== */
#define TIM3_DCR_DBL_Pos                  (8UL)                     /*!< DBL (Bit 8)                                           */
#define TIM3_DCR_DBL_Msk                  (0x1f00UL)                /*!< DBL (Bitfield-Mask: 0x1f)                             */
#define TIM3_DCR_DBA_Pos                  (0UL)                     /*!< DBA (Bit 0)                                           */
#define TIM3_DCR_DBA_Msk                  (0x1fUL)                  /*!< DBA (Bitfield-Mask: 0x1f)                             */
/* =========================================================  DMAR  ========================================================== */
#define TIM3_DMAR_DMAB_Pos                (0UL)                     /*!< DMAB (Bit 0)                                          */
#define TIM3_DMAR_DMAB_Msk                (0xffffUL)                /*!< DMAB (Bitfield-Mask: 0xffff)                          */
/* ==========================================================  OR1  ========================================================== */
#define TIM3_OR1_TI1_RMP_Pos              (0UL)                     /*!< TI1_RMP (Bit 0)                                       */
#define TIM3_OR1_TI1_RMP_Msk              (0x3UL)                   /*!< TI1_RMP (Bitfield-Mask: 0x03)                         */
/* ==========================================================  OR2  ========================================================== */
#define TIM3_OR2_ETRSEL_Pos               (14UL)                    /*!< ETRSEL (Bit 14)                                       */
#define TIM3_OR2_ETRSEL_Msk               (0x1c000UL)               /*!< ETRSEL (Bitfield-Mask: 0x07)                          */


/* =========================================================================================================================== */
/* ================                                           TIM2                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR1  ========================================================== */
#define TIM2_CR1_CKD_Pos                  (8UL)                     /*!< CKD (Bit 8)                                           */
#define TIM2_CR1_CKD_Msk                  (0x300UL)                 /*!< CKD (Bitfield-Mask: 0x03)                             */
#define TIM2_CR1_ARPE_Pos                 (7UL)                     /*!< ARPE (Bit 7)                                          */
#define TIM2_CR1_ARPE_Msk                 (0x80UL)                  /*!< ARPE (Bitfield-Mask: 0x01)                            */
#define TIM2_CR1_CMS_Pos                  (5UL)                     /*!< CMS (Bit 5)                                           */
#define TIM2_CR1_CMS_Msk                  (0x60UL)                  /*!< CMS (Bitfield-Mask: 0x03)                             */
#define TIM2_CR1_DIR_Pos                  (4UL)                     /*!< DIR (Bit 4)                                           */
#define TIM2_CR1_DIR_Msk                  (0x10UL)                  /*!< DIR (Bitfield-Mask: 0x01)                             */
#define TIM2_CR1_OPM_Pos                  (3UL)                     /*!< OPM (Bit 3)                                           */
#define TIM2_CR1_OPM_Msk                  (0x8UL)                   /*!< OPM (Bitfield-Mask: 0x01)                             */
#define TIM2_CR1_URS_Pos                  (2UL)                     /*!< URS (Bit 2)                                           */
#define TIM2_CR1_URS_Msk                  (0x4UL)                   /*!< URS (Bitfield-Mask: 0x01)                             */
#define TIM2_CR1_UDIS_Pos                 (1UL)                     /*!< UDIS (Bit 1)                                          */
#define TIM2_CR1_UDIS_Msk                 (0x2UL)                   /*!< UDIS (Bitfield-Mask: 0x01)                            */
#define TIM2_CR1_CEN_Pos                  (0UL)                     /*!< CEN (Bit 0)                                           */
#define TIM2_CR1_CEN_Msk                  (0x1UL)                   /*!< CEN (Bitfield-Mask: 0x01)                             */
/* ==========================================================  CR2  ========================================================== */
#define TIM2_CR2_TI1S_Pos                 (7UL)                     /*!< TI1S (Bit 7)                                          */
#define TIM2_CR2_TI1S_Msk                 (0x80UL)                  /*!< TI1S (Bitfield-Mask: 0x01)                            */
#define TIM2_CR2_MMS_Pos                  (4UL)                     /*!< MMS (Bit 4)                                           */
#define TIM2_CR2_MMS_Msk                  (0x70UL)                  /*!< MMS (Bitfield-Mask: 0x07)                             */
#define TIM2_CR2_CCDS_Pos                 (3UL)                     /*!< CCDS (Bit 3)                                          */
#define TIM2_CR2_CCDS_Msk                 (0x8UL)                   /*!< CCDS (Bitfield-Mask: 0x01)                            */
/* =========================================================  SMCR  ========================================================== */
#define TIM2_SMCR_ETP_Pos                 (15UL)                    /*!< ETP (Bit 15)                                          */
#define TIM2_SMCR_ETP_Msk                 (0x8000UL)                /*!< ETP (Bitfield-Mask: 0x01)                             */
#define TIM2_SMCR_ECE_Pos                 (14UL)                    /*!< ECE (Bit 14)                                          */
#define TIM2_SMCR_ECE_Msk                 (0x4000UL)                /*!< ECE (Bitfield-Mask: 0x01)                             */
#define TIM2_SMCR_ETPS_Pos                (12UL)                    /*!< ETPS (Bit 12)                                         */
#define TIM2_SMCR_ETPS_Msk                (0x3000UL)                /*!< ETPS (Bitfield-Mask: 0x03)                            */
#define TIM2_SMCR_ETF_Pos                 (8UL)                     /*!< ETF (Bit 8)                                           */
#define TIM2_SMCR_ETF_Msk                 (0xf00UL)                 /*!< ETF (Bitfield-Mask: 0x0f)                             */
#define TIM2_SMCR_MSM_Pos                 (7UL)                     /*!< MSM (Bit 7)                                           */
#define TIM2_SMCR_MSM_Msk                 (0x80UL)                  /*!< MSM (Bitfield-Mask: 0x01)                             */
#define TIM2_SMCR_TS_Pos                  (4UL)                     /*!< TS (Bit 4)                                            */
#define TIM2_SMCR_TS_Msk                  (0x70UL)                  /*!< TS (Bitfield-Mask: 0x07)                              */
#define TIM2_SMCR_SMS_Pos                 (0UL)                     /*!< SMS (Bit 0)                                           */
#define TIM2_SMCR_SMS_Msk                 (0x7UL)                   /*!< SMS (Bitfield-Mask: 0x07)                             */
/* =========================================================  DIER  ========================================================== */
#define TIM2_DIER_TDE_Pos                 (14UL)                    /*!< TDE (Bit 14)                                          */
#define TIM2_DIER_TDE_Msk                 (0x4000UL)                /*!< TDE (Bitfield-Mask: 0x01)                             */
#define TIM2_DIER_CC4DE_Pos               (12UL)                    /*!< CC4DE (Bit 12)                                        */
#define TIM2_DIER_CC4DE_Msk               (0x1000UL)                /*!< CC4DE (Bitfield-Mask: 0x01)                           */
#define TIM2_DIER_CC3DE_Pos               (11UL)                    /*!< CC3DE (Bit 11)                                        */
#define TIM2_DIER_CC3DE_Msk               (0x800UL)                 /*!< CC3DE (Bitfield-Mask: 0x01)                           */
#define TIM2_DIER_CC2DE_Pos               (10UL)                    /*!< CC2DE (Bit 10)                                        */
#define TIM2_DIER_CC2DE_Msk               (0x400UL)                 /*!< CC2DE (Bitfield-Mask: 0x01)                           */
#define TIM2_DIER_CC1DE_Pos               (9UL)                     /*!< CC1DE (Bit 9)                                         */
#define TIM2_DIER_CC1DE_Msk               (0x200UL)                 /*!< CC1DE (Bitfield-Mask: 0x01)                           */
#define TIM2_DIER_UDE_Pos                 (8UL)                     /*!< UDE (Bit 8)                                           */
#define TIM2_DIER_UDE_Msk                 (0x100UL)                 /*!< UDE (Bitfield-Mask: 0x01)                             */
#define TIM2_DIER_TIE_Pos                 (6UL)                     /*!< TIE (Bit 6)                                           */
#define TIM2_DIER_TIE_Msk                 (0x40UL)                  /*!< TIE (Bitfield-Mask: 0x01)                             */
#define TIM2_DIER_CC4IE_Pos               (4UL)                     /*!< CC4IE (Bit 4)                                         */
#define TIM2_DIER_CC4IE_Msk               (0x10UL)                  /*!< CC4IE (Bitfield-Mask: 0x01)                           */
#define TIM2_DIER_CC3IE_Pos               (3UL)                     /*!< CC3IE (Bit 3)                                         */
#define TIM2_DIER_CC3IE_Msk               (0x8UL)                   /*!< CC3IE (Bitfield-Mask: 0x01)                           */
#define TIM2_DIER_CC2IE_Pos               (2UL)                     /*!< CC2IE (Bit 2)                                         */
#define TIM2_DIER_CC2IE_Msk               (0x4UL)                   /*!< CC2IE (Bitfield-Mask: 0x01)                           */
#define TIM2_DIER_CC1IE_Pos               (1UL)                     /*!< CC1IE (Bit 1)                                         */
#define TIM2_DIER_CC1IE_Msk               (0x2UL)                   /*!< CC1IE (Bitfield-Mask: 0x01)                           */
#define TIM2_DIER_UIE_Pos                 (0UL)                     /*!< UIE (Bit 0)                                           */
#define TIM2_DIER_UIE_Msk                 (0x1UL)                   /*!< UIE (Bitfield-Mask: 0x01)                             */
/* ==========================================================  SR  =========================================================== */
#define TIM2_SR_CC4OF_Pos                 (12UL)                    /*!< CC4OF (Bit 12)                                        */
#define TIM2_SR_CC4OF_Msk                 (0x1000UL)                /*!< CC4OF (Bitfield-Mask: 0x01)                           */
#define TIM2_SR_CC3OF_Pos                 (11UL)                    /*!< CC3OF (Bit 11)                                        */
#define TIM2_SR_CC3OF_Msk                 (0x800UL)                 /*!< CC3OF (Bitfield-Mask: 0x01)                           */
#define TIM2_SR_CC2OF_Pos                 (10UL)                    /*!< CC2OF (Bit 10)                                        */
#define TIM2_SR_CC2OF_Msk                 (0x400UL)                 /*!< CC2OF (Bitfield-Mask: 0x01)                           */
#define TIM2_SR_CC1OF_Pos                 (9UL)                     /*!< CC1OF (Bit 9)                                         */
#define TIM2_SR_CC1OF_Msk                 (0x200UL)                 /*!< CC1OF (Bitfield-Mask: 0x01)                           */
#define TIM2_SR_TIF_Pos                   (6UL)                     /*!< TIF (Bit 6)                                           */
#define TIM2_SR_TIF_Msk                   (0x40UL)                  /*!< TIF (Bitfield-Mask: 0x01)                             */
#define TIM2_SR_CC4IF_Pos                 (4UL)                     /*!< CC4IF (Bit 4)                                         */
#define TIM2_SR_CC4IF_Msk                 (0x10UL)                  /*!< CC4IF (Bitfield-Mask: 0x01)                           */
#define TIM2_SR_CC3IF_Pos                 (3UL)                     /*!< CC3IF (Bit 3)                                         */
#define TIM2_SR_CC3IF_Msk                 (0x8UL)                   /*!< CC3IF (Bitfield-Mask: 0x01)                           */
#define TIM2_SR_CC2IF_Pos                 (2UL)                     /*!< CC2IF (Bit 2)                                         */
#define TIM2_SR_CC2IF_Msk                 (0x4UL)                   /*!< CC2IF (Bitfield-Mask: 0x01)                           */
#define TIM2_SR_CC1IF_Pos                 (1UL)                     /*!< CC1IF (Bit 1)                                         */
#define TIM2_SR_CC1IF_Msk                 (0x2UL)                   /*!< CC1IF (Bitfield-Mask: 0x01)                           */
#define TIM2_SR_UIF_Pos                   (0UL)                     /*!< UIF (Bit 0)                                           */
#define TIM2_SR_UIF_Msk                   (0x1UL)                   /*!< UIF (Bitfield-Mask: 0x01)                             */
/* ==========================================================  EGR  ========================================================== */
#define TIM2_EGR_TG_Pos                   (6UL)                     /*!< TG (Bit 6)                                            */
#define TIM2_EGR_TG_Msk                   (0x40UL)                  /*!< TG (Bitfield-Mask: 0x01)                              */
#define TIM2_EGR_CC4G_Pos                 (4UL)                     /*!< CC4G (Bit 4)                                          */
#define TIM2_EGR_CC4G_Msk                 (0x10UL)                  /*!< CC4G (Bitfield-Mask: 0x01)                            */
#define TIM2_EGR_CC3G_Pos                 (3UL)                     /*!< CC3G (Bit 3)                                          */
#define TIM2_EGR_CC3G_Msk                 (0x8UL)                   /*!< CC3G (Bitfield-Mask: 0x01)                            */
#define TIM2_EGR_CC2G_Pos                 (2UL)                     /*!< CC2G (Bit 2)                                          */
#define TIM2_EGR_CC2G_Msk                 (0x4UL)                   /*!< CC2G (Bitfield-Mask: 0x01)                            */
#define TIM2_EGR_CC1G_Pos                 (1UL)                     /*!< CC1G (Bit 1)                                          */
#define TIM2_EGR_CC1G_Msk                 (0x2UL)                   /*!< CC1G (Bitfield-Mask: 0x01)                            */
#define TIM2_EGR_UG_Pos                   (0UL)                     /*!< UG (Bit 0)                                            */
#define TIM2_EGR_UG_Msk                   (0x1UL)                   /*!< UG (Bitfield-Mask: 0x01)                              */
/* =====================================================  CCMR1_Output  ====================================================== */
#define TIM2_CCMR1_Output_OC2CE_Pos       (15UL)                    /*!< OC2CE (Bit 15)                                        */
#define TIM2_CCMR1_Output_OC2CE_Msk       (0x8000UL)                /*!< OC2CE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR1_Output_OC2M_Pos        (12UL)                    /*!< OC2M (Bit 12)                                         */
#define TIM2_CCMR1_Output_OC2M_Msk        (0x7000UL)                /*!< OC2M (Bitfield-Mask: 0x07)                            */
#define TIM2_CCMR1_Output_OC2PE_Pos       (11UL)                    /*!< OC2PE (Bit 11)                                        */
#define TIM2_CCMR1_Output_OC2PE_Msk       (0x800UL)                 /*!< OC2PE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR1_Output_OC2FE_Pos       (10UL)                    /*!< OC2FE (Bit 10)                                        */
#define TIM2_CCMR1_Output_OC2FE_Msk       (0x400UL)                 /*!< OC2FE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR1_Output_CC2S_Pos        (8UL)                     /*!< CC2S (Bit 8)                                          */
#define TIM2_CCMR1_Output_CC2S_Msk        (0x300UL)                 /*!< CC2S (Bitfield-Mask: 0x03)                            */
#define TIM2_CCMR1_Output_OC1CE_Pos       (7UL)                     /*!< OC1CE (Bit 7)                                         */
#define TIM2_CCMR1_Output_OC1CE_Msk       (0x80UL)                  /*!< OC1CE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR1_Output_OC1M_Pos        (4UL)                     /*!< OC1M (Bit 4)                                          */
#define TIM2_CCMR1_Output_OC1M_Msk        (0x70UL)                  /*!< OC1M (Bitfield-Mask: 0x07)                            */
#define TIM2_CCMR1_Output_OC1PE_Pos       (3UL)                     /*!< OC1PE (Bit 3)                                         */
#define TIM2_CCMR1_Output_OC1PE_Msk       (0x8UL)                   /*!< OC1PE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR1_Output_OC1FE_Pos       (2UL)                     /*!< OC1FE (Bit 2)                                         */
#define TIM2_CCMR1_Output_OC1FE_Msk       (0x4UL)                   /*!< OC1FE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR1_Output_CC1S_Pos        (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM2_CCMR1_Output_CC1S_Msk        (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* ======================================================  CCMR1_Input  ====================================================== */
#define TIM2_CCMR1_Input_IC2F_Pos         (12UL)                    /*!< IC2F (Bit 12)                                         */
#define TIM2_CCMR1_Input_IC2F_Msk         (0xf000UL)                /*!< IC2F (Bitfield-Mask: 0x0f)                            */
#define TIM2_CCMR1_Input_IC2PCS_Pos       (10UL)                    /*!< IC2PCS (Bit 10)                                       */
#define TIM2_CCMR1_Input_IC2PCS_Msk       (0xc00UL)                 /*!< IC2PCS (Bitfield-Mask: 0x03)                          */
#define TIM2_CCMR1_Input_CC2S_Pos         (8UL)                     /*!< CC2S (Bit 8)                                          */
#define TIM2_CCMR1_Input_CC2S_Msk         (0x300UL)                 /*!< CC2S (Bitfield-Mask: 0x03)                            */
#define TIM2_CCMR1_Input_IC1F_Pos         (4UL)                     /*!< IC1F (Bit 4)                                          */
#define TIM2_CCMR1_Input_IC1F_Msk         (0xf0UL)                  /*!< IC1F (Bitfield-Mask: 0x0f)                            */
#define TIM2_CCMR1_Input_ICPCS_Pos        (2UL)                     /*!< ICPCS (Bit 2)                                         */
#define TIM2_CCMR1_Input_ICPCS_Msk        (0xcUL)                   /*!< ICPCS (Bitfield-Mask: 0x03)                           */
#define TIM2_CCMR1_Input_CC1S_Pos         (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM2_CCMR1_Input_CC1S_Msk         (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* =====================================================  CCMR2_Output  ====================================================== */
#define TIM2_CCMR2_Output_O24CE_Pos       (15UL)                    /*!< O24CE (Bit 15)                                        */
#define TIM2_CCMR2_Output_O24CE_Msk       (0x8000UL)                /*!< O24CE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR2_Output_OC4M_Pos        (12UL)                    /*!< OC4M (Bit 12)                                         */
#define TIM2_CCMR2_Output_OC4M_Msk        (0x7000UL)                /*!< OC4M (Bitfield-Mask: 0x07)                            */
#define TIM2_CCMR2_Output_OC4PE_Pos       (11UL)                    /*!< OC4PE (Bit 11)                                        */
#define TIM2_CCMR2_Output_OC4PE_Msk       (0x800UL)                 /*!< OC4PE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR2_Output_OC4FE_Pos       (10UL)                    /*!< OC4FE (Bit 10)                                        */
#define TIM2_CCMR2_Output_OC4FE_Msk       (0x400UL)                 /*!< OC4FE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR2_Output_CC4S_Pos        (8UL)                     /*!< CC4S (Bit 8)                                          */
#define TIM2_CCMR2_Output_CC4S_Msk        (0x300UL)                 /*!< CC4S (Bitfield-Mask: 0x03)                            */
#define TIM2_CCMR2_Output_OC3CE_Pos       (7UL)                     /*!< OC3CE (Bit 7)                                         */
#define TIM2_CCMR2_Output_OC3CE_Msk       (0x80UL)                  /*!< OC3CE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR2_Output_OC3M_Pos        (4UL)                     /*!< OC3M (Bit 4)                                          */
#define TIM2_CCMR2_Output_OC3M_Msk        (0x70UL)                  /*!< OC3M (Bitfield-Mask: 0x07)                            */
#define TIM2_CCMR2_Output_OC3PE_Pos       (3UL)                     /*!< OC3PE (Bit 3)                                         */
#define TIM2_CCMR2_Output_OC3PE_Msk       (0x8UL)                   /*!< OC3PE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR2_Output_OC3FE_Pos       (2UL)                     /*!< OC3FE (Bit 2)                                         */
#define TIM2_CCMR2_Output_OC3FE_Msk       (0x4UL)                   /*!< OC3FE (Bitfield-Mask: 0x01)                           */
#define TIM2_CCMR2_Output_CC3S_Pos        (0UL)                     /*!< CC3S (Bit 0)                                          */
#define TIM2_CCMR2_Output_CC3S_Msk        (0x3UL)                   /*!< CC3S (Bitfield-Mask: 0x03)                            */
/* ======================================================  CCMR2_Input  ====================================================== */
#define TIM2_CCMR2_Input_IC4F_Pos         (12UL)                    /*!< IC4F (Bit 12)                                         */
#define TIM2_CCMR2_Input_IC4F_Msk         (0xf000UL)                /*!< IC4F (Bitfield-Mask: 0x0f)                            */
#define TIM2_CCMR2_Input_IC4PSC_Pos       (10UL)                    /*!< IC4PSC (Bit 10)                                       */
#define TIM2_CCMR2_Input_IC4PSC_Msk       (0xc00UL)                 /*!< IC4PSC (Bitfield-Mask: 0x03)                          */
#define TIM2_CCMR2_Input_CC4S_Pos         (8UL)                     /*!< CC4S (Bit 8)                                          */
#define TIM2_CCMR2_Input_CC4S_Msk         (0x300UL)                 /*!< CC4S (Bitfield-Mask: 0x03)                            */
#define TIM2_CCMR2_Input_IC3F_Pos         (4UL)                     /*!< IC3F (Bit 4)                                          */
#define TIM2_CCMR2_Input_IC3F_Msk         (0xf0UL)                  /*!< IC3F (Bitfield-Mask: 0x0f)                            */
#define TIM2_CCMR2_Input_IC3PSC_Pos       (2UL)                     /*!< IC3PSC (Bit 2)                                        */
#define TIM2_CCMR2_Input_IC3PSC_Msk       (0xcUL)                   /*!< IC3PSC (Bitfield-Mask: 0x03)                          */
#define TIM2_CCMR2_Input_CC3S_Pos         (0UL)                     /*!< CC3S (Bit 0)                                          */
#define TIM2_CCMR2_Input_CC3S_Msk         (0x3UL)                   /*!< CC3S (Bitfield-Mask: 0x03)                            */
/* =========================================================  CCER  ========================================================== */
#define TIM2_CCER_CC4NP_Pos               (15UL)                    /*!< CC4NP (Bit 15)                                        */
#define TIM2_CCER_CC4NP_Msk               (0x8000UL)                /*!< CC4NP (Bitfield-Mask: 0x01)                           */
#define TIM2_CCER_CC4P_Pos                (13UL)                    /*!< CC4P (Bit 13)                                         */
#define TIM2_CCER_CC4P_Msk                (0x2000UL)                /*!< CC4P (Bitfield-Mask: 0x01)                            */
#define TIM2_CCER_CC4E_Pos                (12UL)                    /*!< CC4E (Bit 12)                                         */
#define TIM2_CCER_CC4E_Msk                (0x1000UL)                /*!< CC4E (Bitfield-Mask: 0x01)                            */
#define TIM2_CCER_CC3NP_Pos               (11UL)                    /*!< CC3NP (Bit 11)                                        */
#define TIM2_CCER_CC3NP_Msk               (0x800UL)                 /*!< CC3NP (Bitfield-Mask: 0x01)                           */
#define TIM2_CCER_CC3P_Pos                (9UL)                     /*!< CC3P (Bit 9)                                          */
#define TIM2_CCER_CC3P_Msk                (0x200UL)                 /*!< CC3P (Bitfield-Mask: 0x01)                            */
#define TIM2_CCER_CC3E_Pos                (8UL)                     /*!< CC3E (Bit 8)                                          */
#define TIM2_CCER_CC3E_Msk                (0x100UL)                 /*!< CC3E (Bitfield-Mask: 0x01)                            */
#define TIM2_CCER_CC2NP_Pos               (7UL)                     /*!< CC2NP (Bit 7)                                         */
#define TIM2_CCER_CC2NP_Msk               (0x80UL)                  /*!< CC2NP (Bitfield-Mask: 0x01)                           */
#define TIM2_CCER_CC2P_Pos                (5UL)                     /*!< CC2P (Bit 5)                                          */
#define TIM2_CCER_CC2P_Msk                (0x20UL)                  /*!< CC2P (Bitfield-Mask: 0x01)                            */
#define TIM2_CCER_CC2E_Pos                (4UL)                     /*!< CC2E (Bit 4)                                          */
#define TIM2_CCER_CC2E_Msk                (0x10UL)                  /*!< CC2E (Bitfield-Mask: 0x01)                            */
#define TIM2_CCER_CC1NP_Pos               (3UL)                     /*!< CC1NP (Bit 3)                                         */
#define TIM2_CCER_CC1NP_Msk               (0x8UL)                   /*!< CC1NP (Bitfield-Mask: 0x01)                           */
#define TIM2_CCER_CC1P_Pos                (1UL)                     /*!< CC1P (Bit 1)                                          */
#define TIM2_CCER_CC1P_Msk                (0x2UL)                   /*!< CC1P (Bitfield-Mask: 0x01)                            */
#define TIM2_CCER_CC1E_Pos                (0UL)                     /*!< CC1E (Bit 0)                                          */
#define TIM2_CCER_CC1E_Msk                (0x1UL)                   /*!< CC1E (Bitfield-Mask: 0x01)                            */
/* ==========================================================  CNT  ========================================================== */
#define TIM2_CNT_CNT_H_Pos                (16UL)                    /*!< CNT_H (Bit 16)                                        */
#define TIM2_CNT_CNT_H_Msk                (0xffff0000UL)            /*!< CNT_H (Bitfield-Mask: 0xffff)                         */
#define TIM2_CNT_CNT_L_Pos                (0UL)                     /*!< CNT_L (Bit 0)                                         */
#define TIM2_CNT_CNT_L_Msk                (0xffffUL)                /*!< CNT_L (Bitfield-Mask: 0xffff)                         */
/* ==========================================================  PSC  ========================================================== */
#define TIM2_PSC_PSC_Pos                  (0UL)                     /*!< PSC (Bit 0)                                           */
#define TIM2_PSC_PSC_Msk                  (0xffffUL)                /*!< PSC (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  ARR  ========================================================== */
#define TIM2_ARR_ARR_H_Pos                (16UL)                    /*!< ARR_H (Bit 16)                                        */
#define TIM2_ARR_ARR_H_Msk                (0xffff0000UL)            /*!< ARR_H (Bitfield-Mask: 0xffff)                         */
#define TIM2_ARR_ARR_L_Pos                (0UL)                     /*!< ARR_L (Bit 0)                                         */
#define TIM2_ARR_ARR_L_Msk                (0xffffUL)                /*!< ARR_L (Bitfield-Mask: 0xffff)                         */
/* =========================================================  CCR1  ========================================================== */
#define TIM2_CCR1_CCR1_H_Pos              (16UL)                    /*!< CCR1_H (Bit 16)                                       */
#define TIM2_CCR1_CCR1_H_Msk              (0xffff0000UL)            /*!< CCR1_H (Bitfield-Mask: 0xffff)                        */
#define TIM2_CCR1_CCR1_L_Pos              (0UL)                     /*!< CCR1_L (Bit 0)                                        */
#define TIM2_CCR1_CCR1_L_Msk              (0xffffUL)                /*!< CCR1_L (Bitfield-Mask: 0xffff)                        */
/* =========================================================  CCR2  ========================================================== */
#define TIM2_CCR2_CCR2_H_Pos              (16UL)                    /*!< CCR2_H (Bit 16)                                       */
#define TIM2_CCR2_CCR2_H_Msk              (0xffff0000UL)            /*!< CCR2_H (Bitfield-Mask: 0xffff)                        */
#define TIM2_CCR2_CCR2_L_Pos              (0UL)                     /*!< CCR2_L (Bit 0)                                        */
#define TIM2_CCR2_CCR2_L_Msk              (0xffffUL)                /*!< CCR2_L (Bitfield-Mask: 0xffff)                        */
/* =========================================================  CCR3  ========================================================== */
#define TIM2_CCR3_CCR3_H_Pos              (16UL)                    /*!< CCR3_H (Bit 16)                                       */
#define TIM2_CCR3_CCR3_H_Msk              (0xffff0000UL)            /*!< CCR3_H (Bitfield-Mask: 0xffff)                        */
#define TIM2_CCR3_CCR3_L_Pos              (0UL)                     /*!< CCR3_L (Bit 0)                                        */
#define TIM2_CCR3_CCR3_L_Msk              (0xffffUL)                /*!< CCR3_L (Bitfield-Mask: 0xffff)                        */
/* =========================================================  CCR4  ========================================================== */
#define TIM2_CCR4_CCR4_H_Pos              (16UL)                    /*!< CCR4_H (Bit 16)                                       */
#define TIM2_CCR4_CCR4_H_Msk              (0xffff0000UL)            /*!< CCR4_H (Bitfield-Mask: 0xffff)                        */
#define TIM2_CCR4_CCR4_L_Pos              (0UL)                     /*!< CCR4_L (Bit 0)                                        */
#define TIM2_CCR4_CCR4_L_Msk              (0xffffUL)                /*!< CCR4_L (Bitfield-Mask: 0xffff)                        */
/* ==========================================================  DCR  ========================================================== */
#define TIM2_DCR_DBL_Pos                  (8UL)                     /*!< DBL (Bit 8)                                           */
#define TIM2_DCR_DBL_Msk                  (0x1f00UL)                /*!< DBL (Bitfield-Mask: 0x1f)                             */
#define TIM2_DCR_DBA_Pos                  (0UL)                     /*!< DBA (Bit 0)                                           */
#define TIM2_DCR_DBA_Msk                  (0x1fUL)                  /*!< DBA (Bitfield-Mask: 0x1f)                             */
/* =========================================================  DMAR  ========================================================== */
#define TIM2_DMAR_DMAB_Pos                (0UL)                     /*!< DMAB (Bit 0)                                          */
#define TIM2_DMAR_DMAB_Msk                (0xffffUL)                /*!< DMAB (Bitfield-Mask: 0xffff)                          */
/* ==========================================================  OR1  ========================================================== */
#define TIM2_OR1_TI4_RMP_Pos              (2UL)                     /*!< TI4_RMP (Bit 2)                                       */
#define TIM2_OR1_TI4_RMP_Msk              (0xcUL)                   /*!< TI4_RMP (Bitfield-Mask: 0x03)                         */
#define TIM2_OR1_ETR1_RMP_Pos             (1UL)                     /*!< ETR1_RMP (Bit 1)                                      */
#define TIM2_OR1_ETR1_RMP_Msk             (0x2UL)                   /*!< ETR1_RMP (Bitfield-Mask: 0x01)                        */
#define TIM2_OR1_ITR1_RMP_Pos             (0UL)                     /*!< ITR1_RMP (Bit 0)                                      */
#define TIM2_OR1_ITR1_RMP_Msk             (0x1UL)                   /*!< ITR1_RMP (Bitfield-Mask: 0x01)                        */
/* ==========================================================  OR2  ========================================================== */
#define TIM2_OR2_ETRSEL_Pos               (14UL)                    /*!< ETRSEL (Bit 14)                                       */
#define TIM2_OR2_ETRSEL_Msk               (0x1c000UL)               /*!< ETRSEL (Bitfield-Mask: 0x07)                          */


/* =========================================================================================================================== */
/* ================                                           TIM1                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR1  ========================================================== */
#define TIM1_CR1_CKD_Pos                  (8UL)                     /*!< CKD (Bit 8)                                           */
#define TIM1_CR1_CKD_Msk                  (0x300UL)                 /*!< CKD (Bitfield-Mask: 0x03)                             */
#define TIM1_CR1_ARPE_Pos                 (7UL)                     /*!< ARPE (Bit 7)                                          */
#define TIM1_CR1_ARPE_Msk                 (0x80UL)                  /*!< ARPE (Bitfield-Mask: 0x01)                            */
#define TIM1_CR1_CMS_Pos                  (5UL)                     /*!< CMS (Bit 5)                                           */
#define TIM1_CR1_CMS_Msk                  (0x60UL)                  /*!< CMS (Bitfield-Mask: 0x03)                             */
#define TIM1_CR1_DIR_Pos                  (4UL)                     /*!< DIR (Bit 4)                                           */
#define TIM1_CR1_DIR_Msk                  (0x10UL)                  /*!< DIR (Bitfield-Mask: 0x01)                             */
#define TIM1_CR1_OPM_Pos                  (3UL)                     /*!< OPM (Bit 3)                                           */
#define TIM1_CR1_OPM_Msk                  (0x8UL)                   /*!< OPM (Bitfield-Mask: 0x01)                             */
#define TIM1_CR1_URS_Pos                  (2UL)                     /*!< URS (Bit 2)                                           */
#define TIM1_CR1_URS_Msk                  (0x4UL)                   /*!< URS (Bitfield-Mask: 0x01)                             */
#define TIM1_CR1_UDIS_Pos                 (1UL)                     /*!< UDIS (Bit 1)                                          */
#define TIM1_CR1_UDIS_Msk                 (0x2UL)                   /*!< UDIS (Bitfield-Mask: 0x01)                            */
#define TIM1_CR1_CEN_Pos                  (0UL)                     /*!< CEN (Bit 0)                                           */
#define TIM1_CR1_CEN_Msk                  (0x1UL)                   /*!< CEN (Bitfield-Mask: 0x01)                             */
/* ==========================================================  CR2  ========================================================== */
#define TIM1_CR2_OIS4_Pos                 (14UL)                    /*!< OIS4 (Bit 14)                                         */
#define TIM1_CR2_OIS4_Msk                 (0x4000UL)                /*!< OIS4 (Bitfield-Mask: 0x01)                            */
#define TIM1_CR2_OIS3N_Pos                (13UL)                    /*!< OIS3N (Bit 13)                                        */
#define TIM1_CR2_OIS3N_Msk                (0x2000UL)                /*!< OIS3N (Bitfield-Mask: 0x01)                           */
#define TIM1_CR2_OIS3_Pos                 (12UL)                    /*!< OIS3 (Bit 12)                                         */
#define TIM1_CR2_OIS3_Msk                 (0x1000UL)                /*!< OIS3 (Bitfield-Mask: 0x01)                            */
#define TIM1_CR2_OIS2N_Pos                (11UL)                    /*!< OIS2N (Bit 11)                                        */
#define TIM1_CR2_OIS2N_Msk                (0x800UL)                 /*!< OIS2N (Bitfield-Mask: 0x01)                           */
#define TIM1_CR2_OIS2_Pos                 (10UL)                    /*!< OIS2 (Bit 10)                                         */
#define TIM1_CR2_OIS2_Msk                 (0x400UL)                 /*!< OIS2 (Bitfield-Mask: 0x01)                            */
#define TIM1_CR2_OIS1N_Pos                (9UL)                     /*!< OIS1N (Bit 9)                                         */
#define TIM1_CR2_OIS1N_Msk                (0x200UL)                 /*!< OIS1N (Bitfield-Mask: 0x01)                           */
#define TIM1_CR2_OIS1_Pos                 (8UL)                     /*!< OIS1 (Bit 8)                                          */
#define TIM1_CR2_OIS1_Msk                 (0x100UL)                 /*!< OIS1 (Bitfield-Mask: 0x01)                            */
#define TIM1_CR2_TI1S_Pos                 (7UL)                     /*!< TI1S (Bit 7)                                          */
#define TIM1_CR2_TI1S_Msk                 (0x80UL)                  /*!< TI1S (Bitfield-Mask: 0x01)                            */
#define TIM1_CR2_MMS_Pos                  (4UL)                     /*!< MMS (Bit 4)                                           */
#define TIM1_CR2_MMS_Msk                  (0x70UL)                  /*!< MMS (Bitfield-Mask: 0x07)                             */
#define TIM1_CR2_CCDS_Pos                 (3UL)                     /*!< CCDS (Bit 3)                                          */
#define TIM1_CR2_CCDS_Msk                 (0x8UL)                   /*!< CCDS (Bitfield-Mask: 0x01)                            */
#define TIM1_CR2_CCUS_Pos                 (2UL)                     /*!< CCUS (Bit 2)                                          */
#define TIM1_CR2_CCUS_Msk                 (0x4UL)                   /*!< CCUS (Bitfield-Mask: 0x01)                            */
#define TIM1_CR2_CCPC_Pos                 (0UL)                     /*!< CCPC (Bit 0)                                          */
#define TIM1_CR2_CCPC_Msk                 (0x1UL)                   /*!< CCPC (Bitfield-Mask: 0x01)                            */
/* =========================================================  SMCR  ========================================================== */
#define TIM1_SMCR_ETP_Pos                 (15UL)                    /*!< ETP (Bit 15)                                          */
#define TIM1_SMCR_ETP_Msk                 (0x8000UL)                /*!< ETP (Bitfield-Mask: 0x01)                             */
#define TIM1_SMCR_ECE_Pos                 (14UL)                    /*!< ECE (Bit 14)                                          */
#define TIM1_SMCR_ECE_Msk                 (0x4000UL)                /*!< ECE (Bitfield-Mask: 0x01)                             */
#define TIM1_SMCR_ETPS_Pos                (12UL)                    /*!< ETPS (Bit 12)                                         */
#define TIM1_SMCR_ETPS_Msk                (0x3000UL)                /*!< ETPS (Bitfield-Mask: 0x03)                            */
#define TIM1_SMCR_ETF_Pos                 (8UL)                     /*!< ETF (Bit 8)                                           */
#define TIM1_SMCR_ETF_Msk                 (0xf00UL)                 /*!< ETF (Bitfield-Mask: 0x0f)                             */
#define TIM1_SMCR_MSM_Pos                 (7UL)                     /*!< MSM (Bit 7)                                           */
#define TIM1_SMCR_MSM_Msk                 (0x80UL)                  /*!< MSM (Bitfield-Mask: 0x01)                             */
#define TIM1_SMCR_TS_Pos                  (4UL)                     /*!< TS (Bit 4)                                            */
#define TIM1_SMCR_TS_Msk                  (0x70UL)                  /*!< TS (Bitfield-Mask: 0x07)                              */
#define TIM1_SMCR_SMS_Pos                 (0UL)                     /*!< SMS (Bit 0)                                           */
#define TIM1_SMCR_SMS_Msk                 (0x7UL)                   /*!< SMS (Bitfield-Mask: 0x07)                             */
/* =========================================================  DIER  ========================================================== */
#define TIM1_DIER_TDE_Pos                 (14UL)                    /*!< TDE (Bit 14)                                          */
#define TIM1_DIER_TDE_Msk                 (0x4000UL)                /*!< TDE (Bitfield-Mask: 0x01)                             */
#define TIM1_DIER_COMDE_Pos               (13UL)                    /*!< COMDE (Bit 13)                                        */
#define TIM1_DIER_COMDE_Msk               (0x2000UL)                /*!< COMDE (Bitfield-Mask: 0x01)                           */
#define TIM1_DIER_CC4DE_Pos               (12UL)                    /*!< CC4DE (Bit 12)                                        */
#define TIM1_DIER_CC4DE_Msk               (0x1000UL)                /*!< CC4DE (Bitfield-Mask: 0x01)                           */
#define TIM1_DIER_CC3DE_Pos               (11UL)                    /*!< CC3DE (Bit 11)                                        */
#define TIM1_DIER_CC3DE_Msk               (0x800UL)                 /*!< CC3DE (Bitfield-Mask: 0x01)                           */
#define TIM1_DIER_CC2DE_Pos               (10UL)                    /*!< CC2DE (Bit 10)                                        */
#define TIM1_DIER_CC2DE_Msk               (0x400UL)                 /*!< CC2DE (Bitfield-Mask: 0x01)                           */
#define TIM1_DIER_CC1DE_Pos               (9UL)                     /*!< CC1DE (Bit 9)                                         */
#define TIM1_DIER_CC1DE_Msk               (0x200UL)                 /*!< CC1DE (Bitfield-Mask: 0x01)                           */
#define TIM1_DIER_UDE_Pos                 (8UL)                     /*!< UDE (Bit 8)                                           */
#define TIM1_DIER_UDE_Msk                 (0x100UL)                 /*!< UDE (Bitfield-Mask: 0x01)                             */
#define TIM1_DIER_TIE_Pos                 (6UL)                     /*!< TIE (Bit 6)                                           */
#define TIM1_DIER_TIE_Msk                 (0x40UL)                  /*!< TIE (Bitfield-Mask: 0x01)                             */
#define TIM1_DIER_CC4IE_Pos               (4UL)                     /*!< CC4IE (Bit 4)                                         */
#define TIM1_DIER_CC4IE_Msk               (0x10UL)                  /*!< CC4IE (Bitfield-Mask: 0x01)                           */
#define TIM1_DIER_CC3IE_Pos               (3UL)                     /*!< CC3IE (Bit 3)                                         */
#define TIM1_DIER_CC3IE_Msk               (0x8UL)                   /*!< CC3IE (Bitfield-Mask: 0x01)                           */
#define TIM1_DIER_CC2IE_Pos               (2UL)                     /*!< CC2IE (Bit 2)                                         */
#define TIM1_DIER_CC2IE_Msk               (0x4UL)                   /*!< CC2IE (Bitfield-Mask: 0x01)                           */
#define TIM1_DIER_CC1IE_Pos               (1UL)                     /*!< CC1IE (Bit 1)                                         */
#define TIM1_DIER_CC1IE_Msk               (0x2UL)                   /*!< CC1IE (Bitfield-Mask: 0x01)                           */
#define TIM1_DIER_UIE_Pos                 (0UL)                     /*!< UIE (Bit 0)                                           */
#define TIM1_DIER_UIE_Msk                 (0x1UL)                   /*!< UIE (Bitfield-Mask: 0x01)                             */
#define TIM1_DIER_BIE_Pos                 (7UL)                     /*!< BIE (Bit 7)                                           */
#define TIM1_DIER_BIE_Msk                 (0x80UL)                  /*!< BIE (Bitfield-Mask: 0x01)                             */
#define TIM1_DIER_COMIE_Pos               (5UL)                     /*!< COMIE (Bit 5)                                         */
#define TIM1_DIER_COMIE_Msk               (0x20UL)                  /*!< COMIE (Bitfield-Mask: 0x01)                           */
/* ==========================================================  SR  =========================================================== */
#define TIM1_SR_CC4OF_Pos                 (12UL)                    /*!< CC4OF (Bit 12)                                        */
#define TIM1_SR_CC4OF_Msk                 (0x1000UL)                /*!< CC4OF (Bitfield-Mask: 0x01)                           */
#define TIM1_SR_CC3OF_Pos                 (11UL)                    /*!< CC3OF (Bit 11)                                        */
#define TIM1_SR_CC3OF_Msk                 (0x800UL)                 /*!< CC3OF (Bitfield-Mask: 0x01)                           */
#define TIM1_SR_CC2OF_Pos                 (10UL)                    /*!< CC2OF (Bit 10)                                        */
#define TIM1_SR_CC2OF_Msk                 (0x400UL)                 /*!< CC2OF (Bitfield-Mask: 0x01)                           */
#define TIM1_SR_CC1OF_Pos                 (9UL)                     /*!< CC1OF (Bit 9)                                         */
#define TIM1_SR_CC1OF_Msk                 (0x200UL)                 /*!< CC1OF (Bitfield-Mask: 0x01)                           */
#define TIM1_SR_BIF_Pos                   (7UL)                     /*!< BIF (Bit 7)                                           */
#define TIM1_SR_BIF_Msk                   (0x80UL)                  /*!< BIF (Bitfield-Mask: 0x01)                             */
#define TIM1_SR_TIF_Pos                   (6UL)                     /*!< TIF (Bit 6)                                           */
#define TIM1_SR_TIF_Msk                   (0x40UL)                  /*!< TIF (Bitfield-Mask: 0x01)                             */
#define TIM1_SR_COMIF_Pos                 (5UL)                     /*!< COMIF (Bit 5)                                         */
#define TIM1_SR_COMIF_Msk                 (0x20UL)                  /*!< COMIF (Bitfield-Mask: 0x01)                           */
#define TIM1_SR_CC4IF_Pos                 (4UL)                     /*!< CC4IF (Bit 4)                                         */
#define TIM1_SR_CC4IF_Msk                 (0x10UL)                  /*!< CC4IF (Bitfield-Mask: 0x01)                           */
#define TIM1_SR_CC3IF_Pos                 (3UL)                     /*!< CC3IF (Bit 3)                                         */
#define TIM1_SR_CC3IF_Msk                 (0x8UL)                   /*!< CC3IF (Bitfield-Mask: 0x01)                           */
#define TIM1_SR_CC2IF_Pos                 (2UL)                     /*!< CC2IF (Bit 2)                                         */
#define TIM1_SR_CC2IF_Msk                 (0x4UL)                   /*!< CC2IF (Bitfield-Mask: 0x01)                           */
#define TIM1_SR_CC1IF_Pos                 (1UL)                     /*!< CC1IF (Bit 1)                                         */
#define TIM1_SR_CC1IF_Msk                 (0x2UL)                   /*!< CC1IF (Bitfield-Mask: 0x01)                           */
#define TIM1_SR_UIF_Pos                   (0UL)                     /*!< UIF (Bit 0)                                           */
#define TIM1_SR_UIF_Msk                   (0x1UL)                   /*!< UIF (Bitfield-Mask: 0x01)                             */
/* ==========================================================  EGR  ========================================================== */
#define TIM1_EGR_BG_Pos                   (7UL)                     /*!< BG (Bit 7)                                            */
#define TIM1_EGR_BG_Msk                   (0x80UL)                  /*!< BG (Bitfield-Mask: 0x01)                              */
#define TIM1_EGR_TG_Pos                   (6UL)                     /*!< TG (Bit 6)                                            */
#define TIM1_EGR_TG_Msk                   (0x40UL)                  /*!< TG (Bitfield-Mask: 0x01)                              */
#define TIM1_EGR_COMG_Pos                 (5UL)                     /*!< COMG (Bit 5)                                          */
#define TIM1_EGR_COMG_Msk                 (0x20UL)                  /*!< COMG (Bitfield-Mask: 0x01)                            */
#define TIM1_EGR_CC4G_Pos                 (4UL)                     /*!< CC4G (Bit 4)                                          */
#define TIM1_EGR_CC4G_Msk                 (0x10UL)                  /*!< CC4G (Bitfield-Mask: 0x01)                            */
#define TIM1_EGR_CC3G_Pos                 (3UL)                     /*!< CC3G (Bit 3)                                          */
#define TIM1_EGR_CC3G_Msk                 (0x8UL)                   /*!< CC3G (Bitfield-Mask: 0x01)                            */
#define TIM1_EGR_CC2G_Pos                 (2UL)                     /*!< CC2G (Bit 2)                                          */
#define TIM1_EGR_CC2G_Msk                 (0x4UL)                   /*!< CC2G (Bitfield-Mask: 0x01)                            */
#define TIM1_EGR_CC1G_Pos                 (1UL)                     /*!< CC1G (Bit 1)                                          */
#define TIM1_EGR_CC1G_Msk                 (0x2UL)                   /*!< CC1G (Bitfield-Mask: 0x01)                            */
#define TIM1_EGR_UG_Pos                   (0UL)                     /*!< UG (Bit 0)                                            */
#define TIM1_EGR_UG_Msk                   (0x1UL)                   /*!< UG (Bitfield-Mask: 0x01)                              */
/* =====================================================  CCMR1_Output  ====================================================== */
#define TIM1_CCMR1_Output_OC2CE_Pos       (15UL)                    /*!< OC2CE (Bit 15)                                        */
#define TIM1_CCMR1_Output_OC2CE_Msk       (0x8000UL)                /*!< OC2CE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR1_Output_OC2M_Pos        (12UL)                    /*!< OC2M (Bit 12)                                         */
#define TIM1_CCMR1_Output_OC2M_Msk        (0x7000UL)                /*!< OC2M (Bitfield-Mask: 0x07)                            */
#define TIM1_CCMR1_Output_OC2PE_Pos       (11UL)                    /*!< OC2PE (Bit 11)                                        */
#define TIM1_CCMR1_Output_OC2PE_Msk       (0x800UL)                 /*!< OC2PE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR1_Output_OC2FE_Pos       (10UL)                    /*!< OC2FE (Bit 10)                                        */
#define TIM1_CCMR1_Output_OC2FE_Msk       (0x400UL)                 /*!< OC2FE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR1_Output_CC2S_Pos        (8UL)                     /*!< CC2S (Bit 8)                                          */
#define TIM1_CCMR1_Output_CC2S_Msk        (0x300UL)                 /*!< CC2S (Bitfield-Mask: 0x03)                            */
#define TIM1_CCMR1_Output_OC1CE_Pos       (7UL)                     /*!< OC1CE (Bit 7)                                         */
#define TIM1_CCMR1_Output_OC1CE_Msk       (0x80UL)                  /*!< OC1CE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR1_Output_OC1M_Pos        (4UL)                     /*!< OC1M (Bit 4)                                          */
#define TIM1_CCMR1_Output_OC1M_Msk        (0x70UL)                  /*!< OC1M (Bitfield-Mask: 0x07)                            */
#define TIM1_CCMR1_Output_OC1PE_Pos       (3UL)                     /*!< OC1PE (Bit 3)                                         */
#define TIM1_CCMR1_Output_OC1PE_Msk       (0x8UL)                   /*!< OC1PE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR1_Output_OC1FE_Pos       (2UL)                     /*!< OC1FE (Bit 2)                                         */
#define TIM1_CCMR1_Output_OC1FE_Msk       (0x4UL)                   /*!< OC1FE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR1_Output_CC1S_Pos        (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM1_CCMR1_Output_CC1S_Msk        (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* ======================================================  CCMR1_Input  ====================================================== */
#define TIM1_CCMR1_Input_IC2F_Pos         (12UL)                    /*!< IC2F (Bit 12)                                         */
#define TIM1_CCMR1_Input_IC2F_Msk         (0xf000UL)                /*!< IC2F (Bitfield-Mask: 0x0f)                            */
#define TIM1_CCMR1_Input_IC2PCS_Pos       (10UL)                    /*!< IC2PCS (Bit 10)                                       */
#define TIM1_CCMR1_Input_IC2PCS_Msk       (0xc00UL)                 /*!< IC2PCS (Bitfield-Mask: 0x03)                          */
#define TIM1_CCMR1_Input_CC2S_Pos         (8UL)                     /*!< CC2S (Bit 8)                                          */
#define TIM1_CCMR1_Input_CC2S_Msk         (0x300UL)                 /*!< CC2S (Bitfield-Mask: 0x03)                            */
#define TIM1_CCMR1_Input_IC1F_Pos         (4UL)                     /*!< IC1F (Bit 4)                                          */
#define TIM1_CCMR1_Input_IC1F_Msk         (0xf0UL)                  /*!< IC1F (Bitfield-Mask: 0x0f)                            */
#define TIM1_CCMR1_Input_ICPCS_Pos        (2UL)                     /*!< ICPCS (Bit 2)                                         */
#define TIM1_CCMR1_Input_ICPCS_Msk        (0xcUL)                   /*!< ICPCS (Bitfield-Mask: 0x03)                           */
#define TIM1_CCMR1_Input_CC1S_Pos         (0UL)                     /*!< CC1S (Bit 0)                                          */
#define TIM1_CCMR1_Input_CC1S_Msk         (0x3UL)                   /*!< CC1S (Bitfield-Mask: 0x03)                            */
/* =====================================================  CCMR2_Output  ====================================================== */
#define TIM1_CCMR2_Output_OC4CE_Pos       (15UL)                    /*!< OC4CE (Bit 15)                                        */
#define TIM1_CCMR2_Output_OC4CE_Msk       (0x8000UL)                /*!< OC4CE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR2_Output_OC4M_Pos        (12UL)                    /*!< OC4M (Bit 12)                                         */
#define TIM1_CCMR2_Output_OC4M_Msk        (0x7000UL)                /*!< OC4M (Bitfield-Mask: 0x07)                            */
#define TIM1_CCMR2_Output_OC4PE_Pos       (11UL)                    /*!< OC4PE (Bit 11)                                        */
#define TIM1_CCMR2_Output_OC4PE_Msk       (0x800UL)                 /*!< OC4PE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR2_Output_OC4FE_Pos       (10UL)                    /*!< OC4FE (Bit 10)                                        */
#define TIM1_CCMR2_Output_OC4FE_Msk       (0x400UL)                 /*!< OC4FE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR2_Output_CC4S_Pos        (8UL)                     /*!< CC4S (Bit 8)                                          */
#define TIM1_CCMR2_Output_CC4S_Msk        (0x300UL)                 /*!< CC4S (Bitfield-Mask: 0x03)                            */
#define TIM1_CCMR2_Output_OC3CE_Pos       (7UL)                     /*!< OC3CE (Bit 7)                                         */
#define TIM1_CCMR2_Output_OC3CE_Msk       (0x80UL)                  /*!< OC3CE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR2_Output_OC3M_Pos        (4UL)                     /*!< OC3M (Bit 4)                                          */
#define TIM1_CCMR2_Output_OC3M_Msk        (0x70UL)                  /*!< OC3M (Bitfield-Mask: 0x07)                            */
#define TIM1_CCMR2_Output_OC3PE_Pos       (3UL)                     /*!< OC3PE (Bit 3)                                         */
#define TIM1_CCMR2_Output_OC3PE_Msk       (0x8UL)                   /*!< OC3PE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR2_Output_OC3FE_Pos       (2UL)                     /*!< OC3FE (Bit 2)                                         */
#define TIM1_CCMR2_Output_OC3FE_Msk       (0x4UL)                   /*!< OC3FE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR2_Output_CC3S_Pos        (0UL)                     /*!< CC3S (Bit 0)                                          */
#define TIM1_CCMR2_Output_CC3S_Msk        (0x3UL)                   /*!< CC3S (Bitfield-Mask: 0x03)                            */
/* ======================================================  CCMR2_Input  ====================================================== */
#define TIM1_CCMR2_Input_IC4F_Pos         (12UL)                    /*!< IC4F (Bit 12)                                         */
#define TIM1_CCMR2_Input_IC4F_Msk         (0xf000UL)                /*!< IC4F (Bitfield-Mask: 0x0f)                            */
#define TIM1_CCMR2_Input_IC4PSC_Pos       (10UL)                    /*!< IC4PSC (Bit 10)                                       */
#define TIM1_CCMR2_Input_IC4PSC_Msk       (0xc00UL)                 /*!< IC4PSC (Bitfield-Mask: 0x03)                          */
#define TIM1_CCMR2_Input_CC4S_Pos         (8UL)                     /*!< CC4S (Bit 8)                                          */
#define TIM1_CCMR2_Input_CC4S_Msk         (0x300UL)                 /*!< CC4S (Bitfield-Mask: 0x03)                            */
#define TIM1_CCMR2_Input_IC3F_Pos         (4UL)                     /*!< IC3F (Bit 4)                                          */
#define TIM1_CCMR2_Input_IC3F_Msk         (0xf0UL)                  /*!< IC3F (Bitfield-Mask: 0x0f)                            */
#define TIM1_CCMR2_Input_IC3PSC_Pos       (2UL)                     /*!< IC3PSC (Bit 2)                                        */
#define TIM1_CCMR2_Input_IC3PSC_Msk       (0xcUL)                   /*!< IC3PSC (Bitfield-Mask: 0x03)                          */
#define TIM1_CCMR2_Input_CC3S_Pos         (0UL)                     /*!< CC3S (Bit 0)                                          */
#define TIM1_CCMR2_Input_CC3S_Msk         (0x3UL)                   /*!< CC3S (Bitfield-Mask: 0x03)                            */
/* =========================================================  CCER  ========================================================== */
#define TIM1_CCER_CC4P_Pos                (13UL)                    /*!< CC4P (Bit 13)                                         */
#define TIM1_CCER_CC4P_Msk                (0x2000UL)                /*!< CC4P (Bitfield-Mask: 0x01)                            */
#define TIM1_CCER_CC4E_Pos                (12UL)                    /*!< CC4E (Bit 12)                                         */
#define TIM1_CCER_CC4E_Msk                (0x1000UL)                /*!< CC4E (Bitfield-Mask: 0x01)                            */
#define TIM1_CCER_CC3NP_Pos               (11UL)                    /*!< CC3NP (Bit 11)                                        */
#define TIM1_CCER_CC3NP_Msk               (0x800UL)                 /*!< CC3NP (Bitfield-Mask: 0x01)                           */
#define TIM1_CCER_CC3NE_Pos               (10UL)                    /*!< CC3NE (Bit 10)                                        */
#define TIM1_CCER_CC3NE_Msk               (0x400UL)                 /*!< CC3NE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCER_CC3P_Pos                (9UL)                     /*!< CC3P (Bit 9)                                          */
#define TIM1_CCER_CC3P_Msk                (0x200UL)                 /*!< CC3P (Bitfield-Mask: 0x01)                            */
#define TIM1_CCER_CC3E_Pos                (8UL)                     /*!< CC3E (Bit 8)                                          */
#define TIM1_CCER_CC3E_Msk                (0x100UL)                 /*!< CC3E (Bitfield-Mask: 0x01)                            */
#define TIM1_CCER_CC2NP_Pos               (7UL)                     /*!< CC2NP (Bit 7)                                         */
#define TIM1_CCER_CC2NP_Msk               (0x80UL)                  /*!< CC2NP (Bitfield-Mask: 0x01)                           */
#define TIM1_CCER_CC2NE_Pos               (6UL)                     /*!< CC2NE (Bit 6)                                         */
#define TIM1_CCER_CC2NE_Msk               (0x40UL)                  /*!< CC2NE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCER_CC2P_Pos                (5UL)                     /*!< CC2P (Bit 5)                                          */
#define TIM1_CCER_CC2P_Msk                (0x20UL)                  /*!< CC2P (Bitfield-Mask: 0x01)                            */
#define TIM1_CCER_CC2E_Pos                (4UL)                     /*!< CC2E (Bit 4)                                          */
#define TIM1_CCER_CC2E_Msk                (0x10UL)                  /*!< CC2E (Bitfield-Mask: 0x01)                            */
#define TIM1_CCER_CC1NP_Pos               (3UL)                     /*!< CC1NP (Bit 3)                                         */
#define TIM1_CCER_CC1NP_Msk               (0x8UL)                   /*!< CC1NP (Bitfield-Mask: 0x01)                           */
#define TIM1_CCER_CC1NE_Pos               (2UL)                     /*!< CC1NE (Bit 2)                                         */
#define TIM1_CCER_CC1NE_Msk               (0x4UL)                   /*!< CC1NE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCER_CC1P_Pos                (1UL)                     /*!< CC1P (Bit 1)                                          */
#define TIM1_CCER_CC1P_Msk                (0x2UL)                   /*!< CC1P (Bitfield-Mask: 0x01)                            */
#define TIM1_CCER_CC1E_Pos                (0UL)                     /*!< CC1E (Bit 0)                                          */
#define TIM1_CCER_CC1E_Msk                (0x1UL)                   /*!< CC1E (Bitfield-Mask: 0x01)                            */
/* ==========================================================  CNT  ========================================================== */
#define TIM1_CNT_CNT_Pos                  (0UL)                     /*!< CNT (Bit 0)                                           */
#define TIM1_CNT_CNT_Msk                  (0xffffUL)                /*!< CNT (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  PSC  ========================================================== */
#define TIM1_PSC_PSC_Pos                  (0UL)                     /*!< PSC (Bit 0)                                           */
#define TIM1_PSC_PSC_Msk                  (0xffffUL)                /*!< PSC (Bitfield-Mask: 0xffff)                           */
/* ==========================================================  ARR  ========================================================== */
#define TIM1_ARR_ARR_Pos                  (0UL)                     /*!< ARR (Bit 0)                                           */
#define TIM1_ARR_ARR_Msk                  (0xffffUL)                /*!< ARR (Bitfield-Mask: 0xffff)                           */
/* =========================================================  CCR1  ========================================================== */
#define TIM1_CCR1_CCR1_Pos                (0UL)                     /*!< CCR1 (Bit 0)                                          */
#define TIM1_CCR1_CCR1_Msk                (0xffffUL)                /*!< CCR1 (Bitfield-Mask: 0xffff)                          */
/* =========================================================  CCR2  ========================================================== */
#define TIM1_CCR2_CCR2_Pos                (0UL)                     /*!< CCR2 (Bit 0)                                          */
#define TIM1_CCR2_CCR2_Msk                (0xffffUL)                /*!< CCR2 (Bitfield-Mask: 0xffff)                          */
/* =========================================================  CCR3  ========================================================== */
#define TIM1_CCR3_CCR3_Pos                (0UL)                     /*!< CCR3 (Bit 0)                                          */
#define TIM1_CCR3_CCR3_Msk                (0xffffUL)                /*!< CCR3 (Bitfield-Mask: 0xffff)                          */
/* =========================================================  CCR4  ========================================================== */
#define TIM1_CCR4_CCR4_Pos                (0UL)                     /*!< CCR4 (Bit 0)                                          */
#define TIM1_CCR4_CCR4_Msk                (0xffffUL)                /*!< CCR4 (Bitfield-Mask: 0xffff)                          */
/* ==========================================================  DCR  ========================================================== */
#define TIM1_DCR_DBL_Pos                  (8UL)                     /*!< DBL (Bit 8)                                           */
#define TIM1_DCR_DBL_Msk                  (0x1f00UL)                /*!< DBL (Bitfield-Mask: 0x1f)                             */
#define TIM1_DCR_DBA_Pos                  (0UL)                     /*!< DBA (Bit 0)                                           */
#define TIM1_DCR_DBA_Msk                  (0x1fUL)                  /*!< DBA (Bitfield-Mask: 0x1f)                             */
/* =========================================================  DMAR  ========================================================== */
#define TIM1_DMAR_DMAB_Pos                (0UL)                     /*!< DMAB (Bit 0)                                          */
#define TIM1_DMAR_DMAB_Msk                (0xffffUL)                /*!< DMAB (Bitfield-Mask: 0xffff)                          */
/* ==========================================================  RCR  ========================================================== */
#define TIM1_RCR_REP_Pos                  (0UL)                     /*!< REP (Bit 0)                                           */
#define TIM1_RCR_REP_Msk                  (0xffUL)                  /*!< REP (Bitfield-Mask: 0xff)                             */
/* =========================================================  BDTR  ========================================================== */
#define TIM1_BDTR_DTG_Pos                 (0UL)                     /*!< DTG (Bit 0)                                           */
#define TIM1_BDTR_DTG_Msk                 (0xffUL)                  /*!< DTG (Bitfield-Mask: 0xff)                             */
#define TIM1_BDTR_LOCK_Pos                (8UL)                     /*!< LOCK (Bit 8)                                          */
#define TIM1_BDTR_LOCK_Msk                (0x300UL)                 /*!< LOCK (Bitfield-Mask: 0x03)                            */
#define TIM1_BDTR_OSSI_Pos                (10UL)                    /*!< OSSI (Bit 10)                                         */
#define TIM1_BDTR_OSSI_Msk                (0x400UL)                 /*!< OSSI (Bitfield-Mask: 0x01)                            */
#define TIM1_BDTR_OSSR_Pos                (11UL)                    /*!< OSSR (Bit 11)                                         */
#define TIM1_BDTR_OSSR_Msk                (0x800UL)                 /*!< OSSR (Bitfield-Mask: 0x01)                            */
#define TIM1_BDTR_BKE_Pos                 (12UL)                    /*!< BKE (Bit 12)                                          */
#define TIM1_BDTR_BKE_Msk                 (0x1000UL)                /*!< BKE (Bitfield-Mask: 0x01)                             */
#define TIM1_BDTR_BKP_Pos                 (13UL)                    /*!< BKP (Bit 13)                                          */
#define TIM1_BDTR_BKP_Msk                 (0x2000UL)                /*!< BKP (Bitfield-Mask: 0x01)                             */
#define TIM1_BDTR_AOE_Pos                 (14UL)                    /*!< AOE (Bit 14)                                          */
#define TIM1_BDTR_AOE_Msk                 (0x4000UL)                /*!< AOE (Bitfield-Mask: 0x01)                             */
#define TIM1_BDTR_MOE_Pos                 (15UL)                    /*!< MOE (Bit 15)                                          */
#define TIM1_BDTR_MOE_Msk                 (0x8000UL)                /*!< MOE (Bitfield-Mask: 0x01)                             */
#define TIM1_BDTR_BKF_Pos                 (16UL)                    /*!< BKF (Bit 16)                                          */
#define TIM1_BDTR_BKF_Msk                 (0xf0000UL)               /*!< BKF (Bitfield-Mask: 0x0f)                             */
#define TIM1_BDTR_BK2F_Pos                (20UL)                    /*!< BK2F (Bit 20)                                         */
#define TIM1_BDTR_BK2F_Msk                (0xf00000UL)              /*!< BK2F (Bitfield-Mask: 0x0f)                            */
#define TIM1_BDTR_BK2E_Pos                (24UL)                    /*!< BK2E (Bit 24)                                         */
#define TIM1_BDTR_BK2E_Msk                (0x1000000UL)             /*!< BK2E (Bitfield-Mask: 0x01)                            */
#define TIM1_BDTR_BK2P_Pos                (25UL)                    /*!< BK2P (Bit 25)                                         */
#define TIM1_BDTR_BK2P_Msk                (0x2000000UL)             /*!< BK2P (Bitfield-Mask: 0x01)                            */
/* =====================================================  CCMR3_Output  ====================================================== */
#define TIM1_CCMR3_Output_OC5FE_Pos       (2UL)                     /*!< OC5FE (Bit 2)                                         */
#define TIM1_CCMR3_Output_OC5FE_Msk       (0x4UL)                   /*!< OC5FE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR3_Output_OC5PE_Pos       (3UL)                     /*!< OC5PE (Bit 3)                                         */
#define TIM1_CCMR3_Output_OC5PE_Msk       (0x8UL)                   /*!< OC5PE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR3_Output_OC5M_Pos        (4UL)                     /*!< OC5M (Bit 4)                                          */
#define TIM1_CCMR3_Output_OC5M_Msk        (0x70UL)                  /*!< OC5M (Bitfield-Mask: 0x07)                            */
#define TIM1_CCMR3_Output_OC5CE_Pos       (7UL)                     /*!< OC5CE (Bit 7)                                         */
#define TIM1_CCMR3_Output_OC5CE_Msk       (0x80UL)                  /*!< OC5CE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR3_Output_OC6FE_Pos       (10UL)                    /*!< OC6FE (Bit 10)                                        */
#define TIM1_CCMR3_Output_OC6FE_Msk       (0x400UL)                 /*!< OC6FE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR3_Output_OC6PE_Pos       (11UL)                    /*!< OC6PE (Bit 11)                                        */
#define TIM1_CCMR3_Output_OC6PE_Msk       (0x800UL)                 /*!< OC6PE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR3_Output_OC6M_Pos        (12UL)                    /*!< OC6M (Bit 12)                                         */
#define TIM1_CCMR3_Output_OC6M_Msk        (0x7000UL)                /*!< OC6M (Bitfield-Mask: 0x07)                            */
#define TIM1_CCMR3_Output_OC6CE_Pos       (15UL)                    /*!< OC6CE (Bit 15)                                        */
#define TIM1_CCMR3_Output_OC6CE_Msk       (0x8000UL)                /*!< OC6CE (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR3_Output_OC5M3_Pos       (16UL)                    /*!< OC5M3 (Bit 16)                                        */
#define TIM1_CCMR3_Output_OC5M3_Msk       (0x10000UL)               /*!< OC5M3 (Bitfield-Mask: 0x01)                           */
#define TIM1_CCMR3_Output_OC6M3_Pos       (24UL)                    /*!< OC6M3 (Bit 24)                                        */
#define TIM1_CCMR3_Output_OC6M3_Msk       (0x1000000UL)             /*!< OC6M3 (Bitfield-Mask: 0x01)                           */
/* =========================================================  CCR5  ========================================================== */
#define TIM1_CCR5_CCR5_Pos                (0UL)                     /*!< CCR5 (Bit 0)                                          */
#define TIM1_CCR5_CCR5_Msk                (0xffffUL)                /*!< CCR5 (Bitfield-Mask: 0xffff)                          */
#define TIM1_CCR5_GC5C1_Pos               (29UL)                    /*!< GC5C1 (Bit 29)                                        */
#define TIM1_CCR5_GC5C1_Msk               (0x20000000UL)            /*!< GC5C1 (Bitfield-Mask: 0x01)                           */
#define TIM1_CCR5_GC5C2_Pos               (30UL)                    /*!< GC5C2 (Bit 30)                                        */
#define TIM1_CCR5_GC5C2_Msk               (0x40000000UL)            /*!< GC5C2 (Bitfield-Mask: 0x01)                           */
#define TIM1_CCR5_GC5C3_Pos               (31UL)                    /*!< GC5C3 (Bit 31)                                        */
#define TIM1_CCR5_GC5C3_Msk               (0x80000000UL)            /*!< GC5C3 (Bitfield-Mask: 0x01)                           */
/* =========================================================  CRR6  ========================================================== */
#define TIM1_CRR6_CCR6_Pos                (0UL)                     /*!< CCR6 (Bit 0)                                          */
#define TIM1_CRR6_CCR6_Msk                (0xffffUL)                /*!< CCR6 (Bitfield-Mask: 0xffff)                          */
/* ==========================================================  AF1  ========================================================== */
#define TIM1_AF1_BKINE_Pos                (0UL)                     /*!< BKINE (Bit 0)                                         */
#define TIM1_AF1_BKINE_Msk                (0x1UL)                   /*!< BKINE (Bitfield-Mask: 0x01)                           */
#define TIM1_AF1_BKDFBKE_Pos              (8UL)                     /*!< BKDFBKE (Bit 8)                                       */
#define TIM1_AF1_BKDFBKE_Msk              (0x100UL)                 /*!< BKDFBKE (Bitfield-Mask: 0x01)                         */
#define TIM1_AF1_BKINP_Pos                (9UL)                     /*!< BKINP (Bit 9)                                         */
#define TIM1_AF1_BKINP_Msk                (0x200UL)                 /*!< BKINP (Bitfield-Mask: 0x01)                           */
/* ==========================================================  AF2  ========================================================== */
#define TIM1_AF2_BK2INE_Pos               (0UL)                     /*!< BK2INE (Bit 0)                                        */
#define TIM1_AF2_BK2INE_Msk               (0x1UL)                   /*!< BK2INE (Bitfield-Mask: 0x01)                          */
#define TIM1_AF2_BK2DFBKE_Pos             (8UL)                     /*!< BK2DFBKE (Bit 8)                                      */
#define TIM1_AF2_BK2DFBKE_Msk             (0x100UL)                 /*!< BK2DFBKE (Bitfield-Mask: 0x01)                        */
#define TIM1_AF2_BK2INP_Pos               (9UL)                     /*!< BK2INP (Bit 9)                                        */
#define TIM1_AF2_BK2INP_Msk               (0x200UL)                 /*!< BK2INP (Bitfield-Mask: 0x01)                          */
