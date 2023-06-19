#include "core.h"


#define EXTI_BASE                   0x40013C00UL

#define EXTI                        ((volatile EXTI_Type*)              EXTI_BASE)


/* =========================================================================================================================== */
/* ================                                           EXTI                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief External interrupt/event
      controller (EXTI)
  */

typedef struct {                                /*!< (@ 0x40013C00) EXTI Structure                                             */
  
  union {
    __IOM uint32_t IMR;                         /*!< (@ 0x00000000) Interrupt mask register (EXTI_IMR)                         */
    
    struct {
      __IOM uint32_t MR0        : 1;            /*!< [0..0] Interrupt Mask on line 0                                           */
      __IOM uint32_t MR1        : 1;            /*!< [1..1] Interrupt Mask on line 1                                           */
      __IOM uint32_t MR2        : 1;            /*!< [2..2] Interrupt Mask on line 2                                           */
      __IOM uint32_t MR3        : 1;            /*!< [3..3] Interrupt Mask on line 3                                           */
      __IOM uint32_t MR4        : 1;            /*!< [4..4] Interrupt Mask on line 4                                           */
      __IOM uint32_t MR5        : 1;            /*!< [5..5] Interrupt Mask on line 5                                           */
      __IOM uint32_t MR6        : 1;            /*!< [6..6] Interrupt Mask on line 6                                           */
      __IOM uint32_t MR7        : 1;            /*!< [7..7] Interrupt Mask on line 7                                           */
      __IOM uint32_t MR8        : 1;            /*!< [8..8] Interrupt Mask on line 8                                           */
      __IOM uint32_t MR9        : 1;            /*!< [9..9] Interrupt Mask on line 9                                           */
      __IOM uint32_t MR10       : 1;            /*!< [10..10] Interrupt Mask on line 10                                        */
      __IOM uint32_t MR11       : 1;            /*!< [11..11] Interrupt Mask on line 11                                        */
      __IOM uint32_t MR12       : 1;            /*!< [12..12] Interrupt Mask on line 12                                        */
      __IOM uint32_t MR13       : 1;            /*!< [13..13] Interrupt Mask on line 13                                        */
      __IOM uint32_t MR14       : 1;            /*!< [14..14] Interrupt Mask on line 14                                        */
      __IOM uint32_t MR15       : 1;            /*!< [15..15] Interrupt Mask on line 15                                        */
      __IOM uint32_t MR16       : 1;            /*!< [16..16] Interrupt Mask on line 16                                        */
      __IOM uint32_t MR17       : 1;            /*!< [17..17] Interrupt Mask on line 17                                        */
      __IOM uint32_t MR18       : 1;            /*!< [18..18] Interrupt Mask on line 18                                        */
      __IOM uint32_t MR19       : 1;            /*!< [19..19] Interrupt Mask on line 19                                        */
      __IOM uint32_t MR20       : 1;            /*!< [20..20] Interrupt Mask on line 20                                        */
      __IOM uint32_t MR21       : 1;            /*!< [21..21] Interrupt Mask on line 21                                        */
      __IOM uint32_t MR22       : 1;            /*!< [22..22] Interrupt Mask on line 22                                        */
            uint32_t            : 9;
    } IMR_b;
  } ;
  
  union {
    __IOM uint32_t EMR;                         /*!< (@ 0x00000004) Event mask register (EXTI_EMR)                             */
    
    struct {
      __IOM uint32_t MR0        : 1;            /*!< [0..0] Event Mask on line 0                                               */
      __IOM uint32_t MR1        : 1;            /*!< [1..1] Event Mask on line 1                                               */
      __IOM uint32_t MR2        : 1;            /*!< [2..2] Event Mask on line 2                                               */
      __IOM uint32_t MR3        : 1;            /*!< [3..3] Event Mask on line 3                                               */
      __IOM uint32_t MR4        : 1;            /*!< [4..4] Event Mask on line 4                                               */
      __IOM uint32_t MR5        : 1;            /*!< [5..5] Event Mask on line 5                                               */
      __IOM uint32_t MR6        : 1;            /*!< [6..6] Event Mask on line 6                                               */
      __IOM uint32_t MR7        : 1;            /*!< [7..7] Event Mask on line 7                                               */
      __IOM uint32_t MR8        : 1;            /*!< [8..8] Event Mask on line 8                                               */
      __IOM uint32_t MR9        : 1;            /*!< [9..9] Event Mask on line 9                                               */
      __IOM uint32_t MR10       : 1;            /*!< [10..10] Event Mask on line 10                                            */
      __IOM uint32_t MR11       : 1;            /*!< [11..11] Event Mask on line 11                                            */
      __IOM uint32_t MR12       : 1;            /*!< [12..12] Event Mask on line 12                                            */
      __IOM uint32_t MR13       : 1;            /*!< [13..13] Event Mask on line 13                                            */
      __IOM uint32_t MR14       : 1;            /*!< [14..14] Event Mask on line 14                                            */
      __IOM uint32_t MR15       : 1;            /*!< [15..15] Event Mask on line 15                                            */
      __IOM uint32_t MR16       : 1;            /*!< [16..16] Event Mask on line 16                                            */
      __IOM uint32_t MR17       : 1;            /*!< [17..17] Event Mask on line 17                                            */
      __IOM uint32_t MR18       : 1;            /*!< [18..18] Event Mask on line 18                                            */
      __IOM uint32_t MR19       : 1;            /*!< [19..19] Event Mask on line 19                                            */
      __IOM uint32_t MR20       : 1;            /*!< [20..20] Event Mask on line 20                                            */
      __IOM uint32_t MR21       : 1;            /*!< [21..21] Event Mask on line 21                                            */
      __IOM uint32_t MR22       : 1;            /*!< [22..22] Event Mask on line 22                                            */
            uint32_t            : 9;
    } EMR_b;
  } ;
  
  union {
    __IOM uint32_t RTSR;                        /*!< (@ 0x00000008) Rising Trigger selection register (EXTI_RTSR)              */
    
    struct {
      __IOM uint32_t TR0        : 1;            /*!< [0..0] Rising trigger event configuration of line 0                       */
      __IOM uint32_t TR1        : 1;            /*!< [1..1] Rising trigger event configuration of line 1                       */
      __IOM uint32_t TR2        : 1;            /*!< [2..2] Rising trigger event configuration of line 2                       */
      __IOM uint32_t TR3        : 1;            /*!< [3..3] Rising trigger event configuration of line 3                       */
      __IOM uint32_t TR4        : 1;            /*!< [4..4] Rising trigger event configuration of line 4                       */
      __IOM uint32_t TR5        : 1;            /*!< [5..5] Rising trigger event configuration of line 5                       */
      __IOM uint32_t TR6        : 1;            /*!< [6..6] Rising trigger event configuration of line 6                       */
      __IOM uint32_t TR7        : 1;            /*!< [7..7] Rising trigger event configuration of line 7                       */
      __IOM uint32_t TR8        : 1;            /*!< [8..8] Rising trigger event configuration of line 8                       */
      __IOM uint32_t TR9        : 1;            /*!< [9..9] Rising trigger event configuration of line 9                       */
      __IOM uint32_t TR10       : 1;            /*!< [10..10] Rising trigger event configuration of line 10                    */
      __IOM uint32_t TR11       : 1;            /*!< [11..11] Rising trigger event configuration of line 11                    */
      __IOM uint32_t TR12       : 1;            /*!< [12..12] Rising trigger event configuration of line 12                    */
      __IOM uint32_t TR13       : 1;            /*!< [13..13] Rising trigger event configuration of line 13                    */
      __IOM uint32_t TR14       : 1;            /*!< [14..14] Rising trigger event configuration of line 14                    */
      __IOM uint32_t TR15       : 1;            /*!< [15..15] Rising trigger event configuration of line 15                    */
      __IOM uint32_t TR16       : 1;            /*!< [16..16] Rising trigger event configuration of line 16                    */
      __IOM uint32_t TR17       : 1;            /*!< [17..17] Rising trigger event configuration of line 17                    */
      __IOM uint32_t TR18       : 1;            /*!< [18..18] Rising trigger event configuration of line 18                    */
      __IOM uint32_t TR19       : 1;            /*!< [19..19] Rising trigger event configuration of line 19                    */
      __IOM uint32_t TR20       : 1;            /*!< [20..20] Rising trigger event configuration of line 20                    */
      __IOM uint32_t TR21       : 1;            /*!< [21..21] Rising trigger event configuration of line 21                    */
      __IOM uint32_t TR22       : 1;            /*!< [22..22] Rising trigger event configuration of line 22                    */
            uint32_t            : 9;
    } RTSR_b;
  } ;
  
  union {
    __IOM uint32_t FTSR;                        /*!< (@ 0x0000000C) Falling Trigger selection register (EXTI_FTSR)             */
    
    struct {
      __IOM uint32_t TR0        : 1;            /*!< [0..0] Falling trigger event configuration of line 0                      */
      __IOM uint32_t TR1        : 1;            /*!< [1..1] Falling trigger event configuration of line 1                      */
      __IOM uint32_t TR2        : 1;            /*!< [2..2] Falling trigger event configuration of line 2                      */
      __IOM uint32_t TR3        : 1;            /*!< [3..3] Falling trigger event configuration of line 3                      */
      __IOM uint32_t TR4        : 1;            /*!< [4..4] Falling trigger event configuration of line 4                      */
      __IOM uint32_t TR5        : 1;            /*!< [5..5] Falling trigger event configuration of line 5                      */
      __IOM uint32_t TR6        : 1;            /*!< [6..6] Falling trigger event configuration of line 6                      */
      __IOM uint32_t TR7        : 1;            /*!< [7..7] Falling trigger event configuration of line 7                      */
      __IOM uint32_t TR8        : 1;            /*!< [8..8] Falling trigger event configuration of line 8                      */
      __IOM uint32_t TR9        : 1;            /*!< [9..9] Falling trigger event configuration of line 9                      */
      __IOM uint32_t TR10       : 1;            /*!< [10..10] Falling trigger event configuration of line 10                   */
      __IOM uint32_t TR11       : 1;            /*!< [11..11] Falling trigger event configuration of line 11                   */
      __IOM uint32_t TR12       : 1;            /*!< [12..12] Falling trigger event configuration of line 12                   */
      __IOM uint32_t TR13       : 1;            /*!< [13..13] Falling trigger event configuration of line 13                   */
      __IOM uint32_t TR14       : 1;            /*!< [14..14] Falling trigger event configuration of line 14                   */
      __IOM uint32_t TR15       : 1;            /*!< [15..15] Falling trigger event configuration of line 15                   */
      __IOM uint32_t TR16       : 1;            /*!< [16..16] Falling trigger event configuration of line 16                   */
      __IOM uint32_t TR17       : 1;            /*!< [17..17] Falling trigger event configuration of line 17                   */
      __IOM uint32_t TR18       : 1;            /*!< [18..18] Falling trigger event configuration of line 18                   */
      __IOM uint32_t TR19       : 1;            /*!< [19..19] Falling trigger event configuration of line 19                   */
      __IOM uint32_t TR20       : 1;            /*!< [20..20] Falling trigger event configuration of line 20                   */
      __IOM uint32_t TR21       : 1;            /*!< [21..21] Falling trigger event configuration of line 21                   */
      __IOM uint32_t TR22       : 1;            /*!< [22..22] Falling trigger event configuration of line 22                   */
            uint32_t            : 9;
    } FTSR_b;
  } ;
  
  union {
    __IOM uint32_t SWIER;                       /*!< (@ 0x00000010) Software interrupt event register (EXTI_SWIER)             */
    
    struct {
      __IOM uint32_t SWIER0     : 1;            /*!< [0..0] Software Interrupt on line 0                                       */
      __IOM uint32_t SWIER1     : 1;            /*!< [1..1] Software Interrupt on line 1                                       */
      __IOM uint32_t SWIER2     : 1;            /*!< [2..2] Software Interrupt on line 2                                       */
      __IOM uint32_t SWIER3     : 1;            /*!< [3..3] Software Interrupt on line 3                                       */
      __IOM uint32_t SWIER4     : 1;            /*!< [4..4] Software Interrupt on line 4                                       */
      __IOM uint32_t SWIER5     : 1;            /*!< [5..5] Software Interrupt on line 5                                       */
      __IOM uint32_t SWIER6     : 1;            /*!< [6..6] Software Interrupt on line 6                                       */
      __IOM uint32_t SWIER7     : 1;            /*!< [7..7] Software Interrupt on line 7                                       */
      __IOM uint32_t SWIER8     : 1;            /*!< [8..8] Software Interrupt on line 8                                       */
      __IOM uint32_t SWIER9     : 1;            /*!< [9..9] Software Interrupt on line 9                                       */
      __IOM uint32_t SWIER10    : 1;            /*!< [10..10] Software Interrupt on line 10                                    */
      __IOM uint32_t SWIER11    : 1;            /*!< [11..11] Software Interrupt on line 11                                    */
      __IOM uint32_t SWIER12    : 1;            /*!< [12..12] Software Interrupt on line 12                                    */
      __IOM uint32_t SWIER13    : 1;            /*!< [13..13] Software Interrupt on line 13                                    */
      __IOM uint32_t SWIER14    : 1;            /*!< [14..14] Software Interrupt on line 14                                    */
      __IOM uint32_t SWIER15    : 1;            /*!< [15..15] Software Interrupt on line 15                                    */
      __IOM uint32_t SWIER16    : 1;            /*!< [16..16] Software Interrupt on line 16                                    */
      __IOM uint32_t SWIER17    : 1;            /*!< [17..17] Software Interrupt on line 17                                    */
      __IOM uint32_t SWIER18    : 1;            /*!< [18..18] Software Interrupt on line 18                                    */
      __IOM uint32_t SWIER19    : 1;            /*!< [19..19] Software Interrupt on line 19                                    */
      __IOM uint32_t SWIER20    : 1;            /*!< [20..20] Software Interrupt on line 20                                    */
      __IOM uint32_t SWIER21    : 1;            /*!< [21..21] Software Interrupt on line 21                                    */
      __IOM uint32_t SWIER22    : 1;            /*!< [22..22] Software Interrupt on line 22                                    */
            uint32_t            : 9;
    } SWIER_b;
  } ;
  
  union {
    __IOM uint32_t PR;                          /*!< (@ 0x00000014) Pending register (EXTI_PR)                                 */
    
    struct {
      __IOM uint32_t PR0        : 1;            /*!< [0..0] Pending bit 0                                                      */
      __IOM uint32_t PR1        : 1;            /*!< [1..1] Pending bit 1                                                      */
      __IOM uint32_t PR2        : 1;            /*!< [2..2] Pending bit 2                                                      */
      __IOM uint32_t PR3        : 1;            /*!< [3..3] Pending bit 3                                                      */
      __IOM uint32_t PR4        : 1;            /*!< [4..4] Pending bit 4                                                      */
      __IOM uint32_t PR5        : 1;            /*!< [5..5] Pending bit 5                                                      */
      __IOM uint32_t PR6        : 1;            /*!< [6..6] Pending bit 6                                                      */
      __IOM uint32_t PR7        : 1;            /*!< [7..7] Pending bit 7                                                      */
      __IOM uint32_t PR8        : 1;            /*!< [8..8] Pending bit 8                                                      */
      __IOM uint32_t PR9        : 1;            /*!< [9..9] Pending bit 9                                                      */
      __IOM uint32_t PR10       : 1;            /*!< [10..10] Pending bit 10                                                   */
      __IOM uint32_t PR11       : 1;            /*!< [11..11] Pending bit 11                                                   */
      __IOM uint32_t PR12       : 1;            /*!< [12..12] Pending bit 12                                                   */
      __IOM uint32_t PR13       : 1;            /*!< [13..13] Pending bit 13                                                   */
      __IOM uint32_t PR14       : 1;            /*!< [14..14] Pending bit 14                                                   */
      __IOM uint32_t PR15       : 1;            /*!< [15..15] Pending bit 15                                                   */
      __IOM uint32_t PR16       : 1;            /*!< [16..16] Pending bit 16                                                   */
      __IOM uint32_t PR17       : 1;            /*!< [17..17] Pending bit 17                                                   */
      __IOM uint32_t PR18       : 1;            /*!< [18..18] Pending bit 18                                                   */
      __IOM uint32_t PR19       : 1;            /*!< [19..19] Pending bit 19                                                   */
      __IOM uint32_t PR20       : 1;            /*!< [20..20] Pending bit 20                                                   */
      __IOM uint32_t PR21       : 1;            /*!< [21..21] Pending bit 21                                                   */
      __IOM uint32_t PR22       : 1;            /*!< [22..22] Pending bit 22                                                   */
            uint32_t            : 9;
    } PR_b;
  } ;
} EXTI_Type;                                    /*!< Size = 24 (0x18)                                                          */



/* =========================================================================================================================== */
/* ================                                           EXTI                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  IMR  ========================================================== */
#define EXTI_IMR_MR0_Pos                  (0UL)                     /*!< MR0 (Bit 0)                                           */
#define EXTI_IMR_MR0_Msk                  (0x1UL)                   /*!< MR0 (Bitfield-Mask: 0x01)                             */
#define EXTI_IMR_MR1_Pos                  (1UL)                     /*!< MR1 (Bit 1)                                           */
#define EXTI_IMR_MR1_Msk                  (0x2UL)                   /*!< MR1 (Bitfield-Mask: 0x01)                             */
#define EXTI_IMR_MR2_Pos                  (2UL)                     /*!< MR2 (Bit 2)                                           */
#define EXTI_IMR_MR2_Msk                  (0x4UL)                   /*!< MR2 (Bitfield-Mask: 0x01)                             */
#define EXTI_IMR_MR3_Pos                  (3UL)                     /*!< MR3 (Bit 3)                                           */
#define EXTI_IMR_MR3_Msk                  (0x8UL)                   /*!< MR3 (Bitfield-Mask: 0x01)                             */
#define EXTI_IMR_MR4_Pos                  (4UL)                     /*!< MR4 (Bit 4)                                           */
#define EXTI_IMR_MR4_Msk                  (0x10UL)                  /*!< MR4 (Bitfield-Mask: 0x01)                             */
#define EXTI_IMR_MR5_Pos                  (5UL)                     /*!< MR5 (Bit 5)                                           */
#define EXTI_IMR_MR5_Msk                  (0x20UL)                  /*!< MR5 (Bitfield-Mask: 0x01)                             */
#define EXTI_IMR_MR6_Pos                  (6UL)                     /*!< MR6 (Bit 6)                                           */
#define EXTI_IMR_MR6_Msk                  (0x40UL)                  /*!< MR6 (Bitfield-Mask: 0x01)                             */
#define EXTI_IMR_MR7_Pos                  (7UL)                     /*!< MR7 (Bit 7)                                           */
#define EXTI_IMR_MR7_Msk                  (0x80UL)                  /*!< MR7 (Bitfield-Mask: 0x01)                             */
#define EXTI_IMR_MR8_Pos                  (8UL)                     /*!< MR8 (Bit 8)                                           */
#define EXTI_IMR_MR8_Msk                  (0x100UL)                 /*!< MR8 (Bitfield-Mask: 0x01)                             */
#define EXTI_IMR_MR9_Pos                  (9UL)                     /*!< MR9 (Bit 9)                                           */
#define EXTI_IMR_MR9_Msk                  (0x200UL)                 /*!< MR9 (Bitfield-Mask: 0x01)                             */
#define EXTI_IMR_MR10_Pos                 (10UL)                    /*!< MR10 (Bit 10)                                         */
#define EXTI_IMR_MR10_Msk                 (0x400UL)                 /*!< MR10 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR11_Pos                 (11UL)                    /*!< MR11 (Bit 11)                                         */
#define EXTI_IMR_MR11_Msk                 (0x800UL)                 /*!< MR11 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR12_Pos                 (12UL)                    /*!< MR12 (Bit 12)                                         */
#define EXTI_IMR_MR12_Msk                 (0x1000UL)                /*!< MR12 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR13_Pos                 (13UL)                    /*!< MR13 (Bit 13)                                         */
#define EXTI_IMR_MR13_Msk                 (0x2000UL)                /*!< MR13 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR14_Pos                 (14UL)                    /*!< MR14 (Bit 14)                                         */
#define EXTI_IMR_MR14_Msk                 (0x4000UL)                /*!< MR14 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR15_Pos                 (15UL)                    /*!< MR15 (Bit 15)                                         */
#define EXTI_IMR_MR15_Msk                 (0x8000UL)                /*!< MR15 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR16_Pos                 (16UL)                    /*!< MR16 (Bit 16)                                         */
#define EXTI_IMR_MR16_Msk                 (0x10000UL)               /*!< MR16 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR17_Pos                 (17UL)                    /*!< MR17 (Bit 17)                                         */
#define EXTI_IMR_MR17_Msk                 (0x20000UL)               /*!< MR17 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR18_Pos                 (18UL)                    /*!< MR18 (Bit 18)                                         */
#define EXTI_IMR_MR18_Msk                 (0x40000UL)               /*!< MR18 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR19_Pos                 (19UL)                    /*!< MR19 (Bit 19)                                         */
#define EXTI_IMR_MR19_Msk                 (0x80000UL)               /*!< MR19 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR20_Pos                 (20UL)                    /*!< MR20 (Bit 20)                                         */
#define EXTI_IMR_MR20_Msk                 (0x100000UL)              /*!< MR20 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR21_Pos                 (21UL)                    /*!< MR21 (Bit 21)                                         */
#define EXTI_IMR_MR21_Msk                 (0x200000UL)              /*!< MR21 (Bitfield-Mask: 0x01)                            */
#define EXTI_IMR_MR22_Pos                 (22UL)                    /*!< MR22 (Bit 22)                                         */
#define EXTI_IMR_MR22_Msk                 (0x400000UL)              /*!< MR22 (Bitfield-Mask: 0x01)                            */
/* ==========================================================  EMR  ========================================================== */
#define EXTI_EMR_MR0_Pos                  (0UL)                     /*!< MR0 (Bit 0)                                           */
#define EXTI_EMR_MR0_Msk                  (0x1UL)                   /*!< MR0 (Bitfield-Mask: 0x01)                             */
#define EXTI_EMR_MR1_Pos                  (1UL)                     /*!< MR1 (Bit 1)                                           */
#define EXTI_EMR_MR1_Msk                  (0x2UL)                   /*!< MR1 (Bitfield-Mask: 0x01)                             */
#define EXTI_EMR_MR2_Pos                  (2UL)                     /*!< MR2 (Bit 2)                                           */
#define EXTI_EMR_MR2_Msk                  (0x4UL)                   /*!< MR2 (Bitfield-Mask: 0x01)                             */
#define EXTI_EMR_MR3_Pos                  (3UL)                     /*!< MR3 (Bit 3)                                           */
#define EXTI_EMR_MR3_Msk                  (0x8UL)                   /*!< MR3 (Bitfield-Mask: 0x01)                             */
#define EXTI_EMR_MR4_Pos                  (4UL)                     /*!< MR4 (Bit 4)                                           */
#define EXTI_EMR_MR4_Msk                  (0x10UL)                  /*!< MR4 (Bitfield-Mask: 0x01)                             */
#define EXTI_EMR_MR5_Pos                  (5UL)                     /*!< MR5 (Bit 5)                                           */
#define EXTI_EMR_MR5_Msk                  (0x20UL)                  /*!< MR5 (Bitfield-Mask: 0x01)                             */
#define EXTI_EMR_MR6_Pos                  (6UL)                     /*!< MR6 (Bit 6)                                           */
#define EXTI_EMR_MR6_Msk                  (0x40UL)                  /*!< MR6 (Bitfield-Mask: 0x01)                             */
#define EXTI_EMR_MR7_Pos                  (7UL)                     /*!< MR7 (Bit 7)                                           */
#define EXTI_EMR_MR7_Msk                  (0x80UL)                  /*!< MR7 (Bitfield-Mask: 0x01)                             */
#define EXTI_EMR_MR8_Pos                  (8UL)                     /*!< MR8 (Bit 8)                                           */
#define EXTI_EMR_MR8_Msk                  (0x100UL)                 /*!< MR8 (Bitfield-Mask: 0x01)                             */
#define EXTI_EMR_MR9_Pos                  (9UL)                     /*!< MR9 (Bit 9)                                           */
#define EXTI_EMR_MR9_Msk                  (0x200UL)                 /*!< MR9 (Bitfield-Mask: 0x01)                             */
#define EXTI_EMR_MR10_Pos                 (10UL)                    /*!< MR10 (Bit 10)                                         */
#define EXTI_EMR_MR10_Msk                 (0x400UL)                 /*!< MR10 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR11_Pos                 (11UL)                    /*!< MR11 (Bit 11)                                         */
#define EXTI_EMR_MR11_Msk                 (0x800UL)                 /*!< MR11 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR12_Pos                 (12UL)                    /*!< MR12 (Bit 12)                                         */
#define EXTI_EMR_MR12_Msk                 (0x1000UL)                /*!< MR12 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR13_Pos                 (13UL)                    /*!< MR13 (Bit 13)                                         */
#define EXTI_EMR_MR13_Msk                 (0x2000UL)                /*!< MR13 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR14_Pos                 (14UL)                    /*!< MR14 (Bit 14)                                         */
#define EXTI_EMR_MR14_Msk                 (0x4000UL)                /*!< MR14 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR15_Pos                 (15UL)                    /*!< MR15 (Bit 15)                                         */
#define EXTI_EMR_MR15_Msk                 (0x8000UL)                /*!< MR15 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR16_Pos                 (16UL)                    /*!< MR16 (Bit 16)                                         */
#define EXTI_EMR_MR16_Msk                 (0x10000UL)               /*!< MR16 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR17_Pos                 (17UL)                    /*!< MR17 (Bit 17)                                         */
#define EXTI_EMR_MR17_Msk                 (0x20000UL)               /*!< MR17 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR18_Pos                 (18UL)                    /*!< MR18 (Bit 18)                                         */
#define EXTI_EMR_MR18_Msk                 (0x40000UL)               /*!< MR18 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR19_Pos                 (19UL)                    /*!< MR19 (Bit 19)                                         */
#define EXTI_EMR_MR19_Msk                 (0x80000UL)               /*!< MR19 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR20_Pos                 (20UL)                    /*!< MR20 (Bit 20)                                         */
#define EXTI_EMR_MR20_Msk                 (0x100000UL)              /*!< MR20 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR21_Pos                 (21UL)                    /*!< MR21 (Bit 21)                                         */
#define EXTI_EMR_MR21_Msk                 (0x200000UL)              /*!< MR21 (Bitfield-Mask: 0x01)                            */
#define EXTI_EMR_MR22_Pos                 (22UL)                    /*!< MR22 (Bit 22)                                         */
#define EXTI_EMR_MR22_Msk                 (0x400000UL)              /*!< MR22 (Bitfield-Mask: 0x01)                            */
/* =========================================================  RTSR  ========================================================== */
#define EXTI_RTSR_TR0_Pos                 (0UL)                     /*!< TR0 (Bit 0)                                           */
#define EXTI_RTSR_TR0_Msk                 (0x1UL)                   /*!< TR0 (Bitfield-Mask: 0x01)                             */
#define EXTI_RTSR_TR1_Pos                 (1UL)                     /*!< TR1 (Bit 1)                                           */
#define EXTI_RTSR_TR1_Msk                 (0x2UL)                   /*!< TR1 (Bitfield-Mask: 0x01)                             */
#define EXTI_RTSR_TR2_Pos                 (2UL)                     /*!< TR2 (Bit 2)                                           */
#define EXTI_RTSR_TR2_Msk                 (0x4UL)                   /*!< TR2 (Bitfield-Mask: 0x01)                             */
#define EXTI_RTSR_TR3_Pos                 (3UL)                     /*!< TR3 (Bit 3)                                           */
#define EXTI_RTSR_TR3_Msk                 (0x8UL)                   /*!< TR3 (Bitfield-Mask: 0x01)                             */
#define EXTI_RTSR_TR4_Pos                 (4UL)                     /*!< TR4 (Bit 4)                                           */
#define EXTI_RTSR_TR4_Msk                 (0x10UL)                  /*!< TR4 (Bitfield-Mask: 0x01)                             */
#define EXTI_RTSR_TR5_Pos                 (5UL)                     /*!< TR5 (Bit 5)                                           */
#define EXTI_RTSR_TR5_Msk                 (0x20UL)                  /*!< TR5 (Bitfield-Mask: 0x01)                             */
#define EXTI_RTSR_TR6_Pos                 (6UL)                     /*!< TR6 (Bit 6)                                           */
#define EXTI_RTSR_TR6_Msk                 (0x40UL)                  /*!< TR6 (Bitfield-Mask: 0x01)                             */
#define EXTI_RTSR_TR7_Pos                 (7UL)                     /*!< TR7 (Bit 7)                                           */
#define EXTI_RTSR_TR7_Msk                 (0x80UL)                  /*!< TR7 (Bitfield-Mask: 0x01)                             */
#define EXTI_RTSR_TR8_Pos                 (8UL)                     /*!< TR8 (Bit 8)                                           */
#define EXTI_RTSR_TR8_Msk                 (0x100UL)                 /*!< TR8 (Bitfield-Mask: 0x01)                             */
#define EXTI_RTSR_TR9_Pos                 (9UL)                     /*!< TR9 (Bit 9)                                           */
#define EXTI_RTSR_TR9_Msk                 (0x200UL)                 /*!< TR9 (Bitfield-Mask: 0x01)                             */
#define EXTI_RTSR_TR10_Pos                (10UL)                    /*!< TR10 (Bit 10)                                         */
#define EXTI_RTSR_TR10_Msk                (0x400UL)                 /*!< TR10 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR11_Pos                (11UL)                    /*!< TR11 (Bit 11)                                         */
#define EXTI_RTSR_TR11_Msk                (0x800UL)                 /*!< TR11 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR12_Pos                (12UL)                    /*!< TR12 (Bit 12)                                         */
#define EXTI_RTSR_TR12_Msk                (0x1000UL)                /*!< TR12 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR13_Pos                (13UL)                    /*!< TR13 (Bit 13)                                         */
#define EXTI_RTSR_TR13_Msk                (0x2000UL)                /*!< TR13 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR14_Pos                (14UL)                    /*!< TR14 (Bit 14)                                         */
#define EXTI_RTSR_TR14_Msk                (0x4000UL)                /*!< TR14 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR15_Pos                (15UL)                    /*!< TR15 (Bit 15)                                         */
#define EXTI_RTSR_TR15_Msk                (0x8000UL)                /*!< TR15 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR16_Pos                (16UL)                    /*!< TR16 (Bit 16)                                         */
#define EXTI_RTSR_TR16_Msk                (0x10000UL)               /*!< TR16 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR17_Pos                (17UL)                    /*!< TR17 (Bit 17)                                         */
#define EXTI_RTSR_TR17_Msk                (0x20000UL)               /*!< TR17 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR18_Pos                (18UL)                    /*!< TR18 (Bit 18)                                         */
#define EXTI_RTSR_TR18_Msk                (0x40000UL)               /*!< TR18 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR19_Pos                (19UL)                    /*!< TR19 (Bit 19)                                         */
#define EXTI_RTSR_TR19_Msk                (0x80000UL)               /*!< TR19 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR20_Pos                (20UL)                    /*!< TR20 (Bit 20)                                         */
#define EXTI_RTSR_TR20_Msk                (0x100000UL)              /*!< TR20 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR21_Pos                (21UL)                    /*!< TR21 (Bit 21)                                         */
#define EXTI_RTSR_TR21_Msk                (0x200000UL)              /*!< TR21 (Bitfield-Mask: 0x01)                            */
#define EXTI_RTSR_TR22_Pos                (22UL)                    /*!< TR22 (Bit 22)                                         */
#define EXTI_RTSR_TR22_Msk                (0x400000UL)              /*!< TR22 (Bitfield-Mask: 0x01)                            */
/* =========================================================  FTSR  ========================================================== */
#define EXTI_FTSR_TR0_Pos                 (0UL)                     /*!< TR0 (Bit 0)                                           */
#define EXTI_FTSR_TR0_Msk                 (0x1UL)                   /*!< TR0 (Bitfield-Mask: 0x01)                             */
#define EXTI_FTSR_TR1_Pos                 (1UL)                     /*!< TR1 (Bit 1)                                           */
#define EXTI_FTSR_TR1_Msk                 (0x2UL)                   /*!< TR1 (Bitfield-Mask: 0x01)                             */
#define EXTI_FTSR_TR2_Pos                 (2UL)                     /*!< TR2 (Bit 2)                                           */
#define EXTI_FTSR_TR2_Msk                 (0x4UL)                   /*!< TR2 (Bitfield-Mask: 0x01)                             */
#define EXTI_FTSR_TR3_Pos                 (3UL)                     /*!< TR3 (Bit 3)                                           */
#define EXTI_FTSR_TR3_Msk                 (0x8UL)                   /*!< TR3 (Bitfield-Mask: 0x01)                             */
#define EXTI_FTSR_TR4_Pos                 (4UL)                     /*!< TR4 (Bit 4)                                           */
#define EXTI_FTSR_TR4_Msk                 (0x10UL)                  /*!< TR4 (Bitfield-Mask: 0x01)                             */
#define EXTI_FTSR_TR5_Pos                 (5UL)                     /*!< TR5 (Bit 5)                                           */
#define EXTI_FTSR_TR5_Msk                 (0x20UL)                  /*!< TR5 (Bitfield-Mask: 0x01)                             */
#define EXTI_FTSR_TR6_Pos                 (6UL)                     /*!< TR6 (Bit 6)                                           */
#define EXTI_FTSR_TR6_Msk                 (0x40UL)                  /*!< TR6 (Bitfield-Mask: 0x01)                             */
#define EXTI_FTSR_TR7_Pos                 (7UL)                     /*!< TR7 (Bit 7)                                           */
#define EXTI_FTSR_TR7_Msk                 (0x80UL)                  /*!< TR7 (Bitfield-Mask: 0x01)                             */
#define EXTI_FTSR_TR8_Pos                 (8UL)                     /*!< TR8 (Bit 8)                                           */
#define EXTI_FTSR_TR8_Msk                 (0x100UL)                 /*!< TR8 (Bitfield-Mask: 0x01)                             */
#define EXTI_FTSR_TR9_Pos                 (9UL)                     /*!< TR9 (Bit 9)                                           */
#define EXTI_FTSR_TR9_Msk                 (0x200UL)                 /*!< TR9 (Bitfield-Mask: 0x01)                             */
#define EXTI_FTSR_TR10_Pos                (10UL)                    /*!< TR10 (Bit 10)                                         */
#define EXTI_FTSR_TR10_Msk                (0x400UL)                 /*!< TR10 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR11_Pos                (11UL)                    /*!< TR11 (Bit 11)                                         */
#define EXTI_FTSR_TR11_Msk                (0x800UL)                 /*!< TR11 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR12_Pos                (12UL)                    /*!< TR12 (Bit 12)                                         */
#define EXTI_FTSR_TR12_Msk                (0x1000UL)                /*!< TR12 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR13_Pos                (13UL)                    /*!< TR13 (Bit 13)                                         */
#define EXTI_FTSR_TR13_Msk                (0x2000UL)                /*!< TR13 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR14_Pos                (14UL)                    /*!< TR14 (Bit 14)                                         */
#define EXTI_FTSR_TR14_Msk                (0x4000UL)                /*!< TR14 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR15_Pos                (15UL)                    /*!< TR15 (Bit 15)                                         */
#define EXTI_FTSR_TR15_Msk                (0x8000UL)                /*!< TR15 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR16_Pos                (16UL)                    /*!< TR16 (Bit 16)                                         */
#define EXTI_FTSR_TR16_Msk                (0x10000UL)               /*!< TR16 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR17_Pos                (17UL)                    /*!< TR17 (Bit 17)                                         */
#define EXTI_FTSR_TR17_Msk                (0x20000UL)               /*!< TR17 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR18_Pos                (18UL)                    /*!< TR18 (Bit 18)                                         */
#define EXTI_FTSR_TR18_Msk                (0x40000UL)               /*!< TR18 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR19_Pos                (19UL)                    /*!< TR19 (Bit 19)                                         */
#define EXTI_FTSR_TR19_Msk                (0x80000UL)               /*!< TR19 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR20_Pos                (20UL)                    /*!< TR20 (Bit 20)                                         */
#define EXTI_FTSR_TR20_Msk                (0x100000UL)              /*!< TR20 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR21_Pos                (21UL)                    /*!< TR21 (Bit 21)                                         */
#define EXTI_FTSR_TR21_Msk                (0x200000UL)              /*!< TR21 (Bitfield-Mask: 0x01)                            */
#define EXTI_FTSR_TR22_Pos                (22UL)                    /*!< TR22 (Bit 22)                                         */
#define EXTI_FTSR_TR22_Msk                (0x400000UL)              /*!< TR22 (Bitfield-Mask: 0x01)                            */
/* =========================================================  SWIER  ========================================================= */
#define EXTI_SWIER_SWIER0_Pos             (0UL)                     /*!< SWIER0 (Bit 0)                                        */
#define EXTI_SWIER_SWIER0_Msk             (0x1UL)                   /*!< SWIER0 (Bitfield-Mask: 0x01)                          */
#define EXTI_SWIER_SWIER1_Pos             (1UL)                     /*!< SWIER1 (Bit 1)                                        */
#define EXTI_SWIER_SWIER1_Msk             (0x2UL)                   /*!< SWIER1 (Bitfield-Mask: 0x01)                          */
#define EXTI_SWIER_SWIER2_Pos             (2UL)                     /*!< SWIER2 (Bit 2)                                        */
#define EXTI_SWIER_SWIER2_Msk             (0x4UL)                   /*!< SWIER2 (Bitfield-Mask: 0x01)                          */
#define EXTI_SWIER_SWIER3_Pos             (3UL)                     /*!< SWIER3 (Bit 3)                                        */
#define EXTI_SWIER_SWIER3_Msk             (0x8UL)                   /*!< SWIER3 (Bitfield-Mask: 0x01)                          */
#define EXTI_SWIER_SWIER4_Pos             (4UL)                     /*!< SWIER4 (Bit 4)                                        */
#define EXTI_SWIER_SWIER4_Msk             (0x10UL)                  /*!< SWIER4 (Bitfield-Mask: 0x01)                          */
#define EXTI_SWIER_SWIER5_Pos             (5UL)                     /*!< SWIER5 (Bit 5)                                        */
#define EXTI_SWIER_SWIER5_Msk             (0x20UL)                  /*!< SWIER5 (Bitfield-Mask: 0x01)                          */
#define EXTI_SWIER_SWIER6_Pos             (6UL)                     /*!< SWIER6 (Bit 6)                                        */
#define EXTI_SWIER_SWIER6_Msk             (0x40UL)                  /*!< SWIER6 (Bitfield-Mask: 0x01)                          */
#define EXTI_SWIER_SWIER7_Pos             (7UL)                     /*!< SWIER7 (Bit 7)                                        */
#define EXTI_SWIER_SWIER7_Msk             (0x80UL)                  /*!< SWIER7 (Bitfield-Mask: 0x01)                          */
#define EXTI_SWIER_SWIER8_Pos             (8UL)                     /*!< SWIER8 (Bit 8)                                        */
#define EXTI_SWIER_SWIER8_Msk             (0x100UL)                 /*!< SWIER8 (Bitfield-Mask: 0x01)                          */
#define EXTI_SWIER_SWIER9_Pos             (9UL)                     /*!< SWIER9 (Bit 9)                                        */
#define EXTI_SWIER_SWIER9_Msk             (0x200UL)                 /*!< SWIER9 (Bitfield-Mask: 0x01)                          */
#define EXTI_SWIER_SWIER10_Pos            (10UL)                    /*!< SWIER10 (Bit 10)                                      */
#define EXTI_SWIER_SWIER10_Msk            (0x400UL)                 /*!< SWIER10 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER11_Pos            (11UL)                    /*!< SWIER11 (Bit 11)                                      */
#define EXTI_SWIER_SWIER11_Msk            (0x800UL)                 /*!< SWIER11 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER12_Pos            (12UL)                    /*!< SWIER12 (Bit 12)                                      */
#define EXTI_SWIER_SWIER12_Msk            (0x1000UL)                /*!< SWIER12 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER13_Pos            (13UL)                    /*!< SWIER13 (Bit 13)                                      */
#define EXTI_SWIER_SWIER13_Msk            (0x2000UL)                /*!< SWIER13 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER14_Pos            (14UL)                    /*!< SWIER14 (Bit 14)                                      */
#define EXTI_SWIER_SWIER14_Msk            (0x4000UL)                /*!< SWIER14 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER15_Pos            (15UL)                    /*!< SWIER15 (Bit 15)                                      */
#define EXTI_SWIER_SWIER15_Msk            (0x8000UL)                /*!< SWIER15 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER16_Pos            (16UL)                    /*!< SWIER16 (Bit 16)                                      */
#define EXTI_SWIER_SWIER16_Msk            (0x10000UL)               /*!< SWIER16 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER17_Pos            (17UL)                    /*!< SWIER17 (Bit 17)                                      */
#define EXTI_SWIER_SWIER17_Msk            (0x20000UL)               /*!< SWIER17 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER18_Pos            (18UL)                    /*!< SWIER18 (Bit 18)                                      */
#define EXTI_SWIER_SWIER18_Msk            (0x40000UL)               /*!< SWIER18 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER19_Pos            (19UL)                    /*!< SWIER19 (Bit 19)                                      */
#define EXTI_SWIER_SWIER19_Msk            (0x80000UL)               /*!< SWIER19 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER20_Pos            (20UL)                    /*!< SWIER20 (Bit 20)                                      */
#define EXTI_SWIER_SWIER20_Msk            (0x100000UL)              /*!< SWIER20 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER21_Pos            (21UL)                    /*!< SWIER21 (Bit 21)                                      */
#define EXTI_SWIER_SWIER21_Msk            (0x200000UL)              /*!< SWIER21 (Bitfield-Mask: 0x01)                         */
#define EXTI_SWIER_SWIER22_Pos            (22UL)                    /*!< SWIER22 (Bit 22)                                      */
#define EXTI_SWIER_SWIER22_Msk            (0x400000UL)              /*!< SWIER22 (Bitfield-Mask: 0x01)                         */
/* ==========================================================  PR  =========================================================== */
#define EXTI_PR_PR0_Pos                   (0UL)                     /*!< PR0 (Bit 0)                                           */
#define EXTI_PR_PR0_Msk                   (0x1UL)                   /*!< PR0 (Bitfield-Mask: 0x01)                             */
#define EXTI_PR_PR1_Pos                   (1UL)                     /*!< PR1 (Bit 1)                                           */
#define EXTI_PR_PR1_Msk                   (0x2UL)                   /*!< PR1 (Bitfield-Mask: 0x01)                             */
#define EXTI_PR_PR2_Pos                   (2UL)                     /*!< PR2 (Bit 2)                                           */
#define EXTI_PR_PR2_Msk                   (0x4UL)                   /*!< PR2 (Bitfield-Mask: 0x01)                             */
#define EXTI_PR_PR3_Pos                   (3UL)                     /*!< PR3 (Bit 3)                                           */
#define EXTI_PR_PR3_Msk                   (0x8UL)                   /*!< PR3 (Bitfield-Mask: 0x01)                             */
#define EXTI_PR_PR4_Pos                   (4UL)                     /*!< PR4 (Bit 4)                                           */
#define EXTI_PR_PR4_Msk                   (0x10UL)                  /*!< PR4 (Bitfield-Mask: 0x01)                             */
#define EXTI_PR_PR5_Pos                   (5UL)                     /*!< PR5 (Bit 5)                                           */
#define EXTI_PR_PR5_Msk                   (0x20UL)                  /*!< PR5 (Bitfield-Mask: 0x01)                             */
#define EXTI_PR_PR6_Pos                   (6UL)                     /*!< PR6 (Bit 6)                                           */
#define EXTI_PR_PR6_Msk                   (0x40UL)                  /*!< PR6 (Bitfield-Mask: 0x01)                             */
#define EXTI_PR_PR7_Pos                   (7UL)                     /*!< PR7 (Bit 7)                                           */
#define EXTI_PR_PR7_Msk                   (0x80UL)                  /*!< PR7 (Bitfield-Mask: 0x01)                             */
#define EXTI_PR_PR8_Pos                   (8UL)                     /*!< PR8 (Bit 8)                                           */
#define EXTI_PR_PR8_Msk                   (0x100UL)                 /*!< PR8 (Bitfield-Mask: 0x01)                             */
#define EXTI_PR_PR9_Pos                   (9UL)                     /*!< PR9 (Bit 9)                                           */
#define EXTI_PR_PR9_Msk                   (0x200UL)                 /*!< PR9 (Bitfield-Mask: 0x01)                             */
#define EXTI_PR_PR10_Pos                  (10UL)                    /*!< PR10 (Bit 10)                                         */
#define EXTI_PR_PR10_Msk                  (0x400UL)                 /*!< PR10 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR11_Pos                  (11UL)                    /*!< PR11 (Bit 11)                                         */
#define EXTI_PR_PR11_Msk                  (0x800UL)                 /*!< PR11 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR12_Pos                  (12UL)                    /*!< PR12 (Bit 12)                                         */
#define EXTI_PR_PR12_Msk                  (0x1000UL)                /*!< PR12 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR13_Pos                  (13UL)                    /*!< PR13 (Bit 13)                                         */
#define EXTI_PR_PR13_Msk                  (0x2000UL)                /*!< PR13 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR14_Pos                  (14UL)                    /*!< PR14 (Bit 14)                                         */
#define EXTI_PR_PR14_Msk                  (0x4000UL)                /*!< PR14 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR15_Pos                  (15UL)                    /*!< PR15 (Bit 15)                                         */
#define EXTI_PR_PR15_Msk                  (0x8000UL)                /*!< PR15 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR16_Pos                  (16UL)                    /*!< PR16 (Bit 16)                                         */
#define EXTI_PR_PR16_Msk                  (0x10000UL)               /*!< PR16 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR17_Pos                  (17UL)                    /*!< PR17 (Bit 17)                                         */
#define EXTI_PR_PR17_Msk                  (0x20000UL)               /*!< PR17 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR18_Pos                  (18UL)                    /*!< PR18 (Bit 18)                                         */
#define EXTI_PR_PR18_Msk                  (0x40000UL)               /*!< PR18 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR19_Pos                  (19UL)                    /*!< PR19 (Bit 19)                                         */
#define EXTI_PR_PR19_Msk                  (0x80000UL)               /*!< PR19 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR20_Pos                  (20UL)                    /*!< PR20 (Bit 20)                                         */
#define EXTI_PR_PR20_Msk                  (0x100000UL)              /*!< PR20 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR21_Pos                  (21UL)                    /*!< PR21 (Bit 21)                                         */
#define EXTI_PR_PR21_Msk                  (0x200000UL)              /*!< PR21 (Bitfield-Mask: 0x01)                            */
#define EXTI_PR_PR22_Pos                  (22UL)                    /*!< PR22 (Bit 22)                                         */
#define EXTI_PR_PR22_Msk                  (0x400000UL)              /*!< PR22 (Bitfield-Mask: 0x01)                            */
