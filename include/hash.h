#include "core.h"


#define HASH_BASE                   0x50060400UL

#define HASH                        ((HASH_Type*)              HASH_BASE)


/* =========================================================================================================================== */
/* =========================================================================================================================== */
/* ================                                           HASH                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Hash processor (HASH)
  */

typedef struct {                                /*!< (@ 0x50060400) HASH Structure                                             */
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000000) control register                                           */
    
    struct {
            uint32_t            : 2;
      __OM  uint32_t INIT       : 1;            /*!< [2..2] Initialize message digest calculation                              */
      __IOM uint32_t DMAE       : 1;            /*!< [3..3] DMA enable                                                         */
      __IOM uint32_t DATATYPE   : 2;            /*!< [5..4] Data type selection                                                */
      __IOM uint32_t MODE       : 1;            /*!< [6..6] Mode selection                                                     */
      __IOM uint32_t ALGO0      : 1;            /*!< [7..7] Algorithm selection                                                */
      __IM  uint32_t NBW        : 4;            /*!< [11..8] Number of words already pushed                                    */
      __IM  uint32_t DINNE      : 1;            /*!< [12..12] DIN not empty                                                    */
      __IOM uint32_t MDMAT      : 1;            /*!< [13..13] Multiple DMA Transfers                                           */
            uint32_t            : 2;
      __IOM uint32_t LKEY       : 1;            /*!< [16..16] Long key selection                                               */
            uint32_t            : 1;
      __IOM uint32_t ALGO1      : 1;            /*!< [18..18] ALGO                                                             */
            uint32_t            : 13;
    } CR_b;
  } ;
  
  union {
    __IOM uint32_t DIN;                         /*!< (@ 0x00000004) data input register                                        */
    
    struct {
      __IOM uint32_t DATAIN     : 32;           /*!< [31..0] Data input                                                        */
    } DIN_b;
  } ;
  
  union {
    __IOM uint32_t STR;                         /*!< (@ 0x00000008) start register                                             */
    
    struct {
      __IOM uint32_t NBLW       : 5;            /*!< [4..0] Number of valid bits in the last word of the message               */
            uint32_t            : 3;
      __OM  uint32_t DCAL       : 1;            /*!< [8..8] Digest calculation                                                 */
            uint32_t            : 23;
    } STR_b;
  } ;
  
  union {
    __IM  uint32_t HR0;                         /*!< (@ 0x0000000C) digest registers                                           */
    
    struct {
      __IM  uint32_t H0         : 32;           /*!< [31..0] H0                                                                */
    } HR0_b;
  } ;
  
  union {
    __IM  uint32_t HR1;                         /*!< (@ 0x00000010) digest registers                                           */
    
    struct {
      __IM  uint32_t H1         : 32;           /*!< [31..0] H1                                                                */
    } HR1_b;
  } ;
  
  union {
    __IM  uint32_t HR2;                         /*!< (@ 0x00000014) digest registers                                           */
    
    struct {
      __IM  uint32_t H2         : 32;           /*!< [31..0] H2                                                                */
    } HR2_b;
  } ;
  
  union {
    __IM  uint32_t HR3;                         /*!< (@ 0x00000018) digest registers                                           */
    
    struct {
      __IM  uint32_t H3         : 32;           /*!< [31..0] H3                                                                */
    } HR3_b;
  } ;
  
  union {
    __IM  uint32_t HR4;                         /*!< (@ 0x0000001C) digest registers                                           */
    
    struct {
      __IM  uint32_t H4         : 32;           /*!< [31..0] H4                                                                */
    } HR4_b;
  } ;
  
  union {
    __IOM uint32_t IMR;                         /*!< (@ 0x00000020) interrupt enable register                                  */
    
    struct {
      __IOM uint32_t DINIE      : 1;            /*!< [0..0] Data input interrupt enable                                        */
      __IOM uint32_t DCIE       : 1;            /*!< [1..1] Digest calculation completion interrupt enable                     */
            uint32_t            : 30;
    } IMR_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000024) status register                                            */
    
    struct {
      __IOM uint32_t DINIS      : 1;            /*!< [0..0] Data input interrupt status                                        */
      __IOM uint32_t DCIS       : 1;            /*!< [1..1] Digest calculation completion interrupt status                     */
      __IM  uint32_t DMAS       : 1;            /*!< [2..2] DMA Status                                                         */
      __IM  uint32_t BUSY       : 1;            /*!< [3..3] Busy bit                                                           */
            uint32_t            : 28;
    } SR_b;
  } ;
  __IM  uint32_t  RESERVED[52];
  
  union {
    __IOM uint32_t CSR0;                        /*!< (@ 0x000000F8) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR0       : 32;           /*!< [31..0] CSR0                                                              */
    } CSR0_b;
  } ;
  
  union {
    __IOM uint32_t CSR1;                        /*!< (@ 0x000000FC) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR1       : 32;           /*!< [31..0] CSR1                                                              */
    } CSR1_b;
  } ;
  
  union {
    __IOM uint32_t CSR2;                        /*!< (@ 0x00000100) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR2       : 32;           /*!< [31..0] CSR2                                                              */
    } CSR2_b;
  } ;
  
  union {
    __IOM uint32_t CSR3;                        /*!< (@ 0x00000104) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR3       : 32;           /*!< [31..0] CSR3                                                              */
    } CSR3_b;
  } ;
  
  union {
    __IOM uint32_t CSR4;                        /*!< (@ 0x00000108) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR4       : 32;           /*!< [31..0] CSR4                                                              */
    } CSR4_b;
  } ;
  
  union {
    __IOM uint32_t CSR5;                        /*!< (@ 0x0000010C) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR5       : 32;           /*!< [31..0] CSR5                                                              */
    } CSR5_b;
  } ;
  
  union {
    __IOM uint32_t CSR6;                        /*!< (@ 0x00000110) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR6       : 32;           /*!< [31..0] CSR6                                                              */
    } CSR6_b;
  } ;
  
  union {
    __IOM uint32_t CSR7;                        /*!< (@ 0x00000114) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR7       : 32;           /*!< [31..0] CSR7                                                              */
    } CSR7_b;
  } ;
  
  union {
    __IOM uint32_t CSR8;                        /*!< (@ 0x00000118) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR8       : 32;           /*!< [31..0] CSR8                                                              */
    } CSR8_b;
  } ;
  
  union {
    __IOM uint32_t CSR9;                        /*!< (@ 0x0000011C) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR9       : 32;           /*!< [31..0] CSR9                                                              */
    } CSR9_b;
  } ;
  
  union {
    __IOM uint32_t CSR10;                       /*!< (@ 0x00000120) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR10      : 32;           /*!< [31..0] CSR10                                                             */
    } CSR10_b;
  } ;
  
  union {
    __IOM uint32_t CSR11;                       /*!< (@ 0x00000124) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR11      : 32;           /*!< [31..0] CSR11                                                             */
    } CSR11_b;
  } ;
  
  union {
    __IOM uint32_t CSR12;                       /*!< (@ 0x00000128) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR12      : 32;           /*!< [31..0] CSR12                                                             */
    } CSR12_b;
  } ;
  
  union {
    __IOM uint32_t CSR13;                       /*!< (@ 0x0000012C) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR13      : 32;           /*!< [31..0] CSR13                                                             */
    } CSR13_b;
  } ;
  
  union {
    __IOM uint32_t CSR14;                       /*!< (@ 0x00000130) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR14      : 32;           /*!< [31..0] CSR14                                                             */
    } CSR14_b;
  } ;
  
  union {
    __IOM uint32_t CSR15;                       /*!< (@ 0x00000134) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR15      : 32;           /*!< [31..0] CSR15                                                             */
    } CSR15_b;
  } ;
  
  union {
    __IOM uint32_t CSR16;                       /*!< (@ 0x00000138) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR16      : 32;           /*!< [31..0] CSR16                                                             */
    } CSR16_b;
  } ;
  
  union {
    __IOM uint32_t CSR17;                       /*!< (@ 0x0000013C) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR17      : 32;           /*!< [31..0] CSR17                                                             */
    } CSR17_b;
  } ;
  
  union {
    __IOM uint32_t CSR18;                       /*!< (@ 0x00000140) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR18      : 32;           /*!< [31..0] CSR18                                                             */
    } CSR18_b;
  } ;
  
  union {
    __IOM uint32_t CSR19;                       /*!< (@ 0x00000144) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR19      : 32;           /*!< [31..0] CSR19                                                             */
    } CSR19_b;
  } ;
  
  union {
    __IOM uint32_t CSR20;                       /*!< (@ 0x00000148) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR20      : 32;           /*!< [31..0] CSR20                                                             */
    } CSR20_b;
  } ;
  
  union {
    __IOM uint32_t CSR21;                       /*!< (@ 0x0000014C) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR21      : 32;           /*!< [31..0] CSR21                                                             */
    } CSR21_b;
  } ;
  
  union {
    __IOM uint32_t CSR22;                       /*!< (@ 0x00000150) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR22      : 32;           /*!< [31..0] CSR22                                                             */
    } CSR22_b;
  } ;
  
  union {
    __IOM uint32_t CSR23;                       /*!< (@ 0x00000154) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR23      : 32;           /*!< [31..0] CSR23                                                             */
    } CSR23_b;
  } ;
  
  union {
    __IOM uint32_t CSR24;                       /*!< (@ 0x00000158) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR24      : 32;           /*!< [31..0] CSR24                                                             */
    } CSR24_b;
  } ;
  
  union {
    __IOM uint32_t CSR25;                       /*!< (@ 0x0000015C) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR25      : 32;           /*!< [31..0] CSR25                                                             */
    } CSR25_b;
  } ;
  
  union {
    __IOM uint32_t CSR26;                       /*!< (@ 0x00000160) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR26      : 32;           /*!< [31..0] CSR26                                                             */
    } CSR26_b;
  } ;
  
  union {
    __IOM uint32_t CSR27;                       /*!< (@ 0x00000164) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR27      : 32;           /*!< [31..0] CSR27                                                             */
    } CSR27_b;
  } ;
  
  union {
    __IOM uint32_t CSR28;                       /*!< (@ 0x00000168) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR28      : 32;           /*!< [31..0] CSR28                                                             */
    } CSR28_b;
  } ;
  
  union {
    __IOM uint32_t CSR29;                       /*!< (@ 0x0000016C) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR29      : 32;           /*!< [31..0] CSR29                                                             */
    } CSR29_b;
  } ;
  
  union {
    __IOM uint32_t CSR30;                       /*!< (@ 0x00000170) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR30      : 32;           /*!< [31..0] CSR30                                                             */
    } CSR30_b;
  } ;
  
  union {
    __IOM uint32_t CSR31;                       /*!< (@ 0x00000174) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR31      : 32;           /*!< [31..0] CSR31                                                             */
    } CSR31_b;
  } ;
  
  union {
    __IOM uint32_t CSR32;                       /*!< (@ 0x00000178) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR32      : 32;           /*!< [31..0] CSR32                                                             */
    } CSR32_b;
  } ;
  
  union {
    __IOM uint32_t CSR33;                       /*!< (@ 0x0000017C) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR33      : 32;           /*!< [31..0] CSR33                                                             */
    } CSR33_b;
  } ;
  
  union {
    __IOM uint32_t CSR34;                       /*!< (@ 0x00000180) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR34      : 32;           /*!< [31..0] CSR34                                                             */
    } CSR34_b;
  } ;
  
  union {
    __IOM uint32_t CSR35;                       /*!< (@ 0x00000184) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR35      : 32;           /*!< [31..0] CSR35                                                             */
    } CSR35_b;
  } ;
  
  union {
    __IOM uint32_t CSR36;                       /*!< (@ 0x00000188) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR36      : 32;           /*!< [31..0] CSR36                                                             */
    } CSR36_b;
  } ;
  
  union {
    __IOM uint32_t CSR37;                       /*!< (@ 0x0000018C) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR37      : 32;           /*!< [31..0] CSR37                                                             */
    } CSR37_b;
  } ;
  
  union {
    __IOM uint32_t CSR38;                       /*!< (@ 0x00000190) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR38      : 32;           /*!< [31..0] CSR38                                                             */
    } CSR38_b;
  } ;
  
  union {
    __IOM uint32_t CSR39;                       /*!< (@ 0x00000194) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR39      : 32;           /*!< [31..0] CSR39                                                             */
    } CSR39_b;
  } ;
  
  union {
    __IOM uint32_t CSR40;                       /*!< (@ 0x00000198) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR40      : 32;           /*!< [31..0] CSR40                                                             */
    } CSR40_b;
  } ;
  
  union {
    __IOM uint32_t CSR41;                       /*!< (@ 0x0000019C) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR41      : 32;           /*!< [31..0] CSR41                                                             */
    } CSR41_b;
  } ;
  
  union {
    __IOM uint32_t CSR42;                       /*!< (@ 0x000001A0) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR42      : 32;           /*!< [31..0] CSR42                                                             */
    } CSR42_b;
  } ;
  
  union {
    __IOM uint32_t CSR43;                       /*!< (@ 0x000001A4) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR43      : 32;           /*!< [31..0] CSR43                                                             */
    } CSR43_b;
  } ;
  
  union {
    __IOM uint32_t CSR44;                       /*!< (@ 0x000001A8) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR44      : 32;           /*!< [31..0] CSR44                                                             */
    } CSR44_b;
  } ;
  
  union {
    __IOM uint32_t CSR45;                       /*!< (@ 0x000001AC) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR45      : 32;           /*!< [31..0] CSR45                                                             */
    } CSR45_b;
  } ;
  
  union {
    __IOM uint32_t CSR46;                       /*!< (@ 0x000001B0) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR46      : 32;           /*!< [31..0] CSR46                                                             */
    } CSR46_b;
  } ;
  
  union {
    __IOM uint32_t CSR47;                       /*!< (@ 0x000001B4) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR47      : 32;           /*!< [31..0] CSR47                                                             */
    } CSR47_b;
  } ;
  
  union {
    __IOM uint32_t CSR48;                       /*!< (@ 0x000001B8) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR48      : 32;           /*!< [31..0] CSR48                                                             */
    } CSR48_b;
  } ;
  
  union {
    __IOM uint32_t CSR49;                       /*!< (@ 0x000001BC) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR49      : 32;           /*!< [31..0] CSR49                                                             */
    } CSR49_b;
  } ;
  
  union {
    __IOM uint32_t CSR50;                       /*!< (@ 0x000001C0) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR50      : 32;           /*!< [31..0] CSR50                                                             */
    } CSR50_b;
  } ;
  
  union {
    __IOM uint32_t CSR51;                       /*!< (@ 0x000001C4) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR51      : 32;           /*!< [31..0] CSR51                                                             */
    } CSR51_b;
  } ;
  
  union {
    __IOM uint32_t CSR52;                       /*!< (@ 0x000001C8) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR52      : 32;           /*!< [31..0] CSR52                                                             */
    } CSR52_b;
  } ;
  
  union {
    __IOM uint32_t CSR53;                       /*!< (@ 0x000001CC) context swap registers                                     */
    
    struct {
      __IOM uint32_t CSR53      : 32;           /*!< [31..0] CSR53                                                             */
    } CSR53_b;
  } ;
  __IM  uint32_t  RESERVED1[80];
  
  union {
    __IM  uint32_t HASH_HR0;                    /*!< (@ 0x00000310) HASH digest register                                       */
    
    struct {
      __IM  uint32_t H0         : 32;           /*!< [31..0] H0                                                                */
    } HASH_HR0_b;
  } ;
  
  union {
    __IM  uint32_t HASH_HR1;                    /*!< (@ 0x00000314) read-only                                                  */
    
    struct {
      __IM  uint32_t H1         : 32;           /*!< [31..0] H1                                                                */
    } HASH_HR1_b;
  } ;
  
  union {
    __IM  uint32_t HASH_HR2;                    /*!< (@ 0x00000318) read-only                                                  */
    
    struct {
      __IM  uint32_t H2         : 32;           /*!< [31..0] H2                                                                */
    } HASH_HR2_b;
  } ;
  
  union {
    __IM  uint32_t HASH_HR3;                    /*!< (@ 0x0000031C) read-only                                                  */
    
    struct {
      __IM  uint32_t H3         : 32;           /*!< [31..0] H3                                                                */
    } HASH_HR3_b;
  } ;
  
  union {
    __IM  uint32_t HASH_HR4;                    /*!< (@ 0x00000320) read-only                                                  */
    
    struct {
      __IM  uint32_t H4         : 32;           /*!< [31..0] H4                                                                */
    } HASH_HR4_b;
  } ;
  
  union {
    __IM  uint32_t HASH_HR5;                    /*!< (@ 0x00000324) read-only                                                  */
    
    struct {
      __IM  uint32_t H5         : 32;           /*!< [31..0] H5                                                                */
    } HASH_HR5_b;
  } ;
  
  union {
    __IM  uint32_t HASH_HR6;                    /*!< (@ 0x00000328) read-only                                                  */
    
    struct {
      __IM  uint32_t H6         : 32;           /*!< [31..0] H6                                                                */
    } HASH_HR6_b;
  } ;
  
  union {
    __IM  uint32_t HASH_HR7;                    /*!< (@ 0x0000032C) read-only                                                  */
    
    struct {
      __IM  uint32_t H7         : 32;           /*!< [31..0] H7                                                                */
    } HASH_HR7_b;
  } ;
} HASH_Type;                                    /*!< Size = 816 (0x330)                                                        */



/* =========================================================================================================================== */
/* ================                                           HASH                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
#define HASH_CR_INIT_Pos                  (2UL)                     /*!< INIT (Bit 2)                                          */
#define HASH_CR_INIT_Msk                  (0x4UL)                   /*!< INIT (Bitfield-Mask: 0x01)                            */
#define HASH_CR_DMAE_Pos                  (3UL)                     /*!< DMAE (Bit 3)                                          */
#define HASH_CR_DMAE_Msk                  (0x8UL)                   /*!< DMAE (Bitfield-Mask: 0x01)                            */
#define HASH_CR_DATATYPE_Pos              (4UL)                     /*!< DATATYPE (Bit 4)                                      */
#define HASH_CR_DATATYPE_Msk              (0x30UL)                  /*!< DATATYPE (Bitfield-Mask: 0x03)                        */
#define HASH_CR_MODE_Pos                  (6UL)                     /*!< MODE (Bit 6)                                          */
#define HASH_CR_MODE_Msk                  (0x40UL)                  /*!< MODE (Bitfield-Mask: 0x01)                            */
#define HASH_CR_ALGO0_Pos                 (7UL)                     /*!< ALGO0 (Bit 7)                                         */
#define HASH_CR_ALGO0_Msk                 (0x80UL)                  /*!< ALGO0 (Bitfield-Mask: 0x01)                           */
#define HASH_CR_NBW_Pos                   (8UL)                     /*!< NBW (Bit 8)                                           */
#define HASH_CR_NBW_Msk                   (0xf00UL)                 /*!< NBW (Bitfield-Mask: 0x0f)                             */
#define HASH_CR_DINNE_Pos                 (12UL)                    /*!< DINNE (Bit 12)                                        */
#define HASH_CR_DINNE_Msk                 (0x1000UL)                /*!< DINNE (Bitfield-Mask: 0x01)                           */
#define HASH_CR_MDMAT_Pos                 (13UL)                    /*!< MDMAT (Bit 13)                                        */
#define HASH_CR_MDMAT_Msk                 (0x2000UL)                /*!< MDMAT (Bitfield-Mask: 0x01)                           */
#define HASH_CR_LKEY_Pos                  (16UL)                    /*!< LKEY (Bit 16)                                         */
#define HASH_CR_LKEY_Msk                  (0x10000UL)               /*!< LKEY (Bitfield-Mask: 0x01)                            */
#define HASH_CR_ALGO1_Pos                 (18UL)                    /*!< ALGO1 (Bit 18)                                        */
#define HASH_CR_ALGO1_Msk                 (0x40000UL)               /*!< ALGO1 (Bitfield-Mask: 0x01)                           */
/* ==========================================================  DIN  ========================================================== */
#define HASH_DIN_DATAIN_Pos               (0UL)                     /*!< DATAIN (Bit 0)                                        */
#define HASH_DIN_DATAIN_Msk               (0xffffffffUL)            /*!< DATAIN (Bitfield-Mask: 0xffffffff)                    */
/* ==========================================================  STR  ========================================================== */
#define HASH_STR_DCAL_Pos                 (8UL)                     /*!< DCAL (Bit 8)                                          */
#define HASH_STR_DCAL_Msk                 (0x100UL)                 /*!< DCAL (Bitfield-Mask: 0x01)                            */
#define HASH_STR_NBLW_Pos                 (0UL)                     /*!< NBLW (Bit 0)                                          */
#define HASH_STR_NBLW_Msk                 (0x1fUL)                  /*!< NBLW (Bitfield-Mask: 0x1f)                            */
/* ==========================================================  HR0  ========================================================== */
#define HASH_HR0_H0_Pos                   (0UL)                     /*!< H0 (Bit 0)                                            */
#define HASH_HR0_H0_Msk                   (0xffffffffUL)            /*!< H0 (Bitfield-Mask: 0xffffffff)                        */
/* ==========================================================  HR1  ========================================================== */
#define HASH_HR1_H1_Pos                   (0UL)                     /*!< H1 (Bit 0)                                            */
#define HASH_HR1_H1_Msk                   (0xffffffffUL)            /*!< H1 (Bitfield-Mask: 0xffffffff)                        */
/* ==========================================================  HR2  ========================================================== */
#define HASH_HR2_H2_Pos                   (0UL)                     /*!< H2 (Bit 0)                                            */
#define HASH_HR2_H2_Msk                   (0xffffffffUL)            /*!< H2 (Bitfield-Mask: 0xffffffff)                        */
/* ==========================================================  HR3  ========================================================== */
#define HASH_HR3_H3_Pos                   (0UL)                     /*!< H3 (Bit 0)                                            */
#define HASH_HR3_H3_Msk                   (0xffffffffUL)            /*!< H3 (Bitfield-Mask: 0xffffffff)                        */
/* ==========================================================  HR4  ========================================================== */
#define HASH_HR4_H4_Pos                   (0UL)                     /*!< H4 (Bit 0)                                            */
#define HASH_HR4_H4_Msk                   (0xffffffffUL)            /*!< H4 (Bitfield-Mask: 0xffffffff)                        */
/* ==========================================================  IMR  ========================================================== */
#define HASH_IMR_DCIE_Pos                 (1UL)                     /*!< DCIE (Bit 1)                                          */
#define HASH_IMR_DCIE_Msk                 (0x2UL)                   /*!< DCIE (Bitfield-Mask: 0x01)                            */
#define HASH_IMR_DINIE_Pos                (0UL)                     /*!< DINIE (Bit 0)                                         */
#define HASH_IMR_DINIE_Msk                (0x1UL)                   /*!< DINIE (Bitfield-Mask: 0x01)                           */
/* ==========================================================  SR  =========================================================== */
#define HASH_SR_BUSY_Pos                  (3UL)                     /*!< BUSY (Bit 3)                                          */
#define HASH_SR_BUSY_Msk                  (0x8UL)                   /*!< BUSY (Bitfield-Mask: 0x01)                            */
#define HASH_SR_DMAS_Pos                  (2UL)                     /*!< DMAS (Bit 2)                                          */
#define HASH_SR_DMAS_Msk                  (0x4UL)                   /*!< DMAS (Bitfield-Mask: 0x01)                            */
#define HASH_SR_DCIS_Pos                  (1UL)                     /*!< DCIS (Bit 1)                                          */
#define HASH_SR_DCIS_Msk                  (0x2UL)                   /*!< DCIS (Bitfield-Mask: 0x01)                            */
#define HASH_SR_DINIS_Pos                 (0UL)                     /*!< DINIS (Bit 0)                                         */
#define HASH_SR_DINIS_Msk                 (0x1UL)                   /*!< DINIS (Bitfield-Mask: 0x01)                           */
/* =========================================================  CSR0  ========================================================== */
#define HASH_CSR0_CSR0_Pos                (0UL)                     /*!< CSR0 (Bit 0)                                          */
#define HASH_CSR0_CSR0_Msk                (0xffffffffUL)            /*!< CSR0 (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  CSR1  ========================================================== */
#define HASH_CSR1_CSR1_Pos                (0UL)                     /*!< CSR1 (Bit 0)                                          */
#define HASH_CSR1_CSR1_Msk                (0xffffffffUL)            /*!< CSR1 (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  CSR2  ========================================================== */
#define HASH_CSR2_CSR2_Pos                (0UL)                     /*!< CSR2 (Bit 0)                                          */
#define HASH_CSR2_CSR2_Msk                (0xffffffffUL)            /*!< CSR2 (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  CSR3  ========================================================== */
#define HASH_CSR3_CSR3_Pos                (0UL)                     /*!< CSR3 (Bit 0)                                          */
#define HASH_CSR3_CSR3_Msk                (0xffffffffUL)            /*!< CSR3 (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  CSR4  ========================================================== */
#define HASH_CSR4_CSR4_Pos                (0UL)                     /*!< CSR4 (Bit 0)                                          */
#define HASH_CSR4_CSR4_Msk                (0xffffffffUL)            /*!< CSR4 (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  CSR5  ========================================================== */
#define HASH_CSR5_CSR5_Pos                (0UL)                     /*!< CSR5 (Bit 0)                                          */
#define HASH_CSR5_CSR5_Msk                (0xffffffffUL)            /*!< CSR5 (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  CSR6  ========================================================== */
#define HASH_CSR6_CSR6_Pos                (0UL)                     /*!< CSR6 (Bit 0)                                          */
#define HASH_CSR6_CSR6_Msk                (0xffffffffUL)            /*!< CSR6 (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  CSR7  ========================================================== */
#define HASH_CSR7_CSR7_Pos                (0UL)                     /*!< CSR7 (Bit 0)                                          */
#define HASH_CSR7_CSR7_Msk                (0xffffffffUL)            /*!< CSR7 (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  CSR8  ========================================================== */
#define HASH_CSR8_CSR8_Pos                (0UL)                     /*!< CSR8 (Bit 0)                                          */
#define HASH_CSR8_CSR8_Msk                (0xffffffffUL)            /*!< CSR8 (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  CSR9  ========================================================== */
#define HASH_CSR9_CSR9_Pos                (0UL)                     /*!< CSR9 (Bit 0)                                          */
#define HASH_CSR9_CSR9_Msk                (0xffffffffUL)            /*!< CSR9 (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  CSR10  ========================================================= */
#define HASH_CSR10_CSR10_Pos              (0UL)                     /*!< CSR10 (Bit 0)                                         */
#define HASH_CSR10_CSR10_Msk              (0xffffffffUL)            /*!< CSR10 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR11  ========================================================= */
#define HASH_CSR11_CSR11_Pos              (0UL)                     /*!< CSR11 (Bit 0)                                         */
#define HASH_CSR11_CSR11_Msk              (0xffffffffUL)            /*!< CSR11 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR12  ========================================================= */
#define HASH_CSR12_CSR12_Pos              (0UL)                     /*!< CSR12 (Bit 0)                                         */
#define HASH_CSR12_CSR12_Msk              (0xffffffffUL)            /*!< CSR12 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR13  ========================================================= */
#define HASH_CSR13_CSR13_Pos              (0UL)                     /*!< CSR13 (Bit 0)                                         */
#define HASH_CSR13_CSR13_Msk              (0xffffffffUL)            /*!< CSR13 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR14  ========================================================= */
#define HASH_CSR14_CSR14_Pos              (0UL)                     /*!< CSR14 (Bit 0)                                         */
#define HASH_CSR14_CSR14_Msk              (0xffffffffUL)            /*!< CSR14 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR15  ========================================================= */
#define HASH_CSR15_CSR15_Pos              (0UL)                     /*!< CSR15 (Bit 0)                                         */
#define HASH_CSR15_CSR15_Msk              (0xffffffffUL)            /*!< CSR15 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR16  ========================================================= */
#define HASH_CSR16_CSR16_Pos              (0UL)                     /*!< CSR16 (Bit 0)                                         */
#define HASH_CSR16_CSR16_Msk              (0xffffffffUL)            /*!< CSR16 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR17  ========================================================= */
#define HASH_CSR17_CSR17_Pos              (0UL)                     /*!< CSR17 (Bit 0)                                         */
#define HASH_CSR17_CSR17_Msk              (0xffffffffUL)            /*!< CSR17 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR18  ========================================================= */
#define HASH_CSR18_CSR18_Pos              (0UL)                     /*!< CSR18 (Bit 0)                                         */
#define HASH_CSR18_CSR18_Msk              (0xffffffffUL)            /*!< CSR18 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR19  ========================================================= */
#define HASH_CSR19_CSR19_Pos              (0UL)                     /*!< CSR19 (Bit 0)                                         */
#define HASH_CSR19_CSR19_Msk              (0xffffffffUL)            /*!< CSR19 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR20  ========================================================= */
#define HASH_CSR20_CSR20_Pos              (0UL)                     /*!< CSR20 (Bit 0)                                         */
#define HASH_CSR20_CSR20_Msk              (0xffffffffUL)            /*!< CSR20 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR21  ========================================================= */
#define HASH_CSR21_CSR21_Pos              (0UL)                     /*!< CSR21 (Bit 0)                                         */
#define HASH_CSR21_CSR21_Msk              (0xffffffffUL)            /*!< CSR21 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR22  ========================================================= */
#define HASH_CSR22_CSR22_Pos              (0UL)                     /*!< CSR22 (Bit 0)                                         */
#define HASH_CSR22_CSR22_Msk              (0xffffffffUL)            /*!< CSR22 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR23  ========================================================= */
#define HASH_CSR23_CSR23_Pos              (0UL)                     /*!< CSR23 (Bit 0)                                         */
#define HASH_CSR23_CSR23_Msk              (0xffffffffUL)            /*!< CSR23 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR24  ========================================================= */
#define HASH_CSR24_CSR24_Pos              (0UL)                     /*!< CSR24 (Bit 0)                                         */
#define HASH_CSR24_CSR24_Msk              (0xffffffffUL)            /*!< CSR24 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR25  ========================================================= */
#define HASH_CSR25_CSR25_Pos              (0UL)                     /*!< CSR25 (Bit 0)                                         */
#define HASH_CSR25_CSR25_Msk              (0xffffffffUL)            /*!< CSR25 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR26  ========================================================= */
#define HASH_CSR26_CSR26_Pos              (0UL)                     /*!< CSR26 (Bit 0)                                         */
#define HASH_CSR26_CSR26_Msk              (0xffffffffUL)            /*!< CSR26 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR27  ========================================================= */
#define HASH_CSR27_CSR27_Pos              (0UL)                     /*!< CSR27 (Bit 0)                                         */
#define HASH_CSR27_CSR27_Msk              (0xffffffffUL)            /*!< CSR27 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR28  ========================================================= */
#define HASH_CSR28_CSR28_Pos              (0UL)                     /*!< CSR28 (Bit 0)                                         */
#define HASH_CSR28_CSR28_Msk              (0xffffffffUL)            /*!< CSR28 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR29  ========================================================= */
#define HASH_CSR29_CSR29_Pos              (0UL)                     /*!< CSR29 (Bit 0)                                         */
#define HASH_CSR29_CSR29_Msk              (0xffffffffUL)            /*!< CSR29 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR30  ========================================================= */
#define HASH_CSR30_CSR30_Pos              (0UL)                     /*!< CSR30 (Bit 0)                                         */
#define HASH_CSR30_CSR30_Msk              (0xffffffffUL)            /*!< CSR30 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR31  ========================================================= */
#define HASH_CSR31_CSR31_Pos              (0UL)                     /*!< CSR31 (Bit 0)                                         */
#define HASH_CSR31_CSR31_Msk              (0xffffffffUL)            /*!< CSR31 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR32  ========================================================= */
#define HASH_CSR32_CSR32_Pos              (0UL)                     /*!< CSR32 (Bit 0)                                         */
#define HASH_CSR32_CSR32_Msk              (0xffffffffUL)            /*!< CSR32 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR33  ========================================================= */
#define HASH_CSR33_CSR33_Pos              (0UL)                     /*!< CSR33 (Bit 0)                                         */
#define HASH_CSR33_CSR33_Msk              (0xffffffffUL)            /*!< CSR33 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR34  ========================================================= */
#define HASH_CSR34_CSR34_Pos              (0UL)                     /*!< CSR34 (Bit 0)                                         */
#define HASH_CSR34_CSR34_Msk              (0xffffffffUL)            /*!< CSR34 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR35  ========================================================= */
#define HASH_CSR35_CSR35_Pos              (0UL)                     /*!< CSR35 (Bit 0)                                         */
#define HASH_CSR35_CSR35_Msk              (0xffffffffUL)            /*!< CSR35 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR36  ========================================================= */
#define HASH_CSR36_CSR36_Pos              (0UL)                     /*!< CSR36 (Bit 0)                                         */
#define HASH_CSR36_CSR36_Msk              (0xffffffffUL)            /*!< CSR36 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR37  ========================================================= */
#define HASH_CSR37_CSR37_Pos              (0UL)                     /*!< CSR37 (Bit 0)                                         */
#define HASH_CSR37_CSR37_Msk              (0xffffffffUL)            /*!< CSR37 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR38  ========================================================= */
#define HASH_CSR38_CSR38_Pos              (0UL)                     /*!< CSR38 (Bit 0)                                         */
#define HASH_CSR38_CSR38_Msk              (0xffffffffUL)            /*!< CSR38 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR39  ========================================================= */
#define HASH_CSR39_CSR39_Pos              (0UL)                     /*!< CSR39 (Bit 0)                                         */
#define HASH_CSR39_CSR39_Msk              (0xffffffffUL)            /*!< CSR39 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR40  ========================================================= */
#define HASH_CSR40_CSR40_Pos              (0UL)                     /*!< CSR40 (Bit 0)                                         */
#define HASH_CSR40_CSR40_Msk              (0xffffffffUL)            /*!< CSR40 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR41  ========================================================= */
#define HASH_CSR41_CSR41_Pos              (0UL)                     /*!< CSR41 (Bit 0)                                         */
#define HASH_CSR41_CSR41_Msk              (0xffffffffUL)            /*!< CSR41 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR42  ========================================================= */
#define HASH_CSR42_CSR42_Pos              (0UL)                     /*!< CSR42 (Bit 0)                                         */
#define HASH_CSR42_CSR42_Msk              (0xffffffffUL)            /*!< CSR42 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR43  ========================================================= */
#define HASH_CSR43_CSR43_Pos              (0UL)                     /*!< CSR43 (Bit 0)                                         */
#define HASH_CSR43_CSR43_Msk              (0xffffffffUL)            /*!< CSR43 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR44  ========================================================= */
#define HASH_CSR44_CSR44_Pos              (0UL)                     /*!< CSR44 (Bit 0)                                         */
#define HASH_CSR44_CSR44_Msk              (0xffffffffUL)            /*!< CSR44 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR45  ========================================================= */
#define HASH_CSR45_CSR45_Pos              (0UL)                     /*!< CSR45 (Bit 0)                                         */
#define HASH_CSR45_CSR45_Msk              (0xffffffffUL)            /*!< CSR45 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR46  ========================================================= */
#define HASH_CSR46_CSR46_Pos              (0UL)                     /*!< CSR46 (Bit 0)                                         */
#define HASH_CSR46_CSR46_Msk              (0xffffffffUL)            /*!< CSR46 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR47  ========================================================= */
#define HASH_CSR47_CSR47_Pos              (0UL)                     /*!< CSR47 (Bit 0)                                         */
#define HASH_CSR47_CSR47_Msk              (0xffffffffUL)            /*!< CSR47 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR48  ========================================================= */
#define HASH_CSR48_CSR48_Pos              (0UL)                     /*!< CSR48 (Bit 0)                                         */
#define HASH_CSR48_CSR48_Msk              (0xffffffffUL)            /*!< CSR48 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR49  ========================================================= */
#define HASH_CSR49_CSR49_Pos              (0UL)                     /*!< CSR49 (Bit 0)                                         */
#define HASH_CSR49_CSR49_Msk              (0xffffffffUL)            /*!< CSR49 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR50  ========================================================= */
#define HASH_CSR50_CSR50_Pos              (0UL)                     /*!< CSR50 (Bit 0)                                         */
#define HASH_CSR50_CSR50_Msk              (0xffffffffUL)            /*!< CSR50 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR51  ========================================================= */
#define HASH_CSR51_CSR51_Pos              (0UL)                     /*!< CSR51 (Bit 0)                                         */
#define HASH_CSR51_CSR51_Msk              (0xffffffffUL)            /*!< CSR51 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR52  ========================================================= */
#define HASH_CSR52_CSR52_Pos              (0UL)                     /*!< CSR52 (Bit 0)                                         */
#define HASH_CSR52_CSR52_Msk              (0xffffffffUL)            /*!< CSR52 (Bitfield-Mask: 0xffffffff)                     */
/* =========================================================  CSR53  ========================================================= */
#define HASH_CSR53_CSR53_Pos              (0UL)                     /*!< CSR53 (Bit 0)                                         */
#define HASH_CSR53_CSR53_Msk              (0xffffffffUL)            /*!< CSR53 (Bitfield-Mask: 0xffffffff)                     */
/* =======================================================  HASH_HR0  ======================================================== */
#define HASH_HASH_HR0_H0_Pos              (0UL)                     /*!< H0 (Bit 0)                                            */
#define HASH_HASH_HR0_H0_Msk              (0xffffffffUL)            /*!< H0 (Bitfield-Mask: 0xffffffff)                        */
/* =======================================================  HASH_HR1  ======================================================== */
#define HASH_HASH_HR1_H1_Pos              (0UL)                     /*!< H1 (Bit 0)                                            */
#define HASH_HASH_HR1_H1_Msk              (0xffffffffUL)            /*!< H1 (Bitfield-Mask: 0xffffffff)                        */
/* =======================================================  HASH_HR2  ======================================================== */
#define HASH_HASH_HR2_H2_Pos              (0UL)                     /*!< H2 (Bit 0)                                            */
#define HASH_HASH_HR2_H2_Msk              (0xffffffffUL)            /*!< H2 (Bitfield-Mask: 0xffffffff)                        */
/* =======================================================  HASH_HR3  ======================================================== */
#define HASH_HASH_HR3_H3_Pos              (0UL)                     /*!< H3 (Bit 0)                                            */
#define HASH_HASH_HR3_H3_Msk              (0xffffffffUL)            /*!< H3 (Bitfield-Mask: 0xffffffff)                        */
/* =======================================================  HASH_HR4  ======================================================== */
#define HASH_HASH_HR4_H4_Pos              (0UL)                     /*!< H4 (Bit 0)                                            */
#define HASH_HASH_HR4_H4_Msk              (0xffffffffUL)            /*!< H4 (Bitfield-Mask: 0xffffffff)                        */
/* =======================================================  HASH_HR5  ======================================================== */
#define HASH_HASH_HR5_H5_Pos              (0UL)                     /*!< H5 (Bit 0)                                            */
#define HASH_HASH_HR5_H5_Msk              (0xffffffffUL)            /*!< H5 (Bitfield-Mask: 0xffffffff)                        */
/* =======================================================  HASH_HR6  ======================================================== */
#define HASH_HASH_HR6_H6_Pos              (0UL)                     /*!< H6 (Bit 0)                                            */
#define HASH_HASH_HR6_H6_Msk              (0xffffffffUL)            /*!< H6 (Bitfield-Mask: 0xffffffff)                        */
/* =======================================================  HASH_HR7  ======================================================== */
#define HASH_HASH_HR7_H7_Pos              (0UL)                     /*!< H7 (Bit 0)                                            */
#define HASH_HASH_HR7_H7_Msk              (0xffffffffUL)            /*!< H7 (Bitfield-Mask: 0xffffffff)                        */
