#include "core.h"


#define FMC_BASE                    0xA0000000UL

#define FMC                         ((volatile FMC_Type*)               FMC_BASE)


/* =========================================================================================================================== */
/* ================                                            FMC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Flexible memory controller (FMC)
  */

typedef struct {                                /*!< (@ 0xA0000000) FMC Structure                                              */
  
  union {
    __IOM uint32_t BCR1;                        /*!< (@ 0x00000000) SRAM/NOR-Flash chip-select control register 1              */
    
    struct {
      __IOM uint32_t MBKEN      : 1;            /*!< [0..0] MBKEN                                                              */
      __IOM uint32_t MUXEN      : 1;            /*!< [1..1] MUXEN                                                              */
      __IOM uint32_t MTYP       : 2;            /*!< [3..2] MTYP                                                               */
      __IOM uint32_t MWID       : 2;            /*!< [5..4] MWID                                                               */
      __IOM uint32_t FACCEN     : 1;            /*!< [6..6] FACCEN                                                             */
            uint32_t            : 1;
      __IOM uint32_t BURSTEN    : 1;            /*!< [8..8] BURSTEN                                                            */
      __IOM uint32_t WAITPOL    : 1;            /*!< [9..9] WAITPOL                                                            */
            uint32_t            : 1;
      __IOM uint32_t WAITCFG    : 1;            /*!< [11..11] WAITCFG                                                          */
      __IOM uint32_t WREN       : 1;            /*!< [12..12] WREN                                                             */
      __IOM uint32_t WAITEN     : 1;            /*!< [13..13] WAITEN                                                           */
      __IOM uint32_t EXTMOD     : 1;            /*!< [14..14] EXTMOD                                                           */
      __IOM uint32_t ASYNCWAIT  : 1;            /*!< [15..15] ASYNCWAIT                                                        */
            uint32_t            : 3;
      __IOM uint32_t CBURSTRW   : 1;            /*!< [19..19] CBURSTRW                                                         */
      __IOM uint32_t CCLKEN     : 1;            /*!< [20..20] CCLKEN                                                           */
            uint32_t            : 11;
    } BCR1_b;
  } ;
  
  union {
    __IOM uint32_t BTR1;                        /*!< (@ 0x00000004) SRAM/NOR-Flash chip-select timing register 1               */
    
    struct {
      __IOM uint32_t ADDSET     : 4;            /*!< [3..0] ADDSET                                                             */
      __IOM uint32_t ADDHLD     : 4;            /*!< [7..4] ADDHLD                                                             */
      __IOM uint32_t DATAST     : 8;            /*!< [15..8] DATAST                                                            */
      __IOM uint32_t BUSTURN    : 4;            /*!< [19..16] BUSTURN                                                          */
      __IOM uint32_t CLKDIV     : 4;            /*!< [23..20] CLKDIV                                                           */
      __IOM uint32_t DATLAT     : 4;            /*!< [27..24] DATLAT                                                           */
      __IOM uint32_t ACCMOD     : 2;            /*!< [29..28] ACCMOD                                                           */
            uint32_t            : 2;
    } BTR1_b;
  } ;
  
  union {
    __IOM uint32_t BCR2;                        /*!< (@ 0x00000008) SRAM/NOR-Flash chip-select control register 2              */
    
    struct {
      __IOM uint32_t MBKEN      : 1;            /*!< [0..0] MBKEN                                                              */
      __IOM uint32_t MUXEN      : 1;            /*!< [1..1] MUXEN                                                              */
      __IOM uint32_t MTYP       : 2;            /*!< [3..2] MTYP                                                               */
      __IOM uint32_t MWID       : 2;            /*!< [5..4] MWID                                                               */
      __IOM uint32_t FACCEN     : 1;            /*!< [6..6] FACCEN                                                             */
            uint32_t            : 1;
      __IOM uint32_t BURSTEN    : 1;            /*!< [8..8] BURSTEN                                                            */
      __IOM uint32_t WAITPOL    : 1;            /*!< [9..9] WAITPOL                                                            */
      __IOM uint32_t WRAPMOD    : 1;            /*!< [10..10] WRAPMOD                                                          */
      __IOM uint32_t WAITCFG    : 1;            /*!< [11..11] WAITCFG                                                          */
      __IOM uint32_t WREN       : 1;            /*!< [12..12] WREN                                                             */
      __IOM uint32_t WAITEN     : 1;            /*!< [13..13] WAITEN                                                           */
      __IOM uint32_t EXTMOD     : 1;            /*!< [14..14] EXTMOD                                                           */
      __IOM uint32_t ASYNCWAIT  : 1;            /*!< [15..15] ASYNCWAIT                                                        */
            uint32_t            : 3;
      __IOM uint32_t CBURSTRW   : 1;            /*!< [19..19] CBURSTRW                                                         */
            uint32_t            : 12;
    } BCR2_b;
  } ;
  
  union {
    __IOM uint32_t BTR2;                        /*!< (@ 0x0000000C) SRAM/NOR-Flash chip-select timing register 2               */
    
    struct {
      __IOM uint32_t ADDSET     : 4;            /*!< [3..0] ADDSET                                                             */
      __IOM uint32_t ADDHLD     : 4;            /*!< [7..4] ADDHLD                                                             */
      __IOM uint32_t DATAST     : 8;            /*!< [15..8] DATAST                                                            */
      __IOM uint32_t BUSTURN    : 4;            /*!< [19..16] BUSTURN                                                          */
      __IOM uint32_t CLKDIV     : 4;            /*!< [23..20] CLKDIV                                                           */
      __IOM uint32_t DATLAT     : 4;            /*!< [27..24] DATLAT                                                           */
      __IOM uint32_t ACCMOD     : 2;            /*!< [29..28] ACCMOD                                                           */
            uint32_t            : 2;
    } BTR2_b;
  } ;
  
  union {
    __IOM uint32_t BCR3;                        /*!< (@ 0x00000010) SRAM/NOR-Flash chip-select control register 3              */
    
    struct {
      __IOM uint32_t MBKEN      : 1;            /*!< [0..0] MBKEN                                                              */
      __IOM uint32_t MUXEN      : 1;            /*!< [1..1] MUXEN                                                              */
      __IOM uint32_t MTYP       : 2;            /*!< [3..2] MTYP                                                               */
      __IOM uint32_t MWID       : 2;            /*!< [5..4] MWID                                                               */
      __IOM uint32_t FACCEN     : 1;            /*!< [6..6] FACCEN                                                             */
            uint32_t            : 1;
      __IOM uint32_t BURSTEN    : 1;            /*!< [8..8] BURSTEN                                                            */
      __IOM uint32_t WAITPOL    : 1;            /*!< [9..9] WAITPOL                                                            */
      __IOM uint32_t WRAPMOD    : 1;            /*!< [10..10] WRAPMOD                                                          */
      __IOM uint32_t WAITCFG    : 1;            /*!< [11..11] WAITCFG                                                          */
      __IOM uint32_t WREN       : 1;            /*!< [12..12] WREN                                                             */
      __IOM uint32_t WAITEN     : 1;            /*!< [13..13] WAITEN                                                           */
      __IOM uint32_t EXTMOD     : 1;            /*!< [14..14] EXTMOD                                                           */
      __IOM uint32_t ASYNCWAIT  : 1;            /*!< [15..15] ASYNCWAIT                                                        */
            uint32_t            : 3;
      __IOM uint32_t CBURSTRW   : 1;            /*!< [19..19] CBURSTRW                                                         */
            uint32_t            : 12;
    } BCR3_b;
  } ;
  
  union {
    __IOM uint32_t BTR3;                        /*!< (@ 0x00000014) SRAM/NOR-Flash chip-select timing register 3               */
    
    struct {
      __IOM uint32_t ADDSET     : 4;            /*!< [3..0] ADDSET                                                             */
      __IOM uint32_t ADDHLD     : 4;            /*!< [7..4] ADDHLD                                                             */
      __IOM uint32_t DATAST     : 8;            /*!< [15..8] DATAST                                                            */
      __IOM uint32_t BUSTURN    : 4;            /*!< [19..16] BUSTURN                                                          */
      __IOM uint32_t CLKDIV     : 4;            /*!< [23..20] CLKDIV                                                           */
      __IOM uint32_t DATLAT     : 4;            /*!< [27..24] DATLAT                                                           */
      __IOM uint32_t ACCMOD     : 2;            /*!< [29..28] ACCMOD                                                           */
            uint32_t            : 2;
    } BTR3_b;
  } ;
  
  union {
    __IOM uint32_t BCR4;                        /*!< (@ 0x00000018) SRAM/NOR-Flash chip-select control register 4              */
    
    struct {
      __IOM uint32_t MBKEN      : 1;            /*!< [0..0] MBKEN                                                              */
      __IOM uint32_t MUXEN      : 1;            /*!< [1..1] MUXEN                                                              */
      __IOM uint32_t MTYP       : 2;            /*!< [3..2] MTYP                                                               */
      __IOM uint32_t MWID       : 2;            /*!< [5..4] MWID                                                               */
      __IOM uint32_t FACCEN     : 1;            /*!< [6..6] FACCEN                                                             */
            uint32_t            : 1;
      __IOM uint32_t BURSTEN    : 1;            /*!< [8..8] BURSTEN                                                            */
      __IOM uint32_t WAITPOL    : 1;            /*!< [9..9] WAITPOL                                                            */
      __IOM uint32_t WRAPMOD    : 1;            /*!< [10..10] WRAPMOD                                                          */
      __IOM uint32_t WAITCFG    : 1;            /*!< [11..11] WAITCFG                                                          */
      __IOM uint32_t WREN       : 1;            /*!< [12..12] WREN                                                             */
      __IOM uint32_t WAITEN     : 1;            /*!< [13..13] WAITEN                                                           */
      __IOM uint32_t EXTMOD     : 1;            /*!< [14..14] EXTMOD                                                           */
      __IOM uint32_t ASYNCWAIT  : 1;            /*!< [15..15] ASYNCWAIT                                                        */
            uint32_t            : 3;
      __IOM uint32_t CBURSTRW   : 1;            /*!< [19..19] CBURSTRW                                                         */
            uint32_t            : 12;
    } BCR4_b;
  } ;
  
  union {
    __IOM uint32_t BTR4;                        /*!< (@ 0x0000001C) SRAM/NOR-Flash chip-select timing register 4               */
    
    struct {
      __IOM uint32_t ADDSET     : 4;            /*!< [3..0] ADDSET                                                             */
      __IOM uint32_t ADDHLD     : 4;            /*!< [7..4] ADDHLD                                                             */
      __IOM uint32_t DATAST     : 8;            /*!< [15..8] DATAST                                                            */
      __IOM uint32_t BUSTURN    : 4;            /*!< [19..16] BUSTURN                                                          */
      __IOM uint32_t CLKDIV     : 4;            /*!< [23..20] CLKDIV                                                           */
      __IOM uint32_t DATLAT     : 4;            /*!< [27..24] DATLAT                                                           */
      __IOM uint32_t ACCMOD     : 2;            /*!< [29..28] ACCMOD                                                           */
            uint32_t            : 2;
    } BTR4_b;
  } ;
  __IM  uint32_t  RESERVED[24];
  
  union {
    __IOM uint32_t PCR;                         /*!< (@ 0x00000080) PC Card/NAND Flash control register                        */
    
    struct {
            uint32_t            : 1;
      __IOM uint32_t PWAITEN    : 1;            /*!< [1..1] PWAITEN                                                            */
      __IOM uint32_t PBKEN      : 1;            /*!< [2..2] PBKEN                                                              */
      __IOM uint32_t PTYP       : 1;            /*!< [3..3] PTYP                                                               */
      __IOM uint32_t PWID       : 2;            /*!< [5..4] PWID                                                               */
      __IOM uint32_t ECCEN      : 1;            /*!< [6..6] ECCEN                                                              */
            uint32_t            : 2;
      __IOM uint32_t TCLR       : 4;            /*!< [12..9] TCLR                                                              */
      __IOM uint32_t TAR        : 4;            /*!< [16..13] TAR                                                              */
      __IOM uint32_t ECCPS      : 3;            /*!< [19..17] ECCPS                                                            */
            uint32_t            : 12;
    } PCR_b;
  } ;
  
  union {
    __IOM uint32_t SR;                          /*!< (@ 0x00000084) FIFO status and interrupt register                         */
    
    struct {
      __IOM uint32_t IRS        : 1;            /*!< [0..0] IRS                                                                */
      __IOM uint32_t ILS        : 1;            /*!< [1..1] ILS                                                                */
      __IOM uint32_t IFS        : 1;            /*!< [2..2] IFS                                                                */
      __IOM uint32_t IREN       : 1;            /*!< [3..3] IREN                                                               */
      __IOM uint32_t ILEN       : 1;            /*!< [4..4] ILEN                                                               */
      __IOM uint32_t IFEN       : 1;            /*!< [5..5] IFEN                                                               */
      __IM  uint32_t FEMPT      : 1;            /*!< [6..6] FEMPT                                                              */
            uint32_t            : 25;
    } SR_b;
  } ;
  
  union {
    __IOM uint32_t PMEM;                        /*!< (@ 0x00000088) Common memory space timing register                        */
    
    struct {
      __IOM uint32_t MEMSETx    : 8;            /*!< [7..0] MEMSETx                                                            */
      __IOM uint32_t MEMWAITx   : 8;            /*!< [15..8] MEMWAITx                                                          */
      __IOM uint32_t MEMHOLDx   : 8;            /*!< [23..16] MEMHOLDx                                                         */
      __IOM uint32_t MEMHIZx    : 8;            /*!< [31..24] MEMHIZx                                                          */
    } PMEM_b;
  } ;
  
  union {
    __IOM uint32_t PATT;                        /*!< (@ 0x0000008C) Attribute memory space timing register                     */
    
    struct {
      __IOM uint32_t ATTSETx    : 8;            /*!< [7..0] ATTSETx                                                            */
      __IOM uint32_t ATTWAITx   : 8;            /*!< [15..8] ATTWAITx                                                          */
      __IOM uint32_t ATTHOLDx   : 8;            /*!< [23..16] ATTHOLDx                                                         */
      __IOM uint32_t ATTHIZx    : 8;            /*!< [31..24] ATTHIZx                                                          */
    } PATT_b;
  } ;
  __IM  uint32_t  RESERVED1;
  
  union {
    __IM  uint32_t ECCR;                        /*!< (@ 0x00000094) ECC result register                                        */
    
    struct {
      __IM  uint32_t ECCx       : 32;           /*!< [31..0] ECCx                                                              */
    } ECCR_b;
  } ;
  __IM  uint32_t  RESERVED2[27];
  
  union {
    __IOM uint32_t BWTR1;                       /*!< (@ 0x00000104) SRAM/NOR-Flash write timing registers 1                    */
    
    struct {
      __IOM uint32_t ADDSET     : 4;            /*!< [3..0] ADDSET                                                             */
      __IOM uint32_t ADDHLD     : 4;            /*!< [7..4] ADDHLD                                                             */
      __IOM uint32_t DATAST     : 8;            /*!< [15..8] DATAST                                                            */
            uint32_t            : 4;
      __IOM uint32_t CLKDIV     : 4;            /*!< [23..20] CLKDIV                                                           */
      __IOM uint32_t DATLAT     : 4;            /*!< [27..24] DATLAT                                                           */
      __IOM uint32_t ACCMOD     : 2;            /*!< [29..28] ACCMOD                                                           */
            uint32_t            : 2;
    } BWTR1_b;
  } ;
  __IM  uint32_t  RESERVED3;
  
  union {
    __IOM uint32_t BWTR2;                       /*!< (@ 0x0000010C) SRAM/NOR-Flash write timing registers 2                    */
    
    struct {
      __IOM uint32_t ADDSET     : 4;            /*!< [3..0] ADDSET                                                             */
      __IOM uint32_t ADDHLD     : 4;            /*!< [7..4] ADDHLD                                                             */
      __IOM uint32_t DATAST     : 8;            /*!< [15..8] DATAST                                                            */
            uint32_t            : 4;
      __IOM uint32_t CLKDIV     : 4;            /*!< [23..20] CLKDIV                                                           */
      __IOM uint32_t DATLAT     : 4;            /*!< [27..24] DATLAT                                                           */
      __IOM uint32_t ACCMOD     : 2;            /*!< [29..28] ACCMOD                                                           */
            uint32_t            : 2;
    } BWTR2_b;
  } ;
  __IM  uint32_t  RESERVED4;
  
  union {
    __IOM uint32_t BWTR3;                       /*!< (@ 0x00000114) SRAM/NOR-Flash write timing registers 3                    */
    
    struct {
      __IOM uint32_t ADDSET     : 4;            /*!< [3..0] ADDSET                                                             */
      __IOM uint32_t ADDHLD     : 4;            /*!< [7..4] ADDHLD                                                             */
      __IOM uint32_t DATAST     : 8;            /*!< [15..8] DATAST                                                            */
            uint32_t            : 4;
      __IOM uint32_t CLKDIV     : 4;            /*!< [23..20] CLKDIV                                                           */
      __IOM uint32_t DATLAT     : 4;            /*!< [27..24] DATLAT                                                           */
      __IOM uint32_t ACCMOD     : 2;            /*!< [29..28] ACCMOD                                                           */
            uint32_t            : 2;
    } BWTR3_b;
  } ;
  __IM  uint32_t  RESERVED5;
  
  union {
    __IOM uint32_t BWTR4;                       /*!< (@ 0x0000011C) SRAM/NOR-Flash write timing registers 4                    */
    
    struct {
      __IOM uint32_t ADDSET     : 4;            /*!< [3..0] ADDSET                                                             */
      __IOM uint32_t ADDHLD     : 4;            /*!< [7..4] ADDHLD                                                             */
      __IOM uint32_t DATAST     : 8;            /*!< [15..8] DATAST                                                            */
            uint32_t            : 4;
      __IOM uint32_t CLKDIV     : 4;            /*!< [23..20] CLKDIV                                                           */
      __IOM uint32_t DATLAT     : 4;            /*!< [27..24] DATLAT                                                           */
      __IOM uint32_t ACCMOD     : 2;            /*!< [29..28] ACCMOD                                                           */
            uint32_t            : 2;
    } BWTR4_b;
  } ;
  __IM  uint32_t  RESERVED6[8];
  
  union {
    __IOM uint32_t SDCR1;                       /*!< (@ 0x00000140) SDRAM Control Register 1                                   */
    
    struct {
      __IOM uint32_t NC         : 2;            /*!< [1..0] Number of column address bits                                      */
      __IOM uint32_t NR         : 2;            /*!< [3..2] Number of row address bits                                         */
      __IOM uint32_t MWID       : 2;            /*!< [5..4] Memory data bus width                                              */
      __IOM uint32_t NB         : 1;            /*!< [6..6] Number of internal banks                                           */
      __IOM uint32_t CAS        : 2;            /*!< [8..7] CAS latency                                                        */
      __IOM uint32_t WP         : 1;            /*!< [9..9] Write protection                                                   */
      __IOM uint32_t SDCLK      : 2;            /*!< [11..10] SDRAM clock configuration                                        */
      __IOM uint32_t RBURST     : 1;            /*!< [12..12] Burst read                                                       */
      __IOM uint32_t RPIPE      : 2;            /*!< [14..13] Read pipe                                                        */
            uint32_t            : 17;
    } SDCR1_b;
  } ;
  
  union {
    __IOM uint32_t SDCR2;                       /*!< (@ 0x00000144) SDRAM Control Register 2                                   */
    
    struct {
      __IOM uint32_t NC         : 2;            /*!< [1..0] Number of column address bits                                      */
      __IOM uint32_t NR         : 2;            /*!< [3..2] Number of row address bits                                         */
      __IOM uint32_t MWID       : 2;            /*!< [5..4] Memory data bus width                                              */
      __IOM uint32_t NB         : 1;            /*!< [6..6] Number of internal banks                                           */
      __IOM uint32_t CAS        : 2;            /*!< [8..7] CAS latency                                                        */
      __IOM uint32_t WP         : 1;            /*!< [9..9] Write protection                                                   */
      __IOM uint32_t SDCLK      : 2;            /*!< [11..10] SDRAM clock configuration                                        */
      __IOM uint32_t RBURST     : 1;            /*!< [12..12] Burst read                                                       */
      __IOM uint32_t RPIPE      : 2;            /*!< [14..13] Read pipe                                                        */
            uint32_t            : 17;
    } SDCR2_b;
  } ;
  
  union {
    __IOM uint32_t SDTR1;                       /*!< (@ 0x00000148) SDRAM Timing register 1                                    */
    
    struct {
      __IOM uint32_t TMRD       : 4;            /*!< [3..0] Load Mode Register to Active                                       */
      __IOM uint32_t TXSR       : 4;            /*!< [7..4] Exit self-refresh delay                                            */
      __IOM uint32_t TRAS       : 4;            /*!< [11..8] Self refresh time                                                 */
      __IOM uint32_t TRC        : 4;            /*!< [15..12] Row cycle delay                                                  */
      __IOM uint32_t TWR        : 4;            /*!< [19..16] Recovery delay                                                   */
      __IOM uint32_t TRP        : 4;            /*!< [23..20] Row precharge delay                                              */
      __IOM uint32_t TRCD       : 4;            /*!< [27..24] Row to column delay                                              */
            uint32_t            : 4;
    } SDTR1_b;
  } ;
  
  union {
    __IOM uint32_t SDTR2;                       /*!< (@ 0x0000014C) SDRAM Timing register 2                                    */
    
    struct {
      __IOM uint32_t TMRD       : 4;            /*!< [3..0] Load Mode Register to Active                                       */
      __IOM uint32_t TXSR       : 4;            /*!< [7..4] Exit self-refresh delay                                            */
      __IOM uint32_t TRAS       : 4;            /*!< [11..8] Self refresh time                                                 */
      __IOM uint32_t TRC        : 4;            /*!< [15..12] Row cycle delay                                                  */
      __IOM uint32_t TWR        : 4;            /*!< [19..16] Recovery delay                                                   */
      __IOM uint32_t TRP        : 4;            /*!< [23..20] Row precharge delay                                              */
      __IOM uint32_t TRCD       : 4;            /*!< [27..24] Row to column delay                                              */
            uint32_t            : 4;
    } SDTR2_b;
  } ;
  
  union {
    __IOM uint32_t SDCMR;                       /*!< (@ 0x00000150) SDRAM Command Mode register                                */
    
    struct {
      __OM  uint32_t MODE       : 3;            /*!< [2..0] Command mode                                                       */
      __OM  uint32_t CTB2       : 1;            /*!< [3..3] Command target bank 2                                              */
      __OM  uint32_t CTB1       : 1;            /*!< [4..4] Command target bank 1                                              */
      __IOM uint32_t NRFS       : 4;            /*!< [8..5] Number of Auto-refresh                                             */
      __IOM uint32_t MRD        : 13;           /*!< [21..9] Mode Register definition                                          */
            uint32_t            : 10;
    } SDCMR_b;
  } ;
  
  union {
    __IOM uint32_t SDRTR;                       /*!< (@ 0x00000154) SDRAM Refresh Timer register                               */
    
    struct {
      __OM  uint32_t CRE        : 1;            /*!< [0..0] Clear Refresh error flag                                           */
      __IOM uint32_t COUNT      : 13;           /*!< [13..1] Refresh Timer Count                                               */
      __IOM uint32_t REIE       : 1;            /*!< [14..14] RES Interrupt Enable                                             */
            uint32_t            : 17;
    } SDRTR_b;
  } ;
  
  union {
    __IM  uint32_t SDSR;                        /*!< (@ 0x00000158) SDRAM Status register                                      */
    
    struct {
      __IM  uint32_t RE         : 1;            /*!< [0..0] Refresh error flag                                                 */
      __IM  uint32_t MODES1     : 2;            /*!< [2..1] Status Mode for Bank 1                                             */
      __IM  uint32_t MODES2     : 2;            /*!< [4..3] Status Mode for Bank 2                                             */
      __IM  uint32_t BUSY       : 1;            /*!< [5..5] Busy status                                                        */
            uint32_t            : 26;
    } SDSR_b;
  } ;
} FMC_Type;                                     /*!< Size = 348 (0x15c)                                                        */



/* =========================================================================================================================== */
/* ================                                            FMC                                            ================ */
/* =========================================================================================================================== */

/* =========================================================  BCR1  ========================================================== */
#define FMC_BCR1_CCLKEN_Pos               (20UL)                    /*!< CCLKEN (Bit 20)                                       */
#define FMC_BCR1_CCLKEN_Msk               (0x100000UL)              /*!< CCLKEN (Bitfield-Mask: 0x01)                          */
#define FMC_BCR1_CBURSTRW_Pos             (19UL)                    /*!< CBURSTRW (Bit 19)                                     */
#define FMC_BCR1_CBURSTRW_Msk             (0x80000UL)               /*!< CBURSTRW (Bitfield-Mask: 0x01)                        */
#define FMC_BCR1_ASYNCWAIT_Pos            (15UL)                    /*!< ASYNCWAIT (Bit 15)                                    */
#define FMC_BCR1_ASYNCWAIT_Msk            (0x8000UL)                /*!< ASYNCWAIT (Bitfield-Mask: 0x01)                       */
#define FMC_BCR1_EXTMOD_Pos               (14UL)                    /*!< EXTMOD (Bit 14)                                       */
#define FMC_BCR1_EXTMOD_Msk               (0x4000UL)                /*!< EXTMOD (Bitfield-Mask: 0x01)                          */
#define FMC_BCR1_WAITEN_Pos               (13UL)                    /*!< WAITEN (Bit 13)                                       */
#define FMC_BCR1_WAITEN_Msk               (0x2000UL)                /*!< WAITEN (Bitfield-Mask: 0x01)                          */
#define FMC_BCR1_WREN_Pos                 (12UL)                    /*!< WREN (Bit 12)                                         */
#define FMC_BCR1_WREN_Msk                 (0x1000UL)                /*!< WREN (Bitfield-Mask: 0x01)                            */
#define FMC_BCR1_WAITCFG_Pos              (11UL)                    /*!< WAITCFG (Bit 11)                                      */
#define FMC_BCR1_WAITCFG_Msk              (0x800UL)                 /*!< WAITCFG (Bitfield-Mask: 0x01)                         */
#define FMC_BCR1_WAITPOL_Pos              (9UL)                     /*!< WAITPOL (Bit 9)                                       */
#define FMC_BCR1_WAITPOL_Msk              (0x200UL)                 /*!< WAITPOL (Bitfield-Mask: 0x01)                         */
#define FMC_BCR1_BURSTEN_Pos              (8UL)                     /*!< BURSTEN (Bit 8)                                       */
#define FMC_BCR1_BURSTEN_Msk              (0x100UL)                 /*!< BURSTEN (Bitfield-Mask: 0x01)                         */
#define FMC_BCR1_FACCEN_Pos               (6UL)                     /*!< FACCEN (Bit 6)                                        */
#define FMC_BCR1_FACCEN_Msk               (0x40UL)                  /*!< FACCEN (Bitfield-Mask: 0x01)                          */
#define FMC_BCR1_MWID_Pos                 (4UL)                     /*!< MWID (Bit 4)                                          */
#define FMC_BCR1_MWID_Msk                 (0x30UL)                  /*!< MWID (Bitfield-Mask: 0x03)                            */
#define FMC_BCR1_MTYP_Pos                 (2UL)                     /*!< MTYP (Bit 2)                                          */
#define FMC_BCR1_MTYP_Msk                 (0xcUL)                   /*!< MTYP (Bitfield-Mask: 0x03)                            */
#define FMC_BCR1_MUXEN_Pos                (1UL)                     /*!< MUXEN (Bit 1)                                         */
#define FMC_BCR1_MUXEN_Msk                (0x2UL)                   /*!< MUXEN (Bitfield-Mask: 0x01)                           */
#define FMC_BCR1_MBKEN_Pos                (0UL)                     /*!< MBKEN (Bit 0)                                         */
#define FMC_BCR1_MBKEN_Msk                (0x1UL)                   /*!< MBKEN (Bitfield-Mask: 0x01)                           */
/* =========================================================  BTR1  ========================================================== */
#define FMC_BTR1_ACCMOD_Pos               (28UL)                    /*!< ACCMOD (Bit 28)                                       */
#define FMC_BTR1_ACCMOD_Msk               (0x30000000UL)            /*!< ACCMOD (Bitfield-Mask: 0x03)                          */
#define FMC_BTR1_DATLAT_Pos               (24UL)                    /*!< DATLAT (Bit 24)                                       */
#define FMC_BTR1_DATLAT_Msk               (0xf000000UL)             /*!< DATLAT (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR1_CLKDIV_Pos               (20UL)                    /*!< CLKDIV (Bit 20)                                       */
#define FMC_BTR1_CLKDIV_Msk               (0xf00000UL)              /*!< CLKDIV (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR1_BUSTURN_Pos              (16UL)                    /*!< BUSTURN (Bit 16)                                      */
#define FMC_BTR1_BUSTURN_Msk              (0xf0000UL)               /*!< BUSTURN (Bitfield-Mask: 0x0f)                         */
#define FMC_BTR1_DATAST_Pos               (8UL)                     /*!< DATAST (Bit 8)                                        */
#define FMC_BTR1_DATAST_Msk               (0xff00UL)                /*!< DATAST (Bitfield-Mask: 0xff)                          */
#define FMC_BTR1_ADDHLD_Pos               (4UL)                     /*!< ADDHLD (Bit 4)                                        */
#define FMC_BTR1_ADDHLD_Msk               (0xf0UL)                  /*!< ADDHLD (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR1_ADDSET_Pos               (0UL)                     /*!< ADDSET (Bit 0)                                        */
#define FMC_BTR1_ADDSET_Msk               (0xfUL)                   /*!< ADDSET (Bitfield-Mask: 0x0f)                          */
/* =========================================================  BCR2  ========================================================== */
#define FMC_BCR2_CBURSTRW_Pos             (19UL)                    /*!< CBURSTRW (Bit 19)                                     */
#define FMC_BCR2_CBURSTRW_Msk             (0x80000UL)               /*!< CBURSTRW (Bitfield-Mask: 0x01)                        */
#define FMC_BCR2_ASYNCWAIT_Pos            (15UL)                    /*!< ASYNCWAIT (Bit 15)                                    */
#define FMC_BCR2_ASYNCWAIT_Msk            (0x8000UL)                /*!< ASYNCWAIT (Bitfield-Mask: 0x01)                       */
#define FMC_BCR2_EXTMOD_Pos               (14UL)                    /*!< EXTMOD (Bit 14)                                       */
#define FMC_BCR2_EXTMOD_Msk               (0x4000UL)                /*!< EXTMOD (Bitfield-Mask: 0x01)                          */
#define FMC_BCR2_WAITEN_Pos               (13UL)                    /*!< WAITEN (Bit 13)                                       */
#define FMC_BCR2_WAITEN_Msk               (0x2000UL)                /*!< WAITEN (Bitfield-Mask: 0x01)                          */
#define FMC_BCR2_WREN_Pos                 (12UL)                    /*!< WREN (Bit 12)                                         */
#define FMC_BCR2_WREN_Msk                 (0x1000UL)                /*!< WREN (Bitfield-Mask: 0x01)                            */
#define FMC_BCR2_WAITCFG_Pos              (11UL)                    /*!< WAITCFG (Bit 11)                                      */
#define FMC_BCR2_WAITCFG_Msk              (0x800UL)                 /*!< WAITCFG (Bitfield-Mask: 0x01)                         */
#define FMC_BCR2_WRAPMOD_Pos              (10UL)                    /*!< WRAPMOD (Bit 10)                                      */
#define FMC_BCR2_WRAPMOD_Msk              (0x400UL)                 /*!< WRAPMOD (Bitfield-Mask: 0x01)                         */
#define FMC_BCR2_WAITPOL_Pos              (9UL)                     /*!< WAITPOL (Bit 9)                                       */
#define FMC_BCR2_WAITPOL_Msk              (0x200UL)                 /*!< WAITPOL (Bitfield-Mask: 0x01)                         */
#define FMC_BCR2_BURSTEN_Pos              (8UL)                     /*!< BURSTEN (Bit 8)                                       */
#define FMC_BCR2_BURSTEN_Msk              (0x100UL)                 /*!< BURSTEN (Bitfield-Mask: 0x01)                         */
#define FMC_BCR2_FACCEN_Pos               (6UL)                     /*!< FACCEN (Bit 6)                                        */
#define FMC_BCR2_FACCEN_Msk               (0x40UL)                  /*!< FACCEN (Bitfield-Mask: 0x01)                          */
#define FMC_BCR2_MWID_Pos                 (4UL)                     /*!< MWID (Bit 4)                                          */
#define FMC_BCR2_MWID_Msk                 (0x30UL)                  /*!< MWID (Bitfield-Mask: 0x03)                            */
#define FMC_BCR2_MTYP_Pos                 (2UL)                     /*!< MTYP (Bit 2)                                          */
#define FMC_BCR2_MTYP_Msk                 (0xcUL)                   /*!< MTYP (Bitfield-Mask: 0x03)                            */
#define FMC_BCR2_MUXEN_Pos                (1UL)                     /*!< MUXEN (Bit 1)                                         */
#define FMC_BCR2_MUXEN_Msk                (0x2UL)                   /*!< MUXEN (Bitfield-Mask: 0x01)                           */
#define FMC_BCR2_MBKEN_Pos                (0UL)                     /*!< MBKEN (Bit 0)                                         */
#define FMC_BCR2_MBKEN_Msk                (0x1UL)                   /*!< MBKEN (Bitfield-Mask: 0x01)                           */
/* =========================================================  BTR2  ========================================================== */
#define FMC_BTR2_ACCMOD_Pos               (28UL)                    /*!< ACCMOD (Bit 28)                                       */
#define FMC_BTR2_ACCMOD_Msk               (0x30000000UL)            /*!< ACCMOD (Bitfield-Mask: 0x03)                          */
#define FMC_BTR2_DATLAT_Pos               (24UL)                    /*!< DATLAT (Bit 24)                                       */
#define FMC_BTR2_DATLAT_Msk               (0xf000000UL)             /*!< DATLAT (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR2_CLKDIV_Pos               (20UL)                    /*!< CLKDIV (Bit 20)                                       */
#define FMC_BTR2_CLKDIV_Msk               (0xf00000UL)              /*!< CLKDIV (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR2_BUSTURN_Pos              (16UL)                    /*!< BUSTURN (Bit 16)                                      */
#define FMC_BTR2_BUSTURN_Msk              (0xf0000UL)               /*!< BUSTURN (Bitfield-Mask: 0x0f)                         */
#define FMC_BTR2_DATAST_Pos               (8UL)                     /*!< DATAST (Bit 8)                                        */
#define FMC_BTR2_DATAST_Msk               (0xff00UL)                /*!< DATAST (Bitfield-Mask: 0xff)                          */
#define FMC_BTR2_ADDHLD_Pos               (4UL)                     /*!< ADDHLD (Bit 4)                                        */
#define FMC_BTR2_ADDHLD_Msk               (0xf0UL)                  /*!< ADDHLD (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR2_ADDSET_Pos               (0UL)                     /*!< ADDSET (Bit 0)                                        */
#define FMC_BTR2_ADDSET_Msk               (0xfUL)                   /*!< ADDSET (Bitfield-Mask: 0x0f)                          */
/* =========================================================  BCR3  ========================================================== */
#define FMC_BCR3_CBURSTRW_Pos             (19UL)                    /*!< CBURSTRW (Bit 19)                                     */
#define FMC_BCR3_CBURSTRW_Msk             (0x80000UL)               /*!< CBURSTRW (Bitfield-Mask: 0x01)                        */
#define FMC_BCR3_ASYNCWAIT_Pos            (15UL)                    /*!< ASYNCWAIT (Bit 15)                                    */
#define FMC_BCR3_ASYNCWAIT_Msk            (0x8000UL)                /*!< ASYNCWAIT (Bitfield-Mask: 0x01)                       */
#define FMC_BCR3_EXTMOD_Pos               (14UL)                    /*!< EXTMOD (Bit 14)                                       */
#define FMC_BCR3_EXTMOD_Msk               (0x4000UL)                /*!< EXTMOD (Bitfield-Mask: 0x01)                          */
#define FMC_BCR3_WAITEN_Pos               (13UL)                    /*!< WAITEN (Bit 13)                                       */
#define FMC_BCR3_WAITEN_Msk               (0x2000UL)                /*!< WAITEN (Bitfield-Mask: 0x01)                          */
#define FMC_BCR3_WREN_Pos                 (12UL)                    /*!< WREN (Bit 12)                                         */
#define FMC_BCR3_WREN_Msk                 (0x1000UL)                /*!< WREN (Bitfield-Mask: 0x01)                            */
#define FMC_BCR3_WAITCFG_Pos              (11UL)                    /*!< WAITCFG (Bit 11)                                      */
#define FMC_BCR3_WAITCFG_Msk              (0x800UL)                 /*!< WAITCFG (Bitfield-Mask: 0x01)                         */
#define FMC_BCR3_WRAPMOD_Pos              (10UL)                    /*!< WRAPMOD (Bit 10)                                      */
#define FMC_BCR3_WRAPMOD_Msk              (0x400UL)                 /*!< WRAPMOD (Bitfield-Mask: 0x01)                         */
#define FMC_BCR3_WAITPOL_Pos              (9UL)                     /*!< WAITPOL (Bit 9)                                       */
#define FMC_BCR3_WAITPOL_Msk              (0x200UL)                 /*!< WAITPOL (Bitfield-Mask: 0x01)                         */
#define FMC_BCR3_BURSTEN_Pos              (8UL)                     /*!< BURSTEN (Bit 8)                                       */
#define FMC_BCR3_BURSTEN_Msk              (0x100UL)                 /*!< BURSTEN (Bitfield-Mask: 0x01)                         */
#define FMC_BCR3_FACCEN_Pos               (6UL)                     /*!< FACCEN (Bit 6)                                        */
#define FMC_BCR3_FACCEN_Msk               (0x40UL)                  /*!< FACCEN (Bitfield-Mask: 0x01)                          */
#define FMC_BCR3_MWID_Pos                 (4UL)                     /*!< MWID (Bit 4)                                          */
#define FMC_BCR3_MWID_Msk                 (0x30UL)                  /*!< MWID (Bitfield-Mask: 0x03)                            */
#define FMC_BCR3_MTYP_Pos                 (2UL)                     /*!< MTYP (Bit 2)                                          */
#define FMC_BCR3_MTYP_Msk                 (0xcUL)                   /*!< MTYP (Bitfield-Mask: 0x03)                            */
#define FMC_BCR3_MUXEN_Pos                (1UL)                     /*!< MUXEN (Bit 1)                                         */
#define FMC_BCR3_MUXEN_Msk                (0x2UL)                   /*!< MUXEN (Bitfield-Mask: 0x01)                           */
#define FMC_BCR3_MBKEN_Pos                (0UL)                     /*!< MBKEN (Bit 0)                                         */
#define FMC_BCR3_MBKEN_Msk                (0x1UL)                   /*!< MBKEN (Bitfield-Mask: 0x01)                           */
/* =========================================================  BTR3  ========================================================== */
#define FMC_BTR3_ACCMOD_Pos               (28UL)                    /*!< ACCMOD (Bit 28)                                       */
#define FMC_BTR3_ACCMOD_Msk               (0x30000000UL)            /*!< ACCMOD (Bitfield-Mask: 0x03)                          */
#define FMC_BTR3_DATLAT_Pos               (24UL)                    /*!< DATLAT (Bit 24)                                       */
#define FMC_BTR3_DATLAT_Msk               (0xf000000UL)             /*!< DATLAT (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR3_CLKDIV_Pos               (20UL)                    /*!< CLKDIV (Bit 20)                                       */
#define FMC_BTR3_CLKDIV_Msk               (0xf00000UL)              /*!< CLKDIV (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR3_BUSTURN_Pos              (16UL)                    /*!< BUSTURN (Bit 16)                                      */
#define FMC_BTR3_BUSTURN_Msk              (0xf0000UL)               /*!< BUSTURN (Bitfield-Mask: 0x0f)                         */
#define FMC_BTR3_DATAST_Pos               (8UL)                     /*!< DATAST (Bit 8)                                        */
#define FMC_BTR3_DATAST_Msk               (0xff00UL)                /*!< DATAST (Bitfield-Mask: 0xff)                          */
#define FMC_BTR3_ADDHLD_Pos               (4UL)                     /*!< ADDHLD (Bit 4)                                        */
#define FMC_BTR3_ADDHLD_Msk               (0xf0UL)                  /*!< ADDHLD (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR3_ADDSET_Pos               (0UL)                     /*!< ADDSET (Bit 0)                                        */
#define FMC_BTR3_ADDSET_Msk               (0xfUL)                   /*!< ADDSET (Bitfield-Mask: 0x0f)                          */
/* =========================================================  BCR4  ========================================================== */
#define FMC_BCR4_CBURSTRW_Pos             (19UL)                    /*!< CBURSTRW (Bit 19)                                     */
#define FMC_BCR4_CBURSTRW_Msk             (0x80000UL)               /*!< CBURSTRW (Bitfield-Mask: 0x01)                        */
#define FMC_BCR4_ASYNCWAIT_Pos            (15UL)                    /*!< ASYNCWAIT (Bit 15)                                    */
#define FMC_BCR4_ASYNCWAIT_Msk            (0x8000UL)                /*!< ASYNCWAIT (Bitfield-Mask: 0x01)                       */
#define FMC_BCR4_EXTMOD_Pos               (14UL)                    /*!< EXTMOD (Bit 14)                                       */
#define FMC_BCR4_EXTMOD_Msk               (0x4000UL)                /*!< EXTMOD (Bitfield-Mask: 0x01)                          */
#define FMC_BCR4_WAITEN_Pos               (13UL)                    /*!< WAITEN (Bit 13)                                       */
#define FMC_BCR4_WAITEN_Msk               (0x2000UL)                /*!< WAITEN (Bitfield-Mask: 0x01)                          */
#define FMC_BCR4_WREN_Pos                 (12UL)                    /*!< WREN (Bit 12)                                         */
#define FMC_BCR4_WREN_Msk                 (0x1000UL)                /*!< WREN (Bitfield-Mask: 0x01)                            */
#define FMC_BCR4_WAITCFG_Pos              (11UL)                    /*!< WAITCFG (Bit 11)                                      */
#define FMC_BCR4_WAITCFG_Msk              (0x800UL)                 /*!< WAITCFG (Bitfield-Mask: 0x01)                         */
#define FMC_BCR4_WRAPMOD_Pos              (10UL)                    /*!< WRAPMOD (Bit 10)                                      */
#define FMC_BCR4_WRAPMOD_Msk              (0x400UL)                 /*!< WRAPMOD (Bitfield-Mask: 0x01)                         */
#define FMC_BCR4_WAITPOL_Pos              (9UL)                     /*!< WAITPOL (Bit 9)                                       */
#define FMC_BCR4_WAITPOL_Msk              (0x200UL)                 /*!< WAITPOL (Bitfield-Mask: 0x01)                         */
#define FMC_BCR4_BURSTEN_Pos              (8UL)                     /*!< BURSTEN (Bit 8)                                       */
#define FMC_BCR4_BURSTEN_Msk              (0x100UL)                 /*!< BURSTEN (Bitfield-Mask: 0x01)                         */
#define FMC_BCR4_FACCEN_Pos               (6UL)                     /*!< FACCEN (Bit 6)                                        */
#define FMC_BCR4_FACCEN_Msk               (0x40UL)                  /*!< FACCEN (Bitfield-Mask: 0x01)                          */
#define FMC_BCR4_MWID_Pos                 (4UL)                     /*!< MWID (Bit 4)                                          */
#define FMC_BCR4_MWID_Msk                 (0x30UL)                  /*!< MWID (Bitfield-Mask: 0x03)                            */
#define FMC_BCR4_MTYP_Pos                 (2UL)                     /*!< MTYP (Bit 2)                                          */
#define FMC_BCR4_MTYP_Msk                 (0xcUL)                   /*!< MTYP (Bitfield-Mask: 0x03)                            */
#define FMC_BCR4_MUXEN_Pos                (1UL)                     /*!< MUXEN (Bit 1)                                         */
#define FMC_BCR4_MUXEN_Msk                (0x2UL)                   /*!< MUXEN (Bitfield-Mask: 0x01)                           */
#define FMC_BCR4_MBKEN_Pos                (0UL)                     /*!< MBKEN (Bit 0)                                         */
#define FMC_BCR4_MBKEN_Msk                (0x1UL)                   /*!< MBKEN (Bitfield-Mask: 0x01)                           */
/* =========================================================  BTR4  ========================================================== */
#define FMC_BTR4_ACCMOD_Pos               (28UL)                    /*!< ACCMOD (Bit 28)                                       */
#define FMC_BTR4_ACCMOD_Msk               (0x30000000UL)            /*!< ACCMOD (Bitfield-Mask: 0x03)                          */
#define FMC_BTR4_DATLAT_Pos               (24UL)                    /*!< DATLAT (Bit 24)                                       */
#define FMC_BTR4_DATLAT_Msk               (0xf000000UL)             /*!< DATLAT (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR4_CLKDIV_Pos               (20UL)                    /*!< CLKDIV (Bit 20)                                       */
#define FMC_BTR4_CLKDIV_Msk               (0xf00000UL)              /*!< CLKDIV (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR4_BUSTURN_Pos              (16UL)                    /*!< BUSTURN (Bit 16)                                      */
#define FMC_BTR4_BUSTURN_Msk              (0xf0000UL)               /*!< BUSTURN (Bitfield-Mask: 0x0f)                         */
#define FMC_BTR4_DATAST_Pos               (8UL)                     /*!< DATAST (Bit 8)                                        */
#define FMC_BTR4_DATAST_Msk               (0xff00UL)                /*!< DATAST (Bitfield-Mask: 0xff)                          */
#define FMC_BTR4_ADDHLD_Pos               (4UL)                     /*!< ADDHLD (Bit 4)                                        */
#define FMC_BTR4_ADDHLD_Msk               (0xf0UL)                  /*!< ADDHLD (Bitfield-Mask: 0x0f)                          */
#define FMC_BTR4_ADDSET_Pos               (0UL)                     /*!< ADDSET (Bit 0)                                        */
#define FMC_BTR4_ADDSET_Msk               (0xfUL)                   /*!< ADDSET (Bitfield-Mask: 0x0f)                          */
/* ==========================================================  PCR  ========================================================== */
#define FMC_PCR_ECCPS_Pos                 (17UL)                    /*!< ECCPS (Bit 17)                                        */
#define FMC_PCR_ECCPS_Msk                 (0xe0000UL)               /*!< ECCPS (Bitfield-Mask: 0x07)                           */
#define FMC_PCR_TAR_Pos                   (13UL)                    /*!< TAR (Bit 13)                                          */
#define FMC_PCR_TAR_Msk                   (0x1e000UL)               /*!< TAR (Bitfield-Mask: 0x0f)                             */
#define FMC_PCR_TCLR_Pos                  (9UL)                     /*!< TCLR (Bit 9)                                          */
#define FMC_PCR_TCLR_Msk                  (0x1e00UL)                /*!< TCLR (Bitfield-Mask: 0x0f)                            */
#define FMC_PCR_ECCEN_Pos                 (6UL)                     /*!< ECCEN (Bit 6)                                         */
#define FMC_PCR_ECCEN_Msk                 (0x40UL)                  /*!< ECCEN (Bitfield-Mask: 0x01)                           */
#define FMC_PCR_PWID_Pos                  (4UL)                     /*!< PWID (Bit 4)                                          */
#define FMC_PCR_PWID_Msk                  (0x30UL)                  /*!< PWID (Bitfield-Mask: 0x03)                            */
#define FMC_PCR_PTYP_Pos                  (3UL)                     /*!< PTYP (Bit 3)                                          */
#define FMC_PCR_PTYP_Msk                  (0x8UL)                   /*!< PTYP (Bitfield-Mask: 0x01)                            */
#define FMC_PCR_PBKEN_Pos                 (2UL)                     /*!< PBKEN (Bit 2)                                         */
#define FMC_PCR_PBKEN_Msk                 (0x4UL)                   /*!< PBKEN (Bitfield-Mask: 0x01)                           */
#define FMC_PCR_PWAITEN_Pos               (1UL)                     /*!< PWAITEN (Bit 1)                                       */
#define FMC_PCR_PWAITEN_Msk               (0x2UL)                   /*!< PWAITEN (Bitfield-Mask: 0x01)                         */
/* ==========================================================  SR  =========================================================== */
#define FMC_SR_FEMPT_Pos                  (6UL)                     /*!< FEMPT (Bit 6)                                         */
#define FMC_SR_FEMPT_Msk                  (0x40UL)                  /*!< FEMPT (Bitfield-Mask: 0x01)                           */
#define FMC_SR_IFEN_Pos                   (5UL)                     /*!< IFEN (Bit 5)                                          */
#define FMC_SR_IFEN_Msk                   (0x20UL)                  /*!< IFEN (Bitfield-Mask: 0x01)                            */
#define FMC_SR_ILEN_Pos                   (4UL)                     /*!< ILEN (Bit 4)                                          */
#define FMC_SR_ILEN_Msk                   (0x10UL)                  /*!< ILEN (Bitfield-Mask: 0x01)                            */
#define FMC_SR_IREN_Pos                   (3UL)                     /*!< IREN (Bit 3)                                          */
#define FMC_SR_IREN_Msk                   (0x8UL)                   /*!< IREN (Bitfield-Mask: 0x01)                            */
#define FMC_SR_IFS_Pos                    (2UL)                     /*!< IFS (Bit 2)                                           */
#define FMC_SR_IFS_Msk                    (0x4UL)                   /*!< IFS (Bitfield-Mask: 0x01)                             */
#define FMC_SR_ILS_Pos                    (1UL)                     /*!< ILS (Bit 1)                                           */
#define FMC_SR_ILS_Msk                    (0x2UL)                   /*!< ILS (Bitfield-Mask: 0x01)                             */
#define FMC_SR_IRS_Pos                    (0UL)                     /*!< IRS (Bit 0)                                           */
#define FMC_SR_IRS_Msk                    (0x1UL)                   /*!< IRS (Bitfield-Mask: 0x01)                             */
/* =========================================================  PMEM  ========================================================== */
#define FMC_PMEM_MEMHIZx_Pos              (24UL)                    /*!< MEMHIZx (Bit 24)                                      */
#define FMC_PMEM_MEMHIZx_Msk              (0xff000000UL)            /*!< MEMHIZx (Bitfield-Mask: 0xff)                         */
#define FMC_PMEM_MEMHOLDx_Pos             (16UL)                    /*!< MEMHOLDx (Bit 16)                                     */
#define FMC_PMEM_MEMHOLDx_Msk             (0xff0000UL)              /*!< MEMHOLDx (Bitfield-Mask: 0xff)                        */
#define FMC_PMEM_MEMWAITx_Pos             (8UL)                     /*!< MEMWAITx (Bit 8)                                      */
#define FMC_PMEM_MEMWAITx_Msk             (0xff00UL)                /*!< MEMWAITx (Bitfield-Mask: 0xff)                        */
#define FMC_PMEM_MEMSETx_Pos              (0UL)                     /*!< MEMSETx (Bit 0)                                       */
#define FMC_PMEM_MEMSETx_Msk              (0xffUL)                  /*!< MEMSETx (Bitfield-Mask: 0xff)                         */
/* =========================================================  PATT  ========================================================== */
#define FMC_PATT_ATTHIZx_Pos              (24UL)                    /*!< ATTHIZx (Bit 24)                                      */
#define FMC_PATT_ATTHIZx_Msk              (0xff000000UL)            /*!< ATTHIZx (Bitfield-Mask: 0xff)                         */
#define FMC_PATT_ATTHOLDx_Pos             (16UL)                    /*!< ATTHOLDx (Bit 16)                                     */
#define FMC_PATT_ATTHOLDx_Msk             (0xff0000UL)              /*!< ATTHOLDx (Bitfield-Mask: 0xff)                        */
#define FMC_PATT_ATTWAITx_Pos             (8UL)                     /*!< ATTWAITx (Bit 8)                                      */
#define FMC_PATT_ATTWAITx_Msk             (0xff00UL)                /*!< ATTWAITx (Bitfield-Mask: 0xff)                        */
#define FMC_PATT_ATTSETx_Pos              (0UL)                     /*!< ATTSETx (Bit 0)                                       */
#define FMC_PATT_ATTSETx_Msk              (0xffUL)                  /*!< ATTSETx (Bitfield-Mask: 0xff)                         */
/* =========================================================  ECCR  ========================================================== */
#define FMC_ECCR_ECCx_Pos                 (0UL)                     /*!< ECCx (Bit 0)                                          */
#define FMC_ECCR_ECCx_Msk                 (0xffffffffUL)            /*!< ECCx (Bitfield-Mask: 0xffffffff)                      */
/* =========================================================  BWTR1  ========================================================= */
#define FMC_BWTR1_ACCMOD_Pos              (28UL)                    /*!< ACCMOD (Bit 28)                                       */
#define FMC_BWTR1_ACCMOD_Msk              (0x30000000UL)            /*!< ACCMOD (Bitfield-Mask: 0x03)                          */
#define FMC_BWTR1_DATLAT_Pos              (24UL)                    /*!< DATLAT (Bit 24)                                       */
#define FMC_BWTR1_DATLAT_Msk              (0xf000000UL)             /*!< DATLAT (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR1_CLKDIV_Pos              (20UL)                    /*!< CLKDIV (Bit 20)                                       */
#define FMC_BWTR1_CLKDIV_Msk              (0xf00000UL)              /*!< CLKDIV (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR1_DATAST_Pos              (8UL)                     /*!< DATAST (Bit 8)                                        */
#define FMC_BWTR1_DATAST_Msk              (0xff00UL)                /*!< DATAST (Bitfield-Mask: 0xff)                          */
#define FMC_BWTR1_ADDHLD_Pos              (4UL)                     /*!< ADDHLD (Bit 4)                                        */
#define FMC_BWTR1_ADDHLD_Msk              (0xf0UL)                  /*!< ADDHLD (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR1_ADDSET_Pos              (0UL)                     /*!< ADDSET (Bit 0)                                        */
#define FMC_BWTR1_ADDSET_Msk              (0xfUL)                   /*!< ADDSET (Bitfield-Mask: 0x0f)                          */
/* =========================================================  BWTR2  ========================================================= */
#define FMC_BWTR2_ACCMOD_Pos              (28UL)                    /*!< ACCMOD (Bit 28)                                       */
#define FMC_BWTR2_ACCMOD_Msk              (0x30000000UL)            /*!< ACCMOD (Bitfield-Mask: 0x03)                          */
#define FMC_BWTR2_DATLAT_Pos              (24UL)                    /*!< DATLAT (Bit 24)                                       */
#define FMC_BWTR2_DATLAT_Msk              (0xf000000UL)             /*!< DATLAT (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR2_CLKDIV_Pos              (20UL)                    /*!< CLKDIV (Bit 20)                                       */
#define FMC_BWTR2_CLKDIV_Msk              (0xf00000UL)              /*!< CLKDIV (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR2_DATAST_Pos              (8UL)                     /*!< DATAST (Bit 8)                                        */
#define FMC_BWTR2_DATAST_Msk              (0xff00UL)                /*!< DATAST (Bitfield-Mask: 0xff)                          */
#define FMC_BWTR2_ADDHLD_Pos              (4UL)                     /*!< ADDHLD (Bit 4)                                        */
#define FMC_BWTR2_ADDHLD_Msk              (0xf0UL)                  /*!< ADDHLD (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR2_ADDSET_Pos              (0UL)                     /*!< ADDSET (Bit 0)                                        */
#define FMC_BWTR2_ADDSET_Msk              (0xfUL)                   /*!< ADDSET (Bitfield-Mask: 0x0f)                          */
/* =========================================================  BWTR3  ========================================================= */
#define FMC_BWTR3_ACCMOD_Pos              (28UL)                    /*!< ACCMOD (Bit 28)                                       */
#define FMC_BWTR3_ACCMOD_Msk              (0x30000000UL)            /*!< ACCMOD (Bitfield-Mask: 0x03)                          */
#define FMC_BWTR3_DATLAT_Pos              (24UL)                    /*!< DATLAT (Bit 24)                                       */
#define FMC_BWTR3_DATLAT_Msk              (0xf000000UL)             /*!< DATLAT (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR3_CLKDIV_Pos              (20UL)                    /*!< CLKDIV (Bit 20)                                       */
#define FMC_BWTR3_CLKDIV_Msk              (0xf00000UL)              /*!< CLKDIV (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR3_DATAST_Pos              (8UL)                     /*!< DATAST (Bit 8)                                        */
#define FMC_BWTR3_DATAST_Msk              (0xff00UL)                /*!< DATAST (Bitfield-Mask: 0xff)                          */
#define FMC_BWTR3_ADDHLD_Pos              (4UL)                     /*!< ADDHLD (Bit 4)                                        */
#define FMC_BWTR3_ADDHLD_Msk              (0xf0UL)                  /*!< ADDHLD (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR3_ADDSET_Pos              (0UL)                     /*!< ADDSET (Bit 0)                                        */
#define FMC_BWTR3_ADDSET_Msk              (0xfUL)                   /*!< ADDSET (Bitfield-Mask: 0x0f)                          */
/* =========================================================  BWTR4  ========================================================= */
#define FMC_BWTR4_ACCMOD_Pos              (28UL)                    /*!< ACCMOD (Bit 28)                                       */
#define FMC_BWTR4_ACCMOD_Msk              (0x30000000UL)            /*!< ACCMOD (Bitfield-Mask: 0x03)                          */
#define FMC_BWTR4_DATLAT_Pos              (24UL)                    /*!< DATLAT (Bit 24)                                       */
#define FMC_BWTR4_DATLAT_Msk              (0xf000000UL)             /*!< DATLAT (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR4_CLKDIV_Pos              (20UL)                    /*!< CLKDIV (Bit 20)                                       */
#define FMC_BWTR4_CLKDIV_Msk              (0xf00000UL)              /*!< CLKDIV (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR4_DATAST_Pos              (8UL)                     /*!< DATAST (Bit 8)                                        */
#define FMC_BWTR4_DATAST_Msk              (0xff00UL)                /*!< DATAST (Bitfield-Mask: 0xff)                          */
#define FMC_BWTR4_ADDHLD_Pos              (4UL)                     /*!< ADDHLD (Bit 4)                                        */
#define FMC_BWTR4_ADDHLD_Msk              (0xf0UL)                  /*!< ADDHLD (Bitfield-Mask: 0x0f)                          */
#define FMC_BWTR4_ADDSET_Pos              (0UL)                     /*!< ADDSET (Bit 0)                                        */
#define FMC_BWTR4_ADDSET_Msk              (0xfUL)                   /*!< ADDSET (Bitfield-Mask: 0x0f)                          */
/* =========================================================  SDCR1  ========================================================= */
#define FMC_SDCR1_NC_Pos                  (0UL)                     /*!< NC (Bit 0)                                            */
#define FMC_SDCR1_NC_Msk                  (0x3UL)                   /*!< NC (Bitfield-Mask: 0x03)                              */
#define FMC_SDCR1_NR_Pos                  (2UL)                     /*!< NR (Bit 2)                                            */
#define FMC_SDCR1_NR_Msk                  (0xcUL)                   /*!< NR (Bitfield-Mask: 0x03)                              */
#define FMC_SDCR1_MWID_Pos                (4UL)                     /*!< MWID (Bit 4)                                          */
#define FMC_SDCR1_MWID_Msk                (0x30UL)                  /*!< MWID (Bitfield-Mask: 0x03)                            */
#define FMC_SDCR1_NB_Pos                  (6UL)                     /*!< NB (Bit 6)                                            */
#define FMC_SDCR1_NB_Msk                  (0x40UL)                  /*!< NB (Bitfield-Mask: 0x01)                              */
#define FMC_SDCR1_CAS_Pos                 (7UL)                     /*!< CAS (Bit 7)                                           */
#define FMC_SDCR1_CAS_Msk                 (0x180UL)                 /*!< CAS (Bitfield-Mask: 0x03)                             */
#define FMC_SDCR1_WP_Pos                  (9UL)                     /*!< WP (Bit 9)                                            */
#define FMC_SDCR1_WP_Msk                  (0x200UL)                 /*!< WP (Bitfield-Mask: 0x01)                              */
#define FMC_SDCR1_SDCLK_Pos               (10UL)                    /*!< SDCLK (Bit 10)                                        */
#define FMC_SDCR1_SDCLK_Msk               (0xc00UL)                 /*!< SDCLK (Bitfield-Mask: 0x03)                           */
#define FMC_SDCR1_RBURST_Pos              (12UL)                    /*!< RBURST (Bit 12)                                       */
#define FMC_SDCR1_RBURST_Msk              (0x1000UL)                /*!< RBURST (Bitfield-Mask: 0x01)                          */
#define FMC_SDCR1_RPIPE_Pos               (13UL)                    /*!< RPIPE (Bit 13)                                        */
#define FMC_SDCR1_RPIPE_Msk               (0x6000UL)                /*!< RPIPE (Bitfield-Mask: 0x03)                           */
/* =========================================================  SDCR2  ========================================================= */
#define FMC_SDCR2_NC_Pos                  (0UL)                     /*!< NC (Bit 0)                                            */
#define FMC_SDCR2_NC_Msk                  (0x3UL)                   /*!< NC (Bitfield-Mask: 0x03)                              */
#define FMC_SDCR2_NR_Pos                  (2UL)                     /*!< NR (Bit 2)                                            */
#define FMC_SDCR2_NR_Msk                  (0xcUL)                   /*!< NR (Bitfield-Mask: 0x03)                              */
#define FMC_SDCR2_MWID_Pos                (4UL)                     /*!< MWID (Bit 4)                                          */
#define FMC_SDCR2_MWID_Msk                (0x30UL)                  /*!< MWID (Bitfield-Mask: 0x03)                            */
#define FMC_SDCR2_NB_Pos                  (6UL)                     /*!< NB (Bit 6)                                            */
#define FMC_SDCR2_NB_Msk                  (0x40UL)                  /*!< NB (Bitfield-Mask: 0x01)                              */
#define FMC_SDCR2_CAS_Pos                 (7UL)                     /*!< CAS (Bit 7)                                           */
#define FMC_SDCR2_CAS_Msk                 (0x180UL)                 /*!< CAS (Bitfield-Mask: 0x03)                             */
#define FMC_SDCR2_WP_Pos                  (9UL)                     /*!< WP (Bit 9)                                            */
#define FMC_SDCR2_WP_Msk                  (0x200UL)                 /*!< WP (Bitfield-Mask: 0x01)                              */
#define FMC_SDCR2_SDCLK_Pos               (10UL)                    /*!< SDCLK (Bit 10)                                        */
#define FMC_SDCR2_SDCLK_Msk               (0xc00UL)                 /*!< SDCLK (Bitfield-Mask: 0x03)                           */
#define FMC_SDCR2_RBURST_Pos              (12UL)                    /*!< RBURST (Bit 12)                                       */
#define FMC_SDCR2_RBURST_Msk              (0x1000UL)                /*!< RBURST (Bitfield-Mask: 0x01)                          */
#define FMC_SDCR2_RPIPE_Pos               (13UL)                    /*!< RPIPE (Bit 13)                                        */
#define FMC_SDCR2_RPIPE_Msk               (0x6000UL)                /*!< RPIPE (Bitfield-Mask: 0x03)                           */
/* =========================================================  SDTR1  ========================================================= */
#define FMC_SDTR1_TMRD_Pos                (0UL)                     /*!< TMRD (Bit 0)                                          */
#define FMC_SDTR1_TMRD_Msk                (0xfUL)                   /*!< TMRD (Bitfield-Mask: 0x0f)                            */
#define FMC_SDTR1_TXSR_Pos                (4UL)                     /*!< TXSR (Bit 4)                                          */
#define FMC_SDTR1_TXSR_Msk                (0xf0UL)                  /*!< TXSR (Bitfield-Mask: 0x0f)                            */
#define FMC_SDTR1_TRAS_Pos                (8UL)                     /*!< TRAS (Bit 8)                                          */
#define FMC_SDTR1_TRAS_Msk                (0xf00UL)                 /*!< TRAS (Bitfield-Mask: 0x0f)                            */
#define FMC_SDTR1_TRC_Pos                 (12UL)                    /*!< TRC (Bit 12)                                          */
#define FMC_SDTR1_TRC_Msk                 (0xf000UL)                /*!< TRC (Bitfield-Mask: 0x0f)                             */
#define FMC_SDTR1_TWR_Pos                 (16UL)                    /*!< TWR (Bit 16)                                          */
#define FMC_SDTR1_TWR_Msk                 (0xf0000UL)               /*!< TWR (Bitfield-Mask: 0x0f)                             */
#define FMC_SDTR1_TRP_Pos                 (20UL)                    /*!< TRP (Bit 20)                                          */
#define FMC_SDTR1_TRP_Msk                 (0xf00000UL)              /*!< TRP (Bitfield-Mask: 0x0f)                             */
#define FMC_SDTR1_TRCD_Pos                (24UL)                    /*!< TRCD (Bit 24)                                         */
#define FMC_SDTR1_TRCD_Msk                (0xf000000UL)             /*!< TRCD (Bitfield-Mask: 0x0f)                            */
/* =========================================================  SDTR2  ========================================================= */
#define FMC_SDTR2_TMRD_Pos                (0UL)                     /*!< TMRD (Bit 0)                                          */
#define FMC_SDTR2_TMRD_Msk                (0xfUL)                   /*!< TMRD (Bitfield-Mask: 0x0f)                            */
#define FMC_SDTR2_TXSR_Pos                (4UL)                     /*!< TXSR (Bit 4)                                          */
#define FMC_SDTR2_TXSR_Msk                (0xf0UL)                  /*!< TXSR (Bitfield-Mask: 0x0f)                            */
#define FMC_SDTR2_TRAS_Pos                (8UL)                     /*!< TRAS (Bit 8)                                          */
#define FMC_SDTR2_TRAS_Msk                (0xf00UL)                 /*!< TRAS (Bitfield-Mask: 0x0f)                            */
#define FMC_SDTR2_TRC_Pos                 (12UL)                    /*!< TRC (Bit 12)                                          */
#define FMC_SDTR2_TRC_Msk                 (0xf000UL)                /*!< TRC (Bitfield-Mask: 0x0f)                             */
#define FMC_SDTR2_TWR_Pos                 (16UL)                    /*!< TWR (Bit 16)                                          */
#define FMC_SDTR2_TWR_Msk                 (0xf0000UL)               /*!< TWR (Bitfield-Mask: 0x0f)                             */
#define FMC_SDTR2_TRP_Pos                 (20UL)                    /*!< TRP (Bit 20)                                          */
#define FMC_SDTR2_TRP_Msk                 (0xf00000UL)              /*!< TRP (Bitfield-Mask: 0x0f)                             */
#define FMC_SDTR2_TRCD_Pos                (24UL)                    /*!< TRCD (Bit 24)                                         */
#define FMC_SDTR2_TRCD_Msk                (0xf000000UL)             /*!< TRCD (Bitfield-Mask: 0x0f)                            */
/* =========================================================  SDCMR  ========================================================= */
#define FMC_SDCMR_MODE_Pos                (0UL)                     /*!< MODE (Bit 0)                                          */
#define FMC_SDCMR_MODE_Msk                (0x7UL)                   /*!< MODE (Bitfield-Mask: 0x07)                            */
#define FMC_SDCMR_CTB2_Pos                (3UL)                     /*!< CTB2 (Bit 3)                                          */
#define FMC_SDCMR_CTB2_Msk                (0x8UL)                   /*!< CTB2 (Bitfield-Mask: 0x01)                            */
#define FMC_SDCMR_CTB1_Pos                (4UL)                     /*!< CTB1 (Bit 4)                                          */
#define FMC_SDCMR_CTB1_Msk                (0x10UL)                  /*!< CTB1 (Bitfield-Mask: 0x01)                            */
#define FMC_SDCMR_NRFS_Pos                (5UL)                     /*!< NRFS (Bit 5)                                          */
#define FMC_SDCMR_NRFS_Msk                (0x1e0UL)                 /*!< NRFS (Bitfield-Mask: 0x0f)                            */
#define FMC_SDCMR_MRD_Pos                 (9UL)                     /*!< MRD (Bit 9)                                           */
#define FMC_SDCMR_MRD_Msk                 (0x3ffe00UL)              /*!< MRD (Bitfield-Mask: 0x1fff)                           */
/* =========================================================  SDRTR  ========================================================= */
#define FMC_SDRTR_CRE_Pos                 (0UL)                     /*!< CRE (Bit 0)                                           */
#define FMC_SDRTR_CRE_Msk                 (0x1UL)                   /*!< CRE (Bitfield-Mask: 0x01)                             */
#define FMC_SDRTR_COUNT_Pos               (1UL)                     /*!< COUNT (Bit 1)                                         */
#define FMC_SDRTR_COUNT_Msk               (0x3ffeUL)                /*!< COUNT (Bitfield-Mask: 0x1fff)                         */
#define FMC_SDRTR_REIE_Pos                (14UL)                    /*!< REIE (Bit 14)                                         */
#define FMC_SDRTR_REIE_Msk                (0x4000UL)                /*!< REIE (Bitfield-Mask: 0x01)                            */
/* =========================================================  SDSR  ========================================================== */
#define FMC_SDSR_RE_Pos                   (0UL)                     /*!< RE (Bit 0)                                            */
#define FMC_SDSR_RE_Msk                   (0x1UL)                   /*!< RE (Bitfield-Mask: 0x01)                              */
#define FMC_SDSR_MODES1_Pos               (1UL)                     /*!< MODES1 (Bit 1)                                        */
#define FMC_SDSR_MODES1_Msk               (0x6UL)                   /*!< MODES1 (Bitfield-Mask: 0x03)                          */
#define FMC_SDSR_MODES2_Pos               (3UL)                     /*!< MODES2 (Bit 3)                                        */
#define FMC_SDSR_MODES2_Msk               (0x18UL)                  /*!< MODES2 (Bitfield-Mask: 0x03)                          */
#define FMC_SDSR_BUSY_Pos                 (5UL)                     /*!< BUSY (Bit 5)                                          */
#define FMC_SDSR_BUSY_Msk                 (0x20UL)                  /*!< BUSY (Bitfield-Mask: 0x01)                            */
