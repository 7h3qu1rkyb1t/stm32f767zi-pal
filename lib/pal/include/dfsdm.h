#include "core.h"

#define DFSDM                       ((volatile DFSDM_Type*)             DFSDM_BASE)
#define DFSDM_BASE                  0x40017400UL


/* =========================================================================================================================== */
/* ================                                           DFSDM                                           ================ */
/* =========================================================================================================================== */


/**
  * @brief Digital filter for sigma delta
      modulators (DFSDM)
  */

typedef struct {                                /*!< (@ 0x40017400) DFSDM Structure                                            */
  
  union {
    __IOM uint32_t DFSDM_CHCFG0R1;              /*!< (@ 0x00000000) DFSDM channel configuration 0 register 1                   */
    
    struct {
      __IOM uint32_t SITP       : 2;            /*!< [1..0] Serial interface type for channel 0                                */
      __IOM uint32_t SPICKSEL   : 2;            /*!< [3..2] SPI clock select for channel 0                                     */
            uint32_t            : 1;
      __IOM uint32_t SCDEN      : 1;            /*!< [5..5] Short-circuit detector enable on channel 0                         */
      __IOM uint32_t CKABEN     : 1;            /*!< [6..6] Clock absence detector enable on channel 0                         */
      __IOM uint32_t CHEN       : 1;            /*!< [7..7] Channel 0 enable                                                   */
      __IOM uint32_t CHINSEL    : 1;            /*!< [8..8] Channel inputs selection                                           */
            uint32_t            : 3;
      __IOM uint32_t DATMPX     : 2;            /*!< [13..12] Input data multiplexer for channel 0                             */
      __IOM uint32_t DATPACK    : 2;            /*!< [15..14] Data packing mode in DFSDM_CHDATINyR register                    */
      __IOM uint32_t CKOUTDIV   : 8;            /*!< [23..16] Output serial clock divider                                      */
            uint32_t            : 6;
      __IOM uint32_t CKOUTSRC   : 1;            /*!< [30..30] Output serial clock source selection                             */
      __IOM uint32_t DFSDMEN    : 1;            /*!< [31..31] Global enable for DFSDM interface                                */
    } DFSDM_CHCFG0R1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHCFG0R2;              /*!< (@ 0x00000004) DFSDM channel configuration 0 register 2                   */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t DTRBS      : 5;            /*!< [7..3] Data right bit-shift for channel 0                                 */
      __IOM uint32_t OFFSET     : 24;           /*!< [31..8] 24-bit calibration offset for channel 0                           */
    } DFSDM_CHCFG0R2_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_AWSCD0R;               /*!< (@ 0x00000008) DFSDM analog watchdog and short-circuit detector
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t SCDT       : 8;            /*!< [7..0] short-circuit detector threshold for channel 0                     */
            uint32_t            : 4;
      __IOM uint32_t BKSCD      : 4;            /*!< [15..12] Break signal assignment for short-circuit detector
                                                     on channel 0                                                              */
      __IOM uint32_t AWFOSR     : 5;            /*!< [20..16] Analog watchdog filter oversampling ratio (decimation
                                                     rate) on channel 0                                                        */
            uint32_t            : 1;
      __IOM uint32_t AWFORD     : 2;            /*!< [23..22] Analog watchdog Sinc filter order on channel 0                   */
            uint32_t            : 8;
    } DFSDM_AWSCD0R_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM_CHWDAT0R;              /*!< (@ 0x0000000C) DFSDM channel watchdog filter data register                */
    
    struct {
      __IM  uint32_t WDATA      : 16;           /*!< [15..0] Input channel y watchdog data                                     */
            uint32_t            : 16;
    } DFSDM_CHWDAT0R_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHDATIN0R;             /*!< (@ 0x00000010) DFSDM channel data input register                          */
    
    struct {
      __IOM uint32_t INDAT0     : 16;           /*!< [15..0] Input data for channel 0                                          */
      __IOM uint32_t INDAT1     : 16;           /*!< [31..16] Input data for channel 1                                         */
    } DFSDM_CHDATIN0R_b;
  } ;
  __IM  uint32_t  RESERVED[3];
  
  union {
    __IOM uint32_t DFSDM_CHCFG1R1;              /*!< (@ 0x00000020) DFSDM channel configuration 1 register 1                   */
    
    struct {
      __IOM uint32_t SITP       : 2;            /*!< [1..0] Serial interface type for channel 1                                */
      __IOM uint32_t SPICKSEL   : 2;            /*!< [3..2] SPI clock select for channel 1                                     */
            uint32_t            : 1;
      __IOM uint32_t SCDEN      : 1;            /*!< [5..5] Short-circuit detector enable on channel 1                         */
      __IOM uint32_t CKABEN     : 1;            /*!< [6..6] Clock absence detector enable on channel 1                         */
      __IOM uint32_t CHEN       : 1;            /*!< [7..7] Channel 1 enable                                                   */
      __IOM uint32_t CHINSEL    : 1;            /*!< [8..8] Channel inputs selection                                           */
            uint32_t            : 3;
      __IOM uint32_t DATMPX     : 2;            /*!< [13..12] Input data multiplexer for channel 1                             */
      __IOM uint32_t DATPACK    : 2;            /*!< [15..14] Data packing mode in DFSDM_CHDATINyR register                    */
      __IOM uint32_t CKOUTDIV   : 8;            /*!< [23..16] Output serial clock divider                                      */
            uint32_t            : 6;
      __IOM uint32_t CKOUTSRC   : 1;            /*!< [30..30] Output serial clock source selection                             */
      __IOM uint32_t DFSDMEN    : 1;            /*!< [31..31] Global enable for DFSDM interface                                */
    } DFSDM_CHCFG1R1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHCFG1R2;              /*!< (@ 0x00000024) DFSDM channel configuration 1 register 2                   */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t DTRBS      : 5;            /*!< [7..3] Data right bit-shift for channel 1                                 */
      __IOM uint32_t OFFSET     : 24;           /*!< [31..8] 24-bit calibration offset for channel 1                           */
    } DFSDM_CHCFG1R2_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_AWSCD1R;               /*!< (@ 0x00000028) DFSDM analog watchdog and short-circuit detector
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t SCDT       : 8;            /*!< [7..0] short-circuit detector threshold for channel 1                     */
            uint32_t            : 4;
      __IOM uint32_t BKSCD      : 4;            /*!< [15..12] Break signal assignment for short-circuit detector
                                                     on channel 1                                                              */
      __IOM uint32_t AWFOSR     : 5;            /*!< [20..16] Analog watchdog filter oversampling ratio (decimation
                                                     rate) on channel 1                                                        */
            uint32_t            : 1;
      __IOM uint32_t AWFORD     : 2;            /*!< [23..22] Analog watchdog Sinc filter order on channel 1                   */
            uint32_t            : 8;
    } DFSDM_AWSCD1R_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM_CHWDAT1R;              /*!< (@ 0x0000002C) DFSDM channel watchdog filter data register                */
    
    struct {
      __IM  uint32_t WDATA      : 16;           /*!< [15..0] Input channel y watchdog data                                     */
            uint32_t            : 16;
    } DFSDM_CHWDAT1R_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHDATIN1R;             /*!< (@ 0x00000030) DFSDM channel data input register                          */
    
    struct {
      __IOM uint32_t INDAT0     : 16;           /*!< [15..0] Input data for channel 1                                          */
      __IOM uint32_t INDAT1     : 16;           /*!< [31..16] Input data for channel 2                                         */
    } DFSDM_CHDATIN1R_b;
  } ;
  __IM  uint32_t  RESERVED1[3];
  
  union {
    __IOM uint32_t DFSDM_CHCFG2R1;              /*!< (@ 0x00000040) DFSDM channel configuration 2 register 1                   */
    
    struct {
      __IOM uint32_t SITP       : 2;            /*!< [1..0] Serial interface type for channel 2                                */
      __IOM uint32_t SPICKSEL   : 2;            /*!< [3..2] SPI clock select for channel 2                                     */
            uint32_t            : 1;
      __IOM uint32_t SCDEN      : 1;            /*!< [5..5] Short-circuit detector enable on channel 2                         */
      __IOM uint32_t CKABEN     : 1;            /*!< [6..6] Clock absence detector enable on channel 2                         */
      __IOM uint32_t CHEN       : 1;            /*!< [7..7] Channel 2 enable                                                   */
      __IOM uint32_t CHINSEL    : 1;            /*!< [8..8] Channel inputs selection                                           */
            uint32_t            : 3;
      __IOM uint32_t DATMPX     : 2;            /*!< [13..12] Input data multiplexer for channel 2                             */
      __IOM uint32_t DATPACK    : 2;            /*!< [15..14] Data packing mode in DFSDM_CHDATINyR register                    */
      __IOM uint32_t CKOUTDIV   : 8;            /*!< [23..16] Output serial clock divider                                      */
            uint32_t            : 6;
      __IOM uint32_t CKOUTSRC   : 1;            /*!< [30..30] Output serial clock source selection                             */
      __IOM uint32_t DFSDMEN    : 1;            /*!< [31..31] Global enable for DFSDM interface                                */
    } DFSDM_CHCFG2R1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHCFG2R2;              /*!< (@ 0x00000044) DFSDM channel configuration 2 register 2                   */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t DTRBS      : 5;            /*!< [7..3] Data right bit-shift for channel 2                                 */
      __IOM uint32_t OFFSET     : 24;           /*!< [31..8] 24-bit calibration offset for channel 2                           */
    } DFSDM_CHCFG2R2_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_AWSCD2R;               /*!< (@ 0x00000048) DFSDM analog watchdog and short-circuit detector
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t SCDT       : 8;            /*!< [7..0] short-circuit detector threshold for channel 2                     */
            uint32_t            : 4;
      __IOM uint32_t BKSCD      : 4;            /*!< [15..12] Break signal assignment for short-circuit detector
                                                     on channel 2                                                              */
      __IOM uint32_t AWFOSR     : 5;            /*!< [20..16] Analog watchdog filter oversampling ratio (decimation
                                                     rate) on channel 2                                                        */
            uint32_t            : 1;
      __IOM uint32_t AWFORD     : 2;            /*!< [23..22] Analog watchdog Sinc filter order on channel 2                   */
            uint32_t            : 8;
    } DFSDM_AWSCD2R_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM_CHWDAT2R;              /*!< (@ 0x0000004C) DFSDM channel watchdog filter data register                */
    
    struct {
      __IM  uint32_t WDATA      : 16;           /*!< [15..0] Input channel y watchdog data                                     */
            uint32_t            : 16;
    } DFSDM_CHWDAT2R_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHDATIN2R;             /*!< (@ 0x00000050) DFSDM channel data input register                          */
    
    struct {
      __IOM uint32_t INDAT0     : 16;           /*!< [15..0] Input data for channel 2                                          */
      __IOM uint32_t INDAT1     : 16;           /*!< [31..16] Input data for channel 3                                         */
    } DFSDM_CHDATIN2R_b;
  } ;
  __IM  uint32_t  RESERVED2[3];
  
  union {
    __IOM uint32_t DFSDM_CHCFG3R1;              /*!< (@ 0x00000060) DFSDM channel configuration 3 register 1                   */
    
    struct {
      __IOM uint32_t SITP       : 2;            /*!< [1..0] Serial interface type for channel 3                                */
      __IOM uint32_t SPICKSEL   : 2;            /*!< [3..2] SPI clock select for channel 3                                     */
            uint32_t            : 1;
      __IOM uint32_t SCDEN      : 1;            /*!< [5..5] Short-circuit detector enable on channel 3                         */
      __IOM uint32_t CKABEN     : 1;            /*!< [6..6] Clock absence detector enable on channel 3                         */
      __IOM uint32_t CHEN       : 1;            /*!< [7..7] Channel 3 enable                                                   */
      __IOM uint32_t CHINSEL    : 1;            /*!< [8..8] Channel inputs selection                                           */
            uint32_t            : 3;
      __IOM uint32_t DATMPX     : 2;            /*!< [13..12] Input data multiplexer for channel 3                             */
      __IOM uint32_t DATPACK    : 2;            /*!< [15..14] Data packing mode in DFSDM_CHDATINyR register                    */
      __IOM uint32_t CKOUTDIV   : 8;            /*!< [23..16] Output serial clock divider                                      */
            uint32_t            : 6;
      __IOM uint32_t CKOUTSRC   : 1;            /*!< [30..30] Output serial clock source selection                             */
      __IOM uint32_t DFSDMEN    : 1;            /*!< [31..31] Global enable for DFSDM interface                                */
    } DFSDM_CHCFG3R1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHCFG3R2;              /*!< (@ 0x00000064) DFSDM channel configuration 3 register 2                   */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t DTRBS      : 5;            /*!< [7..3] Data right bit-shift for channel 3                                 */
      __IOM uint32_t OFFSET     : 24;           /*!< [31..8] 24-bit calibration offset for channel 3                           */
    } DFSDM_CHCFG3R2_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_AWSCD3R;               /*!< (@ 0x00000068) DFSDM analog watchdog and short-circuit detector
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t SCDT       : 8;            /*!< [7..0] short-circuit detector threshold for channel 3                     */
            uint32_t            : 4;
      __IOM uint32_t BKSCD      : 4;            /*!< [15..12] Break signal assignment for short-circuit detector
                                                     on channel 3                                                              */
      __IOM uint32_t AWFOSR     : 5;            /*!< [20..16] Analog watchdog filter oversampling ratio (decimation
                                                     rate) on channel 3                                                        */
            uint32_t            : 1;
      __IOM uint32_t AWFORD     : 2;            /*!< [23..22] Analog watchdog Sinc filter order on channel 3                   */
            uint32_t            : 8;
    } DFSDM_AWSCD3R_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM_CHWDAT3R;              /*!< (@ 0x0000006C) DFSDM channel watchdog filter data register                */
    
    struct {
      __IM  uint32_t WDATA      : 16;           /*!< [15..0] Input channel y watchdog data                                     */
            uint32_t            : 16;
    } DFSDM_CHWDAT3R_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHDATIN3R;             /*!< (@ 0x00000070) DFSDM channel data input register                          */
    
    struct {
      __IOM uint32_t INDAT0     : 16;           /*!< [15..0] Input data for channel 3                                          */
      __IOM uint32_t INDAT1     : 16;           /*!< [31..16] Input data for channel 4                                         */
    } DFSDM_CHDATIN3R_b;
  } ;
  __IM  uint32_t  RESERVED3[3];
  
  union {
    __IOM uint32_t DFSDM_CHCFG4R1;              /*!< (@ 0x00000080) DFSDM channel configuration 4 register 1                   */
    
    struct {
      __IOM uint32_t SITP       : 2;            /*!< [1..0] Serial interface type for channel 4                                */
      __IOM uint32_t SPICKSEL   : 2;            /*!< [3..2] SPI clock select for channel 4                                     */
            uint32_t            : 1;
      __IOM uint32_t SCDEN      : 1;            /*!< [5..5] Short-circuit detector enable on channel 4                         */
      __IOM uint32_t CKABEN     : 1;            /*!< [6..6] Clock absence detector enable on channel 4                         */
      __IOM uint32_t CHEN       : 1;            /*!< [7..7] Channel 4 enable                                                   */
      __IOM uint32_t CHINSEL    : 1;            /*!< [8..8] Channel inputs selection                                           */
            uint32_t            : 3;
      __IOM uint32_t DATMPX     : 2;            /*!< [13..12] Input data multiplexer for channel 4                             */
      __IOM uint32_t DATPACK    : 2;            /*!< [15..14] Data packing mode in DFSDM_CHDATINyR register                    */
      __IOM uint32_t CKOUTDIV   : 8;            /*!< [23..16] Output serial clock divider                                      */
            uint32_t            : 6;
      __IOM uint32_t CKOUTSRC   : 1;            /*!< [30..30] Output serial clock source selection                             */
      __IOM uint32_t DFSDMEN    : 1;            /*!< [31..31] Global enable for DFSDM interface                                */
    } DFSDM_CHCFG4R1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHCFG4R2;              /*!< (@ 0x00000084) DFSDM channel configuration 4 register 2                   */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t DTRBS      : 5;            /*!< [7..3] Data right bit-shift for channel 4                                 */
      __IOM uint32_t OFFSET     : 24;           /*!< [31..8] 24-bit calibration offset for channel 4                           */
    } DFSDM_CHCFG4R2_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_AWSCD4R;               /*!< (@ 0x00000088) DFSDM analog watchdog and short-circuit detector
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t SCDT       : 8;            /*!< [7..0] short-circuit detector threshold for channel 4                     */
            uint32_t            : 4;
      __IOM uint32_t BKSCD      : 4;            /*!< [15..12] Break signal assignment for short-circuit detector
                                                     on channel 4                                                              */
      __IOM uint32_t AWFOSR     : 5;            /*!< [20..16] Analog watchdog filter oversampling ratio (decimation
                                                     rate) on channel 4                                                        */
            uint32_t            : 1;
      __IOM uint32_t AWFORD     : 2;            /*!< [23..22] Analog watchdog Sinc filter order on channel 4                   */
            uint32_t            : 8;
    } DFSDM_AWSCD4R_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM_CHWDAT4R;              /*!< (@ 0x0000008C) DFSDM channel watchdog filter data register                */
    
    struct {
      __IM  uint32_t WDATA      : 16;           /*!< [15..0] Input channel y watchdog data                                     */
            uint32_t            : 16;
    } DFSDM_CHWDAT4R_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHDATIN4R;             /*!< (@ 0x00000090) DFSDM channel data input register                          */
    
    struct {
      __IOM uint32_t INDAT0     : 16;           /*!< [15..0] Input data for channel 4                                          */
      __IOM uint32_t INDAT1     : 16;           /*!< [31..16] Input data for channel 5                                         */
    } DFSDM_CHDATIN4R_b;
  } ;
  __IM  uint32_t  RESERVED4[3];
  
  union {
    __IOM uint32_t DFSDM_CHCFG5R1;              /*!< (@ 0x000000A0) DFSDM channel configuration 5 register 1                   */
    
    struct {
      __IOM uint32_t SITP       : 2;            /*!< [1..0] Serial interface type for channel 5                                */
      __IOM uint32_t SPICKSEL   : 2;            /*!< [3..2] SPI clock select for channel 5                                     */
            uint32_t            : 1;
      __IOM uint32_t SCDEN      : 1;            /*!< [5..5] Short-circuit detector enable on channel 5                         */
      __IOM uint32_t CKABEN     : 1;            /*!< [6..6] Clock absence detector enable on channel 5                         */
      __IOM uint32_t CHEN       : 1;            /*!< [7..7] Channel 5 enable                                                   */
      __IOM uint32_t CHINSEL    : 1;            /*!< [8..8] Channel inputs selection                                           */
            uint32_t            : 3;
      __IOM uint32_t DATMPX     : 2;            /*!< [13..12] Input data multiplexer for channel 5                             */
      __IOM uint32_t DATPACK    : 2;            /*!< [15..14] Data packing mode in DFSDM_CHDATINyR register                    */
      __IOM uint32_t CKOUTDIV   : 8;            /*!< [23..16] Output serial clock divider                                      */
            uint32_t            : 6;
      __IOM uint32_t CKOUTSRC   : 1;            /*!< [30..30] Output serial clock source selection                             */
      __IOM uint32_t DFSDMEN    : 1;            /*!< [31..31] Global enable for DFSDM interface                                */
    } DFSDM_CHCFG5R1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHCFG5R2;              /*!< (@ 0x000000A4) DFSDM channel configuration 5 register 2                   */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t DTRBS      : 5;            /*!< [7..3] Data right bit-shift for channel 5                                 */
      __IOM uint32_t OFFSET     : 24;           /*!< [31..8] 24-bit calibration offset for channel 5                           */
    } DFSDM_CHCFG5R2_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_AWSCD5R;               /*!< (@ 0x000000A8) DFSDM analog watchdog and short-circuit detector
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t SCDT       : 8;            /*!< [7..0] short-circuit detector threshold for channel 5                     */
            uint32_t            : 4;
      __IOM uint32_t BKSCD      : 4;            /*!< [15..12] Break signal assignment for short-circuit detector
                                                     on channel 5                                                              */
      __IOM uint32_t AWFOSR     : 5;            /*!< [20..16] Analog watchdog filter oversampling ratio (decimation
                                                     rate) on channel 5                                                        */
            uint32_t            : 1;
      __IOM uint32_t AWFORD     : 2;            /*!< [23..22] Analog watchdog Sinc filter order on channel 5                   */
            uint32_t            : 8;
    } DFSDM_AWSCD5R_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM_CHWDAT5R;              /*!< (@ 0x000000AC) DFSDM channel watchdog filter data register                */
    
    struct {
      __IM  uint32_t WDATA      : 16;           /*!< [15..0] Input channel y watchdog data                                     */
            uint32_t            : 16;
    } DFSDM_CHWDAT5R_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHDATIN5R;             /*!< (@ 0x000000B0) DFSDM channel data input register                          */
    
    struct {
      __IOM uint32_t INDAT0     : 16;           /*!< [15..0] Input data for channel 5                                          */
      __IOM uint32_t INDAT1     : 16;           /*!< [31..16] Input data for channel 6                                         */
    } DFSDM_CHDATIN5R_b;
  } ;
  __IM  uint32_t  RESERVED5[3];
  
  union {
    __IOM uint32_t DFSDM_CHCFG6R1;              /*!< (@ 0x000000C0) DFSDM channel configuration 6 register 1                   */
    
    struct {
      __IOM uint32_t SITP       : 2;            /*!< [1..0] Serial interface type for channel 6                                */
      __IOM uint32_t SPICKSEL   : 2;            /*!< [3..2] SPI clock select for channel 6                                     */
            uint32_t            : 1;
      __IOM uint32_t SCDEN      : 1;            /*!< [5..5] Short-circuit detector enable on channel 6                         */
      __IOM uint32_t CKABEN     : 1;            /*!< [6..6] Clock absence detector enable on channel 6                         */
      __IOM uint32_t CHEN       : 1;            /*!< [7..7] Channel 6 enable                                                   */
      __IOM uint32_t CHINSEL    : 1;            /*!< [8..8] Channel inputs selection                                           */
            uint32_t            : 3;
      __IOM uint32_t DATMPX     : 2;            /*!< [13..12] Input data multiplexer for channel 6                             */
      __IOM uint32_t DATPACK    : 2;            /*!< [15..14] Data packing mode in DFSDM_CHDATINyR register                    */
      __IOM uint32_t CKOUTDIV   : 8;            /*!< [23..16] Output serial clock divider                                      */
            uint32_t            : 6;
      __IOM uint32_t CKOUTSRC   : 1;            /*!< [30..30] Output serial clock source selection                             */
      __IOM uint32_t DFSDMEN    : 1;            /*!< [31..31] Global enable for DFSDM interface                                */
    } DFSDM_CHCFG6R1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHCFG6R2;              /*!< (@ 0x000000C4) DFSDM channel configuration 6 register 2                   */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t DTRBS      : 5;            /*!< [7..3] Data right bit-shift for channel 6                                 */
      __IOM uint32_t OFFSET     : 24;           /*!< [31..8] 24-bit calibration offset for channel 6                           */
    } DFSDM_CHCFG6R2_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_AWSCD6R;               /*!< (@ 0x000000C8) DFSDM analog watchdog and short-circuit detector
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t SCDT       : 8;            /*!< [7..0] short-circuit detector threshold for channel 6                     */
            uint32_t            : 4;
      __IOM uint32_t BKSCD      : 4;            /*!< [15..12] Break signal assignment for short-circuit detector
                                                     on channel 6                                                              */
      __IOM uint32_t AWFOSR     : 5;            /*!< [20..16] Analog watchdog filter oversampling ratio (decimation
                                                     rate) on channel 6                                                        */
            uint32_t            : 1;
      __IOM uint32_t AWFORD     : 2;            /*!< [23..22] Analog watchdog Sinc filter order on channel 6                   */
            uint32_t            : 8;
    } DFSDM_AWSCD6R_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM_CHWDAT6R;              /*!< (@ 0x000000CC) DFSDM channel watchdog filter data register                */
    
    struct {
      __IM  uint32_t WDATA      : 16;           /*!< [15..0] Input channel y watchdog data                                     */
            uint32_t            : 16;
    } DFSDM_CHWDAT6R_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHDATIN6R;             /*!< (@ 0x000000D0) DFSDM channel data input register                          */
    
    struct {
      __IOM uint32_t INDAT0     : 16;           /*!< [15..0] Input data for channel 6                                          */
      __IOM uint32_t INDAT1     : 16;           /*!< [31..16] Input data for channel 7                                         */
    } DFSDM_CHDATIN6R_b;
  } ;
  __IM  uint32_t  RESERVED6[3];
  
  union {
    __IOM uint32_t DFSDM_CHCFG7R1;              /*!< (@ 0x000000E0) DFSDM channel configuration 7 register 1                   */
    
    struct {
      __IOM uint32_t SITP       : 2;            /*!< [1..0] Serial interface type for channel 7                                */
      __IOM uint32_t SPICKSEL   : 2;            /*!< [3..2] SPI clock select for channel 7                                     */
            uint32_t            : 1;
      __IOM uint32_t SCDEN      : 1;            /*!< [5..5] Short-circuit detector enable on channel 7                         */
      __IOM uint32_t CKABEN     : 1;            /*!< [6..6] Clock absence detector enable on channel 7                         */
      __IOM uint32_t CHEN       : 1;            /*!< [7..7] Channel 7 enable                                                   */
      __IOM uint32_t CHINSEL    : 1;            /*!< [8..8] Channel inputs selection                                           */
            uint32_t            : 3;
      __IOM uint32_t DATMPX     : 2;            /*!< [13..12] Input data multiplexer for channel 7                             */
      __IOM uint32_t DATPACK    : 2;            /*!< [15..14] Data packing mode in DFSDM_CHDATINyR register                    */
      __IOM uint32_t CKOUTDIV   : 8;            /*!< [23..16] Output serial clock divider                                      */
            uint32_t            : 6;
      __IOM uint32_t CKOUTSRC   : 1;            /*!< [30..30] Output serial clock source selection                             */
      __IOM uint32_t DFSDMEN    : 1;            /*!< [31..31] Global enable for DFSDM interface                                */
    } DFSDM_CHCFG7R1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHCFG7R2;              /*!< (@ 0x000000E4) DFSDM channel configuration 7 register 2                   */
    
    struct {
            uint32_t            : 3;
      __IOM uint32_t DTRBS      : 5;            /*!< [7..3] Data right bit-shift for channel 7                                 */
      __IOM uint32_t OFFSET     : 24;           /*!< [31..8] 24-bit calibration offset for channel 7                           */
    } DFSDM_CHCFG7R2_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_AWSCD7R;               /*!< (@ 0x000000E8) DFSDM analog watchdog and short-circuit detector
                                                                    register                                                   */
    
    struct {
      __IOM uint32_t SCDT       : 8;            /*!< [7..0] short-circuit detector threshold for channel 7                     */
            uint32_t            : 4;
      __IOM uint32_t BKSCD      : 4;            /*!< [15..12] Break signal assignment for short-circuit detector
                                                     on channel 7                                                              */
      __IOM uint32_t AWFOSR     : 5;            /*!< [20..16] Analog watchdog filter oversampling ratio (decimation
                                                     rate) on channel 7                                                        */
            uint32_t            : 1;
      __IOM uint32_t AWFORD     : 2;            /*!< [23..22] Analog watchdog Sinc filter order on channel 7                   */
            uint32_t            : 8;
    } DFSDM_AWSCD7R_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM_CHWDAT7R;              /*!< (@ 0x000000EC) DFSDM channel watchdog filter data register                */
    
    struct {
      __IM  uint32_t WDATA      : 16;           /*!< [15..0] Input channel y watchdog data                                     */
            uint32_t            : 16;
    } DFSDM_CHWDAT7R_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM_CHDATIN7R;             /*!< (@ 0x000000F0) DFSDM channel data input register                          */
    
    struct {
      __IOM uint32_t INDAT0     : 16;           /*!< [15..0] Input data for channel 7                                          */
      __IOM uint32_t INDAT1     : 16;           /*!< [31..16] Input data for channel 8                                         */
    } DFSDM_CHDATIN7R_b;
  } ;
  __IM  uint32_t  RESERVED7[3];
  
  union {
    __IOM uint32_t DFSDM0_CR1;                  /*!< (@ 0x00000100) DFSDM control register 1                                   */
    
    struct {
      __IOM uint32_t DFEN       : 1;            /*!< [0..0] DFSDM enable                                                       */
      __IOM uint32_t JSWSTART   : 1;            /*!< [1..1] Start a conversion of the injected group of channels               */
            uint32_t            : 1;
      __IOM uint32_t JSYNC      : 1;            /*!< [3..3] Launch an injected conversion synchronously with the
                                                     DFSDM0 JSWSTART trigger                                                   */
      __IOM uint32_t JSCAN      : 1;            /*!< [4..4] Scanning conversion mode for injected conversions                  */
      __IOM uint32_t JDMAEN     : 1;            /*!< [5..5] DMA channel enabled to read data for the injected channel
                                                     group                                                                     */
            uint32_t            : 2;
      __IOM uint32_t JEXTSEL    : 5;            /*!< [12..8] Trigger signal selection for launching injected conversions       */
      __IOM uint32_t JEXTEN     : 2;            /*!< [14..13] Trigger enable and trigger edge selection for injected
                                                     conversions                                                               */
            uint32_t            : 2;
      __IOM uint32_t RSWSTART   : 1;            /*!< [17..17] Software start of a conversion on the regular channel            */
      __IOM uint32_t RCONT      : 1;            /*!< [18..18] Continuous mode selection for regular conversions                */
      __IOM uint32_t RSYNC      : 1;            /*!< [19..19] Launch regular conversion synchronously with DFSDM0              */
            uint32_t            : 1;
      __IOM uint32_t RDMAEN     : 1;            /*!< [21..21] DMA channel enabled to read data for the regular conversion      */
            uint32_t            : 2;
      __IOM uint32_t RCH        : 3;            /*!< [26..24] Regular channel selection                                        */
            uint32_t            : 2;
      __IOM uint32_t FAST       : 1;            /*!< [29..29] Fast conversion mode selection for regular conversions           */
      __IOM uint32_t AWFSEL     : 1;            /*!< [30..30] Analog watchdog fast mode select                                 */
            uint32_t            : 1;
    } DFSDM0_CR1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM0_CR2;                  /*!< (@ 0x00000104) DFSDM control register 2                                   */
    
    struct {
      __IOM uint32_t JEOCIE     : 1;            /*!< [0..0] Injected end of conversion interrupt enable                        */
      __IOM uint32_t REOCIE     : 1;            /*!< [1..1] Regular end of conversion interrupt enable                         */
      __IOM uint32_t JOVRIE     : 1;            /*!< [2..2] Injected data overrun interrupt enable                             */
      __IOM uint32_t ROVRIE     : 1;            /*!< [3..3] Regular data overrun interrupt enable                              */
      __IOM uint32_t AWDIE      : 1;            /*!< [4..4] Analog watchdog interrupt enable                                   */
      __IOM uint32_t SCDIE      : 1;            /*!< [5..5] Short-circuit detector interrupt enable                            */
      __IOM uint32_t CKABIE     : 1;            /*!< [6..6] Clock absence interrupt enable                                     */
            uint32_t            : 1;
      __IOM uint32_t EXCH       : 8;            /*!< [15..8] Extremes detector channel selection                               */
      __IOM uint32_t AWDCH      : 8;            /*!< [23..16] Analog watchdog channel selection                                */
            uint32_t            : 8;
    } DFSDM0_CR2_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM0_ISR;                  /*!< (@ 0x00000108) DFSDM interrupt and status register                        */
    
    struct {
      __IM  uint32_t JEOCF      : 1;            /*!< [0..0] End of injected conversion flag                                    */
      __IM  uint32_t REOCF      : 1;            /*!< [1..1] End of regular conversion flag                                     */
      __IM  uint32_t JOVRF      : 1;            /*!< [2..2] Injected conversion overrun flag                                   */
      __IM  uint32_t ROVRF      : 1;            /*!< [3..3] Regular conversion overrun flag                                    */
      __IM  uint32_t AWDF       : 1;            /*!< [4..4] Analog watchdog                                                    */
            uint32_t            : 8;
      __IM  uint32_t JCIP       : 1;            /*!< [13..13] Injected conversion in progress status                           */
      __IM  uint32_t RCIP       : 1;            /*!< [14..14] Regular conversion in progress status                            */
            uint32_t            : 1;
      __IM  uint32_t CKABF      : 8;            /*!< [23..16] Clock absence flag                                               */
      __IM  uint32_t SCDF       : 8;            /*!< [31..24] short-circuit detector flag                                      */
    } DFSDM0_ISR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM0_ICR;                  /*!< (@ 0x0000010C) DFSDM interrupt flag clear register                        */
    
    struct {
            uint32_t            : 2;
      __IOM uint32_t CLRJOVRF   : 1;            /*!< [2..2] Clear the injected conversion overrun flag                         */
      __IOM uint32_t CLRROVRF   : 1;            /*!< [3..3] Clear the regular conversion overrun flag                          */
            uint32_t            : 12;
      __IOM uint32_t CLRCKABF   : 8;            /*!< [23..16] Clear the clock absence flag                                     */
      __IOM uint32_t CLRSCDF    : 8;            /*!< [31..24] Clear the short-circuit detector flag                            */
    } DFSDM0_ICR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM0_JCHGR;                /*!< (@ 0x00000110) DFSDM injected channel group selection register            */
    
    struct {
      __IOM uint32_t JCHG       : 8;            /*!< [7..0] Injected channel group selection                                   */
            uint32_t            : 24;
    } DFSDM0_JCHGR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM0_FCR;                  /*!< (@ 0x00000114) DFSDM filter control register                              */
    
    struct {
      __IOM uint32_t IOSR       : 8;            /*!< [7..0] Integrator oversampling ratio (averaging length)                   */
            uint32_t            : 8;
      __IOM uint32_t FOSR       : 10;           /*!< [25..16] Sinc filter oversampling ratio (decimation rate)                 */
            uint32_t            : 3;
      __IOM uint32_t FORD       : 3;            /*!< [31..29] Sinc filter order                                                */
    } DFSDM0_FCR_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM0_JDATAR;               /*!< (@ 0x00000118) DFSDM data register for injected group                     */
    
    struct {
      __IM  uint32_t JDATACH    : 3;            /*!< [2..0] Injected channel most recently converted                           */
            uint32_t            : 5;
      __IM  uint32_t JDATA      : 24;           /*!< [31..8] Injected group conversion data                                    */
    } DFSDM0_JDATAR_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM0_RDATAR;               /*!< (@ 0x0000011C) DFSDM data register for the regular channel                */
    
    struct {
      __IM  uint32_t RDATACH    : 3;            /*!< [2..0] Regular channel most recently converted                            */
            uint32_t            : 1;
      __IM  uint32_t RPEND      : 1;            /*!< [4..4] Regular channel pending data                                       */
            uint32_t            : 3;
      __IM  uint32_t RDATA      : 24;           /*!< [31..8] Regular channel conversion data                                   */
    } DFSDM0_RDATAR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM0_AWHTR;                /*!< (@ 0x00000120) DFSDM analog watchdog high threshold register              */
    
    struct {
      __IOM uint32_t BKAWH      : 4;            /*!< [3..0] Break signal assignment to analog watchdog high threshold
                                                     event                                                                     */
            uint32_t            : 4;
      __IOM uint32_t AWHT       : 24;           /*!< [31..8] Analog watchdog high threshold                                    */
    } DFSDM0_AWHTR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM0_AWLTR;                /*!< (@ 0x00000124) DFSDM analog watchdog low threshold register               */
    
    struct {
      __IOM uint32_t BKAWL      : 4;            /*!< [3..0] Break signal assignment to analog watchdog low threshold
                                                     event                                                                     */
            uint32_t            : 4;
      __IOM uint32_t AWLT       : 24;           /*!< [31..8] Analog watchdog low threshold                                     */
    } DFSDM0_AWLTR_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM0_AWSR;                 /*!< (@ 0x00000128) DFSDM analog watchdog status register                      */
    
    struct {
      __IM  uint32_t AWLTF      : 8;            /*!< [7..0] Analog watchdog low threshold flag                                 */
      __IM  uint32_t AWHTF      : 8;            /*!< [15..8] Analog watchdog high threshold flag                               */
            uint32_t            : 16;
    } DFSDM0_AWSR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM0_AWCFR;                /*!< (@ 0x0000012C) DFSDM analog watchdog clear flag register                  */
    
    struct {
      __IOM uint32_t CLRAWLTF   : 8;            /*!< [7..0] Clear the analog watchdog low threshold flag                       */
      __IOM uint32_t CLRAWHTF   : 8;            /*!< [15..8] Clear the analog watchdog high threshold flag                     */
            uint32_t            : 16;
    } DFSDM0_AWCFR_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM0_EXMAX;                /*!< (@ 0x00000130) DFSDM Extremes detector maximum register                   */
    
    struct {
      __IM  uint32_t EXMAXCH    : 3;            /*!< [2..0] Extremes detector maximum data channel                             */
            uint32_t            : 5;
      __IM  uint32_t EXMAX      : 24;           /*!< [31..8] Extremes detector maximum value                                   */
    } DFSDM0_EXMAX_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM0_EXMIN;                /*!< (@ 0x00000134) DFSDM Extremes detector minimum register                   */
    
    struct {
      __IM  uint32_t EXMINCH    : 3;            /*!< [2..0] Extremes detector minimum data channel                             */
            uint32_t            : 5;
      __IM  uint32_t EXMIN      : 24;           /*!< [31..8] Extremes detector minimum value                                   */
    } DFSDM0_EXMIN_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM0_CNVTIMR;              /*!< (@ 0x00000138) DFSDM conversion timer register                            */
    
    struct {
            uint32_t            : 4;
      __IM  uint32_t CNVCNT     : 28;           /*!< [31..4] 28-bit timer counting conversion time                             */
    } DFSDM0_CNVTIMR_b;
  } ;
  __IM  uint32_t  RESERVED8[17];
  
  union {
    __IOM uint32_t DFSDM1_CR1;                  /*!< (@ 0x00000180) DFSDM control register 1                                   */
    
    struct {
      __IOM uint32_t DFEN       : 1;            /*!< [0..0] DFSDM enable                                                       */
      __IOM uint32_t JSWSTART   : 1;            /*!< [1..1] Start a conversion of the injected group of channels               */
            uint32_t            : 1;
      __IOM uint32_t JSYNC      : 1;            /*!< [3..3] Launch an injected conversion synchronously with the
                                                     DFSDM0 JSWSTART trigger                                                   */
      __IOM uint32_t JSCAN      : 1;            /*!< [4..4] Scanning conversion mode for injected conversions                  */
      __IOM uint32_t JDMAEN     : 1;            /*!< [5..5] DMA channel enabled to read data for the injected channel
                                                     group                                                                     */
            uint32_t            : 2;
      __IOM uint32_t JEXTSEL    : 5;            /*!< [12..8] Trigger signal selection for launching injected conversions       */
      __IOM uint32_t JEXTEN     : 2;            /*!< [14..13] Trigger enable and trigger edge selection for injected
                                                     conversions                                                               */
            uint32_t            : 2;
      __IOM uint32_t RSWSTART   : 1;            /*!< [17..17] Software start of a conversion on the regular channel            */
      __IOM uint32_t RCONT      : 1;            /*!< [18..18] Continuous mode selection for regular conversions                */
      __IOM uint32_t RSYNC      : 1;            /*!< [19..19] Launch regular conversion synchronously with DFSDM0              */
            uint32_t            : 1;
      __IOM uint32_t RDMAEN     : 1;            /*!< [21..21] DMA channel enabled to read data for the regular conversion      */
            uint32_t            : 2;
      __IOM uint32_t RCH        : 3;            /*!< [26..24] Regular channel selection                                        */
            uint32_t            : 2;
      __IOM uint32_t FAST       : 1;            /*!< [29..29] Fast conversion mode selection for regular conversions           */
      __IOM uint32_t AWFSEL     : 1;            /*!< [30..30] Analog watchdog fast mode select                                 */
            uint32_t            : 1;
    } DFSDM1_CR1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM1_CR2;                  /*!< (@ 0x00000184) DFSDM control register 2                                   */
    
    struct {
      __IOM uint32_t JEOCIE     : 1;            /*!< [0..0] Injected end of conversion interrupt enable                        */
      __IOM uint32_t REOCIE     : 1;            /*!< [1..1] Regular end of conversion interrupt enable                         */
      __IOM uint32_t JOVRIE     : 1;            /*!< [2..2] Injected data overrun interrupt enable                             */
      __IOM uint32_t ROVRIE     : 1;            /*!< [3..3] Regular data overrun interrupt enable                              */
      __IOM uint32_t AWDIE      : 1;            /*!< [4..4] Analog watchdog interrupt enable                                   */
      __IOM uint32_t SCDIE      : 1;            /*!< [5..5] Short-circuit detector interrupt enable                            */
      __IOM uint32_t CKABIE     : 1;            /*!< [6..6] Clock absence interrupt enable                                     */
            uint32_t            : 1;
      __IOM uint32_t EXCH       : 8;            /*!< [15..8] Extremes detector channel selection                               */
      __IOM uint32_t AWDCH      : 8;            /*!< [23..16] Analog watchdog channel selection                                */
            uint32_t            : 8;
    } DFSDM1_CR2_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM1_ISR;                  /*!< (@ 0x00000188) DFSDM interrupt and status register                        */
    
    struct {
      __IM  uint32_t JEOCF      : 1;            /*!< [0..0] End of injected conversion flag                                    */
      __IM  uint32_t REOCF      : 1;            /*!< [1..1] End of regular conversion flag                                     */
      __IM  uint32_t JOVRF      : 1;            /*!< [2..2] Injected conversion overrun flag                                   */
      __IM  uint32_t ROVRF      : 1;            /*!< [3..3] Regular conversion overrun flag                                    */
      __IM  uint32_t AWDF       : 1;            /*!< [4..4] Analog watchdog                                                    */
            uint32_t            : 8;
      __IM  uint32_t JCIP       : 1;            /*!< [13..13] Injected conversion in progress status                           */
      __IM  uint32_t RCIP       : 1;            /*!< [14..14] Regular conversion in progress status                            */
            uint32_t            : 1;
      __IM  uint32_t CKABF      : 8;            /*!< [23..16] Clock absence flag                                               */
      __IM  uint32_t SCDF       : 8;            /*!< [31..24] short-circuit detector flag                                      */
    } DFSDM1_ISR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM1_ICR;                  /*!< (@ 0x0000018C) DFSDM interrupt flag clear register                        */
    
    struct {
            uint32_t            : 2;
      __IOM uint32_t CLRJOVRF   : 1;            /*!< [2..2] Clear the injected conversion overrun flag                         */
      __IOM uint32_t CLRROVRF   : 1;            /*!< [3..3] Clear the regular conversion overrun flag                          */
            uint32_t            : 12;
      __IOM uint32_t CLRCKABF   : 8;            /*!< [23..16] Clear the clock absence flag                                     */
      __IOM uint32_t CLRSCDF    : 8;            /*!< [31..24] Clear the short-circuit detector flag                            */
    } DFSDM1_ICR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM1_JCHGR;                /*!< (@ 0x00000190) DFSDM injected channel group selection register            */
    
    struct {
      __IOM uint32_t JCHG       : 8;            /*!< [7..0] Injected channel group selection                                   */
            uint32_t            : 24;
    } DFSDM1_JCHGR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM1_FCR;                  /*!< (@ 0x00000194) DFSDM filter control register                              */
    
    struct {
      __IOM uint32_t IOSR       : 8;            /*!< [7..0] Integrator oversampling ratio (averaging length)                   */
            uint32_t            : 8;
      __IOM uint32_t FOSR       : 10;           /*!< [25..16] Sinc filter oversampling ratio (decimation rate)                 */
            uint32_t            : 3;
      __IOM uint32_t FORD       : 3;            /*!< [31..29] Sinc filter order                                                */
    } DFSDM1_FCR_b;
  } ;
  
  union {
    union {
      __IM  uint32_t DFSDM1_JDATAR;             /*!< (@ 0x00000198) DFSDM data register for injected group                     */
      
      struct {
        __IM  uint32_t JDATACH  : 3;            /*!< [2..0] Injected channel most recently converted                           */
              uint32_t          : 5;
        __IM  uint32_t JDATA    : 24;           /*!< [31..8] Injected group conversion data                                    */
      } DFSDM1_JDATAR_b;
    } ;
    
    union {
      __IM  uint32_t DFSDM1_RDATAR;             /*!< (@ 0x00000198) DFSDM data register for the regular channel                */
      
      struct {
        __IM  uint32_t RDATACH  : 3;            /*!< [2..0] Regular channel most recently converted                            */
              uint32_t          : 1;
        __IM  uint32_t RPEND    : 1;            /*!< [4..4] Regular channel pending data                                       */
              uint32_t          : 3;
        __IM  uint32_t RDATA    : 24;           /*!< [31..8] Regular channel conversion data                                   */
      } DFSDM1_RDATAR_b;
    } ;
  };
  __IM  uint32_t  RESERVED9;
  
  union {
    __IOM uint32_t DFSDM1_AWHTR;                /*!< (@ 0x000001A0) DFSDM analog watchdog high threshold register              */
    
    struct {
      __IOM uint32_t BKAWH      : 4;            /*!< [3..0] Break signal assignment to analog watchdog high threshold
                                                     event                                                                     */
            uint32_t            : 4;
      __IOM uint32_t AWHT       : 24;           /*!< [31..8] Analog watchdog high threshold                                    */
    } DFSDM1_AWHTR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM1_AWLTR;                /*!< (@ 0x000001A4) DFSDM analog watchdog low threshold register               */
    
    struct {
      __IOM uint32_t BKAWL      : 4;            /*!< [3..0] Break signal assignment to analog watchdog low threshold
                                                     event                                                                     */
            uint32_t            : 4;
      __IOM uint32_t AWLT       : 24;           /*!< [31..8] Analog watchdog low threshold                                     */
    } DFSDM1_AWLTR_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM1_AWSR;                 /*!< (@ 0x000001A8) DFSDM analog watchdog status register                      */
    
    struct {
      __IM  uint32_t AWLTF      : 8;            /*!< [7..0] Analog watchdog low threshold flag                                 */
      __IM  uint32_t AWHTF      : 8;            /*!< [15..8] Analog watchdog high threshold flag                               */
            uint32_t            : 16;
    } DFSDM1_AWSR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM1_AWCFR;                /*!< (@ 0x000001AC) DFSDM analog watchdog clear flag register                  */
    
    struct {
      __IOM uint32_t CLRAWLTF   : 8;            /*!< [7..0] Clear the analog watchdog low threshold flag                       */
      __IOM uint32_t CLRAWHTF   : 8;            /*!< [15..8] Clear the analog watchdog high threshold flag                     */
            uint32_t            : 16;
    } DFSDM1_AWCFR_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM1_EXMAX;                /*!< (@ 0x000001B0) DFSDM Extremes detector maximum register                   */
    
    struct {
      __IM  uint32_t EXMAXCH    : 3;            /*!< [2..0] Extremes detector maximum data channel                             */
            uint32_t            : 5;
      __IM  uint32_t EXMAX      : 24;           /*!< [31..8] Extremes detector maximum value                                   */
    } DFSDM1_EXMAX_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM1_EXMIN;                /*!< (@ 0x000001B4) DFSDM Extremes detector minimum register                   */
    
    struct {
      __IM  uint32_t EXMINCH    : 3;            /*!< [2..0] Extremes detector minimum data channel                             */
            uint32_t            : 5;
      __IM  uint32_t EXMIN      : 24;           /*!< [31..8] Extremes detector minimum value                                   */
    } DFSDM1_EXMIN_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM1_CNVTIMR;              /*!< (@ 0x000001B8) DFSDM conversion timer register                            */
    
    struct {
            uint32_t            : 4;
      __IM  uint32_t CNVCNT     : 28;           /*!< [31..4] 28-bit timer counting conversion time                             */
    } DFSDM1_CNVTIMR_b;
  } ;
  __IM  uint32_t  RESERVED10[17];
  
  union {
    __IOM uint32_t DFSDM2_CR1;                  /*!< (@ 0x00000200) DFSDM control register 1                                   */
    
    struct {
      __IOM uint32_t DFEN       : 1;            /*!< [0..0] DFSDM enable                                                       */
      __IOM uint32_t JSWSTART   : 1;            /*!< [1..1] Start a conversion of the injected group of channels               */
            uint32_t            : 1;
      __IOM uint32_t JSYNC      : 1;            /*!< [3..3] Launch an injected conversion synchronously with the
                                                     DFSDM0 JSWSTART trigger                                                   */
      __IOM uint32_t JSCAN      : 1;            /*!< [4..4] Scanning conversion mode for injected conversions                  */
      __IOM uint32_t JDMAEN     : 1;            /*!< [5..5] DMA channel enabled to read data for the injected channel
                                                     group                                                                     */
            uint32_t            : 2;
      __IOM uint32_t JEXTSEL    : 5;            /*!< [12..8] Trigger signal selection for launching injected conversions       */
      __IOM uint32_t JEXTEN     : 2;            /*!< [14..13] Trigger enable and trigger edge selection for injected
                                                     conversions                                                               */
            uint32_t            : 2;
      __IOM uint32_t RSWSTART   : 1;            /*!< [17..17] Software start of a conversion on the regular channel            */
      __IOM uint32_t RCONT      : 1;            /*!< [18..18] Continuous mode selection for regular conversions                */
      __IOM uint32_t RSYNC      : 1;            /*!< [19..19] Launch regular conversion synchronously with DFSDM0              */
            uint32_t            : 1;
      __IOM uint32_t RDMAEN     : 1;            /*!< [21..21] DMA channel enabled to read data for the regular conversion      */
            uint32_t            : 2;
      __IOM uint32_t RCH        : 3;            /*!< [26..24] Regular channel selection                                        */
            uint32_t            : 2;
      __IOM uint32_t FAST       : 1;            /*!< [29..29] Fast conversion mode selection for regular conversions           */
      __IOM uint32_t AWFSEL     : 1;            /*!< [30..30] Analog watchdog fast mode select                                 */
            uint32_t            : 1;
    } DFSDM2_CR1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM2_CR2;                  /*!< (@ 0x00000204) DFSDM control register 2                                   */
    
    struct {
      __IOM uint32_t JEOCIE     : 1;            /*!< [0..0] Injected end of conversion interrupt enable                        */
      __IOM uint32_t REOCIE     : 1;            /*!< [1..1] Regular end of conversion interrupt enable                         */
      __IOM uint32_t JOVRIE     : 1;            /*!< [2..2] Injected data overrun interrupt enable                             */
      __IOM uint32_t ROVRIE     : 1;            /*!< [3..3] Regular data overrun interrupt enable                              */
      __IOM uint32_t AWDIE      : 1;            /*!< [4..4] Analog watchdog interrupt enable                                   */
      __IOM uint32_t SCDIE      : 1;            /*!< [5..5] Short-circuit detector interrupt enable                            */
      __IOM uint32_t CKABIE     : 1;            /*!< [6..6] Clock absence interrupt enable                                     */
            uint32_t            : 1;
      __IOM uint32_t EXCH       : 8;            /*!< [15..8] Extremes detector channel selection                               */
      __IOM uint32_t AWDCH      : 8;            /*!< [23..16] Analog watchdog channel selection                                */
            uint32_t            : 8;
    } DFSDM2_CR2_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM2_ISR;                  /*!< (@ 0x00000208) DFSDM interrupt and status register                        */
    
    struct {
      __IM  uint32_t JEOCF      : 1;            /*!< [0..0] End of injected conversion flag                                    */
      __IM  uint32_t REOCF      : 1;            /*!< [1..1] End of regular conversion flag                                     */
      __IM  uint32_t JOVRF      : 1;            /*!< [2..2] Injected conversion overrun flag                                   */
      __IM  uint32_t ROVRF      : 1;            /*!< [3..3] Regular conversion overrun flag                                    */
      __IM  uint32_t AWDF       : 1;            /*!< [4..4] Analog watchdog                                                    */
            uint32_t            : 8;
      __IM  uint32_t JCIP       : 1;            /*!< [13..13] Injected conversion in progress status                           */
      __IM  uint32_t RCIP       : 1;            /*!< [14..14] Regular conversion in progress status                            */
            uint32_t            : 1;
      __IM  uint32_t CKABF      : 8;            /*!< [23..16] Clock absence flag                                               */
      __IM  uint32_t SCDF       : 8;            /*!< [31..24] short-circuit detector flag                                      */
    } DFSDM2_ISR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM2_ICR;                  /*!< (@ 0x0000020C) DFSDM interrupt flag clear register                        */
    
    struct {
            uint32_t            : 2;
      __IOM uint32_t CLRJOVRF   : 1;            /*!< [2..2] Clear the injected conversion overrun flag                         */
      __IOM uint32_t CLRROVRF   : 1;            /*!< [3..3] Clear the regular conversion overrun flag                          */
            uint32_t            : 12;
      __IOM uint32_t CLRCKABF   : 8;            /*!< [23..16] Clear the clock absence flag                                     */
      __IOM uint32_t CLRSCDF    : 8;            /*!< [31..24] Clear the short-circuit detector flag                            */
    } DFSDM2_ICR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM2_JCHGR;                /*!< (@ 0x00000210) DFSDM injected channel group selection register            */
    
    struct {
      __IOM uint32_t JCHG       : 8;            /*!< [7..0] Injected channel group selection                                   */
            uint32_t            : 24;
    } DFSDM2_JCHGR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM2_FCR;                  /*!< (@ 0x00000214) DFSDM filter control register                              */
    
    struct {
      __IOM uint32_t IOSR       : 8;            /*!< [7..0] Integrator oversampling ratio (averaging length)                   */
            uint32_t            : 8;
      __IOM uint32_t FOSR       : 10;           /*!< [25..16] Sinc filter oversampling ratio (decimation rate)                 */
            uint32_t            : 3;
      __IOM uint32_t FORD       : 3;            /*!< [31..29] Sinc filter order                                                */
    } DFSDM2_FCR_b;
  } ;
  
  union {
    union {
      __IM  uint32_t DFSDM2_JDATAR;             /*!< (@ 0x00000218) DFSDM data register for injected group                     */
      
      struct {
        __IM  uint32_t JDATACH  : 3;            /*!< [2..0] Injected channel most recently converted                           */
              uint32_t          : 5;
        __IM  uint32_t JDATA    : 24;           /*!< [31..8] Injected group conversion data                                    */
      } DFSDM2_JDATAR_b;
    } ;
    
    union {
      __IM  uint32_t DFSDM2_RDATAR;             /*!< (@ 0x00000218) DFSDM data register for the regular channel                */
      
      struct {
        __IM  uint32_t RDATACH  : 3;            /*!< [2..0] Regular channel most recently converted                            */
              uint32_t          : 1;
        __IM  uint32_t RPEND    : 1;            /*!< [4..4] Regular channel pending data                                       */
              uint32_t          : 3;
        __IM  uint32_t RDATA    : 24;           /*!< [31..8] Regular channel conversion data                                   */
      } DFSDM2_RDATAR_b;
    } ;
  };
  __IM  uint32_t  RESERVED11;
  
  union {
    __IOM uint32_t DFSDM2_AWHTR;                /*!< (@ 0x00000220) DFSDM analog watchdog high threshold register              */
    
    struct {
      __IOM uint32_t BKAWH      : 4;            /*!< [3..0] Break signal assignment to analog watchdog high threshold
                                                     event                                                                     */
            uint32_t            : 4;
      __IOM uint32_t AWHT       : 24;           /*!< [31..8] Analog watchdog high threshold                                    */
    } DFSDM2_AWHTR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM2_AWLTR;                /*!< (@ 0x00000224) DFSDM analog watchdog low threshold register               */
    
    struct {
      __IOM uint32_t BKAWL      : 4;            /*!< [3..0] Break signal assignment to analog watchdog low threshold
                                                     event                                                                     */
            uint32_t            : 4;
      __IOM uint32_t AWLT       : 24;           /*!< [31..8] Analog watchdog low threshold                                     */
    } DFSDM2_AWLTR_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM2_AWSR;                 /*!< (@ 0x00000228) DFSDM analog watchdog status register                      */
    
    struct {
      __IM  uint32_t AWLTF      : 8;            /*!< [7..0] Analog watchdog low threshold flag                                 */
      __IM  uint32_t AWHTF      : 8;            /*!< [15..8] Analog watchdog high threshold flag                               */
            uint32_t            : 16;
    } DFSDM2_AWSR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM2_AWCFR;                /*!< (@ 0x0000022C) DFSDM analog watchdog clear flag register                  */
    
    struct {
      __IOM uint32_t CLRAWLTF   : 8;            /*!< [7..0] Clear the analog watchdog low threshold flag                       */
      __IOM uint32_t CLRAWHTF   : 8;            /*!< [15..8] Clear the analog watchdog high threshold flag                     */
            uint32_t            : 16;
    } DFSDM2_AWCFR_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM2_EXMAX;                /*!< (@ 0x00000230) DFSDM Extremes detector maximum register                   */
    
    struct {
      __IM  uint32_t EXMAXCH    : 3;            /*!< [2..0] Extremes detector maximum data channel                             */
            uint32_t            : 5;
      __IM  uint32_t EXMAX      : 24;           /*!< [31..8] Extremes detector maximum value                                   */
    } DFSDM2_EXMAX_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM2_EXMIN;                /*!< (@ 0x00000234) DFSDM Extremes detector minimum register                   */
    
    struct {
      __IM  uint32_t EXMINCH    : 3;            /*!< [2..0] Extremes detector minimum data channel                             */
            uint32_t            : 5;
      __IM  uint32_t EXMIN      : 24;           /*!< [31..8] Extremes detector minimum value                                   */
    } DFSDM2_EXMIN_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM2_CNVTIMR;              /*!< (@ 0x00000238) DFSDM conversion timer register                            */
    
    struct {
            uint32_t            : 4;
      __IM  uint32_t CNVCNT     : 28;           /*!< [31..4] 28-bit timer counting conversion time                             */
    } DFSDM2_CNVTIMR_b;
  } ;
  __IM  uint32_t  RESERVED12[25];
  
  union {
    __IOM uint32_t DFSDM3_AWHTR;                /*!< (@ 0x000002A0) DFSDM analog watchdog high threshold register              */
    
    struct {
      __IOM uint32_t BKAWH      : 4;            /*!< [3..0] Break signal assignment to analog watchdog high threshold
                                                     event                                                                     */
            uint32_t            : 4;
      __IOM uint32_t AWHT       : 24;           /*!< [31..8] Analog watchdog high threshold                                    */
    } DFSDM3_AWHTR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM3_AWLTR;                /*!< (@ 0x000002A4) DFSDM analog watchdog low threshold register               */
    
    struct {
      __IOM uint32_t BKAWL      : 4;            /*!< [3..0] Break signal assignment to analog watchdog low threshold
                                                     event                                                                     */
            uint32_t            : 4;
      __IOM uint32_t AWLT       : 24;           /*!< [31..8] Analog watchdog low threshold                                     */
    } DFSDM3_AWLTR_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM3_AWSR;                 /*!< (@ 0x000002A8) DFSDM analog watchdog status register                      */
    
    struct {
      __IM  uint32_t AWLTF      : 8;            /*!< [7..0] Analog watchdog low threshold flag                                 */
      __IM  uint32_t AWHTF      : 8;            /*!< [15..8] Analog watchdog high threshold flag                               */
            uint32_t            : 16;
    } DFSDM3_AWSR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM3_AWCFR;                /*!< (@ 0x000002AC) DFSDM analog watchdog clear flag register                  */
    
    struct {
      __IOM uint32_t CLRAWLTF   : 8;            /*!< [7..0] Clear the analog watchdog low threshold flag                       */
      __IOM uint32_t CLRAWHTF   : 8;            /*!< [15..8] Clear the analog watchdog high threshold flag                     */
            uint32_t            : 16;
    } DFSDM3_AWCFR_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM3_EXMAX;                /*!< (@ 0x000002B0) DFSDM Extremes detector maximum register                   */
    
    struct {
      __IM  uint32_t EXMAXCH    : 3;            /*!< [2..0] Extremes detector maximum data channel                             */
            uint32_t            : 5;
      __IM  uint32_t EXMAX      : 24;           /*!< [31..8] Extremes detector maximum value                                   */
    } DFSDM3_EXMAX_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM3_EXMIN;                /*!< (@ 0x000002B4) DFSDM Extremes detector minimum register                   */
    
    struct {
      __IM  uint32_t EXMINCH    : 3;            /*!< [2..0] Extremes detector minimum data channel                             */
            uint32_t            : 5;
      __IM  uint32_t EXMIN      : 24;           /*!< [31..8] Extremes detector minimum value                                   */
    } DFSDM3_EXMIN_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM3_CNVTIMR;              /*!< (@ 0x000002B8) DFSDM conversion timer register                            */
    
    struct {
            uint32_t            : 4;
      __IM  uint32_t CNVCNT     : 28;           /*!< [31..4] 28-bit timer counting conversion time                             */
    } DFSDM3_CNVTIMR_b;
  } ;
  __IM  uint32_t  RESERVED13[21];
  
  union {
    __IOM uint32_t DFSDM3_JCHGR;                /*!< (@ 0x00000310) DFSDM injected channel group selection register            */
    
    struct {
      __IOM uint32_t JCHG       : 8;            /*!< [7..0] Injected channel group selection                                   */
            uint32_t            : 24;
    } DFSDM3_JCHGR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM3_FCR;                  /*!< (@ 0x00000314) DFSDM filter control register                              */
    
    struct {
      __IOM uint32_t IOSR       : 8;            /*!< [7..0] Integrator oversampling ratio (averaging length)                   */
            uint32_t            : 8;
      __IOM uint32_t FOSR       : 10;           /*!< [25..16] Sinc filter oversampling ratio (decimation rate)                 */
            uint32_t            : 3;
      __IOM uint32_t FORD       : 3;            /*!< [31..29] Sinc filter order                                                */
    } DFSDM3_FCR_b;
  } ;
  
  union {
    union {
      __IM  uint32_t DFSDM3_JDATAR;             /*!< (@ 0x00000318) DFSDM data register for injected group                     */
      
      struct {
        __IM  uint32_t JDATACH  : 3;            /*!< [2..0] Injected channel most recently converted                           */
              uint32_t          : 5;
        __IM  uint32_t JDATA    : 24;           /*!< [31..8] Injected group conversion data                                    */
      } DFSDM3_JDATAR_b;
    } ;
    
    union {
      __IM  uint32_t DFSDM3_RDATAR;             /*!< (@ 0x00000318) DFSDM data register for the regular channel                */
      
      struct {
        __IM  uint32_t RDATACH  : 3;            /*!< [2..0] Regular channel most recently converted                            */
              uint32_t          : 1;
        __IM  uint32_t RPEND    : 1;            /*!< [4..4] Regular channel pending data                                       */
              uint32_t          : 3;
        __IM  uint32_t RDATA    : 24;           /*!< [31..8] Regular channel conversion data                                   */
      } DFSDM3_RDATAR_b;
    } ;
  };
  __IM  uint32_t  RESERVED14[25];
  
  union {
    __IOM uint32_t DFSDM3_CR1;                  /*!< (@ 0x00000380) DFSDM control register 1                                   */
    
    struct {
      __IOM uint32_t DFEN       : 1;            /*!< [0..0] DFSDM enable                                                       */
      __IOM uint32_t JSWSTART   : 1;            /*!< [1..1] Start a conversion of the injected group of channels               */
            uint32_t            : 1;
      __IOM uint32_t JSYNC      : 1;            /*!< [3..3] Launch an injected conversion synchronously with the
                                                     DFSDM0 JSWSTART trigger                                                   */
      __IOM uint32_t JSCAN      : 1;            /*!< [4..4] Scanning conversion mode for injected conversions                  */
      __IOM uint32_t JDMAEN     : 1;            /*!< [5..5] DMA channel enabled to read data for the injected channel
                                                     group                                                                     */
            uint32_t            : 2;
      __IOM uint32_t JEXTSEL    : 5;            /*!< [12..8] Trigger signal selection for launching injected conversions       */
      __IOM uint32_t JEXTEN     : 2;            /*!< [14..13] Trigger enable and trigger edge selection for injected
                                                     conversions                                                               */
            uint32_t            : 2;
      __IOM uint32_t RSWSTART   : 1;            /*!< [17..17] Software start of a conversion on the regular channel            */
      __IOM uint32_t RCONT      : 1;            /*!< [18..18] Continuous mode selection for regular conversions                */
      __IOM uint32_t RSYNC      : 1;            /*!< [19..19] Launch regular conversion synchronously with DFSDM0              */
            uint32_t            : 1;
      __IOM uint32_t RDMAEN     : 1;            /*!< [21..21] DMA channel enabled to read data for the regular conversion      */
            uint32_t            : 2;
      __IOM uint32_t RCH        : 3;            /*!< [26..24] Regular channel selection                                        */
            uint32_t            : 2;
      __IOM uint32_t FAST       : 1;            /*!< [29..29] Fast conversion mode selection for regular conversions           */
      __IOM uint32_t AWFSEL     : 1;            /*!< [30..30] Analog watchdog fast mode select                                 */
            uint32_t            : 1;
    } DFSDM3_CR1_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM3_CR2;                  /*!< (@ 0x00000384) DFSDM control register 2                                   */
    
    struct {
      __IOM uint32_t JEOCIE     : 1;            /*!< [0..0] Injected end of conversion interrupt enable                        */
      __IOM uint32_t REOCIE     : 1;            /*!< [1..1] Regular end of conversion interrupt enable                         */
      __IOM uint32_t JOVRIE     : 1;            /*!< [2..2] Injected data overrun interrupt enable                             */
      __IOM uint32_t ROVRIE     : 1;            /*!< [3..3] Regular data overrun interrupt enable                              */
      __IOM uint32_t AWDIE      : 1;            /*!< [4..4] Analog watchdog interrupt enable                                   */
      __IOM uint32_t SCDIE      : 1;            /*!< [5..5] Short-circuit detector interrupt enable                            */
      __IOM uint32_t CKABIE     : 1;            /*!< [6..6] Clock absence interrupt enable                                     */
            uint32_t            : 1;
      __IOM uint32_t EXCH       : 8;            /*!< [15..8] Extremes detector channel selection                               */
      __IOM uint32_t AWDCH      : 8;            /*!< [23..16] Analog watchdog channel selection                                */
            uint32_t            : 8;
    } DFSDM3_CR2_b;
  } ;
  
  union {
    __IM  uint32_t DFSDM3_ISR;                  /*!< (@ 0x00000388) DFSDM interrupt and status register                        */
    
    struct {
      __IM  uint32_t JEOCF      : 1;            /*!< [0..0] End of injected conversion flag                                    */
      __IM  uint32_t REOCF      : 1;            /*!< [1..1] End of regular conversion flag                                     */
      __IM  uint32_t JOVRF      : 1;            /*!< [2..2] Injected conversion overrun flag                                   */
      __IM  uint32_t ROVRF      : 1;            /*!< [3..3] Regular conversion overrun flag                                    */
      __IM  uint32_t AWDF       : 1;            /*!< [4..4] Analog watchdog                                                    */
            uint32_t            : 8;
      __IM  uint32_t JCIP       : 1;            /*!< [13..13] Injected conversion in progress status                           */
      __IM  uint32_t RCIP       : 1;            /*!< [14..14] Regular conversion in progress status                            */
            uint32_t            : 1;
      __IM  uint32_t CKABF      : 8;            /*!< [23..16] Clock absence flag                                               */
      __IM  uint32_t SCDF       : 8;            /*!< [31..24] short-circuit detector flag                                      */
    } DFSDM3_ISR_b;
  } ;
  
  union {
    __IOM uint32_t DFSDM3_ICR;                  /*!< (@ 0x0000038C) DFSDM interrupt flag clear register                        */
    
    struct {
            uint32_t            : 2;
      __IOM uint32_t CLRJOVRF   : 1;            /*!< [2..2] Clear the injected conversion overrun flag                         */
      __IOM uint32_t CLRROVRF   : 1;            /*!< [3..3] Clear the regular conversion overrun flag                          */
            uint32_t            : 12;
      __IOM uint32_t CLRCKABF   : 8;            /*!< [23..16] Clear the clock absence flag                                     */
      __IOM uint32_t CLRSCDF    : 8;            /*!< [31..24] Clear the short-circuit detector flag                            */
    } DFSDM3_ICR_b;
  } ;
} DFSDM_Type;                                   /*!< Size = 912 (0x390)                                                        */



/* =========================================================================================================================== */
/* ================                                           DFSDM                                           ================ */
/* =========================================================================================================================== */

/* ====================================================  DFSDM_CHCFG0R1  ===================================================== */
#define DFSDM_DFSDM_CHCFG0R1_SITP_Pos     (0UL)                     /*!< SITP (Bit 0)                                          */
#define DFSDM_DFSDM_CHCFG0R1_SITP_Msk     (0x3UL)                   /*!< SITP (Bitfield-Mask: 0x03)                            */
#define DFSDM_DFSDM_CHCFG0R1_SPICKSEL_Pos (2UL)                     /*!< SPICKSEL (Bit 2)                                      */
#define DFSDM_DFSDM_CHCFG0R1_SPICKSEL_Msk (0xcUL)                   /*!< SPICKSEL (Bitfield-Mask: 0x03)                        */
#define DFSDM_DFSDM_CHCFG0R1_SCDEN_Pos    (5UL)                     /*!< SCDEN (Bit 5)                                         */
#define DFSDM_DFSDM_CHCFG0R1_SCDEN_Msk    (0x20UL)                  /*!< SCDEN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM_CHCFG0R1_CKABEN_Pos   (6UL)                     /*!< CKABEN (Bit 6)                                        */
#define DFSDM_DFSDM_CHCFG0R1_CKABEN_Msk   (0x40UL)                  /*!< CKABEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM_CHCFG0R1_CHEN_Pos     (7UL)                     /*!< CHEN (Bit 7)                                          */
#define DFSDM_DFSDM_CHCFG0R1_CHEN_Msk     (0x80UL)                  /*!< CHEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM_CHCFG0R1_CHINSEL_Pos  (8UL)                     /*!< CHINSEL (Bit 8)                                       */
#define DFSDM_DFSDM_CHCFG0R1_CHINSEL_Msk  (0x100UL)                 /*!< CHINSEL (Bitfield-Mask: 0x01)                         */
#define DFSDM_DFSDM_CHCFG0R1_DATMPX_Pos   (12UL)                    /*!< DATMPX (Bit 12)                                       */
#define DFSDM_DFSDM_CHCFG0R1_DATMPX_Msk   (0x3000UL)                /*!< DATMPX (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM_CHCFG0R1_DATPACK_Pos  (14UL)                    /*!< DATPACK (Bit 14)                                      */
#define DFSDM_DFSDM_CHCFG0R1_DATPACK_Msk  (0xc000UL)                /*!< DATPACK (Bitfield-Mask: 0x03)                         */
#define DFSDM_DFSDM_CHCFG0R1_CKOUTDIV_Pos (16UL)                    /*!< CKOUTDIV (Bit 16)                                     */
#define DFSDM_DFSDM_CHCFG0R1_CKOUTDIV_Msk (0xff0000UL)              /*!< CKOUTDIV (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM_CHCFG0R1_CKOUTSRC_Pos (30UL)                    /*!< CKOUTSRC (Bit 30)                                     */
#define DFSDM_DFSDM_CHCFG0R1_CKOUTSRC_Msk (0x40000000UL)            /*!< CKOUTSRC (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM_CHCFG0R1_DFSDMEN_Pos  (31UL)                    /*!< DFSDMEN (Bit 31)                                      */
#define DFSDM_DFSDM_CHCFG0R1_DFSDMEN_Msk  (0x80000000UL)            /*!< DFSDMEN (Bitfield-Mask: 0x01)                         */
/* ====================================================  DFSDM_CHCFG1R1  ===================================================== */
#define DFSDM_DFSDM_CHCFG1R1_SITP_Pos     (0UL)                     /*!< SITP (Bit 0)                                          */
#define DFSDM_DFSDM_CHCFG1R1_SITP_Msk     (0x3UL)                   /*!< SITP (Bitfield-Mask: 0x03)                            */
#define DFSDM_DFSDM_CHCFG1R1_SPICKSEL_Pos (2UL)                     /*!< SPICKSEL (Bit 2)                                      */
#define DFSDM_DFSDM_CHCFG1R1_SPICKSEL_Msk (0xcUL)                   /*!< SPICKSEL (Bitfield-Mask: 0x03)                        */
#define DFSDM_DFSDM_CHCFG1R1_SCDEN_Pos    (5UL)                     /*!< SCDEN (Bit 5)                                         */
#define DFSDM_DFSDM_CHCFG1R1_SCDEN_Msk    (0x20UL)                  /*!< SCDEN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM_CHCFG1R1_CKABEN_Pos   (6UL)                     /*!< CKABEN (Bit 6)                                        */
#define DFSDM_DFSDM_CHCFG1R1_CKABEN_Msk   (0x40UL)                  /*!< CKABEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM_CHCFG1R1_CHEN_Pos     (7UL)                     /*!< CHEN (Bit 7)                                          */
#define DFSDM_DFSDM_CHCFG1R1_CHEN_Msk     (0x80UL)                  /*!< CHEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM_CHCFG1R1_CHINSEL_Pos  (8UL)                     /*!< CHINSEL (Bit 8)                                       */
#define DFSDM_DFSDM_CHCFG1R1_CHINSEL_Msk  (0x100UL)                 /*!< CHINSEL (Bitfield-Mask: 0x01)                         */
#define DFSDM_DFSDM_CHCFG1R1_DATMPX_Pos   (12UL)                    /*!< DATMPX (Bit 12)                                       */
#define DFSDM_DFSDM_CHCFG1R1_DATMPX_Msk   (0x3000UL)                /*!< DATMPX (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM_CHCFG1R1_DATPACK_Pos  (14UL)                    /*!< DATPACK (Bit 14)                                      */
#define DFSDM_DFSDM_CHCFG1R1_DATPACK_Msk  (0xc000UL)                /*!< DATPACK (Bitfield-Mask: 0x03)                         */
#define DFSDM_DFSDM_CHCFG1R1_CKOUTDIV_Pos (16UL)                    /*!< CKOUTDIV (Bit 16)                                     */
#define DFSDM_DFSDM_CHCFG1R1_CKOUTDIV_Msk (0xff0000UL)              /*!< CKOUTDIV (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM_CHCFG1R1_CKOUTSRC_Pos (30UL)                    /*!< CKOUTSRC (Bit 30)                                     */
#define DFSDM_DFSDM_CHCFG1R1_CKOUTSRC_Msk (0x40000000UL)            /*!< CKOUTSRC (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM_CHCFG1R1_DFSDMEN_Pos  (31UL)                    /*!< DFSDMEN (Bit 31)                                      */
#define DFSDM_DFSDM_CHCFG1R1_DFSDMEN_Msk  (0x80000000UL)            /*!< DFSDMEN (Bitfield-Mask: 0x01)                         */
/* ====================================================  DFSDM_CHCFG2R1  ===================================================== */
#define DFSDM_DFSDM_CHCFG2R1_SITP_Pos     (0UL)                     /*!< SITP (Bit 0)                                          */
#define DFSDM_DFSDM_CHCFG2R1_SITP_Msk     (0x3UL)                   /*!< SITP (Bitfield-Mask: 0x03)                            */
#define DFSDM_DFSDM_CHCFG2R1_SPICKSEL_Pos (2UL)                     /*!< SPICKSEL (Bit 2)                                      */
#define DFSDM_DFSDM_CHCFG2R1_SPICKSEL_Msk (0xcUL)                   /*!< SPICKSEL (Bitfield-Mask: 0x03)                        */
#define DFSDM_DFSDM_CHCFG2R1_SCDEN_Pos    (5UL)                     /*!< SCDEN (Bit 5)                                         */
#define DFSDM_DFSDM_CHCFG2R1_SCDEN_Msk    (0x20UL)                  /*!< SCDEN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM_CHCFG2R1_CKABEN_Pos   (6UL)                     /*!< CKABEN (Bit 6)                                        */
#define DFSDM_DFSDM_CHCFG2R1_CKABEN_Msk   (0x40UL)                  /*!< CKABEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM_CHCFG2R1_CHEN_Pos     (7UL)                     /*!< CHEN (Bit 7)                                          */
#define DFSDM_DFSDM_CHCFG2R1_CHEN_Msk     (0x80UL)                  /*!< CHEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM_CHCFG2R1_CHINSEL_Pos  (8UL)                     /*!< CHINSEL (Bit 8)                                       */
#define DFSDM_DFSDM_CHCFG2R1_CHINSEL_Msk  (0x100UL)                 /*!< CHINSEL (Bitfield-Mask: 0x01)                         */
#define DFSDM_DFSDM_CHCFG2R1_DATMPX_Pos   (12UL)                    /*!< DATMPX (Bit 12)                                       */
#define DFSDM_DFSDM_CHCFG2R1_DATMPX_Msk   (0x3000UL)                /*!< DATMPX (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM_CHCFG2R1_DATPACK_Pos  (14UL)                    /*!< DATPACK (Bit 14)                                      */
#define DFSDM_DFSDM_CHCFG2R1_DATPACK_Msk  (0xc000UL)                /*!< DATPACK (Bitfield-Mask: 0x03)                         */
#define DFSDM_DFSDM_CHCFG2R1_CKOUTDIV_Pos (16UL)                    /*!< CKOUTDIV (Bit 16)                                     */
#define DFSDM_DFSDM_CHCFG2R1_CKOUTDIV_Msk (0xff0000UL)              /*!< CKOUTDIV (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM_CHCFG2R1_CKOUTSRC_Pos (30UL)                    /*!< CKOUTSRC (Bit 30)                                     */
#define DFSDM_DFSDM_CHCFG2R1_CKOUTSRC_Msk (0x40000000UL)            /*!< CKOUTSRC (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM_CHCFG2R1_DFSDMEN_Pos  (31UL)                    /*!< DFSDMEN (Bit 31)                                      */
#define DFSDM_DFSDM_CHCFG2R1_DFSDMEN_Msk  (0x80000000UL)            /*!< DFSDMEN (Bitfield-Mask: 0x01)                         */
/* ====================================================  DFSDM_CHCFG3R1  ===================================================== */
#define DFSDM_DFSDM_CHCFG3R1_SITP_Pos     (0UL)                     /*!< SITP (Bit 0)                                          */
#define DFSDM_DFSDM_CHCFG3R1_SITP_Msk     (0x3UL)                   /*!< SITP (Bitfield-Mask: 0x03)                            */
#define DFSDM_DFSDM_CHCFG3R1_SPICKSEL_Pos (2UL)                     /*!< SPICKSEL (Bit 2)                                      */
#define DFSDM_DFSDM_CHCFG3R1_SPICKSEL_Msk (0xcUL)                   /*!< SPICKSEL (Bitfield-Mask: 0x03)                        */
#define DFSDM_DFSDM_CHCFG3R1_SCDEN_Pos    (5UL)                     /*!< SCDEN (Bit 5)                                         */
#define DFSDM_DFSDM_CHCFG3R1_SCDEN_Msk    (0x20UL)                  /*!< SCDEN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM_CHCFG3R1_CKABEN_Pos   (6UL)                     /*!< CKABEN (Bit 6)                                        */
#define DFSDM_DFSDM_CHCFG3R1_CKABEN_Msk   (0x40UL)                  /*!< CKABEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM_CHCFG3R1_CHEN_Pos     (7UL)                     /*!< CHEN (Bit 7)                                          */
#define DFSDM_DFSDM_CHCFG3R1_CHEN_Msk     (0x80UL)                  /*!< CHEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM_CHCFG3R1_CHINSEL_Pos  (8UL)                     /*!< CHINSEL (Bit 8)                                       */
#define DFSDM_DFSDM_CHCFG3R1_CHINSEL_Msk  (0x100UL)                 /*!< CHINSEL (Bitfield-Mask: 0x01)                         */
#define DFSDM_DFSDM_CHCFG3R1_DATMPX_Pos   (12UL)                    /*!< DATMPX (Bit 12)                                       */
#define DFSDM_DFSDM_CHCFG3R1_DATMPX_Msk   (0x3000UL)                /*!< DATMPX (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM_CHCFG3R1_DATPACK_Pos  (14UL)                    /*!< DATPACK (Bit 14)                                      */
#define DFSDM_DFSDM_CHCFG3R1_DATPACK_Msk  (0xc000UL)                /*!< DATPACK (Bitfield-Mask: 0x03)                         */
#define DFSDM_DFSDM_CHCFG3R1_CKOUTDIV_Pos (16UL)                    /*!< CKOUTDIV (Bit 16)                                     */
#define DFSDM_DFSDM_CHCFG3R1_CKOUTDIV_Msk (0xff0000UL)              /*!< CKOUTDIV (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM_CHCFG3R1_CKOUTSRC_Pos (30UL)                    /*!< CKOUTSRC (Bit 30)                                     */
#define DFSDM_DFSDM_CHCFG3R1_CKOUTSRC_Msk (0x40000000UL)            /*!< CKOUTSRC (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM_CHCFG3R1_DFSDMEN_Pos  (31UL)                    /*!< DFSDMEN (Bit 31)                                      */
#define DFSDM_DFSDM_CHCFG3R1_DFSDMEN_Msk  (0x80000000UL)            /*!< DFSDMEN (Bitfield-Mask: 0x01)                         */
/* ====================================================  DFSDM_CHCFG4R1  ===================================================== */
#define DFSDM_DFSDM_CHCFG4R1_SITP_Pos     (0UL)                     /*!< SITP (Bit 0)                                          */
#define DFSDM_DFSDM_CHCFG4R1_SITP_Msk     (0x3UL)                   /*!< SITP (Bitfield-Mask: 0x03)                            */
#define DFSDM_DFSDM_CHCFG4R1_SPICKSEL_Pos (2UL)                     /*!< SPICKSEL (Bit 2)                                      */
#define DFSDM_DFSDM_CHCFG4R1_SPICKSEL_Msk (0xcUL)                   /*!< SPICKSEL (Bitfield-Mask: 0x03)                        */
#define DFSDM_DFSDM_CHCFG4R1_SCDEN_Pos    (5UL)                     /*!< SCDEN (Bit 5)                                         */
#define DFSDM_DFSDM_CHCFG4R1_SCDEN_Msk    (0x20UL)                  /*!< SCDEN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM_CHCFG4R1_CKABEN_Pos   (6UL)                     /*!< CKABEN (Bit 6)                                        */
#define DFSDM_DFSDM_CHCFG4R1_CKABEN_Msk   (0x40UL)                  /*!< CKABEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM_CHCFG4R1_CHEN_Pos     (7UL)                     /*!< CHEN (Bit 7)                                          */
#define DFSDM_DFSDM_CHCFG4R1_CHEN_Msk     (0x80UL)                  /*!< CHEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM_CHCFG4R1_CHINSEL_Pos  (8UL)                     /*!< CHINSEL (Bit 8)                                       */
#define DFSDM_DFSDM_CHCFG4R1_CHINSEL_Msk  (0x100UL)                 /*!< CHINSEL (Bitfield-Mask: 0x01)                         */
#define DFSDM_DFSDM_CHCFG4R1_DATMPX_Pos   (12UL)                    /*!< DATMPX (Bit 12)                                       */
#define DFSDM_DFSDM_CHCFG4R1_DATMPX_Msk   (0x3000UL)                /*!< DATMPX (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM_CHCFG4R1_DATPACK_Pos  (14UL)                    /*!< DATPACK (Bit 14)                                      */
#define DFSDM_DFSDM_CHCFG4R1_DATPACK_Msk  (0xc000UL)                /*!< DATPACK (Bitfield-Mask: 0x03)                         */
#define DFSDM_DFSDM_CHCFG4R1_CKOUTDIV_Pos (16UL)                    /*!< CKOUTDIV (Bit 16)                                     */
#define DFSDM_DFSDM_CHCFG4R1_CKOUTDIV_Msk (0xff0000UL)              /*!< CKOUTDIV (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM_CHCFG4R1_CKOUTSRC_Pos (30UL)                    /*!< CKOUTSRC (Bit 30)                                     */
#define DFSDM_DFSDM_CHCFG4R1_CKOUTSRC_Msk (0x40000000UL)            /*!< CKOUTSRC (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM_CHCFG4R1_DFSDMEN_Pos  (31UL)                    /*!< DFSDMEN (Bit 31)                                      */
#define DFSDM_DFSDM_CHCFG4R1_DFSDMEN_Msk  (0x80000000UL)            /*!< DFSDMEN (Bitfield-Mask: 0x01)                         */
/* ====================================================  DFSDM_CHCFG5R1  ===================================================== */
#define DFSDM_DFSDM_CHCFG5R1_SITP_Pos     (0UL)                     /*!< SITP (Bit 0)                                          */
#define DFSDM_DFSDM_CHCFG5R1_SITP_Msk     (0x3UL)                   /*!< SITP (Bitfield-Mask: 0x03)                            */
#define DFSDM_DFSDM_CHCFG5R1_SPICKSEL_Pos (2UL)                     /*!< SPICKSEL (Bit 2)                                      */
#define DFSDM_DFSDM_CHCFG5R1_SPICKSEL_Msk (0xcUL)                   /*!< SPICKSEL (Bitfield-Mask: 0x03)                        */
#define DFSDM_DFSDM_CHCFG5R1_SCDEN_Pos    (5UL)                     /*!< SCDEN (Bit 5)                                         */
#define DFSDM_DFSDM_CHCFG5R1_SCDEN_Msk    (0x20UL)                  /*!< SCDEN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM_CHCFG5R1_CKABEN_Pos   (6UL)                     /*!< CKABEN (Bit 6)                                        */
#define DFSDM_DFSDM_CHCFG5R1_CKABEN_Msk   (0x40UL)                  /*!< CKABEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM_CHCFG5R1_CHEN_Pos     (7UL)                     /*!< CHEN (Bit 7)                                          */
#define DFSDM_DFSDM_CHCFG5R1_CHEN_Msk     (0x80UL)                  /*!< CHEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM_CHCFG5R1_CHINSEL_Pos  (8UL)                     /*!< CHINSEL (Bit 8)                                       */
#define DFSDM_DFSDM_CHCFG5R1_CHINSEL_Msk  (0x100UL)                 /*!< CHINSEL (Bitfield-Mask: 0x01)                         */
#define DFSDM_DFSDM_CHCFG5R1_DATMPX_Pos   (12UL)                    /*!< DATMPX (Bit 12)                                       */
#define DFSDM_DFSDM_CHCFG5R1_DATMPX_Msk   (0x3000UL)                /*!< DATMPX (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM_CHCFG5R1_DATPACK_Pos  (14UL)                    /*!< DATPACK (Bit 14)                                      */
#define DFSDM_DFSDM_CHCFG5R1_DATPACK_Msk  (0xc000UL)                /*!< DATPACK (Bitfield-Mask: 0x03)                         */
#define DFSDM_DFSDM_CHCFG5R1_CKOUTDIV_Pos (16UL)                    /*!< CKOUTDIV (Bit 16)                                     */
#define DFSDM_DFSDM_CHCFG5R1_CKOUTDIV_Msk (0xff0000UL)              /*!< CKOUTDIV (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM_CHCFG5R1_CKOUTSRC_Pos (30UL)                    /*!< CKOUTSRC (Bit 30)                                     */
#define DFSDM_DFSDM_CHCFG5R1_CKOUTSRC_Msk (0x40000000UL)            /*!< CKOUTSRC (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM_CHCFG5R1_DFSDMEN_Pos  (31UL)                    /*!< DFSDMEN (Bit 31)                                      */
#define DFSDM_DFSDM_CHCFG5R1_DFSDMEN_Msk  (0x80000000UL)            /*!< DFSDMEN (Bitfield-Mask: 0x01)                         */
/* ====================================================  DFSDM_CHCFG6R1  ===================================================== */
#define DFSDM_DFSDM_CHCFG6R1_SITP_Pos     (0UL)                     /*!< SITP (Bit 0)                                          */
#define DFSDM_DFSDM_CHCFG6R1_SITP_Msk     (0x3UL)                   /*!< SITP (Bitfield-Mask: 0x03)                            */
#define DFSDM_DFSDM_CHCFG6R1_SPICKSEL_Pos (2UL)                     /*!< SPICKSEL (Bit 2)                                      */
#define DFSDM_DFSDM_CHCFG6R1_SPICKSEL_Msk (0xcUL)                   /*!< SPICKSEL (Bitfield-Mask: 0x03)                        */
#define DFSDM_DFSDM_CHCFG6R1_SCDEN_Pos    (5UL)                     /*!< SCDEN (Bit 5)                                         */
#define DFSDM_DFSDM_CHCFG6R1_SCDEN_Msk    (0x20UL)                  /*!< SCDEN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM_CHCFG6R1_CKABEN_Pos   (6UL)                     /*!< CKABEN (Bit 6)                                        */
#define DFSDM_DFSDM_CHCFG6R1_CKABEN_Msk   (0x40UL)                  /*!< CKABEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM_CHCFG6R1_CHEN_Pos     (7UL)                     /*!< CHEN (Bit 7)                                          */
#define DFSDM_DFSDM_CHCFG6R1_CHEN_Msk     (0x80UL)                  /*!< CHEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM_CHCFG6R1_CHINSEL_Pos  (8UL)                     /*!< CHINSEL (Bit 8)                                       */
#define DFSDM_DFSDM_CHCFG6R1_CHINSEL_Msk  (0x100UL)                 /*!< CHINSEL (Bitfield-Mask: 0x01)                         */
#define DFSDM_DFSDM_CHCFG6R1_DATMPX_Pos   (12UL)                    /*!< DATMPX (Bit 12)                                       */
#define DFSDM_DFSDM_CHCFG6R1_DATMPX_Msk   (0x3000UL)                /*!< DATMPX (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM_CHCFG6R1_DATPACK_Pos  (14UL)                    /*!< DATPACK (Bit 14)                                      */
#define DFSDM_DFSDM_CHCFG6R1_DATPACK_Msk  (0xc000UL)                /*!< DATPACK (Bitfield-Mask: 0x03)                         */
#define DFSDM_DFSDM_CHCFG6R1_CKOUTDIV_Pos (16UL)                    /*!< CKOUTDIV (Bit 16)                                     */
#define DFSDM_DFSDM_CHCFG6R1_CKOUTDIV_Msk (0xff0000UL)              /*!< CKOUTDIV (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM_CHCFG6R1_CKOUTSRC_Pos (30UL)                    /*!< CKOUTSRC (Bit 30)                                     */
#define DFSDM_DFSDM_CHCFG6R1_CKOUTSRC_Msk (0x40000000UL)            /*!< CKOUTSRC (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM_CHCFG6R1_DFSDMEN_Pos  (31UL)                    /*!< DFSDMEN (Bit 31)                                      */
#define DFSDM_DFSDM_CHCFG6R1_DFSDMEN_Msk  (0x80000000UL)            /*!< DFSDMEN (Bitfield-Mask: 0x01)                         */
/* ====================================================  DFSDM_CHCFG7R1  ===================================================== */
#define DFSDM_DFSDM_CHCFG7R1_SITP_Pos     (0UL)                     /*!< SITP (Bit 0)                                          */
#define DFSDM_DFSDM_CHCFG7R1_SITP_Msk     (0x3UL)                   /*!< SITP (Bitfield-Mask: 0x03)                            */
#define DFSDM_DFSDM_CHCFG7R1_SPICKSEL_Pos (2UL)                     /*!< SPICKSEL (Bit 2)                                      */
#define DFSDM_DFSDM_CHCFG7R1_SPICKSEL_Msk (0xcUL)                   /*!< SPICKSEL (Bitfield-Mask: 0x03)                        */
#define DFSDM_DFSDM_CHCFG7R1_SCDEN_Pos    (5UL)                     /*!< SCDEN (Bit 5)                                         */
#define DFSDM_DFSDM_CHCFG7R1_SCDEN_Msk    (0x20UL)                  /*!< SCDEN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM_CHCFG7R1_CKABEN_Pos   (6UL)                     /*!< CKABEN (Bit 6)                                        */
#define DFSDM_DFSDM_CHCFG7R1_CKABEN_Msk   (0x40UL)                  /*!< CKABEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM_CHCFG7R1_CHEN_Pos     (7UL)                     /*!< CHEN (Bit 7)                                          */
#define DFSDM_DFSDM_CHCFG7R1_CHEN_Msk     (0x80UL)                  /*!< CHEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM_CHCFG7R1_CHINSEL_Pos  (8UL)                     /*!< CHINSEL (Bit 8)                                       */
#define DFSDM_DFSDM_CHCFG7R1_CHINSEL_Msk  (0x100UL)                 /*!< CHINSEL (Bitfield-Mask: 0x01)                         */
#define DFSDM_DFSDM_CHCFG7R1_DATMPX_Pos   (12UL)                    /*!< DATMPX (Bit 12)                                       */
#define DFSDM_DFSDM_CHCFG7R1_DATMPX_Msk   (0x3000UL)                /*!< DATMPX (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM_CHCFG7R1_DATPACK_Pos  (14UL)                    /*!< DATPACK (Bit 14)                                      */
#define DFSDM_DFSDM_CHCFG7R1_DATPACK_Msk  (0xc000UL)                /*!< DATPACK (Bitfield-Mask: 0x03)                         */
#define DFSDM_DFSDM_CHCFG7R1_CKOUTDIV_Pos (16UL)                    /*!< CKOUTDIV (Bit 16)                                     */
#define DFSDM_DFSDM_CHCFG7R1_CKOUTDIV_Msk (0xff0000UL)              /*!< CKOUTDIV (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM_CHCFG7R1_CKOUTSRC_Pos (30UL)                    /*!< CKOUTSRC (Bit 30)                                     */
#define DFSDM_DFSDM_CHCFG7R1_CKOUTSRC_Msk (0x40000000UL)            /*!< CKOUTSRC (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM_CHCFG7R1_DFSDMEN_Pos  (31UL)                    /*!< DFSDMEN (Bit 31)                                      */
#define DFSDM_DFSDM_CHCFG7R1_DFSDMEN_Msk  (0x80000000UL)            /*!< DFSDMEN (Bitfield-Mask: 0x01)                         */
/* ====================================================  DFSDM_CHCFG0R2  ===================================================== */
#define DFSDM_DFSDM_CHCFG0R2_DTRBS_Pos    (3UL)                     /*!< DTRBS (Bit 3)                                         */
#define DFSDM_DFSDM_CHCFG0R2_DTRBS_Msk    (0xf8UL)                  /*!< DTRBS (Bitfield-Mask: 0x1f)                           */
#define DFSDM_DFSDM_CHCFG0R2_OFFSET_Pos   (8UL)                     /*!< OFFSET (Bit 8)                                        */
#define DFSDM_DFSDM_CHCFG0R2_OFFSET_Msk   (0xffffff00UL)            /*!< OFFSET (Bitfield-Mask: 0xffffff)                      */
/* ====================================================  DFSDM_CHCFG1R2  ===================================================== */
#define DFSDM_DFSDM_CHCFG1R2_DTRBS_Pos    (3UL)                     /*!< DTRBS (Bit 3)                                         */
#define DFSDM_DFSDM_CHCFG1R2_DTRBS_Msk    (0xf8UL)                  /*!< DTRBS (Bitfield-Mask: 0x1f)                           */
#define DFSDM_DFSDM_CHCFG1R2_OFFSET_Pos   (8UL)                     /*!< OFFSET (Bit 8)                                        */
#define DFSDM_DFSDM_CHCFG1R2_OFFSET_Msk   (0xffffff00UL)            /*!< OFFSET (Bitfield-Mask: 0xffffff)                      */
/* ====================================================  DFSDM_CHCFG2R2  ===================================================== */
#define DFSDM_DFSDM_CHCFG2R2_DTRBS_Pos    (3UL)                     /*!< DTRBS (Bit 3)                                         */
#define DFSDM_DFSDM_CHCFG2R2_DTRBS_Msk    (0xf8UL)                  /*!< DTRBS (Bitfield-Mask: 0x1f)                           */
#define DFSDM_DFSDM_CHCFG2R2_OFFSET_Pos   (8UL)                     /*!< OFFSET (Bit 8)                                        */
#define DFSDM_DFSDM_CHCFG2R2_OFFSET_Msk   (0xffffff00UL)            /*!< OFFSET (Bitfield-Mask: 0xffffff)                      */
/* ====================================================  DFSDM_CHCFG3R2  ===================================================== */
#define DFSDM_DFSDM_CHCFG3R2_DTRBS_Pos    (3UL)                     /*!< DTRBS (Bit 3)                                         */
#define DFSDM_DFSDM_CHCFG3R2_DTRBS_Msk    (0xf8UL)                  /*!< DTRBS (Bitfield-Mask: 0x1f)                           */
#define DFSDM_DFSDM_CHCFG3R2_OFFSET_Pos   (8UL)                     /*!< OFFSET (Bit 8)                                        */
#define DFSDM_DFSDM_CHCFG3R2_OFFSET_Msk   (0xffffff00UL)            /*!< OFFSET (Bitfield-Mask: 0xffffff)                      */
/* ====================================================  DFSDM_CHCFG4R2  ===================================================== */
#define DFSDM_DFSDM_CHCFG4R2_DTRBS_Pos    (3UL)                     /*!< DTRBS (Bit 3)                                         */
#define DFSDM_DFSDM_CHCFG4R2_DTRBS_Msk    (0xf8UL)                  /*!< DTRBS (Bitfield-Mask: 0x1f)                           */
#define DFSDM_DFSDM_CHCFG4R2_OFFSET_Pos   (8UL)                     /*!< OFFSET (Bit 8)                                        */
#define DFSDM_DFSDM_CHCFG4R2_OFFSET_Msk   (0xffffff00UL)            /*!< OFFSET (Bitfield-Mask: 0xffffff)                      */
/* ====================================================  DFSDM_CHCFG5R2  ===================================================== */
#define DFSDM_DFSDM_CHCFG5R2_DTRBS_Pos    (3UL)                     /*!< DTRBS (Bit 3)                                         */
#define DFSDM_DFSDM_CHCFG5R2_DTRBS_Msk    (0xf8UL)                  /*!< DTRBS (Bitfield-Mask: 0x1f)                           */
#define DFSDM_DFSDM_CHCFG5R2_OFFSET_Pos   (8UL)                     /*!< OFFSET (Bit 8)                                        */
#define DFSDM_DFSDM_CHCFG5R2_OFFSET_Msk   (0xffffff00UL)            /*!< OFFSET (Bitfield-Mask: 0xffffff)                      */
/* ====================================================  DFSDM_CHCFG6R2  ===================================================== */
#define DFSDM_DFSDM_CHCFG6R2_DTRBS_Pos    (3UL)                     /*!< DTRBS (Bit 3)                                         */
#define DFSDM_DFSDM_CHCFG6R2_DTRBS_Msk    (0xf8UL)                  /*!< DTRBS (Bitfield-Mask: 0x1f)                           */
#define DFSDM_DFSDM_CHCFG6R2_OFFSET_Pos   (8UL)                     /*!< OFFSET (Bit 8)                                        */
#define DFSDM_DFSDM_CHCFG6R2_OFFSET_Msk   (0xffffff00UL)            /*!< OFFSET (Bitfield-Mask: 0xffffff)                      */
/* ====================================================  DFSDM_CHCFG7R2  ===================================================== */
#define DFSDM_DFSDM_CHCFG7R2_DTRBS_Pos    (3UL)                     /*!< DTRBS (Bit 3)                                         */
#define DFSDM_DFSDM_CHCFG7R2_DTRBS_Msk    (0xf8UL)                  /*!< DTRBS (Bitfield-Mask: 0x1f)                           */
#define DFSDM_DFSDM_CHCFG7R2_OFFSET_Pos   (8UL)                     /*!< OFFSET (Bit 8)                                        */
#define DFSDM_DFSDM_CHCFG7R2_OFFSET_Msk   (0xffffff00UL)            /*!< OFFSET (Bitfield-Mask: 0xffffff)                      */
/* =====================================================  DFSDM_AWSCD0R  ===================================================== */
#define DFSDM_DFSDM_AWSCD0R_SCDT_Pos      (0UL)                     /*!< SCDT (Bit 0)                                          */
#define DFSDM_DFSDM_AWSCD0R_SCDT_Msk      (0xffUL)                  /*!< SCDT (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM_AWSCD0R_BKSCD_Pos     (12UL)                    /*!< BKSCD (Bit 12)                                        */
#define DFSDM_DFSDM_AWSCD0R_BKSCD_Msk     (0xf000UL)                /*!< BKSCD (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM_AWSCD0R_AWFOSR_Pos    (16UL)                    /*!< AWFOSR (Bit 16)                                       */
#define DFSDM_DFSDM_AWSCD0R_AWFOSR_Msk    (0x1f0000UL)              /*!< AWFOSR (Bitfield-Mask: 0x1f)                          */
#define DFSDM_DFSDM_AWSCD0R_AWFORD_Pos    (22UL)                    /*!< AWFORD (Bit 22)                                       */
#define DFSDM_DFSDM_AWSCD0R_AWFORD_Msk    (0xc00000UL)              /*!< AWFORD (Bitfield-Mask: 0x03)                          */
/* =====================================================  DFSDM_AWSCD1R  ===================================================== */
#define DFSDM_DFSDM_AWSCD1R_SCDT_Pos      (0UL)                     /*!< SCDT (Bit 0)                                          */
#define DFSDM_DFSDM_AWSCD1R_SCDT_Msk      (0xffUL)                  /*!< SCDT (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM_AWSCD1R_BKSCD_Pos     (12UL)                    /*!< BKSCD (Bit 12)                                        */
#define DFSDM_DFSDM_AWSCD1R_BKSCD_Msk     (0xf000UL)                /*!< BKSCD (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM_AWSCD1R_AWFOSR_Pos    (16UL)                    /*!< AWFOSR (Bit 16)                                       */
#define DFSDM_DFSDM_AWSCD1R_AWFOSR_Msk    (0x1f0000UL)              /*!< AWFOSR (Bitfield-Mask: 0x1f)                          */
#define DFSDM_DFSDM_AWSCD1R_AWFORD_Pos    (22UL)                    /*!< AWFORD (Bit 22)                                       */
#define DFSDM_DFSDM_AWSCD1R_AWFORD_Msk    (0xc00000UL)              /*!< AWFORD (Bitfield-Mask: 0x03)                          */
/* =====================================================  DFSDM_AWSCD2R  ===================================================== */
#define DFSDM_DFSDM_AWSCD2R_SCDT_Pos      (0UL)                     /*!< SCDT (Bit 0)                                          */
#define DFSDM_DFSDM_AWSCD2R_SCDT_Msk      (0xffUL)                  /*!< SCDT (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM_AWSCD2R_BKSCD_Pos     (12UL)                    /*!< BKSCD (Bit 12)                                        */
#define DFSDM_DFSDM_AWSCD2R_BKSCD_Msk     (0xf000UL)                /*!< BKSCD (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM_AWSCD2R_AWFOSR_Pos    (16UL)                    /*!< AWFOSR (Bit 16)                                       */
#define DFSDM_DFSDM_AWSCD2R_AWFOSR_Msk    (0x1f0000UL)              /*!< AWFOSR (Bitfield-Mask: 0x1f)                          */
#define DFSDM_DFSDM_AWSCD2R_AWFORD_Pos    (22UL)                    /*!< AWFORD (Bit 22)                                       */
#define DFSDM_DFSDM_AWSCD2R_AWFORD_Msk    (0xc00000UL)              /*!< AWFORD (Bitfield-Mask: 0x03)                          */
/* =====================================================  DFSDM_AWSCD3R  ===================================================== */
#define DFSDM_DFSDM_AWSCD3R_SCDT_Pos      (0UL)                     /*!< SCDT (Bit 0)                                          */
#define DFSDM_DFSDM_AWSCD3R_SCDT_Msk      (0xffUL)                  /*!< SCDT (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM_AWSCD3R_BKSCD_Pos     (12UL)                    /*!< BKSCD (Bit 12)                                        */
#define DFSDM_DFSDM_AWSCD3R_BKSCD_Msk     (0xf000UL)                /*!< BKSCD (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM_AWSCD3R_AWFOSR_Pos    (16UL)                    /*!< AWFOSR (Bit 16)                                       */
#define DFSDM_DFSDM_AWSCD3R_AWFOSR_Msk    (0x1f0000UL)              /*!< AWFOSR (Bitfield-Mask: 0x1f)                          */
#define DFSDM_DFSDM_AWSCD3R_AWFORD_Pos    (22UL)                    /*!< AWFORD (Bit 22)                                       */
#define DFSDM_DFSDM_AWSCD3R_AWFORD_Msk    (0xc00000UL)              /*!< AWFORD (Bitfield-Mask: 0x03)                          */
/* =====================================================  DFSDM_AWSCD4R  ===================================================== */
#define DFSDM_DFSDM_AWSCD4R_SCDT_Pos      (0UL)                     /*!< SCDT (Bit 0)                                          */
#define DFSDM_DFSDM_AWSCD4R_SCDT_Msk      (0xffUL)                  /*!< SCDT (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM_AWSCD4R_BKSCD_Pos     (12UL)                    /*!< BKSCD (Bit 12)                                        */
#define DFSDM_DFSDM_AWSCD4R_BKSCD_Msk     (0xf000UL)                /*!< BKSCD (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM_AWSCD4R_AWFOSR_Pos    (16UL)                    /*!< AWFOSR (Bit 16)                                       */
#define DFSDM_DFSDM_AWSCD4R_AWFOSR_Msk    (0x1f0000UL)              /*!< AWFOSR (Bitfield-Mask: 0x1f)                          */
#define DFSDM_DFSDM_AWSCD4R_AWFORD_Pos    (22UL)                    /*!< AWFORD (Bit 22)                                       */
#define DFSDM_DFSDM_AWSCD4R_AWFORD_Msk    (0xc00000UL)              /*!< AWFORD (Bitfield-Mask: 0x03)                          */
/* =====================================================  DFSDM_AWSCD5R  ===================================================== */
#define DFSDM_DFSDM_AWSCD5R_SCDT_Pos      (0UL)                     /*!< SCDT (Bit 0)                                          */
#define DFSDM_DFSDM_AWSCD5R_SCDT_Msk      (0xffUL)                  /*!< SCDT (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM_AWSCD5R_BKSCD_Pos     (12UL)                    /*!< BKSCD (Bit 12)                                        */
#define DFSDM_DFSDM_AWSCD5R_BKSCD_Msk     (0xf000UL)                /*!< BKSCD (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM_AWSCD5R_AWFOSR_Pos    (16UL)                    /*!< AWFOSR (Bit 16)                                       */
#define DFSDM_DFSDM_AWSCD5R_AWFOSR_Msk    (0x1f0000UL)              /*!< AWFOSR (Bitfield-Mask: 0x1f)                          */
#define DFSDM_DFSDM_AWSCD5R_AWFORD_Pos    (22UL)                    /*!< AWFORD (Bit 22)                                       */
#define DFSDM_DFSDM_AWSCD5R_AWFORD_Msk    (0xc00000UL)              /*!< AWFORD (Bitfield-Mask: 0x03)                          */
/* =====================================================  DFSDM_AWSCD6R  ===================================================== */
#define DFSDM_DFSDM_AWSCD6R_SCDT_Pos      (0UL)                     /*!< SCDT (Bit 0)                                          */
#define DFSDM_DFSDM_AWSCD6R_SCDT_Msk      (0xffUL)                  /*!< SCDT (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM_AWSCD6R_BKSCD_Pos     (12UL)                    /*!< BKSCD (Bit 12)                                        */
#define DFSDM_DFSDM_AWSCD6R_BKSCD_Msk     (0xf000UL)                /*!< BKSCD (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM_AWSCD6R_AWFOSR_Pos    (16UL)                    /*!< AWFOSR (Bit 16)                                       */
#define DFSDM_DFSDM_AWSCD6R_AWFOSR_Msk    (0x1f0000UL)              /*!< AWFOSR (Bitfield-Mask: 0x1f)                          */
#define DFSDM_DFSDM_AWSCD6R_AWFORD_Pos    (22UL)                    /*!< AWFORD (Bit 22)                                       */
#define DFSDM_DFSDM_AWSCD6R_AWFORD_Msk    (0xc00000UL)              /*!< AWFORD (Bitfield-Mask: 0x03)                          */
/* =====================================================  DFSDM_AWSCD7R  ===================================================== */
#define DFSDM_DFSDM_AWSCD7R_SCDT_Pos      (0UL)                     /*!< SCDT (Bit 0)                                          */
#define DFSDM_DFSDM_AWSCD7R_SCDT_Msk      (0xffUL)                  /*!< SCDT (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM_AWSCD7R_BKSCD_Pos     (12UL)                    /*!< BKSCD (Bit 12)                                        */
#define DFSDM_DFSDM_AWSCD7R_BKSCD_Msk     (0xf000UL)                /*!< BKSCD (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM_AWSCD7R_AWFOSR_Pos    (16UL)                    /*!< AWFOSR (Bit 16)                                       */
#define DFSDM_DFSDM_AWSCD7R_AWFOSR_Msk    (0x1f0000UL)              /*!< AWFOSR (Bitfield-Mask: 0x1f)                          */
#define DFSDM_DFSDM_AWSCD7R_AWFORD_Pos    (22UL)                    /*!< AWFORD (Bit 22)                                       */
#define DFSDM_DFSDM_AWSCD7R_AWFORD_Msk    (0xc00000UL)              /*!< AWFORD (Bitfield-Mask: 0x03)                          */
/* ====================================================  DFSDM_CHWDAT0R  ===================================================== */
#define DFSDM_DFSDM_CHWDAT0R_WDATA_Pos    (0UL)                     /*!< WDATA (Bit 0)                                         */
#define DFSDM_DFSDM_CHWDAT0R_WDATA_Msk    (0xffffUL)                /*!< WDATA (Bitfield-Mask: 0xffff)                         */
/* ====================================================  DFSDM_CHWDAT1R  ===================================================== */
#define DFSDM_DFSDM_CHWDAT1R_WDATA_Pos    (0UL)                     /*!< WDATA (Bit 0)                                         */
#define DFSDM_DFSDM_CHWDAT1R_WDATA_Msk    (0xffffUL)                /*!< WDATA (Bitfield-Mask: 0xffff)                         */
/* ====================================================  DFSDM_CHWDAT2R  ===================================================== */
#define DFSDM_DFSDM_CHWDAT2R_WDATA_Pos    (0UL)                     /*!< WDATA (Bit 0)                                         */
#define DFSDM_DFSDM_CHWDAT2R_WDATA_Msk    (0xffffUL)                /*!< WDATA (Bitfield-Mask: 0xffff)                         */
/* ====================================================  DFSDM_CHWDAT3R  ===================================================== */
#define DFSDM_DFSDM_CHWDAT3R_WDATA_Pos    (0UL)                     /*!< WDATA (Bit 0)                                         */
#define DFSDM_DFSDM_CHWDAT3R_WDATA_Msk    (0xffffUL)                /*!< WDATA (Bitfield-Mask: 0xffff)                         */
/* ====================================================  DFSDM_CHWDAT4R  ===================================================== */
#define DFSDM_DFSDM_CHWDAT4R_WDATA_Pos    (0UL)                     /*!< WDATA (Bit 0)                                         */
#define DFSDM_DFSDM_CHWDAT4R_WDATA_Msk    (0xffffUL)                /*!< WDATA (Bitfield-Mask: 0xffff)                         */
/* ====================================================  DFSDM_CHWDAT5R  ===================================================== */
#define DFSDM_DFSDM_CHWDAT5R_WDATA_Pos    (0UL)                     /*!< WDATA (Bit 0)                                         */
#define DFSDM_DFSDM_CHWDAT5R_WDATA_Msk    (0xffffUL)                /*!< WDATA (Bitfield-Mask: 0xffff)                         */
/* ====================================================  DFSDM_CHWDAT6R  ===================================================== */
#define DFSDM_DFSDM_CHWDAT6R_WDATA_Pos    (0UL)                     /*!< WDATA (Bit 0)                                         */
#define DFSDM_DFSDM_CHWDAT6R_WDATA_Msk    (0xffffUL)                /*!< WDATA (Bitfield-Mask: 0xffff)                         */
/* ====================================================  DFSDM_CHWDAT7R  ===================================================== */
#define DFSDM_DFSDM_CHWDAT7R_WDATA_Pos    (0UL)                     /*!< WDATA (Bit 0)                                         */
#define DFSDM_DFSDM_CHWDAT7R_WDATA_Msk    (0xffffUL)                /*!< WDATA (Bitfield-Mask: 0xffff)                         */
/* ====================================================  DFSDM_CHDATIN0R  ==================================================== */
#define DFSDM_DFSDM_CHDATIN0R_INDAT0_Pos  (0UL)                     /*!< INDAT0 (Bit 0)                                        */
#define DFSDM_DFSDM_CHDATIN0R_INDAT0_Msk  (0xffffUL)                /*!< INDAT0 (Bitfield-Mask: 0xffff)                        */
#define DFSDM_DFSDM_CHDATIN0R_INDAT1_Pos  (16UL)                    /*!< INDAT1 (Bit 16)                                       */
#define DFSDM_DFSDM_CHDATIN0R_INDAT1_Msk  (0xffff0000UL)            /*!< INDAT1 (Bitfield-Mask: 0xffff)                        */
/* ====================================================  DFSDM_CHDATIN1R  ==================================================== */
#define DFSDM_DFSDM_CHDATIN1R_INDAT0_Pos  (0UL)                     /*!< INDAT0 (Bit 0)                                        */
#define DFSDM_DFSDM_CHDATIN1R_INDAT0_Msk  (0xffffUL)                /*!< INDAT0 (Bitfield-Mask: 0xffff)                        */
#define DFSDM_DFSDM_CHDATIN1R_INDAT1_Pos  (16UL)                    /*!< INDAT1 (Bit 16)                                       */
#define DFSDM_DFSDM_CHDATIN1R_INDAT1_Msk  (0xffff0000UL)            /*!< INDAT1 (Bitfield-Mask: 0xffff)                        */
/* ====================================================  DFSDM_CHDATIN2R  ==================================================== */
#define DFSDM_DFSDM_CHDATIN2R_INDAT0_Pos  (0UL)                     /*!< INDAT0 (Bit 0)                                        */
#define DFSDM_DFSDM_CHDATIN2R_INDAT0_Msk  (0xffffUL)                /*!< INDAT0 (Bitfield-Mask: 0xffff)                        */
#define DFSDM_DFSDM_CHDATIN2R_INDAT1_Pos  (16UL)                    /*!< INDAT1 (Bit 16)                                       */
#define DFSDM_DFSDM_CHDATIN2R_INDAT1_Msk  (0xffff0000UL)            /*!< INDAT1 (Bitfield-Mask: 0xffff)                        */
/* ====================================================  DFSDM_CHDATIN3R  ==================================================== */
#define DFSDM_DFSDM_CHDATIN3R_INDAT0_Pos  (0UL)                     /*!< INDAT0 (Bit 0)                                        */
#define DFSDM_DFSDM_CHDATIN3R_INDAT0_Msk  (0xffffUL)                /*!< INDAT0 (Bitfield-Mask: 0xffff)                        */
#define DFSDM_DFSDM_CHDATIN3R_INDAT1_Pos  (16UL)                    /*!< INDAT1 (Bit 16)                                       */
#define DFSDM_DFSDM_CHDATIN3R_INDAT1_Msk  (0xffff0000UL)            /*!< INDAT1 (Bitfield-Mask: 0xffff)                        */
/* ====================================================  DFSDM_CHDATIN4R  ==================================================== */
#define DFSDM_DFSDM_CHDATIN4R_INDAT0_Pos  (0UL)                     /*!< INDAT0 (Bit 0)                                        */
#define DFSDM_DFSDM_CHDATIN4R_INDAT0_Msk  (0xffffUL)                /*!< INDAT0 (Bitfield-Mask: 0xffff)                        */
#define DFSDM_DFSDM_CHDATIN4R_INDAT1_Pos  (16UL)                    /*!< INDAT1 (Bit 16)                                       */
#define DFSDM_DFSDM_CHDATIN4R_INDAT1_Msk  (0xffff0000UL)            /*!< INDAT1 (Bitfield-Mask: 0xffff)                        */
/* ====================================================  DFSDM_CHDATIN5R  ==================================================== */
#define DFSDM_DFSDM_CHDATIN5R_INDAT0_Pos  (0UL)                     /*!< INDAT0 (Bit 0)                                        */
#define DFSDM_DFSDM_CHDATIN5R_INDAT0_Msk  (0xffffUL)                /*!< INDAT0 (Bitfield-Mask: 0xffff)                        */
#define DFSDM_DFSDM_CHDATIN5R_INDAT1_Pos  (16UL)                    /*!< INDAT1 (Bit 16)                                       */
#define DFSDM_DFSDM_CHDATIN5R_INDAT1_Msk  (0xffff0000UL)            /*!< INDAT1 (Bitfield-Mask: 0xffff)                        */
/* ====================================================  DFSDM_CHDATIN6R  ==================================================== */
#define DFSDM_DFSDM_CHDATIN6R_INDAT0_Pos  (0UL)                     /*!< INDAT0 (Bit 0)                                        */
#define DFSDM_DFSDM_CHDATIN6R_INDAT0_Msk  (0xffffUL)                /*!< INDAT0 (Bitfield-Mask: 0xffff)                        */
#define DFSDM_DFSDM_CHDATIN6R_INDAT1_Pos  (16UL)                    /*!< INDAT1 (Bit 16)                                       */
#define DFSDM_DFSDM_CHDATIN6R_INDAT1_Msk  (0xffff0000UL)            /*!< INDAT1 (Bitfield-Mask: 0xffff)                        */
/* ====================================================  DFSDM_CHDATIN7R  ==================================================== */
#define DFSDM_DFSDM_CHDATIN7R_INDAT0_Pos  (0UL)                     /*!< INDAT0 (Bit 0)                                        */
#define DFSDM_DFSDM_CHDATIN7R_INDAT0_Msk  (0xffffUL)                /*!< INDAT0 (Bitfield-Mask: 0xffff)                        */
#define DFSDM_DFSDM_CHDATIN7R_INDAT1_Pos  (16UL)                    /*!< INDAT1 (Bit 16)                                       */
#define DFSDM_DFSDM_CHDATIN7R_INDAT1_Msk  (0xffff0000UL)            /*!< INDAT1 (Bitfield-Mask: 0xffff)                        */
/* ======================================================  DFSDM0_CR1  ======================================================= */
#define DFSDM_DFSDM0_CR1_DFEN_Pos         (0UL)                     /*!< DFEN (Bit 0)                                          */
#define DFSDM_DFSDM0_CR1_DFEN_Msk         (0x1UL)                   /*!< DFEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM0_CR1_JSWSTART_Pos     (1UL)                     /*!< JSWSTART (Bit 1)                                      */
#define DFSDM_DFSDM0_CR1_JSWSTART_Msk     (0x2UL)                   /*!< JSWSTART (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM0_CR1_JSYNC_Pos        (3UL)                     /*!< JSYNC (Bit 3)                                         */
#define DFSDM_DFSDM0_CR1_JSYNC_Msk        (0x8UL)                   /*!< JSYNC (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM0_CR1_JSCAN_Pos        (4UL)                     /*!< JSCAN (Bit 4)                                         */
#define DFSDM_DFSDM0_CR1_JSCAN_Msk        (0x10UL)                  /*!< JSCAN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM0_CR1_JDMAEN_Pos       (5UL)                     /*!< JDMAEN (Bit 5)                                        */
#define DFSDM_DFSDM0_CR1_JDMAEN_Msk       (0x20UL)                  /*!< JDMAEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM0_CR1_JEXTSEL_Pos      (8UL)                     /*!< JEXTSEL (Bit 8)                                       */
#define DFSDM_DFSDM0_CR1_JEXTSEL_Msk      (0x1f00UL)                /*!< JEXTSEL (Bitfield-Mask: 0x1f)                         */
#define DFSDM_DFSDM0_CR1_JEXTEN_Pos       (13UL)                    /*!< JEXTEN (Bit 13)                                       */
#define DFSDM_DFSDM0_CR1_JEXTEN_Msk       (0x6000UL)                /*!< JEXTEN (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM0_CR1_RSWSTART_Pos     (17UL)                    /*!< RSWSTART (Bit 17)                                     */
#define DFSDM_DFSDM0_CR1_RSWSTART_Msk     (0x20000UL)               /*!< RSWSTART (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM0_CR1_RCONT_Pos        (18UL)                    /*!< RCONT (Bit 18)                                        */
#define DFSDM_DFSDM0_CR1_RCONT_Msk        (0x40000UL)               /*!< RCONT (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM0_CR1_RSYNC_Pos        (19UL)                    /*!< RSYNC (Bit 19)                                        */
#define DFSDM_DFSDM0_CR1_RSYNC_Msk        (0x80000UL)               /*!< RSYNC (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM0_CR1_RDMAEN_Pos       (21UL)                    /*!< RDMAEN (Bit 21)                                       */
#define DFSDM_DFSDM0_CR1_RDMAEN_Msk       (0x200000UL)              /*!< RDMAEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM0_CR1_RCH_Pos          (24UL)                    /*!< RCH (Bit 24)                                          */
#define DFSDM_DFSDM0_CR1_RCH_Msk          (0x7000000UL)             /*!< RCH (Bitfield-Mask: 0x07)                             */
#define DFSDM_DFSDM0_CR1_FAST_Pos         (29UL)                    /*!< FAST (Bit 29)                                         */
#define DFSDM_DFSDM0_CR1_FAST_Msk         (0x20000000UL)            /*!< FAST (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM0_CR1_AWFSEL_Pos       (30UL)                    /*!< AWFSEL (Bit 30)                                       */
#define DFSDM_DFSDM0_CR1_AWFSEL_Msk       (0x40000000UL)            /*!< AWFSEL (Bitfield-Mask: 0x01)                          */
/* ======================================================  DFSDM1_CR1  ======================================================= */
#define DFSDM_DFSDM1_CR1_DFEN_Pos         (0UL)                     /*!< DFEN (Bit 0)                                          */
#define DFSDM_DFSDM1_CR1_DFEN_Msk         (0x1UL)                   /*!< DFEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM1_CR1_JSWSTART_Pos     (1UL)                     /*!< JSWSTART (Bit 1)                                      */
#define DFSDM_DFSDM1_CR1_JSWSTART_Msk     (0x2UL)                   /*!< JSWSTART (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM1_CR1_JSYNC_Pos        (3UL)                     /*!< JSYNC (Bit 3)                                         */
#define DFSDM_DFSDM1_CR1_JSYNC_Msk        (0x8UL)                   /*!< JSYNC (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM1_CR1_JSCAN_Pos        (4UL)                     /*!< JSCAN (Bit 4)                                         */
#define DFSDM_DFSDM1_CR1_JSCAN_Msk        (0x10UL)                  /*!< JSCAN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM1_CR1_JDMAEN_Pos       (5UL)                     /*!< JDMAEN (Bit 5)                                        */
#define DFSDM_DFSDM1_CR1_JDMAEN_Msk       (0x20UL)                  /*!< JDMAEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM1_CR1_JEXTSEL_Pos      (8UL)                     /*!< JEXTSEL (Bit 8)                                       */
#define DFSDM_DFSDM1_CR1_JEXTSEL_Msk      (0x1f00UL)                /*!< JEXTSEL (Bitfield-Mask: 0x1f)                         */
#define DFSDM_DFSDM1_CR1_JEXTEN_Pos       (13UL)                    /*!< JEXTEN (Bit 13)                                       */
#define DFSDM_DFSDM1_CR1_JEXTEN_Msk       (0x6000UL)                /*!< JEXTEN (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM1_CR1_RSWSTART_Pos     (17UL)                    /*!< RSWSTART (Bit 17)                                     */
#define DFSDM_DFSDM1_CR1_RSWSTART_Msk     (0x20000UL)               /*!< RSWSTART (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM1_CR1_RCONT_Pos        (18UL)                    /*!< RCONT (Bit 18)                                        */
#define DFSDM_DFSDM1_CR1_RCONT_Msk        (0x40000UL)               /*!< RCONT (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM1_CR1_RSYNC_Pos        (19UL)                    /*!< RSYNC (Bit 19)                                        */
#define DFSDM_DFSDM1_CR1_RSYNC_Msk        (0x80000UL)               /*!< RSYNC (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM1_CR1_RDMAEN_Pos       (21UL)                    /*!< RDMAEN (Bit 21)                                       */
#define DFSDM_DFSDM1_CR1_RDMAEN_Msk       (0x200000UL)              /*!< RDMAEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM1_CR1_RCH_Pos          (24UL)                    /*!< RCH (Bit 24)                                          */
#define DFSDM_DFSDM1_CR1_RCH_Msk          (0x7000000UL)             /*!< RCH (Bitfield-Mask: 0x07)                             */
#define DFSDM_DFSDM1_CR1_FAST_Pos         (29UL)                    /*!< FAST (Bit 29)                                         */
#define DFSDM_DFSDM1_CR1_FAST_Msk         (0x20000000UL)            /*!< FAST (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM1_CR1_AWFSEL_Pos       (30UL)                    /*!< AWFSEL (Bit 30)                                       */
#define DFSDM_DFSDM1_CR1_AWFSEL_Msk       (0x40000000UL)            /*!< AWFSEL (Bitfield-Mask: 0x01)                          */
/* ======================================================  DFSDM2_CR1  ======================================================= */
#define DFSDM_DFSDM2_CR1_DFEN_Pos         (0UL)                     /*!< DFEN (Bit 0)                                          */
#define DFSDM_DFSDM2_CR1_DFEN_Msk         (0x1UL)                   /*!< DFEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM2_CR1_JSWSTART_Pos     (1UL)                     /*!< JSWSTART (Bit 1)                                      */
#define DFSDM_DFSDM2_CR1_JSWSTART_Msk     (0x2UL)                   /*!< JSWSTART (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM2_CR1_JSYNC_Pos        (3UL)                     /*!< JSYNC (Bit 3)                                         */
#define DFSDM_DFSDM2_CR1_JSYNC_Msk        (0x8UL)                   /*!< JSYNC (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM2_CR1_JSCAN_Pos        (4UL)                     /*!< JSCAN (Bit 4)                                         */
#define DFSDM_DFSDM2_CR1_JSCAN_Msk        (0x10UL)                  /*!< JSCAN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM2_CR1_JDMAEN_Pos       (5UL)                     /*!< JDMAEN (Bit 5)                                        */
#define DFSDM_DFSDM2_CR1_JDMAEN_Msk       (0x20UL)                  /*!< JDMAEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM2_CR1_JEXTSEL_Pos      (8UL)                     /*!< JEXTSEL (Bit 8)                                       */
#define DFSDM_DFSDM2_CR1_JEXTSEL_Msk      (0x1f00UL)                /*!< JEXTSEL (Bitfield-Mask: 0x1f)                         */
#define DFSDM_DFSDM2_CR1_JEXTEN_Pos       (13UL)                    /*!< JEXTEN (Bit 13)                                       */
#define DFSDM_DFSDM2_CR1_JEXTEN_Msk       (0x6000UL)                /*!< JEXTEN (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM2_CR1_RSWSTART_Pos     (17UL)                    /*!< RSWSTART (Bit 17)                                     */
#define DFSDM_DFSDM2_CR1_RSWSTART_Msk     (0x20000UL)               /*!< RSWSTART (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM2_CR1_RCONT_Pos        (18UL)                    /*!< RCONT (Bit 18)                                        */
#define DFSDM_DFSDM2_CR1_RCONT_Msk        (0x40000UL)               /*!< RCONT (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM2_CR1_RSYNC_Pos        (19UL)                    /*!< RSYNC (Bit 19)                                        */
#define DFSDM_DFSDM2_CR1_RSYNC_Msk        (0x80000UL)               /*!< RSYNC (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM2_CR1_RDMAEN_Pos       (21UL)                    /*!< RDMAEN (Bit 21)                                       */
#define DFSDM_DFSDM2_CR1_RDMAEN_Msk       (0x200000UL)              /*!< RDMAEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM2_CR1_RCH_Pos          (24UL)                    /*!< RCH (Bit 24)                                          */
#define DFSDM_DFSDM2_CR1_RCH_Msk          (0x7000000UL)             /*!< RCH (Bitfield-Mask: 0x07)                             */
#define DFSDM_DFSDM2_CR1_FAST_Pos         (29UL)                    /*!< FAST (Bit 29)                                         */
#define DFSDM_DFSDM2_CR1_FAST_Msk         (0x20000000UL)            /*!< FAST (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM2_CR1_AWFSEL_Pos       (30UL)                    /*!< AWFSEL (Bit 30)                                       */
#define DFSDM_DFSDM2_CR1_AWFSEL_Msk       (0x40000000UL)            /*!< AWFSEL (Bitfield-Mask: 0x01)                          */
/* ======================================================  DFSDM3_CR1  ======================================================= */
#define DFSDM_DFSDM3_CR1_DFEN_Pos         (0UL)                     /*!< DFEN (Bit 0)                                          */
#define DFSDM_DFSDM3_CR1_DFEN_Msk         (0x1UL)                   /*!< DFEN (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM3_CR1_JSWSTART_Pos     (1UL)                     /*!< JSWSTART (Bit 1)                                      */
#define DFSDM_DFSDM3_CR1_JSWSTART_Msk     (0x2UL)                   /*!< JSWSTART (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM3_CR1_JSYNC_Pos        (3UL)                     /*!< JSYNC (Bit 3)                                         */
#define DFSDM_DFSDM3_CR1_JSYNC_Msk        (0x8UL)                   /*!< JSYNC (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM3_CR1_JSCAN_Pos        (4UL)                     /*!< JSCAN (Bit 4)                                         */
#define DFSDM_DFSDM3_CR1_JSCAN_Msk        (0x10UL)                  /*!< JSCAN (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM3_CR1_JDMAEN_Pos       (5UL)                     /*!< JDMAEN (Bit 5)                                        */
#define DFSDM_DFSDM3_CR1_JDMAEN_Msk       (0x20UL)                  /*!< JDMAEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM3_CR1_JEXTSEL_Pos      (8UL)                     /*!< JEXTSEL (Bit 8)                                       */
#define DFSDM_DFSDM3_CR1_JEXTSEL_Msk      (0x1f00UL)                /*!< JEXTSEL (Bitfield-Mask: 0x1f)                         */
#define DFSDM_DFSDM3_CR1_JEXTEN_Pos       (13UL)                    /*!< JEXTEN (Bit 13)                                       */
#define DFSDM_DFSDM3_CR1_JEXTEN_Msk       (0x6000UL)                /*!< JEXTEN (Bitfield-Mask: 0x03)                          */
#define DFSDM_DFSDM3_CR1_RSWSTART_Pos     (17UL)                    /*!< RSWSTART (Bit 17)                                     */
#define DFSDM_DFSDM3_CR1_RSWSTART_Msk     (0x20000UL)               /*!< RSWSTART (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM3_CR1_RCONT_Pos        (18UL)                    /*!< RCONT (Bit 18)                                        */
#define DFSDM_DFSDM3_CR1_RCONT_Msk        (0x40000UL)               /*!< RCONT (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM3_CR1_RSYNC_Pos        (19UL)                    /*!< RSYNC (Bit 19)                                        */
#define DFSDM_DFSDM3_CR1_RSYNC_Msk        (0x80000UL)               /*!< RSYNC (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM3_CR1_RDMAEN_Pos       (21UL)                    /*!< RDMAEN (Bit 21)                                       */
#define DFSDM_DFSDM3_CR1_RDMAEN_Msk       (0x200000UL)              /*!< RDMAEN (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM3_CR1_RCH_Pos          (24UL)                    /*!< RCH (Bit 24)                                          */
#define DFSDM_DFSDM3_CR1_RCH_Msk          (0x7000000UL)             /*!< RCH (Bitfield-Mask: 0x07)                             */
#define DFSDM_DFSDM3_CR1_FAST_Pos         (29UL)                    /*!< FAST (Bit 29)                                         */
#define DFSDM_DFSDM3_CR1_FAST_Msk         (0x20000000UL)            /*!< FAST (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM3_CR1_AWFSEL_Pos       (30UL)                    /*!< AWFSEL (Bit 30)                                       */
#define DFSDM_DFSDM3_CR1_AWFSEL_Msk       (0x40000000UL)            /*!< AWFSEL (Bitfield-Mask: 0x01)                          */
/* ======================================================  DFSDM0_CR2  ======================================================= */
#define DFSDM_DFSDM0_CR2_JEOCIE_Pos       (0UL)                     /*!< JEOCIE (Bit 0)                                        */
#define DFSDM_DFSDM0_CR2_JEOCIE_Msk       (0x1UL)                   /*!< JEOCIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM0_CR2_REOCIE_Pos       (1UL)                     /*!< REOCIE (Bit 1)                                        */
#define DFSDM_DFSDM0_CR2_REOCIE_Msk       (0x2UL)                   /*!< REOCIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM0_CR2_JOVRIE_Pos       (2UL)                     /*!< JOVRIE (Bit 2)                                        */
#define DFSDM_DFSDM0_CR2_JOVRIE_Msk       (0x4UL)                   /*!< JOVRIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM0_CR2_ROVRIE_Pos       (3UL)                     /*!< ROVRIE (Bit 3)                                        */
#define DFSDM_DFSDM0_CR2_ROVRIE_Msk       (0x8UL)                   /*!< ROVRIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM0_CR2_AWDIE_Pos        (4UL)                     /*!< AWDIE (Bit 4)                                         */
#define DFSDM_DFSDM0_CR2_AWDIE_Msk        (0x10UL)                  /*!< AWDIE (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM0_CR2_SCDIE_Pos        (5UL)                     /*!< SCDIE (Bit 5)                                         */
#define DFSDM_DFSDM0_CR2_SCDIE_Msk        (0x20UL)                  /*!< SCDIE (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM0_CR2_CKABIE_Pos       (6UL)                     /*!< CKABIE (Bit 6)                                        */
#define DFSDM_DFSDM0_CR2_CKABIE_Msk       (0x40UL)                  /*!< CKABIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM0_CR2_EXCH_Pos         (8UL)                     /*!< EXCH (Bit 8)                                          */
#define DFSDM_DFSDM0_CR2_EXCH_Msk         (0xff00UL)                /*!< EXCH (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM0_CR2_AWDCH_Pos        (16UL)                    /*!< AWDCH (Bit 16)                                        */
#define DFSDM_DFSDM0_CR2_AWDCH_Msk        (0xff0000UL)              /*!< AWDCH (Bitfield-Mask: 0xff)                           */
/* ======================================================  DFSDM1_CR2  ======================================================= */
#define DFSDM_DFSDM1_CR2_JEOCIE_Pos       (0UL)                     /*!< JEOCIE (Bit 0)                                        */
#define DFSDM_DFSDM1_CR2_JEOCIE_Msk       (0x1UL)                   /*!< JEOCIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM1_CR2_REOCIE_Pos       (1UL)                     /*!< REOCIE (Bit 1)                                        */
#define DFSDM_DFSDM1_CR2_REOCIE_Msk       (0x2UL)                   /*!< REOCIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM1_CR2_JOVRIE_Pos       (2UL)                     /*!< JOVRIE (Bit 2)                                        */
#define DFSDM_DFSDM1_CR2_JOVRIE_Msk       (0x4UL)                   /*!< JOVRIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM1_CR2_ROVRIE_Pos       (3UL)                     /*!< ROVRIE (Bit 3)                                        */
#define DFSDM_DFSDM1_CR2_ROVRIE_Msk       (0x8UL)                   /*!< ROVRIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM1_CR2_AWDIE_Pos        (4UL)                     /*!< AWDIE (Bit 4)                                         */
#define DFSDM_DFSDM1_CR2_AWDIE_Msk        (0x10UL)                  /*!< AWDIE (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM1_CR2_SCDIE_Pos        (5UL)                     /*!< SCDIE (Bit 5)                                         */
#define DFSDM_DFSDM1_CR2_SCDIE_Msk        (0x20UL)                  /*!< SCDIE (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM1_CR2_CKABIE_Pos       (6UL)                     /*!< CKABIE (Bit 6)                                        */
#define DFSDM_DFSDM1_CR2_CKABIE_Msk       (0x40UL)                  /*!< CKABIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM1_CR2_EXCH_Pos         (8UL)                     /*!< EXCH (Bit 8)                                          */
#define DFSDM_DFSDM1_CR2_EXCH_Msk         (0xff00UL)                /*!< EXCH (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM1_CR2_AWDCH_Pos        (16UL)                    /*!< AWDCH (Bit 16)                                        */
#define DFSDM_DFSDM1_CR2_AWDCH_Msk        (0xff0000UL)              /*!< AWDCH (Bitfield-Mask: 0xff)                           */
/* ======================================================  DFSDM2_CR2  ======================================================= */
#define DFSDM_DFSDM2_CR2_JEOCIE_Pos       (0UL)                     /*!< JEOCIE (Bit 0)                                        */
#define DFSDM_DFSDM2_CR2_JEOCIE_Msk       (0x1UL)                   /*!< JEOCIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM2_CR2_REOCIE_Pos       (1UL)                     /*!< REOCIE (Bit 1)                                        */
#define DFSDM_DFSDM2_CR2_REOCIE_Msk       (0x2UL)                   /*!< REOCIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM2_CR2_JOVRIE_Pos       (2UL)                     /*!< JOVRIE (Bit 2)                                        */
#define DFSDM_DFSDM2_CR2_JOVRIE_Msk       (0x4UL)                   /*!< JOVRIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM2_CR2_ROVRIE_Pos       (3UL)                     /*!< ROVRIE (Bit 3)                                        */
#define DFSDM_DFSDM2_CR2_ROVRIE_Msk       (0x8UL)                   /*!< ROVRIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM2_CR2_AWDIE_Pos        (4UL)                     /*!< AWDIE (Bit 4)                                         */
#define DFSDM_DFSDM2_CR2_AWDIE_Msk        (0x10UL)                  /*!< AWDIE (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM2_CR2_SCDIE_Pos        (5UL)                     /*!< SCDIE (Bit 5)                                         */
#define DFSDM_DFSDM2_CR2_SCDIE_Msk        (0x20UL)                  /*!< SCDIE (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM2_CR2_CKABIE_Pos       (6UL)                     /*!< CKABIE (Bit 6)                                        */
#define DFSDM_DFSDM2_CR2_CKABIE_Msk       (0x40UL)                  /*!< CKABIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM2_CR2_EXCH_Pos         (8UL)                     /*!< EXCH (Bit 8)                                          */
#define DFSDM_DFSDM2_CR2_EXCH_Msk         (0xff00UL)                /*!< EXCH (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM2_CR2_AWDCH_Pos        (16UL)                    /*!< AWDCH (Bit 16)                                        */
#define DFSDM_DFSDM2_CR2_AWDCH_Msk        (0xff0000UL)              /*!< AWDCH (Bitfield-Mask: 0xff)                           */
/* ======================================================  DFSDM3_CR2  ======================================================= */
#define DFSDM_DFSDM3_CR2_JEOCIE_Pos       (0UL)                     /*!< JEOCIE (Bit 0)                                        */
#define DFSDM_DFSDM3_CR2_JEOCIE_Msk       (0x1UL)                   /*!< JEOCIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM3_CR2_REOCIE_Pos       (1UL)                     /*!< REOCIE (Bit 1)                                        */
#define DFSDM_DFSDM3_CR2_REOCIE_Msk       (0x2UL)                   /*!< REOCIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM3_CR2_JOVRIE_Pos       (2UL)                     /*!< JOVRIE (Bit 2)                                        */
#define DFSDM_DFSDM3_CR2_JOVRIE_Msk       (0x4UL)                   /*!< JOVRIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM3_CR2_ROVRIE_Pos       (3UL)                     /*!< ROVRIE (Bit 3)                                        */
#define DFSDM_DFSDM3_CR2_ROVRIE_Msk       (0x8UL)                   /*!< ROVRIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM3_CR2_AWDIE_Pos        (4UL)                     /*!< AWDIE (Bit 4)                                         */
#define DFSDM_DFSDM3_CR2_AWDIE_Msk        (0x10UL)                  /*!< AWDIE (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM3_CR2_SCDIE_Pos        (5UL)                     /*!< SCDIE (Bit 5)                                         */
#define DFSDM_DFSDM3_CR2_SCDIE_Msk        (0x20UL)                  /*!< SCDIE (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM3_CR2_CKABIE_Pos       (6UL)                     /*!< CKABIE (Bit 6)                                        */
#define DFSDM_DFSDM3_CR2_CKABIE_Msk       (0x40UL)                  /*!< CKABIE (Bitfield-Mask: 0x01)                          */
#define DFSDM_DFSDM3_CR2_EXCH_Pos         (8UL)                     /*!< EXCH (Bit 8)                                          */
#define DFSDM_DFSDM3_CR2_EXCH_Msk         (0xff00UL)                /*!< EXCH (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM3_CR2_AWDCH_Pos        (16UL)                    /*!< AWDCH (Bit 16)                                        */
#define DFSDM_DFSDM3_CR2_AWDCH_Msk        (0xff0000UL)              /*!< AWDCH (Bitfield-Mask: 0xff)                           */
/* ======================================================  DFSDM0_ISR  ======================================================= */
#define DFSDM_DFSDM0_ISR_JEOCF_Pos        (0UL)                     /*!< JEOCF (Bit 0)                                         */
#define DFSDM_DFSDM0_ISR_JEOCF_Msk        (0x1UL)                   /*!< JEOCF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM0_ISR_REOCF_Pos        (1UL)                     /*!< REOCF (Bit 1)                                         */
#define DFSDM_DFSDM0_ISR_REOCF_Msk        (0x2UL)                   /*!< REOCF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM0_ISR_JOVRF_Pos        (2UL)                     /*!< JOVRF (Bit 2)                                         */
#define DFSDM_DFSDM0_ISR_JOVRF_Msk        (0x4UL)                   /*!< JOVRF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM0_ISR_ROVRF_Pos        (3UL)                     /*!< ROVRF (Bit 3)                                         */
#define DFSDM_DFSDM0_ISR_ROVRF_Msk        (0x8UL)                   /*!< ROVRF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM0_ISR_AWDF_Pos         (4UL)                     /*!< AWDF (Bit 4)                                          */
#define DFSDM_DFSDM0_ISR_AWDF_Msk         (0x10UL)                  /*!< AWDF (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM0_ISR_JCIP_Pos         (13UL)                    /*!< JCIP (Bit 13)                                         */
#define DFSDM_DFSDM0_ISR_JCIP_Msk         (0x2000UL)                /*!< JCIP (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM0_ISR_RCIP_Pos         (14UL)                    /*!< RCIP (Bit 14)                                         */
#define DFSDM_DFSDM0_ISR_RCIP_Msk         (0x4000UL)                /*!< RCIP (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM0_ISR_CKABF_Pos        (16UL)                    /*!< CKABF (Bit 16)                                        */
#define DFSDM_DFSDM0_ISR_CKABF_Msk        (0xff0000UL)              /*!< CKABF (Bitfield-Mask: 0xff)                           */
#define DFSDM_DFSDM0_ISR_SCDF_Pos         (24UL)                    /*!< SCDF (Bit 24)                                         */
#define DFSDM_DFSDM0_ISR_SCDF_Msk         (0xff000000UL)            /*!< SCDF (Bitfield-Mask: 0xff)                            */
/* ======================================================  DFSDM1_ISR  ======================================================= */
#define DFSDM_DFSDM1_ISR_JEOCF_Pos        (0UL)                     /*!< JEOCF (Bit 0)                                         */
#define DFSDM_DFSDM1_ISR_JEOCF_Msk        (0x1UL)                   /*!< JEOCF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM1_ISR_REOCF_Pos        (1UL)                     /*!< REOCF (Bit 1)                                         */
#define DFSDM_DFSDM1_ISR_REOCF_Msk        (0x2UL)                   /*!< REOCF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM1_ISR_JOVRF_Pos        (2UL)                     /*!< JOVRF (Bit 2)                                         */
#define DFSDM_DFSDM1_ISR_JOVRF_Msk        (0x4UL)                   /*!< JOVRF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM1_ISR_ROVRF_Pos        (3UL)                     /*!< ROVRF (Bit 3)                                         */
#define DFSDM_DFSDM1_ISR_ROVRF_Msk        (0x8UL)                   /*!< ROVRF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM1_ISR_AWDF_Pos         (4UL)                     /*!< AWDF (Bit 4)                                          */
#define DFSDM_DFSDM1_ISR_AWDF_Msk         (0x10UL)                  /*!< AWDF (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM1_ISR_JCIP_Pos         (13UL)                    /*!< JCIP (Bit 13)                                         */
#define DFSDM_DFSDM1_ISR_JCIP_Msk         (0x2000UL)                /*!< JCIP (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM1_ISR_RCIP_Pos         (14UL)                    /*!< RCIP (Bit 14)                                         */
#define DFSDM_DFSDM1_ISR_RCIP_Msk         (0x4000UL)                /*!< RCIP (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM1_ISR_CKABF_Pos        (16UL)                    /*!< CKABF (Bit 16)                                        */
#define DFSDM_DFSDM1_ISR_CKABF_Msk        (0xff0000UL)              /*!< CKABF (Bitfield-Mask: 0xff)                           */
#define DFSDM_DFSDM1_ISR_SCDF_Pos         (24UL)                    /*!< SCDF (Bit 24)                                         */
#define DFSDM_DFSDM1_ISR_SCDF_Msk         (0xff000000UL)            /*!< SCDF (Bitfield-Mask: 0xff)                            */
/* ======================================================  DFSDM2_ISR  ======================================================= */
#define DFSDM_DFSDM2_ISR_JEOCF_Pos        (0UL)                     /*!< JEOCF (Bit 0)                                         */
#define DFSDM_DFSDM2_ISR_JEOCF_Msk        (0x1UL)                   /*!< JEOCF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM2_ISR_REOCF_Pos        (1UL)                     /*!< REOCF (Bit 1)                                         */
#define DFSDM_DFSDM2_ISR_REOCF_Msk        (0x2UL)                   /*!< REOCF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM2_ISR_JOVRF_Pos        (2UL)                     /*!< JOVRF (Bit 2)                                         */
#define DFSDM_DFSDM2_ISR_JOVRF_Msk        (0x4UL)                   /*!< JOVRF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM2_ISR_ROVRF_Pos        (3UL)                     /*!< ROVRF (Bit 3)                                         */
#define DFSDM_DFSDM2_ISR_ROVRF_Msk        (0x8UL)                   /*!< ROVRF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM2_ISR_AWDF_Pos         (4UL)                     /*!< AWDF (Bit 4)                                          */
#define DFSDM_DFSDM2_ISR_AWDF_Msk         (0x10UL)                  /*!< AWDF (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM2_ISR_JCIP_Pos         (13UL)                    /*!< JCIP (Bit 13)                                         */
#define DFSDM_DFSDM2_ISR_JCIP_Msk         (0x2000UL)                /*!< JCIP (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM2_ISR_RCIP_Pos         (14UL)                    /*!< RCIP (Bit 14)                                         */
#define DFSDM_DFSDM2_ISR_RCIP_Msk         (0x4000UL)                /*!< RCIP (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM2_ISR_CKABF_Pos        (16UL)                    /*!< CKABF (Bit 16)                                        */
#define DFSDM_DFSDM2_ISR_CKABF_Msk        (0xff0000UL)              /*!< CKABF (Bitfield-Mask: 0xff)                           */
#define DFSDM_DFSDM2_ISR_SCDF_Pos         (24UL)                    /*!< SCDF (Bit 24)                                         */
#define DFSDM_DFSDM2_ISR_SCDF_Msk         (0xff000000UL)            /*!< SCDF (Bitfield-Mask: 0xff)                            */
/* ======================================================  DFSDM3_ISR  ======================================================= */
#define DFSDM_DFSDM3_ISR_JEOCF_Pos        (0UL)                     /*!< JEOCF (Bit 0)                                         */
#define DFSDM_DFSDM3_ISR_JEOCF_Msk        (0x1UL)                   /*!< JEOCF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM3_ISR_REOCF_Pos        (1UL)                     /*!< REOCF (Bit 1)                                         */
#define DFSDM_DFSDM3_ISR_REOCF_Msk        (0x2UL)                   /*!< REOCF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM3_ISR_JOVRF_Pos        (2UL)                     /*!< JOVRF (Bit 2)                                         */
#define DFSDM_DFSDM3_ISR_JOVRF_Msk        (0x4UL)                   /*!< JOVRF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM3_ISR_ROVRF_Pos        (3UL)                     /*!< ROVRF (Bit 3)                                         */
#define DFSDM_DFSDM3_ISR_ROVRF_Msk        (0x8UL)                   /*!< ROVRF (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM3_ISR_AWDF_Pos         (4UL)                     /*!< AWDF (Bit 4)                                          */
#define DFSDM_DFSDM3_ISR_AWDF_Msk         (0x10UL)                  /*!< AWDF (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM3_ISR_JCIP_Pos         (13UL)                    /*!< JCIP (Bit 13)                                         */
#define DFSDM_DFSDM3_ISR_JCIP_Msk         (0x2000UL)                /*!< JCIP (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM3_ISR_RCIP_Pos         (14UL)                    /*!< RCIP (Bit 14)                                         */
#define DFSDM_DFSDM3_ISR_RCIP_Msk         (0x4000UL)                /*!< RCIP (Bitfield-Mask: 0x01)                            */
#define DFSDM_DFSDM3_ISR_CKABF_Pos        (16UL)                    /*!< CKABF (Bit 16)                                        */
#define DFSDM_DFSDM3_ISR_CKABF_Msk        (0xff0000UL)              /*!< CKABF (Bitfield-Mask: 0xff)                           */
#define DFSDM_DFSDM3_ISR_SCDF_Pos         (24UL)                    /*!< SCDF (Bit 24)                                         */
#define DFSDM_DFSDM3_ISR_SCDF_Msk         (0xff000000UL)            /*!< SCDF (Bitfield-Mask: 0xff)                            */
/* ======================================================  DFSDM0_ICR  ======================================================= */
#define DFSDM_DFSDM0_ICR_CLRJOVRF_Pos     (2UL)                     /*!< CLRJOVRF (Bit 2)                                      */
#define DFSDM_DFSDM0_ICR_CLRJOVRF_Msk     (0x4UL)                   /*!< CLRJOVRF (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM0_ICR_CLRROVRF_Pos     (3UL)                     /*!< CLRROVRF (Bit 3)                                      */
#define DFSDM_DFSDM0_ICR_CLRROVRF_Msk     (0x8UL)                   /*!< CLRROVRF (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM0_ICR_CLRCKABF_Pos     (16UL)                    /*!< CLRCKABF (Bit 16)                                     */
#define DFSDM_DFSDM0_ICR_CLRCKABF_Msk     (0xff0000UL)              /*!< CLRCKABF (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM0_ICR_CLRSCDF_Pos      (24UL)                    /*!< CLRSCDF (Bit 24)                                      */
#define DFSDM_DFSDM0_ICR_CLRSCDF_Msk      (0xff000000UL)            /*!< CLRSCDF (Bitfield-Mask: 0xff)                         */
/* ======================================================  DFSDM1_ICR  ======================================================= */
#define DFSDM_DFSDM1_ICR_CLRJOVRF_Pos     (2UL)                     /*!< CLRJOVRF (Bit 2)                                      */
#define DFSDM_DFSDM1_ICR_CLRJOVRF_Msk     (0x4UL)                   /*!< CLRJOVRF (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM1_ICR_CLRROVRF_Pos     (3UL)                     /*!< CLRROVRF (Bit 3)                                      */
#define DFSDM_DFSDM1_ICR_CLRROVRF_Msk     (0x8UL)                   /*!< CLRROVRF (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM1_ICR_CLRCKABF_Pos     (16UL)                    /*!< CLRCKABF (Bit 16)                                     */
#define DFSDM_DFSDM1_ICR_CLRCKABF_Msk     (0xff0000UL)              /*!< CLRCKABF (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM1_ICR_CLRSCDF_Pos      (24UL)                    /*!< CLRSCDF (Bit 24)                                      */
#define DFSDM_DFSDM1_ICR_CLRSCDF_Msk      (0xff000000UL)            /*!< CLRSCDF (Bitfield-Mask: 0xff)                         */
/* ======================================================  DFSDM2_ICR  ======================================================= */
#define DFSDM_DFSDM2_ICR_CLRJOVRF_Pos     (2UL)                     /*!< CLRJOVRF (Bit 2)                                      */
#define DFSDM_DFSDM2_ICR_CLRJOVRF_Msk     (0x4UL)                   /*!< CLRJOVRF (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM2_ICR_CLRROVRF_Pos     (3UL)                     /*!< CLRROVRF (Bit 3)                                      */
#define DFSDM_DFSDM2_ICR_CLRROVRF_Msk     (0x8UL)                   /*!< CLRROVRF (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM2_ICR_CLRCKABF_Pos     (16UL)                    /*!< CLRCKABF (Bit 16)                                     */
#define DFSDM_DFSDM2_ICR_CLRCKABF_Msk     (0xff0000UL)              /*!< CLRCKABF (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM2_ICR_CLRSCDF_Pos      (24UL)                    /*!< CLRSCDF (Bit 24)                                      */
#define DFSDM_DFSDM2_ICR_CLRSCDF_Msk      (0xff000000UL)            /*!< CLRSCDF (Bitfield-Mask: 0xff)                         */
/* ======================================================  DFSDM3_ICR  ======================================================= */
#define DFSDM_DFSDM3_ICR_CLRJOVRF_Pos     (2UL)                     /*!< CLRJOVRF (Bit 2)                                      */
#define DFSDM_DFSDM3_ICR_CLRJOVRF_Msk     (0x4UL)                   /*!< CLRJOVRF (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM3_ICR_CLRROVRF_Pos     (3UL)                     /*!< CLRROVRF (Bit 3)                                      */
#define DFSDM_DFSDM3_ICR_CLRROVRF_Msk     (0x8UL)                   /*!< CLRROVRF (Bitfield-Mask: 0x01)                        */
#define DFSDM_DFSDM3_ICR_CLRCKABF_Pos     (16UL)                    /*!< CLRCKABF (Bit 16)                                     */
#define DFSDM_DFSDM3_ICR_CLRCKABF_Msk     (0xff0000UL)              /*!< CLRCKABF (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM3_ICR_CLRSCDF_Pos      (24UL)                    /*!< CLRSCDF (Bit 24)                                      */
#define DFSDM_DFSDM3_ICR_CLRSCDF_Msk      (0xff000000UL)            /*!< CLRSCDF (Bitfield-Mask: 0xff)                         */
/* =====================================================  DFSDM0_JCHGR  ====================================================== */
#define DFSDM_DFSDM0_JCHGR_JCHG_Pos       (0UL)                     /*!< JCHG (Bit 0)                                          */
#define DFSDM_DFSDM0_JCHGR_JCHG_Msk       (0xffUL)                  /*!< JCHG (Bitfield-Mask: 0xff)                            */
/* =====================================================  DFSDM1_JCHGR  ====================================================== */
#define DFSDM_DFSDM1_JCHGR_JCHG_Pos       (0UL)                     /*!< JCHG (Bit 0)                                          */
#define DFSDM_DFSDM1_JCHGR_JCHG_Msk       (0xffUL)                  /*!< JCHG (Bitfield-Mask: 0xff)                            */
/* =====================================================  DFSDM2_JCHGR  ====================================================== */
#define DFSDM_DFSDM2_JCHGR_JCHG_Pos       (0UL)                     /*!< JCHG (Bit 0)                                          */
#define DFSDM_DFSDM2_JCHGR_JCHG_Msk       (0xffUL)                  /*!< JCHG (Bitfield-Mask: 0xff)                            */
/* =====================================================  DFSDM3_JCHGR  ====================================================== */
#define DFSDM_DFSDM3_JCHGR_JCHG_Pos       (0UL)                     /*!< JCHG (Bit 0)                                          */
#define DFSDM_DFSDM3_JCHGR_JCHG_Msk       (0xffUL)                  /*!< JCHG (Bitfield-Mask: 0xff)                            */
/* ======================================================  DFSDM0_FCR  ======================================================= */
#define DFSDM_DFSDM0_FCR_IOSR_Pos         (0UL)                     /*!< IOSR (Bit 0)                                          */
#define DFSDM_DFSDM0_FCR_IOSR_Msk         (0xffUL)                  /*!< IOSR (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM0_FCR_FOSR_Pos         (16UL)                    /*!< FOSR (Bit 16)                                         */
#define DFSDM_DFSDM0_FCR_FOSR_Msk         (0x3ff0000UL)             /*!< FOSR (Bitfield-Mask: 0x3ff)                           */
#define DFSDM_DFSDM0_FCR_FORD_Pos         (29UL)                    /*!< FORD (Bit 29)                                         */
#define DFSDM_DFSDM0_FCR_FORD_Msk         (0xe0000000UL)            /*!< FORD (Bitfield-Mask: 0x07)                            */
/* ======================================================  DFSDM1_FCR  ======================================================= */
#define DFSDM_DFSDM1_FCR_IOSR_Pos         (0UL)                     /*!< IOSR (Bit 0)                                          */
#define DFSDM_DFSDM1_FCR_IOSR_Msk         (0xffUL)                  /*!< IOSR (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM1_FCR_FOSR_Pos         (16UL)                    /*!< FOSR (Bit 16)                                         */
#define DFSDM_DFSDM1_FCR_FOSR_Msk         (0x3ff0000UL)             /*!< FOSR (Bitfield-Mask: 0x3ff)                           */
#define DFSDM_DFSDM1_FCR_FORD_Pos         (29UL)                    /*!< FORD (Bit 29)                                         */
#define DFSDM_DFSDM1_FCR_FORD_Msk         (0xe0000000UL)            /*!< FORD (Bitfield-Mask: 0x07)                            */
/* ======================================================  DFSDM2_FCR  ======================================================= */
#define DFSDM_DFSDM2_FCR_IOSR_Pos         (0UL)                     /*!< IOSR (Bit 0)                                          */
#define DFSDM_DFSDM2_FCR_IOSR_Msk         (0xffUL)                  /*!< IOSR (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM2_FCR_FOSR_Pos         (16UL)                    /*!< FOSR (Bit 16)                                         */
#define DFSDM_DFSDM2_FCR_FOSR_Msk         (0x3ff0000UL)             /*!< FOSR (Bitfield-Mask: 0x3ff)                           */
#define DFSDM_DFSDM2_FCR_FORD_Pos         (29UL)                    /*!< FORD (Bit 29)                                         */
#define DFSDM_DFSDM2_FCR_FORD_Msk         (0xe0000000UL)            /*!< FORD (Bitfield-Mask: 0x07)                            */
/* ======================================================  DFSDM3_FCR  ======================================================= */
#define DFSDM_DFSDM3_FCR_IOSR_Pos         (0UL)                     /*!< IOSR (Bit 0)                                          */
#define DFSDM_DFSDM3_FCR_IOSR_Msk         (0xffUL)                  /*!< IOSR (Bitfield-Mask: 0xff)                            */
#define DFSDM_DFSDM3_FCR_FOSR_Pos         (16UL)                    /*!< FOSR (Bit 16)                                         */
#define DFSDM_DFSDM3_FCR_FOSR_Msk         (0x3ff0000UL)             /*!< FOSR (Bitfield-Mask: 0x3ff)                           */
#define DFSDM_DFSDM3_FCR_FORD_Pos         (29UL)                    /*!< FORD (Bit 29)                                         */
#define DFSDM_DFSDM3_FCR_FORD_Msk         (0xe0000000UL)            /*!< FORD (Bitfield-Mask: 0x07)                            */
/* =====================================================  DFSDM0_JDATAR  ===================================================== */
#define DFSDM_DFSDM0_JDATAR_JDATACH_Pos   (0UL)                     /*!< JDATACH (Bit 0)                                       */
#define DFSDM_DFSDM0_JDATAR_JDATACH_Msk   (0x7UL)                   /*!< JDATACH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM0_JDATAR_JDATA_Pos     (8UL)                     /*!< JDATA (Bit 8)                                         */
#define DFSDM_DFSDM0_JDATAR_JDATA_Msk     (0xffffff00UL)            /*!< JDATA (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM1_JDATAR  ===================================================== */
#define DFSDM_DFSDM1_JDATAR_JDATACH_Pos   (0UL)                     /*!< JDATACH (Bit 0)                                       */
#define DFSDM_DFSDM1_JDATAR_JDATACH_Msk   (0x7UL)                   /*!< JDATACH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM1_JDATAR_JDATA_Pos     (8UL)                     /*!< JDATA (Bit 8)                                         */
#define DFSDM_DFSDM1_JDATAR_JDATA_Msk     (0xffffff00UL)            /*!< JDATA (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM2_JDATAR  ===================================================== */
#define DFSDM_DFSDM2_JDATAR_JDATACH_Pos   (0UL)                     /*!< JDATACH (Bit 0)                                       */
#define DFSDM_DFSDM2_JDATAR_JDATACH_Msk   (0x7UL)                   /*!< JDATACH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM2_JDATAR_JDATA_Pos     (8UL)                     /*!< JDATA (Bit 8)                                         */
#define DFSDM_DFSDM2_JDATAR_JDATA_Msk     (0xffffff00UL)            /*!< JDATA (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM3_JDATAR  ===================================================== */
#define DFSDM_DFSDM3_JDATAR_JDATACH_Pos   (0UL)                     /*!< JDATACH (Bit 0)                                       */
#define DFSDM_DFSDM3_JDATAR_JDATACH_Msk   (0x7UL)                   /*!< JDATACH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM3_JDATAR_JDATA_Pos     (8UL)                     /*!< JDATA (Bit 8)                                         */
#define DFSDM_DFSDM3_JDATAR_JDATA_Msk     (0xffffff00UL)            /*!< JDATA (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM0_RDATAR  ===================================================== */
#define DFSDM_DFSDM0_RDATAR_RDATACH_Pos   (0UL)                     /*!< RDATACH (Bit 0)                                       */
#define DFSDM_DFSDM0_RDATAR_RDATACH_Msk   (0x7UL)                   /*!< RDATACH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM0_RDATAR_RPEND_Pos     (4UL)                     /*!< RPEND (Bit 4)                                         */
#define DFSDM_DFSDM0_RDATAR_RPEND_Msk     (0x10UL)                  /*!< RPEND (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM0_RDATAR_RDATA_Pos     (8UL)                     /*!< RDATA (Bit 8)                                         */
#define DFSDM_DFSDM0_RDATAR_RDATA_Msk     (0xffffff00UL)            /*!< RDATA (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM1_RDATAR  ===================================================== */
#define DFSDM_DFSDM1_RDATAR_RDATACH_Pos   (0UL)                     /*!< RDATACH (Bit 0)                                       */
#define DFSDM_DFSDM1_RDATAR_RDATACH_Msk   (0x7UL)                   /*!< RDATACH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM1_RDATAR_RPEND_Pos     (4UL)                     /*!< RPEND (Bit 4)                                         */
#define DFSDM_DFSDM1_RDATAR_RPEND_Msk     (0x10UL)                  /*!< RPEND (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM1_RDATAR_RDATA_Pos     (8UL)                     /*!< RDATA (Bit 8)                                         */
#define DFSDM_DFSDM1_RDATAR_RDATA_Msk     (0xffffff00UL)            /*!< RDATA (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM2_RDATAR  ===================================================== */
#define DFSDM_DFSDM2_RDATAR_RDATACH_Pos   (0UL)                     /*!< RDATACH (Bit 0)                                       */
#define DFSDM_DFSDM2_RDATAR_RDATACH_Msk   (0x7UL)                   /*!< RDATACH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM2_RDATAR_RPEND_Pos     (4UL)                     /*!< RPEND (Bit 4)                                         */
#define DFSDM_DFSDM2_RDATAR_RPEND_Msk     (0x10UL)                  /*!< RPEND (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM2_RDATAR_RDATA_Pos     (8UL)                     /*!< RDATA (Bit 8)                                         */
#define DFSDM_DFSDM2_RDATAR_RDATA_Msk     (0xffffff00UL)            /*!< RDATA (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM3_RDATAR  ===================================================== */
#define DFSDM_DFSDM3_RDATAR_RDATACH_Pos   (0UL)                     /*!< RDATACH (Bit 0)                                       */
#define DFSDM_DFSDM3_RDATAR_RDATACH_Msk   (0x7UL)                   /*!< RDATACH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM3_RDATAR_RPEND_Pos     (4UL)                     /*!< RPEND (Bit 4)                                         */
#define DFSDM_DFSDM3_RDATAR_RPEND_Msk     (0x10UL)                  /*!< RPEND (Bitfield-Mask: 0x01)                           */
#define DFSDM_DFSDM3_RDATAR_RDATA_Pos     (8UL)                     /*!< RDATA (Bit 8)                                         */
#define DFSDM_DFSDM3_RDATAR_RDATA_Msk     (0xffffff00UL)            /*!< RDATA (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM0_AWHTR  ====================================================== */
#define DFSDM_DFSDM0_AWHTR_BKAWH_Pos      (0UL)                     /*!< BKAWH (Bit 0)                                         */
#define DFSDM_DFSDM0_AWHTR_BKAWH_Msk      (0xfUL)                   /*!< BKAWH (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM0_AWHTR_AWHT_Pos       (8UL)                     /*!< AWHT (Bit 8)                                          */
#define DFSDM_DFSDM0_AWHTR_AWHT_Msk       (0xffffff00UL)            /*!< AWHT (Bitfield-Mask: 0xffffff)                        */
/* =====================================================  DFSDM1_AWHTR  ====================================================== */
#define DFSDM_DFSDM1_AWHTR_BKAWH_Pos      (0UL)                     /*!< BKAWH (Bit 0)                                         */
#define DFSDM_DFSDM1_AWHTR_BKAWH_Msk      (0xfUL)                   /*!< BKAWH (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM1_AWHTR_AWHT_Pos       (8UL)                     /*!< AWHT (Bit 8)                                          */
#define DFSDM_DFSDM1_AWHTR_AWHT_Msk       (0xffffff00UL)            /*!< AWHT (Bitfield-Mask: 0xffffff)                        */
/* =====================================================  DFSDM2_AWHTR  ====================================================== */
#define DFSDM_DFSDM2_AWHTR_BKAWH_Pos      (0UL)                     /*!< BKAWH (Bit 0)                                         */
#define DFSDM_DFSDM2_AWHTR_BKAWH_Msk      (0xfUL)                   /*!< BKAWH (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM2_AWHTR_AWHT_Pos       (8UL)                     /*!< AWHT (Bit 8)                                          */
#define DFSDM_DFSDM2_AWHTR_AWHT_Msk       (0xffffff00UL)            /*!< AWHT (Bitfield-Mask: 0xffffff)                        */
/* =====================================================  DFSDM3_AWHTR  ====================================================== */
#define DFSDM_DFSDM3_AWHTR_BKAWH_Pos      (0UL)                     /*!< BKAWH (Bit 0)                                         */
#define DFSDM_DFSDM3_AWHTR_BKAWH_Msk      (0xfUL)                   /*!< BKAWH (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM3_AWHTR_AWHT_Pos       (8UL)                     /*!< AWHT (Bit 8)                                          */
#define DFSDM_DFSDM3_AWHTR_AWHT_Msk       (0xffffff00UL)            /*!< AWHT (Bitfield-Mask: 0xffffff)                        */
/* =====================================================  DFSDM0_AWLTR  ====================================================== */
#define DFSDM_DFSDM0_AWLTR_BKAWL_Pos      (0UL)                     /*!< BKAWL (Bit 0)                                         */
#define DFSDM_DFSDM0_AWLTR_BKAWL_Msk      (0xfUL)                   /*!< BKAWL (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM0_AWLTR_AWLT_Pos       (8UL)                     /*!< AWLT (Bit 8)                                          */
#define DFSDM_DFSDM0_AWLTR_AWLT_Msk       (0xffffff00UL)            /*!< AWLT (Bitfield-Mask: 0xffffff)                        */
/* =====================================================  DFSDM1_AWLTR  ====================================================== */
#define DFSDM_DFSDM1_AWLTR_BKAWL_Pos      (0UL)                     /*!< BKAWL (Bit 0)                                         */
#define DFSDM_DFSDM1_AWLTR_BKAWL_Msk      (0xfUL)                   /*!< BKAWL (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM1_AWLTR_AWLT_Pos       (8UL)                     /*!< AWLT (Bit 8)                                          */
#define DFSDM_DFSDM1_AWLTR_AWLT_Msk       (0xffffff00UL)            /*!< AWLT (Bitfield-Mask: 0xffffff)                        */
/* =====================================================  DFSDM2_AWLTR  ====================================================== */
#define DFSDM_DFSDM2_AWLTR_BKAWL_Pos      (0UL)                     /*!< BKAWL (Bit 0)                                         */
#define DFSDM_DFSDM2_AWLTR_BKAWL_Msk      (0xfUL)                   /*!< BKAWL (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM2_AWLTR_AWLT_Pos       (8UL)                     /*!< AWLT (Bit 8)                                          */
#define DFSDM_DFSDM2_AWLTR_AWLT_Msk       (0xffffff00UL)            /*!< AWLT (Bitfield-Mask: 0xffffff)                        */
/* =====================================================  DFSDM3_AWLTR  ====================================================== */
#define DFSDM_DFSDM3_AWLTR_BKAWL_Pos      (0UL)                     /*!< BKAWL (Bit 0)                                         */
#define DFSDM_DFSDM3_AWLTR_BKAWL_Msk      (0xfUL)                   /*!< BKAWL (Bitfield-Mask: 0x0f)                           */
#define DFSDM_DFSDM3_AWLTR_AWLT_Pos       (8UL)                     /*!< AWLT (Bit 8)                                          */
#define DFSDM_DFSDM3_AWLTR_AWLT_Msk       (0xffffff00UL)            /*!< AWLT (Bitfield-Mask: 0xffffff)                        */
/* ======================================================  DFSDM0_AWSR  ====================================================== */
#define DFSDM_DFSDM0_AWSR_AWLTF_Pos       (0UL)                     /*!< AWLTF (Bit 0)                                         */
#define DFSDM_DFSDM0_AWSR_AWLTF_Msk       (0xffUL)                  /*!< AWLTF (Bitfield-Mask: 0xff)                           */
#define DFSDM_DFSDM0_AWSR_AWHTF_Pos       (8UL)                     /*!< AWHTF (Bit 8)                                         */
#define DFSDM_DFSDM0_AWSR_AWHTF_Msk       (0xff00UL)                /*!< AWHTF (Bitfield-Mask: 0xff)                           */
/* ======================================================  DFSDM1_AWSR  ====================================================== */
#define DFSDM_DFSDM1_AWSR_AWLTF_Pos       (0UL)                     /*!< AWLTF (Bit 0)                                         */
#define DFSDM_DFSDM1_AWSR_AWLTF_Msk       (0xffUL)                  /*!< AWLTF (Bitfield-Mask: 0xff)                           */
#define DFSDM_DFSDM1_AWSR_AWHTF_Pos       (8UL)                     /*!< AWHTF (Bit 8)                                         */
#define DFSDM_DFSDM1_AWSR_AWHTF_Msk       (0xff00UL)                /*!< AWHTF (Bitfield-Mask: 0xff)                           */
/* ======================================================  DFSDM2_AWSR  ====================================================== */
#define DFSDM_DFSDM2_AWSR_AWLTF_Pos       (0UL)                     /*!< AWLTF (Bit 0)                                         */
#define DFSDM_DFSDM2_AWSR_AWLTF_Msk       (0xffUL)                  /*!< AWLTF (Bitfield-Mask: 0xff)                           */
#define DFSDM_DFSDM2_AWSR_AWHTF_Pos       (8UL)                     /*!< AWHTF (Bit 8)                                         */
#define DFSDM_DFSDM2_AWSR_AWHTF_Msk       (0xff00UL)                /*!< AWHTF (Bitfield-Mask: 0xff)                           */
/* ======================================================  DFSDM3_AWSR  ====================================================== */
#define DFSDM_DFSDM3_AWSR_AWLTF_Pos       (0UL)                     /*!< AWLTF (Bit 0)                                         */
#define DFSDM_DFSDM3_AWSR_AWLTF_Msk       (0xffUL)                  /*!< AWLTF (Bitfield-Mask: 0xff)                           */
#define DFSDM_DFSDM3_AWSR_AWHTF_Pos       (8UL)                     /*!< AWHTF (Bit 8)                                         */
#define DFSDM_DFSDM3_AWSR_AWHTF_Msk       (0xff00UL)                /*!< AWHTF (Bitfield-Mask: 0xff)                           */
/* =====================================================  DFSDM0_AWCFR  ====================================================== */
#define DFSDM_DFSDM0_AWCFR_CLRAWLTF_Pos   (0UL)                     /*!< CLRAWLTF (Bit 0)                                      */
#define DFSDM_DFSDM0_AWCFR_CLRAWLTF_Msk   (0xffUL)                  /*!< CLRAWLTF (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM0_AWCFR_CLRAWHTF_Pos   (8UL)                     /*!< CLRAWHTF (Bit 8)                                      */
#define DFSDM_DFSDM0_AWCFR_CLRAWHTF_Msk   (0xff00UL)                /*!< CLRAWHTF (Bitfield-Mask: 0xff)                        */
/* =====================================================  DFSDM1_AWCFR  ====================================================== */
#define DFSDM_DFSDM1_AWCFR_CLRAWLTF_Pos   (0UL)                     /*!< CLRAWLTF (Bit 0)                                      */
#define DFSDM_DFSDM1_AWCFR_CLRAWLTF_Msk   (0xffUL)                  /*!< CLRAWLTF (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM1_AWCFR_CLRAWHTF_Pos   (8UL)                     /*!< CLRAWHTF (Bit 8)                                      */
#define DFSDM_DFSDM1_AWCFR_CLRAWHTF_Msk   (0xff00UL)                /*!< CLRAWHTF (Bitfield-Mask: 0xff)                        */
/* =====================================================  DFSDM2_AWCFR  ====================================================== */
#define DFSDM_DFSDM2_AWCFR_CLRAWLTF_Pos   (0UL)                     /*!< CLRAWLTF (Bit 0)                                      */
#define DFSDM_DFSDM2_AWCFR_CLRAWLTF_Msk   (0xffUL)                  /*!< CLRAWLTF (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM2_AWCFR_CLRAWHTF_Pos   (8UL)                     /*!< CLRAWHTF (Bit 8)                                      */
#define DFSDM_DFSDM2_AWCFR_CLRAWHTF_Msk   (0xff00UL)                /*!< CLRAWHTF (Bitfield-Mask: 0xff)                        */
/* =====================================================  DFSDM3_AWCFR  ====================================================== */
#define DFSDM_DFSDM3_AWCFR_CLRAWLTF_Pos   (0UL)                     /*!< CLRAWLTF (Bit 0)                                      */
#define DFSDM_DFSDM3_AWCFR_CLRAWLTF_Msk   (0xffUL)                  /*!< CLRAWLTF (Bitfield-Mask: 0xff)                        */
#define DFSDM_DFSDM3_AWCFR_CLRAWHTF_Pos   (8UL)                     /*!< CLRAWHTF (Bit 8)                                      */
#define DFSDM_DFSDM3_AWCFR_CLRAWHTF_Msk   (0xff00UL)                /*!< CLRAWHTF (Bitfield-Mask: 0xff)                        */
/* =====================================================  DFSDM0_EXMAX  ====================================================== */
#define DFSDM_DFSDM0_EXMAX_EXMAXCH_Pos    (0UL)                     /*!< EXMAXCH (Bit 0)                                       */
#define DFSDM_DFSDM0_EXMAX_EXMAXCH_Msk    (0x7UL)                   /*!< EXMAXCH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM0_EXMAX_EXMAX_Pos      (8UL)                     /*!< EXMAX (Bit 8)                                         */
#define DFSDM_DFSDM0_EXMAX_EXMAX_Msk      (0xffffff00UL)            /*!< EXMAX (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM1_EXMAX  ====================================================== */
#define DFSDM_DFSDM1_EXMAX_EXMAXCH_Pos    (0UL)                     /*!< EXMAXCH (Bit 0)                                       */
#define DFSDM_DFSDM1_EXMAX_EXMAXCH_Msk    (0x7UL)                   /*!< EXMAXCH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM1_EXMAX_EXMAX_Pos      (8UL)                     /*!< EXMAX (Bit 8)                                         */
#define DFSDM_DFSDM1_EXMAX_EXMAX_Msk      (0xffffff00UL)            /*!< EXMAX (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM2_EXMAX  ====================================================== */
#define DFSDM_DFSDM2_EXMAX_EXMAXCH_Pos    (0UL)                     /*!< EXMAXCH (Bit 0)                                       */
#define DFSDM_DFSDM2_EXMAX_EXMAXCH_Msk    (0x7UL)                   /*!< EXMAXCH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM2_EXMAX_EXMAX_Pos      (8UL)                     /*!< EXMAX (Bit 8)                                         */
#define DFSDM_DFSDM2_EXMAX_EXMAX_Msk      (0xffffff00UL)            /*!< EXMAX (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM3_EXMAX  ====================================================== */
#define DFSDM_DFSDM3_EXMAX_EXMAXCH_Pos    (0UL)                     /*!< EXMAXCH (Bit 0)                                       */
#define DFSDM_DFSDM3_EXMAX_EXMAXCH_Msk    (0x7UL)                   /*!< EXMAXCH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM3_EXMAX_EXMAX_Pos      (8UL)                     /*!< EXMAX (Bit 8)                                         */
#define DFSDM_DFSDM3_EXMAX_EXMAX_Msk      (0xffffff00UL)            /*!< EXMAX (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM0_EXMIN  ====================================================== */
#define DFSDM_DFSDM0_EXMIN_EXMINCH_Pos    (0UL)                     /*!< EXMINCH (Bit 0)                                       */
#define DFSDM_DFSDM0_EXMIN_EXMINCH_Msk    (0x7UL)                   /*!< EXMINCH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM0_EXMIN_EXMIN_Pos      (8UL)                     /*!< EXMIN (Bit 8)                                         */
#define DFSDM_DFSDM0_EXMIN_EXMIN_Msk      (0xffffff00UL)            /*!< EXMIN (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM1_EXMIN  ====================================================== */
#define DFSDM_DFSDM1_EXMIN_EXMINCH_Pos    (0UL)                     /*!< EXMINCH (Bit 0)                                       */
#define DFSDM_DFSDM1_EXMIN_EXMINCH_Msk    (0x7UL)                   /*!< EXMINCH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM1_EXMIN_EXMIN_Pos      (8UL)                     /*!< EXMIN (Bit 8)                                         */
#define DFSDM_DFSDM1_EXMIN_EXMIN_Msk      (0xffffff00UL)            /*!< EXMIN (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM2_EXMIN  ====================================================== */
#define DFSDM_DFSDM2_EXMIN_EXMINCH_Pos    (0UL)                     /*!< EXMINCH (Bit 0)                                       */
#define DFSDM_DFSDM2_EXMIN_EXMINCH_Msk    (0x7UL)                   /*!< EXMINCH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM2_EXMIN_EXMIN_Pos      (8UL)                     /*!< EXMIN (Bit 8)                                         */
#define DFSDM_DFSDM2_EXMIN_EXMIN_Msk      (0xffffff00UL)            /*!< EXMIN (Bitfield-Mask: 0xffffff)                       */
/* =====================================================  DFSDM3_EXMIN  ====================================================== */
#define DFSDM_DFSDM3_EXMIN_EXMINCH_Pos    (0UL)                     /*!< EXMINCH (Bit 0)                                       */
#define DFSDM_DFSDM3_EXMIN_EXMINCH_Msk    (0x7UL)                   /*!< EXMINCH (Bitfield-Mask: 0x07)                         */
#define DFSDM_DFSDM3_EXMIN_EXMIN_Pos      (8UL)                     /*!< EXMIN (Bit 8)                                         */
#define DFSDM_DFSDM3_EXMIN_EXMIN_Msk      (0xffffff00UL)            /*!< EXMIN (Bitfield-Mask: 0xffffff)                       */
/* ====================================================  DFSDM0_CNVTIMR  ===================================================== */
#define DFSDM_DFSDM0_CNVTIMR_CNVCNT_Pos   (4UL)                     /*!< CNVCNT (Bit 4)                                        */
#define DFSDM_DFSDM0_CNVTIMR_CNVCNT_Msk   (0xfffffff0UL)            /*!< CNVCNT (Bitfield-Mask: 0xfffffff)                     */
/* ====================================================  DFSDM1_CNVTIMR  ===================================================== */
#define DFSDM_DFSDM1_CNVTIMR_CNVCNT_Pos   (4UL)                     /*!< CNVCNT (Bit 4)                                        */
#define DFSDM_DFSDM1_CNVTIMR_CNVCNT_Msk   (0xfffffff0UL)            /*!< CNVCNT (Bitfield-Mask: 0xfffffff)                     */
/* ====================================================  DFSDM2_CNVTIMR  ===================================================== */
#define DFSDM_DFSDM2_CNVTIMR_CNVCNT_Pos   (4UL)                     /*!< CNVCNT (Bit 4)                                        */
#define DFSDM_DFSDM2_CNVTIMR_CNVCNT_Msk   (0xfffffff0UL)            /*!< CNVCNT (Bitfield-Mask: 0xfffffff)                     */
/* ====================================================  DFSDM3_CNVTIMR  ===================================================== */
#define DFSDM_DFSDM3_CNVTIMR_CNVCNT_Pos   (4UL)                     /*!< CNVCNT (Bit 4)                                        */
#define DFSDM_DFSDM3_CNVTIMR_CNVCNT_Msk   (0xfffffff0UL)            /*!< CNVCNT (Bitfield-Mask: 0xfffffff)                     */

