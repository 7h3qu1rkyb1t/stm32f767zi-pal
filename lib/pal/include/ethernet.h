#include "core.h"

#define Ethernet_MMC_BASE           0x40028100UL
#define Ethernet_PTP_BASE           0x40028700UL
#define Ethernet_DMA_BASE           0x40029000UL
#define Ethernet_MAC_BASE           0x40028000UL

#define Ethernet_MAC                ((volatile Ethernet_MAC_Type*)      Ethernet_MAC_BASE)
#define Ethernet_MMC                ((volatile Ethernet_MMC_Type*)      Ethernet_MMC_BASE)
#define Ethernet_PTP                ((volatile Ethernet_PTP_Type*)      Ethernet_PTP_BASE)
#define Ethernet_DMA                ((volatile Ethernet_DMA_Type*)      Ethernet_DMA_BASE)


/* =========================================================================================================================== */
/* ================                                       Ethernet_DMA                                        ================ */
/* =========================================================================================================================== */


/**
  * @brief Ethernet: DMA controller operation (Ethernet_DMA)
  */

typedef struct {                                /*!< (@ 0x40029000) Ethernet_DMA Structure                                     */
  
  union {
    __IOM uint32_t DMABMR;                      /*!< (@ 0x00000000) Ethernet DMA bus mode register                             */
    
    struct {
      __IOM uint32_t SR         : 1;            /*!< [0..0] SR                                                                 */
      __IOM uint32_t DA         : 1;            /*!< [1..1] DA                                                                 */
      __IOM uint32_t DSL        : 5;            /*!< [6..2] DSL                                                                */
      __IOM uint32_t EDFE       : 1;            /*!< [7..7] EDFE                                                               */
      __IOM uint32_t PBL        : 6;            /*!< [13..8] PBL                                                               */
      __IOM uint32_t RTPR       : 2;            /*!< [15..14] RTPR                                                             */
      __IOM uint32_t FB         : 1;            /*!< [16..16] FB                                                               */
      __IOM uint32_t RDP        : 6;            /*!< [22..17] RDP                                                              */
      __IOM uint32_t USP        : 1;            /*!< [23..23] USP                                                              */
      __IOM uint32_t FPM        : 1;            /*!< [24..24] FPM                                                              */
      __IOM uint32_t AAB        : 1;            /*!< [25..25] AAB                                                              */
      __IOM uint32_t MB         : 1;            /*!< [26..26] MB                                                               */
            uint32_t            : 5;
    } DMABMR_b;
  } ;
  
  union {
    __IOM uint32_t DMATPDR;                     /*!< (@ 0x00000004) Ethernet DMA transmit poll demand register                 */
    
    struct {
      __IOM uint32_t TPD        : 32;           /*!< [31..0] TPD                                                               */
    } DMATPDR_b;
  } ;
  
  union {
    __IOM uint32_t DMARPDR;                     /*!< (@ 0x00000008) EHERNET DMA receive poll demand register                   */
    
    struct {
      __IOM uint32_t RPD        : 32;           /*!< [31..0] RPD                                                               */
    } DMARPDR_b;
  } ;
  
  union {
    __IOM uint32_t DMARDLAR;                    /*!< (@ 0x0000000C) Ethernet DMA receive descriptor list address
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t SRL        : 32;           /*!< [31..0] SRL                                                               */
    } DMARDLAR_b;
  } ;
  
  union {
    __IOM uint32_t DMATDLAR;                    /*!< (@ 0x00000010) Ethernet DMA transmit descriptor list address
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t STL        : 32;           /*!< [31..0] STL                                                               */
    } DMATDLAR_b;
  } ;
  
  union {
    __IOM uint32_t DMASR;                       /*!< (@ 0x00000014) Ethernet DMA status register                               */
    
    struct {
      __IOM uint32_t TS         : 1;            /*!< [0..0] TS                                                                 */
      __IOM uint32_t TPSS       : 1;            /*!< [1..1] TPSS                                                               */
      __IOM uint32_t TBUS       : 1;            /*!< [2..2] TBUS                                                               */
      __IOM uint32_t TJTS       : 1;            /*!< [3..3] TJTS                                                               */
      __IOM uint32_t ROS        : 1;            /*!< [4..4] ROS                                                                */
      __IOM uint32_t TUS        : 1;            /*!< [5..5] TUS                                                                */
      __IOM uint32_t RS         : 1;            /*!< [6..6] RS                                                                 */
      __IOM uint32_t RBUS       : 1;            /*!< [7..7] RBUS                                                               */
      __IOM uint32_t RPSS       : 1;            /*!< [8..8] RPSS                                                               */
      __IOM uint32_t PWTS       : 1;            /*!< [9..9] PWTS                                                               */
      __IOM uint32_t ETS        : 1;            /*!< [10..10] ETS                                                              */
            uint32_t            : 2;
      __IOM uint32_t FBES       : 1;            /*!< [13..13] FBES                                                             */
      __IOM uint32_t ERS        : 1;            /*!< [14..14] ERS                                                              */
      __IOM uint32_t AIS        : 1;            /*!< [15..15] AIS                                                              */
      __IOM uint32_t NIS        : 1;            /*!< [16..16] NIS                                                              */
      __IM  uint32_t RPS        : 3;            /*!< [19..17] RPS                                                              */
      __IM  uint32_t TPS        : 3;            /*!< [22..20] TPS                                                              */
      __IM  uint32_t EBS        : 3;            /*!< [25..23] EBS                                                              */
            uint32_t            : 1;
      __IM  uint32_t MMCS       : 1;            /*!< [27..27] MMCS                                                             */
      __IM  uint32_t PMTS       : 1;            /*!< [28..28] PMTS                                                             */
      __IM  uint32_t TSTS       : 1;            /*!< [29..29] TSTS                                                             */
            uint32_t            : 2;
    } DMASR_b;
  } ;
  
  union {
    __IOM uint32_t DMAOMR;                      /*!< (@ 0x00000018) Ethernet DMA operation mode register                       */
    
    struct {
            uint32_t            : 1;
      __IOM uint32_t SR         : 1;            /*!< [1..1] SR                                                                 */
      __IOM uint32_t OSF        : 1;            /*!< [2..2] OSF                                                                */
      __IOM uint32_t RTC        : 2;            /*!< [4..3] RTC                                                                */
            uint32_t            : 1;
      __IOM uint32_t FUGF       : 1;            /*!< [6..6] FUGF                                                               */
      __IOM uint32_t FEF        : 1;            /*!< [7..7] FEF                                                                */
            uint32_t            : 5;
      __IOM uint32_t ST         : 1;            /*!< [13..13] ST                                                               */
      __IOM uint32_t TTC        : 3;            /*!< [16..14] TTC                                                              */
            uint32_t            : 3;
      __IOM uint32_t FTF        : 1;            /*!< [20..20] FTF                                                              */
      __IOM uint32_t TSF        : 1;            /*!< [21..21] TSF                                                              */
            uint32_t            : 2;
      __IOM uint32_t DFRF       : 1;            /*!< [24..24] DFRF                                                             */
      __IOM uint32_t RSF        : 1;            /*!< [25..25] RSF                                                              */
      __IOM uint32_t DTCEFD     : 1;            /*!< [26..26] DTCEFD                                                           */
            uint32_t            : 5;
    } DMAOMR_b;
  } ;
  
  union {
    __IOM uint32_t DMAIER;                      /*!< (@ 0x0000001C) Ethernet DMA interrupt enable register                     */
    
    struct {
      __IOM uint32_t TIE        : 1;            /*!< [0..0] TIE                                                                */
      __IOM uint32_t TPSIE      : 1;            /*!< [1..1] TPSIE                                                              */
      __IOM uint32_t TBUIE      : 1;            /*!< [2..2] TBUIE                                                              */
      __IOM uint32_t TJTIE      : 1;            /*!< [3..3] TJTIE                                                              */
      __IOM uint32_t ROIE       : 1;            /*!< [4..4] ROIE                                                               */
      __IOM uint32_t TUIE       : 1;            /*!< [5..5] TUIE                                                               */
      __IOM uint32_t RIE        : 1;            /*!< [6..6] RIE                                                                */
      __IOM uint32_t RBUIE      : 1;            /*!< [7..7] RBUIE                                                              */
      __IOM uint32_t RPSIE      : 1;            /*!< [8..8] RPSIE                                                              */
      __IOM uint32_t RWTIE      : 1;            /*!< [9..9] RWTIE                                                              */
      __IOM uint32_t ETIE       : 1;            /*!< [10..10] ETIE                                                             */
            uint32_t            : 2;
      __IOM uint32_t FBEIE      : 1;            /*!< [13..13] FBEIE                                                            */
      __IOM uint32_t ERIE       : 1;            /*!< [14..14] ERIE                                                             */
      __IOM uint32_t AISE       : 1;            /*!< [15..15] AISE                                                             */
      __IOM uint32_t NISE       : 1;            /*!< [16..16] NISE                                                             */
            uint32_t            : 15;
    } DMAIER_b;
  } ;
  
  union {
    __IOM uint32_t DMAMFBOCR;                   /*!< (@ 0x00000020) Ethernet DMA missed frame and buffer overflow
                                                                    counter register                                           */
    
    struct {
      __IOM uint32_t MFC        : 16;           /*!< [15..0] MFC                                                               */
      __IOM uint32_t OMFC       : 1;            /*!< [16..16] OMFC                                                             */
      __IOM uint32_t MFA        : 11;           /*!< [27..17] MFA                                                              */
      __IOM uint32_t OFOC       : 1;            /*!< [28..28] OFOC                                                             */
            uint32_t            : 3;
    } DMAMFBOCR_b;
  } ;
  
  union {
    __IOM uint32_t DMARSWTR;                    /*!< (@ 0x00000024) Ethernet DMA receive status watchdog timer register        */
    
    struct {
      __IOM uint32_t RSWTC      : 8;            /*!< [7..0] RSWTC                                                              */
            uint32_t            : 24;
    } DMARSWTR_b;
  } ;
  __IM  uint32_t  RESERVED[8];
  
  union {
    __IM  uint32_t DMACHTDR;                    /*!< (@ 0x00000048) Ethernet DMA current host transmit descriptor
                                                                    register                                                   */
    
    struct {
      __IM  uint32_t HTDAP      : 32;           /*!< [31..0] HTDAP                                                             */
    } DMACHTDR_b;
  } ;
  
  union {
    __IM  uint32_t DMACHRDR;                    /*!< (@ 0x0000004C) Ethernet DMA current host receive descriptor
                                                                    register                                                   */
    
    struct {
      __IM  uint32_t HRDAP      : 32;           /*!< [31..0] HRDAP                                                             */
    } DMACHRDR_b;
  } ;
  
  union {
    __IM  uint32_t DMACHTBAR;                   /*!< (@ 0x00000050) Ethernet DMA current host transmit buffer address
                                                                    register                                                   */
    
    struct {
      __IM  uint32_t HTBAP      : 32;           /*!< [31..0] HTBAP                                                             */
    } DMACHTBAR_b;
  } ;
  
  union {
    __IM  uint32_t DMACHRBAR;                   /*!< (@ 0x00000054) Ethernet DMA current host receive buffer address
                                                                    register                                                   */
    
    struct {
      __IM  uint32_t HRBAP      : 32;           /*!< [31..0] HRBAP                                                             */
    } DMACHRBAR_b;
  } ;
} Ethernet_DMA_Type;                            /*!< Size = 88 (0x58)                                                          */



/* =========================================================================================================================== */
/* ================                                       Ethernet_PTP                                        ================ */
/* =========================================================================================================================== */


/**
  * @brief Ethernet: Precision time protocol (Ethernet_PTP)
  */

typedef struct {                                /*!< (@ 0x40028700) Ethernet_PTP Structure                                     */
  
  union {
    __IOM uint32_t PTPTSCR;                     /*!< (@ 0x00000000) Ethernet PTP time stamp control register                   */
    
    struct {
      __IOM uint32_t TSE        : 1;            /*!< [0..0] TSE                                                                */
      __IOM uint32_t TSFCU      : 1;            /*!< [1..1] TSFCU                                                              */
      __IOM uint32_t TSSTI      : 1;            /*!< [2..2] TSSTI                                                              */
      __IOM uint32_t TSSTU      : 1;            /*!< [3..3] TSSTU                                                              */
      __IOM uint32_t TSITE      : 1;            /*!< [4..4] TSITE                                                              */
      __IOM uint32_t TTSARU     : 1;            /*!< [5..5] TTSARU                                                             */
            uint32_t            : 2;
      __IOM uint32_t TSSARFE    : 1;            /*!< [8..8] TSSARFE                                                            */
      __IOM uint32_t TSSSR      : 1;            /*!< [9..9] TSSSR                                                              */
      __IOM uint32_t TSPTPPSV2E : 1;            /*!< [10..10] TSPTPPSV2E                                                       */
      __IOM uint32_t TSSPTPOEFE : 1;            /*!< [11..11] TSSPTPOEFE                                                       */
      __IOM uint32_t TSSIPV6FE  : 1;            /*!< [12..12] TSSIPV6FE                                                        */
      __IOM uint32_t TSSIPV4FE  : 1;            /*!< [13..13] TSSIPV4FE                                                        */
      __IOM uint32_t TSSEME     : 1;            /*!< [14..14] TSSEME                                                           */
      __IOM uint32_t TSSMRME    : 1;            /*!< [15..15] TSSMRME                                                          */
      __IOM uint32_t TSCNT      : 2;            /*!< [17..16] TSCNT                                                            */
      __IOM uint32_t TSPFFMAE   : 1;            /*!< [18..18] TSPFFMAE                                                         */
            uint32_t            : 13;
    } PTPTSCR_b;
  } ;
  
  union {
    __IOM uint32_t PTPSSIR;                     /*!< (@ 0x00000004) Ethernet PTP subsecond increment register                  */
    
    struct {
      __IOM uint32_t STSSI      : 8;            /*!< [7..0] STSSI                                                              */
            uint32_t            : 24;
    } PTPSSIR_b;
  } ;
  
  union {
    __IM  uint32_t PTPTSHR;                     /*!< (@ 0x00000008) Ethernet PTP time stamp high register                      */
    
    struct {
      __IM  uint32_t STS        : 32;           /*!< [31..0] STS                                                               */
    } PTPTSHR_b;
  } ;
  
  union {
    __IM  uint32_t PTPTSLR;                     /*!< (@ 0x0000000C) Ethernet PTP time stamp low register                       */
    
    struct {
      __IM  uint32_t STSS       : 31;           /*!< [30..0] STSS                                                              */
      __IM  uint32_t STPNS      : 1;            /*!< [31..31] STPNS                                                            */
    } PTPTSLR_b;
  } ;
  
  union {
    __IOM uint32_t PTPTSHUR;                    /*!< (@ 0x00000010) Ethernet PTP time stamp high update register               */
    
    struct {
      __IOM uint32_t TSUS       : 32;           /*!< [31..0] TSUS                                                              */
    } PTPTSHUR_b;
  } ;
  
  union {
    __IOM uint32_t PTPTSLUR;                    /*!< (@ 0x00000014) Ethernet PTP time stamp low update register                */
    
    struct {
      __IOM uint32_t TSUSS      : 31;           /*!< [30..0] TSUSS                                                             */
      __IOM uint32_t TSUPNS     : 1;            /*!< [31..31] TSUPNS                                                           */
    } PTPTSLUR_b;
  } ;
  
  union {
    __IOM uint32_t PTPTSAR;                     /*!< (@ 0x00000018) Ethernet PTP time stamp addend register                    */
    
    struct {
      __IOM uint32_t TSA        : 32;           /*!< [31..0] TSA                                                               */
    } PTPTSAR_b;
  } ;
  
  union {
    __IOM uint32_t PTPTTHR;                     /*!< (@ 0x0000001C) Ethernet PTP target time high register                     */
    
    struct {
      __IOM uint32_t TTSH       : 32;           /*!< [31..0] 0                                                                 */
    } PTPTTHR_b;
  } ;
  
  union {
    __IOM uint32_t PTPTTLR;                     /*!< (@ 0x00000020) Ethernet PTP target time low register                      */
    
    struct {
      __IOM uint32_t TTSL       : 32;           /*!< [31..0] TTSL                                                              */
    } PTPTTLR_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IM  uint32_t PTPTSSR;                     /*!< (@ 0x00000028) Ethernet PTP time stamp status register                    */
    
    struct {
      __IM  uint32_t TSSO       : 1;            /*!< [0..0] TSSO                                                               */
      __IM  uint32_t TSTTR      : 1;            /*!< [1..1] TSTTR                                                              */
            uint32_t            : 30;
    } PTPTSSR_b;
  } ;
  
  union {
    __IM  uint32_t PTPPPSCR;                    /*!< (@ 0x0000002C) Ethernet PTP PPS control register                          */
    
    struct {
      __IM  uint32_t TSSO       : 1;            /*!< [0..0] TSSO                                                               */
      __IM  uint32_t TSTTR      : 1;            /*!< [1..1] TSTTR                                                              */
            uint32_t            : 30;
    } PTPPPSCR_b;
  } ;
} Ethernet_PTP_Type;                            /*!< Size = 48 (0x30)                                                          */



/* =========================================================================================================================== */
/* ================                                       Ethernet_MMC                                        ================ */
/* =========================================================================================================================== */


/**
  * @brief Ethernet: MAC management counters (Ethernet_MMC)
  */

typedef struct {                                /*!< (@ 0x40028100) Ethernet_MMC Structure                                     */
  
  union {
    __IOM uint32_t MMCCR;                       /*!< (@ 0x00000000) Ethernet MMC control register                              */
    
    struct {
      __IOM uint32_t CR         : 1;            /*!< [0..0] CR                                                                 */
      __IOM uint32_t CSR        : 1;            /*!< [1..1] CSR                                                                */
      __IOM uint32_t ROR        : 1;            /*!< [2..2] ROR                                                                */
      __IOM uint32_t MCF        : 1;            /*!< [3..3] MCF                                                                */
      __IOM uint32_t MCP        : 1;            /*!< [4..4] MCP                                                                */
      __IOM uint32_t MCFHP      : 1;            /*!< [5..5] MCFHP                                                              */
            uint32_t            : 26;
    } MMCCR_b;
  } ;
  
  union {
    __IOM uint32_t MMCRIR;                      /*!< (@ 0x00000004) Ethernet MMC receive interrupt register                    */
    
    struct {
            uint32_t            : 5;
      __IOM uint32_t RFCES      : 1;            /*!< [5..5] RFCES                                                              */
      __IOM uint32_t RFAES      : 1;            /*!< [6..6] RFAES                                                              */
            uint32_t            : 10;
      __IOM uint32_t RGUFS      : 1;            /*!< [17..17] RGUFS                                                            */
            uint32_t            : 14;
    } MMCRIR_b;
  } ;
  
  union {
    __IM  uint32_t MMCTIR;                      /*!< (@ 0x00000008) Ethernet MMC transmit interrupt register                   */
    
    struct {
            uint32_t            : 14;
      __IM  uint32_t TGFSCS     : 1;            /*!< [14..14] TGFSCS                                                           */
      __IM  uint32_t TGFMSCS    : 1;            /*!< [15..15] TGFMSCS                                                          */
            uint32_t            : 5;
      __IM  uint32_t TGFS       : 1;            /*!< [21..21] TGFS                                                             */
            uint32_t            : 10;
    } MMCTIR_b;
  } ;
  
  union {
    __IOM uint32_t MMCRIMR;                     /*!< (@ 0x0000000C) Ethernet MMC receive interrupt mask register               */
    
    struct {
            uint32_t            : 5;
      __IOM uint32_t RFCEM      : 1;            /*!< [5..5] RFCEM                                                              */
      __IOM uint32_t RFAEM      : 1;            /*!< [6..6] RFAEM                                                              */
            uint32_t            : 10;
      __IOM uint32_t RGUFM      : 1;            /*!< [17..17] RGUFM                                                            */
            uint32_t            : 14;
    } MMCRIMR_b;
  } ;
  
  union {
    __IOM uint32_t MMCTIMR;                     /*!< (@ 0x00000010) Ethernet MMC transmit interrupt mask register              */
    
    struct {
            uint32_t            : 14;
      __IOM uint32_t TGFSCM     : 1;            /*!< [14..14] TGFSCM                                                           */
      __IOM uint32_t TGFMSCM    : 1;            /*!< [15..15] TGFMSCM                                                          */
      __IOM uint32_t TGFM       : 1;            /*!< [16..16] TGFM                                                             */
            uint32_t            : 15;
    } MMCTIMR_b;
  } ;
  __IM  uint32_t  RESERVED[14];
  
  union {
    __IM  uint32_t MMCTGFSCCR;                  /*!< (@ 0x0000004C) Ethernet MMC transmitted good frames after a
                                                                    single collision counter                                   */
    
    struct {
      __IM  uint32_t TGFSCC     : 32;           /*!< [31..0] TGFSCC                                                            */
    } MMCTGFSCCR_b;
  } ;
  
  union {
    __IM  uint32_t MMCTGFMSCCR;                 /*!< (@ 0x00000050) Ethernet MMC transmitted good frames after more
                                                                    than a single collision                                    */
    
    struct {
      __IM  uint32_t TGFMSCC    : 32;           /*!< [31..0] TGFMSCC                                                           */
    } MMCTGFMSCCR_b;
  } ;
  __IM  uint32_t  RESERVED1[5];
  
  union {
    __IM  uint32_t MMCTGFCR;                    /*!< (@ 0x00000068) Ethernet MMC transmitted good frames counter
                                                                    register                                                   */
    
    struct {
      __IM  uint32_t TGFC       : 32;           /*!< [31..0] HTL                                                               */
    } MMCTGFCR_b;
  } ;
  __IM  uint32_t  RESERVED2[10];
  
  union {
    __IM  uint32_t MMCRFCECR;                   /*!< (@ 0x00000094) Ethernet MMC received frames with CRC error counter
                                                                    register                                                   */
    
    struct {
      __IM  uint32_t RFCFC      : 32;           /*!< [31..0] RFCFC                                                             */
    } MMCRFCECR_b;
  } ;
  
  union {
    __IM  uint32_t MMCRFAECR;                   /*!< (@ 0x00000098) Ethernet MMC received frames with alignment error
                                                                    counter register                                           */
    
    struct {
      __IM  uint32_t RFAEC      : 32;           /*!< [31..0] RFAEC                                                             */
    } MMCRFAECR_b;
  } ;
  __IM  uint32_t  RESERVED3[10];
  
  union {
    __IM  uint32_t MMCRGUFCR;                   /*!< (@ 0x000000C4) MMC received good unicast frames counter register          */
    
    struct {
      __IM  uint32_t RGUFC      : 32;           /*!< [31..0] RGUFC                                                             */
    } MMCRGUFCR_b;
  } ;
} Ethernet_MMC_Type;                            /*!< Size = 200 (0xc8)                                                         */



/* =========================================================================================================================== */
/* ================                                       Ethernet_MAC                                        ================ */
/* =========================================================================================================================== */


/**
  * @brief Ethernet: media access control
      (MAC) (Ethernet_MAC)
  */

typedef struct {                                /*!< (@ 0x40028000) Ethernet_MAC Structure                                     */
  
  union {
    __IOM uint32_t MACCR;                       /*!< (@ 0x00000000) Ethernet MAC configuration register                        */
    
    struct {
            uint32_t            : 2;
      __IOM uint32_t RE         : 1;            /*!< [2..2] RE                                                                 */
      __IOM uint32_t TE         : 1;            /*!< [3..3] TE                                                                 */
      __IOM uint32_t DC         : 1;            /*!< [4..4] DC                                                                 */
      __IOM uint32_t BL         : 2;            /*!< [6..5] BL                                                                 */
      __IOM uint32_t APCS       : 1;            /*!< [7..7] APCS                                                               */
            uint32_t            : 1;
      __IOM uint32_t RD         : 1;            /*!< [9..9] RD                                                                 */
      __IOM uint32_t IPCO       : 1;            /*!< [10..10] IPCO                                                             */
      __IOM uint32_t DM         : 1;            /*!< [11..11] DM                                                               */
      __IOM uint32_t LM         : 1;            /*!< [12..12] LM                                                               */
      __IOM uint32_t ROD        : 1;            /*!< [13..13] ROD                                                              */
      __IOM uint32_t FES        : 1;            /*!< [14..14] FES                                                              */
            uint32_t            : 1;
      __IOM uint32_t CSD        : 1;            /*!< [16..16] CSD                                                              */
      __IOM uint32_t IFG        : 3;            /*!< [19..17] IFG                                                              */
            uint32_t            : 2;
      __IOM uint32_t JD         : 1;            /*!< [22..22] JD                                                               */
      __IOM uint32_t WD         : 1;            /*!< [23..23] WD                                                               */
            uint32_t            : 1;
      __IOM uint32_t CSTF       : 1;            /*!< [25..25] CSTF                                                             */
            uint32_t            : 6;
    } MACCR_b;
  } ;
  
  union {
    __IOM uint32_t MACFFR;                      /*!< (@ 0x00000004) Ethernet MAC frame filter register                         */
    
    struct {
      __IOM uint32_t PM         : 1;            /*!< [0..0] PM                                                                 */
      __IOM uint32_t HU         : 1;            /*!< [1..1] HU                                                                 */
      __IOM uint32_t HM         : 1;            /*!< [2..2] HM                                                                 */
      __IOM uint32_t DAIF       : 1;            /*!< [3..3] DAIF                                                               */
      __IOM uint32_t RAM        : 1;            /*!< [4..4] RAM                                                                */
      __IOM uint32_t BFD        : 1;            /*!< [5..5] BFD                                                                */
      __IOM uint32_t PCF        : 1;            /*!< [6..6] PCF                                                                */
      __IOM uint32_t SAIF       : 1;            /*!< [7..7] SAIF                                                               */
      __IOM uint32_t SAF        : 1;            /*!< [8..8] SAF                                                                */
      __IOM uint32_t HPF        : 1;            /*!< [9..9] HPF                                                                */
            uint32_t            : 21;
      __IOM uint32_t RA         : 1;            /*!< [31..31] RA                                                               */
    } MACFFR_b;
  } ;
  
  union {
    __IOM uint32_t MACHTHR;                     /*!< (@ 0x00000008) Ethernet MAC hash table high register                      */
    
    struct {
      __IOM uint32_t HTH        : 32;           /*!< [31..0] HTH                                                               */
    } MACHTHR_b;
  } ;
  
  union {
    __IOM uint32_t MACHTLR;                     /*!< (@ 0x0000000C) Ethernet MAC hash table low register                       */
    
    struct {
      __IOM uint32_t HTL        : 32;           /*!< [31..0] HTL                                                               */
    } MACHTLR_b;
  } ;
  
  union {
    __IOM uint32_t MACMIIAR;                    /*!< (@ 0x00000010) Ethernet MAC MII address register                          */
    
    struct {
      __IOM uint32_t MB         : 1;            /*!< [0..0] MB                                                                 */
      __IOM uint32_t MW         : 1;            /*!< [1..1] MW                                                                 */
      __IOM uint32_t CR         : 3;            /*!< [4..2] CR                                                                 */
            uint32_t            : 1;
      __IOM uint32_t MR         : 5;            /*!< [10..6] MR                                                                */
      __IOM uint32_t PA         : 5;            /*!< [15..11] PA                                                               */
            uint32_t            : 16;
    } MACMIIAR_b;
  } ;
  
  union {
    __IOM uint32_t MACMIIDR;                    /*!< (@ 0x00000014) Ethernet MAC MII data register                             */
    
    struct {
      __IOM uint32_t TD         : 16;           /*!< [15..0] TD                                                                */
            uint32_t            : 16;
    } MACMIIDR_b;
  } ;
  
  union {
    __IOM uint32_t MACFCR;                      /*!< (@ 0x00000018) Ethernet MAC flow control register                         */
    
    struct {
      __IOM uint32_t FCB        : 1;            /*!< [0..0] FCB                                                                */
      __IOM uint32_t TFCE       : 1;            /*!< [1..1] TFCE                                                               */
      __IOM uint32_t RFCE       : 1;            /*!< [2..2] RFCE                                                               */
      __IOM uint32_t UPFD       : 1;            /*!< [3..3] UPFD                                                               */
      __IOM uint32_t PLT        : 2;            /*!< [5..4] PLT                                                                */
            uint32_t            : 1;
      __IOM uint32_t ZQPD       : 1;            /*!< [7..7] ZQPD                                                               */
            uint32_t            : 8;
      __IOM uint32_t PT         : 16;           /*!< [31..16] PT                                                               */
    } MACFCR_b;
  } ;
  
  union {
    __IOM uint32_t MACVLANTR;                   /*!< (@ 0x0000001C) Ethernet MAC VLAN tag register                             */
    
    struct {
      __IOM uint32_t VLANTI     : 16;           /*!< [15..0] VLANTI                                                            */
      __IOM uint32_t VLANTC     : 1;            /*!< [16..16] VLANTC                                                           */
            uint32_t            : 15;
    } MACVLANTR_b;
  } ;
  __IM  uint32_t  RESERVED[3];
  
  union {
    __IOM uint32_t MACPMTCSR;                   /*!< (@ 0x0000002C) Ethernet MAC PMT control and status register               */
    
    struct {
      __IOM uint32_t PD         : 1;            /*!< [0..0] PD                                                                 */
      __IOM uint32_t MPE        : 1;            /*!< [1..1] MPE                                                                */
      __IOM uint32_t WFE        : 1;            /*!< [2..2] WFE                                                                */
            uint32_t            : 2;
      __IOM uint32_t MPR        : 1;            /*!< [5..5] MPR                                                                */
      __IOM uint32_t WFR        : 1;            /*!< [6..6] WFR                                                                */
            uint32_t            : 2;
      __IOM uint32_t GU         : 1;            /*!< [9..9] GU                                                                 */
            uint32_t            : 21;
      __IOM uint32_t WFFRPR     : 1;            /*!< [31..31] WFFRPR                                                           */
    } MACPMTCSR_b;
  } ;
  __IM  uint32_t  RESERVED1;
  
  union {
    __IM  uint32_t MACDBGR;                     /*!< (@ 0x00000034) Ethernet MAC debug register                                */
    
    struct {
      __IM  uint32_t CR         : 1;            /*!< [0..0] CR                                                                 */
      __IM  uint32_t CSR        : 1;            /*!< [1..1] CSR                                                                */
      __IM  uint32_t ROR        : 1;            /*!< [2..2] ROR                                                                */
      __IM  uint32_t MCF        : 1;            /*!< [3..3] MCF                                                                */
      __IM  uint32_t MCP        : 1;            /*!< [4..4] MCP                                                                */
      __IM  uint32_t MCFHP      : 1;            /*!< [5..5] MCFHP                                                              */
            uint32_t            : 26;
    } MACDBGR_b;
  } ;
  
  union {
    __IOM uint32_t MACSR;                       /*!< (@ 0x00000038) Ethernet MAC interrupt status register                     */
    
    struct {
            uint32_t            : 3;
      __IM  uint32_t PMTS       : 1;            /*!< [3..3] PMTS                                                               */
      __IM  uint32_t MMCS       : 1;            /*!< [4..4] MMCS                                                               */
      __IM  uint32_t MMCRS      : 1;            /*!< [5..5] MMCRS                                                              */
      __IM  uint32_t MMCTS      : 1;            /*!< [6..6] MMCTS                                                              */
            uint32_t            : 2;
      __IOM uint32_t TSTS       : 1;            /*!< [9..9] TSTS                                                               */
            uint32_t            : 22;
    } MACSR_b;
  } ;
  
  union {
    __IOM uint32_t MACIMR;                      /*!< (@ 0x0000003C) Ethernet MAC interrupt mask register                       */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t PMTIM      : 1;            /*!< [3..3] PMTIM                                                              */
            uint32_t            : 5;
      __IOM uint32_t TSTIM      : 1;            /*!< [9..9] TSTIM                                                              */
            uint32_t            : 22;
    } MACIMR_b;
  } ;
  
  union {
    __IOM uint32_t MACA0HR;                     /*!< (@ 0x00000040) Ethernet MAC address 0 high register                       */
    
    struct {
      __IOM uint32_t MACA0H     : 16;           /*!< [15..0] MAC address0 high                                                 */
            uint32_t            : 15;
      __IM  uint32_t MO         : 1;            /*!< [31..31] Always 1                                                         */
    } MACA0HR_b;
  } ;
  
  union {
    __IOM uint32_t MACA0LR;                     /*!< (@ 0x00000044) Ethernet MAC address 0 low register                        */
    
    struct {
      __IOM uint32_t MACA0L     : 32;           /*!< [31..0] 0                                                                 */
    } MACA0LR_b;
  } ;
  
  union {
    __IOM uint32_t MACA1HR;                     /*!< (@ 0x00000048) Ethernet MAC address 1 high register                       */
    
    struct {
      __IOM uint32_t MACA1H     : 16;           /*!< [15..0] MACA1H                                                            */
            uint32_t            : 8;
      __IOM uint32_t MBC        : 6;            /*!< [29..24] MBC                                                              */
      __IOM uint32_t SA         : 1;            /*!< [30..30] SA                                                               */
      __IOM uint32_t AE         : 1;            /*!< [31..31] AE                                                               */
    } MACA1HR_b;
  } ;
  
  union {
    __IOM uint32_t MACA1LR;                     /*!< (@ 0x0000004C) Ethernet MAC address1 low register                         */
    
    struct {
      __IOM uint32_t MACA1LR    : 32;           /*!< [31..0] MACA1LR                                                           */
    } MACA1LR_b;
  } ;
  
  union {
    __IOM uint32_t MACA2HR;                     /*!< (@ 0x00000050) Ethernet MAC address 2 high register                       */
    
    struct {
      __IOM uint32_t MAC2AH     : 16;           /*!< [15..0] MAC2AH                                                            */
            uint32_t            : 8;
      __IOM uint32_t MBC        : 6;            /*!< [29..24] MBC                                                              */
      __IOM uint32_t SA         : 1;            /*!< [30..30] SA                                                               */
      __IOM uint32_t AE         : 1;            /*!< [31..31] AE                                                               */
    } MACA2HR_b;
  } ;
  
  union {
    __IOM uint32_t MACA2LR;                     /*!< (@ 0x00000054) Ethernet MAC address 2 low register                        */
    
    struct {
      __IOM uint32_t MACA2L     : 31;           /*!< [30..0] MACA2L                                                            */
            uint32_t            : 1;
    } MACA2LR_b;
  } ;
  
  union {
    __IOM uint32_t MACA3HR;                     /*!< (@ 0x00000058) Ethernet MAC address 3 high register                       */
    
    struct {
      __IOM uint32_t MACA3H     : 16;           /*!< [15..0] MACA3H                                                            */
            uint32_t            : 8;
      __IOM uint32_t MBC        : 6;            /*!< [29..24] MBC                                                              */
      __IOM uint32_t SA         : 1;            /*!< [30..30] SA                                                               */
      __IOM uint32_t AE         : 1;            /*!< [31..31] AE                                                               */
    } MACA3HR_b;
  } ;
  
  union {
    __IOM uint32_t MACA3LR;                     /*!< (@ 0x0000005C) Ethernet MAC address 3 low register                        */
    
    struct {
      __IOM uint32_t MBCA3L     : 32;           /*!< [31..0] MBCA3L                                                            */
    } MACA3LR_b;
  } ;
  __IOM uint32_t  MACRWUFFER;                   /*!< (@ 0x00000060) Ethernet MAC remote wakeup frame filter register           */
} Ethernet_MAC_Type;                            /*!< Size = 100 (0x64)                                                         */



/* =========================================================================================================================== */
/* ================                                       Ethernet_DMA                                        ================ */
/* =========================================================================================================================== */

/* ========================================================  DMABMR  ========================================================= */
#define Ethernet_DMA_DMABMR_SR_Pos        (0UL)                     /*!< SR (Bit 0)                                            */
#define Ethernet_DMA_DMABMR_SR_Msk        (0x1UL)                   /*!< SR (Bitfield-Mask: 0x01)                              */
#define Ethernet_DMA_DMABMR_DA_Pos        (1UL)                     /*!< DA (Bit 1)                                            */
#define Ethernet_DMA_DMABMR_DA_Msk        (0x2UL)                   /*!< DA (Bitfield-Mask: 0x01)                              */
#define Ethernet_DMA_DMABMR_DSL_Pos       (2UL)                     /*!< DSL (Bit 2)                                           */
#define Ethernet_DMA_DMABMR_DSL_Msk       (0x7cUL)                  /*!< DSL (Bitfield-Mask: 0x1f)                             */
#define Ethernet_DMA_DMABMR_EDFE_Pos      (7UL)                     /*!< EDFE (Bit 7)                                          */
#define Ethernet_DMA_DMABMR_EDFE_Msk      (0x80UL)                  /*!< EDFE (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMABMR_PBL_Pos       (8UL)                     /*!< PBL (Bit 8)                                           */
#define Ethernet_DMA_DMABMR_PBL_Msk       (0x3f00UL)                /*!< PBL (Bitfield-Mask: 0x3f)                             */
#define Ethernet_DMA_DMABMR_RTPR_Pos      (14UL)                    /*!< RTPR (Bit 14)                                         */
#define Ethernet_DMA_DMABMR_RTPR_Msk      (0xc000UL)                /*!< RTPR (Bitfield-Mask: 0x03)                            */
#define Ethernet_DMA_DMABMR_FB_Pos        (16UL)                    /*!< FB (Bit 16)                                           */
#define Ethernet_DMA_DMABMR_FB_Msk        (0x10000UL)               /*!< FB (Bitfield-Mask: 0x01)                              */
#define Ethernet_DMA_DMABMR_RDP_Pos       (17UL)                    /*!< RDP (Bit 17)                                          */
#define Ethernet_DMA_DMABMR_RDP_Msk       (0x7e0000UL)              /*!< RDP (Bitfield-Mask: 0x3f)                             */
#define Ethernet_DMA_DMABMR_USP_Pos       (23UL)                    /*!< USP (Bit 23)                                          */
#define Ethernet_DMA_DMABMR_USP_Msk       (0x800000UL)              /*!< USP (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMABMR_FPM_Pos       (24UL)                    /*!< FPM (Bit 24)                                          */
#define Ethernet_DMA_DMABMR_FPM_Msk       (0x1000000UL)             /*!< FPM (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMABMR_AAB_Pos       (25UL)                    /*!< AAB (Bit 25)                                          */
#define Ethernet_DMA_DMABMR_AAB_Msk       (0x2000000UL)             /*!< AAB (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMABMR_MB_Pos        (26UL)                    /*!< MB (Bit 26)                                           */
#define Ethernet_DMA_DMABMR_MB_Msk        (0x4000000UL)             /*!< MB (Bitfield-Mask: 0x01)                              */
/* ========================================================  DMATPDR  ======================================================== */
#define Ethernet_DMA_DMATPDR_TPD_Pos      (0UL)                     /*!< TPD (Bit 0)                                           */
#define Ethernet_DMA_DMATPDR_TPD_Msk      (0xffffffffUL)            /*!< TPD (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  DMARPDR  ======================================================== */
#define Ethernet_DMA_DMARPDR_RPD_Pos      (0UL)                     /*!< RPD (Bit 0)                                           */
#define Ethernet_DMA_DMARPDR_RPD_Msk      (0xffffffffUL)            /*!< RPD (Bitfield-Mask: 0xffffffff)                       */
/* =======================================================  DMARDLAR  ======================================================== */
#define Ethernet_DMA_DMARDLAR_SRL_Pos     (0UL)                     /*!< SRL (Bit 0)                                           */
#define Ethernet_DMA_DMARDLAR_SRL_Msk     (0xffffffffUL)            /*!< SRL (Bitfield-Mask: 0xffffffff)                       */
/* =======================================================  DMATDLAR  ======================================================== */
#define Ethernet_DMA_DMATDLAR_STL_Pos     (0UL)                     /*!< STL (Bit 0)                                           */
#define Ethernet_DMA_DMATDLAR_STL_Msk     (0xffffffffUL)            /*!< STL (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  DMASR  ========================================================= */
#define Ethernet_DMA_DMASR_TS_Pos         (0UL)                     /*!< TS (Bit 0)                                            */
#define Ethernet_DMA_DMASR_TS_Msk         (0x1UL)                   /*!< TS (Bitfield-Mask: 0x01)                              */
#define Ethernet_DMA_DMASR_TPSS_Pos       (1UL)                     /*!< TPSS (Bit 1)                                          */
#define Ethernet_DMA_DMASR_TPSS_Msk       (0x2UL)                   /*!< TPSS (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMASR_TBUS_Pos       (2UL)                     /*!< TBUS (Bit 2)                                          */
#define Ethernet_DMA_DMASR_TBUS_Msk       (0x4UL)                   /*!< TBUS (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMASR_TJTS_Pos       (3UL)                     /*!< TJTS (Bit 3)                                          */
#define Ethernet_DMA_DMASR_TJTS_Msk       (0x8UL)                   /*!< TJTS (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMASR_ROS_Pos        (4UL)                     /*!< ROS (Bit 4)                                           */
#define Ethernet_DMA_DMASR_ROS_Msk        (0x10UL)                  /*!< ROS (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMASR_TUS_Pos        (5UL)                     /*!< TUS (Bit 5)                                           */
#define Ethernet_DMA_DMASR_TUS_Msk        (0x20UL)                  /*!< TUS (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMASR_RS_Pos         (6UL)                     /*!< RS (Bit 6)                                            */
#define Ethernet_DMA_DMASR_RS_Msk         (0x40UL)                  /*!< RS (Bitfield-Mask: 0x01)                              */
#define Ethernet_DMA_DMASR_RBUS_Pos       (7UL)                     /*!< RBUS (Bit 7)                                          */
#define Ethernet_DMA_DMASR_RBUS_Msk       (0x80UL)                  /*!< RBUS (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMASR_RPSS_Pos       (8UL)                     /*!< RPSS (Bit 8)                                          */
#define Ethernet_DMA_DMASR_RPSS_Msk       (0x100UL)                 /*!< RPSS (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMASR_PWTS_Pos       (9UL)                     /*!< PWTS (Bit 9)                                          */
#define Ethernet_DMA_DMASR_PWTS_Msk       (0x200UL)                 /*!< PWTS (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMASR_ETS_Pos        (10UL)                    /*!< ETS (Bit 10)                                          */
#define Ethernet_DMA_DMASR_ETS_Msk        (0x400UL)                 /*!< ETS (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMASR_FBES_Pos       (13UL)                    /*!< FBES (Bit 13)                                         */
#define Ethernet_DMA_DMASR_FBES_Msk       (0x2000UL)                /*!< FBES (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMASR_ERS_Pos        (14UL)                    /*!< ERS (Bit 14)                                          */
#define Ethernet_DMA_DMASR_ERS_Msk        (0x4000UL)                /*!< ERS (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMASR_AIS_Pos        (15UL)                    /*!< AIS (Bit 15)                                          */
#define Ethernet_DMA_DMASR_AIS_Msk        (0x8000UL)                /*!< AIS (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMASR_NIS_Pos        (16UL)                    /*!< NIS (Bit 16)                                          */
#define Ethernet_DMA_DMASR_NIS_Msk        (0x10000UL)               /*!< NIS (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMASR_RPS_Pos        (17UL)                    /*!< RPS (Bit 17)                                          */
#define Ethernet_DMA_DMASR_RPS_Msk        (0xe0000UL)               /*!< RPS (Bitfield-Mask: 0x07)                             */
#define Ethernet_DMA_DMASR_TPS_Pos        (20UL)                    /*!< TPS (Bit 20)                                          */
#define Ethernet_DMA_DMASR_TPS_Msk        (0x700000UL)              /*!< TPS (Bitfield-Mask: 0x07)                             */
#define Ethernet_DMA_DMASR_EBS_Pos        (23UL)                    /*!< EBS (Bit 23)                                          */
#define Ethernet_DMA_DMASR_EBS_Msk        (0x3800000UL)             /*!< EBS (Bitfield-Mask: 0x07)                             */
#define Ethernet_DMA_DMASR_MMCS_Pos       (27UL)                    /*!< MMCS (Bit 27)                                         */
#define Ethernet_DMA_DMASR_MMCS_Msk       (0x8000000UL)             /*!< MMCS (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMASR_PMTS_Pos       (28UL)                    /*!< PMTS (Bit 28)                                         */
#define Ethernet_DMA_DMASR_PMTS_Msk       (0x10000000UL)            /*!< PMTS (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMASR_TSTS_Pos       (29UL)                    /*!< TSTS (Bit 29)                                         */
#define Ethernet_DMA_DMASR_TSTS_Msk       (0x20000000UL)            /*!< TSTS (Bitfield-Mask: 0x01)                            */
/* ========================================================  DMAOMR  ========================================================= */
#define Ethernet_DMA_DMAOMR_SR_Pos        (1UL)                     /*!< SR (Bit 1)                                            */
#define Ethernet_DMA_DMAOMR_SR_Msk        (0x2UL)                   /*!< SR (Bitfield-Mask: 0x01)                              */
#define Ethernet_DMA_DMAOMR_OSF_Pos       (2UL)                     /*!< OSF (Bit 2)                                           */
#define Ethernet_DMA_DMAOMR_OSF_Msk       (0x4UL)                   /*!< OSF (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMAOMR_RTC_Pos       (3UL)                     /*!< RTC (Bit 3)                                           */
#define Ethernet_DMA_DMAOMR_RTC_Msk       (0x18UL)                  /*!< RTC (Bitfield-Mask: 0x03)                             */
#define Ethernet_DMA_DMAOMR_FUGF_Pos      (6UL)                     /*!< FUGF (Bit 6)                                          */
#define Ethernet_DMA_DMAOMR_FUGF_Msk      (0x40UL)                  /*!< FUGF (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMAOMR_FEF_Pos       (7UL)                     /*!< FEF (Bit 7)                                           */
#define Ethernet_DMA_DMAOMR_FEF_Msk       (0x80UL)                  /*!< FEF (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMAOMR_ST_Pos        (13UL)                    /*!< ST (Bit 13)                                           */
#define Ethernet_DMA_DMAOMR_ST_Msk        (0x2000UL)                /*!< ST (Bitfield-Mask: 0x01)                              */
#define Ethernet_DMA_DMAOMR_TTC_Pos       (14UL)                    /*!< TTC (Bit 14)                                          */
#define Ethernet_DMA_DMAOMR_TTC_Msk       (0x1c000UL)               /*!< TTC (Bitfield-Mask: 0x07)                             */
#define Ethernet_DMA_DMAOMR_FTF_Pos       (20UL)                    /*!< FTF (Bit 20)                                          */
#define Ethernet_DMA_DMAOMR_FTF_Msk       (0x100000UL)              /*!< FTF (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMAOMR_TSF_Pos       (21UL)                    /*!< TSF (Bit 21)                                          */
#define Ethernet_DMA_DMAOMR_TSF_Msk       (0x200000UL)              /*!< TSF (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMAOMR_DFRF_Pos      (24UL)                    /*!< DFRF (Bit 24)                                         */
#define Ethernet_DMA_DMAOMR_DFRF_Msk      (0x1000000UL)             /*!< DFRF (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMAOMR_RSF_Pos       (25UL)                    /*!< RSF (Bit 25)                                          */
#define Ethernet_DMA_DMAOMR_RSF_Msk       (0x2000000UL)             /*!< RSF (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMAOMR_DTCEFD_Pos    (26UL)                    /*!< DTCEFD (Bit 26)                                       */
#define Ethernet_DMA_DMAOMR_DTCEFD_Msk    (0x4000000UL)             /*!< DTCEFD (Bitfield-Mask: 0x01)                          */
/* ========================================================  DMAIER  ========================================================= */
#define Ethernet_DMA_DMAIER_TIE_Pos       (0UL)                     /*!< TIE (Bit 0)                                           */
#define Ethernet_DMA_DMAIER_TIE_Msk       (0x1UL)                   /*!< TIE (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMAIER_TPSIE_Pos     (1UL)                     /*!< TPSIE (Bit 1)                                         */
#define Ethernet_DMA_DMAIER_TPSIE_Msk     (0x2UL)                   /*!< TPSIE (Bitfield-Mask: 0x01)                           */
#define Ethernet_DMA_DMAIER_TBUIE_Pos     (2UL)                     /*!< TBUIE (Bit 2)                                         */
#define Ethernet_DMA_DMAIER_TBUIE_Msk     (0x4UL)                   /*!< TBUIE (Bitfield-Mask: 0x01)                           */
#define Ethernet_DMA_DMAIER_TJTIE_Pos     (3UL)                     /*!< TJTIE (Bit 3)                                         */
#define Ethernet_DMA_DMAIER_TJTIE_Msk     (0x8UL)                   /*!< TJTIE (Bitfield-Mask: 0x01)                           */
#define Ethernet_DMA_DMAIER_ROIE_Pos      (4UL)                     /*!< ROIE (Bit 4)                                          */
#define Ethernet_DMA_DMAIER_ROIE_Msk      (0x10UL)                  /*!< ROIE (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMAIER_TUIE_Pos      (5UL)                     /*!< TUIE (Bit 5)                                          */
#define Ethernet_DMA_DMAIER_TUIE_Msk      (0x20UL)                  /*!< TUIE (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMAIER_RIE_Pos       (6UL)                     /*!< RIE (Bit 6)                                           */
#define Ethernet_DMA_DMAIER_RIE_Msk       (0x40UL)                  /*!< RIE (Bitfield-Mask: 0x01)                             */
#define Ethernet_DMA_DMAIER_RBUIE_Pos     (7UL)                     /*!< RBUIE (Bit 7)                                         */
#define Ethernet_DMA_DMAIER_RBUIE_Msk     (0x80UL)                  /*!< RBUIE (Bitfield-Mask: 0x01)                           */
#define Ethernet_DMA_DMAIER_RPSIE_Pos     (8UL)                     /*!< RPSIE (Bit 8)                                         */
#define Ethernet_DMA_DMAIER_RPSIE_Msk     (0x100UL)                 /*!< RPSIE (Bitfield-Mask: 0x01)                           */
#define Ethernet_DMA_DMAIER_RWTIE_Pos     (9UL)                     /*!< RWTIE (Bit 9)                                         */
#define Ethernet_DMA_DMAIER_RWTIE_Msk     (0x200UL)                 /*!< RWTIE (Bitfield-Mask: 0x01)                           */
#define Ethernet_DMA_DMAIER_ETIE_Pos      (10UL)                    /*!< ETIE (Bit 10)                                         */
#define Ethernet_DMA_DMAIER_ETIE_Msk      (0x400UL)                 /*!< ETIE (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMAIER_FBEIE_Pos     (13UL)                    /*!< FBEIE (Bit 13)                                        */
#define Ethernet_DMA_DMAIER_FBEIE_Msk     (0x2000UL)                /*!< FBEIE (Bitfield-Mask: 0x01)                           */
#define Ethernet_DMA_DMAIER_ERIE_Pos      (14UL)                    /*!< ERIE (Bit 14)                                         */
#define Ethernet_DMA_DMAIER_ERIE_Msk      (0x4000UL)                /*!< ERIE (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMAIER_AISE_Pos      (15UL)                    /*!< AISE (Bit 15)                                         */
#define Ethernet_DMA_DMAIER_AISE_Msk      (0x8000UL)                /*!< AISE (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMAIER_NISE_Pos      (16UL)                    /*!< NISE (Bit 16)                                         */
#define Ethernet_DMA_DMAIER_NISE_Msk      (0x10000UL)               /*!< NISE (Bitfield-Mask: 0x01)                            */
/* =======================================================  DMAMFBOCR  ======================================================= */
#define Ethernet_DMA_DMAMFBOCR_MFC_Pos    (0UL)                     /*!< MFC (Bit 0)                                           */
#define Ethernet_DMA_DMAMFBOCR_MFC_Msk    (0xffffUL)                /*!< MFC (Bitfield-Mask: 0xffff)                           */
#define Ethernet_DMA_DMAMFBOCR_OMFC_Pos   (16UL)                    /*!< OMFC (Bit 16)                                         */
#define Ethernet_DMA_DMAMFBOCR_OMFC_Msk   (0x10000UL)               /*!< OMFC (Bitfield-Mask: 0x01)                            */
#define Ethernet_DMA_DMAMFBOCR_MFA_Pos    (17UL)                    /*!< MFA (Bit 17)                                          */
#define Ethernet_DMA_DMAMFBOCR_MFA_Msk    (0xffe0000UL)             /*!< MFA (Bitfield-Mask: 0x7ff)                            */
#define Ethernet_DMA_DMAMFBOCR_OFOC_Pos   (28UL)                    /*!< OFOC (Bit 28)                                         */
#define Ethernet_DMA_DMAMFBOCR_OFOC_Msk   (0x10000000UL)            /*!< OFOC (Bitfield-Mask: 0x01)                            */
/* =======================================================  DMARSWTR  ======================================================== */
#define Ethernet_DMA_DMARSWTR_RSWTC_Pos   (0UL)                     /*!< RSWTC (Bit 0)                                         */
#define Ethernet_DMA_DMARSWTR_RSWTC_Msk   (0xffUL)                  /*!< RSWTC (Bitfield-Mask: 0xff)                           */
/* =======================================================  DMACHTDR  ======================================================== */
#define Ethernet_DMA_DMACHTDR_HTDAP_Pos   (0UL)                     /*!< HTDAP (Bit 0)                                         */
#define Ethernet_DMA_DMACHTDR_HTDAP_Msk   (0xffffffffUL)            /*!< HTDAP (Bitfield-Mask: 0xffffffff)                     */
/* =======================================================  DMACHRDR  ======================================================== */
#define Ethernet_DMA_DMACHRDR_HRDAP_Pos   (0UL)                     /*!< HRDAP (Bit 0)                                         */
#define Ethernet_DMA_DMACHRDR_HRDAP_Msk   (0xffffffffUL)            /*!< HRDAP (Bitfield-Mask: 0xffffffff)                     */
/* =======================================================  DMACHTBAR  ======================================================= */
#define Ethernet_DMA_DMACHTBAR_HTBAP_Pos  (0UL)                     /*!< HTBAP (Bit 0)                                         */
#define Ethernet_DMA_DMACHTBAR_HTBAP_Msk  (0xffffffffUL)            /*!< HTBAP (Bitfield-Mask: 0xffffffff)                     */
/* =======================================================  DMACHRBAR  ======================================================= */
#define Ethernet_DMA_DMACHRBAR_HRBAP_Pos  (0UL)                     /*!< HRBAP (Bit 0)                                         */
#define Ethernet_DMA_DMACHRBAR_HRBAP_Msk  (0xffffffffUL)            /*!< HRBAP (Bitfield-Mask: 0xffffffff)                     */


/* =========================================================================================================================== */
/* ================                                       Ethernet_PTP                                        ================ */
/* =========================================================================================================================== */

/* ========================================================  PTPTSCR  ======================================================== */
#define Ethernet_PTP_PTPTSCR_TSE_Pos      (0UL)                     /*!< TSE (Bit 0)                                           */
#define Ethernet_PTP_PTPTSCR_TSE_Msk      (0x1UL)                   /*!< TSE (Bitfield-Mask: 0x01)                             */
#define Ethernet_PTP_PTPTSCR_TSFCU_Pos    (1UL)                     /*!< TSFCU (Bit 1)                                         */
#define Ethernet_PTP_PTPTSCR_TSFCU_Msk    (0x2UL)                   /*!< TSFCU (Bitfield-Mask: 0x01)                           */
#define Ethernet_PTP_PTPTSCR_TSPTPPSV2E_Pos (10UL)                  /*!< TSPTPPSV2E (Bit 10)                                   */
#define Ethernet_PTP_PTPTSCR_TSPTPPSV2E_Msk (0x400UL)               /*!< TSPTPPSV2E (Bitfield-Mask: 0x01)                      */
#define Ethernet_PTP_PTPTSCR_TSSPTPOEFE_Pos (11UL)                  /*!< TSSPTPOEFE (Bit 11)                                   */
#define Ethernet_PTP_PTPTSCR_TSSPTPOEFE_Msk (0x800UL)               /*!< TSSPTPOEFE (Bitfield-Mask: 0x01)                      */
#define Ethernet_PTP_PTPTSCR_TSSIPV6FE_Pos (12UL)                   /*!< TSSIPV6FE (Bit 12)                                    */
#define Ethernet_PTP_PTPTSCR_TSSIPV6FE_Msk (0x1000UL)               /*!< TSSIPV6FE (Bitfield-Mask: 0x01)                       */
#define Ethernet_PTP_PTPTSCR_TSSIPV4FE_Pos (13UL)                   /*!< TSSIPV4FE (Bit 13)                                    */
#define Ethernet_PTP_PTPTSCR_TSSIPV4FE_Msk (0x2000UL)               /*!< TSSIPV4FE (Bitfield-Mask: 0x01)                       */
#define Ethernet_PTP_PTPTSCR_TSSEME_Pos   (14UL)                    /*!< TSSEME (Bit 14)                                       */
#define Ethernet_PTP_PTPTSCR_TSSEME_Msk   (0x4000UL)                /*!< TSSEME (Bitfield-Mask: 0x01)                          */
#define Ethernet_PTP_PTPTSCR_TSSMRME_Pos  (15UL)                    /*!< TSSMRME (Bit 15)                                      */
#define Ethernet_PTP_PTPTSCR_TSSMRME_Msk  (0x8000UL)                /*!< TSSMRME (Bitfield-Mask: 0x01)                         */
#define Ethernet_PTP_PTPTSCR_TSCNT_Pos    (16UL)                    /*!< TSCNT (Bit 16)                                        */
#define Ethernet_PTP_PTPTSCR_TSCNT_Msk    (0x30000UL)               /*!< TSCNT (Bitfield-Mask: 0x03)                           */
#define Ethernet_PTP_PTPTSCR_TSPFFMAE_Pos (18UL)                    /*!< TSPFFMAE (Bit 18)                                     */
#define Ethernet_PTP_PTPTSCR_TSPFFMAE_Msk (0x40000UL)               /*!< TSPFFMAE (Bitfield-Mask: 0x01)                        */
#define Ethernet_PTP_PTPTSCR_TSSTI_Pos    (2UL)                     /*!< TSSTI (Bit 2)                                         */
#define Ethernet_PTP_PTPTSCR_TSSTI_Msk    (0x4UL)                   /*!< TSSTI (Bitfield-Mask: 0x01)                           */
#define Ethernet_PTP_PTPTSCR_TSSTU_Pos    (3UL)                     /*!< TSSTU (Bit 3)                                         */
#define Ethernet_PTP_PTPTSCR_TSSTU_Msk    (0x8UL)                   /*!< TSSTU (Bitfield-Mask: 0x01)                           */
#define Ethernet_PTP_PTPTSCR_TSITE_Pos    (4UL)                     /*!< TSITE (Bit 4)                                         */
#define Ethernet_PTP_PTPTSCR_TSITE_Msk    (0x10UL)                  /*!< TSITE (Bitfield-Mask: 0x01)                           */
#define Ethernet_PTP_PTPTSCR_TTSARU_Pos   (5UL)                     /*!< TTSARU (Bit 5)                                        */
#define Ethernet_PTP_PTPTSCR_TTSARU_Msk   (0x20UL)                  /*!< TTSARU (Bitfield-Mask: 0x01)                          */
#define Ethernet_PTP_PTPTSCR_TSSARFE_Pos  (8UL)                     /*!< TSSARFE (Bit 8)                                       */
#define Ethernet_PTP_PTPTSCR_TSSARFE_Msk  (0x100UL)                 /*!< TSSARFE (Bitfield-Mask: 0x01)                         */
#define Ethernet_PTP_PTPTSCR_TSSSR_Pos    (9UL)                     /*!< TSSSR (Bit 9)                                         */
#define Ethernet_PTP_PTPTSCR_TSSSR_Msk    (0x200UL)                 /*!< TSSSR (Bitfield-Mask: 0x01)                           */
/* ========================================================  PTPSSIR  ======================================================== */
#define Ethernet_PTP_PTPSSIR_STSSI_Pos    (0UL)                     /*!< STSSI (Bit 0)                                         */
#define Ethernet_PTP_PTPSSIR_STSSI_Msk    (0xffUL)                  /*!< STSSI (Bitfield-Mask: 0xff)                           */
/* ========================================================  PTPTSHR  ======================================================== */
#define Ethernet_PTP_PTPTSHR_STS_Pos      (0UL)                     /*!< STS (Bit 0)                                           */
#define Ethernet_PTP_PTPTSHR_STS_Msk      (0xffffffffUL)            /*!< STS (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  PTPTSLR  ======================================================== */
#define Ethernet_PTP_PTPTSLR_STSS_Pos     (0UL)                     /*!< STSS (Bit 0)                                          */
#define Ethernet_PTP_PTPTSLR_STSS_Msk     (0x7fffffffUL)            /*!< STSS (Bitfield-Mask: 0x7fffffff)                      */
#define Ethernet_PTP_PTPTSLR_STPNS_Pos    (31UL)                    /*!< STPNS (Bit 31)                                        */
#define Ethernet_PTP_PTPTSLR_STPNS_Msk    (0x80000000UL)            /*!< STPNS (Bitfield-Mask: 0x01)                           */
/* =======================================================  PTPTSHUR  ======================================================== */
#define Ethernet_PTP_PTPTSHUR_TSUS_Pos    (0UL)                     /*!< TSUS (Bit 0)                                          */
#define Ethernet_PTP_PTPTSHUR_TSUS_Msk    (0xffffffffUL)            /*!< TSUS (Bitfield-Mask: 0xffffffff)                      */
/* =======================================================  PTPTSLUR  ======================================================== */
#define Ethernet_PTP_PTPTSLUR_TSUSS_Pos   (0UL)                     /*!< TSUSS (Bit 0)                                         */
#define Ethernet_PTP_PTPTSLUR_TSUSS_Msk   (0x7fffffffUL)            /*!< TSUSS (Bitfield-Mask: 0x7fffffff)                     */
#define Ethernet_PTP_PTPTSLUR_TSUPNS_Pos  (31UL)                    /*!< TSUPNS (Bit 31)                                       */
#define Ethernet_PTP_PTPTSLUR_TSUPNS_Msk  (0x80000000UL)            /*!< TSUPNS (Bitfield-Mask: 0x01)                          */
/* ========================================================  PTPTSAR  ======================================================== */
#define Ethernet_PTP_PTPTSAR_TSA_Pos      (0UL)                     /*!< TSA (Bit 0)                                           */
#define Ethernet_PTP_PTPTSAR_TSA_Msk      (0xffffffffUL)            /*!< TSA (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  PTPTTHR  ======================================================== */
#define Ethernet_PTP_PTPTTHR_TTSH_Pos     (0UL)                     /*!< TTSH (Bit 0)                                          */
#define Ethernet_PTP_PTPTTHR_TTSH_Msk     (0xffffffffUL)            /*!< TTSH (Bitfield-Mask: 0xffffffff)                      */
/* ========================================================  PTPTTLR  ======================================================== */
#define Ethernet_PTP_PTPTTLR_TTSL_Pos     (0UL)                     /*!< TTSL (Bit 0)                                          */
#define Ethernet_PTP_PTPTTLR_TTSL_Msk     (0xffffffffUL)            /*!< TTSL (Bitfield-Mask: 0xffffffff)                      */
/* ========================================================  PTPTSSR  ======================================================== */
#define Ethernet_PTP_PTPTSSR_TSSO_Pos     (0UL)                     /*!< TSSO (Bit 0)                                          */
#define Ethernet_PTP_PTPTSSR_TSSO_Msk     (0x1UL)                   /*!< TSSO (Bitfield-Mask: 0x01)                            */
#define Ethernet_PTP_PTPTSSR_TSTTR_Pos    (1UL)                     /*!< TSTTR (Bit 1)                                         */
#define Ethernet_PTP_PTPTSSR_TSTTR_Msk    (0x2UL)                   /*!< TSTTR (Bitfield-Mask: 0x01)                           */
/* =======================================================  PTPPPSCR  ======================================================== */
#define Ethernet_PTP_PTPPPSCR_TSSO_Pos    (0UL)                     /*!< TSSO (Bit 0)                                          */
#define Ethernet_PTP_PTPPPSCR_TSSO_Msk    (0x1UL)                   /*!< TSSO (Bitfield-Mask: 0x01)                            */
#define Ethernet_PTP_PTPPPSCR_TSTTR_Pos   (1UL)                     /*!< TSTTR (Bit 1)                                         */
#define Ethernet_PTP_PTPPPSCR_TSTTR_Msk   (0x2UL)                   /*!< TSTTR (Bitfield-Mask: 0x01)                           */


/* =========================================================================================================================== */
/* ================                                       Ethernet_MMC                                        ================ */
/* =========================================================================================================================== */

/* =========================================================  MMCCR  ========================================================= */
#define Ethernet_MMC_MMCCR_CR_Pos         (0UL)                     /*!< CR (Bit 0)                                            */
#define Ethernet_MMC_MMCCR_CR_Msk         (0x1UL)                   /*!< CR (Bitfield-Mask: 0x01)                              */
#define Ethernet_MMC_MMCCR_CSR_Pos        (1UL)                     /*!< CSR (Bit 1)                                           */
#define Ethernet_MMC_MMCCR_CSR_Msk        (0x2UL)                   /*!< CSR (Bitfield-Mask: 0x01)                             */
#define Ethernet_MMC_MMCCR_ROR_Pos        (2UL)                     /*!< ROR (Bit 2)                                           */
#define Ethernet_MMC_MMCCR_ROR_Msk        (0x4UL)                   /*!< ROR (Bitfield-Mask: 0x01)                             */
#define Ethernet_MMC_MMCCR_MCF_Pos        (3UL)                     /*!< MCF (Bit 3)                                           */
#define Ethernet_MMC_MMCCR_MCF_Msk        (0x8UL)                   /*!< MCF (Bitfield-Mask: 0x01)                             */
#define Ethernet_MMC_MMCCR_MCP_Pos        (4UL)                     /*!< MCP (Bit 4)                                           */
#define Ethernet_MMC_MMCCR_MCP_Msk        (0x10UL)                  /*!< MCP (Bitfield-Mask: 0x01)                             */
#define Ethernet_MMC_MMCCR_MCFHP_Pos      (5UL)                     /*!< MCFHP (Bit 5)                                         */
#define Ethernet_MMC_MMCCR_MCFHP_Msk      (0x20UL)                  /*!< MCFHP (Bitfield-Mask: 0x01)                           */
/* ========================================================  MMCRIR  ========================================================= */
#define Ethernet_MMC_MMCRIR_RFCES_Pos     (5UL)                     /*!< RFCES (Bit 5)                                         */
#define Ethernet_MMC_MMCRIR_RFCES_Msk     (0x20UL)                  /*!< RFCES (Bitfield-Mask: 0x01)                           */
#define Ethernet_MMC_MMCRIR_RFAES_Pos     (6UL)                     /*!< RFAES (Bit 6)                                         */
#define Ethernet_MMC_MMCRIR_RFAES_Msk     (0x40UL)                  /*!< RFAES (Bitfield-Mask: 0x01)                           */
#define Ethernet_MMC_MMCRIR_RGUFS_Pos     (17UL)                    /*!< RGUFS (Bit 17)                                        */
#define Ethernet_MMC_MMCRIR_RGUFS_Msk     (0x20000UL)               /*!< RGUFS (Bitfield-Mask: 0x01)                           */
/* ========================================================  MMCTIR  ========================================================= */
#define Ethernet_MMC_MMCTIR_TGFSCS_Pos    (14UL)                    /*!< TGFSCS (Bit 14)                                       */
#define Ethernet_MMC_MMCTIR_TGFSCS_Msk    (0x4000UL)                /*!< TGFSCS (Bitfield-Mask: 0x01)                          */
#define Ethernet_MMC_MMCTIR_TGFMSCS_Pos   (15UL)                    /*!< TGFMSCS (Bit 15)                                      */
#define Ethernet_MMC_MMCTIR_TGFMSCS_Msk   (0x8000UL)                /*!< TGFMSCS (Bitfield-Mask: 0x01)                         */
#define Ethernet_MMC_MMCTIR_TGFS_Pos      (21UL)                    /*!< TGFS (Bit 21)                                         */
#define Ethernet_MMC_MMCTIR_TGFS_Msk      (0x200000UL)              /*!< TGFS (Bitfield-Mask: 0x01)                            */
/* ========================================================  MMCRIMR  ======================================================== */
#define Ethernet_MMC_MMCRIMR_RFCEM_Pos    (5UL)                     /*!< RFCEM (Bit 5)                                         */
#define Ethernet_MMC_MMCRIMR_RFCEM_Msk    (0x20UL)                  /*!< RFCEM (Bitfield-Mask: 0x01)                           */
#define Ethernet_MMC_MMCRIMR_RFAEM_Pos    (6UL)                     /*!< RFAEM (Bit 6)                                         */
#define Ethernet_MMC_MMCRIMR_RFAEM_Msk    (0x40UL)                  /*!< RFAEM (Bitfield-Mask: 0x01)                           */
#define Ethernet_MMC_MMCRIMR_RGUFM_Pos    (17UL)                    /*!< RGUFM (Bit 17)                                        */
#define Ethernet_MMC_MMCRIMR_RGUFM_Msk    (0x20000UL)               /*!< RGUFM (Bitfield-Mask: 0x01)                           */
/* ========================================================  MMCTIMR  ======================================================== */
#define Ethernet_MMC_MMCTIMR_TGFSCM_Pos   (14UL)                    /*!< TGFSCM (Bit 14)                                       */
#define Ethernet_MMC_MMCTIMR_TGFSCM_Msk   (0x4000UL)                /*!< TGFSCM (Bitfield-Mask: 0x01)                          */
#define Ethernet_MMC_MMCTIMR_TGFMSCM_Pos  (15UL)                    /*!< TGFMSCM (Bit 15)                                      */
#define Ethernet_MMC_MMCTIMR_TGFMSCM_Msk  (0x8000UL)                /*!< TGFMSCM (Bitfield-Mask: 0x01)                         */
#define Ethernet_MMC_MMCTIMR_TGFM_Pos     (16UL)                    /*!< TGFM (Bit 16)                                         */
#define Ethernet_MMC_MMCTIMR_TGFM_Msk     (0x10000UL)               /*!< TGFM (Bitfield-Mask: 0x01)                            */
/* ======================================================  MMCTGFSCCR  ======================================================= */
#define Ethernet_MMC_MMCTGFSCCR_TGFSCC_Pos (0UL)                    /*!< TGFSCC (Bit 0)                                        */
#define Ethernet_MMC_MMCTGFSCCR_TGFSCC_Msk (0xffffffffUL)           /*!< TGFSCC (Bitfield-Mask: 0xffffffff)                    */
/* ======================================================  MMCTGFMSCCR  ====================================================== */
#define Ethernet_MMC_MMCTGFMSCCR_TGFMSCC_Pos (0UL)                  /*!< TGFMSCC (Bit 0)                                       */
#define Ethernet_MMC_MMCTGFMSCCR_TGFMSCC_Msk (0xffffffffUL)         /*!< TGFMSCC (Bitfield-Mask: 0xffffffff)                   */
/* =======================================================  MMCTGFCR  ======================================================== */
#define Ethernet_MMC_MMCTGFCR_TGFC_Pos    (0UL)                     /*!< TGFC (Bit 0)                                          */
#define Ethernet_MMC_MMCTGFCR_TGFC_Msk    (0xffffffffUL)            /*!< TGFC (Bitfield-Mask: 0xffffffff)                      */
/* =======================================================  MMCRFCECR  ======================================================= */
#define Ethernet_MMC_MMCRFCECR_RFCFC_Pos  (0UL)                     /*!< RFCFC (Bit 0)                                         */
#define Ethernet_MMC_MMCRFCECR_RFCFC_Msk  (0xffffffffUL)            /*!< RFCFC (Bitfield-Mask: 0xffffffff)                     */
/* =======================================================  MMCRFAECR  ======================================================= */
#define Ethernet_MMC_MMCRFAECR_RFAEC_Pos  (0UL)                     /*!< RFAEC (Bit 0)                                         */
#define Ethernet_MMC_MMCRFAECR_RFAEC_Msk  (0xffffffffUL)            /*!< RFAEC (Bitfield-Mask: 0xffffffff)                     */
/* =======================================================  MMCRGUFCR  ======================================================= */
#define Ethernet_MMC_MMCRGUFCR_RGUFC_Pos  (0UL)                     /*!< RGUFC (Bit 0)                                         */
#define Ethernet_MMC_MMCRGUFCR_RGUFC_Msk  (0xffffffffUL)            /*!< RGUFC (Bitfield-Mask: 0xffffffff)                     */


/* =========================================================================================================================== */
/* ================                                       Ethernet_MAC                                        ================ */
/* =========================================================================================================================== */

/* =========================================================  MACCR  ========================================================= */
#define Ethernet_MAC_MACCR_RE_Pos         (2UL)                     /*!< RE (Bit 2)                                            */
#define Ethernet_MAC_MACCR_RE_Msk         (0x4UL)                   /*!< RE (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACCR_TE_Pos         (3UL)                     /*!< TE (Bit 3)                                            */
#define Ethernet_MAC_MACCR_TE_Msk         (0x8UL)                   /*!< TE (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACCR_DC_Pos         (4UL)                     /*!< DC (Bit 4)                                            */
#define Ethernet_MAC_MACCR_DC_Msk         (0x10UL)                  /*!< DC (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACCR_BL_Pos         (5UL)                     /*!< BL (Bit 5)                                            */
#define Ethernet_MAC_MACCR_BL_Msk         (0x60UL)                  /*!< BL (Bitfield-Mask: 0x03)                              */
#define Ethernet_MAC_MACCR_APCS_Pos       (7UL)                     /*!< APCS (Bit 7)                                          */
#define Ethernet_MAC_MACCR_APCS_Msk       (0x80UL)                  /*!< APCS (Bitfield-Mask: 0x01)                            */
#define Ethernet_MAC_MACCR_RD_Pos         (9UL)                     /*!< RD (Bit 9)                                            */
#define Ethernet_MAC_MACCR_RD_Msk         (0x200UL)                 /*!< RD (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACCR_IPCO_Pos       (10UL)                    /*!< IPCO (Bit 10)                                         */
#define Ethernet_MAC_MACCR_IPCO_Msk       (0x400UL)                 /*!< IPCO (Bitfield-Mask: 0x01)                            */
#define Ethernet_MAC_MACCR_DM_Pos         (11UL)                    /*!< DM (Bit 11)                                           */
#define Ethernet_MAC_MACCR_DM_Msk         (0x800UL)                 /*!< DM (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACCR_LM_Pos         (12UL)                    /*!< LM (Bit 12)                                           */
#define Ethernet_MAC_MACCR_LM_Msk         (0x1000UL)                /*!< LM (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACCR_ROD_Pos        (13UL)                    /*!< ROD (Bit 13)                                          */
#define Ethernet_MAC_MACCR_ROD_Msk        (0x2000UL)                /*!< ROD (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACCR_FES_Pos        (14UL)                    /*!< FES (Bit 14)                                          */
#define Ethernet_MAC_MACCR_FES_Msk        (0x4000UL)                /*!< FES (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACCR_CSD_Pos        (16UL)                    /*!< CSD (Bit 16)                                          */
#define Ethernet_MAC_MACCR_CSD_Msk        (0x10000UL)               /*!< CSD (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACCR_IFG_Pos        (17UL)                    /*!< IFG (Bit 17)                                          */
#define Ethernet_MAC_MACCR_IFG_Msk        (0xe0000UL)               /*!< IFG (Bitfield-Mask: 0x07)                             */
#define Ethernet_MAC_MACCR_JD_Pos         (22UL)                    /*!< JD (Bit 22)                                           */
#define Ethernet_MAC_MACCR_JD_Msk         (0x400000UL)              /*!< JD (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACCR_WD_Pos         (23UL)                    /*!< WD (Bit 23)                                           */
#define Ethernet_MAC_MACCR_WD_Msk         (0x800000UL)              /*!< WD (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACCR_CSTF_Pos       (25UL)                    /*!< CSTF (Bit 25)                                         */
#define Ethernet_MAC_MACCR_CSTF_Msk       (0x2000000UL)             /*!< CSTF (Bitfield-Mask: 0x01)                            */
/* ========================================================  MACFFR  ========================================================= */
#define Ethernet_MAC_MACFFR_PM_Pos        (0UL)                     /*!< PM (Bit 0)                                            */
#define Ethernet_MAC_MACFFR_PM_Msk        (0x1UL)                   /*!< PM (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACFFR_HU_Pos        (1UL)                     /*!< HU (Bit 1)                                            */
#define Ethernet_MAC_MACFFR_HU_Msk        (0x2UL)                   /*!< HU (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACFFR_HM_Pos        (2UL)                     /*!< HM (Bit 2)                                            */
#define Ethernet_MAC_MACFFR_HM_Msk        (0x4UL)                   /*!< HM (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACFFR_DAIF_Pos      (3UL)                     /*!< DAIF (Bit 3)                                          */
#define Ethernet_MAC_MACFFR_DAIF_Msk      (0x8UL)                   /*!< DAIF (Bitfield-Mask: 0x01)                            */
#define Ethernet_MAC_MACFFR_RAM_Pos       (4UL)                     /*!< RAM (Bit 4)                                           */
#define Ethernet_MAC_MACFFR_RAM_Msk       (0x10UL)                  /*!< RAM (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACFFR_BFD_Pos       (5UL)                     /*!< BFD (Bit 5)                                           */
#define Ethernet_MAC_MACFFR_BFD_Msk       (0x20UL)                  /*!< BFD (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACFFR_PCF_Pos       (6UL)                     /*!< PCF (Bit 6)                                           */
#define Ethernet_MAC_MACFFR_PCF_Msk       (0x40UL)                  /*!< PCF (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACFFR_SAIF_Pos      (7UL)                     /*!< SAIF (Bit 7)                                          */
#define Ethernet_MAC_MACFFR_SAIF_Msk      (0x80UL)                  /*!< SAIF (Bitfield-Mask: 0x01)                            */
#define Ethernet_MAC_MACFFR_SAF_Pos       (8UL)                     /*!< SAF (Bit 8)                                           */
#define Ethernet_MAC_MACFFR_SAF_Msk       (0x100UL)                 /*!< SAF (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACFFR_HPF_Pos       (9UL)                     /*!< HPF (Bit 9)                                           */
#define Ethernet_MAC_MACFFR_HPF_Msk       (0x200UL)                 /*!< HPF (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACFFR_RA_Pos        (31UL)                    /*!< RA (Bit 31)                                           */
#define Ethernet_MAC_MACFFR_RA_Msk        (0x80000000UL)            /*!< RA (Bitfield-Mask: 0x01)                              */
/* ========================================================  MACHTHR  ======================================================== */
#define Ethernet_MAC_MACHTHR_HTH_Pos      (0UL)                     /*!< HTH (Bit 0)                                           */
#define Ethernet_MAC_MACHTHR_HTH_Msk      (0xffffffffUL)            /*!< HTH (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  MACHTLR  ======================================================== */
#define Ethernet_MAC_MACHTLR_HTL_Pos      (0UL)                     /*!< HTL (Bit 0)                                           */
#define Ethernet_MAC_MACHTLR_HTL_Msk      (0xffffffffUL)            /*!< HTL (Bitfield-Mask: 0xffffffff)                       */
/* =======================================================  MACMIIAR  ======================================================== */
#define Ethernet_MAC_MACMIIAR_MB_Pos      (0UL)                     /*!< MB (Bit 0)                                            */
#define Ethernet_MAC_MACMIIAR_MB_Msk      (0x1UL)                   /*!< MB (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACMIIAR_MW_Pos      (1UL)                     /*!< MW (Bit 1)                                            */
#define Ethernet_MAC_MACMIIAR_MW_Msk      (0x2UL)                   /*!< MW (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACMIIAR_CR_Pos      (2UL)                     /*!< CR (Bit 2)                                            */
#define Ethernet_MAC_MACMIIAR_CR_Msk      (0x1cUL)                  /*!< CR (Bitfield-Mask: 0x07)                              */
#define Ethernet_MAC_MACMIIAR_MR_Pos      (6UL)                     /*!< MR (Bit 6)                                            */
#define Ethernet_MAC_MACMIIAR_MR_Msk      (0x7c0UL)                 /*!< MR (Bitfield-Mask: 0x1f)                              */
#define Ethernet_MAC_MACMIIAR_PA_Pos      (11UL)                    /*!< PA (Bit 11)                                           */
#define Ethernet_MAC_MACMIIAR_PA_Msk      (0xf800UL)                /*!< PA (Bitfield-Mask: 0x1f)                              */
/* =======================================================  MACMIIDR  ======================================================== */
#define Ethernet_MAC_MACMIIDR_TD_Pos      (0UL)                     /*!< TD (Bit 0)                                            */
#define Ethernet_MAC_MACMIIDR_TD_Msk      (0xffffUL)                /*!< TD (Bitfield-Mask: 0xffff)                            */
/* ========================================================  MACFCR  ========================================================= */
#define Ethernet_MAC_MACFCR_FCB_Pos       (0UL)                     /*!< FCB (Bit 0)                                           */
#define Ethernet_MAC_MACFCR_FCB_Msk       (0x1UL)                   /*!< FCB (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACFCR_TFCE_Pos      (1UL)                     /*!< TFCE (Bit 1)                                          */
#define Ethernet_MAC_MACFCR_TFCE_Msk      (0x2UL)                   /*!< TFCE (Bitfield-Mask: 0x01)                            */
#define Ethernet_MAC_MACFCR_RFCE_Pos      (2UL)                     /*!< RFCE (Bit 2)                                          */
#define Ethernet_MAC_MACFCR_RFCE_Msk      (0x4UL)                   /*!< RFCE (Bitfield-Mask: 0x01)                            */
#define Ethernet_MAC_MACFCR_UPFD_Pos      (3UL)                     /*!< UPFD (Bit 3)                                          */
#define Ethernet_MAC_MACFCR_UPFD_Msk      (0x8UL)                   /*!< UPFD (Bitfield-Mask: 0x01)                            */
#define Ethernet_MAC_MACFCR_PLT_Pos       (4UL)                     /*!< PLT (Bit 4)                                           */
#define Ethernet_MAC_MACFCR_PLT_Msk       (0x30UL)                  /*!< PLT (Bitfield-Mask: 0x03)                             */
#define Ethernet_MAC_MACFCR_ZQPD_Pos      (7UL)                     /*!< ZQPD (Bit 7)                                          */
#define Ethernet_MAC_MACFCR_ZQPD_Msk      (0x80UL)                  /*!< ZQPD (Bitfield-Mask: 0x01)                            */
#define Ethernet_MAC_MACFCR_PT_Pos        (16UL)                    /*!< PT (Bit 16)                                           */
#define Ethernet_MAC_MACFCR_PT_Msk        (0xffff0000UL)            /*!< PT (Bitfield-Mask: 0xffff)                            */
/* =======================================================  MACVLANTR  ======================================================= */
#define Ethernet_MAC_MACVLANTR_VLANTI_Pos (0UL)                     /*!< VLANTI (Bit 0)                                        */
#define Ethernet_MAC_MACVLANTR_VLANTI_Msk (0xffffUL)                /*!< VLANTI (Bitfield-Mask: 0xffff)                        */
#define Ethernet_MAC_MACVLANTR_VLANTC_Pos (16UL)                    /*!< VLANTC (Bit 16)                                       */
#define Ethernet_MAC_MACVLANTR_VLANTC_Msk (0x10000UL)               /*!< VLANTC (Bitfield-Mask: 0x01)                          */
/* =======================================================  MACPMTCSR  ======================================================= */
#define Ethernet_MAC_MACPMTCSR_PD_Pos     (0UL)                     /*!< PD (Bit 0)                                            */
#define Ethernet_MAC_MACPMTCSR_PD_Msk     (0x1UL)                   /*!< PD (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACPMTCSR_MPE_Pos    (1UL)                     /*!< MPE (Bit 1)                                           */
#define Ethernet_MAC_MACPMTCSR_MPE_Msk    (0x2UL)                   /*!< MPE (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACPMTCSR_WFE_Pos    (2UL)                     /*!< WFE (Bit 2)                                           */
#define Ethernet_MAC_MACPMTCSR_WFE_Msk    (0x4UL)                   /*!< WFE (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACPMTCSR_MPR_Pos    (5UL)                     /*!< MPR (Bit 5)                                           */
#define Ethernet_MAC_MACPMTCSR_MPR_Msk    (0x20UL)                  /*!< MPR (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACPMTCSR_WFR_Pos    (6UL)                     /*!< WFR (Bit 6)                                           */
#define Ethernet_MAC_MACPMTCSR_WFR_Msk    (0x40UL)                  /*!< WFR (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACPMTCSR_GU_Pos     (9UL)                     /*!< GU (Bit 9)                                            */
#define Ethernet_MAC_MACPMTCSR_GU_Msk     (0x200UL)                 /*!< GU (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACPMTCSR_WFFRPR_Pos (31UL)                    /*!< WFFRPR (Bit 31)                                       */
#define Ethernet_MAC_MACPMTCSR_WFFRPR_Msk (0x80000000UL)            /*!< WFFRPR (Bitfield-Mask: 0x01)                          */
/* ========================================================  MACDBGR  ======================================================== */
#define Ethernet_MAC_MACDBGR_CR_Pos       (0UL)                     /*!< CR (Bit 0)                                            */
#define Ethernet_MAC_MACDBGR_CR_Msk       (0x1UL)                   /*!< CR (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACDBGR_CSR_Pos      (1UL)                     /*!< CSR (Bit 1)                                           */
#define Ethernet_MAC_MACDBGR_CSR_Msk      (0x2UL)                   /*!< CSR (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACDBGR_ROR_Pos      (2UL)                     /*!< ROR (Bit 2)                                           */
#define Ethernet_MAC_MACDBGR_ROR_Msk      (0x4UL)                   /*!< ROR (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACDBGR_MCF_Pos      (3UL)                     /*!< MCF (Bit 3)                                           */
#define Ethernet_MAC_MACDBGR_MCF_Msk      (0x8UL)                   /*!< MCF (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACDBGR_MCP_Pos      (4UL)                     /*!< MCP (Bit 4)                                           */
#define Ethernet_MAC_MACDBGR_MCP_Msk      (0x10UL)                  /*!< MCP (Bitfield-Mask: 0x01)                             */
#define Ethernet_MAC_MACDBGR_MCFHP_Pos    (5UL)                     /*!< MCFHP (Bit 5)                                         */
#define Ethernet_MAC_MACDBGR_MCFHP_Msk    (0x20UL)                  /*!< MCFHP (Bitfield-Mask: 0x01)                           */
/* =========================================================  MACSR  ========================================================= */
#define Ethernet_MAC_MACSR_PMTS_Pos       (3UL)                     /*!< PMTS (Bit 3)                                          */
#define Ethernet_MAC_MACSR_PMTS_Msk       (0x8UL)                   /*!< PMTS (Bitfield-Mask: 0x01)                            */
#define Ethernet_MAC_MACSR_MMCS_Pos       (4UL)                     /*!< MMCS (Bit 4)                                          */
#define Ethernet_MAC_MACSR_MMCS_Msk       (0x10UL)                  /*!< MMCS (Bitfield-Mask: 0x01)                            */
#define Ethernet_MAC_MACSR_MMCRS_Pos      (5UL)                     /*!< MMCRS (Bit 5)                                         */
#define Ethernet_MAC_MACSR_MMCRS_Msk      (0x20UL)                  /*!< MMCRS (Bitfield-Mask: 0x01)                           */
#define Ethernet_MAC_MACSR_MMCTS_Pos      (6UL)                     /*!< MMCTS (Bit 6)                                         */
#define Ethernet_MAC_MACSR_MMCTS_Msk      (0x40UL)                  /*!< MMCTS (Bitfield-Mask: 0x01)                           */
#define Ethernet_MAC_MACSR_TSTS_Pos       (9UL)                     /*!< TSTS (Bit 9)                                          */
#define Ethernet_MAC_MACSR_TSTS_Msk       (0x200UL)                 /*!< TSTS (Bitfield-Mask: 0x01)                            */
/* ========================================================  MACIMR  ========================================================= */
#define Ethernet_MAC_MACIMR_PMTIM_Pos     (3UL)                     /*!< PMTIM (Bit 3)                                         */
#define Ethernet_MAC_MACIMR_PMTIM_Msk     (0x8UL)                   /*!< PMTIM (Bitfield-Mask: 0x01)                           */
#define Ethernet_MAC_MACIMR_TSTIM_Pos     (9UL)                     /*!< TSTIM (Bit 9)                                         */
#define Ethernet_MAC_MACIMR_TSTIM_Msk     (0x200UL)                 /*!< TSTIM (Bitfield-Mask: 0x01)                           */
/* ========================================================  MACA0HR  ======================================================== */
#define Ethernet_MAC_MACA0HR_MACA0H_Pos   (0UL)                     /*!< MACA0H (Bit 0)                                        */
#define Ethernet_MAC_MACA0HR_MACA0H_Msk   (0xffffUL)                /*!< MACA0H (Bitfield-Mask: 0xffff)                        */
#define Ethernet_MAC_MACA0HR_MO_Pos       (31UL)                    /*!< MO (Bit 31)                                           */
#define Ethernet_MAC_MACA0HR_MO_Msk       (0x80000000UL)            /*!< MO (Bitfield-Mask: 0x01)                              */
/* ========================================================  MACA0LR  ======================================================== */
#define Ethernet_MAC_MACA0LR_MACA0L_Pos   (0UL)                     /*!< MACA0L (Bit 0)                                        */
#define Ethernet_MAC_MACA0LR_MACA0L_Msk   (0xffffffffUL)            /*!< MACA0L (Bitfield-Mask: 0xffffffff)                    */
/* ========================================================  MACA1HR  ======================================================== */
#define Ethernet_MAC_MACA1HR_MACA1H_Pos   (0UL)                     /*!< MACA1H (Bit 0)                                        */
#define Ethernet_MAC_MACA1HR_MACA1H_Msk   (0xffffUL)                /*!< MACA1H (Bitfield-Mask: 0xffff)                        */
#define Ethernet_MAC_MACA1HR_MBC_Pos      (24UL)                    /*!< MBC (Bit 24)                                          */
#define Ethernet_MAC_MACA1HR_MBC_Msk      (0x3f000000UL)            /*!< MBC (Bitfield-Mask: 0x3f)                             */
#define Ethernet_MAC_MACA1HR_SA_Pos       (30UL)                    /*!< SA (Bit 30)                                           */
#define Ethernet_MAC_MACA1HR_SA_Msk       (0x40000000UL)            /*!< SA (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACA1HR_AE_Pos       (31UL)                    /*!< AE (Bit 31)                                           */
#define Ethernet_MAC_MACA1HR_AE_Msk       (0x80000000UL)            /*!< AE (Bitfield-Mask: 0x01)                              */
/* ========================================================  MACA1LR  ======================================================== */
#define Ethernet_MAC_MACA1LR_MACA1LR_Pos  (0UL)                     /*!< MACA1LR (Bit 0)                                       */
#define Ethernet_MAC_MACA1LR_MACA1LR_Msk  (0xffffffffUL)            /*!< MACA1LR (Bitfield-Mask: 0xffffffff)                   */
/* ========================================================  MACA2HR  ======================================================== */
#define Ethernet_MAC_MACA2HR_MAC2AH_Pos   (0UL)                     /*!< MAC2AH (Bit 0)                                        */
#define Ethernet_MAC_MACA2HR_MAC2AH_Msk   (0xffffUL)                /*!< MAC2AH (Bitfield-Mask: 0xffff)                        */
#define Ethernet_MAC_MACA2HR_MBC_Pos      (24UL)                    /*!< MBC (Bit 24)                                          */
#define Ethernet_MAC_MACA2HR_MBC_Msk      (0x3f000000UL)            /*!< MBC (Bitfield-Mask: 0x3f)                             */
#define Ethernet_MAC_MACA2HR_SA_Pos       (30UL)                    /*!< SA (Bit 30)                                           */
#define Ethernet_MAC_MACA2HR_SA_Msk       (0x40000000UL)            /*!< SA (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACA2HR_AE_Pos       (31UL)                    /*!< AE (Bit 31)                                           */
#define Ethernet_MAC_MACA2HR_AE_Msk       (0x80000000UL)            /*!< AE (Bitfield-Mask: 0x01)                              */
/* ========================================================  MACA2LR  ======================================================== */
#define Ethernet_MAC_MACA2LR_MACA2L_Pos   (0UL)                     /*!< MACA2L (Bit 0)                                        */
#define Ethernet_MAC_MACA2LR_MACA2L_Msk   (0x7fffffffUL)            /*!< MACA2L (Bitfield-Mask: 0x7fffffff)                    */
/* ========================================================  MACA3HR  ======================================================== */
#define Ethernet_MAC_MACA3HR_MACA3H_Pos   (0UL)                     /*!< MACA3H (Bit 0)                                        */
#define Ethernet_MAC_MACA3HR_MACA3H_Msk   (0xffffUL)                /*!< MACA3H (Bitfield-Mask: 0xffff)                        */
#define Ethernet_MAC_MACA3HR_MBC_Pos      (24UL)                    /*!< MBC (Bit 24)                                          */
#define Ethernet_MAC_MACA3HR_MBC_Msk      (0x3f000000UL)            /*!< MBC (Bitfield-Mask: 0x3f)                             */
#define Ethernet_MAC_MACA3HR_SA_Pos       (30UL)                    /*!< SA (Bit 30)                                           */
#define Ethernet_MAC_MACA3HR_SA_Msk       (0x40000000UL)            /*!< SA (Bitfield-Mask: 0x01)                              */
#define Ethernet_MAC_MACA3HR_AE_Pos       (31UL)                    /*!< AE (Bit 31)                                           */
#define Ethernet_MAC_MACA3HR_AE_Msk       (0x80000000UL)            /*!< AE (Bitfield-Mask: 0x01)                              */
/* ========================================================  MACA3LR  ======================================================== */
#define Ethernet_MAC_MACA3LR_MBCA3L_Pos   (0UL)                     /*!< MBCA3L (Bit 0)                                        */
#define Ethernet_MAC_MACA3LR_MBCA3L_Msk   (0xffffffffUL)            /*!< MBCA3L (Bitfield-Mask: 0xffffffff)                    */
/* ======================================================  MACRWUFFER  ======================================================= */

