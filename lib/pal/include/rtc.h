#include "core.h"

#define RTC_BASE                    0x40002800UL

#define RTC                         ((volatile RTC_Type*)               RTC_BASE)

/* =========================================================================================================================== */
/* ================                                            RTC                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Real-time clock (RTC)
  */

typedef struct {                                /*!< (@ 0x40002800) RTC Structure                                              */
  
  union {
    __IOM uint32_t TR;                          /*!< (@ 0x00000000) time register                                              */
    
    struct {
      __IOM uint32_t SU         : 4;            /*!< [3..0] Second units in BCD format                                         */
      __IOM uint32_t ST         : 3;            /*!< [6..4] Second tens in BCD format                                          */
            uint32_t            : 1;
      __IOM uint32_t MNU        : 4;            /*!< [11..8] Minute units in BCD format                                        */
      __IOM uint32_t MNT        : 3;            /*!< [14..12] Minute tens in BCD format                                        */
            uint32_t            : 1;
      __IOM uint32_t HU         : 4;            /*!< [19..16] Hour units in BCD format                                         */
      __IOM uint32_t HT         : 2;            /*!< [21..20] Hour tens in BCD format                                          */
      __IOM uint32_t PM         : 1;            /*!< [22..22] AM/PM notation                                                   */
            uint32_t            : 9;
    } TR_b;
  } ;
  
  union {
    __IOM uint32_t DR;                          /*!< (@ 0x00000004) date register                                              */
    
    struct {
      __IOM uint32_t DU         : 4;            /*!< [3..0] Date units in BCD format                                           */
      __IOM uint32_t DT         : 2;            /*!< [5..4] Date tens in BCD format                                            */
            uint32_t            : 2;
      __IOM uint32_t MU         : 4;            /*!< [11..8] Month units in BCD format                                         */
      __IOM uint32_t MT         : 1;            /*!< [12..12] Month tens in BCD format                                         */
      __IOM uint32_t WDU        : 3;            /*!< [15..13] Week day units                                                   */
      __IOM uint32_t YU         : 4;            /*!< [19..16] Year units in BCD format                                         */
      __IOM uint32_t YT         : 4;            /*!< [23..20] Year tens in BCD format                                          */
            uint32_t            : 8;
    } DR_b;
  } ;
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000008) control register                                           */
    
    struct {
      __IOM uint32_t WCKSEL     : 3;            /*!< [2..0] Wakeup clock selection                                             */
      __IOM uint32_t TSEDGE     : 1;            /*!< [3..3] Time-stamp event active edge                                       */
      __IOM uint32_t REFCKON    : 1;            /*!< [4..4] Reference clock detection enable (50 or 60 Hz)                     */
      __IOM uint32_t BYPSHAD    : 1;            /*!< [5..5] Bypass the shadow registers                                        */
      __IOM uint32_t FMT        : 1;            /*!< [6..6] Hour format                                                        */
            uint32_t            : 1;
      __IOM uint32_t ALRAE      : 1;            /*!< [8..8] Alarm A enable                                                     */
      __IOM uint32_t ALRBE      : 1;            /*!< [9..9] Alarm B enable                                                     */
      __IOM uint32_t WUTE       : 1;            /*!< [10..10] Wakeup timer enable                                              */
      __IOM uint32_t TSE        : 1;            /*!< [11..11] Time stamp enable                                                */
      __IOM uint32_t ALRAIE     : 1;            /*!< [12..12] Alarm A interrupt enable                                         */
      __IOM uint32_t ALRBIE     : 1;            /*!< [13..13] Alarm B interrupt enable                                         */
      __IOM uint32_t WUTIE      : 1;            /*!< [14..14] Wakeup timer interrupt enable                                    */
      __IOM uint32_t TSIE       : 1;            /*!< [15..15] Time-stamp interrupt enable                                      */
      __IOM uint32_t ADD1H      : 1;            /*!< [16..16] Add 1 hour (summer time change)                                  */
      __IOM uint32_t SUB1H      : 1;            /*!< [17..17] Subtract 1 hour (winter time change)                             */
      __IOM uint32_t BKP        : 1;            /*!< [18..18] Backup                                                           */
      __IOM uint32_t COSEL      : 1;            /*!< [19..19] Calibration output selection                                     */
      __IOM uint32_t POL        : 1;            /*!< [20..20] Output polarity                                                  */
      __IOM uint32_t OSEL       : 2;            /*!< [22..21] Output selection                                                 */
      __IOM uint32_t COE        : 1;            /*!< [23..23] Calibration output enable                                        */
      __IOM uint32_t ITSE       : 1;            /*!< [24..24] timestamp on internal event enable                               */
            uint32_t            : 7;
    } CR_b;
  } ;
  
  union {
    __IOM uint32_t ISR;                         /*!< (@ 0x0000000C) initialization and status register                         */
    
    struct {
      __IM  uint32_t ALRAWF     : 1;            /*!< [0..0] Alarm A write flag                                                 */
      __IM  uint32_t ALRBWF     : 1;            /*!< [1..1] Alarm B write flag                                                 */
      __IM  uint32_t WUTWF      : 1;            /*!< [2..2] Wakeup timer write flag                                            */
      __IOM uint32_t SHPF       : 1;            /*!< [3..3] Shift operation pending                                            */
      __IM  uint32_t INITS      : 1;            /*!< [4..4] Initialization status flag                                         */
      __IOM uint32_t RSF        : 1;            /*!< [5..5] Registers synchronization flag                                     */
      __IM  uint32_t INITF      : 1;            /*!< [6..6] Initialization flag                                                */
      __IOM uint32_t INIT       : 1;            /*!< [7..7] Initialization mode                                                */
      __IOM uint32_t ALRAF      : 1;            /*!< [8..8] Alarm A flag                                                       */
      __IOM uint32_t ALRBF      : 1;            /*!< [9..9] Alarm B flag                                                       */
      __IOM uint32_t WUTF       : 1;            /*!< [10..10] Wakeup timer flag                                                */
      __IOM uint32_t TSF        : 1;            /*!< [11..11] Time-stamp flag                                                  */
      __IOM uint32_t TSOVF      : 1;            /*!< [12..12] Time-stamp overflow flag                                         */
      __IOM uint32_t TAMP1F     : 1;            /*!< [13..13] Tamper detection flag                                            */
      __IOM uint32_t TAMP2F     : 1;            /*!< [14..14] RTC_TAMP2 detection flag                                         */
      __IOM uint32_t TAMP3F     : 1;            /*!< [15..15] RTC_TAMP3 detection flag                                         */
      __IM  uint32_t RECALPF    : 1;            /*!< [16..16] Recalibration pending Flag                                       */
            uint32_t            : 15;
    } ISR_b;
  } ;
  
  union {
    __IOM uint32_t PRER;                        /*!< (@ 0x00000010) prescaler register                                         */
    
    struct {
      __IOM uint32_t PREDIV_S   : 15;           /*!< [14..0] Synchronous prescaler factor                                      */
            uint32_t            : 1;
      __IOM uint32_t PREDIV_A   : 7;            /*!< [22..16] Asynchronous prescaler factor                                    */
            uint32_t            : 9;
    } PRER_b;
  } ;
  
  union {
    __IOM uint32_t WUTR;                        /*!< (@ 0x00000014) wakeup timer register                                      */
    
    struct {
      __IOM uint32_t WUT        : 16;           /*!< [15..0] Wakeup auto-reload value bits                                     */
            uint32_t            : 16;
    } WUTR_b;
  } ;
  __IM  uint32_t  RESERVED;
  
  union {
    __IOM uint32_t ALRMAR;                      /*!< (@ 0x0000001C) alarm A register                                           */
    
    struct {
      __IOM uint32_t SU         : 4;            /*!< [3..0] Second units in BCD format                                         */
      __IOM uint32_t ST         : 3;            /*!< [6..4] Second tens in BCD format                                          */
      __IOM uint32_t MSK1       : 1;            /*!< [7..7] Alarm A seconds mask                                               */
      __IOM uint32_t MNU        : 4;            /*!< [11..8] Minute units in BCD format                                        */
      __IOM uint32_t MNT        : 3;            /*!< [14..12] Minute tens in BCD format                                        */
      __IOM uint32_t MSK2       : 1;            /*!< [15..15] Alarm A minutes mask                                             */
      __IOM uint32_t HU         : 4;            /*!< [19..16] Hour units in BCD format                                         */
      __IOM uint32_t HT         : 2;            /*!< [21..20] Hour tens in BCD format                                          */
      __IOM uint32_t PM         : 1;            /*!< [22..22] AM/PM notation                                                   */
      __IOM uint32_t MSK3       : 1;            /*!< [23..23] Alarm A hours mask                                               */
      __IOM uint32_t DU         : 4;            /*!< [27..24] Date units or day in BCD format                                  */
      __IOM uint32_t DT         : 2;            /*!< [29..28] Date tens in BCD format                                          */
      __IOM uint32_t WDSEL      : 1;            /*!< [30..30] Week day selection                                               */
      __IOM uint32_t MSK4       : 1;            /*!< [31..31] Alarm A date mask                                                */
    } ALRMAR_b;
  } ;
  
  union {
    __IOM uint32_t ALRMBR;                      /*!< (@ 0x00000020) alarm B register                                           */
    
    struct {
      __IOM uint32_t SU         : 4;            /*!< [3..0] Second units in BCD format                                         */
      __IOM uint32_t ST         : 3;            /*!< [6..4] Second tens in BCD format                                          */
      __IOM uint32_t MSK1       : 1;            /*!< [7..7] Alarm B seconds mask                                               */
      __IOM uint32_t MNU        : 4;            /*!< [11..8] Minute units in BCD format                                        */
      __IOM uint32_t MNT        : 3;            /*!< [14..12] Minute tens in BCD format                                        */
      __IOM uint32_t MSK2       : 1;            /*!< [15..15] Alarm B minutes mask                                             */
      __IOM uint32_t HU         : 4;            /*!< [19..16] Hour units in BCD format                                         */
      __IOM uint32_t HT         : 2;            /*!< [21..20] Hour tens in BCD format                                          */
      __IOM uint32_t PM         : 1;            /*!< [22..22] AM/PM notation                                                   */
      __IOM uint32_t MSK3       : 1;            /*!< [23..23] Alarm B hours mask                                               */
      __IOM uint32_t DU         : 4;            /*!< [27..24] Date units or day in BCD format                                  */
      __IOM uint32_t DT         : 2;            /*!< [29..28] Date tens in BCD format                                          */
      __IOM uint32_t WDSEL      : 1;            /*!< [30..30] Week day selection                                               */
      __IOM uint32_t MSK4       : 1;            /*!< [31..31] Alarm B date mask                                                */
    } ALRMBR_b;
  } ;
  
  union {
    __OM  uint32_t WPR;                         /*!< (@ 0x00000024) write protection register                                  */
    
    struct {
      __OM  uint32_t KEY        : 8;            /*!< [7..0] Write protection key                                               */
            uint32_t            : 24;
    } WPR_b;
  } ;
  
  union {
    __IM  uint32_t SSR;                         /*!< (@ 0x00000028) sub second register                                        */
    
    struct {
      __IM  uint32_t SS         : 16;           /*!< [15..0] Sub second value                                                  */
            uint32_t            : 16;
    } SSR_b;
  } ;
  
  union {
    __OM  uint32_t SHIFTR;                      /*!< (@ 0x0000002C) shift control register                                     */
    
    struct {
      __OM  uint32_t SUBFS      : 15;           /*!< [14..0] Subtract a fraction of a second                                   */
            uint32_t            : 16;
      __OM  uint32_t ADD1S      : 1;            /*!< [31..31] Add one second                                                   */
    } SHIFTR_b;
  } ;
  
  union {
    __IM  uint32_t TSTR;                        /*!< (@ 0x00000030) time stamp time register                                   */
    
    struct {
      __IM  uint32_t SU         : 4;            /*!< [3..0] Second units in BCD format                                         */
      __IM  uint32_t ST         : 3;            /*!< [6..4] Second tens in BCD format                                          */
            uint32_t            : 1;
      __IM  uint32_t MNU        : 4;            /*!< [11..8] Minute units in BCD format                                        */
      __IM  uint32_t MNT        : 3;            /*!< [14..12] Minute tens in BCD format                                        */
            uint32_t            : 1;
      __IM  uint32_t HU         : 4;            /*!< [19..16] Hour units in BCD format                                         */
      __IM  uint32_t HT         : 2;            /*!< [21..20] Hour tens in BCD format                                          */
      __IM  uint32_t PM         : 1;            /*!< [22..22] AM/PM notation                                                   */
            uint32_t            : 9;
    } TSTR_b;
  } ;
  
  union {
    __IM  uint32_t TSDR;                        /*!< (@ 0x00000034) time stamp date register                                   */
    
    struct {
      __IM  uint32_t DU         : 4;            /*!< [3..0] Date units in BCD format                                           */
      __IM  uint32_t DT         : 2;            /*!< [5..4] Date tens in BCD format                                            */
            uint32_t            : 2;
      __IM  uint32_t MU         : 4;            /*!< [11..8] Month units in BCD format                                         */
      __IM  uint32_t MT         : 1;            /*!< [12..12] Month tens in BCD format                                         */
      __IM  uint32_t WDU        : 3;            /*!< [15..13] Week day units                                                   */
            uint32_t            : 16;
    } TSDR_b;
  } ;
  
  union {
    __IM  uint32_t TSSSR;                       /*!< (@ 0x00000038) timestamp sub second register                              */
    
    struct {
      __IM  uint32_t SS         : 16;           /*!< [15..0] Sub second value                                                  */
            uint32_t            : 16;
    } TSSSR_b;
  } ;
  
  union {
    __IOM uint32_t CALR;                        /*!< (@ 0x0000003C) calibration register                                       */
    
    struct {
      __IOM uint32_t CALM       : 9;            /*!< [8..0] Calibration minus                                                  */
            uint32_t            : 4;
      __IOM uint32_t CALW16     : 1;            /*!< [13..13] Use a 16-second calibration cycle period                         */
      __IOM uint32_t CALW8      : 1;            /*!< [14..14] Use an 8-second calibration cycle period                         */
      __IOM uint32_t CALP       : 1;            /*!< [15..15] Increase frequency of RTC by 488.5 ppm                           */
            uint32_t            : 16;
    } CALR_b;
  } ;
  
  union {
    __IOM uint32_t TAMPCR;                      /*!< (@ 0x00000040) tamper configuration register                              */
    
    struct {
      __IOM uint32_t TAMP1E     : 1;            /*!< [0..0] Tamper 1 detection enable                                          */
      __IOM uint32_t TAMP1TRG   : 1;            /*!< [1..1] Active level for tamper 1                                          */
      __IOM uint32_t TAMPIE     : 1;            /*!< [2..2] Tamper interrupt enable                                            */
      __IOM uint32_t TAMP2E     : 1;            /*!< [3..3] Tamper 2 detection enable                                          */
      __IOM uint32_t TAMP2TRG   : 1;            /*!< [4..4] Active level for tamper 2                                          */
      __IOM uint32_t TAMP3E     : 1;            /*!< [5..5] Tamper 3 detection enable                                          */
      __IOM uint32_t TAMP3TRG   : 1;            /*!< [6..6] Active level for tamper 3                                          */
      __IOM uint32_t TAMPTS     : 1;            /*!< [7..7] Activate timestamp on tamper detection event                       */
      __IOM uint32_t TAMPFREQ   : 3;            /*!< [10..8] Tamper sampling frequency                                         */
      __IOM uint32_t TAMPFLT    : 2;            /*!< [12..11] Tamper filter count                                              */
      __IOM uint32_t TAMPPRCH   : 2;            /*!< [14..13] Tamper precharge duration                                        */
      __IOM uint32_t TAMPPUDIS  : 1;            /*!< [15..15] TAMPER pull-up disable                                           */
      __IOM uint32_t TAMP1IE    : 1;            /*!< [16..16] Tamper 1 interrupt enable                                        */
      __IOM uint32_t TAMP1NOERASE : 1;          /*!< [17..17] Tamper 1 no erase                                                */
      __IOM uint32_t TAMP1MF    : 1;            /*!< [18..18] Tamper 1 mask flag                                               */
      __IOM uint32_t TAMP2IE    : 1;            /*!< [19..19] Tamper 2 interrupt enable                                        */
      __IOM uint32_t TAMP2NOERASE : 1;          /*!< [20..20] Tamper 2 no erase                                                */
      __IOM uint32_t TAMP2MF    : 1;            /*!< [21..21] Tamper 2 mask flag                                               */
      __IOM uint32_t TAMP3IE    : 1;            /*!< [22..22] Tamper 3 interrupt enable                                        */
      __IOM uint32_t TAMP3NOERASE : 1;          /*!< [23..23] Tamper 3 no erase                                                */
      __IOM uint32_t TAMP3MF    : 1;            /*!< [24..24] Tamper 3 mask flag                                               */
            uint32_t            : 7;
    } TAMPCR_b;
  } ;
  
  union {
    __IOM uint32_t ALRMASSR;                    /*!< (@ 0x00000044) alarm A sub second register                                */
    
    struct {
      __IOM uint32_t SS         : 15;           /*!< [14..0] Sub seconds value                                                 */
            uint32_t            : 9;
      __IOM uint32_t MASKSS     : 4;            /*!< [27..24] Mask the most-significant bits starting at this bit              */
            uint32_t            : 4;
    } ALRMASSR_b;
  } ;
  
  union {
    __IOM uint32_t ALRMBSSR;                    /*!< (@ 0x00000048) alarm B sub second register                                */
    
    struct {
      __IOM uint32_t SS         : 15;           /*!< [14..0] Sub seconds value                                                 */
            uint32_t            : 9;
      __IOM uint32_t MASKSS     : 4;            /*!< [27..24] Mask the most-significant bits starting at this bit              */
            uint32_t            : 4;
    } ALRMBSSR_b;
  } ;
  
  union {
    __IOM uint32_t OR;                          /*!< (@ 0x0000004C) option register                                            */
    
    struct {
      __IOM uint32_t RTC_ALARM_TYPE : 1;        /*!< [0..0] RTC_ALARM on PC13 output type                                      */
      __IOM uint32_t RTC_OUT_RMP : 1;           /*!< [1..1] RTC_OUT remap                                                      */
            uint32_t            : 30;
    } OR_b;
  } ;
  
  union {
    __IOM uint32_t BKP0R;                       /*!< (@ 0x00000050) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP0R_b;
  } ;
  
  union {
    __IOM uint32_t BKP1R;                       /*!< (@ 0x00000054) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP1R_b;
  } ;
  
  union {
    __IOM uint32_t BKP2R;                       /*!< (@ 0x00000058) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP2R_b;
  } ;
  
  union {
    __IOM uint32_t BKP3R;                       /*!< (@ 0x0000005C) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP3R_b;
  } ;
  
  union {
    __IOM uint32_t BKP4R;                       /*!< (@ 0x00000060) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP4R_b;
  } ;
  
  union {
    __IOM uint32_t BKP5R;                       /*!< (@ 0x00000064) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP5R_b;
  } ;
  
  union {
    __IOM uint32_t BKP6R;                       /*!< (@ 0x00000068) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP6R_b;
  } ;
  
  union {
    __IOM uint32_t BKP7R;                       /*!< (@ 0x0000006C) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP7R_b;
  } ;
  
  union {
    __IOM uint32_t BKP8R;                       /*!< (@ 0x00000070) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP8R_b;
  } ;
  
  union {
    __IOM uint32_t BKP9R;                       /*!< (@ 0x00000074) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP9R_b;
  } ;
  
  union {
    __IOM uint32_t BKP10R;                      /*!< (@ 0x00000078) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP10R_b;
  } ;
  
  union {
    __IOM uint32_t BKP11R;                      /*!< (@ 0x0000007C) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP11R_b;
  } ;
  
  union {
    __IOM uint32_t BKP12R;                      /*!< (@ 0x00000080) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP12R_b;
  } ;
  
  union {
    __IOM uint32_t BKP13R;                      /*!< (@ 0x00000084) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP13R_b;
  } ;
  
  union {
    __IOM uint32_t BKP14R;                      /*!< (@ 0x00000088) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP14R_b;
  } ;
  
  union {
    __IOM uint32_t BKP15R;                      /*!< (@ 0x0000008C) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP15R_b;
  } ;
  
  union {
    __IOM uint32_t BKP16R;                      /*!< (@ 0x00000090) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP16R_b;
  } ;
  
  union {
    __IOM uint32_t BKP17R;                      /*!< (@ 0x00000094) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP17R_b;
  } ;
  
  union {
    __IOM uint32_t BKP18R;                      /*!< (@ 0x00000098) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP18R_b;
  } ;
  
  union {
    __IOM uint32_t BKP19R;                      /*!< (@ 0x0000009C) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP19R_b;
  } ;
  
  union {
    __IOM uint32_t BKP20R;                      /*!< (@ 0x000000A0) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP20R_b;
  } ;
  
  union {
    __IOM uint32_t BKP21R;                      /*!< (@ 0x000000A4) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP21R_b;
  } ;
  
  union {
    __IOM uint32_t BKP22R;                      /*!< (@ 0x000000A8) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP22R_b;
  } ;
  
  union {
    __IOM uint32_t BKP23R;                      /*!< (@ 0x000000AC) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP23R_b;
  } ;
  
  union {
    __IOM uint32_t BKP24R;                      /*!< (@ 0x000000B0) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP24R_b;
  } ;
  
  union {
    __IOM uint32_t BKP25R;                      /*!< (@ 0x000000B4) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP25R_b;
  } ;
  
  union {
    __IOM uint32_t BKP26R;                      /*!< (@ 0x000000B8) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP26R_b;
  } ;
  
  union {
    __IOM uint32_t BKP27R;                      /*!< (@ 0x000000BC) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP27R_b;
  } ;
  
  union {
    __IOM uint32_t BKP28R;                      /*!< (@ 0x000000C0) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP28R_b;
  } ;
  
  union {
    __IOM uint32_t BKP29R;                      /*!< (@ 0x000000C4) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP29R_b;
  } ;
  
  union {
    __IOM uint32_t BKP30R;                      /*!< (@ 0x000000C8) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP30R_b;
  } ;
  
  union {
    __IOM uint32_t BKP31R;                      /*!< (@ 0x000000CC) backup register                                            */
    
    struct {
      __IOM uint32_t BKP        : 32;           /*!< [31..0] BKP                                                               */
    } BKP31R_b;
  } ;
} RTC_Type;                                     /*!< Size = 208 (0xd0)                                                         */



/* =========================================================================================================================== */
/* ================                                            RTC                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  TR  =========================================================== */
#define RTC_TR_PM_Pos                     (22UL)                    /*!< PM (Bit 22)                                           */
#define RTC_TR_PM_Msk                     (0x400000UL)              /*!< PM (Bitfield-Mask: 0x01)                              */
#define RTC_TR_HT_Pos                     (20UL)                    /*!< HT (Bit 20)                                           */
#define RTC_TR_HT_Msk                     (0x300000UL)              /*!< HT (Bitfield-Mask: 0x03)                              */
#define RTC_TR_HU_Pos                     (16UL)                    /*!< HU (Bit 16)                                           */
#define RTC_TR_HU_Msk                     (0xf0000UL)               /*!< HU (Bitfield-Mask: 0x0f)                              */
#define RTC_TR_MNT_Pos                    (12UL)                    /*!< MNT (Bit 12)                                          */
#define RTC_TR_MNT_Msk                    (0x7000UL)                /*!< MNT (Bitfield-Mask: 0x07)                             */
#define RTC_TR_MNU_Pos                    (8UL)                     /*!< MNU (Bit 8)                                           */
#define RTC_TR_MNU_Msk                    (0xf00UL)                 /*!< MNU (Bitfield-Mask: 0x0f)                             */
#define RTC_TR_ST_Pos                     (4UL)                     /*!< ST (Bit 4)                                            */
#define RTC_TR_ST_Msk                     (0x70UL)                  /*!< ST (Bitfield-Mask: 0x07)                              */
#define RTC_TR_SU_Pos                     (0UL)                     /*!< SU (Bit 0)                                            */
#define RTC_TR_SU_Msk                     (0xfUL)                   /*!< SU (Bitfield-Mask: 0x0f)                              */
/* ==========================================================  DR  =========================================================== */
#define RTC_DR_YT_Pos                     (20UL)                    /*!< YT (Bit 20)                                           */
#define RTC_DR_YT_Msk                     (0xf00000UL)              /*!< YT (Bitfield-Mask: 0x0f)                              */
#define RTC_DR_YU_Pos                     (16UL)                    /*!< YU (Bit 16)                                           */
#define RTC_DR_YU_Msk                     (0xf0000UL)               /*!< YU (Bitfield-Mask: 0x0f)                              */
#define RTC_DR_WDU_Pos                    (13UL)                    /*!< WDU (Bit 13)                                          */
#define RTC_DR_WDU_Msk                    (0xe000UL)                /*!< WDU (Bitfield-Mask: 0x07)                             */
#define RTC_DR_MT_Pos                     (12UL)                    /*!< MT (Bit 12)                                           */
#define RTC_DR_MT_Msk                     (0x1000UL)                /*!< MT (Bitfield-Mask: 0x01)                              */
#define RTC_DR_MU_Pos                     (8UL)                     /*!< MU (Bit 8)                                            */
#define RTC_DR_MU_Msk                     (0xf00UL)                 /*!< MU (Bitfield-Mask: 0x0f)                              */
#define RTC_DR_DT_Pos                     (4UL)                     /*!< DT (Bit 4)                                            */
#define RTC_DR_DT_Msk                     (0x30UL)                  /*!< DT (Bitfield-Mask: 0x03)                              */
#define RTC_DR_DU_Pos                     (0UL)                     /*!< DU (Bit 0)                                            */
#define RTC_DR_DU_Msk                     (0xfUL)                   /*!< DU (Bitfield-Mask: 0x0f)                              */
/* ==========================================================  CR  =========================================================== */
#define RTC_CR_WCKSEL_Pos                 (0UL)                     /*!< WCKSEL (Bit 0)                                        */
#define RTC_CR_WCKSEL_Msk                 (0x7UL)                   /*!< WCKSEL (Bitfield-Mask: 0x07)                          */
#define RTC_CR_TSEDGE_Pos                 (3UL)                     /*!< TSEDGE (Bit 3)                                        */
#define RTC_CR_TSEDGE_Msk                 (0x8UL)                   /*!< TSEDGE (Bitfield-Mask: 0x01)                          */
#define RTC_CR_REFCKON_Pos                (4UL)                     /*!< REFCKON (Bit 4)                                       */
#define RTC_CR_REFCKON_Msk                (0x10UL)                  /*!< REFCKON (Bitfield-Mask: 0x01)                         */
#define RTC_CR_BYPSHAD_Pos                (5UL)                     /*!< BYPSHAD (Bit 5)                                       */
#define RTC_CR_BYPSHAD_Msk                (0x20UL)                  /*!< BYPSHAD (Bitfield-Mask: 0x01)                         */
#define RTC_CR_FMT_Pos                    (6UL)                     /*!< FMT (Bit 6)                                           */
#define RTC_CR_FMT_Msk                    (0x40UL)                  /*!< FMT (Bitfield-Mask: 0x01)                             */
#define RTC_CR_ALRAE_Pos                  (8UL)                     /*!< ALRAE (Bit 8)                                         */
#define RTC_CR_ALRAE_Msk                  (0x100UL)                 /*!< ALRAE (Bitfield-Mask: 0x01)                           */
#define RTC_CR_ALRBE_Pos                  (9UL)                     /*!< ALRBE (Bit 9)                                         */
#define RTC_CR_ALRBE_Msk                  (0x200UL)                 /*!< ALRBE (Bitfield-Mask: 0x01)                           */
#define RTC_CR_WUTE_Pos                   (10UL)                    /*!< WUTE (Bit 10)                                         */
#define RTC_CR_WUTE_Msk                   (0x400UL)                 /*!< WUTE (Bitfield-Mask: 0x01)                            */
#define RTC_CR_TSE_Pos                    (11UL)                    /*!< TSE (Bit 11)                                          */
#define RTC_CR_TSE_Msk                    (0x800UL)                 /*!< TSE (Bitfield-Mask: 0x01)                             */
#define RTC_CR_ALRAIE_Pos                 (12UL)                    /*!< ALRAIE (Bit 12)                                       */
#define RTC_CR_ALRAIE_Msk                 (0x1000UL)                /*!< ALRAIE (Bitfield-Mask: 0x01)                          */
#define RTC_CR_ALRBIE_Pos                 (13UL)                    /*!< ALRBIE (Bit 13)                                       */
#define RTC_CR_ALRBIE_Msk                 (0x2000UL)                /*!< ALRBIE (Bitfield-Mask: 0x01)                          */
#define RTC_CR_WUTIE_Pos                  (14UL)                    /*!< WUTIE (Bit 14)                                        */
#define RTC_CR_WUTIE_Msk                  (0x4000UL)                /*!< WUTIE (Bitfield-Mask: 0x01)                           */
#define RTC_CR_TSIE_Pos                   (15UL)                    /*!< TSIE (Bit 15)                                         */
#define RTC_CR_TSIE_Msk                   (0x8000UL)                /*!< TSIE (Bitfield-Mask: 0x01)                            */
#define RTC_CR_ADD1H_Pos                  (16UL)                    /*!< ADD1H (Bit 16)                                        */
#define RTC_CR_ADD1H_Msk                  (0x10000UL)               /*!< ADD1H (Bitfield-Mask: 0x01)                           */
#define RTC_CR_SUB1H_Pos                  (17UL)                    /*!< SUB1H (Bit 17)                                        */
#define RTC_CR_SUB1H_Msk                  (0x20000UL)               /*!< SUB1H (Bitfield-Mask: 0x01)                           */
#define RTC_CR_BKP_Pos                    (18UL)                    /*!< BKP (Bit 18)                                          */
#define RTC_CR_BKP_Msk                    (0x40000UL)               /*!< BKP (Bitfield-Mask: 0x01)                             */
#define RTC_CR_COSEL_Pos                  (19UL)                    /*!< COSEL (Bit 19)                                        */
#define RTC_CR_COSEL_Msk                  (0x80000UL)               /*!< COSEL (Bitfield-Mask: 0x01)                           */
#define RTC_CR_POL_Pos                    (20UL)                    /*!< POL (Bit 20)                                          */
#define RTC_CR_POL_Msk                    (0x100000UL)              /*!< POL (Bitfield-Mask: 0x01)                             */
#define RTC_CR_OSEL_Pos                   (21UL)                    /*!< OSEL (Bit 21)                                         */
#define RTC_CR_OSEL_Msk                   (0x600000UL)              /*!< OSEL (Bitfield-Mask: 0x03)                            */
#define RTC_CR_COE_Pos                    (23UL)                    /*!< COE (Bit 23)                                          */
#define RTC_CR_COE_Msk                    (0x800000UL)              /*!< COE (Bitfield-Mask: 0x01)                             */
#define RTC_CR_ITSE_Pos                   (24UL)                    /*!< ITSE (Bit 24)                                         */
#define RTC_CR_ITSE_Msk                   (0x1000000UL)             /*!< ITSE (Bitfield-Mask: 0x01)                            */
/* ==========================================================  ISR  ========================================================== */
#define RTC_ISR_ALRAWF_Pos                (0UL)                     /*!< ALRAWF (Bit 0)                                        */
#define RTC_ISR_ALRAWF_Msk                (0x1UL)                   /*!< ALRAWF (Bitfield-Mask: 0x01)                          */
#define RTC_ISR_ALRBWF_Pos                (1UL)                     /*!< ALRBWF (Bit 1)                                        */
#define RTC_ISR_ALRBWF_Msk                (0x2UL)                   /*!< ALRBWF (Bitfield-Mask: 0x01)                          */
#define RTC_ISR_WUTWF_Pos                 (2UL)                     /*!< WUTWF (Bit 2)                                         */
#define RTC_ISR_WUTWF_Msk                 (0x4UL)                   /*!< WUTWF (Bitfield-Mask: 0x01)                           */
#define RTC_ISR_SHPF_Pos                  (3UL)                     /*!< SHPF (Bit 3)                                          */
#define RTC_ISR_SHPF_Msk                  (0x8UL)                   /*!< SHPF (Bitfield-Mask: 0x01)                            */
#define RTC_ISR_INITS_Pos                 (4UL)                     /*!< INITS (Bit 4)                                         */
#define RTC_ISR_INITS_Msk                 (0x10UL)                  /*!< INITS (Bitfield-Mask: 0x01)                           */
#define RTC_ISR_RSF_Pos                   (5UL)                     /*!< RSF (Bit 5)                                           */
#define RTC_ISR_RSF_Msk                   (0x20UL)                  /*!< RSF (Bitfield-Mask: 0x01)                             */
#define RTC_ISR_INITF_Pos                 (6UL)                     /*!< INITF (Bit 6)                                         */
#define RTC_ISR_INITF_Msk                 (0x40UL)                  /*!< INITF (Bitfield-Mask: 0x01)                           */
#define RTC_ISR_INIT_Pos                  (7UL)                     /*!< INIT (Bit 7)                                          */
#define RTC_ISR_INIT_Msk                  (0x80UL)                  /*!< INIT (Bitfield-Mask: 0x01)                            */
#define RTC_ISR_ALRAF_Pos                 (8UL)                     /*!< ALRAF (Bit 8)                                         */
#define RTC_ISR_ALRAF_Msk                 (0x100UL)                 /*!< ALRAF (Bitfield-Mask: 0x01)                           */
#define RTC_ISR_ALRBF_Pos                 (9UL)                     /*!< ALRBF (Bit 9)                                         */
#define RTC_ISR_ALRBF_Msk                 (0x200UL)                 /*!< ALRBF (Bitfield-Mask: 0x01)                           */
#define RTC_ISR_WUTF_Pos                  (10UL)                    /*!< WUTF (Bit 10)                                         */
#define RTC_ISR_WUTF_Msk                  (0x400UL)                 /*!< WUTF (Bitfield-Mask: 0x01)                            */
#define RTC_ISR_TSF_Pos                   (11UL)                    /*!< TSF (Bit 11)                                          */
#define RTC_ISR_TSF_Msk                   (0x800UL)                 /*!< TSF (Bitfield-Mask: 0x01)                             */
#define RTC_ISR_TSOVF_Pos                 (12UL)                    /*!< TSOVF (Bit 12)                                        */
#define RTC_ISR_TSOVF_Msk                 (0x1000UL)                /*!< TSOVF (Bitfield-Mask: 0x01)                           */
#define RTC_ISR_TAMP1F_Pos                (13UL)                    /*!< TAMP1F (Bit 13)                                       */
#define RTC_ISR_TAMP1F_Msk                (0x2000UL)                /*!< TAMP1F (Bitfield-Mask: 0x01)                          */
#define RTC_ISR_TAMP2F_Pos                (14UL)                    /*!< TAMP2F (Bit 14)                                       */
#define RTC_ISR_TAMP2F_Msk                (0x4000UL)                /*!< TAMP2F (Bitfield-Mask: 0x01)                          */
#define RTC_ISR_TAMP3F_Pos                (15UL)                    /*!< TAMP3F (Bit 15)                                       */
#define RTC_ISR_TAMP3F_Msk                (0x8000UL)                /*!< TAMP3F (Bitfield-Mask: 0x01)                          */
#define RTC_ISR_RECALPF_Pos               (16UL)                    /*!< RECALPF (Bit 16)                                      */
#define RTC_ISR_RECALPF_Msk               (0x10000UL)               /*!< RECALPF (Bitfield-Mask: 0x01)                         */
/* =========================================================  PRER  ========================================================== */
#define RTC_PRER_PREDIV_A_Pos             (16UL)                    /*!< PREDIV_A (Bit 16)                                     */
#define RTC_PRER_PREDIV_A_Msk             (0x7f0000UL)              /*!< PREDIV_A (Bitfield-Mask: 0x7f)                        */
#define RTC_PRER_PREDIV_S_Pos             (0UL)                     /*!< PREDIV_S (Bit 0)                                      */
#define RTC_PRER_PREDIV_S_Msk             (0x7fffUL)                /*!< PREDIV_S (Bitfield-Mask: 0x7fff)                      */
/* =========================================================  WUTR  ========================================================== */
#define RTC_WUTR_WUT_Pos                  (0UL)                     /*!< WUT (Bit 0)                                           */
#define RTC_WUTR_WUT_Msk                  (0xffffUL)                /*!< WUT (Bitfield-Mask: 0xffff)                           */
/* ========================================================  ALRMAR  ========================================================= */
#define RTC_ALRMAR_MSK4_Pos               (31UL)                    /*!< MSK4 (Bit 31)                                         */
#define RTC_ALRMAR_MSK4_Msk               (0x80000000UL)            /*!< MSK4 (Bitfield-Mask: 0x01)                            */
#define RTC_ALRMAR_WDSEL_Pos              (30UL)                    /*!< WDSEL (Bit 30)                                        */
#define RTC_ALRMAR_WDSEL_Msk              (0x40000000UL)            /*!< WDSEL (Bitfield-Mask: 0x01)                           */
#define RTC_ALRMAR_DT_Pos                 (28UL)                    /*!< DT (Bit 28)                                           */
#define RTC_ALRMAR_DT_Msk                 (0x30000000UL)            /*!< DT (Bitfield-Mask: 0x03)                              */
#define RTC_ALRMAR_DU_Pos                 (24UL)                    /*!< DU (Bit 24)                                           */
#define RTC_ALRMAR_DU_Msk                 (0xf000000UL)             /*!< DU (Bitfield-Mask: 0x0f)                              */
#define RTC_ALRMAR_MSK3_Pos               (23UL)                    /*!< MSK3 (Bit 23)                                         */
#define RTC_ALRMAR_MSK3_Msk               (0x800000UL)              /*!< MSK3 (Bitfield-Mask: 0x01)                            */
#define RTC_ALRMAR_PM_Pos                 (22UL)                    /*!< PM (Bit 22)                                           */
#define RTC_ALRMAR_PM_Msk                 (0x400000UL)              /*!< PM (Bitfield-Mask: 0x01)                              */
#define RTC_ALRMAR_HT_Pos                 (20UL)                    /*!< HT (Bit 20)                                           */
#define RTC_ALRMAR_HT_Msk                 (0x300000UL)              /*!< HT (Bitfield-Mask: 0x03)                              */
#define RTC_ALRMAR_HU_Pos                 (16UL)                    /*!< HU (Bit 16)                                           */
#define RTC_ALRMAR_HU_Msk                 (0xf0000UL)               /*!< HU (Bitfield-Mask: 0x0f)                              */
#define RTC_ALRMAR_MSK2_Pos               (15UL)                    /*!< MSK2 (Bit 15)                                         */
#define RTC_ALRMAR_MSK2_Msk               (0x8000UL)                /*!< MSK2 (Bitfield-Mask: 0x01)                            */
#define RTC_ALRMAR_MNT_Pos                (12UL)                    /*!< MNT (Bit 12)                                          */
#define RTC_ALRMAR_MNT_Msk                (0x7000UL)                /*!< MNT (Bitfield-Mask: 0x07)                             */
#define RTC_ALRMAR_MNU_Pos                (8UL)                     /*!< MNU (Bit 8)                                           */
#define RTC_ALRMAR_MNU_Msk                (0xf00UL)                 /*!< MNU (Bitfield-Mask: 0x0f)                             */
#define RTC_ALRMAR_MSK1_Pos               (7UL)                     /*!< MSK1 (Bit 7)                                          */
#define RTC_ALRMAR_MSK1_Msk               (0x80UL)                  /*!< MSK1 (Bitfield-Mask: 0x01)                            */
#define RTC_ALRMAR_ST_Pos                 (4UL)                     /*!< ST (Bit 4)                                            */
#define RTC_ALRMAR_ST_Msk                 (0x70UL)                  /*!< ST (Bitfield-Mask: 0x07)                              */
#define RTC_ALRMAR_SU_Pos                 (0UL)                     /*!< SU (Bit 0)                                            */
#define RTC_ALRMAR_SU_Msk                 (0xfUL)                   /*!< SU (Bitfield-Mask: 0x0f)                              */
/* ========================================================  ALRMBR  ========================================================= */
#define RTC_ALRMBR_MSK4_Pos               (31UL)                    /*!< MSK4 (Bit 31)                                         */
#define RTC_ALRMBR_MSK4_Msk               (0x80000000UL)            /*!< MSK4 (Bitfield-Mask: 0x01)                            */
#define RTC_ALRMBR_WDSEL_Pos              (30UL)                    /*!< WDSEL (Bit 30)                                        */
#define RTC_ALRMBR_WDSEL_Msk              (0x40000000UL)            /*!< WDSEL (Bitfield-Mask: 0x01)                           */
#define RTC_ALRMBR_DT_Pos                 (28UL)                    /*!< DT (Bit 28)                                           */
#define RTC_ALRMBR_DT_Msk                 (0x30000000UL)            /*!< DT (Bitfield-Mask: 0x03)                              */
#define RTC_ALRMBR_DU_Pos                 (24UL)                    /*!< DU (Bit 24)                                           */
#define RTC_ALRMBR_DU_Msk                 (0xf000000UL)             /*!< DU (Bitfield-Mask: 0x0f)                              */
#define RTC_ALRMBR_MSK3_Pos               (23UL)                    /*!< MSK3 (Bit 23)                                         */
#define RTC_ALRMBR_MSK3_Msk               (0x800000UL)              /*!< MSK3 (Bitfield-Mask: 0x01)                            */
#define RTC_ALRMBR_PM_Pos                 (22UL)                    /*!< PM (Bit 22)                                           */
#define RTC_ALRMBR_PM_Msk                 (0x400000UL)              /*!< PM (Bitfield-Mask: 0x01)                              */
#define RTC_ALRMBR_HT_Pos                 (20UL)                    /*!< HT (Bit 20)                                           */
#define RTC_ALRMBR_HT_Msk                 (0x300000UL)              /*!< HT (Bitfield-Mask: 0x03)                              */
#define RTC_ALRMBR_HU_Pos                 (16UL)                    /*!< HU (Bit 16)                                           */
#define RTC_ALRMBR_HU_Msk                 (0xf0000UL)               /*!< HU (Bitfield-Mask: 0x0f)                              */
#define RTC_ALRMBR_MSK2_Pos               (15UL)                    /*!< MSK2 (Bit 15)                                         */
#define RTC_ALRMBR_MSK2_Msk               (0x8000UL)                /*!< MSK2 (Bitfield-Mask: 0x01)                            */
#define RTC_ALRMBR_MNT_Pos                (12UL)                    /*!< MNT (Bit 12)                                          */
#define RTC_ALRMBR_MNT_Msk                (0x7000UL)                /*!< MNT (Bitfield-Mask: 0x07)                             */
#define RTC_ALRMBR_MNU_Pos                (8UL)                     /*!< MNU (Bit 8)                                           */
#define RTC_ALRMBR_MNU_Msk                (0xf00UL)                 /*!< MNU (Bitfield-Mask: 0x0f)                             */
#define RTC_ALRMBR_MSK1_Pos               (7UL)                     /*!< MSK1 (Bit 7)                                          */
#define RTC_ALRMBR_MSK1_Msk               (0x80UL)                  /*!< MSK1 (Bitfield-Mask: 0x01)                            */
#define RTC_ALRMBR_ST_Pos                 (4UL)                     /*!< ST (Bit 4)                                            */
#define RTC_ALRMBR_ST_Msk                 (0x70UL)                  /*!< ST (Bitfield-Mask: 0x07)                              */
#define RTC_ALRMBR_SU_Pos                 (0UL)                     /*!< SU (Bit 0)                                            */
#define RTC_ALRMBR_SU_Msk                 (0xfUL)                   /*!< SU (Bitfield-Mask: 0x0f)                              */
/* ==========================================================  WPR  ========================================================== */
#define RTC_WPR_KEY_Pos                   (0UL)                     /*!< KEY (Bit 0)                                           */
#define RTC_WPR_KEY_Msk                   (0xffUL)                  /*!< KEY (Bitfield-Mask: 0xff)                             */
/* ==========================================================  SSR  ========================================================== */
#define RTC_SSR_SS_Pos                    (0UL)                     /*!< SS (Bit 0)                                            */
#define RTC_SSR_SS_Msk                    (0xffffUL)                /*!< SS (Bitfield-Mask: 0xffff)                            */
/* ========================================================  SHIFTR  ========================================================= */
#define RTC_SHIFTR_ADD1S_Pos              (31UL)                    /*!< ADD1S (Bit 31)                                        */
#define RTC_SHIFTR_ADD1S_Msk              (0x80000000UL)            /*!< ADD1S (Bitfield-Mask: 0x01)                           */
#define RTC_SHIFTR_SUBFS_Pos              (0UL)                     /*!< SUBFS (Bit 0)                                         */
#define RTC_SHIFTR_SUBFS_Msk              (0x7fffUL)                /*!< SUBFS (Bitfield-Mask: 0x7fff)                         */
/* =========================================================  TSTR  ========================================================== */
#define RTC_TSTR_SU_Pos                   (0UL)                     /*!< SU (Bit 0)                                            */
#define RTC_TSTR_SU_Msk                   (0xfUL)                   /*!< SU (Bitfield-Mask: 0x0f)                              */
#define RTC_TSTR_ST_Pos                   (4UL)                     /*!< ST (Bit 4)                                            */
#define RTC_TSTR_ST_Msk                   (0x70UL)                  /*!< ST (Bitfield-Mask: 0x07)                              */
#define RTC_TSTR_MNU_Pos                  (8UL)                     /*!< MNU (Bit 8)                                           */
#define RTC_TSTR_MNU_Msk                  (0xf00UL)                 /*!< MNU (Bitfield-Mask: 0x0f)                             */
#define RTC_TSTR_MNT_Pos                  (12UL)                    /*!< MNT (Bit 12)                                          */
#define RTC_TSTR_MNT_Msk                  (0x7000UL)                /*!< MNT (Bitfield-Mask: 0x07)                             */
#define RTC_TSTR_HU_Pos                   (16UL)                    /*!< HU (Bit 16)                                           */
#define RTC_TSTR_HU_Msk                   (0xf0000UL)               /*!< HU (Bitfield-Mask: 0x0f)                              */
#define RTC_TSTR_HT_Pos                   (20UL)                    /*!< HT (Bit 20)                                           */
#define RTC_TSTR_HT_Msk                   (0x300000UL)              /*!< HT (Bitfield-Mask: 0x03)                              */
#define RTC_TSTR_PM_Pos                   (22UL)                    /*!< PM (Bit 22)                                           */
#define RTC_TSTR_PM_Msk                   (0x400000UL)              /*!< PM (Bitfield-Mask: 0x01)                              */
/* =========================================================  TSDR  ========================================================== */
#define RTC_TSDR_WDU_Pos                  (13UL)                    /*!< WDU (Bit 13)                                          */
#define RTC_TSDR_WDU_Msk                  (0xe000UL)                /*!< WDU (Bitfield-Mask: 0x07)                             */
#define RTC_TSDR_MT_Pos                   (12UL)                    /*!< MT (Bit 12)                                           */
#define RTC_TSDR_MT_Msk                   (0x1000UL)                /*!< MT (Bitfield-Mask: 0x01)                              */
#define RTC_TSDR_MU_Pos                   (8UL)                     /*!< MU (Bit 8)                                            */
#define RTC_TSDR_MU_Msk                   (0xf00UL)                 /*!< MU (Bitfield-Mask: 0x0f)                              */
#define RTC_TSDR_DT_Pos                   (4UL)                     /*!< DT (Bit 4)                                            */
#define RTC_TSDR_DT_Msk                   (0x30UL)                  /*!< DT (Bitfield-Mask: 0x03)                              */
#define RTC_TSDR_DU_Pos                   (0UL)                     /*!< DU (Bit 0)                                            */
#define RTC_TSDR_DU_Msk                   (0xfUL)                   /*!< DU (Bitfield-Mask: 0x0f)                              */
/* =========================================================  TSSSR  ========================================================= */
#define RTC_TSSSR_SS_Pos                  (0UL)                     /*!< SS (Bit 0)                                            */
#define RTC_TSSSR_SS_Msk                  (0xffffUL)                /*!< SS (Bitfield-Mask: 0xffff)                            */
/* =========================================================  CALR  ========================================================== */
#define RTC_CALR_CALP_Pos                 (15UL)                    /*!< CALP (Bit 15)                                         */
#define RTC_CALR_CALP_Msk                 (0x8000UL)                /*!< CALP (Bitfield-Mask: 0x01)                            */
#define RTC_CALR_CALW8_Pos                (14UL)                    /*!< CALW8 (Bit 14)                                        */
#define RTC_CALR_CALW8_Msk                (0x4000UL)                /*!< CALW8 (Bitfield-Mask: 0x01)                           */
#define RTC_CALR_CALW16_Pos               (13UL)                    /*!< CALW16 (Bit 13)                                       */
#define RTC_CALR_CALW16_Msk               (0x2000UL)                /*!< CALW16 (Bitfield-Mask: 0x01)                          */
#define RTC_CALR_CALM_Pos                 (0UL)                     /*!< CALM (Bit 0)                                          */
#define RTC_CALR_CALM_Msk                 (0x1ffUL)                 /*!< CALM (Bitfield-Mask: 0x1ff)                           */
/* ========================================================  TAMPCR  ========================================================= */
#define RTC_TAMPCR_TAMP1E_Pos             (0UL)                     /*!< TAMP1E (Bit 0)                                        */
#define RTC_TAMPCR_TAMP1E_Msk             (0x1UL)                   /*!< TAMP1E (Bitfield-Mask: 0x01)                          */
#define RTC_TAMPCR_TAMP1TRG_Pos           (1UL)                     /*!< TAMP1TRG (Bit 1)                                      */
#define RTC_TAMPCR_TAMP1TRG_Msk           (0x2UL)                   /*!< TAMP1TRG (Bitfield-Mask: 0x01)                        */
#define RTC_TAMPCR_TAMPIE_Pos             (2UL)                     /*!< TAMPIE (Bit 2)                                        */
#define RTC_TAMPCR_TAMPIE_Msk             (0x4UL)                   /*!< TAMPIE (Bitfield-Mask: 0x01)                          */
#define RTC_TAMPCR_TAMP2E_Pos             (3UL)                     /*!< TAMP2E (Bit 3)                                        */
#define RTC_TAMPCR_TAMP2E_Msk             (0x8UL)                   /*!< TAMP2E (Bitfield-Mask: 0x01)                          */
#define RTC_TAMPCR_TAMP2TRG_Pos           (4UL)                     /*!< TAMP2TRG (Bit 4)                                      */
#define RTC_TAMPCR_TAMP2TRG_Msk           (0x10UL)                  /*!< TAMP2TRG (Bitfield-Mask: 0x01)                        */
#define RTC_TAMPCR_TAMP3E_Pos             (5UL)                     /*!< TAMP3E (Bit 5)                                        */
#define RTC_TAMPCR_TAMP3E_Msk             (0x20UL)                  /*!< TAMP3E (Bitfield-Mask: 0x01)                          */
#define RTC_TAMPCR_TAMP3TRG_Pos           (6UL)                     /*!< TAMP3TRG (Bit 6)                                      */
#define RTC_TAMPCR_TAMP3TRG_Msk           (0x40UL)                  /*!< TAMP3TRG (Bitfield-Mask: 0x01)                        */
#define RTC_TAMPCR_TAMPTS_Pos             (7UL)                     /*!< TAMPTS (Bit 7)                                        */
#define RTC_TAMPCR_TAMPTS_Msk             (0x80UL)                  /*!< TAMPTS (Bitfield-Mask: 0x01)                          */
#define RTC_TAMPCR_TAMPFREQ_Pos           (8UL)                     /*!< TAMPFREQ (Bit 8)                                      */
#define RTC_TAMPCR_TAMPFREQ_Msk           (0x700UL)                 /*!< TAMPFREQ (Bitfield-Mask: 0x07)                        */
#define RTC_TAMPCR_TAMPFLT_Pos            (11UL)                    /*!< TAMPFLT (Bit 11)                                      */
#define RTC_TAMPCR_TAMPFLT_Msk            (0x1800UL)                /*!< TAMPFLT (Bitfield-Mask: 0x03)                         */
#define RTC_TAMPCR_TAMPPRCH_Pos           (13UL)                    /*!< TAMPPRCH (Bit 13)                                     */
#define RTC_TAMPCR_TAMPPRCH_Msk           (0x6000UL)                /*!< TAMPPRCH (Bitfield-Mask: 0x03)                        */
#define RTC_TAMPCR_TAMPPUDIS_Pos          (15UL)                    /*!< TAMPPUDIS (Bit 15)                                    */
#define RTC_TAMPCR_TAMPPUDIS_Msk          (0x8000UL)                /*!< TAMPPUDIS (Bitfield-Mask: 0x01)                       */
#define RTC_TAMPCR_TAMP1IE_Pos            (16UL)                    /*!< TAMP1IE (Bit 16)                                      */
#define RTC_TAMPCR_TAMP1IE_Msk            (0x10000UL)               /*!< TAMP1IE (Bitfield-Mask: 0x01)                         */
#define RTC_TAMPCR_TAMP1NOERASE_Pos       (17UL)                    /*!< TAMP1NOERASE (Bit 17)                                 */
#define RTC_TAMPCR_TAMP1NOERASE_Msk       (0x20000UL)               /*!< TAMP1NOERASE (Bitfield-Mask: 0x01)                    */
#define RTC_TAMPCR_TAMP1MF_Pos            (18UL)                    /*!< TAMP1MF (Bit 18)                                      */
#define RTC_TAMPCR_TAMP1MF_Msk            (0x40000UL)               /*!< TAMP1MF (Bitfield-Mask: 0x01)                         */
#define RTC_TAMPCR_TAMP2IE_Pos            (19UL)                    /*!< TAMP2IE (Bit 19)                                      */
#define RTC_TAMPCR_TAMP2IE_Msk            (0x80000UL)               /*!< TAMP2IE (Bitfield-Mask: 0x01)                         */
#define RTC_TAMPCR_TAMP2NOERASE_Pos       (20UL)                    /*!< TAMP2NOERASE (Bit 20)                                 */
#define RTC_TAMPCR_TAMP2NOERASE_Msk       (0x100000UL)              /*!< TAMP2NOERASE (Bitfield-Mask: 0x01)                    */
#define RTC_TAMPCR_TAMP2MF_Pos            (21UL)                    /*!< TAMP2MF (Bit 21)                                      */
#define RTC_TAMPCR_TAMP2MF_Msk            (0x200000UL)              /*!< TAMP2MF (Bitfield-Mask: 0x01)                         */
#define RTC_TAMPCR_TAMP3IE_Pos            (22UL)                    /*!< TAMP3IE (Bit 22)                                      */
#define RTC_TAMPCR_TAMP3IE_Msk            (0x400000UL)              /*!< TAMP3IE (Bitfield-Mask: 0x01)                         */
#define RTC_TAMPCR_TAMP3NOERASE_Pos       (23UL)                    /*!< TAMP3NOERASE (Bit 23)                                 */
#define RTC_TAMPCR_TAMP3NOERASE_Msk       (0x800000UL)              /*!< TAMP3NOERASE (Bitfield-Mask: 0x01)                    */
#define RTC_TAMPCR_TAMP3MF_Pos            (24UL)                    /*!< TAMP3MF (Bit 24)                                      */
#define RTC_TAMPCR_TAMP3MF_Msk            (0x1000000UL)             /*!< TAMP3MF (Bitfield-Mask: 0x01)                         */
/* =======================================================  ALRMASSR  ======================================================== */
#define RTC_ALRMASSR_MASKSS_Pos           (24UL)                    /*!< MASKSS (Bit 24)                                       */
#define RTC_ALRMASSR_MASKSS_Msk           (0xf000000UL)             /*!< MASKSS (Bitfield-Mask: 0x0f)                          */
#define RTC_ALRMASSR_SS_Pos               (0UL)                     /*!< SS (Bit 0)                                            */
#define RTC_ALRMASSR_SS_Msk               (0x7fffUL)                /*!< SS (Bitfield-Mask: 0x7fff)                            */
/* =======================================================  ALRMBSSR  ======================================================== */
#define RTC_ALRMBSSR_MASKSS_Pos           (24UL)                    /*!< MASKSS (Bit 24)                                       */
#define RTC_ALRMBSSR_MASKSS_Msk           (0xf000000UL)             /*!< MASKSS (Bitfield-Mask: 0x0f)                          */
#define RTC_ALRMBSSR_SS_Pos               (0UL)                     /*!< SS (Bit 0)                                            */
#define RTC_ALRMBSSR_SS_Msk               (0x7fffUL)                /*!< SS (Bitfield-Mask: 0x7fff)                            */
/* ==========================================================  OR  =========================================================== */
#define RTC_OR_RTC_ALARM_TYPE_Pos         (0UL)                     /*!< RTC_ALARM_TYPE (Bit 0)                                */
#define RTC_OR_RTC_ALARM_TYPE_Msk         (0x1UL)                   /*!< RTC_ALARM_TYPE (Bitfield-Mask: 0x01)                  */
#define RTC_OR_RTC_OUT_RMP_Pos            (1UL)                     /*!< RTC_OUT_RMP (Bit 1)                                   */
#define RTC_OR_RTC_OUT_RMP_Msk            (0x2UL)                   /*!< RTC_OUT_RMP (Bitfield-Mask: 0x01)                     */
/* =========================================================  BKP0R  ========================================================= */
#define RTC_BKP0R_BKP_Pos                 (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP0R_BKP_Msk                 (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  BKP1R  ========================================================= */
#define RTC_BKP1R_BKP_Pos                 (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP1R_BKP_Msk                 (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  BKP2R  ========================================================= */
#define RTC_BKP2R_BKP_Pos                 (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP2R_BKP_Msk                 (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  BKP3R  ========================================================= */
#define RTC_BKP3R_BKP_Pos                 (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP3R_BKP_Msk                 (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  BKP4R  ========================================================= */
#define RTC_BKP4R_BKP_Pos                 (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP4R_BKP_Msk                 (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  BKP5R  ========================================================= */
#define RTC_BKP5R_BKP_Pos                 (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP5R_BKP_Msk                 (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  BKP6R  ========================================================= */
#define RTC_BKP6R_BKP_Pos                 (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP6R_BKP_Msk                 (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  BKP7R  ========================================================= */
#define RTC_BKP7R_BKP_Pos                 (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP7R_BKP_Msk                 (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  BKP8R  ========================================================= */
#define RTC_BKP8R_BKP_Pos                 (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP8R_BKP_Msk                 (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* =========================================================  BKP9R  ========================================================= */
#define RTC_BKP9R_BKP_Pos                 (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP9R_BKP_Msk                 (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP10R  ========================================================= */
#define RTC_BKP10R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP10R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP11R  ========================================================= */
#define RTC_BKP11R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP11R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP12R  ========================================================= */
#define RTC_BKP12R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP12R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP13R  ========================================================= */
#define RTC_BKP13R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP13R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP14R  ========================================================= */
#define RTC_BKP14R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP14R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP15R  ========================================================= */
#define RTC_BKP15R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP15R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP16R  ========================================================= */
#define RTC_BKP16R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP16R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP17R  ========================================================= */
#define RTC_BKP17R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP17R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP18R  ========================================================= */
#define RTC_BKP18R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP18R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP19R  ========================================================= */
#define RTC_BKP19R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP19R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP20R  ========================================================= */
#define RTC_BKP20R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP20R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP21R  ========================================================= */
#define RTC_BKP21R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP21R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP22R  ========================================================= */
#define RTC_BKP22R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP22R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP23R  ========================================================= */
#define RTC_BKP23R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP23R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP24R  ========================================================= */
#define RTC_BKP24R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP24R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP25R  ========================================================= */
#define RTC_BKP25R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP25R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP26R  ========================================================= */
#define RTC_BKP26R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP26R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP27R  ========================================================= */
#define RTC_BKP27R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP27R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP28R  ========================================================= */
#define RTC_BKP28R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP28R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP29R  ========================================================= */
#define RTC_BKP29R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP29R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP30R  ========================================================= */
#define RTC_BKP30R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP30R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
/* ========================================================  BKP31R  ========================================================= */
#define RTC_BKP31R_BKP_Pos                (0UL)                     /*!< BKP (Bit 0)                                           */
#define RTC_BKP31R_BKP_Msk                (0xffffffffUL)            /*!< BKP (Bitfield-Mask: 0xffffffff)                       */
