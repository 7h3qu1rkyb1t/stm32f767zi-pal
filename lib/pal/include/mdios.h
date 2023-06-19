#include "core.h"

#define MDIOS_BASE                  0x40017800UL
#define MDIOS                       ((volatile MDIOS_Type*)             MDIOS_BASE)


/* =========================================================================================================================== */
/* ================                                           MDIOS                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief Management data input/output slave (MDIOS)
  */

typedef struct {                                /*!< (@ 0x40017800) MDIOS Structure                                            */
  
  union {
    __IOM uint32_t MDIOS_CR;                    /*!< (@ 0x00000000) MDIOS configuration register                               */
    
    struct {
      __IOM uint32_t EN         : 1;            /*!< [0..0] Peripheral enable                                                  */
      __IOM uint32_t WRIE       : 1;            /*!< [1..1] Register write interrupt enable                                    */
      __IOM uint32_t RDIE       : 1;            /*!< [2..2] Register Read Interrupt Enable                                     */
      __IOM uint32_t EIE        : 1;            /*!< [3..3] Error interrupt enable                                             */
            uint32_t            : 3;
      __IOM uint32_t DPC        : 1;            /*!< [7..7] Disable Preamble Check                                             */
      __IOM uint32_t PORT_ADDRESS : 5;          /*!< [12..8] Slaves's address                                                  */
            uint32_t            : 19;
    } MDIOS_CR_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_WRFR;                  /*!< (@ 0x00000004) MDIOS write flag register                                  */
    
    struct {
      __IM  uint32_t WRF        : 32;           /*!< [31..0] Write flags for MDIO registers 0 to 31                            */
    } MDIOS_WRFR_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_CWRFR;                 /*!< (@ 0x00000008) MDIOS clear write flag register                            */
    
    struct {
      __IOM uint32_t CWRF       : 32;           /*!< [31..0] Clear the write flag                                              */
    } MDIOS_CWRFR_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_RDFR;                  /*!< (@ 0x0000000C) MDIOS read flag register                                   */
    
    struct {
      __IM  uint32_t RDF        : 32;           /*!< [31..0] Read flags for MDIO registers 0 to 31                             */
    } MDIOS_RDFR_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_CRDFR;                 /*!< (@ 0x00000010) MDIOS clear read flag register                             */
    
    struct {
      __IOM uint32_t CRDF       : 32;           /*!< [31..0] Clear the read flag                                               */
    } MDIOS_CRDFR_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_SR;                    /*!< (@ 0x00000014) MDIOS status register                                      */
    
    struct {
      __IM  uint32_t PERF       : 1;            /*!< [0..0] Preamble error flag                                                */
      __IM  uint32_t SERF       : 1;            /*!< [1..1] Start error flag                                                   */
      __IM  uint32_t TERF       : 1;            /*!< [2..2] Turnaround error flag                                              */
            uint32_t            : 29;
    } MDIOS_SR_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_CLRFR;                 /*!< (@ 0x00000018) MDIOS clear flag register                                  */
    
    struct {
      __IOM uint32_t CPERF      : 1;            /*!< [0..0] Clear the preamble error flag                                      */
      __IOM uint32_t CSERF      : 1;            /*!< [1..1] Clear the start error flag                                         */
      __IOM uint32_t CTERF      : 1;            /*!< [2..2] Clear the turnaround error flag                                    */
            uint32_t            : 29;
    } MDIOS_CLRFR_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR0;                 /*!< (@ 0x0000001C) MDIOS input data register 0                                */
    
    struct {
      __IM  uint32_t DIN0       : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR0_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR1;                 /*!< (@ 0x00000020) MDIOS input data register 1                                */
    
    struct {
      __IM  uint32_t DIN1       : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR1_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR2;                 /*!< (@ 0x00000024) MDIOS input data register 2                                */
    
    struct {
      __IM  uint32_t DIN2       : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR2_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR3;                 /*!< (@ 0x00000028) MDIOS input data register 3                                */
    
    struct {
      __IM  uint32_t DIN3       : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR3_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR4;                 /*!< (@ 0x0000002C) MDIOS input data register 4                                */
    
    struct {
      __IM  uint32_t DIN4       : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR4_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR5;                 /*!< (@ 0x00000030) MDIOS input data register 5                                */
    
    struct {
      __IM  uint32_t DIN5       : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR5_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR6;                 /*!< (@ 0x00000034) MDIOS input data register 6                                */
    
    struct {
      __IM  uint32_t DIN6       : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR6_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR7;                 /*!< (@ 0x00000038) MDIOS input data register 7                                */
    
    struct {
      __IM  uint32_t DIN7       : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR7_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR8;                 /*!< (@ 0x0000003C) MDIOS input data register 8                                */
    
    struct {
      __IM  uint32_t DIN8       : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR8_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR9;                 /*!< (@ 0x00000040) MDIOS input data register 9                                */
    
    struct {
      __IM  uint32_t DIN9       : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR9_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR10;                /*!< (@ 0x00000044) MDIOS input data register 10                               */
    
    struct {
      __IM  uint32_t DIN10      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR10_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR11;                /*!< (@ 0x00000048) MDIOS input data register 11                               */
    
    struct {
      __IM  uint32_t DIN11      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR11_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR12;                /*!< (@ 0x0000004C) MDIOS input data register 12                               */
    
    struct {
      __IM  uint32_t DIN12      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR12_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR13;                /*!< (@ 0x00000050) MDIOS input data register 13                               */
    
    struct {
      __IM  uint32_t DIN13      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR13_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR14;                /*!< (@ 0x00000054) MDIOS input data register 14                               */
    
    struct {
      __IM  uint32_t DIN14      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR14_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR15;                /*!< (@ 0x00000058) MDIOS input data register 15                               */
    
    struct {
      __IM  uint32_t DIN15      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR15_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR16;                /*!< (@ 0x0000005C) MDIOS input data register 16                               */
    
    struct {
      __IM  uint32_t DIN16      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR16_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR17;                /*!< (@ 0x00000060) MDIOS input data register 17                               */
    
    struct {
      __IM  uint32_t DIN17      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR17_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR18;                /*!< (@ 0x00000064) MDIOS input data register 18                               */
    
    struct {
      __IM  uint32_t DIN18      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR18_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR19;                /*!< (@ 0x00000068) MDIOS input data register 19                               */
    
    struct {
      __IM  uint32_t DIN19      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR19_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR20;                /*!< (@ 0x0000006C) MDIOS input data register 20                               */
    
    struct {
      __IM  uint32_t DIN20      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR20_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR21;                /*!< (@ 0x00000070) MDIOS input data register 21                               */
    
    struct {
      __IM  uint32_t DIN21      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR21_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR22;                /*!< (@ 0x00000074) MDIOS input data register 22                               */
    
    struct {
      __IM  uint32_t DIN22      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR22_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR23;                /*!< (@ 0x00000078) MDIOS input data register 23                               */
    
    struct {
      __IM  uint32_t DIN23      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR23_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR24;                /*!< (@ 0x0000007C) MDIOS input data register 24                               */
    
    struct {
      __IM  uint32_t DIN24      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR24_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR25;                /*!< (@ 0x00000080) MDIOS input data register 25                               */
    
    struct {
      __IM  uint32_t DIN25      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR25_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR26;                /*!< (@ 0x00000084) MDIOS input data register 26                               */
    
    struct {
      __IM  uint32_t DIN26      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR26_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR27;                /*!< (@ 0x00000088) MDIOS input data register 27                               */
    
    struct {
      __IM  uint32_t DIN27      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR27_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR28;                /*!< (@ 0x0000008C) MDIOS input data register 28                               */
    
    struct {
      __IM  uint32_t DIN28      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR28_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR29;                /*!< (@ 0x00000090) MDIOS input data register 29                               */
    
    struct {
      __IM  uint32_t DIN29      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR29_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR30;                /*!< (@ 0x00000094) MDIOS input data register 30                               */
    
    struct {
      __IM  uint32_t DIN30      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR30_b;
  } ;
  
  union {
    __IM  uint32_t MDIOS_DINR31;                /*!< (@ 0x00000098) MDIOS input data register 31                               */
    
    struct {
      __IM  uint32_t DIN31      : 16;           /*!< [15..0] Input data received from MDIO Master during write frames          */
            uint32_t            : 16;
    } MDIOS_DINR31_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR0;                /*!< (@ 0x0000009C) MDIOS output data register 0                               */
    
    struct {
      __IOM uint32_t DOUT0      : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR0_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR1;                /*!< (@ 0x000000A0) MDIOS output data register 1                               */
    
    struct {
      __IOM uint32_t DOUT1      : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR1_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR2;                /*!< (@ 0x000000A4) MDIOS output data register 2                               */
    
    struct {
      __IOM uint32_t DOUT2      : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR2_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR3;                /*!< (@ 0x000000A8) MDIOS output data register 3                               */
    
    struct {
      __IOM uint32_t DOUT3      : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR3_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR4;                /*!< (@ 0x000000AC) MDIOS output data register 4                               */
    
    struct {
      __IOM uint32_t DOUT4      : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR4_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR5;                /*!< (@ 0x000000B0) MDIOS output data register 5                               */
    
    struct {
      __IOM uint32_t DOUT5      : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR5_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR6;                /*!< (@ 0x000000B4) MDIOS output data register 6                               */
    
    struct {
      __IOM uint32_t DOUT6      : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR6_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR7;                /*!< (@ 0x000000B8) MDIOS output data register 7                               */
    
    struct {
      __IOM uint32_t DOUT7      : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR7_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR8;                /*!< (@ 0x000000BC) MDIOS output data register 8                               */
    
    struct {
      __IOM uint32_t DOUT8      : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR8_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR9;                /*!< (@ 0x000000C0) MDIOS output data register 9                               */
    
    struct {
      __IOM uint32_t DOUT9      : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR9_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR10;               /*!< (@ 0x000000C4) MDIOS output data register 10                              */
    
    struct {
      __IOM uint32_t DOUT10     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR10_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR11;               /*!< (@ 0x000000C8) MDIOS output data register 11                              */
    
    struct {
      __IOM uint32_t DOUT11     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR11_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR12;               /*!< (@ 0x000000CC) MDIOS output data register 12                              */
    
    struct {
      __IOM uint32_t DOUT12     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR12_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR13;               /*!< (@ 0x000000D0) MDIOS output data register 13                              */
    
    struct {
      __IOM uint32_t DOUT13     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR13_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR14;               /*!< (@ 0x000000D4) MDIOS output data register 14                              */
    
    struct {
      __IOM uint32_t DOUT14     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR14_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR15;               /*!< (@ 0x000000D8) MDIOS output data register 15                              */
    
    struct {
      __IOM uint32_t DOUT15     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR15_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR16;               /*!< (@ 0x000000DC) MDIOS output data register 16                              */
    
    struct {
      __IOM uint32_t DOUT16     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR16_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR17;               /*!< (@ 0x000000E0) MDIOS output data register 17                              */
    
    struct {
      __IOM uint32_t DOUT17     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR17_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR18;               /*!< (@ 0x000000E4) MDIOS output data register 18                              */
    
    struct {
      __IOM uint32_t DOUT18     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR18_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR19;               /*!< (@ 0x000000E8) MDIOS output data register 19                              */
    
    struct {
      __IOM uint32_t DOUT19     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR19_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR20;               /*!< (@ 0x000000EC) MDIOS output data register 20                              */
    
    struct {
      __IOM uint32_t DOUT20     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR20_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR21;               /*!< (@ 0x000000F0) MDIOS output data register 21                              */
    
    struct {
      __IOM uint32_t DOUT21     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR21_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR22;               /*!< (@ 0x000000F4) MDIOS output data register 22                              */
    
    struct {
      __IOM uint32_t DOUT22     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR22_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR23;               /*!< (@ 0x000000F8) MDIOS output data register 23                              */
    
    struct {
      __IOM uint32_t DOUT23     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR23_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR24;               /*!< (@ 0x000000FC) MDIOS output data register 24                              */
    
    struct {
      __IOM uint32_t DOUT24     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR24_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR25;               /*!< (@ 0x00000100) MDIOS output data register 25                              */
    
    struct {
      __IOM uint32_t DOUT25     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR25_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR26;               /*!< (@ 0x00000104) MDIOS output data register 26                              */
    
    struct {
      __IOM uint32_t DOUT26     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR26_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR27;               /*!< (@ 0x00000108) MDIOS output data register 27                              */
    
    struct {
      __IOM uint32_t DOUT27     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR27_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR28;               /*!< (@ 0x0000010C) MDIOS output data register 28                              */
    
    struct {
      __IOM uint32_t DOUT28     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR28_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR29;               /*!< (@ 0x00000110) MDIOS output data register 29                              */
    
    struct {
      __IOM uint32_t DOUT29     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR29_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR30;               /*!< (@ 0x00000114) MDIOS output data register 30                              */
    
    struct {
      __IOM uint32_t DOUT30     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR30_b;
  } ;
  
  union {
    __IOM uint32_t MDIOS_DOUTR31;               /*!< (@ 0x00000118) MDIOS output data register 31                              */
    
    struct {
      __IOM uint32_t DOUT31     : 16;           /*!< [15..0] Output data sent to MDIO Master during read frames                */
            uint32_t            : 16;
    } MDIOS_DOUTR31_b;
  } ;
} MDIOS_Type;                                   /*!< Size = 284 (0x11c)                                                        */



/* =========================================================================================================================== */
/* ================                                           MDIOS                                           ================ */
/* =========================================================================================================================== */

/* =======================================================  MDIOS_CR  ======================================================== */
#define MDIOS_MDIOS_CR_EN_Pos             (0UL)                     /*!< EN (Bit 0)                                            */
#define MDIOS_MDIOS_CR_EN_Msk             (0x1UL)                   /*!< EN (Bitfield-Mask: 0x01)                              */
#define MDIOS_MDIOS_CR_WRIE_Pos           (1UL)                     /*!< WRIE (Bit 1)                                          */
#define MDIOS_MDIOS_CR_WRIE_Msk           (0x2UL)                   /*!< WRIE (Bitfield-Mask: 0x01)                            */
#define MDIOS_MDIOS_CR_RDIE_Pos           (2UL)                     /*!< RDIE (Bit 2)                                          */
#define MDIOS_MDIOS_CR_RDIE_Msk           (0x4UL)                   /*!< RDIE (Bitfield-Mask: 0x01)                            */
#define MDIOS_MDIOS_CR_EIE_Pos            (3UL)                     /*!< EIE (Bit 3)                                           */
#define MDIOS_MDIOS_CR_EIE_Msk            (0x8UL)                   /*!< EIE (Bitfield-Mask: 0x01)                             */
#define MDIOS_MDIOS_CR_DPC_Pos            (7UL)                     /*!< DPC (Bit 7)                                           */
#define MDIOS_MDIOS_CR_DPC_Msk            (0x80UL)                  /*!< DPC (Bitfield-Mask: 0x01)                             */
#define MDIOS_MDIOS_CR_PORT_ADDRESS_Pos   (8UL)                     /*!< PORT_ADDRESS (Bit 8)                                  */
#define MDIOS_MDIOS_CR_PORT_ADDRESS_Msk   (0x1f00UL)                /*!< PORT_ADDRESS (Bitfield-Mask: 0x1f)                    */
/* ======================================================  MDIOS_WRFR  ======================================================= */
#define MDIOS_MDIOS_WRFR_WRF_Pos          (0UL)                     /*!< WRF (Bit 0)                                           */
#define MDIOS_MDIOS_WRFR_WRF_Msk          (0xffffffffUL)            /*!< WRF (Bitfield-Mask: 0xffffffff)                       */
/* ======================================================  MDIOS_CWRFR  ====================================================== */
#define MDIOS_MDIOS_CWRFR_CWRF_Pos        (0UL)                     /*!< CWRF (Bit 0)                                          */
#define MDIOS_MDIOS_CWRFR_CWRF_Msk        (0xffffffffUL)            /*!< CWRF (Bitfield-Mask: 0xffffffff)                      */
/* ======================================================  MDIOS_RDFR  ======================================================= */
#define MDIOS_MDIOS_RDFR_RDF_Pos          (0UL)                     /*!< RDF (Bit 0)                                           */
#define MDIOS_MDIOS_RDFR_RDF_Msk          (0xffffffffUL)            /*!< RDF (Bitfield-Mask: 0xffffffff)                       */
/* ======================================================  MDIOS_CRDFR  ====================================================== */
#define MDIOS_MDIOS_CRDFR_CRDF_Pos        (0UL)                     /*!< CRDF (Bit 0)                                          */
#define MDIOS_MDIOS_CRDFR_CRDF_Msk        (0xffffffffUL)            /*!< CRDF (Bitfield-Mask: 0xffffffff)                      */
/* =======================================================  MDIOS_SR  ======================================================== */
#define MDIOS_MDIOS_SR_PERF_Pos           (0UL)                     /*!< PERF (Bit 0)                                          */
#define MDIOS_MDIOS_SR_PERF_Msk           (0x1UL)                   /*!< PERF (Bitfield-Mask: 0x01)                            */
#define MDIOS_MDIOS_SR_SERF_Pos           (1UL)                     /*!< SERF (Bit 1)                                          */
#define MDIOS_MDIOS_SR_SERF_Msk           (0x2UL)                   /*!< SERF (Bitfield-Mask: 0x01)                            */
#define MDIOS_MDIOS_SR_TERF_Pos           (2UL)                     /*!< TERF (Bit 2)                                          */
#define MDIOS_MDIOS_SR_TERF_Msk           (0x4UL)                   /*!< TERF (Bitfield-Mask: 0x01)                            */
/* ======================================================  MDIOS_CLRFR  ====================================================== */
#define MDIOS_MDIOS_CLRFR_CPERF_Pos       (0UL)                     /*!< CPERF (Bit 0)                                         */
#define MDIOS_MDIOS_CLRFR_CPERF_Msk       (0x1UL)                   /*!< CPERF (Bitfield-Mask: 0x01)                           */
#define MDIOS_MDIOS_CLRFR_CSERF_Pos       (1UL)                     /*!< CSERF (Bit 1)                                         */
#define MDIOS_MDIOS_CLRFR_CSERF_Msk       (0x2UL)                   /*!< CSERF (Bitfield-Mask: 0x01)                           */
#define MDIOS_MDIOS_CLRFR_CTERF_Pos       (2UL)                     /*!< CTERF (Bit 2)                                         */
#define MDIOS_MDIOS_CLRFR_CTERF_Msk       (0x4UL)                   /*!< CTERF (Bitfield-Mask: 0x01)                           */
/* ======================================================  MDIOS_DINR0  ====================================================== */
#define MDIOS_MDIOS_DINR0_DIN0_Pos        (0UL)                     /*!< DIN0 (Bit 0)                                          */
#define MDIOS_MDIOS_DINR0_DIN0_Msk        (0xffffUL)                /*!< DIN0 (Bitfield-Mask: 0xffff)                          */
/* ======================================================  MDIOS_DINR1  ====================================================== */
#define MDIOS_MDIOS_DINR1_DIN1_Pos        (0UL)                     /*!< DIN1 (Bit 0)                                          */
#define MDIOS_MDIOS_DINR1_DIN1_Msk        (0xffffUL)                /*!< DIN1 (Bitfield-Mask: 0xffff)                          */
/* ======================================================  MDIOS_DINR2  ====================================================== */
#define MDIOS_MDIOS_DINR2_DIN2_Pos        (0UL)                     /*!< DIN2 (Bit 0)                                          */
#define MDIOS_MDIOS_DINR2_DIN2_Msk        (0xffffUL)                /*!< DIN2 (Bitfield-Mask: 0xffff)                          */
/* ======================================================  MDIOS_DINR3  ====================================================== */
#define MDIOS_MDIOS_DINR3_DIN3_Pos        (0UL)                     /*!< DIN3 (Bit 0)                                          */
#define MDIOS_MDIOS_DINR3_DIN3_Msk        (0xffffUL)                /*!< DIN3 (Bitfield-Mask: 0xffff)                          */
/* ======================================================  MDIOS_DINR4  ====================================================== */
#define MDIOS_MDIOS_DINR4_DIN4_Pos        (0UL)                     /*!< DIN4 (Bit 0)                                          */
#define MDIOS_MDIOS_DINR4_DIN4_Msk        (0xffffUL)                /*!< DIN4 (Bitfield-Mask: 0xffff)                          */
/* ======================================================  MDIOS_DINR5  ====================================================== */
#define MDIOS_MDIOS_DINR5_DIN5_Pos        (0UL)                     /*!< DIN5 (Bit 0)                                          */
#define MDIOS_MDIOS_DINR5_DIN5_Msk        (0xffffUL)                /*!< DIN5 (Bitfield-Mask: 0xffff)                          */
/* ======================================================  MDIOS_DINR6  ====================================================== */
#define MDIOS_MDIOS_DINR6_DIN6_Pos        (0UL)                     /*!< DIN6 (Bit 0)                                          */
#define MDIOS_MDIOS_DINR6_DIN6_Msk        (0xffffUL)                /*!< DIN6 (Bitfield-Mask: 0xffff)                          */
/* ======================================================  MDIOS_DINR7  ====================================================== */
#define MDIOS_MDIOS_DINR7_DIN7_Pos        (0UL)                     /*!< DIN7 (Bit 0)                                          */
#define MDIOS_MDIOS_DINR7_DIN7_Msk        (0xffffUL)                /*!< DIN7 (Bitfield-Mask: 0xffff)                          */
/* ======================================================  MDIOS_DINR8  ====================================================== */
#define MDIOS_MDIOS_DINR8_DIN8_Pos        (0UL)                     /*!< DIN8 (Bit 0)                                          */
#define MDIOS_MDIOS_DINR8_DIN8_Msk        (0xffffUL)                /*!< DIN8 (Bitfield-Mask: 0xffff)                          */
/* ======================================================  MDIOS_DINR9  ====================================================== */
#define MDIOS_MDIOS_DINR9_DIN9_Pos        (0UL)                     /*!< DIN9 (Bit 0)                                          */
#define MDIOS_MDIOS_DINR9_DIN9_Msk        (0xffffUL)                /*!< DIN9 (Bitfield-Mask: 0xffff)                          */
/* =====================================================  MDIOS_DINR10  ====================================================== */
#define MDIOS_MDIOS_DINR10_DIN10_Pos      (0UL)                     /*!< DIN10 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR10_DIN10_Msk      (0xffffUL)                /*!< DIN10 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR11  ====================================================== */
#define MDIOS_MDIOS_DINR11_DIN11_Pos      (0UL)                     /*!< DIN11 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR11_DIN11_Msk      (0xffffUL)                /*!< DIN11 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR12  ====================================================== */
#define MDIOS_MDIOS_DINR12_DIN12_Pos      (0UL)                     /*!< DIN12 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR12_DIN12_Msk      (0xffffUL)                /*!< DIN12 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR13  ====================================================== */
#define MDIOS_MDIOS_DINR13_DIN13_Pos      (0UL)                     /*!< DIN13 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR13_DIN13_Msk      (0xffffUL)                /*!< DIN13 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR14  ====================================================== */
#define MDIOS_MDIOS_DINR14_DIN14_Pos      (0UL)                     /*!< DIN14 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR14_DIN14_Msk      (0xffffUL)                /*!< DIN14 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR15  ====================================================== */
#define MDIOS_MDIOS_DINR15_DIN15_Pos      (0UL)                     /*!< DIN15 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR15_DIN15_Msk      (0xffffUL)                /*!< DIN15 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR16  ====================================================== */
#define MDIOS_MDIOS_DINR16_DIN16_Pos      (0UL)                     /*!< DIN16 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR16_DIN16_Msk      (0xffffUL)                /*!< DIN16 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR17  ====================================================== */
#define MDIOS_MDIOS_DINR17_DIN17_Pos      (0UL)                     /*!< DIN17 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR17_DIN17_Msk      (0xffffUL)                /*!< DIN17 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR18  ====================================================== */
#define MDIOS_MDIOS_DINR18_DIN18_Pos      (0UL)                     /*!< DIN18 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR18_DIN18_Msk      (0xffffUL)                /*!< DIN18 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR19  ====================================================== */
#define MDIOS_MDIOS_DINR19_DIN19_Pos      (0UL)                     /*!< DIN19 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR19_DIN19_Msk      (0xffffUL)                /*!< DIN19 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR20  ====================================================== */
#define MDIOS_MDIOS_DINR20_DIN20_Pos      (0UL)                     /*!< DIN20 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR20_DIN20_Msk      (0xffffUL)                /*!< DIN20 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR21  ====================================================== */
#define MDIOS_MDIOS_DINR21_DIN21_Pos      (0UL)                     /*!< DIN21 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR21_DIN21_Msk      (0xffffUL)                /*!< DIN21 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR22  ====================================================== */
#define MDIOS_MDIOS_DINR22_DIN22_Pos      (0UL)                     /*!< DIN22 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR22_DIN22_Msk      (0xffffUL)                /*!< DIN22 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR23  ====================================================== */
#define MDIOS_MDIOS_DINR23_DIN23_Pos      (0UL)                     /*!< DIN23 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR23_DIN23_Msk      (0xffffUL)                /*!< DIN23 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR24  ====================================================== */
#define MDIOS_MDIOS_DINR24_DIN24_Pos      (0UL)                     /*!< DIN24 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR24_DIN24_Msk      (0xffffUL)                /*!< DIN24 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR25  ====================================================== */
#define MDIOS_MDIOS_DINR25_DIN25_Pos      (0UL)                     /*!< DIN25 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR25_DIN25_Msk      (0xffffUL)                /*!< DIN25 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR26  ====================================================== */
#define MDIOS_MDIOS_DINR26_DIN26_Pos      (0UL)                     /*!< DIN26 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR26_DIN26_Msk      (0xffffUL)                /*!< DIN26 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR27  ====================================================== */
#define MDIOS_MDIOS_DINR27_DIN27_Pos      (0UL)                     /*!< DIN27 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR27_DIN27_Msk      (0xffffUL)                /*!< DIN27 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR28  ====================================================== */
#define MDIOS_MDIOS_DINR28_DIN28_Pos      (0UL)                     /*!< DIN28 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR28_DIN28_Msk      (0xffffUL)                /*!< DIN28 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR29  ====================================================== */
#define MDIOS_MDIOS_DINR29_DIN29_Pos      (0UL)                     /*!< DIN29 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR29_DIN29_Msk      (0xffffUL)                /*!< DIN29 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR30  ====================================================== */
#define MDIOS_MDIOS_DINR30_DIN30_Pos      (0UL)                     /*!< DIN30 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR30_DIN30_Msk      (0xffffUL)                /*!< DIN30 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DINR31  ====================================================== */
#define MDIOS_MDIOS_DINR31_DIN31_Pos      (0UL)                     /*!< DIN31 (Bit 0)                                         */
#define MDIOS_MDIOS_DINR31_DIN31_Msk      (0xffffUL)                /*!< DIN31 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DOUTR0  ====================================================== */
#define MDIOS_MDIOS_DOUTR0_DOUT0_Pos      (0UL)                     /*!< DOUT0 (Bit 0)                                         */
#define MDIOS_MDIOS_DOUTR0_DOUT0_Msk      (0xffffUL)                /*!< DOUT0 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DOUTR1  ====================================================== */
#define MDIOS_MDIOS_DOUTR1_DOUT1_Pos      (0UL)                     /*!< DOUT1 (Bit 0)                                         */
#define MDIOS_MDIOS_DOUTR1_DOUT1_Msk      (0xffffUL)                /*!< DOUT1 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DOUTR2  ====================================================== */
#define MDIOS_MDIOS_DOUTR2_DOUT2_Pos      (0UL)                     /*!< DOUT2 (Bit 0)                                         */
#define MDIOS_MDIOS_DOUTR2_DOUT2_Msk      (0xffffUL)                /*!< DOUT2 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DOUTR3  ====================================================== */
#define MDIOS_MDIOS_DOUTR3_DOUT3_Pos      (0UL)                     /*!< DOUT3 (Bit 0)                                         */
#define MDIOS_MDIOS_DOUTR3_DOUT3_Msk      (0xffffUL)                /*!< DOUT3 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DOUTR4  ====================================================== */
#define MDIOS_MDIOS_DOUTR4_DOUT4_Pos      (0UL)                     /*!< DOUT4 (Bit 0)                                         */
#define MDIOS_MDIOS_DOUTR4_DOUT4_Msk      (0xffffUL)                /*!< DOUT4 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DOUTR5  ====================================================== */
#define MDIOS_MDIOS_DOUTR5_DOUT5_Pos      (0UL)                     /*!< DOUT5 (Bit 0)                                         */
#define MDIOS_MDIOS_DOUTR5_DOUT5_Msk      (0xffffUL)                /*!< DOUT5 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DOUTR6  ====================================================== */
#define MDIOS_MDIOS_DOUTR6_DOUT6_Pos      (0UL)                     /*!< DOUT6 (Bit 0)                                         */
#define MDIOS_MDIOS_DOUTR6_DOUT6_Msk      (0xffffUL)                /*!< DOUT6 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DOUTR7  ====================================================== */
#define MDIOS_MDIOS_DOUTR7_DOUT7_Pos      (0UL)                     /*!< DOUT7 (Bit 0)                                         */
#define MDIOS_MDIOS_DOUTR7_DOUT7_Msk      (0xffffUL)                /*!< DOUT7 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DOUTR8  ====================================================== */
#define MDIOS_MDIOS_DOUTR8_DOUT8_Pos      (0UL)                     /*!< DOUT8 (Bit 0)                                         */
#define MDIOS_MDIOS_DOUTR8_DOUT8_Msk      (0xffffUL)                /*!< DOUT8 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DOUTR9  ====================================================== */
#define MDIOS_MDIOS_DOUTR9_DOUT9_Pos      (0UL)                     /*!< DOUT9 (Bit 0)                                         */
#define MDIOS_MDIOS_DOUTR9_DOUT9_Msk      (0xffffUL)                /*!< DOUT9 (Bitfield-Mask: 0xffff)                         */
/* =====================================================  MDIOS_DOUTR10  ===================================================== */
#define MDIOS_MDIOS_DOUTR10_DOUT10_Pos    (0UL)                     /*!< DOUT10 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR10_DOUT10_Msk    (0xffffUL)                /*!< DOUT10 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR11  ===================================================== */
#define MDIOS_MDIOS_DOUTR11_DOUT11_Pos    (0UL)                     /*!< DOUT11 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR11_DOUT11_Msk    (0xffffUL)                /*!< DOUT11 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR12  ===================================================== */
#define MDIOS_MDIOS_DOUTR12_DOUT12_Pos    (0UL)                     /*!< DOUT12 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR12_DOUT12_Msk    (0xffffUL)                /*!< DOUT12 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR13  ===================================================== */
#define MDIOS_MDIOS_DOUTR13_DOUT13_Pos    (0UL)                     /*!< DOUT13 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR13_DOUT13_Msk    (0xffffUL)                /*!< DOUT13 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR14  ===================================================== */
#define MDIOS_MDIOS_DOUTR14_DOUT14_Pos    (0UL)                     /*!< DOUT14 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR14_DOUT14_Msk    (0xffffUL)                /*!< DOUT14 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR15  ===================================================== */
#define MDIOS_MDIOS_DOUTR15_DOUT15_Pos    (0UL)                     /*!< DOUT15 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR15_DOUT15_Msk    (0xffffUL)                /*!< DOUT15 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR16  ===================================================== */
#define MDIOS_MDIOS_DOUTR16_DOUT16_Pos    (0UL)                     /*!< DOUT16 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR16_DOUT16_Msk    (0xffffUL)                /*!< DOUT16 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR17  ===================================================== */
#define MDIOS_MDIOS_DOUTR17_DOUT17_Pos    (0UL)                     /*!< DOUT17 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR17_DOUT17_Msk    (0xffffUL)                /*!< DOUT17 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR18  ===================================================== */
#define MDIOS_MDIOS_DOUTR18_DOUT18_Pos    (0UL)                     /*!< DOUT18 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR18_DOUT18_Msk    (0xffffUL)                /*!< DOUT18 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR19  ===================================================== */
#define MDIOS_MDIOS_DOUTR19_DOUT19_Pos    (0UL)                     /*!< DOUT19 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR19_DOUT19_Msk    (0xffffUL)                /*!< DOUT19 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR20  ===================================================== */
#define MDIOS_MDIOS_DOUTR20_DOUT20_Pos    (0UL)                     /*!< DOUT20 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR20_DOUT20_Msk    (0xffffUL)                /*!< DOUT20 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR21  ===================================================== */
#define MDIOS_MDIOS_DOUTR21_DOUT21_Pos    (0UL)                     /*!< DOUT21 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR21_DOUT21_Msk    (0xffffUL)                /*!< DOUT21 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR22  ===================================================== */
#define MDIOS_MDIOS_DOUTR22_DOUT22_Pos    (0UL)                     /*!< DOUT22 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR22_DOUT22_Msk    (0xffffUL)                /*!< DOUT22 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR23  ===================================================== */
#define MDIOS_MDIOS_DOUTR23_DOUT23_Pos    (0UL)                     /*!< DOUT23 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR23_DOUT23_Msk    (0xffffUL)                /*!< DOUT23 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR24  ===================================================== */
#define MDIOS_MDIOS_DOUTR24_DOUT24_Pos    (0UL)                     /*!< DOUT24 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR24_DOUT24_Msk    (0xffffUL)                /*!< DOUT24 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR25  ===================================================== */
#define MDIOS_MDIOS_DOUTR25_DOUT25_Pos    (0UL)                     /*!< DOUT25 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR25_DOUT25_Msk    (0xffffUL)                /*!< DOUT25 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR26  ===================================================== */
#define MDIOS_MDIOS_DOUTR26_DOUT26_Pos    (0UL)                     /*!< DOUT26 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR26_DOUT26_Msk    (0xffffUL)                /*!< DOUT26 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR27  ===================================================== */
#define MDIOS_MDIOS_DOUTR27_DOUT27_Pos    (0UL)                     /*!< DOUT27 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR27_DOUT27_Msk    (0xffffUL)                /*!< DOUT27 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR28  ===================================================== */
#define MDIOS_MDIOS_DOUTR28_DOUT28_Pos    (0UL)                     /*!< DOUT28 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR28_DOUT28_Msk    (0xffffUL)                /*!< DOUT28 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR29  ===================================================== */
#define MDIOS_MDIOS_DOUTR29_DOUT29_Pos    (0UL)                     /*!< DOUT29 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR29_DOUT29_Msk    (0xffffUL)                /*!< DOUT29 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR30  ===================================================== */
#define MDIOS_MDIOS_DOUTR30_DOUT30_Pos    (0UL)                     /*!< DOUT30 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR30_DOUT30_Msk    (0xffffUL)                /*!< DOUT30 (Bitfield-Mask: 0xffff)                        */
/* =====================================================  MDIOS_DOUTR31  ===================================================== */
#define MDIOS_MDIOS_DOUTR31_DOUT31_Pos    (0UL)                     /*!< DOUT31 (Bit 0)                                        */
#define MDIOS_MDIOS_DOUTR31_DOUT31_Msk    (0xffffUL)                /*!< DOUT31 (Bitfield-Mask: 0xffff)                        */

