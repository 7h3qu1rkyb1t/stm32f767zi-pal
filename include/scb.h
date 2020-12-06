#include "core.h"

#define SCB_ACTRL_BASE              0xE000E008UL
#define SCB_ACTRL                   ((SCB_ACTRL_Type*)         SCB_ACTRL_BASE)

#define SCB_BASE                    0xE000ED00UL
#define SCB                         ((SCB_Type*)               SCB_BASE)


/* =========================================================================================================================== */
/* ================                                            SCB                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief System control block (SCB)
  */

typedef struct {                                /*!< (@ 0xE000ED00) SCB Structure                                              */
  
  union {
    __IM  uint32_t CPUID;                       /*!< (@ 0x00000000) CPUID base register                                        */
    
    struct {
      __IM  uint32_t Revision   : 4;            /*!< [3..0] Revision number                                                    */
      __IM  uint32_t PartNo     : 12;           /*!< [15..4] Part number of the processor                                      */
      __IM  uint32_t Constant   : 4;            /*!< [19..16] Reads as 0xF                                                     */
      __IM  uint32_t Variant    : 4;            /*!< [23..20] Variant number                                                   */
      __IM  uint32_t Implementer : 8;           /*!< [31..24] Implementer code                                                 */
    } CPUID_b;
  } ;
  
  union {
    __IOM uint32_t ICSR;                        /*!< (@ 0x00000004) Interrupt control and state register                       */
    
    struct {
      __IOM uint32_t VECTACTIVE : 9;            /*!< [8..0] Active vector                                                      */
            uint32_t            : 2;
      __IOM uint32_t RETTOBASE  : 1;            /*!< [11..11] Return to base level                                             */
      __IOM uint32_t VECTPENDING : 7;           /*!< [18..12] Pending vector                                                   */
            uint32_t            : 3;
      __IOM uint32_t ISRPENDING : 1;            /*!< [22..22] Interrupt pending flag                                           */
            uint32_t            : 2;
      __IOM uint32_t PENDSTCLR  : 1;            /*!< [25..25] SysTick exception clear-pending bit                              */
      __IOM uint32_t PENDSTSET  : 1;            /*!< [26..26] SysTick exception set-pending bit                                */
      __IOM uint32_t PENDSVCLR  : 1;            /*!< [27..27] PendSV clear-pending bit                                         */
      __IOM uint32_t PENDSVSET  : 1;            /*!< [28..28] PendSV set-pending bit                                           */
            uint32_t            : 2;
      __IOM uint32_t NMIPENDSET : 1;            /*!< [31..31] NMI set-pending bit.                                             */
    } ICSR_b;
  } ;
  
  union {
    __IOM uint32_t VTOR;                        /*!< (@ 0x00000008) Vector table offset register                               */
    
    struct {
            uint32_t            : 9;
      __IOM uint32_t TBLOFF     : 21;           /*!< [29..9] Vector table base offset field                                    */
            uint32_t            : 2;
    } VTOR_b;
  } ;
  
  union {
    __IOM uint32_t AIRCR;                       /*!< (@ 0x0000000C) Application interrupt and reset control register           */
    
    struct {
      __IOM uint32_t VECTRESET  : 1;            /*!< [0..0] VECTRESET                                                          */
      __IOM uint32_t VECTCLRACTIVE : 1;         /*!< [1..1] VECTCLRACTIVE                                                      */
      __IOM uint32_t SYSRESETREQ : 1;           /*!< [2..2] SYSRESETREQ                                                        */
            uint32_t            : 5;
      __IOM uint32_t PRIGROUP   : 3;            /*!< [10..8] PRIGROUP                                                          */
            uint32_t            : 4;
      __IOM uint32_t ENDIANESS  : 1;            /*!< [15..15] ENDIANESS                                                        */
      __IOM uint32_t VECTKEYSTAT : 16;          /*!< [31..16] Register key                                                     */
    } AIRCR_b;
  } ;
  
  union {
    __IOM uint32_t SCR;                         /*!< (@ 0x00000010) System control register                                    */
    
    struct {
            uint32_t            : 1;
      __IOM uint32_t SLEEPONEXIT : 1;           /*!< [1..1] SLEEPONEXIT                                                        */
      __IOM uint32_t SLEEPDEEP  : 1;            /*!< [2..2] SLEEPDEEP                                                          */
            uint32_t            : 1;
      __IOM uint32_t SEVEONPEND : 1;            /*!< [4..4] Send Event on Pending bit                                          */
            uint32_t            : 27;
    } SCR_b;
  } ;
  
  union {
    __IOM uint32_t CCR;                         /*!< (@ 0x00000014) Configuration and control register                         */
    
    struct {
      __IOM uint32_t NONBASETHRDENA : 1;        /*!< [0..0] Configures how the processor enters Thread mode                    */
      __IOM uint32_t USERSETMPEND : 1;          /*!< [1..1] USERSETMPEND                                                       */
            uint32_t            : 1;
      __IOM uint32_t UNALIGN__TRP : 1;          /*!< [3..3] UNALIGN_ TRP                                                       */
      __IOM uint32_t DIV_0_TRP  : 1;            /*!< [4..4] DIV_0_TRP                                                          */
            uint32_t            : 3;
      __IOM uint32_t BFHFNMIGN  : 1;            /*!< [8..8] BFHFNMIGN                                                          */
      __IOM uint32_t STKALIGN   : 1;            /*!< [9..9] STKALIGN                                                           */
            uint32_t            : 6;
      __IOM uint32_t DC         : 1;            /*!< [16..16] DC                                                               */
      __IOM uint32_t IC         : 1;            /*!< [17..17] IC                                                               */
      __IOM uint32_t BP         : 1;            /*!< [18..18] BP                                                               */
            uint32_t            : 13;
    } CCR_b;
  } ;
  
  union {
    __IOM uint32_t SHPR1;                       /*!< (@ 0x00000018) System handler priority registers                          */
    
    struct {
      __IOM uint32_t PRI_4      : 8;            /*!< [7..0] Priority of system handler 4                                       */
      __IOM uint32_t PRI_5      : 8;            /*!< [15..8] Priority of system handler 5                                      */
      __IOM uint32_t PRI_6      : 8;            /*!< [23..16] Priority of system handler 6                                     */
            uint32_t            : 8;
    } SHPR1_b;
  } ;
  
  union {
    __IOM uint32_t SHPR2;                       /*!< (@ 0x0000001C) System handler priority registers                          */
    
    struct {
            uint32_t            : 24;
      __IOM uint32_t PRI_11     : 8;            /*!< [31..24] Priority of system handler 11                                    */
    } SHPR2_b;
  } ;
  
  union {
    __IOM uint32_t SHPR3;                       /*!< (@ 0x00000020) System handler priority registers                          */
    
    struct {
            uint32_t            : 16;
      __IOM uint32_t PRI_14     : 8;            /*!< [23..16] Priority of system handler 14                                    */
      __IOM uint32_t PRI_15     : 8;            /*!< [31..24] Priority of system handler 15                                    */
    } SHPR3_b;
  } ;
  
  union {
    __IOM uint32_t SHCSR;                       /*!< (@ 0x00000024) System handler control and state register                  */
    
    struct {
      __IOM uint32_t MEMFAULTACT : 1;           /*!< [0..0] Memory management fault exception active bit                       */
      __IOM uint32_t BUSFAULTACT : 1;           /*!< [1..1] Bus fault exception active bit                                     */
            uint32_t            : 1;
      __IOM uint32_t USGFAULTACT : 1;           /*!< [3..3] Usage fault exception active bit                                   */
            uint32_t            : 3;
      __IOM uint32_t SVCALLACT  : 1;            /*!< [7..7] SVC call active bit                                                */
      __IOM uint32_t MONITORACT : 1;            /*!< [8..8] Debug monitor active bit                                           */
            uint32_t            : 1;
      __IOM uint32_t PENDSVACT  : 1;            /*!< [10..10] PendSV exception active bit                                      */
      __IOM uint32_t SYSTICKACT : 1;            /*!< [11..11] SysTick exception active bit                                     */
      __IOM uint32_t USGFAULTPENDED : 1;        /*!< [12..12] Usage fault exception pending bit                                */
      __IOM uint32_t MEMFAULTPENDED : 1;        /*!< [13..13] Memory management fault exception pending bit                    */
      __IOM uint32_t BUSFAULTPENDED : 1;        /*!< [14..14] Bus fault exception pending bit                                  */
      __IOM uint32_t SVCALLPENDED : 1;          /*!< [15..15] SVC call pending bit                                             */
      __IOM uint32_t MEMFAULTENA : 1;           /*!< [16..16] Memory management fault enable bit                               */
      __IOM uint32_t BUSFAULTENA : 1;           /*!< [17..17] Bus fault enable bit                                             */
      __IOM uint32_t USGFAULTENA : 1;           /*!< [18..18] Usage fault enable bit                                           */
            uint32_t            : 13;
    } SHCSR_b;
  } ;
  
  union {
    __IOM uint32_t CFSR_UFSR_BFSR_MMFSR;        /*!< (@ 0x00000028) Configurable fault status register                         */
    
    struct {
      __IOM uint32_t IACCVIOL   : 1;            /*!< [0..0] IACCVIOL                                                           */
      __IOM uint32_t DACCVIOL   : 1;            /*!< [1..1] DACCVIOL                                                           */
            uint32_t            : 1;
      __IOM uint32_t MUNSTKERR  : 1;            /*!< [3..3] MUNSTKERR                                                          */
      __IOM uint32_t MSTKERR    : 1;            /*!< [4..4] MSTKERR                                                            */
      __IOM uint32_t MLSPERR    : 1;            /*!< [5..5] MLSPERR                                                            */
            uint32_t            : 1;
      __IOM uint32_t MMARVALID  : 1;            /*!< [7..7] MMARVALID                                                          */
      __IOM uint32_t IBUSERR    : 1;            /*!< [8..8] Instruction bus error                                              */
      __IOM uint32_t PRECISERR  : 1;            /*!< [9..9] Precise data bus error                                             */
      __IOM uint32_t IMPRECISERR : 1;           /*!< [10..10] Imprecise data bus error                                         */
      __IOM uint32_t UNSTKERR   : 1;            /*!< [11..11] Bus fault on unstacking for a return from exception              */
      __IOM uint32_t STKERR     : 1;            /*!< [12..12] Bus fault on stacking for exception entry                        */
      __IOM uint32_t LSPERR     : 1;            /*!< [13..13] Bus fault on floating-point lazy state preservation              */
            uint32_t            : 1;
      __IOM uint32_t BFARVALID  : 1;            /*!< [15..15] Bus Fault Address Register (BFAR) valid flag                     */
      __IOM uint32_t UNDEFINSTR : 1;            /*!< [16..16] Undefined instruction usage fault                                */
      __IOM uint32_t INVSTATE   : 1;            /*!< [17..17] Invalid state usage fault                                        */
      __IOM uint32_t INVPC      : 1;            /*!< [18..18] Invalid PC load usage fault                                      */
      __IOM uint32_t NOCP       : 1;            /*!< [19..19] No coprocessor usage fault.                                      */
            uint32_t            : 4;
      __IOM uint32_t UNALIGNED  : 1;            /*!< [24..24] Unaligned access usage fault                                     */
      __IOM uint32_t DIVBYZERO  : 1;            /*!< [25..25] Divide by zero usage fault                                       */
            uint32_t            : 6;
    } CFSR_UFSR_BFSR_MMFSR_b;
  } ;
  
  union {
    __IOM uint32_t HFSR;                        /*!< (@ 0x0000002C) Hard fault status register                                 */
    
    struct {
            uint32_t            : 1;
      __IOM uint32_t VECTTBL    : 1;            /*!< [1..1] Vector table hard fault                                            */
            uint32_t            : 28;
      __IOM uint32_t FORCED     : 1;            /*!< [30..30] Forced hard fault                                                */
      __IOM uint32_t DEBUG_VT   : 1;            /*!< [31..31] Reserved for Debug use                                           */
    } HFSR_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IOM uint32_t MMFAR;                       /*!< (@ 0x00000034) Memory management fault address register                   */
    
    struct {
      __IOM uint32_t ADDRESS    : 32;           /*!< [31..0] Memory management fault address                                   */
    } MMFAR_b;
  } ;
  
  union {
    __IOM uint32_t BFAR;                        /*!< (@ 0x00000038) Bus fault address register                                 */
    
    struct {
      __IOM uint32_t ADDRESS    : 32;           /*!< [31..0] Bus fault address                                                 */
    } BFAR_b;
  } ;
} SCB_Type;                                     /*!< Size = 60 (0x3c)                                                          */



/* =========================================================================================================================== */
/* ================                                         SCB_ACTRL                                         ================ */
/* =========================================================================================================================== */


/**
  * @brief System control block ACTLR (SCB_ACTRL)
  */

typedef struct {                                /*!< (@ 0xE000E008) SCB_ACTRL Structure                                        */
  
  union {
    __IOM uint32_t ACTRL;                       /*!< (@ 0x00000000) Auxiliary control register                                 */
    
    struct {
            uint32_t            : 2;
      __IOM uint32_t DISFOLD    : 1;            /*!< [2..2] DISFOLD                                                            */
            uint32_t            : 7;
      __IOM uint32_t FPEXCODIS  : 1;            /*!< [10..10] FPEXCODIS                                                        */
      __IOM uint32_t DISRAMODE  : 1;            /*!< [11..11] DISRAMODE                                                        */
      __IOM uint32_t DISITMATBFLUSH : 1;        /*!< [12..12] DISITMATBFLUSH                                                   */
            uint32_t            : 19;
    } ACTRL_b;
  } ;
} SCB_ACTRL_Type;                               /*!< Size = 4 (0x4)                                                            */



/* =========================================================================================================================== */
/* ================                                            SCB                                            ================ */
/* =========================================================================================================================== */

/* =========================================================  CPUID  ========================================================= */
#define SCB_CPUID_Revision_Pos            (0UL)                     /*!< Revision (Bit 0)                                      */
#define SCB_CPUID_Revision_Msk            (0xfUL)                   /*!< Revision (Bitfield-Mask: 0x0f)                        */
#define SCB_CPUID_PartNo_Pos              (4UL)                     /*!< PartNo (Bit 4)                                        */
#define SCB_CPUID_PartNo_Msk              (0xfff0UL)                /*!< PartNo (Bitfield-Mask: 0xfff)                         */
#define SCB_CPUID_Constant_Pos            (16UL)                    /*!< Constant (Bit 16)                                     */
#define SCB_CPUID_Constant_Msk            (0xf0000UL)               /*!< Constant (Bitfield-Mask: 0x0f)                        */
#define SCB_CPUID_Variant_Pos             (20UL)                    /*!< Variant (Bit 20)                                      */
#define SCB_CPUID_Variant_Msk             (0xf00000UL)              /*!< Variant (Bitfield-Mask: 0x0f)                         */
#define SCB_CPUID_Implementer_Pos         (24UL)                    /*!< Implementer (Bit 24)                                  */
#define SCB_CPUID_Implementer_Msk         (0xff000000UL)            /*!< Implementer (Bitfield-Mask: 0xff)                     */
/* =========================================================  ICSR  ========================================================== */
#define SCB_ICSR_VECTACTIVE_Pos           (0UL)                     /*!< VECTACTIVE (Bit 0)                                    */
#define SCB_ICSR_VECTACTIVE_Msk           (0x1ffUL)                 /*!< VECTACTIVE (Bitfield-Mask: 0x1ff)                     */
#define SCB_ICSR_RETTOBASE_Pos            (11UL)                    /*!< RETTOBASE (Bit 11)                                    */
#define SCB_ICSR_RETTOBASE_Msk            (0x800UL)                 /*!< RETTOBASE (Bitfield-Mask: 0x01)                       */
#define SCB_ICSR_VECTPENDING_Pos          (12UL)                    /*!< VECTPENDING (Bit 12)                                  */
#define SCB_ICSR_VECTPENDING_Msk          (0x7f000UL)               /*!< VECTPENDING (Bitfield-Mask: 0x7f)                     */
#define SCB_ICSR_ISRPENDING_Pos           (22UL)                    /*!< ISRPENDING (Bit 22)                                   */
#define SCB_ICSR_ISRPENDING_Msk           (0x400000UL)              /*!< ISRPENDING (Bitfield-Mask: 0x01)                      */
#define SCB_ICSR_PENDSTCLR_Pos            (25UL)                    /*!< PENDSTCLR (Bit 25)                                    */
#define SCB_ICSR_PENDSTCLR_Msk            (0x2000000UL)             /*!< PENDSTCLR (Bitfield-Mask: 0x01)                       */
#define SCB_ICSR_PENDSTSET_Pos            (26UL)                    /*!< PENDSTSET (Bit 26)                                    */
#define SCB_ICSR_PENDSTSET_Msk            (0x4000000UL)             /*!< PENDSTSET (Bitfield-Mask: 0x01)                       */
#define SCB_ICSR_PENDSVCLR_Pos            (27UL)                    /*!< PENDSVCLR (Bit 27)                                    */
#define SCB_ICSR_PENDSVCLR_Msk            (0x8000000UL)             /*!< PENDSVCLR (Bitfield-Mask: 0x01)                       */
#define SCB_ICSR_PENDSVSET_Pos            (28UL)                    /*!< PENDSVSET (Bit 28)                                    */
#define SCB_ICSR_PENDSVSET_Msk            (0x10000000UL)            /*!< PENDSVSET (Bitfield-Mask: 0x01)                       */
#define SCB_ICSR_NMIPENDSET_Pos           (31UL)                    /*!< NMIPENDSET (Bit 31)                                   */
#define SCB_ICSR_NMIPENDSET_Msk           (0x80000000UL)            /*!< NMIPENDSET (Bitfield-Mask: 0x01)                      */
/* =========================================================  VTOR  ========================================================== */
#define SCB_VTOR_TBLOFF_Pos               (9UL)                     /*!< TBLOFF (Bit 9)                                        */
#define SCB_VTOR_TBLOFF_Msk               (0x3ffffe00UL)            /*!< TBLOFF (Bitfield-Mask: 0x1fffff)                      */
/* =========================================================  AIRCR  ========================================================= */
#define SCB_AIRCR_VECTRESET_Pos           (0UL)                     /*!< VECTRESET (Bit 0)                                     */
#define SCB_AIRCR_VECTRESET_Msk           (0x1UL)                   /*!< VECTRESET (Bitfield-Mask: 0x01)                       */
#define SCB_AIRCR_VECTCLRACTIVE_Pos       (1UL)                     /*!< VECTCLRACTIVE (Bit 1)                                 */
#define SCB_AIRCR_VECTCLRACTIVE_Msk       (0x2UL)                   /*!< VECTCLRACTIVE (Bitfield-Mask: 0x01)                   */
#define SCB_AIRCR_SYSRESETREQ_Pos         (2UL)                     /*!< SYSRESETREQ (Bit 2)                                   */
#define SCB_AIRCR_SYSRESETREQ_Msk         (0x4UL)                   /*!< SYSRESETREQ (Bitfield-Mask: 0x01)                     */
#define SCB_AIRCR_PRIGROUP_Pos            (8UL)                     /*!< PRIGROUP (Bit 8)                                      */
#define SCB_AIRCR_PRIGROUP_Msk            (0x700UL)                 /*!< PRIGROUP (Bitfield-Mask: 0x07)                        */
#define SCB_AIRCR_ENDIANESS_Pos           (15UL)                    /*!< ENDIANESS (Bit 15)                                    */
#define SCB_AIRCR_ENDIANESS_Msk           (0x8000UL)                /*!< ENDIANESS (Bitfield-Mask: 0x01)                       */
#define SCB_AIRCR_VECTKEYSTAT_Pos         (16UL)                    /*!< VECTKEYSTAT (Bit 16)                                  */
#define SCB_AIRCR_VECTKEYSTAT_Msk         (0xffff0000UL)            /*!< VECTKEYSTAT (Bitfield-Mask: 0xffff)                   */
/* ==========================================================  SCR  ========================================================== */
#define SCB_SCR_SLEEPONEXIT_Pos           (1UL)                     /*!< SLEEPONEXIT (Bit 1)                                   */
#define SCB_SCR_SLEEPONEXIT_Msk           (0x2UL)                   /*!< SLEEPONEXIT (Bitfield-Mask: 0x01)                     */
#define SCB_SCR_SLEEPDEEP_Pos             (2UL)                     /*!< SLEEPDEEP (Bit 2)                                     */
#define SCB_SCR_SLEEPDEEP_Msk             (0x4UL)                   /*!< SLEEPDEEP (Bitfield-Mask: 0x01)                       */
#define SCB_SCR_SEVEONPEND_Pos            (4UL)                     /*!< SEVEONPEND (Bit 4)                                    */
#define SCB_SCR_SEVEONPEND_Msk            (0x10UL)                  /*!< SEVEONPEND (Bitfield-Mask: 0x01)                      */
/* ==========================================================  CCR  ========================================================== */
#define SCB_CCR_NONBASETHRDENA_Pos        (0UL)                     /*!< NONBASETHRDENA (Bit 0)                                */
#define SCB_CCR_NONBASETHRDENA_Msk        (0x1UL)                   /*!< NONBASETHRDENA (Bitfield-Mask: 0x01)                  */
#define SCB_CCR_USERSETMPEND_Pos          (1UL)                     /*!< USERSETMPEND (Bit 1)                                  */
#define SCB_CCR_USERSETMPEND_Msk          (0x2UL)                   /*!< USERSETMPEND (Bitfield-Mask: 0x01)                    */
#define SCB_CCR_UNALIGN__TRP_Pos          (3UL)                     /*!< UNALIGN__TRP (Bit 3)                                  */
#define SCB_CCR_UNALIGN__TRP_Msk          (0x8UL)                   /*!< UNALIGN__TRP (Bitfield-Mask: 0x01)                    */
#define SCB_CCR_DIV_0_TRP_Pos             (4UL)                     /*!< DIV_0_TRP (Bit 4)                                     */
#define SCB_CCR_DIV_0_TRP_Msk             (0x10UL)                  /*!< DIV_0_TRP (Bitfield-Mask: 0x01)                       */
#define SCB_CCR_BFHFNMIGN_Pos             (8UL)                     /*!< BFHFNMIGN (Bit 8)                                     */
#define SCB_CCR_BFHFNMIGN_Msk             (0x100UL)                 /*!< BFHFNMIGN (Bitfield-Mask: 0x01)                       */
#define SCB_CCR_STKALIGN_Pos              (9UL)                     /*!< STKALIGN (Bit 9)                                      */
#define SCB_CCR_STKALIGN_Msk              (0x200UL)                 /*!< STKALIGN (Bitfield-Mask: 0x01)                        */
#define SCB_CCR_DC_Pos                    (16UL)                    /*!< DC (Bit 16)                                           */
#define SCB_CCR_DC_Msk                    (0x10000UL)               /*!< DC (Bitfield-Mask: 0x01)                              */
#define SCB_CCR_IC_Pos                    (17UL)                    /*!< IC (Bit 17)                                           */
#define SCB_CCR_IC_Msk                    (0x20000UL)               /*!< IC (Bitfield-Mask: 0x01)                              */
#define SCB_CCR_BP_Pos                    (18UL)                    /*!< BP (Bit 18)                                           */
#define SCB_CCR_BP_Msk                    (0x40000UL)               /*!< BP (Bitfield-Mask: 0x01)                              */
/* =========================================================  SHPR1  ========================================================= */
#define SCB_SHPR1_PRI_4_Pos               (0UL)                     /*!< PRI_4 (Bit 0)                                         */
#define SCB_SHPR1_PRI_4_Msk               (0xffUL)                  /*!< PRI_4 (Bitfield-Mask: 0xff)                           */
#define SCB_SHPR1_PRI_5_Pos               (8UL)                     /*!< PRI_5 (Bit 8)                                         */
#define SCB_SHPR1_PRI_5_Msk               (0xff00UL)                /*!< PRI_5 (Bitfield-Mask: 0xff)                           */
#define SCB_SHPR1_PRI_6_Pos               (16UL)                    /*!< PRI_6 (Bit 16)                                        */
#define SCB_SHPR1_PRI_6_Msk               (0xff0000UL)              /*!< PRI_6 (Bitfield-Mask: 0xff)                           */
/* =========================================================  SHPR2  ========================================================= */
#define SCB_SHPR2_PRI_11_Pos              (24UL)                    /*!< PRI_11 (Bit 24)                                       */
#define SCB_SHPR2_PRI_11_Msk              (0xff000000UL)            /*!< PRI_11 (Bitfield-Mask: 0xff)                          */
/* =========================================================  SHPR3  ========================================================= */
#define SCB_SHPR3_PRI_14_Pos              (16UL)                    /*!< PRI_14 (Bit 16)                                       */
#define SCB_SHPR3_PRI_14_Msk              (0xff0000UL)              /*!< PRI_14 (Bitfield-Mask: 0xff)                          */
#define SCB_SHPR3_PRI_15_Pos              (24UL)                    /*!< PRI_15 (Bit 24)                                       */
#define SCB_SHPR3_PRI_15_Msk              (0xff000000UL)            /*!< PRI_15 (Bitfield-Mask: 0xff)                          */
/* =========================================================  SHCSR  ========================================================= */
#define SCB_SHCSR_MEMFAULTACT_Pos         (0UL)                     /*!< MEMFAULTACT (Bit 0)                                   */
#define SCB_SHCSR_MEMFAULTACT_Msk         (0x1UL)                   /*!< MEMFAULTACT (Bitfield-Mask: 0x01)                     */
#define SCB_SHCSR_BUSFAULTACT_Pos         (1UL)                     /*!< BUSFAULTACT (Bit 1)                                   */
#define SCB_SHCSR_BUSFAULTACT_Msk         (0x2UL)                   /*!< BUSFAULTACT (Bitfield-Mask: 0x01)                     */
#define SCB_SHCSR_USGFAULTACT_Pos         (3UL)                     /*!< USGFAULTACT (Bit 3)                                   */
#define SCB_SHCSR_USGFAULTACT_Msk         (0x8UL)                   /*!< USGFAULTACT (Bitfield-Mask: 0x01)                     */
#define SCB_SHCSR_SVCALLACT_Pos           (7UL)                     /*!< SVCALLACT (Bit 7)                                     */
#define SCB_SHCSR_SVCALLACT_Msk           (0x80UL)                  /*!< SVCALLACT (Bitfield-Mask: 0x01)                       */
#define SCB_SHCSR_MONITORACT_Pos          (8UL)                     /*!< MONITORACT (Bit 8)                                    */
#define SCB_SHCSR_MONITORACT_Msk          (0x100UL)                 /*!< MONITORACT (Bitfield-Mask: 0x01)                      */
#define SCB_SHCSR_PENDSVACT_Pos           (10UL)                    /*!< PENDSVACT (Bit 10)                                    */
#define SCB_SHCSR_PENDSVACT_Msk           (0x400UL)                 /*!< PENDSVACT (Bitfield-Mask: 0x01)                       */
#define SCB_SHCSR_SYSTICKACT_Pos          (11UL)                    /*!< SYSTICKACT (Bit 11)                                   */
#define SCB_SHCSR_SYSTICKACT_Msk          (0x800UL)                 /*!< SYSTICKACT (Bitfield-Mask: 0x01)                      */
#define SCB_SHCSR_USGFAULTPENDED_Pos      (12UL)                    /*!< USGFAULTPENDED (Bit 12)                               */
#define SCB_SHCSR_USGFAULTPENDED_Msk      (0x1000UL)                /*!< USGFAULTPENDED (Bitfield-Mask: 0x01)                  */
#define SCB_SHCSR_MEMFAULTPENDED_Pos      (13UL)                    /*!< MEMFAULTPENDED (Bit 13)                               */
#define SCB_SHCSR_MEMFAULTPENDED_Msk      (0x2000UL)                /*!< MEMFAULTPENDED (Bitfield-Mask: 0x01)                  */
#define SCB_SHCSR_BUSFAULTPENDED_Pos      (14UL)                    /*!< BUSFAULTPENDED (Bit 14)                               */
#define SCB_SHCSR_BUSFAULTPENDED_Msk      (0x4000UL)                /*!< BUSFAULTPENDED (Bitfield-Mask: 0x01)                  */
#define SCB_SHCSR_SVCALLPENDED_Pos        (15UL)                    /*!< SVCALLPENDED (Bit 15)                                 */
#define SCB_SHCSR_SVCALLPENDED_Msk        (0x8000UL)                /*!< SVCALLPENDED (Bitfield-Mask: 0x01)                    */
#define SCB_SHCSR_MEMFAULTENA_Pos         (16UL)                    /*!< MEMFAULTENA (Bit 16)                                  */
#define SCB_SHCSR_MEMFAULTENA_Msk         (0x10000UL)               /*!< MEMFAULTENA (Bitfield-Mask: 0x01)                     */
#define SCB_SHCSR_BUSFAULTENA_Pos         (17UL)                    /*!< BUSFAULTENA (Bit 17)                                  */
#define SCB_SHCSR_BUSFAULTENA_Msk         (0x20000UL)               /*!< BUSFAULTENA (Bitfield-Mask: 0x01)                     */
#define SCB_SHCSR_USGFAULTENA_Pos         (18UL)                    /*!< USGFAULTENA (Bit 18)                                  */
#define SCB_SHCSR_USGFAULTENA_Msk         (0x40000UL)               /*!< USGFAULTENA (Bitfield-Mask: 0x01)                     */
/* =================================================  CFSR_UFSR_BFSR_MMFSR  ================================================== */
#define SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL_Pos (0UL)                 /*!< IACCVIOL (Bit 0)                                      */
#define SCB_CFSR_UFSR_BFSR_MMFSR_IACCVIOL_Msk (0x1UL)               /*!< IACCVIOL (Bitfield-Mask: 0x01)                        */
#define SCB_CFSR_UFSR_BFSR_MMFSR_DACCVIOL_Pos (1UL)                 /*!< DACCVIOL (Bit 1)                                      */
#define SCB_CFSR_UFSR_BFSR_MMFSR_DACCVIOL_Msk (0x2UL)               /*!< DACCVIOL (Bitfield-Mask: 0x01)                        */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR_Pos (3UL)                /*!< MUNSTKERR (Bit 3)                                     */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MUNSTKERR_Msk (0x8UL)              /*!< MUNSTKERR (Bitfield-Mask: 0x01)                       */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR_Pos (4UL)                  /*!< MSTKERR (Bit 4)                                       */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MSTKERR_Msk (0x10UL)               /*!< MSTKERR (Bitfield-Mask: 0x01)                         */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR_Pos (5UL)                  /*!< MLSPERR (Bit 5)                                       */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MLSPERR_Msk (0x20UL)               /*!< MLSPERR (Bitfield-Mask: 0x01)                         */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID_Pos (7UL)                /*!< MMARVALID (Bit 7)                                     */
#define SCB_CFSR_UFSR_BFSR_MMFSR_MMARVALID_Msk (0x80UL)             /*!< MMARVALID (Bitfield-Mask: 0x01)                       */
#define SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR_Pos (8UL)                  /*!< IBUSERR (Bit 8)                                       */
#define SCB_CFSR_UFSR_BFSR_MMFSR_IBUSERR_Msk (0x100UL)              /*!< IBUSERR (Bitfield-Mask: 0x01)                         */
#define SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR_Pos (9UL)                /*!< PRECISERR (Bit 9)                                     */
#define SCB_CFSR_UFSR_BFSR_MMFSR_PRECISERR_Msk (0x200UL)            /*!< PRECISERR (Bitfield-Mask: 0x01)                       */
#define SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR_Pos (10UL)             /*!< IMPRECISERR (Bit 10)                                  */
#define SCB_CFSR_UFSR_BFSR_MMFSR_IMPRECISERR_Msk (0x400UL)          /*!< IMPRECISERR (Bitfield-Mask: 0x01)                     */
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR_Pos (11UL)                /*!< UNSTKERR (Bit 11)                                     */
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNSTKERR_Msk (0x800UL)             /*!< UNSTKERR (Bitfield-Mask: 0x01)                        */
#define SCB_CFSR_UFSR_BFSR_MMFSR_STKERR_Pos (12UL)                  /*!< STKERR (Bit 12)                                       */
#define SCB_CFSR_UFSR_BFSR_MMFSR_STKERR_Msk (0x1000UL)              /*!< STKERR (Bitfield-Mask: 0x01)                          */
#define SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR_Pos (13UL)                  /*!< LSPERR (Bit 13)                                       */
#define SCB_CFSR_UFSR_BFSR_MMFSR_LSPERR_Msk (0x2000UL)              /*!< LSPERR (Bitfield-Mask: 0x01)                          */
#define SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID_Pos (15UL)               /*!< BFARVALID (Bit 15)                                    */
#define SCB_CFSR_UFSR_BFSR_MMFSR_BFARVALID_Msk (0x8000UL)           /*!< BFARVALID (Bitfield-Mask: 0x01)                       */
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR_Pos (16UL)              /*!< UNDEFINSTR (Bit 16)                                   */
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNDEFINSTR_Msk (0x10000UL)         /*!< UNDEFINSTR (Bitfield-Mask: 0x01)                      */
#define SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE_Pos (17UL)                /*!< INVSTATE (Bit 17)                                     */
#define SCB_CFSR_UFSR_BFSR_MMFSR_INVSTATE_Msk (0x20000UL)           /*!< INVSTATE (Bitfield-Mask: 0x01)                        */
#define SCB_CFSR_UFSR_BFSR_MMFSR_INVPC_Pos (18UL)                   /*!< INVPC (Bit 18)                                        */
#define SCB_CFSR_UFSR_BFSR_MMFSR_INVPC_Msk (0x40000UL)              /*!< INVPC (Bitfield-Mask: 0x01)                           */
#define SCB_CFSR_UFSR_BFSR_MMFSR_NOCP_Pos (19UL)                    /*!< NOCP (Bit 19)                                         */
#define SCB_CFSR_UFSR_BFSR_MMFSR_NOCP_Msk (0x80000UL)               /*!< NOCP (Bitfield-Mask: 0x01)                            */
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED_Pos (24UL)               /*!< UNALIGNED (Bit 24)                                    */
#define SCB_CFSR_UFSR_BFSR_MMFSR_UNALIGNED_Msk (0x1000000UL)        /*!< UNALIGNED (Bitfield-Mask: 0x01)                       */
#define SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO_Pos (25UL)               /*!< DIVBYZERO (Bit 25)                                    */
#define SCB_CFSR_UFSR_BFSR_MMFSR_DIVBYZERO_Msk (0x2000000UL)        /*!< DIVBYZERO (Bitfield-Mask: 0x01)                       */
/* =========================================================  HFSR  ========================================================== */
#define SCB_HFSR_VECTTBL_Pos              (1UL)                     /*!< VECTTBL (Bit 1)                                       */
#define SCB_HFSR_VECTTBL_Msk              (0x2UL)                   /*!< VECTTBL (Bitfield-Mask: 0x01)                         */
#define SCB_HFSR_FORCED_Pos               (30UL)                    /*!< FORCED (Bit 30)                                       */
#define SCB_HFSR_FORCED_Msk               (0x40000000UL)            /*!< FORCED (Bitfield-Mask: 0x01)                          */
#define SCB_HFSR_DEBUG_VT_Pos             (31UL)                    /*!< DEBUG_VT (Bit 31)                                     */
#define SCB_HFSR_DEBUG_VT_Msk             (0x80000000UL)            /*!< DEBUG_VT (Bitfield-Mask: 0x01)                        */
/* =========================================================  MMFAR  ========================================================= */
#define SCB_MMFAR_ADDRESS_Pos             (0UL)                     /*!< ADDRESS (Bit 0)                                       */
#define SCB_MMFAR_ADDRESS_Msk             (0xffffffffUL)            /*!< ADDRESS (Bitfield-Mask: 0xffffffff)                   */
/* =========================================================  BFAR  ========================================================== */
#define SCB_BFAR_ADDRESS_Pos              (0UL)                     /*!< ADDRESS (Bit 0)                                       */
#define SCB_BFAR_ADDRESS_Msk              (0xffffffffUL)            /*!< ADDRESS (Bitfield-Mask: 0xffffffff)                   */


/* =========================================================================================================================== */
/* ================                                         SCB_ACTRL                                         ================ */
/* =========================================================================================================================== */

/* =========================================================  ACTRL  ========================================================= */
#define SCB_ACTRL_ACTRL_DISFOLD_Pos       (2UL)                     /*!< DISFOLD (Bit 2)                                       */
#define SCB_ACTRL_ACTRL_DISFOLD_Msk       (0x4UL)                   /*!< DISFOLD (Bitfield-Mask: 0x01)                         */
#define SCB_ACTRL_ACTRL_FPEXCODIS_Pos     (10UL)                    /*!< FPEXCODIS (Bit 10)                                    */
#define SCB_ACTRL_ACTRL_FPEXCODIS_Msk     (0x400UL)                 /*!< FPEXCODIS (Bitfield-Mask: 0x01)                       */
#define SCB_ACTRL_ACTRL_DISRAMODE_Pos     (11UL)                    /*!< DISRAMODE (Bit 11)                                    */
#define SCB_ACTRL_ACTRL_DISRAMODE_Msk     (0x800UL)                 /*!< DISRAMODE (Bitfield-Mask: 0x01)                       */
#define SCB_ACTRL_ACTRL_DISITMATBFLUSH_Pos (12UL)                   /*!< DISITMATBFLUSH (Bit 12)                               */
#define SCB_ACTRL_ACTRL_DISITMATBFLUSH_Msk (0x1000UL)               /*!< DISITMATBFLUSH (Bitfield-Mask: 0x01)                  */

