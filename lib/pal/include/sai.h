#include "core.h"


#define SAI1_BASE                   0x40015800UL
#define SAI2_BASE                   0x40015C00UL

#define SAI1                        ((SAI1_Type*)              SAI1_BASE)
#define SAI2                        ((SAI1_Type*)              SAI2_BASE)


/* =========================================================================================================================== */
/* ================                                           SAI1                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Serial audio interface (SAI1)
  */

typedef struct {                                /*!< (@ 0x40015800) SAI1 Structure                                             */
  
  union {
    __IOM uint32_t GCR;                         /*!< (@ 0x00000000) Global configuration register                              */
    
    struct {
      __IOM uint32_t SYNCIN     : 2;            /*!< [1..0] Synchronization inputs                                             */
            uint32_t            : 2;
      __IOM uint32_t SYNCOUT    : 2;            /*!< [5..4] Synchronization outputs                                            */
            uint32_t            : 26;
    } GCR_b;
  } ;
  
  union {
    __IOM uint32_t ACR1;                        /*!< (@ 0x00000004) AConfiguration register 1                                  */
    
    struct {
      __IOM uint32_t MODE       : 2;            /*!< [1..0] Audio block mode                                                   */
      __IOM uint32_t PRTCFG     : 2;            /*!< [3..2] Protocol configuration                                             */
            uint32_t            : 1;
      __IOM uint32_t DS         : 3;            /*!< [7..5] Data size                                                          */
      __IOM uint32_t LSBFIRST   : 1;            /*!< [8..8] Least significant bit first                                        */
      __IOM uint32_t CKSTR      : 1;            /*!< [9..9] Clock strobing edge                                                */
      __IOM uint32_t SYNCEN     : 2;            /*!< [11..10] Synchronization enable                                           */
      __IOM uint32_t MONO       : 1;            /*!< [12..12] Mono mode                                                        */
      __IOM uint32_t OutDri     : 1;            /*!< [13..13] Output drive                                                     */
            uint32_t            : 2;
      __IOM uint32_t SAIAEN     : 1;            /*!< [16..16] Audio block A enable                                             */
      __IOM uint32_t DMAEN      : 1;            /*!< [17..17] DMA enable                                                       */
            uint32_t            : 1;
      __IOM uint32_t NODIV      : 1;            /*!< [19..19] No divider                                                       */
      __IOM uint32_t MCKDIV     : 4;            /*!< [23..20] Master clock divider                                             */
            uint32_t            : 8;
    } ACR1_b;
  } ;
  
  union {
    __IOM uint32_t ACR2;                        /*!< (@ 0x00000008) AConfiguration register 2                                  */
    
    struct {
      __IOM uint32_t FTH        : 3;            /*!< [2..0] FIFO threshold                                                     */
      __IOM uint32_t FFLUS      : 1;            /*!< [3..3] FIFO flush                                                         */
      __IOM uint32_t TRIS       : 1;            /*!< [4..4] Tristate management on data line                                   */
      __IOM uint32_t MUTE       : 1;            /*!< [5..5] Mute                                                               */
      __IOM uint32_t MUTEVAL    : 1;            /*!< [6..6] Mute value                                                         */
      __IOM uint32_t MUTECN     : 6;            /*!< [12..7] Mute counter                                                      */
      __IOM uint32_t CPL        : 1;            /*!< [13..13] Complement bit                                                   */
      __IOM uint32_t COMP       : 2;            /*!< [15..14] Companding mode                                                  */
            uint32_t            : 16;
    } ACR2_b;
  } ;
  
  union {
    __IOM uint32_t AFRCR;                       /*!< (@ 0x0000000C) AFRCR                                                      */
    
    struct {
      __IOM uint32_t FRL        : 8;            /*!< [7..0] Frame length                                                       */
      __IOM uint32_t FSALL      : 7;            /*!< [14..8] Frame synchronization active level length                         */
            uint32_t            : 1;
      __IOM uint32_t FSDEF      : 1;            /*!< [16..16] Frame synchronization definition                                 */
      __IOM uint32_t FSPOL      : 1;            /*!< [17..17] Frame synchronization polarity                                   */
      __IOM uint32_t FSOFF      : 1;            /*!< [18..18] Frame synchronization offset                                     */
            uint32_t            : 13;
    } AFRCR_b;
  } ;
  
  union {
    __IOM uint32_t ASLOTR;                      /*!< (@ 0x00000010) ASlot register                                             */
    
    struct {
      __IOM uint32_t FBOFF      : 5;            /*!< [4..0] First bit offset                                                   */
            uint32_t            : 1;
      __IOM uint32_t SLOTSZ     : 2;            /*!< [7..6] Slot size                                                          */
      __IOM uint32_t NBSLOT     : 4;            /*!< [11..8] Number of slots in an audio frame                                 */
            uint32_t            : 4;
      __IOM uint32_t SLOTEN     : 16;           /*!< [31..16] Slot enable                                                      */
    } ASLOTR_b;
  } ;
  
  union {
    __IOM uint32_t AIM;                         /*!< (@ 0x00000014) AInterrupt mask register2                                  */
    
    struct {
      __IOM uint32_t OVRUDRIE   : 1;            /*!< [0..0] Overrun/underrun interrupt enable                                  */
      __IOM uint32_t MUTEDET    : 1;            /*!< [1..1] Mute detection interrupt enable                                    */
      __IOM uint32_t WCKCFG     : 1;            /*!< [2..2] Wrong clock configuration interrupt enable                         */
      __IOM uint32_t FREQIE     : 1;            /*!< [3..3] FIFO request interrupt enable                                      */
      __IOM uint32_t CNRDYIE    : 1;            /*!< [4..4] Codec not ready interrupt enable                                   */
      __IOM uint32_t AFSDETIE   : 1;            /*!< [5..5] Anticipated frame synchronization detection interrupt
                                                     enable                                                                    */
      __IOM uint32_t LFSDET     : 1;            /*!< [6..6] Late frame synchronization detection interrupt enable              */
            uint32_t            : 25;
    } AIM_b;
  } ;
  
  union {
    __IOM uint32_t ASR;                         /*!< (@ 0x00000018) AStatus register                                           */
    
    struct {
      __IOM uint32_t OVRUDR     : 1;            /*!< [0..0] Overrun / underrun                                                 */
      __IOM uint32_t MUTEDET    : 1;            /*!< [1..1] Mute detection                                                     */
      __IOM uint32_t WCKCFG     : 1;            /*!< [2..2] Wrong clock configuration flag. This bit is read only.             */
      __IOM uint32_t FREQ       : 1;            /*!< [3..3] FIFO request                                                       */
      __IOM uint32_t CNRDY      : 1;            /*!< [4..4] Codec not ready                                                    */
      __IOM uint32_t AFSDET     : 1;            /*!< [5..5] Anticipated frame synchronization detection                        */
      __IOM uint32_t LFSDET     : 1;            /*!< [6..6] Late frame synchronization detection                               */
            uint32_t            : 9;
      __IOM uint32_t FLVL       : 3;            /*!< [18..16] FIFO level threshold                                             */
            uint32_t            : 13;
    } ASR_b;
  } ;
  
  union {
    __IOM uint32_t ACLRFR;                      /*!< (@ 0x0000001C) AClear flag register                                       */
    
    struct {
      __IOM uint32_t OVRUDR     : 1;            /*!< [0..0] Clear overrun / underrun                                           */
      __IOM uint32_t MUTEDET    : 1;            /*!< [1..1] Mute detection flag                                                */
      __IOM uint32_t WCKCFG     : 1;            /*!< [2..2] Clear wrong clock configuration flag                               */
            uint32_t            : 1;
      __IOM uint32_t CNRDY      : 1;            /*!< [4..4] Clear codec not ready flag                                         */
      __IOM uint32_t CAFSDET    : 1;            /*!< [5..5] Clear anticipated frame synchronization detection flag.            */
      __IOM uint32_t LFSDET     : 1;            /*!< [6..6] Clear late frame synchronization detection flag                    */
            uint32_t            : 25;
    } ACLRFR_b;
  } ;
  
  union {
    __IOM uint32_t ADR;                         /*!< (@ 0x00000020) AData register                                             */
    
    struct {
      __IOM uint32_t DATA       : 32;           /*!< [31..0] Data                                                              */
    } ADR_b;
  } ;
  
  union {
    __IOM uint32_t BCR1;                        /*!< (@ 0x00000024) BConfiguration register 1                                  */
    
    struct {
      __IOM uint32_t MODE       : 2;            /*!< [1..0] Audio block mode                                                   */
      __IOM uint32_t PRTCFG     : 2;            /*!< [3..2] Protocol configuration                                             */
            uint32_t            : 1;
      __IOM uint32_t DS         : 3;            /*!< [7..5] Data size                                                          */
      __IOM uint32_t LSBFIRST   : 1;            /*!< [8..8] Least significant bit first                                        */
      __IOM uint32_t CKSTR      : 1;            /*!< [9..9] Clock strobing edge                                                */
      __IOM uint32_t SYNCEN     : 2;            /*!< [11..10] Synchronization enable                                           */
      __IOM uint32_t MONO       : 1;            /*!< [12..12] Mono mode                                                        */
      __IOM uint32_t OutDri     : 1;            /*!< [13..13] Output drive                                                     */
            uint32_t            : 2;
      __IOM uint32_t SAIBEN     : 1;            /*!< [16..16] Audio block B enable                                             */
      __IOM uint32_t DMAEN      : 1;            /*!< [17..17] DMA enable                                                       */
            uint32_t            : 1;
      __IOM uint32_t NODIV      : 1;            /*!< [19..19] No divider                                                       */
      __IOM uint32_t MCKDIV     : 4;            /*!< [23..20] Master clock divider                                             */
            uint32_t            : 8;
    } BCR1_b;
  } ;
  
  union {
    __IOM uint32_t BCR2;                        /*!< (@ 0x00000028) BConfiguration register 2                                  */
    
    struct {
      __IOM uint32_t FTH        : 3;            /*!< [2..0] FIFO threshold                                                     */
      __IOM uint32_t FFLUS      : 1;            /*!< [3..3] FIFO flush                                                         */
      __IOM uint32_t TRIS       : 1;            /*!< [4..4] Tristate management on data line                                   */
      __IOM uint32_t MUTE       : 1;            /*!< [5..5] Mute                                                               */
      __IOM uint32_t MUTEVAL    : 1;            /*!< [6..6] Mute value                                                         */
      __IOM uint32_t MUTECN     : 6;            /*!< [12..7] Mute counter                                                      */
      __IOM uint32_t CPL        : 1;            /*!< [13..13] Complement bit                                                   */
      __IOM uint32_t COMP       : 2;            /*!< [15..14] Companding mode                                                  */
            uint32_t            : 16;
    } BCR2_b;
  } ;
  
  union {
    __IOM uint32_t BFRCR;                       /*!< (@ 0x0000002C) BFRCR                                                      */
    
    struct {
      __IOM uint32_t FRL        : 8;            /*!< [7..0] Frame length                                                       */
      __IOM uint32_t FSALL      : 7;            /*!< [14..8] Frame synchronization active level length                         */
            uint32_t            : 1;
      __IOM uint32_t FSDEF      : 1;            /*!< [16..16] Frame synchronization definition                                 */
      __IOM uint32_t FSPOL      : 1;            /*!< [17..17] Frame synchronization polarity                                   */
      __IOM uint32_t FSOFF      : 1;            /*!< [18..18] Frame synchronization offset                                     */
            uint32_t            : 13;
    } BFRCR_b;
  } ;
  
  union {
    __IOM uint32_t BSLOTR;                      /*!< (@ 0x00000030) BSlot register                                             */
    
    struct {
      __IOM uint32_t FBOFF      : 5;            /*!< [4..0] First bit offset                                                   */
            uint32_t            : 1;
      __IOM uint32_t SLOTSZ     : 2;            /*!< [7..6] Slot size                                                          */
      __IOM uint32_t NBSLOT     : 4;            /*!< [11..8] Number of slots in an audio frame                                 */
            uint32_t            : 4;
      __IOM uint32_t SLOTEN     : 16;           /*!< [31..16] Slot enable                                                      */
    } BSLOTR_b;
  } ;
  
  union {
    __IOM uint32_t BIM;                         /*!< (@ 0x00000034) BInterrupt mask register2                                  */
    
    struct {
      __IOM uint32_t OVRUDRIE   : 1;            /*!< [0..0] Overrun/underrun interrupt enable                                  */
      __IOM uint32_t MUTEDET    : 1;            /*!< [1..1] Mute detection interrupt enable                                    */
      __IOM uint32_t WCKCFG     : 1;            /*!< [2..2] Wrong clock configuration interrupt enable                         */
      __IOM uint32_t FREQIE     : 1;            /*!< [3..3] FIFO request interrupt enable                                      */
      __IOM uint32_t CNRDYIE    : 1;            /*!< [4..4] Codec not ready interrupt enable                                   */
      __IOM uint32_t AFSDETIE   : 1;            /*!< [5..5] Anticipated frame synchronization detection interrupt
                                                     enable                                                                    */
      __IOM uint32_t LFSDETIE   : 1;            /*!< [6..6] Late frame synchronization detection interrupt enable              */
            uint32_t            : 25;
    } BIM_b;
  } ;
  
  union {
    __IM  uint32_t BSR;                         /*!< (@ 0x00000038) BStatus register                                           */
    
    struct {
      __IM  uint32_t OVRUDR     : 1;            /*!< [0..0] Overrun / underrun                                                 */
      __IM  uint32_t MUTEDET    : 1;            /*!< [1..1] Mute detection                                                     */
      __IM  uint32_t WCKCFG     : 1;            /*!< [2..2] Wrong clock configuration flag                                     */
      __IM  uint32_t FREQ       : 1;            /*!< [3..3] FIFO request                                                       */
      __IM  uint32_t CNRDY      : 1;            /*!< [4..4] Codec not ready                                                    */
      __IM  uint32_t AFSDET     : 1;            /*!< [5..5] Anticipated frame synchronization detection                        */
      __IM  uint32_t LFSDET     : 1;            /*!< [6..6] Late frame synchronization detection                               */
            uint32_t            : 9;
      __IM  uint32_t FLVL       : 3;            /*!< [18..16] FIFO level threshold                                             */
            uint32_t            : 13;
    } BSR_b;
  } ;
  
  union {
    __OM  uint32_t BCLRFR;                      /*!< (@ 0x0000003C) BClear flag register                                       */
    
    struct {
      __OM  uint32_t OVRUDR     : 1;            /*!< [0..0] Clear overrun / underrun                                           */
      __OM  uint32_t MUTEDET    : 1;            /*!< [1..1] Mute detection flag                                                */
      __OM  uint32_t WCKCFG     : 1;            /*!< [2..2] Clear wrong clock configuration flag                               */
            uint32_t            : 1;
      __OM  uint32_t CNRDY      : 1;            /*!< [4..4] Clear codec not ready flag                                         */
      __OM  uint32_t CAFSDET    : 1;            /*!< [5..5] Clear anticipated frame synchronization detection flag             */
      __OM  uint32_t LFSDET     : 1;            /*!< [6..6] Clear late frame synchronization detection flag                    */
            uint32_t            : 25;
    } BCLRFR_b;
  } ;
  
  union {
    __IOM uint32_t BDR;                         /*!< (@ 0x00000040) BData register                                             */
    
    struct {
      __IOM uint32_t DATA       : 32;           /*!< [31..0] Data                                                              */
    } BDR_b;
  } ;
} SAI1_Type;                                    /*!< Size = 68 (0x44)                                                          */



/* =========================================================================================================================== */
/* ================                                           SAI1                                            ================ */
/* =========================================================================================================================== */

/* =========================================================  BCR1  ========================================================== */
#define SAI1_BCR1_MCKDIV_Pos              (20UL)                    /*!< MCKDIV (Bit 20)                                       */
#define SAI1_BCR1_MCKDIV_Msk              (0xf00000UL)              /*!< MCKDIV (Bitfield-Mask: 0x0f)                          */
#define SAI1_BCR1_NODIV_Pos               (19UL)                    /*!< NODIV (Bit 19)                                        */
#define SAI1_BCR1_NODIV_Msk               (0x80000UL)               /*!< NODIV (Bitfield-Mask: 0x01)                           */
#define SAI1_BCR1_DMAEN_Pos               (17UL)                    /*!< DMAEN (Bit 17)                                        */
#define SAI1_BCR1_DMAEN_Msk               (0x20000UL)               /*!< DMAEN (Bitfield-Mask: 0x01)                           */
#define SAI1_BCR1_SAIBEN_Pos              (16UL)                    /*!< SAIBEN (Bit 16)                                       */
#define SAI1_BCR1_SAIBEN_Msk              (0x10000UL)               /*!< SAIBEN (Bitfield-Mask: 0x01)                          */
#define SAI1_BCR1_OutDri_Pos              (13UL)                    /*!< OutDri (Bit 13)                                       */
#define SAI1_BCR1_OutDri_Msk              (0x2000UL)                /*!< OutDri (Bitfield-Mask: 0x01)                          */
#define SAI1_BCR1_MONO_Pos                (12UL)                    /*!< MONO (Bit 12)                                         */
#define SAI1_BCR1_MONO_Msk                (0x1000UL)                /*!< MONO (Bitfield-Mask: 0x01)                            */
#define SAI1_BCR1_SYNCEN_Pos              (10UL)                    /*!< SYNCEN (Bit 10)                                       */
#define SAI1_BCR1_SYNCEN_Msk              (0xc00UL)                 /*!< SYNCEN (Bitfield-Mask: 0x03)                          */
#define SAI1_BCR1_CKSTR_Pos               (9UL)                     /*!< CKSTR (Bit 9)                                         */
#define SAI1_BCR1_CKSTR_Msk               (0x200UL)                 /*!< CKSTR (Bitfield-Mask: 0x01)                           */
#define SAI1_BCR1_LSBFIRST_Pos            (8UL)                     /*!< LSBFIRST (Bit 8)                                      */
#define SAI1_BCR1_LSBFIRST_Msk            (0x100UL)                 /*!< LSBFIRST (Bitfield-Mask: 0x01)                        */
#define SAI1_BCR1_DS_Pos                  (5UL)                     /*!< DS (Bit 5)                                            */
#define SAI1_BCR1_DS_Msk                  (0xe0UL)                  /*!< DS (Bitfield-Mask: 0x07)                              */
#define SAI1_BCR1_PRTCFG_Pos              (2UL)                     /*!< PRTCFG (Bit 2)                                        */
#define SAI1_BCR1_PRTCFG_Msk              (0xcUL)                   /*!< PRTCFG (Bitfield-Mask: 0x03)                          */
#define SAI1_BCR1_MODE_Pos                (0UL)                     /*!< MODE (Bit 0)                                          */
#define SAI1_BCR1_MODE_Msk                (0x3UL)                   /*!< MODE (Bitfield-Mask: 0x03)                            */
/* =========================================================  BCR2  ========================================================== */
#define SAI1_BCR2_COMP_Pos                (14UL)                    /*!< COMP (Bit 14)                                         */
#define SAI1_BCR2_COMP_Msk                (0xc000UL)                /*!< COMP (Bitfield-Mask: 0x03)                            */
#define SAI1_BCR2_CPL_Pos                 (13UL)                    /*!< CPL (Bit 13)                                          */
#define SAI1_BCR2_CPL_Msk                 (0x2000UL)                /*!< CPL (Bitfield-Mask: 0x01)                             */
#define SAI1_BCR2_MUTECN_Pos              (7UL)                     /*!< MUTECN (Bit 7)                                        */
#define SAI1_BCR2_MUTECN_Msk              (0x1f80UL)                /*!< MUTECN (Bitfield-Mask: 0x3f)                          */
#define SAI1_BCR2_MUTEVAL_Pos             (6UL)                     /*!< MUTEVAL (Bit 6)                                       */
#define SAI1_BCR2_MUTEVAL_Msk             (0x40UL)                  /*!< MUTEVAL (Bitfield-Mask: 0x01)                         */
#define SAI1_BCR2_MUTE_Pos                (5UL)                     /*!< MUTE (Bit 5)                                          */
#define SAI1_BCR2_MUTE_Msk                (0x20UL)                  /*!< MUTE (Bitfield-Mask: 0x01)                            */
#define SAI1_BCR2_TRIS_Pos                (4UL)                     /*!< TRIS (Bit 4)                                          */
#define SAI1_BCR2_TRIS_Msk                (0x10UL)                  /*!< TRIS (Bitfield-Mask: 0x01)                            */
#define SAI1_BCR2_FFLUS_Pos               (3UL)                     /*!< FFLUS (Bit 3)                                         */
#define SAI1_BCR2_FFLUS_Msk               (0x8UL)                   /*!< FFLUS (Bitfield-Mask: 0x01)                           */
#define SAI1_BCR2_FTH_Pos                 (0UL)                     /*!< FTH (Bit 0)                                           */
#define SAI1_BCR2_FTH_Msk                 (0x7UL)                   /*!< FTH (Bitfield-Mask: 0x07)                             */
/* =========================================================  BFRCR  ========================================================= */
#define SAI1_BFRCR_FSOFF_Pos              (18UL)                    /*!< FSOFF (Bit 18)                                        */
#define SAI1_BFRCR_FSOFF_Msk              (0x40000UL)               /*!< FSOFF (Bitfield-Mask: 0x01)                           */
#define SAI1_BFRCR_FSPOL_Pos              (17UL)                    /*!< FSPOL (Bit 17)                                        */
#define SAI1_BFRCR_FSPOL_Msk              (0x20000UL)               /*!< FSPOL (Bitfield-Mask: 0x01)                           */
#define SAI1_BFRCR_FSDEF_Pos              (16UL)                    /*!< FSDEF (Bit 16)                                        */
#define SAI1_BFRCR_FSDEF_Msk              (0x10000UL)               /*!< FSDEF (Bitfield-Mask: 0x01)                           */
#define SAI1_BFRCR_FSALL_Pos              (8UL)                     /*!< FSALL (Bit 8)                                         */
#define SAI1_BFRCR_FSALL_Msk              (0x7f00UL)                /*!< FSALL (Bitfield-Mask: 0x7f)                           */
#define SAI1_BFRCR_FRL_Pos                (0UL)                     /*!< FRL (Bit 0)                                           */
#define SAI1_BFRCR_FRL_Msk                (0xffUL)                  /*!< FRL (Bitfield-Mask: 0xff)                             */
/* ========================================================  BSLOTR  ========================================================= */
#define SAI1_BSLOTR_SLOTEN_Pos            (16UL)                    /*!< SLOTEN (Bit 16)                                       */
#define SAI1_BSLOTR_SLOTEN_Msk            (0xffff0000UL)            /*!< SLOTEN (Bitfield-Mask: 0xffff)                        */
#define SAI1_BSLOTR_NBSLOT_Pos            (8UL)                     /*!< NBSLOT (Bit 8)                                        */
#define SAI1_BSLOTR_NBSLOT_Msk            (0xf00UL)                 /*!< NBSLOT (Bitfield-Mask: 0x0f)                          */
#define SAI1_BSLOTR_SLOTSZ_Pos            (6UL)                     /*!< SLOTSZ (Bit 6)                                        */
#define SAI1_BSLOTR_SLOTSZ_Msk            (0xc0UL)                  /*!< SLOTSZ (Bitfield-Mask: 0x03)                          */
#define SAI1_BSLOTR_FBOFF_Pos             (0UL)                     /*!< FBOFF (Bit 0)                                         */
#define SAI1_BSLOTR_FBOFF_Msk             (0x1fUL)                  /*!< FBOFF (Bitfield-Mask: 0x1f)                           */
/* ==========================================================  BIM  ========================================================== */
#define SAI1_BIM_LFSDETIE_Pos             (6UL)                     /*!< LFSDETIE (Bit 6)                                      */
#define SAI1_BIM_LFSDETIE_Msk             (0x40UL)                  /*!< LFSDETIE (Bitfield-Mask: 0x01)                        */
#define SAI1_BIM_AFSDETIE_Pos             (5UL)                     /*!< AFSDETIE (Bit 5)                                      */
#define SAI1_BIM_AFSDETIE_Msk             (0x20UL)                  /*!< AFSDETIE (Bitfield-Mask: 0x01)                        */
#define SAI1_BIM_CNRDYIE_Pos              (4UL)                     /*!< CNRDYIE (Bit 4)                                       */
#define SAI1_BIM_CNRDYIE_Msk              (0x10UL)                  /*!< CNRDYIE (Bitfield-Mask: 0x01)                         */
#define SAI1_BIM_FREQIE_Pos               (3UL)                     /*!< FREQIE (Bit 3)                                        */
#define SAI1_BIM_FREQIE_Msk               (0x8UL)                   /*!< FREQIE (Bitfield-Mask: 0x01)                          */
#define SAI1_BIM_WCKCFG_Pos               (2UL)                     /*!< WCKCFG (Bit 2)                                        */
#define SAI1_BIM_WCKCFG_Msk               (0x4UL)                   /*!< WCKCFG (Bitfield-Mask: 0x01)                          */
#define SAI1_BIM_MUTEDET_Pos              (1UL)                     /*!< MUTEDET (Bit 1)                                       */
#define SAI1_BIM_MUTEDET_Msk              (0x2UL)                   /*!< MUTEDET (Bitfield-Mask: 0x01)                         */
#define SAI1_BIM_OVRUDRIE_Pos             (0UL)                     /*!< OVRUDRIE (Bit 0)                                      */
#define SAI1_BIM_OVRUDRIE_Msk             (0x1UL)                   /*!< OVRUDRIE (Bitfield-Mask: 0x01)                        */
/* ==========================================================  BSR  ========================================================== */
#define SAI1_BSR_FLVL_Pos                 (16UL)                    /*!< FLVL (Bit 16)                                         */
#define SAI1_BSR_FLVL_Msk                 (0x70000UL)               /*!< FLVL (Bitfield-Mask: 0x07)                            */
#define SAI1_BSR_LFSDET_Pos               (6UL)                     /*!< LFSDET (Bit 6)                                        */
#define SAI1_BSR_LFSDET_Msk               (0x40UL)                  /*!< LFSDET (Bitfield-Mask: 0x01)                          */
#define SAI1_BSR_AFSDET_Pos               (5UL)                     /*!< AFSDET (Bit 5)                                        */
#define SAI1_BSR_AFSDET_Msk               (0x20UL)                  /*!< AFSDET (Bitfield-Mask: 0x01)                          */
#define SAI1_BSR_CNRDY_Pos                (4UL)                     /*!< CNRDY (Bit 4)                                         */
#define SAI1_BSR_CNRDY_Msk                (0x10UL)                  /*!< CNRDY (Bitfield-Mask: 0x01)                           */
#define SAI1_BSR_FREQ_Pos                 (3UL)                     /*!< FREQ (Bit 3)                                          */
#define SAI1_BSR_FREQ_Msk                 (0x8UL)                   /*!< FREQ (Bitfield-Mask: 0x01)                            */
#define SAI1_BSR_WCKCFG_Pos               (2UL)                     /*!< WCKCFG (Bit 2)                                        */
#define SAI1_BSR_WCKCFG_Msk               (0x4UL)                   /*!< WCKCFG (Bitfield-Mask: 0x01)                          */
#define SAI1_BSR_MUTEDET_Pos              (1UL)                     /*!< MUTEDET (Bit 1)                                       */
#define SAI1_BSR_MUTEDET_Msk              (0x2UL)                   /*!< MUTEDET (Bitfield-Mask: 0x01)                         */
#define SAI1_BSR_OVRUDR_Pos               (0UL)                     /*!< OVRUDR (Bit 0)                                        */
#define SAI1_BSR_OVRUDR_Msk               (0x1UL)                   /*!< OVRUDR (Bitfield-Mask: 0x01)                          */
/* ========================================================  BCLRFR  ========================================================= */
#define SAI1_BCLRFR_LFSDET_Pos            (6UL)                     /*!< LFSDET (Bit 6)                                        */
#define SAI1_BCLRFR_LFSDET_Msk            (0x40UL)                  /*!< LFSDET (Bitfield-Mask: 0x01)                          */
#define SAI1_BCLRFR_CAFSDET_Pos           (5UL)                     /*!< CAFSDET (Bit 5)                                       */
#define SAI1_BCLRFR_CAFSDET_Msk           (0x20UL)                  /*!< CAFSDET (Bitfield-Mask: 0x01)                         */
#define SAI1_BCLRFR_CNRDY_Pos             (4UL)                     /*!< CNRDY (Bit 4)                                         */
#define SAI1_BCLRFR_CNRDY_Msk             (0x10UL)                  /*!< CNRDY (Bitfield-Mask: 0x01)                           */
#define SAI1_BCLRFR_WCKCFG_Pos            (2UL)                     /*!< WCKCFG (Bit 2)                                        */
#define SAI1_BCLRFR_WCKCFG_Msk            (0x4UL)                   /*!< WCKCFG (Bitfield-Mask: 0x01)                          */
#define SAI1_BCLRFR_MUTEDET_Pos           (1UL)                     /*!< MUTEDET (Bit 1)                                       */
#define SAI1_BCLRFR_MUTEDET_Msk           (0x2UL)                   /*!< MUTEDET (Bitfield-Mask: 0x01)                         */
#define SAI1_BCLRFR_OVRUDR_Pos            (0UL)                     /*!< OVRUDR (Bit 0)                                        */
#define SAI1_BCLRFR_OVRUDR_Msk            (0x1UL)                   /*!< OVRUDR (Bitfield-Mask: 0x01)                          */
/* ==========================================================  BDR  ========================================================== */
#define SAI1_BDR_DATA_Pos                 (0UL)                     /*!< DATA (Bit 0)                                          */
#define SAI1_BDR_DATA_Msk                 (0xffffffffUL)            /*!< DATA (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  ACR1  ========================================================== */
#define SAI1_ACR1_MCKDIV_Pos              (20UL)                    /*!< MCKDIV (Bit 20)                                       */
#define SAI1_ACR1_MCKDIV_Msk              (0xf00000UL)              /*!< MCKDIV (Bitfield-Mask: 0x0f)                          */
#define SAI1_ACR1_NODIV_Pos               (19UL)                    /*!< NODIV (Bit 19)                                        */
#define SAI1_ACR1_NODIV_Msk               (0x80000UL)               /*!< NODIV (Bitfield-Mask: 0x01)                           */
#define SAI1_ACR1_DMAEN_Pos               (17UL)                    /*!< DMAEN (Bit 17)                                        */
#define SAI1_ACR1_DMAEN_Msk               (0x20000UL)               /*!< DMAEN (Bitfield-Mask: 0x01)                           */
#define SAI1_ACR1_SAIAEN_Pos              (16UL)                    /*!< SAIAEN (Bit 16)                                       */
#define SAI1_ACR1_SAIAEN_Msk              (0x10000UL)               /*!< SAIAEN (Bitfield-Mask: 0x01)                          */
#define SAI1_ACR1_OutDri_Pos              (13UL)                    /*!< OutDri (Bit 13)                                       */
#define SAI1_ACR1_OutDri_Msk              (0x2000UL)                /*!< OutDri (Bitfield-Mask: 0x01)                          */
#define SAI1_ACR1_MONO_Pos                (12UL)                    /*!< MONO (Bit 12)                                         */
#define SAI1_ACR1_MONO_Msk                (0x1000UL)                /*!< MONO (Bitfield-Mask: 0x01)                            */
#define SAI1_ACR1_SYNCEN_Pos              (10UL)                    /*!< SYNCEN (Bit 10)                                       */
#define SAI1_ACR1_SYNCEN_Msk              (0xc00UL)                 /*!< SYNCEN (Bitfield-Mask: 0x03)                          */
#define SAI1_ACR1_CKSTR_Pos               (9UL)                     /*!< CKSTR (Bit 9)                                         */
#define SAI1_ACR1_CKSTR_Msk               (0x200UL)                 /*!< CKSTR (Bitfield-Mask: 0x01)                           */
#define SAI1_ACR1_LSBFIRST_Pos            (8UL)                     /*!< LSBFIRST (Bit 8)                                      */
#define SAI1_ACR1_LSBFIRST_Msk            (0x100UL)                 /*!< LSBFIRST (Bitfield-Mask: 0x01)                        */
#define SAI1_ACR1_DS_Pos                  (5UL)                     /*!< DS (Bit 5)                                            */
#define SAI1_ACR1_DS_Msk                  (0xe0UL)                  /*!< DS (Bitfield-Mask: 0x07)                              */
#define SAI1_ACR1_PRTCFG_Pos              (2UL)                     /*!< PRTCFG (Bit 2)                                        */
#define SAI1_ACR1_PRTCFG_Msk              (0xcUL)                   /*!< PRTCFG (Bitfield-Mask: 0x03)                          */
#define SAI1_ACR1_MODE_Pos                (0UL)                     /*!< MODE (Bit 0)                                          */
#define SAI1_ACR1_MODE_Msk                (0x3UL)                   /*!< MODE (Bitfield-Mask: 0x03)                            */
/* =========================================================  ACR2  ========================================================== */
#define SAI1_ACR2_COMP_Pos                (14UL)                    /*!< COMP (Bit 14)                                         */
#define SAI1_ACR2_COMP_Msk                (0xc000UL)                /*!< COMP (Bitfield-Mask: 0x03)                            */
#define SAI1_ACR2_CPL_Pos                 (13UL)                    /*!< CPL (Bit 13)                                          */
#define SAI1_ACR2_CPL_Msk                 (0x2000UL)                /*!< CPL (Bitfield-Mask: 0x01)                             */
#define SAI1_ACR2_MUTECN_Pos              (7UL)                     /*!< MUTECN (Bit 7)                                        */
#define SAI1_ACR2_MUTECN_Msk              (0x1f80UL)                /*!< MUTECN (Bitfield-Mask: 0x3f)                          */
#define SAI1_ACR2_MUTEVAL_Pos             (6UL)                     /*!< MUTEVAL (Bit 6)                                       */
#define SAI1_ACR2_MUTEVAL_Msk             (0x40UL)                  /*!< MUTEVAL (Bitfield-Mask: 0x01)                         */
#define SAI1_ACR2_MUTE_Pos                (5UL)                     /*!< MUTE (Bit 5)                                          */
#define SAI1_ACR2_MUTE_Msk                (0x20UL)                  /*!< MUTE (Bitfield-Mask: 0x01)                            */
#define SAI1_ACR2_TRIS_Pos                (4UL)                     /*!< TRIS (Bit 4)                                          */
#define SAI1_ACR2_TRIS_Msk                (0x10UL)                  /*!< TRIS (Bitfield-Mask: 0x01)                            */
#define SAI1_ACR2_FFLUS_Pos               (3UL)                     /*!< FFLUS (Bit 3)                                         */
#define SAI1_ACR2_FFLUS_Msk               (0x8UL)                   /*!< FFLUS (Bitfield-Mask: 0x01)                           */
#define SAI1_ACR2_FTH_Pos                 (0UL)                     /*!< FTH (Bit 0)                                           */
#define SAI1_ACR2_FTH_Msk                 (0x7UL)                   /*!< FTH (Bitfield-Mask: 0x07)                             */
/* =========================================================  AFRCR  ========================================================= */
#define SAI1_AFRCR_FSOFF_Pos              (18UL)                    /*!< FSOFF (Bit 18)                                        */
#define SAI1_AFRCR_FSOFF_Msk              (0x40000UL)               /*!< FSOFF (Bitfield-Mask: 0x01)                           */
#define SAI1_AFRCR_FSPOL_Pos              (17UL)                    /*!< FSPOL (Bit 17)                                        */
#define SAI1_AFRCR_FSPOL_Msk              (0x20000UL)               /*!< FSPOL (Bitfield-Mask: 0x01)                           */
#define SAI1_AFRCR_FSDEF_Pos              (16UL)                    /*!< FSDEF (Bit 16)                                        */
#define SAI1_AFRCR_FSDEF_Msk              (0x10000UL)               /*!< FSDEF (Bitfield-Mask: 0x01)                           */
#define SAI1_AFRCR_FSALL_Pos              (8UL)                     /*!< FSALL (Bit 8)                                         */
#define SAI1_AFRCR_FSALL_Msk              (0x7f00UL)                /*!< FSALL (Bitfield-Mask: 0x7f)                           */
#define SAI1_AFRCR_FRL_Pos                (0UL)                     /*!< FRL (Bit 0)                                           */
#define SAI1_AFRCR_FRL_Msk                (0xffUL)                  /*!< FRL (Bitfield-Mask: 0xff)                             */
/* ========================================================  ASLOTR  ========================================================= */
#define SAI1_ASLOTR_SLOTEN_Pos            (16UL)                    /*!< SLOTEN (Bit 16)                                       */
#define SAI1_ASLOTR_SLOTEN_Msk            (0xffff0000UL)            /*!< SLOTEN (Bitfield-Mask: 0xffff)                        */
#define SAI1_ASLOTR_NBSLOT_Pos            (8UL)                     /*!< NBSLOT (Bit 8)                                        */
#define SAI1_ASLOTR_NBSLOT_Msk            (0xf00UL)                 /*!< NBSLOT (Bitfield-Mask: 0x0f)                          */
#define SAI1_ASLOTR_SLOTSZ_Pos            (6UL)                     /*!< SLOTSZ (Bit 6)                                        */
#define SAI1_ASLOTR_SLOTSZ_Msk            (0xc0UL)                  /*!< SLOTSZ (Bitfield-Mask: 0x03)                          */
#define SAI1_ASLOTR_FBOFF_Pos             (0UL)                     /*!< FBOFF (Bit 0)                                         */
#define SAI1_ASLOTR_FBOFF_Msk             (0x1fUL)                  /*!< FBOFF (Bitfield-Mask: 0x1f)                           */
/* ==========================================================  AIM  ========================================================== */
#define SAI1_AIM_LFSDET_Pos               (6UL)                     /*!< LFSDET (Bit 6)                                        */
#define SAI1_AIM_LFSDET_Msk               (0x40UL)                  /*!< LFSDET (Bitfield-Mask: 0x01)                          */
#define SAI1_AIM_AFSDETIE_Pos             (5UL)                     /*!< AFSDETIE (Bit 5)                                      */
#define SAI1_AIM_AFSDETIE_Msk             (0x20UL)                  /*!< AFSDETIE (Bitfield-Mask: 0x01)                        */
#define SAI1_AIM_CNRDYIE_Pos              (4UL)                     /*!< CNRDYIE (Bit 4)                                       */
#define SAI1_AIM_CNRDYIE_Msk              (0x10UL)                  /*!< CNRDYIE (Bitfield-Mask: 0x01)                         */
#define SAI1_AIM_FREQIE_Pos               (3UL)                     /*!< FREQIE (Bit 3)                                        */
#define SAI1_AIM_FREQIE_Msk               (0x8UL)                   /*!< FREQIE (Bitfield-Mask: 0x01)                          */
#define SAI1_AIM_WCKCFG_Pos               (2UL)                     /*!< WCKCFG (Bit 2)                                        */
#define SAI1_AIM_WCKCFG_Msk               (0x4UL)                   /*!< WCKCFG (Bitfield-Mask: 0x01)                          */
#define SAI1_AIM_MUTEDET_Pos              (1UL)                     /*!< MUTEDET (Bit 1)                                       */
#define SAI1_AIM_MUTEDET_Msk              (0x2UL)                   /*!< MUTEDET (Bitfield-Mask: 0x01)                         */
#define SAI1_AIM_OVRUDRIE_Pos             (0UL)                     /*!< OVRUDRIE (Bit 0)                                      */
#define SAI1_AIM_OVRUDRIE_Msk             (0x1UL)                   /*!< OVRUDRIE (Bitfield-Mask: 0x01)                        */
/* ==========================================================  ASR  ========================================================== */
#define SAI1_ASR_FLVL_Pos                 (16UL)                    /*!< FLVL (Bit 16)                                         */
#define SAI1_ASR_FLVL_Msk                 (0x70000UL)               /*!< FLVL (Bitfield-Mask: 0x07)                            */
#define SAI1_ASR_LFSDET_Pos               (6UL)                     /*!< LFSDET (Bit 6)                                        */
#define SAI1_ASR_LFSDET_Msk               (0x40UL)                  /*!< LFSDET (Bitfield-Mask: 0x01)                          */
#define SAI1_ASR_AFSDET_Pos               (5UL)                     /*!< AFSDET (Bit 5)                                        */
#define SAI1_ASR_AFSDET_Msk               (0x20UL)                  /*!< AFSDET (Bitfield-Mask: 0x01)                          */
#define SAI1_ASR_CNRDY_Pos                (4UL)                     /*!< CNRDY (Bit 4)                                         */
#define SAI1_ASR_CNRDY_Msk                (0x10UL)                  /*!< CNRDY (Bitfield-Mask: 0x01)                           */
#define SAI1_ASR_FREQ_Pos                 (3UL)                     /*!< FREQ (Bit 3)                                          */
#define SAI1_ASR_FREQ_Msk                 (0x8UL)                   /*!< FREQ (Bitfield-Mask: 0x01)                            */
#define SAI1_ASR_WCKCFG_Pos               (2UL)                     /*!< WCKCFG (Bit 2)                                        */
#define SAI1_ASR_WCKCFG_Msk               (0x4UL)                   /*!< WCKCFG (Bitfield-Mask: 0x01)                          */
#define SAI1_ASR_MUTEDET_Pos              (1UL)                     /*!< MUTEDET (Bit 1)                                       */
#define SAI1_ASR_MUTEDET_Msk              (0x2UL)                   /*!< MUTEDET (Bitfield-Mask: 0x01)                         */
#define SAI1_ASR_OVRUDR_Pos               (0UL)                     /*!< OVRUDR (Bit 0)                                        */
#define SAI1_ASR_OVRUDR_Msk               (0x1UL)                   /*!< OVRUDR (Bitfield-Mask: 0x01)                          */
/* ========================================================  ACLRFR  ========================================================= */
#define SAI1_ACLRFR_LFSDET_Pos            (6UL)                     /*!< LFSDET (Bit 6)                                        */
#define SAI1_ACLRFR_LFSDET_Msk            (0x40UL)                  /*!< LFSDET (Bitfield-Mask: 0x01)                          */
#define SAI1_ACLRFR_CAFSDET_Pos           (5UL)                     /*!< CAFSDET (Bit 5)                                       */
#define SAI1_ACLRFR_CAFSDET_Msk           (0x20UL)                  /*!< CAFSDET (Bitfield-Mask: 0x01)                         */
#define SAI1_ACLRFR_CNRDY_Pos             (4UL)                     /*!< CNRDY (Bit 4)                                         */
#define SAI1_ACLRFR_CNRDY_Msk             (0x10UL)                  /*!< CNRDY (Bitfield-Mask: 0x01)                           */
#define SAI1_ACLRFR_WCKCFG_Pos            (2UL)                     /*!< WCKCFG (Bit 2)                                        */
#define SAI1_ACLRFR_WCKCFG_Msk            (0x4UL)                   /*!< WCKCFG (Bitfield-Mask: 0x01)                          */
#define SAI1_ACLRFR_MUTEDET_Pos           (1UL)                     /*!< MUTEDET (Bit 1)                                       */
#define SAI1_ACLRFR_MUTEDET_Msk           (0x2UL)                   /*!< MUTEDET (Bitfield-Mask: 0x01)                         */
#define SAI1_ACLRFR_OVRUDR_Pos            (0UL)                     /*!< OVRUDR (Bit 0)                                        */
#define SAI1_ACLRFR_OVRUDR_Msk            (0x1UL)                   /*!< OVRUDR (Bitfield-Mask: 0x01)                          */
/* ==========================================================  ADR  ========================================================== */
#define SAI1_ADR_DATA_Pos                 (0UL)                     /*!< DATA (Bit 0)                                          */
#define SAI1_ADR_DATA_Msk                 (0xffffffffUL)            /*!< DATA (Bitfield-Mask: 0xffffffff)                      */
/* ==========================================================  GCR  ========================================================== */
#define SAI1_GCR_SYNCIN_Pos               (0UL)                     /*!< SYNCIN (Bit 0)                                        */
#define SAI1_GCR_SYNCIN_Msk               (0x3UL)                   /*!< SYNCIN (Bitfield-Mask: 0x03)                          */
#define SAI1_GCR_SYNCOUT_Pos              (4UL)                     /*!< SYNCOUT (Bit 4)                                       */
#define SAI1_GCR_SYNCOUT_Msk              (0x30UL)                  /*!< SYNCOUT (Bitfield-Mask: 0x03)                         */
