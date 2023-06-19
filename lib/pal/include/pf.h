#include "core.h"

#define PF_BASE                     0xE000ED78UL
#define PF                          ((volatile PF_Type*)                PF_BASE)


/* =========================================================================================================================== */
/* ================                                            PF                                             ================ */
/* =========================================================================================================================== */


/**
  * @brief Processor features (PF)
  */

typedef struct {                                /*!< (@ 0xE000ED78) PF Structure                                               */
  
  union {
    __IM  uint32_t CLIDR;                       /*!< (@ 0x00000000) Cache Level ID register                                    */
    
    struct {
      __IM  uint32_t CL1        : 3;            /*!< [2..0] CL1                                                                */
      __IM  uint32_t CL2        : 3;            /*!< [5..3] CL2                                                                */
      __IM  uint32_t CL3        : 3;            /*!< [8..6] CL3                                                                */
      __IM  uint32_t CL4        : 3;            /*!< [11..9] CL4                                                               */
      __IM  uint32_t CL5        : 3;            /*!< [14..12] CL5                                                              */
      __IM  uint32_t CL6        : 3;            /*!< [17..15] CL6                                                              */
      __IM  uint32_t CL7        : 3;            /*!< [20..18] CL7                                                              */
      __IM  uint32_t LoUIS      : 3;            /*!< [23..21] LoUIS                                                            */
      __IM  uint32_t LoC        : 3;            /*!< [26..24] LoC                                                              */
      __IM  uint32_t LoU        : 3;            /*!< [29..27] LoU                                                              */
            uint32_t            : 2;
    } CLIDR_b;
  } ;
  
  union {
    __IM  uint32_t CTR;                         /*!< (@ 0x00000004) Cache Type register                                        */
    
    struct {
      __IM  uint32_t _IminLine  : 4;            /*!< [3..0] IminLine                                                           */
            uint32_t            : 12;
      __IM  uint32_t DMinLine   : 4;            /*!< [19..16] DMinLine                                                         */
      __IM  uint32_t ERG        : 4;            /*!< [23..20] ERG                                                              */
      __IM  uint32_t CWG        : 4;            /*!< [27..24] CWG                                                              */
            uint32_t            : 1;
      __IM  uint32_t Format     : 3;            /*!< [31..29] Format                                                           */
    } CTR_b;
  } ;
  
  union {
    __IM  uint32_t CCSIDR;                      /*!< (@ 0x00000008) Cache Size ID register                                     */
    
    struct {
      __IM  uint32_t LineSize   : 3;            /*!< [2..0] LineSize                                                           */
      __IM  uint32_t Associativity : 10;        /*!< [12..3] Associativity                                                     */
      __IM  uint32_t NumSets    : 15;           /*!< [27..13] NumSets                                                          */
      __IM  uint32_t WA         : 1;            /*!< [28..28] WA                                                               */
      __IM  uint32_t RA         : 1;            /*!< [29..29] RA                                                               */
      __IM  uint32_t WB         : 1;            /*!< [30..30] WB                                                               */
      __IM  uint32_t WT         : 1;            /*!< [31..31] WT                                                               */
    } CCSIDR_b;
  } ;
} PF_Type;                                      /*!< Size = 12 (0xc)                                                           */



/* =========================================================================================================================== */
/* ================                                            PF                                             ================ */
/* =========================================================================================================================== */

/* =========================================================  CLIDR  ========================================================= */
#define PF_CLIDR_CL1_Pos                  (0UL)                     /*!< CL1 (Bit 0)                                           */
#define PF_CLIDR_CL1_Msk                  (0x7UL)                   /*!< CL1 (Bitfield-Mask: 0x07)                             */
#define PF_CLIDR_CL2_Pos                  (3UL)                     /*!< CL2 (Bit 3)                                           */
#define PF_CLIDR_CL2_Msk                  (0x38UL)                  /*!< CL2 (Bitfield-Mask: 0x07)                             */
#define PF_CLIDR_CL3_Pos                  (6UL)                     /*!< CL3 (Bit 6)                                           */
#define PF_CLIDR_CL3_Msk                  (0x1c0UL)                 /*!< CL3 (Bitfield-Mask: 0x07)                             */
#define PF_CLIDR_CL4_Pos                  (9UL)                     /*!< CL4 (Bit 9)                                           */
#define PF_CLIDR_CL4_Msk                  (0xe00UL)                 /*!< CL4 (Bitfield-Mask: 0x07)                             */
#define PF_CLIDR_CL5_Pos                  (12UL)                    /*!< CL5 (Bit 12)                                          */
#define PF_CLIDR_CL5_Msk                  (0x7000UL)                /*!< CL5 (Bitfield-Mask: 0x07)                             */
#define PF_CLIDR_CL6_Pos                  (15UL)                    /*!< CL6 (Bit 15)                                          */
#define PF_CLIDR_CL6_Msk                  (0x38000UL)               /*!< CL6 (Bitfield-Mask: 0x07)                             */
#define PF_CLIDR_CL7_Pos                  (18UL)                    /*!< CL7 (Bit 18)                                          */
#define PF_CLIDR_CL7_Msk                  (0x1c0000UL)              /*!< CL7 (Bitfield-Mask: 0x07)                             */
#define PF_CLIDR_LoUIS_Pos                (21UL)                    /*!< LoUIS (Bit 21)                                        */
#define PF_CLIDR_LoUIS_Msk                (0xe00000UL)              /*!< LoUIS (Bitfield-Mask: 0x07)                           */
#define PF_CLIDR_LoC_Pos                  (24UL)                    /*!< LoC (Bit 24)                                          */
#define PF_CLIDR_LoC_Msk                  (0x7000000UL)             /*!< LoC (Bitfield-Mask: 0x07)                             */
#define PF_CLIDR_LoU_Pos                  (27UL)                    /*!< LoU (Bit 27)                                          */
#define PF_CLIDR_LoU_Msk                  (0x38000000UL)            /*!< LoU (Bitfield-Mask: 0x07)                             */
/* ==========================================================  CTR  ========================================================== */
#define PF_CTR__IminLine_Pos              (0UL)                     /*!< _IminLine (Bit 0)                                     */
#define PF_CTR__IminLine_Msk              (0xfUL)                   /*!< _IminLine (Bitfield-Mask: 0x0f)                       */
#define PF_CTR_DMinLine_Pos               (16UL)                    /*!< DMinLine (Bit 16)                                     */
#define PF_CTR_DMinLine_Msk               (0xf0000UL)               /*!< DMinLine (Bitfield-Mask: 0x0f)                        */
#define PF_CTR_ERG_Pos                    (20UL)                    /*!< ERG (Bit 20)                                          */
#define PF_CTR_ERG_Msk                    (0xf00000UL)              /*!< ERG (Bitfield-Mask: 0x0f)                             */
#define PF_CTR_CWG_Pos                    (24UL)                    /*!< CWG (Bit 24)                                          */
#define PF_CTR_CWG_Msk                    (0xf000000UL)             /*!< CWG (Bitfield-Mask: 0x0f)                             */
#define PF_CTR_Format_Pos                 (29UL)                    /*!< Format (Bit 29)                                       */
#define PF_CTR_Format_Msk                 (0xe0000000UL)            /*!< Format (Bitfield-Mask: 0x07)                          */
/* ========================================================  CCSIDR  ========================================================= */
#define PF_CCSIDR_LineSize_Pos            (0UL)                     /*!< LineSize (Bit 0)                                      */
#define PF_CCSIDR_LineSize_Msk            (0x7UL)                   /*!< LineSize (Bitfield-Mask: 0x07)                        */
#define PF_CCSIDR_Associativity_Pos       (3UL)                     /*!< Associativity (Bit 3)                                 */
#define PF_CCSIDR_Associativity_Msk       (0x1ff8UL)                /*!< Associativity (Bitfield-Mask: 0x3ff)                  */
#define PF_CCSIDR_NumSets_Pos             (13UL)                    /*!< NumSets (Bit 13)                                      */
#define PF_CCSIDR_NumSets_Msk             (0xfffe000UL)             /*!< NumSets (Bitfield-Mask: 0x7fff)                       */
#define PF_CCSIDR_WA_Pos                  (28UL)                    /*!< WA (Bit 28)                                           */
#define PF_CCSIDR_WA_Msk                  (0x10000000UL)            /*!< WA (Bitfield-Mask: 0x01)                              */
#define PF_CCSIDR_RA_Pos                  (29UL)                    /*!< RA (Bit 29)                                           */
#define PF_CCSIDR_RA_Msk                  (0x20000000UL)            /*!< RA (Bitfield-Mask: 0x01)                              */
#define PF_CCSIDR_WB_Pos                  (30UL)                    /*!< WB (Bit 30)                                           */
#define PF_CCSIDR_WB_Msk                  (0x40000000UL)            /*!< WB (Bitfield-Mask: 0x01)                              */
#define PF_CCSIDR_WT_Pos                  (31UL)                    /*!< WT (Bit 31)                                           */
#define PF_CCSIDR_WT_Msk                  (0x80000000UL)            /*!< WT (Bitfield-Mask: 0x01)                              */

