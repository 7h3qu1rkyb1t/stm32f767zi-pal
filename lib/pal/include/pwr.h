#include "core.h"


#define PWR_BASE                    0x40007000UL

#define PWR                         ((PWR_Type*)               PWR_BASE)


/* =========================================================================================================================== */
/* ================                                            PWR                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Power control (PWR)
  */

typedef struct {                                /*!< (@ 0x40007000) PWR Structure                                              */
  
  union {
    __IOM uint32_t CR1;                         /*!< (@ 0x00000000) power control register                                     */
    
    struct {
      __IOM uint32_t LPDS       : 1;            /*!< [0..0] Low-power deep sleep                                               */
      __IOM uint32_t PDDS       : 1;            /*!< [1..1] Power down deepsleep                                               */
            uint32_t            : 1;
      __IOM uint32_t CSBF       : 1;            /*!< [3..3] Clear standby flag                                                 */
      __IOM uint32_t PVDE       : 1;            /*!< [4..4] Power voltage detector enable                                      */
      __IOM uint32_t PLS        : 3;            /*!< [7..5] PVD level selection                                                */
      __IOM uint32_t DBP        : 1;            /*!< [8..8] Disable backup domain write protection                             */
      __IOM uint32_t FPDS       : 1;            /*!< [9..9] Flash power down in Stop mode                                      */
      __IOM uint32_t LPUDS      : 1;            /*!< [10..10] Low-power regulator in deepsleep under-drive mode                */
      __IOM uint32_t MRUDS      : 1;            /*!< [11..11] Main regulator in deepsleep under-drive mode                     */
            uint32_t            : 1;
      __IOM uint32_t ADCDC1     : 1;            /*!< [13..13] ADCDC1                                                           */
      __IOM uint32_t VOS        : 2;            /*!< [15..14] Regulator voltage scaling output selection                       */
      __IOM uint32_t ODEN       : 1;            /*!< [16..16] Over-drive enable                                                */
      __IOM uint32_t ODSWEN     : 1;            /*!< [17..17] Over-drive switching enabled                                     */
      __IOM uint32_t UDEN       : 2;            /*!< [19..18] Under-drive enable in stop mode                                  */
            uint32_t            : 12;
    } CR1_b;
  } ;
  
  union {
    __IOM uint32_t CSR1;                        /*!< (@ 0x00000004) power control/status register                              */
    
    struct {
      __IM  uint32_t WUIF       : 1;            /*!< [0..0] Wakeup internal flag                                               */
      __IM  uint32_t SBF        : 1;            /*!< [1..1] Standby flag                                                       */
      __IM  uint32_t PVDO       : 1;            /*!< [2..2] PVD output                                                         */
      __IM  uint32_t BRR        : 1;            /*!< [3..3] Backup regulator ready                                             */
            uint32_t            : 5;
      __IOM uint32_t BRE        : 1;            /*!< [9..9] Backup regulator enable                                            */
            uint32_t            : 4;
      __IM  uint32_t VOSRDY     : 1;            /*!< [14..14] Regulator voltage scaling output selection ready bit             */
            uint32_t            : 1;
      __IM  uint32_t ODRDY      : 1;            /*!< [16..16] Over-drive mode ready                                            */
      __IM  uint32_t ODSWRDY    : 1;            /*!< [17..17] Over-drive mode switching ready                                  */
      __IOM uint32_t UDRDY      : 2;            /*!< [19..18] Under-drive ready flag                                           */
            uint32_t            : 12;
    } CSR1_b;
  } ;
  
  union {
    __IOM uint32_t CR2;                         /*!< (@ 0x00000008) power control register                                     */
    
    struct {
      __IM  uint32_t CWUPF1     : 1;            /*!< [0..0] Clear Wakeup Pin flag for PA0                                      */
      __IM  uint32_t CWUPF2     : 1;            /*!< [1..1] Clear Wakeup Pin flag for PA2                                      */
      __IM  uint32_t CWUPF3     : 1;            /*!< [2..2] Clear Wakeup Pin flag for PC1                                      */
      __IM  uint32_t CWUPF4     : 1;            /*!< [3..3] Clear Wakeup Pin flag for PC13                                     */
      __IM  uint32_t CWUPF5     : 1;            /*!< [4..4] Clear Wakeup Pin flag for PI8                                      */
      __IM  uint32_t CWUPF6     : 1;            /*!< [5..5] Clear Wakeup Pin flag for PI11                                     */
            uint32_t            : 2;
      __IOM uint32_t WUPP1      : 1;            /*!< [8..8] Wakeup pin polarity bit for PA0                                    */
      __IOM uint32_t WUPP2      : 1;            /*!< [9..9] Wakeup pin polarity bit for PA2                                    */
      __IOM uint32_t WUPP3      : 1;            /*!< [10..10] Wakeup pin polarity bit for PC1                                  */
      __IOM uint32_t WUPP4      : 1;            /*!< [11..11] Wakeup pin polarity bit for PC13                                 */
      __IOM uint32_t WUPP5      : 1;            /*!< [12..12] Wakeup pin polarity bit for PI8                                  */
      __IOM uint32_t WUPP6      : 1;            /*!< [13..13] Wakeup pin polarity bit for PI11                                 */
            uint32_t            : 18;
    } CR2_b;
  } ;
  
  union {
    __IOM uint32_t CSR2;                        /*!< (@ 0x0000000C) power control/status register                              */
    
    struct {
      __IM  uint32_t WUPF1      : 1;            /*!< [0..0] Wakeup Pin flag for PA0                                            */
      __IM  uint32_t WUPF2      : 1;            /*!< [1..1] Wakeup Pin flag for PA2                                            */
      __IM  uint32_t WUPF3      : 1;            /*!< [2..2] Wakeup Pin flag for PC1                                            */
      __IM  uint32_t WUPF4      : 1;            /*!< [3..3] Wakeup Pin flag for PC13                                           */
      __IM  uint32_t WUPF5      : 1;            /*!< [4..4] Wakeup Pin flag for PI8                                            */
      __IM  uint32_t WUPF6      : 1;            /*!< [5..5] Wakeup Pin flag for PI11                                           */
            uint32_t            : 2;
      __IOM uint32_t EWUP1      : 1;            /*!< [8..8] Enable Wakeup pin for PA0                                          */
      __IOM uint32_t EWUP2      : 1;            /*!< [9..9] Enable Wakeup pin for PA2                                          */
      __IOM uint32_t EWUP3      : 1;            /*!< [10..10] Enable Wakeup pin for PC1                                        */
      __IOM uint32_t EWUP4      : 1;            /*!< [11..11] Enable Wakeup pin for PC13                                       */
      __IOM uint32_t EWUP5      : 1;            /*!< [12..12] Enable Wakeup pin for PI8                                        */
      __IOM uint32_t EWUP6      : 1;            /*!< [13..13] Enable Wakeup pin for PI11                                       */
            uint32_t            : 18;
    } CSR2_b;
  } ;
} PWR_Type;                                     /*!< Size = 16 (0x10)                                                          */



/* =========================================================================================================================== */
/* ================                                            PWR                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR1  ========================================================== */
#define PWR_CR1_LPDS_Pos                  (0UL)                     /*!< LPDS (Bit 0)                                          */
#define PWR_CR1_LPDS_Msk                  (0x1UL)                   /*!< LPDS (Bitfield-Mask: 0x01)                            */
#define PWR_CR1_PDDS_Pos                  (1UL)                     /*!< PDDS (Bit 1)                                          */
#define PWR_CR1_PDDS_Msk                  (0x2UL)                   /*!< PDDS (Bitfield-Mask: 0x01)                            */
#define PWR_CR1_CSBF_Pos                  (3UL)                     /*!< CSBF (Bit 3)                                          */
#define PWR_CR1_CSBF_Msk                  (0x8UL)                   /*!< CSBF (Bitfield-Mask: 0x01)                            */
#define PWR_CR1_PVDE_Pos                  (4UL)                     /*!< PVDE (Bit 4)                                          */
#define PWR_CR1_PVDE_Msk                  (0x10UL)                  /*!< PVDE (Bitfield-Mask: 0x01)                            */
#define PWR_CR1_PLS_Pos                   (5UL)                     /*!< PLS (Bit 5)                                           */
#define PWR_CR1_PLS_Msk                   (0xe0UL)                  /*!< PLS (Bitfield-Mask: 0x07)                             */
#define PWR_CR1_DBP_Pos                   (8UL)                     /*!< DBP (Bit 8)                                           */
#define PWR_CR1_DBP_Msk                   (0x100UL)                 /*!< DBP (Bitfield-Mask: 0x01)                             */
#define PWR_CR1_FPDS_Pos                  (9UL)                     /*!< FPDS (Bit 9)                                          */
#define PWR_CR1_FPDS_Msk                  (0x200UL)                 /*!< FPDS (Bitfield-Mask: 0x01)                            */
#define PWR_CR1_LPUDS_Pos                 (10UL)                    /*!< LPUDS (Bit 10)                                        */
#define PWR_CR1_LPUDS_Msk                 (0x400UL)                 /*!< LPUDS (Bitfield-Mask: 0x01)                           */
#define PWR_CR1_MRUDS_Pos                 (11UL)                    /*!< MRUDS (Bit 11)                                        */
#define PWR_CR1_MRUDS_Msk                 (0x800UL)                 /*!< MRUDS (Bitfield-Mask: 0x01)                           */
#define PWR_CR1_ADCDC1_Pos                (13UL)                    /*!< ADCDC1 (Bit 13)                                       */
#define PWR_CR1_ADCDC1_Msk                (0x2000UL)                /*!< ADCDC1 (Bitfield-Mask: 0x01)                          */
#define PWR_CR1_VOS_Pos                   (14UL)                    /*!< VOS (Bit 14)                                          */
#define PWR_CR1_VOS_Msk                   (0xc000UL)                /*!< VOS (Bitfield-Mask: 0x03)                             */
#define PWR_CR1_ODEN_Pos                  (16UL)                    /*!< ODEN (Bit 16)                                         */
#define PWR_CR1_ODEN_Msk                  (0x10000UL)               /*!< ODEN (Bitfield-Mask: 0x01)                            */
#define PWR_CR1_ODSWEN_Pos                (17UL)                    /*!< ODSWEN (Bit 17)                                       */
#define PWR_CR1_ODSWEN_Msk                (0x20000UL)               /*!< ODSWEN (Bitfield-Mask: 0x01)                          */
#define PWR_CR1_UDEN_Pos                  (18UL)                    /*!< UDEN (Bit 18)                                         */
#define PWR_CR1_UDEN_Msk                  (0xc0000UL)               /*!< UDEN (Bitfield-Mask: 0x03)                            */
/* =========================================================  CSR1  ========================================================== */
#define PWR_CSR1_WUIF_Pos                 (0UL)                     /*!< WUIF (Bit 0)                                          */
#define PWR_CSR1_WUIF_Msk                 (0x1UL)                   /*!< WUIF (Bitfield-Mask: 0x01)                            */
#define PWR_CSR1_SBF_Pos                  (1UL)                     /*!< SBF (Bit 1)                                           */
#define PWR_CSR1_SBF_Msk                  (0x2UL)                   /*!< SBF (Bitfield-Mask: 0x01)                             */
#define PWR_CSR1_PVDO_Pos                 (2UL)                     /*!< PVDO (Bit 2)                                          */
#define PWR_CSR1_PVDO_Msk                 (0x4UL)                   /*!< PVDO (Bitfield-Mask: 0x01)                            */
#define PWR_CSR1_BRR_Pos                  (3UL)                     /*!< BRR (Bit 3)                                           */
#define PWR_CSR1_BRR_Msk                  (0x8UL)                   /*!< BRR (Bitfield-Mask: 0x01)                             */
#define PWR_CSR1_BRE_Pos                  (9UL)                     /*!< BRE (Bit 9)                                           */
#define PWR_CSR1_BRE_Msk                  (0x200UL)                 /*!< BRE (Bitfield-Mask: 0x01)                             */
#define PWR_CSR1_VOSRDY_Pos               (14UL)                    /*!< VOSRDY (Bit 14)                                       */
#define PWR_CSR1_VOSRDY_Msk               (0x4000UL)                /*!< VOSRDY (Bitfield-Mask: 0x01)                          */
#define PWR_CSR1_ODRDY_Pos                (16UL)                    /*!< ODRDY (Bit 16)                                        */
#define PWR_CSR1_ODRDY_Msk                (0x10000UL)               /*!< ODRDY (Bitfield-Mask: 0x01)                           */
#define PWR_CSR1_ODSWRDY_Pos              (17UL)                    /*!< ODSWRDY (Bit 17)                                      */
#define PWR_CSR1_ODSWRDY_Msk              (0x20000UL)               /*!< ODSWRDY (Bitfield-Mask: 0x01)                         */
#define PWR_CSR1_UDRDY_Pos                (18UL)                    /*!< UDRDY (Bit 18)                                        */
#define PWR_CSR1_UDRDY_Msk                (0xc0000UL)               /*!< UDRDY (Bitfield-Mask: 0x03)                           */
/* ==========================================================  CR2  ========================================================== */
#define PWR_CR2_CWUPF1_Pos                (0UL)                     /*!< CWUPF1 (Bit 0)                                        */
#define PWR_CR2_CWUPF1_Msk                (0x1UL)                   /*!< CWUPF1 (Bitfield-Mask: 0x01)                          */
#define PWR_CR2_CWUPF2_Pos                (1UL)                     /*!< CWUPF2 (Bit 1)                                        */
#define PWR_CR2_CWUPF2_Msk                (0x2UL)                   /*!< CWUPF2 (Bitfield-Mask: 0x01)                          */
#define PWR_CR2_CWUPF3_Pos                (2UL)                     /*!< CWUPF3 (Bit 2)                                        */
#define PWR_CR2_CWUPF3_Msk                (0x4UL)                   /*!< CWUPF3 (Bitfield-Mask: 0x01)                          */
#define PWR_CR2_CWUPF4_Pos                (3UL)                     /*!< CWUPF4 (Bit 3)                                        */
#define PWR_CR2_CWUPF4_Msk                (0x8UL)                   /*!< CWUPF4 (Bitfield-Mask: 0x01)                          */
#define PWR_CR2_CWUPF5_Pos                (4UL)                     /*!< CWUPF5 (Bit 4)                                        */
#define PWR_CR2_CWUPF5_Msk                (0x10UL)                  /*!< CWUPF5 (Bitfield-Mask: 0x01)                          */
#define PWR_CR2_CWUPF6_Pos                (5UL)                     /*!< CWUPF6 (Bit 5)                                        */
#define PWR_CR2_CWUPF6_Msk                (0x20UL)                  /*!< CWUPF6 (Bitfield-Mask: 0x01)                          */
#define PWR_CR2_WUPP1_Pos                 (8UL)                     /*!< WUPP1 (Bit 8)                                         */
#define PWR_CR2_WUPP1_Msk                 (0x100UL)                 /*!< WUPP1 (Bitfield-Mask: 0x01)                           */
#define PWR_CR2_WUPP2_Pos                 (9UL)                     /*!< WUPP2 (Bit 9)                                         */
#define PWR_CR2_WUPP2_Msk                 (0x200UL)                 /*!< WUPP2 (Bitfield-Mask: 0x01)                           */
#define PWR_CR2_WUPP3_Pos                 (10UL)                    /*!< WUPP3 (Bit 10)                                        */
#define PWR_CR2_WUPP3_Msk                 (0x400UL)                 /*!< WUPP3 (Bitfield-Mask: 0x01)                           */
#define PWR_CR2_WUPP4_Pos                 (11UL)                    /*!< WUPP4 (Bit 11)                                        */
#define PWR_CR2_WUPP4_Msk                 (0x800UL)                 /*!< WUPP4 (Bitfield-Mask: 0x01)                           */
#define PWR_CR2_WUPP5_Pos                 (12UL)                    /*!< WUPP5 (Bit 12)                                        */
#define PWR_CR2_WUPP5_Msk                 (0x1000UL)                /*!< WUPP5 (Bitfield-Mask: 0x01)                           */
#define PWR_CR2_WUPP6_Pos                 (13UL)                    /*!< WUPP6 (Bit 13)                                        */
#define PWR_CR2_WUPP6_Msk                 (0x2000UL)                /*!< WUPP6 (Bitfield-Mask: 0x01)                           */
/* =========================================================  CSR2  ========================================================== */
#define PWR_CSR2_WUPF1_Pos                (0UL)                     /*!< WUPF1 (Bit 0)                                         */
#define PWR_CSR2_WUPF1_Msk                (0x1UL)                   /*!< WUPF1 (Bitfield-Mask: 0x01)                           */
#define PWR_CSR2_WUPF2_Pos                (1UL)                     /*!< WUPF2 (Bit 1)                                         */
#define PWR_CSR2_WUPF2_Msk                (0x2UL)                   /*!< WUPF2 (Bitfield-Mask: 0x01)                           */
#define PWR_CSR2_WUPF3_Pos                (2UL)                     /*!< WUPF3 (Bit 2)                                         */
#define PWR_CSR2_WUPF3_Msk                (0x4UL)                   /*!< WUPF3 (Bitfield-Mask: 0x01)                           */
#define PWR_CSR2_WUPF4_Pos                (3UL)                     /*!< WUPF4 (Bit 3)                                         */
#define PWR_CSR2_WUPF4_Msk                (0x8UL)                   /*!< WUPF4 (Bitfield-Mask: 0x01)                           */
#define PWR_CSR2_WUPF5_Pos                (4UL)                     /*!< WUPF5 (Bit 4)                                         */
#define PWR_CSR2_WUPF5_Msk                (0x10UL)                  /*!< WUPF5 (Bitfield-Mask: 0x01)                           */
#define PWR_CSR2_WUPF6_Pos                (5UL)                     /*!< WUPF6 (Bit 5)                                         */
#define PWR_CSR2_WUPF6_Msk                (0x20UL)                  /*!< WUPF6 (Bitfield-Mask: 0x01)                           */
#define PWR_CSR2_EWUP1_Pos                (8UL)                     /*!< EWUP1 (Bit 8)                                         */
#define PWR_CSR2_EWUP1_Msk                (0x100UL)                 /*!< EWUP1 (Bitfield-Mask: 0x01)                           */
#define PWR_CSR2_EWUP2_Pos                (9UL)                     /*!< EWUP2 (Bit 9)                                         */
#define PWR_CSR2_EWUP2_Msk                (0x200UL)                 /*!< EWUP2 (Bitfield-Mask: 0x01)                           */
#define PWR_CSR2_EWUP3_Pos                (10UL)                    /*!< EWUP3 (Bit 10)                                        */
#define PWR_CSR2_EWUP3_Msk                (0x400UL)                 /*!< EWUP3 (Bitfield-Mask: 0x01)                           */
#define PWR_CSR2_EWUP4_Pos                (11UL)                    /*!< EWUP4 (Bit 11)                                        */
#define PWR_CSR2_EWUP4_Msk                (0x800UL)                 /*!< EWUP4 (Bitfield-Mask: 0x01)                           */
#define PWR_CSR2_EWUP5_Pos                (12UL)                    /*!< EWUP5 (Bit 12)                                        */
#define PWR_CSR2_EWUP5_Msk                (0x1000UL)                /*!< EWUP5 (Bitfield-Mask: 0x01)                           */
#define PWR_CSR2_EWUP6_Pos                (13UL)                    /*!< EWUP6 (Bit 13)                                        */
#define PWR_CSR2_EWUP6_Msk                (0x2000UL)                /*!< EWUP6 (Bitfield-Mask: 0x01)                           */
