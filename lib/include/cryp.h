#include "core.h"


#define CRYP_BASE                   0x50060000UL

#define CRYP                        ((CRYP_Type*)              CRYP_BASE)


/* =========================================================================================================================== */
/* ================                                           CRYP                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Cryptographic processor (CRYP)
  */

typedef struct {                                /*!< (@ 0x50060000) CRYP Structure                                             */
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000000) control register                                           */
    
    struct {
            uint32_t            : 2;
      __IOM uint32_t ALGODIR    : 1;            /*!< [2..2] Algorithm direction                                                */
      __IOM uint32_t ALGOMODE0  : 3;            /*!< [5..3] Algorithm mode                                                     */
      __IOM uint32_t DATATYPE   : 2;            /*!< [7..6] Data type selection                                                */
      __IOM uint32_t KEYSIZE    : 2;            /*!< [9..8] Key size selection (AES mode only)                                 */
            uint32_t            : 4;
      __OM  uint32_t FFLUSH     : 1;            /*!< [14..14] FIFO flush                                                       */
      __IOM uint32_t CRYPEN     : 1;            /*!< [15..15] Cryptographic processor enable                                   */
      __IOM uint32_t GCM_CCMPH  : 2;            /*!< [17..16] GCM_CCMPH                                                        */
            uint32_t            : 1;
      __IOM uint32_t ALGOMODE3  : 1;            /*!< [19..19] ALGOMODE                                                         */
            uint32_t            : 12;
    } CR_b;
  } ;
  
  union {
    __IM  uint32_t SR;                          /*!< (@ 0x00000004) status register                                            */
    
    struct {
      __IM  uint32_t IFEM       : 1;            /*!< [0..0] Input FIFO empty                                                   */
      __IM  uint32_t IFNF       : 1;            /*!< [1..1] Input FIFO not full                                                */
      __IM  uint32_t OFNE       : 1;            /*!< [2..2] Output FIFO not empty                                              */
      __IM  uint32_t OFFU       : 1;            /*!< [3..3] Output FIFO full                                                   */
      __IM  uint32_t BUSY       : 1;            /*!< [4..4] Busy bit                                                           */
            uint32_t            : 27;
    } SR_b;
  } ;
  
  union {
    __IOM uint32_t DIN;                         /*!< (@ 0x00000008) data input register                                        */
    
    struct {
      __IOM uint32_t DATAIN     : 32;           /*!< [31..0] Data input                                                        */
    } DIN_b;
  } ;
  
  union {
    __IM  uint32_t DOUT;                        /*!< (@ 0x0000000C) data output register                                       */
    
    struct {
      __IM  uint32_t DATAOUT    : 32;           /*!< [31..0] Data output                                                       */
    } DOUT_b;
  } ;
  
  union {
    __IOM uint32_t DMACR;                       /*!< (@ 0x00000010) DMA control register                                       */
    
    struct {
      __IOM uint32_t DIEN       : 1;            /*!< [0..0] DMA input enable                                                   */
      __IOM uint32_t DOEN       : 1;            /*!< [1..1] DMA output enable                                                  */
            uint32_t            : 30;
    } DMACR_b;
  } ;
  
  union {
    __IOM uint32_t IMSCR;                       /*!< (@ 0x00000014) interrupt mask set/clear register                          */
    
    struct {
      __IOM uint32_t INIM       : 1;            /*!< [0..0] Input FIFO service interrupt mask                                  */
      __IOM uint32_t OUTIM      : 1;            /*!< [1..1] Output FIFO service interrupt mask                                 */
            uint32_t            : 30;
    } IMSCR_b;
  } ;
  
  union {
    __IM  uint32_t RISR;                        /*!< (@ 0x00000018) raw interrupt status register                              */
    
    struct {
      __IM  uint32_t INRIS      : 1;            /*!< [0..0] Input FIFO service raw interrupt status                            */
      __IM  uint32_t OUTRIS     : 1;            /*!< [1..1] Output FIFO service raw interrupt status                           */
            uint32_t            : 30;
    } RISR_b;
  } ;
  
  union {
    __IM  uint32_t MISR;                        /*!< (@ 0x0000001C) masked interrupt status register                           */
    
    struct {
      __IM  uint32_t INMIS      : 1;            /*!< [0..0] Input FIFO service masked interrupt status                         */
      __IM  uint32_t OUTMIS     : 1;            /*!< [1..1] Output FIFO service masked interrupt status                        */
            uint32_t            : 30;
    } MISR_b;
  } ;
  
  union {
    __OM  uint32_t K0LR;                        /*!< (@ 0x00000020) key registers                                              */
    
    struct {
      __OM  uint32_t b224       : 1;            /*!< [0..0] b224                                                               */
      __OM  uint32_t b225       : 1;            /*!< [1..1] b225                                                               */
      __OM  uint32_t b226       : 1;            /*!< [2..2] b226                                                               */
      __OM  uint32_t b227       : 1;            /*!< [3..3] b227                                                               */
      __OM  uint32_t b228       : 1;            /*!< [4..4] b228                                                               */
      __OM  uint32_t b229       : 1;            /*!< [5..5] b229                                                               */
      __OM  uint32_t b230       : 1;            /*!< [6..6] b230                                                               */
      __OM  uint32_t b231       : 1;            /*!< [7..7] b231                                                               */
      __OM  uint32_t b232       : 1;            /*!< [8..8] b232                                                               */
      __OM  uint32_t b233       : 1;            /*!< [9..9] b233                                                               */
      __OM  uint32_t b234       : 1;            /*!< [10..10] b234                                                             */
      __OM  uint32_t b235       : 1;            /*!< [11..11] b235                                                             */
      __OM  uint32_t b236       : 1;            /*!< [12..12] b236                                                             */
      __OM  uint32_t b237       : 1;            /*!< [13..13] b237                                                             */
      __OM  uint32_t b238       : 1;            /*!< [14..14] b238                                                             */
      __OM  uint32_t b239       : 1;            /*!< [15..15] b239                                                             */
      __OM  uint32_t b240       : 1;            /*!< [16..16] b240                                                             */
      __OM  uint32_t b241       : 1;            /*!< [17..17] b241                                                             */
      __OM  uint32_t b242       : 1;            /*!< [18..18] b242                                                             */
      __OM  uint32_t b243       : 1;            /*!< [19..19] b243                                                             */
      __OM  uint32_t b244       : 1;            /*!< [20..20] b244                                                             */
      __OM  uint32_t b245       : 1;            /*!< [21..21] b245                                                             */
      __OM  uint32_t b246       : 1;            /*!< [22..22] b246                                                             */
      __OM  uint32_t b247       : 1;            /*!< [23..23] b247                                                             */
      __OM  uint32_t b248       : 1;            /*!< [24..24] b248                                                             */
      __OM  uint32_t b249       : 1;            /*!< [25..25] b249                                                             */
      __OM  uint32_t b250       : 1;            /*!< [26..26] b250                                                             */
      __OM  uint32_t b251       : 1;            /*!< [27..27] b251                                                             */
      __OM  uint32_t b252       : 1;            /*!< [28..28] b252                                                             */
      __OM  uint32_t b253       : 1;            /*!< [29..29] b253                                                             */
      __OM  uint32_t b254       : 1;            /*!< [30..30] b254                                                             */
      __OM  uint32_t b255       : 1;            /*!< [31..31] b255                                                             */
    } K0LR_b;
  } ;
  
  union {
    __OM  uint32_t K0RR;                        /*!< (@ 0x00000024) key registers                                              */
    
    struct {
      __OM  uint32_t b192       : 1;            /*!< [0..0] b192                                                               */
      __OM  uint32_t b193       : 1;            /*!< [1..1] b193                                                               */
      __OM  uint32_t b194       : 1;            /*!< [2..2] b194                                                               */
      __OM  uint32_t b195       : 1;            /*!< [3..3] b195                                                               */
      __OM  uint32_t b196       : 1;            /*!< [4..4] b196                                                               */
      __OM  uint32_t b197       : 1;            /*!< [5..5] b197                                                               */
      __OM  uint32_t b198       : 1;            /*!< [6..6] b198                                                               */
      __OM  uint32_t b199       : 1;            /*!< [7..7] b199                                                               */
      __OM  uint32_t b200       : 1;            /*!< [8..8] b200                                                               */
      __OM  uint32_t b201       : 1;            /*!< [9..9] b201                                                               */
      __OM  uint32_t b202       : 1;            /*!< [10..10] b202                                                             */
      __OM  uint32_t b203       : 1;            /*!< [11..11] b203                                                             */
      __OM  uint32_t b204       : 1;            /*!< [12..12] b204                                                             */
      __OM  uint32_t b205       : 1;            /*!< [13..13] b205                                                             */
      __OM  uint32_t b206       : 1;            /*!< [14..14] b206                                                             */
      __OM  uint32_t b207       : 1;            /*!< [15..15] b207                                                             */
      __OM  uint32_t b208       : 1;            /*!< [16..16] b208                                                             */
      __OM  uint32_t b209       : 1;            /*!< [17..17] b209                                                             */
      __OM  uint32_t b210       : 1;            /*!< [18..18] b210                                                             */
      __OM  uint32_t b211       : 1;            /*!< [19..19] b211                                                             */
      __OM  uint32_t b212       : 1;            /*!< [20..20] b212                                                             */
      __OM  uint32_t b213       : 1;            /*!< [21..21] b213                                                             */
      __OM  uint32_t b214       : 1;            /*!< [22..22] b214                                                             */
      __OM  uint32_t b215       : 1;            /*!< [23..23] b215                                                             */
      __OM  uint32_t b216       : 1;            /*!< [24..24] b216                                                             */
      __OM  uint32_t b217       : 1;            /*!< [25..25] b217                                                             */
      __OM  uint32_t b218       : 1;            /*!< [26..26] b218                                                             */
      __OM  uint32_t b219       : 1;            /*!< [27..27] b219                                                             */
      __OM  uint32_t b220       : 1;            /*!< [28..28] b220                                                             */
      __OM  uint32_t b221       : 1;            /*!< [29..29] b221                                                             */
      __OM  uint32_t b222       : 1;            /*!< [30..30] b222                                                             */
      __OM  uint32_t b223       : 1;            /*!< [31..31] b223                                                             */
    } K0RR_b;
  } ;
  
  union {
    __OM  uint32_t K1LR;                        /*!< (@ 0x00000028) key registers                                              */
    
    struct {
      __OM  uint32_t b160       : 1;            /*!< [0..0] b160                                                               */
      __OM  uint32_t b161       : 1;            /*!< [1..1] b161                                                               */
      __OM  uint32_t b162       : 1;            /*!< [2..2] b162                                                               */
      __OM  uint32_t b163       : 1;            /*!< [3..3] b163                                                               */
      __OM  uint32_t b164       : 1;            /*!< [4..4] b164                                                               */
      __OM  uint32_t b165       : 1;            /*!< [5..5] b165                                                               */
      __OM  uint32_t b166       : 1;            /*!< [6..6] b166                                                               */
      __OM  uint32_t b167       : 1;            /*!< [7..7] b167                                                               */
      __OM  uint32_t b168       : 1;            /*!< [8..8] b168                                                               */
      __OM  uint32_t b169       : 1;            /*!< [9..9] b169                                                               */
      __OM  uint32_t b170       : 1;            /*!< [10..10] b170                                                             */
      __OM  uint32_t b171       : 1;            /*!< [11..11] b171                                                             */
      __OM  uint32_t b172       : 1;            /*!< [12..12] b172                                                             */
      __OM  uint32_t b173       : 1;            /*!< [13..13] b173                                                             */
      __OM  uint32_t b174       : 1;            /*!< [14..14] b174                                                             */
      __OM  uint32_t b175       : 1;            /*!< [15..15] b175                                                             */
      __OM  uint32_t b176       : 1;            /*!< [16..16] b176                                                             */
      __OM  uint32_t b177       : 1;            /*!< [17..17] b177                                                             */
      __OM  uint32_t b178       : 1;            /*!< [18..18] b178                                                             */
      __OM  uint32_t b179       : 1;            /*!< [19..19] b179                                                             */
      __OM  uint32_t b180       : 1;            /*!< [20..20] b180                                                             */
      __OM  uint32_t b181       : 1;            /*!< [21..21] b181                                                             */
      __OM  uint32_t b182       : 1;            /*!< [22..22] b182                                                             */
      __OM  uint32_t b183       : 1;            /*!< [23..23] b183                                                             */
      __OM  uint32_t b184       : 1;            /*!< [24..24] b184                                                             */
      __OM  uint32_t b185       : 1;            /*!< [25..25] b185                                                             */
      __OM  uint32_t b186       : 1;            /*!< [26..26] b186                                                             */
      __OM  uint32_t b187       : 1;            /*!< [27..27] b187                                                             */
      __OM  uint32_t b188       : 1;            /*!< [28..28] b188                                                             */
      __OM  uint32_t b189       : 1;            /*!< [29..29] b189                                                             */
      __OM  uint32_t b190       : 1;            /*!< [30..30] b190                                                             */
      __OM  uint32_t b191       : 1;            /*!< [31..31] b191                                                             */
    } K1LR_b;
  } ;
  
  union {
    __OM  uint32_t K1RR;                        /*!< (@ 0x0000002C) key registers                                              */
    
    struct {
      __OM  uint32_t b128       : 1;            /*!< [0..0] b128                                                               */
      __OM  uint32_t b129       : 1;            /*!< [1..1] b129                                                               */
      __OM  uint32_t b130       : 1;            /*!< [2..2] b130                                                               */
      __OM  uint32_t b131       : 1;            /*!< [3..3] b131                                                               */
      __OM  uint32_t b132       : 1;            /*!< [4..4] b132                                                               */
      __OM  uint32_t b133       : 1;            /*!< [5..5] b133                                                               */
      __OM  uint32_t b134       : 1;            /*!< [6..6] b134                                                               */
      __OM  uint32_t b135       : 1;            /*!< [7..7] b135                                                               */
      __OM  uint32_t b136       : 1;            /*!< [8..8] b136                                                               */
      __OM  uint32_t b137       : 1;            /*!< [9..9] b137                                                               */
      __OM  uint32_t b138       : 1;            /*!< [10..10] b138                                                             */
      __OM  uint32_t b139       : 1;            /*!< [11..11] b139                                                             */
      __OM  uint32_t b140       : 1;            /*!< [12..12] b140                                                             */
      __OM  uint32_t b141       : 1;            /*!< [13..13] b141                                                             */
      __OM  uint32_t b142       : 1;            /*!< [14..14] b142                                                             */
      __OM  uint32_t b143       : 1;            /*!< [15..15] b143                                                             */
      __OM  uint32_t b144       : 1;            /*!< [16..16] b144                                                             */
      __OM  uint32_t b145       : 1;            /*!< [17..17] b145                                                             */
      __OM  uint32_t b146       : 1;            /*!< [18..18] b146                                                             */
      __OM  uint32_t b147       : 1;            /*!< [19..19] b147                                                             */
      __OM  uint32_t b148       : 1;            /*!< [20..20] b148                                                             */
      __OM  uint32_t b149       : 1;            /*!< [21..21] b149                                                             */
      __OM  uint32_t b150       : 1;            /*!< [22..22] b150                                                             */
      __OM  uint32_t b151       : 1;            /*!< [23..23] b151                                                             */
      __OM  uint32_t b152       : 1;            /*!< [24..24] b152                                                             */
      __OM  uint32_t b153       : 1;            /*!< [25..25] b153                                                             */
      __OM  uint32_t b154       : 1;            /*!< [26..26] b154                                                             */
      __OM  uint32_t b155       : 1;            /*!< [27..27] b155                                                             */
      __OM  uint32_t b156       : 1;            /*!< [28..28] b156                                                             */
      __OM  uint32_t b157       : 1;            /*!< [29..29] b157                                                             */
      __OM  uint32_t b158       : 1;            /*!< [30..30] b158                                                             */
      __OM  uint32_t b159       : 1;            /*!< [31..31] b159                                                             */
    } K1RR_b;
  } ;
  
  union {
    __OM  uint32_t K2LR;                        /*!< (@ 0x00000030) key registers                                              */
    
    struct {
      __OM  uint32_t b96        : 1;            /*!< [0..0] b96                                                                */
      __OM  uint32_t b97        : 1;            /*!< [1..1] b97                                                                */
      __OM  uint32_t b98        : 1;            /*!< [2..2] b98                                                                */
      __OM  uint32_t b99        : 1;            /*!< [3..3] b99                                                                */
      __OM  uint32_t b100       : 1;            /*!< [4..4] b100                                                               */
      __OM  uint32_t b101       : 1;            /*!< [5..5] b101                                                               */
      __OM  uint32_t b102       : 1;            /*!< [6..6] b102                                                               */
      __OM  uint32_t b103       : 1;            /*!< [7..7] b103                                                               */
      __OM  uint32_t b104       : 1;            /*!< [8..8] b104                                                               */
      __OM  uint32_t b105       : 1;            /*!< [9..9] b105                                                               */
      __OM  uint32_t b106       : 1;            /*!< [10..10] b106                                                             */
      __OM  uint32_t b107       : 1;            /*!< [11..11] b107                                                             */
      __OM  uint32_t b108       : 1;            /*!< [12..12] b108                                                             */
      __OM  uint32_t b109       : 1;            /*!< [13..13] b109                                                             */
      __OM  uint32_t b110       : 1;            /*!< [14..14] b110                                                             */
      __OM  uint32_t b111       : 1;            /*!< [15..15] b111                                                             */
      __OM  uint32_t b112       : 1;            /*!< [16..16] b112                                                             */
      __OM  uint32_t b113       : 1;            /*!< [17..17] b113                                                             */
      __OM  uint32_t b114       : 1;            /*!< [18..18] b114                                                             */
      __OM  uint32_t b115       : 1;            /*!< [19..19] b115                                                             */
      __OM  uint32_t b116       : 1;            /*!< [20..20] b116                                                             */
      __OM  uint32_t b117       : 1;            /*!< [21..21] b117                                                             */
      __OM  uint32_t b118       : 1;            /*!< [22..22] b118                                                             */
      __OM  uint32_t b119       : 1;            /*!< [23..23] b119                                                             */
      __OM  uint32_t b120       : 1;            /*!< [24..24] b120                                                             */
      __OM  uint32_t b121       : 1;            /*!< [25..25] b121                                                             */
      __OM  uint32_t b122       : 1;            /*!< [26..26] b122                                                             */
      __OM  uint32_t b123       : 1;            /*!< [27..27] b123                                                             */
      __OM  uint32_t b124       : 1;            /*!< [28..28] b124                                                             */
      __OM  uint32_t b125       : 1;            /*!< [29..29] b125                                                             */
      __OM  uint32_t b126       : 1;            /*!< [30..30] b126                                                             */
      __OM  uint32_t b127       : 1;            /*!< [31..31] b127                                                             */
    } K2LR_b;
  } ;
  
  union {
    __OM  uint32_t K2RR;                        /*!< (@ 0x00000034) key registers                                              */
    
    struct {
      __OM  uint32_t b64        : 1;            /*!< [0..0] b64                                                                */
      __OM  uint32_t b65        : 1;            /*!< [1..1] b65                                                                */
      __OM  uint32_t b66        : 1;            /*!< [2..2] b66                                                                */
      __OM  uint32_t b67        : 1;            /*!< [3..3] b67                                                                */
      __OM  uint32_t b68        : 1;            /*!< [4..4] b68                                                                */
      __OM  uint32_t b69        : 1;            /*!< [5..5] b69                                                                */
      __OM  uint32_t b70        : 1;            /*!< [6..6] b70                                                                */
      __OM  uint32_t b71        : 1;            /*!< [7..7] b71                                                                */
      __OM  uint32_t b72        : 1;            /*!< [8..8] b72                                                                */
      __OM  uint32_t b73        : 1;            /*!< [9..9] b73                                                                */
      __OM  uint32_t b74        : 1;            /*!< [10..10] b74                                                              */
      __OM  uint32_t b75        : 1;            /*!< [11..11] b75                                                              */
      __OM  uint32_t b76        : 1;            /*!< [12..12] b76                                                              */
      __OM  uint32_t b77        : 1;            /*!< [13..13] b77                                                              */
      __OM  uint32_t b78        : 1;            /*!< [14..14] b78                                                              */
      __OM  uint32_t b79        : 1;            /*!< [15..15] b79                                                              */
      __OM  uint32_t b80        : 1;            /*!< [16..16] b80                                                              */
      __OM  uint32_t b81        : 1;            /*!< [17..17] b81                                                              */
      __OM  uint32_t b82        : 1;            /*!< [18..18] b82                                                              */
      __OM  uint32_t b83        : 1;            /*!< [19..19] b83                                                              */
      __OM  uint32_t b84        : 1;            /*!< [20..20] b84                                                              */
      __OM  uint32_t b85        : 1;            /*!< [21..21] b85                                                              */
      __OM  uint32_t b86        : 1;            /*!< [22..22] b86                                                              */
      __OM  uint32_t b87        : 1;            /*!< [23..23] b87                                                              */
      __OM  uint32_t b88        : 1;            /*!< [24..24] b88                                                              */
      __OM  uint32_t b89        : 1;            /*!< [25..25] b89                                                              */
      __OM  uint32_t b90        : 1;            /*!< [26..26] b90                                                              */
      __OM  uint32_t b91        : 1;            /*!< [27..27] b91                                                              */
      __OM  uint32_t b92        : 1;            /*!< [28..28] b92                                                              */
      __OM  uint32_t b93        : 1;            /*!< [29..29] b93                                                              */
      __OM  uint32_t b94        : 1;            /*!< [30..30] b94                                                              */
      __OM  uint32_t b95        : 1;            /*!< [31..31] b95                                                              */
    } K2RR_b;
  } ;
  
  union {
    __OM  uint32_t K3LR;                        /*!< (@ 0x00000038) key registers                                              */
    
    struct {
      __OM  uint32_t b32        : 1;            /*!< [0..0] b32                                                                */
      __OM  uint32_t b33        : 1;            /*!< [1..1] b33                                                                */
      __OM  uint32_t b34        : 1;            /*!< [2..2] b34                                                                */
      __OM  uint32_t b35        : 1;            /*!< [3..3] b35                                                                */
      __OM  uint32_t b36        : 1;            /*!< [4..4] b36                                                                */
      __OM  uint32_t b37        : 1;            /*!< [5..5] b37                                                                */
      __OM  uint32_t b38        : 1;            /*!< [6..6] b38                                                                */
      __OM  uint32_t b39        : 1;            /*!< [7..7] b39                                                                */
      __OM  uint32_t b40        : 1;            /*!< [8..8] b40                                                                */
      __OM  uint32_t b41        : 1;            /*!< [9..9] b41                                                                */
      __OM  uint32_t b42        : 1;            /*!< [10..10] b42                                                              */
      __OM  uint32_t b43        : 1;            /*!< [11..11] b43                                                              */
      __OM  uint32_t b44        : 1;            /*!< [12..12] b44                                                              */
      __OM  uint32_t b45        : 1;            /*!< [13..13] b45                                                              */
      __OM  uint32_t b46        : 1;            /*!< [14..14] b46                                                              */
      __OM  uint32_t b47        : 1;            /*!< [15..15] b47                                                              */
      __OM  uint32_t b48        : 1;            /*!< [16..16] b48                                                              */
      __OM  uint32_t b49        : 1;            /*!< [17..17] b49                                                              */
      __OM  uint32_t b50        : 1;            /*!< [18..18] b50                                                              */
      __OM  uint32_t b51        : 1;            /*!< [19..19] b51                                                              */
      __OM  uint32_t b52        : 1;            /*!< [20..20] b52                                                              */
      __OM  uint32_t b53        : 1;            /*!< [21..21] b53                                                              */
      __OM  uint32_t b54        : 1;            /*!< [22..22] b54                                                              */
      __OM  uint32_t b55        : 1;            /*!< [23..23] b55                                                              */
      __OM  uint32_t b56        : 1;            /*!< [24..24] b56                                                              */
      __OM  uint32_t b57        : 1;            /*!< [25..25] b57                                                              */
      __OM  uint32_t b58        : 1;            /*!< [26..26] b58                                                              */
      __OM  uint32_t b59        : 1;            /*!< [27..27] b59                                                              */
      __OM  uint32_t b60        : 1;            /*!< [28..28] b60                                                              */
      __OM  uint32_t b61        : 1;            /*!< [29..29] b61                                                              */
      __OM  uint32_t b62        : 1;            /*!< [30..30] b62                                                              */
      __OM  uint32_t b63        : 1;            /*!< [31..31] b63                                                              */
    } K3LR_b;
  } ;
  
  union {
    __OM  uint32_t K3RR;                        /*!< (@ 0x0000003C) key registers                                              */
    
    struct {
      __OM  uint32_t b0         : 1;            /*!< [0..0] b0                                                                 */
      __OM  uint32_t b1         : 1;            /*!< [1..1] b1                                                                 */
      __OM  uint32_t b2         : 1;            /*!< [2..2] b2                                                                 */
      __OM  uint32_t b3         : 1;            /*!< [3..3] b3                                                                 */
      __OM  uint32_t b4         : 1;            /*!< [4..4] b4                                                                 */
      __OM  uint32_t b5         : 1;            /*!< [5..5] b5                                                                 */
      __OM  uint32_t b6         : 1;            /*!< [6..6] b6                                                                 */
      __OM  uint32_t b7         : 1;            /*!< [7..7] b7                                                                 */
      __OM  uint32_t b8         : 1;            /*!< [8..8] b8                                                                 */
      __OM  uint32_t b9         : 1;            /*!< [9..9] b9                                                                 */
      __OM  uint32_t b10        : 1;            /*!< [10..10] b10                                                              */
      __OM  uint32_t b11        : 1;            /*!< [11..11] b11                                                              */
      __OM  uint32_t b12        : 1;            /*!< [12..12] b12                                                              */
      __OM  uint32_t b13        : 1;            /*!< [13..13] b13                                                              */
      __OM  uint32_t b14        : 1;            /*!< [14..14] b14                                                              */
      __OM  uint32_t b15        : 1;            /*!< [15..15] b15                                                              */
      __OM  uint32_t b16        : 1;            /*!< [16..16] b16                                                              */
      __OM  uint32_t b17        : 1;            /*!< [17..17] b17                                                              */
      __OM  uint32_t b18        : 1;            /*!< [18..18] b18                                                              */
      __OM  uint32_t b19        : 1;            /*!< [19..19] b19                                                              */
      __OM  uint32_t b20        : 1;            /*!< [20..20] b20                                                              */
      __OM  uint32_t b21        : 1;            /*!< [21..21] b21                                                              */
      __OM  uint32_t b22        : 1;            /*!< [22..22] b22                                                              */
      __OM  uint32_t b23        : 1;            /*!< [23..23] b23                                                              */
      __OM  uint32_t b24        : 1;            /*!< [24..24] b24                                                              */
      __OM  uint32_t b25        : 1;            /*!< [25..25] b25                                                              */
      __OM  uint32_t b26        : 1;            /*!< [26..26] b26                                                              */
      __OM  uint32_t b27        : 1;            /*!< [27..27] b27                                                              */
      __OM  uint32_t b28        : 1;            /*!< [28..28] b28                                                              */
      __OM  uint32_t b29        : 1;            /*!< [29..29] b29                                                              */
      __OM  uint32_t b30        : 1;            /*!< [30..30] b30                                                              */
      __OM  uint32_t b31        : 1;            /*!< [31..31] b31                                                              */
    } K3RR_b;
  } ;
  
  union {
    __IOM uint32_t IV0LR;                       /*!< (@ 0x00000040) initialization vector registers                            */
    
    struct {
      __IOM uint32_t IV31       : 1;            /*!< [0..0] IV31                                                               */
      __IOM uint32_t IV30       : 1;            /*!< [1..1] IV30                                                               */
      __IOM uint32_t IV29       : 1;            /*!< [2..2] IV29                                                               */
      __IOM uint32_t IV28       : 1;            /*!< [3..3] IV28                                                               */
      __IOM uint32_t IV27       : 1;            /*!< [4..4] IV27                                                               */
      __IOM uint32_t IV26       : 1;            /*!< [5..5] IV26                                                               */
      __IOM uint32_t IV25       : 1;            /*!< [6..6] IV25                                                               */
      __IOM uint32_t IV24       : 1;            /*!< [7..7] IV24                                                               */
      __IOM uint32_t IV23       : 1;            /*!< [8..8] IV23                                                               */
      __IOM uint32_t IV22       : 1;            /*!< [9..9] IV22                                                               */
      __IOM uint32_t IV21       : 1;            /*!< [10..10] IV21                                                             */
      __IOM uint32_t IV20       : 1;            /*!< [11..11] IV20                                                             */
      __IOM uint32_t IV19       : 1;            /*!< [12..12] IV19                                                             */
      __IOM uint32_t IV18       : 1;            /*!< [13..13] IV18                                                             */
      __IOM uint32_t IV17       : 1;            /*!< [14..14] IV17                                                             */
      __IOM uint32_t IV16       : 1;            /*!< [15..15] IV16                                                             */
      __IOM uint32_t IV15       : 1;            /*!< [16..16] IV15                                                             */
      __IOM uint32_t IV14       : 1;            /*!< [17..17] IV14                                                             */
      __IOM uint32_t IV13       : 1;            /*!< [18..18] IV13                                                             */
      __IOM uint32_t IV12       : 1;            /*!< [19..19] IV12                                                             */
      __IOM uint32_t IV11       : 1;            /*!< [20..20] IV11                                                             */
      __IOM uint32_t IV10       : 1;            /*!< [21..21] IV10                                                             */
      __IOM uint32_t IV9        : 1;            /*!< [22..22] IV9                                                              */
      __IOM uint32_t IV8        : 1;            /*!< [23..23] IV8                                                              */
      __IOM uint32_t IV7        : 1;            /*!< [24..24] IV7                                                              */
      __IOM uint32_t IV6        : 1;            /*!< [25..25] IV6                                                              */
      __IOM uint32_t IV5        : 1;            /*!< [26..26] IV5                                                              */
      __IOM uint32_t IV4        : 1;            /*!< [27..27] IV4                                                              */
      __IOM uint32_t IV3        : 1;            /*!< [28..28] IV3                                                              */
      __IOM uint32_t IV2        : 1;            /*!< [29..29] IV2                                                              */
      __IOM uint32_t IV1        : 1;            /*!< [30..30] IV1                                                              */
      __IOM uint32_t IV0        : 1;            /*!< [31..31] IV0                                                              */
    } IV0LR_b;
  } ;
  
  union {
    __IOM uint32_t IV0RR;                       /*!< (@ 0x00000044) initialization vector registers                            */
    
    struct {
      __IOM uint32_t IV63       : 1;            /*!< [0..0] IV63                                                               */
      __IOM uint32_t IV62       : 1;            /*!< [1..1] IV62                                                               */
      __IOM uint32_t IV61       : 1;            /*!< [2..2] IV61                                                               */
      __IOM uint32_t IV60       : 1;            /*!< [3..3] IV60                                                               */
      __IOM uint32_t IV59       : 1;            /*!< [4..4] IV59                                                               */
      __IOM uint32_t IV58       : 1;            /*!< [5..5] IV58                                                               */
      __IOM uint32_t IV57       : 1;            /*!< [6..6] IV57                                                               */
      __IOM uint32_t IV56       : 1;            /*!< [7..7] IV56                                                               */
      __IOM uint32_t IV55       : 1;            /*!< [8..8] IV55                                                               */
      __IOM uint32_t IV54       : 1;            /*!< [9..9] IV54                                                               */
      __IOM uint32_t IV53       : 1;            /*!< [10..10] IV53                                                             */
      __IOM uint32_t IV52       : 1;            /*!< [11..11] IV52                                                             */
      __IOM uint32_t IV51       : 1;            /*!< [12..12] IV51                                                             */
      __IOM uint32_t IV50       : 1;            /*!< [13..13] IV50                                                             */
      __IOM uint32_t IV49       : 1;            /*!< [14..14] IV49                                                             */
      __IOM uint32_t IV48       : 1;            /*!< [15..15] IV48                                                             */
      __IOM uint32_t IV47       : 1;            /*!< [16..16] IV47                                                             */
      __IOM uint32_t IV46       : 1;            /*!< [17..17] IV46                                                             */
      __IOM uint32_t IV45       : 1;            /*!< [18..18] IV45                                                             */
      __IOM uint32_t IV44       : 1;            /*!< [19..19] IV44                                                             */
      __IOM uint32_t IV43       : 1;            /*!< [20..20] IV43                                                             */
      __IOM uint32_t IV42       : 1;            /*!< [21..21] IV42                                                             */
      __IOM uint32_t IV41       : 1;            /*!< [22..22] IV41                                                             */
      __IOM uint32_t IV40       : 1;            /*!< [23..23] IV40                                                             */
      __IOM uint32_t IV39       : 1;            /*!< [24..24] IV39                                                             */
      __IOM uint32_t IV38       : 1;            /*!< [25..25] IV38                                                             */
      __IOM uint32_t IV37       : 1;            /*!< [26..26] IV37                                                             */
      __IOM uint32_t IV36       : 1;            /*!< [27..27] IV36                                                             */
      __IOM uint32_t IV35       : 1;            /*!< [28..28] IV35                                                             */
      __IOM uint32_t IV34       : 1;            /*!< [29..29] IV34                                                             */
      __IOM uint32_t IV33       : 1;            /*!< [30..30] IV33                                                             */
      __IOM uint32_t IV32       : 1;            /*!< [31..31] IV32                                                             */
    } IV0RR_b;
  } ;
  
  union {
    __IOM uint32_t IV1LR;                       /*!< (@ 0x00000048) initialization vector registers                            */
    
    struct {
      __IOM uint32_t IV95       : 1;            /*!< [0..0] IV95                                                               */
      __IOM uint32_t IV94       : 1;            /*!< [1..1] IV94                                                               */
      __IOM uint32_t IV93       : 1;            /*!< [2..2] IV93                                                               */
      __IOM uint32_t IV92       : 1;            /*!< [3..3] IV92                                                               */
      __IOM uint32_t IV91       : 1;            /*!< [4..4] IV91                                                               */
      __IOM uint32_t IV90       : 1;            /*!< [5..5] IV90                                                               */
      __IOM uint32_t IV89       : 1;            /*!< [6..6] IV89                                                               */
      __IOM uint32_t IV88       : 1;            /*!< [7..7] IV88                                                               */
      __IOM uint32_t IV87       : 1;            /*!< [8..8] IV87                                                               */
      __IOM uint32_t IV86       : 1;            /*!< [9..9] IV86                                                               */
      __IOM uint32_t IV85       : 1;            /*!< [10..10] IV85                                                             */
      __IOM uint32_t IV84       : 1;            /*!< [11..11] IV84                                                             */
      __IOM uint32_t IV83       : 1;            /*!< [12..12] IV83                                                             */
      __IOM uint32_t IV82       : 1;            /*!< [13..13] IV82                                                             */
      __IOM uint32_t IV81       : 1;            /*!< [14..14] IV81                                                             */
      __IOM uint32_t IV80       : 1;            /*!< [15..15] IV80                                                             */
      __IOM uint32_t IV79       : 1;            /*!< [16..16] IV79                                                             */
      __IOM uint32_t IV78       : 1;            /*!< [17..17] IV78                                                             */
      __IOM uint32_t IV77       : 1;            /*!< [18..18] IV77                                                             */
      __IOM uint32_t IV76       : 1;            /*!< [19..19] IV76                                                             */
      __IOM uint32_t IV75       : 1;            /*!< [20..20] IV75                                                             */
      __IOM uint32_t IV74       : 1;            /*!< [21..21] IV74                                                             */
      __IOM uint32_t IV73       : 1;            /*!< [22..22] IV73                                                             */
      __IOM uint32_t IV72       : 1;            /*!< [23..23] IV72                                                             */
      __IOM uint32_t IV71       : 1;            /*!< [24..24] IV71                                                             */
      __IOM uint32_t IV70       : 1;            /*!< [25..25] IV70                                                             */
      __IOM uint32_t IV69       : 1;            /*!< [26..26] IV69                                                             */
      __IOM uint32_t IV68       : 1;            /*!< [27..27] IV68                                                             */
      __IOM uint32_t IV67       : 1;            /*!< [28..28] IV67                                                             */
      __IOM uint32_t IV66       : 1;            /*!< [29..29] IV66                                                             */
      __IOM uint32_t IV65       : 1;            /*!< [30..30] IV65                                                             */
      __IOM uint32_t IV64       : 1;            /*!< [31..31] IV64                                                             */
    } IV1LR_b;
  } ;
  
  union {
    __IOM uint32_t IV1RR;                       /*!< (@ 0x0000004C) initialization vector registers                            */
    
    struct {
      __IOM uint32_t IV127      : 1;            /*!< [0..0] IV127                                                              */
      __IOM uint32_t IV126      : 1;            /*!< [1..1] IV126                                                              */
      __IOM uint32_t IV125      : 1;            /*!< [2..2] IV125                                                              */
      __IOM uint32_t IV124      : 1;            /*!< [3..3] IV124                                                              */
      __IOM uint32_t IV123      : 1;            /*!< [4..4] IV123                                                              */
      __IOM uint32_t IV122      : 1;            /*!< [5..5] IV122                                                              */
      __IOM uint32_t IV121      : 1;            /*!< [6..6] IV121                                                              */
      __IOM uint32_t IV120      : 1;            /*!< [7..7] IV120                                                              */
      __IOM uint32_t IV119      : 1;            /*!< [8..8] IV119                                                              */
      __IOM uint32_t IV118      : 1;            /*!< [9..9] IV118                                                              */
      __IOM uint32_t IV117      : 1;            /*!< [10..10] IV117                                                            */
      __IOM uint32_t IV116      : 1;            /*!< [11..11] IV116                                                            */
      __IOM uint32_t IV115      : 1;            /*!< [12..12] IV115                                                            */
      __IOM uint32_t IV114      : 1;            /*!< [13..13] IV114                                                            */
      __IOM uint32_t IV113      : 1;            /*!< [14..14] IV113                                                            */
      __IOM uint32_t IV112      : 1;            /*!< [15..15] IV112                                                            */
      __IOM uint32_t IV111      : 1;            /*!< [16..16] IV111                                                            */
      __IOM uint32_t IV110      : 1;            /*!< [17..17] IV110                                                            */
      __IOM uint32_t IV109      : 1;            /*!< [18..18] IV109                                                            */
      __IOM uint32_t IV108      : 1;            /*!< [19..19] IV108                                                            */
      __IOM uint32_t IV107      : 1;            /*!< [20..20] IV107                                                            */
      __IOM uint32_t IV106      : 1;            /*!< [21..21] IV106                                                            */
      __IOM uint32_t IV105      : 1;            /*!< [22..22] IV105                                                            */
      __IOM uint32_t IV104      : 1;            /*!< [23..23] IV104                                                            */
      __IOM uint32_t IV103      : 1;            /*!< [24..24] IV103                                                            */
      __IOM uint32_t IV102      : 1;            /*!< [25..25] IV102                                                            */
      __IOM uint32_t IV101      : 1;            /*!< [26..26] IV101                                                            */
      __IOM uint32_t IV100      : 1;            /*!< [27..27] IV100                                                            */
      __IOM uint32_t IV99       : 1;            /*!< [28..28] IV99                                                             */
      __IOM uint32_t IV98       : 1;            /*!< [29..29] IV98                                                             */
      __IOM uint32_t IV97       : 1;            /*!< [30..30] IV97                                                             */
      __IOM uint32_t IV96       : 1;            /*!< [31..31] IV96                                                             */
    } IV1RR_b;
  } ;
  
  union {
    __IOM uint32_t CSGCMCCM0R;                  /*!< (@ 0x00000050) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCMCCM0R : 32;           /*!< [31..0] CSGCMCCM0R                                                        */
    } CSGCMCCM0R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCMCCM1R;                  /*!< (@ 0x00000054) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCMCCM1R : 32;           /*!< [31..0] CSGCMCCM1R                                                        */
    } CSGCMCCM1R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCMCCM2R;                  /*!< (@ 0x00000058) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCMCCM2R : 32;           /*!< [31..0] CSGCMCCM2R                                                        */
    } CSGCMCCM2R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCMCCM3R;                  /*!< (@ 0x0000005C) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCMCCM3R : 32;           /*!< [31..0] CSGCMCCM3R                                                        */
    } CSGCMCCM3R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCMCCM4R;                  /*!< (@ 0x00000060) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCMCCM4R : 32;           /*!< [31..0] CSGCMCCM4R                                                        */
    } CSGCMCCM4R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCMCCM5R;                  /*!< (@ 0x00000064) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCMCCM5R : 32;           /*!< [31..0] CSGCMCCM5R                                                        */
    } CSGCMCCM5R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCMCCM6R;                  /*!< (@ 0x00000068) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCMCCM6R : 32;           /*!< [31..0] CSGCMCCM6R                                                        */
    } CSGCMCCM6R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCMCCM7R;                  /*!< (@ 0x0000006C) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCMCCM7R : 32;           /*!< [31..0] CSGCMCCM7R                                                        */
    } CSGCMCCM7R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCM0R;                     /*!< (@ 0x00000070) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCM0R    : 32;           /*!< [31..0] CSGCM0R                                                           */
    } CSGCM0R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCM1R;                     /*!< (@ 0x00000074) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCM1R    : 32;           /*!< [31..0] CSGCM1R                                                           */
    } CSGCM1R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCM2R;                     /*!< (@ 0x00000078) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCM2R    : 32;           /*!< [31..0] CSGCM2R                                                           */
    } CSGCM2R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCM3R;                     /*!< (@ 0x0000007C) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCM3R    : 32;           /*!< [31..0] CSGCM3R                                                           */
    } CSGCM3R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCM4R;                     /*!< (@ 0x00000080) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCM4R    : 32;           /*!< [31..0] CSGCM4R                                                           */
    } CSGCM4R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCM5R;                     /*!< (@ 0x00000084) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCM5R    : 32;           /*!< [31..0] CSGCM5R                                                           */
    } CSGCM5R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCM6R;                     /*!< (@ 0x00000088) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCM6R    : 32;           /*!< [31..0] CSGCM6R                                                           */
    } CSGCM6R_b;
  } ;
  
  union {
    __IOM uint32_t CSGCM7R;                     /*!< (@ 0x0000008C) context swap register                                      */
    
    struct {
      __IOM uint32_t CSGCM7R    : 32;           /*!< [31..0] CSGCM7R                                                           */
    } CSGCM7R_b;
  } ;
} CRYP_Type;                                    /*!< Size = 144 (0x90)                                                         */



/* =========================================================================================================================== */
/* ================                                           CRYP                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
#define CRYP_CR_ALGODIR_Pos               (2UL)                     /*!< ALGODIR (Bit 2)                                       */
#define CRYP_CR_ALGODIR_Msk               (0x4UL)                   /*!< ALGODIR (Bitfield-Mask: 0x01)                         */
#define CRYP_CR_ALGOMODE0_Pos             (3UL)                     /*!< ALGOMODE0 (Bit 3)                                     */
#define CRYP_CR_ALGOMODE0_Msk             (0x38UL)                  /*!< ALGOMODE0 (Bitfield-Mask: 0x07)                       */
#define CRYP_CR_DATATYPE_Pos              (6UL)                     /*!< DATATYPE (Bit 6)                                      */
#define CRYP_CR_DATATYPE_Msk              (0xc0UL)                  /*!< DATATYPE (Bitfield-Mask: 0x03)                        */
#define CRYP_CR_KEYSIZE_Pos               (8UL)                     /*!< KEYSIZE (Bit 8)                                       */
#define CRYP_CR_KEYSIZE_Msk               (0x300UL)                 /*!< KEYSIZE (Bitfield-Mask: 0x03)                         */
#define CRYP_CR_FFLUSH_Pos                (14UL)                    /*!< FFLUSH (Bit 14)                                       */
#define CRYP_CR_FFLUSH_Msk                (0x4000UL)                /*!< FFLUSH (Bitfield-Mask: 0x01)                          */
#define CRYP_CR_CRYPEN_Pos                (15UL)                    /*!< CRYPEN (Bit 15)                                       */
#define CRYP_CR_CRYPEN_Msk                (0x8000UL)                /*!< CRYPEN (Bitfield-Mask: 0x01)                          */
#define CRYP_CR_GCM_CCMPH_Pos             (16UL)                    /*!< GCM_CCMPH (Bit 16)                                    */
#define CRYP_CR_GCM_CCMPH_Msk             (0x30000UL)               /*!< GCM_CCMPH (Bitfield-Mask: 0x03)                       */
#define CRYP_CR_ALGOMODE3_Pos             (19UL)                    /*!< ALGOMODE3 (Bit 19)                                    */
#define CRYP_CR_ALGOMODE3_Msk             (0x80000UL)               /*!< ALGOMODE3 (Bitfield-Mask: 0x01)                       */
/* ==========================================================  SR  =========================================================== */
#define CRYP_SR_BUSY_Pos                  (4UL)                     /*!< BUSY (Bit 4)                                          */
#define CRYP_SR_BUSY_Msk                  (0x10UL)                  /*!< BUSY (Bitfield-Mask: 0x01)                            */
#define CRYP_SR_OFFU_Pos                  (3UL)                     /*!< OFFU (Bit 3)                                          */
#define CRYP_SR_OFFU_Msk                  (0x8UL)                   /*!< OFFU (Bitfield-Mask: 0x01)                            */
#define CRYP_SR_OFNE_Pos                  (2UL)                     /*!< OFNE (Bit 2)                                          */
#define CRYP_SR_OFNE_Msk                  (0x4UL)                   /*!< OFNE (Bitfield-Mask: 0x01)                            */
#define CRYP_SR_IFNF_Pos                  (1UL)                     /*!< IFNF (Bit 1)                                          */
#define CRYP_SR_IFNF_Msk                  (0x2UL)                   /*!< IFNF (Bitfield-Mask: 0x01)                            */
#define CRYP_SR_IFEM_Pos                  (0UL)                     /*!< IFEM (Bit 0)                                          */
#define CRYP_SR_IFEM_Msk                  (0x1UL)                   /*!< IFEM (Bitfield-Mask: 0x01)                            */
/* ==========================================================  DIN  ========================================================== */
#define CRYP_DIN_DATAIN_Pos               (0UL)                     /*!< DATAIN (Bit 0)                                        */
#define CRYP_DIN_DATAIN_Msk               (0xffffffffUL)            /*!< DATAIN (Bitfield-Mask: 0xffffffff)                    */
/* =========================================================  DOUT  ========================================================== */
#define CRYP_DOUT_DATAOUT_Pos             (0UL)                     /*!< DATAOUT (Bit 0)                                       */
#define CRYP_DOUT_DATAOUT_Msk             (0xffffffffUL)            /*!< DATAOUT (Bitfield-Mask: 0xffffffff)                   */
/* =========================================================  DMACR  ========================================================= */
#define CRYP_DMACR_DOEN_Pos               (1UL)                     /*!< DOEN (Bit 1)                                          */
#define CRYP_DMACR_DOEN_Msk               (0x2UL)                   /*!< DOEN (Bitfield-Mask: 0x01)                            */
#define CRYP_DMACR_DIEN_Pos               (0UL)                     /*!< DIEN (Bit 0)                                          */
#define CRYP_DMACR_DIEN_Msk               (0x1UL)                   /*!< DIEN (Bitfield-Mask: 0x01)                            */
/* =========================================================  IMSCR  ========================================================= */
#define CRYP_IMSCR_OUTIM_Pos              (1UL)                     /*!< OUTIM (Bit 1)                                         */
#define CRYP_IMSCR_OUTIM_Msk              (0x2UL)                   /*!< OUTIM (Bitfield-Mask: 0x01)                           */
#define CRYP_IMSCR_INIM_Pos               (0UL)                     /*!< INIM (Bit 0)                                          */
#define CRYP_IMSCR_INIM_Msk               (0x1UL)                   /*!< INIM (Bitfield-Mask: 0x01)                            */
/* =========================================================  RISR  ========================================================== */
#define CRYP_RISR_OUTRIS_Pos              (1UL)                     /*!< OUTRIS (Bit 1)                                        */
#define CRYP_RISR_OUTRIS_Msk              (0x2UL)                   /*!< OUTRIS (Bitfield-Mask: 0x01)                          */
#define CRYP_RISR_INRIS_Pos               (0UL)                     /*!< INRIS (Bit 0)                                         */
#define CRYP_RISR_INRIS_Msk               (0x1UL)                   /*!< INRIS (Bitfield-Mask: 0x01)                           */
/* =========================================================  MISR  ========================================================== */
#define CRYP_MISR_OUTMIS_Pos              (1UL)                     /*!< OUTMIS (Bit 1)                                        */
#define CRYP_MISR_OUTMIS_Msk              (0x2UL)                   /*!< OUTMIS (Bitfield-Mask: 0x01)                          */
#define CRYP_MISR_INMIS_Pos               (0UL)                     /*!< INMIS (Bit 0)                                         */
#define CRYP_MISR_INMIS_Msk               (0x1UL)                   /*!< INMIS (Bitfield-Mask: 0x01)                           */
/* =========================================================  K0LR  ========================================================== */
#define CRYP_K0LR_b224_Pos                (0UL)                     /*!< b224 (Bit 0)                                          */
#define CRYP_K0LR_b224_Msk                (0x1UL)                   /*!< b224 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b225_Pos                (1UL)                     /*!< b225 (Bit 1)                                          */
#define CRYP_K0LR_b225_Msk                (0x2UL)                   /*!< b225 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b226_Pos                (2UL)                     /*!< b226 (Bit 2)                                          */
#define CRYP_K0LR_b226_Msk                (0x4UL)                   /*!< b226 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b227_Pos                (3UL)                     /*!< b227 (Bit 3)                                          */
#define CRYP_K0LR_b227_Msk                (0x8UL)                   /*!< b227 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b228_Pos                (4UL)                     /*!< b228 (Bit 4)                                          */
#define CRYP_K0LR_b228_Msk                (0x10UL)                  /*!< b228 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b229_Pos                (5UL)                     /*!< b229 (Bit 5)                                          */
#define CRYP_K0LR_b229_Msk                (0x20UL)                  /*!< b229 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b230_Pos                (6UL)                     /*!< b230 (Bit 6)                                          */
#define CRYP_K0LR_b230_Msk                (0x40UL)                  /*!< b230 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b231_Pos                (7UL)                     /*!< b231 (Bit 7)                                          */
#define CRYP_K0LR_b231_Msk                (0x80UL)                  /*!< b231 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b232_Pos                (8UL)                     /*!< b232 (Bit 8)                                          */
#define CRYP_K0LR_b232_Msk                (0x100UL)                 /*!< b232 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b233_Pos                (9UL)                     /*!< b233 (Bit 9)                                          */
#define CRYP_K0LR_b233_Msk                (0x200UL)                 /*!< b233 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b234_Pos                (10UL)                    /*!< b234 (Bit 10)                                         */
#define CRYP_K0LR_b234_Msk                (0x400UL)                 /*!< b234 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b235_Pos                (11UL)                    /*!< b235 (Bit 11)                                         */
#define CRYP_K0LR_b235_Msk                (0x800UL)                 /*!< b235 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b236_Pos                (12UL)                    /*!< b236 (Bit 12)                                         */
#define CRYP_K0LR_b236_Msk                (0x1000UL)                /*!< b236 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b237_Pos                (13UL)                    /*!< b237 (Bit 13)                                         */
#define CRYP_K0LR_b237_Msk                (0x2000UL)                /*!< b237 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b238_Pos                (14UL)                    /*!< b238 (Bit 14)                                         */
#define CRYP_K0LR_b238_Msk                (0x4000UL)                /*!< b238 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b239_Pos                (15UL)                    /*!< b239 (Bit 15)                                         */
#define CRYP_K0LR_b239_Msk                (0x8000UL)                /*!< b239 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b240_Pos                (16UL)                    /*!< b240 (Bit 16)                                         */
#define CRYP_K0LR_b240_Msk                (0x10000UL)               /*!< b240 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b241_Pos                (17UL)                    /*!< b241 (Bit 17)                                         */
#define CRYP_K0LR_b241_Msk                (0x20000UL)               /*!< b241 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b242_Pos                (18UL)                    /*!< b242 (Bit 18)                                         */
#define CRYP_K0LR_b242_Msk                (0x40000UL)               /*!< b242 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b243_Pos                (19UL)                    /*!< b243 (Bit 19)                                         */
#define CRYP_K0LR_b243_Msk                (0x80000UL)               /*!< b243 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b244_Pos                (20UL)                    /*!< b244 (Bit 20)                                         */
#define CRYP_K0LR_b244_Msk                (0x100000UL)              /*!< b244 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b245_Pos                (21UL)                    /*!< b245 (Bit 21)                                         */
#define CRYP_K0LR_b245_Msk                (0x200000UL)              /*!< b245 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b246_Pos                (22UL)                    /*!< b246 (Bit 22)                                         */
#define CRYP_K0LR_b246_Msk                (0x400000UL)              /*!< b246 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b247_Pos                (23UL)                    /*!< b247 (Bit 23)                                         */
#define CRYP_K0LR_b247_Msk                (0x800000UL)              /*!< b247 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b248_Pos                (24UL)                    /*!< b248 (Bit 24)                                         */
#define CRYP_K0LR_b248_Msk                (0x1000000UL)             /*!< b248 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b249_Pos                (25UL)                    /*!< b249 (Bit 25)                                         */
#define CRYP_K0LR_b249_Msk                (0x2000000UL)             /*!< b249 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b250_Pos                (26UL)                    /*!< b250 (Bit 26)                                         */
#define CRYP_K0LR_b250_Msk                (0x4000000UL)             /*!< b250 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b251_Pos                (27UL)                    /*!< b251 (Bit 27)                                         */
#define CRYP_K0LR_b251_Msk                (0x8000000UL)             /*!< b251 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b252_Pos                (28UL)                    /*!< b252 (Bit 28)                                         */
#define CRYP_K0LR_b252_Msk                (0x10000000UL)            /*!< b252 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b253_Pos                (29UL)                    /*!< b253 (Bit 29)                                         */
#define CRYP_K0LR_b253_Msk                (0x20000000UL)            /*!< b253 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b254_Pos                (30UL)                    /*!< b254 (Bit 30)                                         */
#define CRYP_K0LR_b254_Msk                (0x40000000UL)            /*!< b254 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0LR_b255_Pos                (31UL)                    /*!< b255 (Bit 31)                                         */
#define CRYP_K0LR_b255_Msk                (0x80000000UL)            /*!< b255 (Bitfield-Mask: 0x01)                            */
/* =========================================================  K0RR  ========================================================== */
#define CRYP_K0RR_b192_Pos                (0UL)                     /*!< b192 (Bit 0)                                          */
#define CRYP_K0RR_b192_Msk                (0x1UL)                   /*!< b192 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b193_Pos                (1UL)                     /*!< b193 (Bit 1)                                          */
#define CRYP_K0RR_b193_Msk                (0x2UL)                   /*!< b193 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b194_Pos                (2UL)                     /*!< b194 (Bit 2)                                          */
#define CRYP_K0RR_b194_Msk                (0x4UL)                   /*!< b194 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b195_Pos                (3UL)                     /*!< b195 (Bit 3)                                          */
#define CRYP_K0RR_b195_Msk                (0x8UL)                   /*!< b195 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b196_Pos                (4UL)                     /*!< b196 (Bit 4)                                          */
#define CRYP_K0RR_b196_Msk                (0x10UL)                  /*!< b196 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b197_Pos                (5UL)                     /*!< b197 (Bit 5)                                          */
#define CRYP_K0RR_b197_Msk                (0x20UL)                  /*!< b197 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b198_Pos                (6UL)                     /*!< b198 (Bit 6)                                          */
#define CRYP_K0RR_b198_Msk                (0x40UL)                  /*!< b198 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b199_Pos                (7UL)                     /*!< b199 (Bit 7)                                          */
#define CRYP_K0RR_b199_Msk                (0x80UL)                  /*!< b199 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b200_Pos                (8UL)                     /*!< b200 (Bit 8)                                          */
#define CRYP_K0RR_b200_Msk                (0x100UL)                 /*!< b200 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b201_Pos                (9UL)                     /*!< b201 (Bit 9)                                          */
#define CRYP_K0RR_b201_Msk                (0x200UL)                 /*!< b201 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b202_Pos                (10UL)                    /*!< b202 (Bit 10)                                         */
#define CRYP_K0RR_b202_Msk                (0x400UL)                 /*!< b202 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b203_Pos                (11UL)                    /*!< b203 (Bit 11)                                         */
#define CRYP_K0RR_b203_Msk                (0x800UL)                 /*!< b203 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b204_Pos                (12UL)                    /*!< b204 (Bit 12)                                         */
#define CRYP_K0RR_b204_Msk                (0x1000UL)                /*!< b204 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b205_Pos                (13UL)                    /*!< b205 (Bit 13)                                         */
#define CRYP_K0RR_b205_Msk                (0x2000UL)                /*!< b205 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b206_Pos                (14UL)                    /*!< b206 (Bit 14)                                         */
#define CRYP_K0RR_b206_Msk                (0x4000UL)                /*!< b206 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b207_Pos                (15UL)                    /*!< b207 (Bit 15)                                         */
#define CRYP_K0RR_b207_Msk                (0x8000UL)                /*!< b207 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b208_Pos                (16UL)                    /*!< b208 (Bit 16)                                         */
#define CRYP_K0RR_b208_Msk                (0x10000UL)               /*!< b208 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b209_Pos                (17UL)                    /*!< b209 (Bit 17)                                         */
#define CRYP_K0RR_b209_Msk                (0x20000UL)               /*!< b209 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b210_Pos                (18UL)                    /*!< b210 (Bit 18)                                         */
#define CRYP_K0RR_b210_Msk                (0x40000UL)               /*!< b210 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b211_Pos                (19UL)                    /*!< b211 (Bit 19)                                         */
#define CRYP_K0RR_b211_Msk                (0x80000UL)               /*!< b211 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b212_Pos                (20UL)                    /*!< b212 (Bit 20)                                         */
#define CRYP_K0RR_b212_Msk                (0x100000UL)              /*!< b212 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b213_Pos                (21UL)                    /*!< b213 (Bit 21)                                         */
#define CRYP_K0RR_b213_Msk                (0x200000UL)              /*!< b213 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b214_Pos                (22UL)                    /*!< b214 (Bit 22)                                         */
#define CRYP_K0RR_b214_Msk                (0x400000UL)              /*!< b214 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b215_Pos                (23UL)                    /*!< b215 (Bit 23)                                         */
#define CRYP_K0RR_b215_Msk                (0x800000UL)              /*!< b215 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b216_Pos                (24UL)                    /*!< b216 (Bit 24)                                         */
#define CRYP_K0RR_b216_Msk                (0x1000000UL)             /*!< b216 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b217_Pos                (25UL)                    /*!< b217 (Bit 25)                                         */
#define CRYP_K0RR_b217_Msk                (0x2000000UL)             /*!< b217 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b218_Pos                (26UL)                    /*!< b218 (Bit 26)                                         */
#define CRYP_K0RR_b218_Msk                (0x4000000UL)             /*!< b218 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b219_Pos                (27UL)                    /*!< b219 (Bit 27)                                         */
#define CRYP_K0RR_b219_Msk                (0x8000000UL)             /*!< b219 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b220_Pos                (28UL)                    /*!< b220 (Bit 28)                                         */
#define CRYP_K0RR_b220_Msk                (0x10000000UL)            /*!< b220 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b221_Pos                (29UL)                    /*!< b221 (Bit 29)                                         */
#define CRYP_K0RR_b221_Msk                (0x20000000UL)            /*!< b221 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b222_Pos                (30UL)                    /*!< b222 (Bit 30)                                         */
#define CRYP_K0RR_b222_Msk                (0x40000000UL)            /*!< b222 (Bitfield-Mask: 0x01)                            */
#define CRYP_K0RR_b223_Pos                (31UL)                    /*!< b223 (Bit 31)                                         */
#define CRYP_K0RR_b223_Msk                (0x80000000UL)            /*!< b223 (Bitfield-Mask: 0x01)                            */
/* =========================================================  K1LR  ========================================================== */
#define CRYP_K1LR_b160_Pos                (0UL)                     /*!< b160 (Bit 0)                                          */
#define CRYP_K1LR_b160_Msk                (0x1UL)                   /*!< b160 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b161_Pos                (1UL)                     /*!< b161 (Bit 1)                                          */
#define CRYP_K1LR_b161_Msk                (0x2UL)                   /*!< b161 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b162_Pos                (2UL)                     /*!< b162 (Bit 2)                                          */
#define CRYP_K1LR_b162_Msk                (0x4UL)                   /*!< b162 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b163_Pos                (3UL)                     /*!< b163 (Bit 3)                                          */
#define CRYP_K1LR_b163_Msk                (0x8UL)                   /*!< b163 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b164_Pos                (4UL)                     /*!< b164 (Bit 4)                                          */
#define CRYP_K1LR_b164_Msk                (0x10UL)                  /*!< b164 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b165_Pos                (5UL)                     /*!< b165 (Bit 5)                                          */
#define CRYP_K1LR_b165_Msk                (0x20UL)                  /*!< b165 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b166_Pos                (6UL)                     /*!< b166 (Bit 6)                                          */
#define CRYP_K1LR_b166_Msk                (0x40UL)                  /*!< b166 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b167_Pos                (7UL)                     /*!< b167 (Bit 7)                                          */
#define CRYP_K1LR_b167_Msk                (0x80UL)                  /*!< b167 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b168_Pos                (8UL)                     /*!< b168 (Bit 8)                                          */
#define CRYP_K1LR_b168_Msk                (0x100UL)                 /*!< b168 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b169_Pos                (9UL)                     /*!< b169 (Bit 9)                                          */
#define CRYP_K1LR_b169_Msk                (0x200UL)                 /*!< b169 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b170_Pos                (10UL)                    /*!< b170 (Bit 10)                                         */
#define CRYP_K1LR_b170_Msk                (0x400UL)                 /*!< b170 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b171_Pos                (11UL)                    /*!< b171 (Bit 11)                                         */
#define CRYP_K1LR_b171_Msk                (0x800UL)                 /*!< b171 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b172_Pos                (12UL)                    /*!< b172 (Bit 12)                                         */
#define CRYP_K1LR_b172_Msk                (0x1000UL)                /*!< b172 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b173_Pos                (13UL)                    /*!< b173 (Bit 13)                                         */
#define CRYP_K1LR_b173_Msk                (0x2000UL)                /*!< b173 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b174_Pos                (14UL)                    /*!< b174 (Bit 14)                                         */
#define CRYP_K1LR_b174_Msk                (0x4000UL)                /*!< b174 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b175_Pos                (15UL)                    /*!< b175 (Bit 15)                                         */
#define CRYP_K1LR_b175_Msk                (0x8000UL)                /*!< b175 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b176_Pos                (16UL)                    /*!< b176 (Bit 16)                                         */
#define CRYP_K1LR_b176_Msk                (0x10000UL)               /*!< b176 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b177_Pos                (17UL)                    /*!< b177 (Bit 17)                                         */
#define CRYP_K1LR_b177_Msk                (0x20000UL)               /*!< b177 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b178_Pos                (18UL)                    /*!< b178 (Bit 18)                                         */
#define CRYP_K1LR_b178_Msk                (0x40000UL)               /*!< b178 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b179_Pos                (19UL)                    /*!< b179 (Bit 19)                                         */
#define CRYP_K1LR_b179_Msk                (0x80000UL)               /*!< b179 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b180_Pos                (20UL)                    /*!< b180 (Bit 20)                                         */
#define CRYP_K1LR_b180_Msk                (0x100000UL)              /*!< b180 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b181_Pos                (21UL)                    /*!< b181 (Bit 21)                                         */
#define CRYP_K1LR_b181_Msk                (0x200000UL)              /*!< b181 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b182_Pos                (22UL)                    /*!< b182 (Bit 22)                                         */
#define CRYP_K1LR_b182_Msk                (0x400000UL)              /*!< b182 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b183_Pos                (23UL)                    /*!< b183 (Bit 23)                                         */
#define CRYP_K1LR_b183_Msk                (0x800000UL)              /*!< b183 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b184_Pos                (24UL)                    /*!< b184 (Bit 24)                                         */
#define CRYP_K1LR_b184_Msk                (0x1000000UL)             /*!< b184 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b185_Pos                (25UL)                    /*!< b185 (Bit 25)                                         */
#define CRYP_K1LR_b185_Msk                (0x2000000UL)             /*!< b185 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b186_Pos                (26UL)                    /*!< b186 (Bit 26)                                         */
#define CRYP_K1LR_b186_Msk                (0x4000000UL)             /*!< b186 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b187_Pos                (27UL)                    /*!< b187 (Bit 27)                                         */
#define CRYP_K1LR_b187_Msk                (0x8000000UL)             /*!< b187 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b188_Pos                (28UL)                    /*!< b188 (Bit 28)                                         */
#define CRYP_K1LR_b188_Msk                (0x10000000UL)            /*!< b188 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b189_Pos                (29UL)                    /*!< b189 (Bit 29)                                         */
#define CRYP_K1LR_b189_Msk                (0x20000000UL)            /*!< b189 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b190_Pos                (30UL)                    /*!< b190 (Bit 30)                                         */
#define CRYP_K1LR_b190_Msk                (0x40000000UL)            /*!< b190 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1LR_b191_Pos                (31UL)                    /*!< b191 (Bit 31)                                         */
#define CRYP_K1LR_b191_Msk                (0x80000000UL)            /*!< b191 (Bitfield-Mask: 0x01)                            */
/* =========================================================  K1RR  ========================================================== */
#define CRYP_K1RR_b128_Pos                (0UL)                     /*!< b128 (Bit 0)                                          */
#define CRYP_K1RR_b128_Msk                (0x1UL)                   /*!< b128 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b129_Pos                (1UL)                     /*!< b129 (Bit 1)                                          */
#define CRYP_K1RR_b129_Msk                (0x2UL)                   /*!< b129 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b130_Pos                (2UL)                     /*!< b130 (Bit 2)                                          */
#define CRYP_K1RR_b130_Msk                (0x4UL)                   /*!< b130 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b131_Pos                (3UL)                     /*!< b131 (Bit 3)                                          */
#define CRYP_K1RR_b131_Msk                (0x8UL)                   /*!< b131 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b132_Pos                (4UL)                     /*!< b132 (Bit 4)                                          */
#define CRYP_K1RR_b132_Msk                (0x10UL)                  /*!< b132 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b133_Pos                (5UL)                     /*!< b133 (Bit 5)                                          */
#define CRYP_K1RR_b133_Msk                (0x20UL)                  /*!< b133 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b134_Pos                (6UL)                     /*!< b134 (Bit 6)                                          */
#define CRYP_K1RR_b134_Msk                (0x40UL)                  /*!< b134 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b135_Pos                (7UL)                     /*!< b135 (Bit 7)                                          */
#define CRYP_K1RR_b135_Msk                (0x80UL)                  /*!< b135 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b136_Pos                (8UL)                     /*!< b136 (Bit 8)                                          */
#define CRYP_K1RR_b136_Msk                (0x100UL)                 /*!< b136 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b137_Pos                (9UL)                     /*!< b137 (Bit 9)                                          */
#define CRYP_K1RR_b137_Msk                (0x200UL)                 /*!< b137 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b138_Pos                (10UL)                    /*!< b138 (Bit 10)                                         */
#define CRYP_K1RR_b138_Msk                (0x400UL)                 /*!< b138 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b139_Pos                (11UL)                    /*!< b139 (Bit 11)                                         */
#define CRYP_K1RR_b139_Msk                (0x800UL)                 /*!< b139 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b140_Pos                (12UL)                    /*!< b140 (Bit 12)                                         */
#define CRYP_K1RR_b140_Msk                (0x1000UL)                /*!< b140 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b141_Pos                (13UL)                    /*!< b141 (Bit 13)                                         */
#define CRYP_K1RR_b141_Msk                (0x2000UL)                /*!< b141 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b142_Pos                (14UL)                    /*!< b142 (Bit 14)                                         */
#define CRYP_K1RR_b142_Msk                (0x4000UL)                /*!< b142 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b143_Pos                (15UL)                    /*!< b143 (Bit 15)                                         */
#define CRYP_K1RR_b143_Msk                (0x8000UL)                /*!< b143 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b144_Pos                (16UL)                    /*!< b144 (Bit 16)                                         */
#define CRYP_K1RR_b144_Msk                (0x10000UL)               /*!< b144 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b145_Pos                (17UL)                    /*!< b145 (Bit 17)                                         */
#define CRYP_K1RR_b145_Msk                (0x20000UL)               /*!< b145 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b146_Pos                (18UL)                    /*!< b146 (Bit 18)                                         */
#define CRYP_K1RR_b146_Msk                (0x40000UL)               /*!< b146 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b147_Pos                (19UL)                    /*!< b147 (Bit 19)                                         */
#define CRYP_K1RR_b147_Msk                (0x80000UL)               /*!< b147 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b148_Pos                (20UL)                    /*!< b148 (Bit 20)                                         */
#define CRYP_K1RR_b148_Msk                (0x100000UL)              /*!< b148 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b149_Pos                (21UL)                    /*!< b149 (Bit 21)                                         */
#define CRYP_K1RR_b149_Msk                (0x200000UL)              /*!< b149 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b150_Pos                (22UL)                    /*!< b150 (Bit 22)                                         */
#define CRYP_K1RR_b150_Msk                (0x400000UL)              /*!< b150 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b151_Pos                (23UL)                    /*!< b151 (Bit 23)                                         */
#define CRYP_K1RR_b151_Msk                (0x800000UL)              /*!< b151 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b152_Pos                (24UL)                    /*!< b152 (Bit 24)                                         */
#define CRYP_K1RR_b152_Msk                (0x1000000UL)             /*!< b152 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b153_Pos                (25UL)                    /*!< b153 (Bit 25)                                         */
#define CRYP_K1RR_b153_Msk                (0x2000000UL)             /*!< b153 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b154_Pos                (26UL)                    /*!< b154 (Bit 26)                                         */
#define CRYP_K1RR_b154_Msk                (0x4000000UL)             /*!< b154 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b155_Pos                (27UL)                    /*!< b155 (Bit 27)                                         */
#define CRYP_K1RR_b155_Msk                (0x8000000UL)             /*!< b155 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b156_Pos                (28UL)                    /*!< b156 (Bit 28)                                         */
#define CRYP_K1RR_b156_Msk                (0x10000000UL)            /*!< b156 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b157_Pos                (29UL)                    /*!< b157 (Bit 29)                                         */
#define CRYP_K1RR_b157_Msk                (0x20000000UL)            /*!< b157 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b158_Pos                (30UL)                    /*!< b158 (Bit 30)                                         */
#define CRYP_K1RR_b158_Msk                (0x40000000UL)            /*!< b158 (Bitfield-Mask: 0x01)                            */
#define CRYP_K1RR_b159_Pos                (31UL)                    /*!< b159 (Bit 31)                                         */
#define CRYP_K1RR_b159_Msk                (0x80000000UL)            /*!< b159 (Bitfield-Mask: 0x01)                            */
/* =========================================================  K2LR  ========================================================== */
#define CRYP_K2LR_b96_Pos                 (0UL)                     /*!< b96 (Bit 0)                                           */
#define CRYP_K2LR_b96_Msk                 (0x1UL)                   /*!< b96 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2LR_b97_Pos                 (1UL)                     /*!< b97 (Bit 1)                                           */
#define CRYP_K2LR_b97_Msk                 (0x2UL)                   /*!< b97 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2LR_b98_Pos                 (2UL)                     /*!< b98 (Bit 2)                                           */
#define CRYP_K2LR_b98_Msk                 (0x4UL)                   /*!< b98 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2LR_b99_Pos                 (3UL)                     /*!< b99 (Bit 3)                                           */
#define CRYP_K2LR_b99_Msk                 (0x8UL)                   /*!< b99 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2LR_b100_Pos                (4UL)                     /*!< b100 (Bit 4)                                          */
#define CRYP_K2LR_b100_Msk                (0x10UL)                  /*!< b100 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b101_Pos                (5UL)                     /*!< b101 (Bit 5)                                          */
#define CRYP_K2LR_b101_Msk                (0x20UL)                  /*!< b101 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b102_Pos                (6UL)                     /*!< b102 (Bit 6)                                          */
#define CRYP_K2LR_b102_Msk                (0x40UL)                  /*!< b102 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b103_Pos                (7UL)                     /*!< b103 (Bit 7)                                          */
#define CRYP_K2LR_b103_Msk                (0x80UL)                  /*!< b103 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b104_Pos                (8UL)                     /*!< b104 (Bit 8)                                          */
#define CRYP_K2LR_b104_Msk                (0x100UL)                 /*!< b104 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b105_Pos                (9UL)                     /*!< b105 (Bit 9)                                          */
#define CRYP_K2LR_b105_Msk                (0x200UL)                 /*!< b105 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b106_Pos                (10UL)                    /*!< b106 (Bit 10)                                         */
#define CRYP_K2LR_b106_Msk                (0x400UL)                 /*!< b106 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b107_Pos                (11UL)                    /*!< b107 (Bit 11)                                         */
#define CRYP_K2LR_b107_Msk                (0x800UL)                 /*!< b107 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b108_Pos                (12UL)                    /*!< b108 (Bit 12)                                         */
#define CRYP_K2LR_b108_Msk                (0x1000UL)                /*!< b108 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b109_Pos                (13UL)                    /*!< b109 (Bit 13)                                         */
#define CRYP_K2LR_b109_Msk                (0x2000UL)                /*!< b109 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b110_Pos                (14UL)                    /*!< b110 (Bit 14)                                         */
#define CRYP_K2LR_b110_Msk                (0x4000UL)                /*!< b110 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b111_Pos                (15UL)                    /*!< b111 (Bit 15)                                         */
#define CRYP_K2LR_b111_Msk                (0x8000UL)                /*!< b111 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b112_Pos                (16UL)                    /*!< b112 (Bit 16)                                         */
#define CRYP_K2LR_b112_Msk                (0x10000UL)               /*!< b112 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b113_Pos                (17UL)                    /*!< b113 (Bit 17)                                         */
#define CRYP_K2LR_b113_Msk                (0x20000UL)               /*!< b113 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b114_Pos                (18UL)                    /*!< b114 (Bit 18)                                         */
#define CRYP_K2LR_b114_Msk                (0x40000UL)               /*!< b114 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b115_Pos                (19UL)                    /*!< b115 (Bit 19)                                         */
#define CRYP_K2LR_b115_Msk                (0x80000UL)               /*!< b115 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b116_Pos                (20UL)                    /*!< b116 (Bit 20)                                         */
#define CRYP_K2LR_b116_Msk                (0x100000UL)              /*!< b116 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b117_Pos                (21UL)                    /*!< b117 (Bit 21)                                         */
#define CRYP_K2LR_b117_Msk                (0x200000UL)              /*!< b117 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b118_Pos                (22UL)                    /*!< b118 (Bit 22)                                         */
#define CRYP_K2LR_b118_Msk                (0x400000UL)              /*!< b118 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b119_Pos                (23UL)                    /*!< b119 (Bit 23)                                         */
#define CRYP_K2LR_b119_Msk                (0x800000UL)              /*!< b119 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b120_Pos                (24UL)                    /*!< b120 (Bit 24)                                         */
#define CRYP_K2LR_b120_Msk                (0x1000000UL)             /*!< b120 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b121_Pos                (25UL)                    /*!< b121 (Bit 25)                                         */
#define CRYP_K2LR_b121_Msk                (0x2000000UL)             /*!< b121 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b122_Pos                (26UL)                    /*!< b122 (Bit 26)                                         */
#define CRYP_K2LR_b122_Msk                (0x4000000UL)             /*!< b122 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b123_Pos                (27UL)                    /*!< b123 (Bit 27)                                         */
#define CRYP_K2LR_b123_Msk                (0x8000000UL)             /*!< b123 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b124_Pos                (28UL)                    /*!< b124 (Bit 28)                                         */
#define CRYP_K2LR_b124_Msk                (0x10000000UL)            /*!< b124 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b125_Pos                (29UL)                    /*!< b125 (Bit 29)                                         */
#define CRYP_K2LR_b125_Msk                (0x20000000UL)            /*!< b125 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b126_Pos                (30UL)                    /*!< b126 (Bit 30)                                         */
#define CRYP_K2LR_b126_Msk                (0x40000000UL)            /*!< b126 (Bitfield-Mask: 0x01)                            */
#define CRYP_K2LR_b127_Pos                (31UL)                    /*!< b127 (Bit 31)                                         */
#define CRYP_K2LR_b127_Msk                (0x80000000UL)            /*!< b127 (Bitfield-Mask: 0x01)                            */
/* =========================================================  K2RR  ========================================================== */
#define CRYP_K2RR_b64_Pos                 (0UL)                     /*!< b64 (Bit 0)                                           */
#define CRYP_K2RR_b64_Msk                 (0x1UL)                   /*!< b64 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b65_Pos                 (1UL)                     /*!< b65 (Bit 1)                                           */
#define CRYP_K2RR_b65_Msk                 (0x2UL)                   /*!< b65 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b66_Pos                 (2UL)                     /*!< b66 (Bit 2)                                           */
#define CRYP_K2RR_b66_Msk                 (0x4UL)                   /*!< b66 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b67_Pos                 (3UL)                     /*!< b67 (Bit 3)                                           */
#define CRYP_K2RR_b67_Msk                 (0x8UL)                   /*!< b67 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b68_Pos                 (4UL)                     /*!< b68 (Bit 4)                                           */
#define CRYP_K2RR_b68_Msk                 (0x10UL)                  /*!< b68 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b69_Pos                 (5UL)                     /*!< b69 (Bit 5)                                           */
#define CRYP_K2RR_b69_Msk                 (0x20UL)                  /*!< b69 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b70_Pos                 (6UL)                     /*!< b70 (Bit 6)                                           */
#define CRYP_K2RR_b70_Msk                 (0x40UL)                  /*!< b70 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b71_Pos                 (7UL)                     /*!< b71 (Bit 7)                                           */
#define CRYP_K2RR_b71_Msk                 (0x80UL)                  /*!< b71 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b72_Pos                 (8UL)                     /*!< b72 (Bit 8)                                           */
#define CRYP_K2RR_b72_Msk                 (0x100UL)                 /*!< b72 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b73_Pos                 (9UL)                     /*!< b73 (Bit 9)                                           */
#define CRYP_K2RR_b73_Msk                 (0x200UL)                 /*!< b73 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b74_Pos                 (10UL)                    /*!< b74 (Bit 10)                                          */
#define CRYP_K2RR_b74_Msk                 (0x400UL)                 /*!< b74 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b75_Pos                 (11UL)                    /*!< b75 (Bit 11)                                          */
#define CRYP_K2RR_b75_Msk                 (0x800UL)                 /*!< b75 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b76_Pos                 (12UL)                    /*!< b76 (Bit 12)                                          */
#define CRYP_K2RR_b76_Msk                 (0x1000UL)                /*!< b76 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b77_Pos                 (13UL)                    /*!< b77 (Bit 13)                                          */
#define CRYP_K2RR_b77_Msk                 (0x2000UL)                /*!< b77 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b78_Pos                 (14UL)                    /*!< b78 (Bit 14)                                          */
#define CRYP_K2RR_b78_Msk                 (0x4000UL)                /*!< b78 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b79_Pos                 (15UL)                    /*!< b79 (Bit 15)                                          */
#define CRYP_K2RR_b79_Msk                 (0x8000UL)                /*!< b79 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b80_Pos                 (16UL)                    /*!< b80 (Bit 16)                                          */
#define CRYP_K2RR_b80_Msk                 (0x10000UL)               /*!< b80 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b81_Pos                 (17UL)                    /*!< b81 (Bit 17)                                          */
#define CRYP_K2RR_b81_Msk                 (0x20000UL)               /*!< b81 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b82_Pos                 (18UL)                    /*!< b82 (Bit 18)                                          */
#define CRYP_K2RR_b82_Msk                 (0x40000UL)               /*!< b82 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b83_Pos                 (19UL)                    /*!< b83 (Bit 19)                                          */
#define CRYP_K2RR_b83_Msk                 (0x80000UL)               /*!< b83 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b84_Pos                 (20UL)                    /*!< b84 (Bit 20)                                          */
#define CRYP_K2RR_b84_Msk                 (0x100000UL)              /*!< b84 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b85_Pos                 (21UL)                    /*!< b85 (Bit 21)                                          */
#define CRYP_K2RR_b85_Msk                 (0x200000UL)              /*!< b85 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b86_Pos                 (22UL)                    /*!< b86 (Bit 22)                                          */
#define CRYP_K2RR_b86_Msk                 (0x400000UL)              /*!< b86 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b87_Pos                 (23UL)                    /*!< b87 (Bit 23)                                          */
#define CRYP_K2RR_b87_Msk                 (0x800000UL)              /*!< b87 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b88_Pos                 (24UL)                    /*!< b88 (Bit 24)                                          */
#define CRYP_K2RR_b88_Msk                 (0x1000000UL)             /*!< b88 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b89_Pos                 (25UL)                    /*!< b89 (Bit 25)                                          */
#define CRYP_K2RR_b89_Msk                 (0x2000000UL)             /*!< b89 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b90_Pos                 (26UL)                    /*!< b90 (Bit 26)                                          */
#define CRYP_K2RR_b90_Msk                 (0x4000000UL)             /*!< b90 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b91_Pos                 (27UL)                    /*!< b91 (Bit 27)                                          */
#define CRYP_K2RR_b91_Msk                 (0x8000000UL)             /*!< b91 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b92_Pos                 (28UL)                    /*!< b92 (Bit 28)                                          */
#define CRYP_K2RR_b92_Msk                 (0x10000000UL)            /*!< b92 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b93_Pos                 (29UL)                    /*!< b93 (Bit 29)                                          */
#define CRYP_K2RR_b93_Msk                 (0x20000000UL)            /*!< b93 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b94_Pos                 (30UL)                    /*!< b94 (Bit 30)                                          */
#define CRYP_K2RR_b94_Msk                 (0x40000000UL)            /*!< b94 (Bitfield-Mask: 0x01)                             */
#define CRYP_K2RR_b95_Pos                 (31UL)                    /*!< b95 (Bit 31)                                          */
#define CRYP_K2RR_b95_Msk                 (0x80000000UL)            /*!< b95 (Bitfield-Mask: 0x01)                             */
/* =========================================================  K3LR  ========================================================== */
#define CRYP_K3LR_b32_Pos                 (0UL)                     /*!< b32 (Bit 0)                                           */
#define CRYP_K3LR_b32_Msk                 (0x1UL)                   /*!< b32 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b33_Pos                 (1UL)                     /*!< b33 (Bit 1)                                           */
#define CRYP_K3LR_b33_Msk                 (0x2UL)                   /*!< b33 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b34_Pos                 (2UL)                     /*!< b34 (Bit 2)                                           */
#define CRYP_K3LR_b34_Msk                 (0x4UL)                   /*!< b34 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b35_Pos                 (3UL)                     /*!< b35 (Bit 3)                                           */
#define CRYP_K3LR_b35_Msk                 (0x8UL)                   /*!< b35 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b36_Pos                 (4UL)                     /*!< b36 (Bit 4)                                           */
#define CRYP_K3LR_b36_Msk                 (0x10UL)                  /*!< b36 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b37_Pos                 (5UL)                     /*!< b37 (Bit 5)                                           */
#define CRYP_K3LR_b37_Msk                 (0x20UL)                  /*!< b37 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b38_Pos                 (6UL)                     /*!< b38 (Bit 6)                                           */
#define CRYP_K3LR_b38_Msk                 (0x40UL)                  /*!< b38 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b39_Pos                 (7UL)                     /*!< b39 (Bit 7)                                           */
#define CRYP_K3LR_b39_Msk                 (0x80UL)                  /*!< b39 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b40_Pos                 (8UL)                     /*!< b40 (Bit 8)                                           */
#define CRYP_K3LR_b40_Msk                 (0x100UL)                 /*!< b40 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b41_Pos                 (9UL)                     /*!< b41 (Bit 9)                                           */
#define CRYP_K3LR_b41_Msk                 (0x200UL)                 /*!< b41 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b42_Pos                 (10UL)                    /*!< b42 (Bit 10)                                          */
#define CRYP_K3LR_b42_Msk                 (0x400UL)                 /*!< b42 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b43_Pos                 (11UL)                    /*!< b43 (Bit 11)                                          */
#define CRYP_K3LR_b43_Msk                 (0x800UL)                 /*!< b43 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b44_Pos                 (12UL)                    /*!< b44 (Bit 12)                                          */
#define CRYP_K3LR_b44_Msk                 (0x1000UL)                /*!< b44 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b45_Pos                 (13UL)                    /*!< b45 (Bit 13)                                          */
#define CRYP_K3LR_b45_Msk                 (0x2000UL)                /*!< b45 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b46_Pos                 (14UL)                    /*!< b46 (Bit 14)                                          */
#define CRYP_K3LR_b46_Msk                 (0x4000UL)                /*!< b46 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b47_Pos                 (15UL)                    /*!< b47 (Bit 15)                                          */
#define CRYP_K3LR_b47_Msk                 (0x8000UL)                /*!< b47 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b48_Pos                 (16UL)                    /*!< b48 (Bit 16)                                          */
#define CRYP_K3LR_b48_Msk                 (0x10000UL)               /*!< b48 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b49_Pos                 (17UL)                    /*!< b49 (Bit 17)                                          */
#define CRYP_K3LR_b49_Msk                 (0x20000UL)               /*!< b49 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b50_Pos                 (18UL)                    /*!< b50 (Bit 18)                                          */
#define CRYP_K3LR_b50_Msk                 (0x40000UL)               /*!< b50 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b51_Pos                 (19UL)                    /*!< b51 (Bit 19)                                          */
#define CRYP_K3LR_b51_Msk                 (0x80000UL)               /*!< b51 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b52_Pos                 (20UL)                    /*!< b52 (Bit 20)                                          */
#define CRYP_K3LR_b52_Msk                 (0x100000UL)              /*!< b52 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b53_Pos                 (21UL)                    /*!< b53 (Bit 21)                                          */
#define CRYP_K3LR_b53_Msk                 (0x200000UL)              /*!< b53 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b54_Pos                 (22UL)                    /*!< b54 (Bit 22)                                          */
#define CRYP_K3LR_b54_Msk                 (0x400000UL)              /*!< b54 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b55_Pos                 (23UL)                    /*!< b55 (Bit 23)                                          */
#define CRYP_K3LR_b55_Msk                 (0x800000UL)              /*!< b55 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b56_Pos                 (24UL)                    /*!< b56 (Bit 24)                                          */
#define CRYP_K3LR_b56_Msk                 (0x1000000UL)             /*!< b56 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b57_Pos                 (25UL)                    /*!< b57 (Bit 25)                                          */
#define CRYP_K3LR_b57_Msk                 (0x2000000UL)             /*!< b57 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b58_Pos                 (26UL)                    /*!< b58 (Bit 26)                                          */
#define CRYP_K3LR_b58_Msk                 (0x4000000UL)             /*!< b58 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b59_Pos                 (27UL)                    /*!< b59 (Bit 27)                                          */
#define CRYP_K3LR_b59_Msk                 (0x8000000UL)             /*!< b59 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b60_Pos                 (28UL)                    /*!< b60 (Bit 28)                                          */
#define CRYP_K3LR_b60_Msk                 (0x10000000UL)            /*!< b60 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b61_Pos                 (29UL)                    /*!< b61 (Bit 29)                                          */
#define CRYP_K3LR_b61_Msk                 (0x20000000UL)            /*!< b61 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b62_Pos                 (30UL)                    /*!< b62 (Bit 30)                                          */
#define CRYP_K3LR_b62_Msk                 (0x40000000UL)            /*!< b62 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3LR_b63_Pos                 (31UL)                    /*!< b63 (Bit 31)                                          */
#define CRYP_K3LR_b63_Msk                 (0x80000000UL)            /*!< b63 (Bitfield-Mask: 0x01)                             */
/* =========================================================  K3RR  ========================================================== */
#define CRYP_K3RR_b0_Pos                  (0UL)                     /*!< b0 (Bit 0)                                            */
#define CRYP_K3RR_b0_Msk                  (0x1UL)                   /*!< b0 (Bitfield-Mask: 0x01)                              */
#define CRYP_K3RR_b1_Pos                  (1UL)                     /*!< b1 (Bit 1)                                            */
#define CRYP_K3RR_b1_Msk                  (0x2UL)                   /*!< b1 (Bitfield-Mask: 0x01)                              */
#define CRYP_K3RR_b2_Pos                  (2UL)                     /*!< b2 (Bit 2)                                            */
#define CRYP_K3RR_b2_Msk                  (0x4UL)                   /*!< b2 (Bitfield-Mask: 0x01)                              */
#define CRYP_K3RR_b3_Pos                  (3UL)                     /*!< b3 (Bit 3)                                            */
#define CRYP_K3RR_b3_Msk                  (0x8UL)                   /*!< b3 (Bitfield-Mask: 0x01)                              */
#define CRYP_K3RR_b4_Pos                  (4UL)                     /*!< b4 (Bit 4)                                            */
#define CRYP_K3RR_b4_Msk                  (0x10UL)                  /*!< b4 (Bitfield-Mask: 0x01)                              */
#define CRYP_K3RR_b5_Pos                  (5UL)                     /*!< b5 (Bit 5)                                            */
#define CRYP_K3RR_b5_Msk                  (0x20UL)                  /*!< b5 (Bitfield-Mask: 0x01)                              */
#define CRYP_K3RR_b6_Pos                  (6UL)                     /*!< b6 (Bit 6)                                            */
#define CRYP_K3RR_b6_Msk                  (0x40UL)                  /*!< b6 (Bitfield-Mask: 0x01)                              */
#define CRYP_K3RR_b7_Pos                  (7UL)                     /*!< b7 (Bit 7)                                            */
#define CRYP_K3RR_b7_Msk                  (0x80UL)                  /*!< b7 (Bitfield-Mask: 0x01)                              */
#define CRYP_K3RR_b8_Pos                  (8UL)                     /*!< b8 (Bit 8)                                            */
#define CRYP_K3RR_b8_Msk                  (0x100UL)                 /*!< b8 (Bitfield-Mask: 0x01)                              */
#define CRYP_K3RR_b9_Pos                  (9UL)                     /*!< b9 (Bit 9)                                            */
#define CRYP_K3RR_b9_Msk                  (0x200UL)                 /*!< b9 (Bitfield-Mask: 0x01)                              */
#define CRYP_K3RR_b10_Pos                 (10UL)                    /*!< b10 (Bit 10)                                          */
#define CRYP_K3RR_b10_Msk                 (0x400UL)                 /*!< b10 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b11_Pos                 (11UL)                    /*!< b11 (Bit 11)                                          */
#define CRYP_K3RR_b11_Msk                 (0x800UL)                 /*!< b11 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b12_Pos                 (12UL)                    /*!< b12 (Bit 12)                                          */
#define CRYP_K3RR_b12_Msk                 (0x1000UL)                /*!< b12 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b13_Pos                 (13UL)                    /*!< b13 (Bit 13)                                          */
#define CRYP_K3RR_b13_Msk                 (0x2000UL)                /*!< b13 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b14_Pos                 (14UL)                    /*!< b14 (Bit 14)                                          */
#define CRYP_K3RR_b14_Msk                 (0x4000UL)                /*!< b14 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b15_Pos                 (15UL)                    /*!< b15 (Bit 15)                                          */
#define CRYP_K3RR_b15_Msk                 (0x8000UL)                /*!< b15 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b16_Pos                 (16UL)                    /*!< b16 (Bit 16)                                          */
#define CRYP_K3RR_b16_Msk                 (0x10000UL)               /*!< b16 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b17_Pos                 (17UL)                    /*!< b17 (Bit 17)                                          */
#define CRYP_K3RR_b17_Msk                 (0x20000UL)               /*!< b17 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b18_Pos                 (18UL)                    /*!< b18 (Bit 18)                                          */
#define CRYP_K3RR_b18_Msk                 (0x40000UL)               /*!< b18 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b19_Pos                 (19UL)                    /*!< b19 (Bit 19)                                          */
#define CRYP_K3RR_b19_Msk                 (0x80000UL)               /*!< b19 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b20_Pos                 (20UL)                    /*!< b20 (Bit 20)                                          */
#define CRYP_K3RR_b20_Msk                 (0x100000UL)              /*!< b20 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b21_Pos                 (21UL)                    /*!< b21 (Bit 21)                                          */
#define CRYP_K3RR_b21_Msk                 (0x200000UL)              /*!< b21 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b22_Pos                 (22UL)                    /*!< b22 (Bit 22)                                          */
#define CRYP_K3RR_b22_Msk                 (0x400000UL)              /*!< b22 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b23_Pos                 (23UL)                    /*!< b23 (Bit 23)                                          */
#define CRYP_K3RR_b23_Msk                 (0x800000UL)              /*!< b23 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b24_Pos                 (24UL)                    /*!< b24 (Bit 24)                                          */
#define CRYP_K3RR_b24_Msk                 (0x1000000UL)             /*!< b24 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b25_Pos                 (25UL)                    /*!< b25 (Bit 25)                                          */
#define CRYP_K3RR_b25_Msk                 (0x2000000UL)             /*!< b25 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b26_Pos                 (26UL)                    /*!< b26 (Bit 26)                                          */
#define CRYP_K3RR_b26_Msk                 (0x4000000UL)             /*!< b26 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b27_Pos                 (27UL)                    /*!< b27 (Bit 27)                                          */
#define CRYP_K3RR_b27_Msk                 (0x8000000UL)             /*!< b27 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b28_Pos                 (28UL)                    /*!< b28 (Bit 28)                                          */
#define CRYP_K3RR_b28_Msk                 (0x10000000UL)            /*!< b28 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b29_Pos                 (29UL)                    /*!< b29 (Bit 29)                                          */
#define CRYP_K3RR_b29_Msk                 (0x20000000UL)            /*!< b29 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b30_Pos                 (30UL)                    /*!< b30 (Bit 30)                                          */
#define CRYP_K3RR_b30_Msk                 (0x40000000UL)            /*!< b30 (Bitfield-Mask: 0x01)                             */
#define CRYP_K3RR_b31_Pos                 (31UL)                    /*!< b31 (Bit 31)                                          */
#define CRYP_K3RR_b31_Msk                 (0x80000000UL)            /*!< b31 (Bitfield-Mask: 0x01)                             */
/* =========================================================  IV0LR  ========================================================= */
#define CRYP_IV0LR_IV31_Pos               (0UL)                     /*!< IV31 (Bit 0)                                          */
#define CRYP_IV0LR_IV31_Msk               (0x1UL)                   /*!< IV31 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV30_Pos               (1UL)                     /*!< IV30 (Bit 1)                                          */
#define CRYP_IV0LR_IV30_Msk               (0x2UL)                   /*!< IV30 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV29_Pos               (2UL)                     /*!< IV29 (Bit 2)                                          */
#define CRYP_IV0LR_IV29_Msk               (0x4UL)                   /*!< IV29 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV28_Pos               (3UL)                     /*!< IV28 (Bit 3)                                          */
#define CRYP_IV0LR_IV28_Msk               (0x8UL)                   /*!< IV28 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV27_Pos               (4UL)                     /*!< IV27 (Bit 4)                                          */
#define CRYP_IV0LR_IV27_Msk               (0x10UL)                  /*!< IV27 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV26_Pos               (5UL)                     /*!< IV26 (Bit 5)                                          */
#define CRYP_IV0LR_IV26_Msk               (0x20UL)                  /*!< IV26 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV25_Pos               (6UL)                     /*!< IV25 (Bit 6)                                          */
#define CRYP_IV0LR_IV25_Msk               (0x40UL)                  /*!< IV25 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV24_Pos               (7UL)                     /*!< IV24 (Bit 7)                                          */
#define CRYP_IV0LR_IV24_Msk               (0x80UL)                  /*!< IV24 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV23_Pos               (8UL)                     /*!< IV23 (Bit 8)                                          */
#define CRYP_IV0LR_IV23_Msk               (0x100UL)                 /*!< IV23 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV22_Pos               (9UL)                     /*!< IV22 (Bit 9)                                          */
#define CRYP_IV0LR_IV22_Msk               (0x200UL)                 /*!< IV22 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV21_Pos               (10UL)                    /*!< IV21 (Bit 10)                                         */
#define CRYP_IV0LR_IV21_Msk               (0x400UL)                 /*!< IV21 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV20_Pos               (11UL)                    /*!< IV20 (Bit 11)                                         */
#define CRYP_IV0LR_IV20_Msk               (0x800UL)                 /*!< IV20 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV19_Pos               (12UL)                    /*!< IV19 (Bit 12)                                         */
#define CRYP_IV0LR_IV19_Msk               (0x1000UL)                /*!< IV19 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV18_Pos               (13UL)                    /*!< IV18 (Bit 13)                                         */
#define CRYP_IV0LR_IV18_Msk               (0x2000UL)                /*!< IV18 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV17_Pos               (14UL)                    /*!< IV17 (Bit 14)                                         */
#define CRYP_IV0LR_IV17_Msk               (0x4000UL)                /*!< IV17 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV16_Pos               (15UL)                    /*!< IV16 (Bit 15)                                         */
#define CRYP_IV0LR_IV16_Msk               (0x8000UL)                /*!< IV16 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV15_Pos               (16UL)                    /*!< IV15 (Bit 16)                                         */
#define CRYP_IV0LR_IV15_Msk               (0x10000UL)               /*!< IV15 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV14_Pos               (17UL)                    /*!< IV14 (Bit 17)                                         */
#define CRYP_IV0LR_IV14_Msk               (0x20000UL)               /*!< IV14 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV13_Pos               (18UL)                    /*!< IV13 (Bit 18)                                         */
#define CRYP_IV0LR_IV13_Msk               (0x40000UL)               /*!< IV13 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV12_Pos               (19UL)                    /*!< IV12 (Bit 19)                                         */
#define CRYP_IV0LR_IV12_Msk               (0x80000UL)               /*!< IV12 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV11_Pos               (20UL)                    /*!< IV11 (Bit 20)                                         */
#define CRYP_IV0LR_IV11_Msk               (0x100000UL)              /*!< IV11 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV10_Pos               (21UL)                    /*!< IV10 (Bit 21)                                         */
#define CRYP_IV0LR_IV10_Msk               (0x200000UL)              /*!< IV10 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0LR_IV9_Pos                (22UL)                    /*!< IV9 (Bit 22)                                          */
#define CRYP_IV0LR_IV9_Msk                (0x400000UL)              /*!< IV9 (Bitfield-Mask: 0x01)                             */
#define CRYP_IV0LR_IV8_Pos                (23UL)                    /*!< IV8 (Bit 23)                                          */
#define CRYP_IV0LR_IV8_Msk                (0x800000UL)              /*!< IV8 (Bitfield-Mask: 0x01)                             */
#define CRYP_IV0LR_IV7_Pos                (24UL)                    /*!< IV7 (Bit 24)                                          */
#define CRYP_IV0LR_IV7_Msk                (0x1000000UL)             /*!< IV7 (Bitfield-Mask: 0x01)                             */
#define CRYP_IV0LR_IV6_Pos                (25UL)                    /*!< IV6 (Bit 25)                                          */
#define CRYP_IV0LR_IV6_Msk                (0x2000000UL)             /*!< IV6 (Bitfield-Mask: 0x01)                             */
#define CRYP_IV0LR_IV5_Pos                (26UL)                    /*!< IV5 (Bit 26)                                          */
#define CRYP_IV0LR_IV5_Msk                (0x4000000UL)             /*!< IV5 (Bitfield-Mask: 0x01)                             */
#define CRYP_IV0LR_IV4_Pos                (27UL)                    /*!< IV4 (Bit 27)                                          */
#define CRYP_IV0LR_IV4_Msk                (0x8000000UL)             /*!< IV4 (Bitfield-Mask: 0x01)                             */
#define CRYP_IV0LR_IV3_Pos                (28UL)                    /*!< IV3 (Bit 28)                                          */
#define CRYP_IV0LR_IV3_Msk                (0x10000000UL)            /*!< IV3 (Bitfield-Mask: 0x01)                             */
#define CRYP_IV0LR_IV2_Pos                (29UL)                    /*!< IV2 (Bit 29)                                          */
#define CRYP_IV0LR_IV2_Msk                (0x20000000UL)            /*!< IV2 (Bitfield-Mask: 0x01)                             */
#define CRYP_IV0LR_IV1_Pos                (30UL)                    /*!< IV1 (Bit 30)                                          */
#define CRYP_IV0LR_IV1_Msk                (0x40000000UL)            /*!< IV1 (Bitfield-Mask: 0x01)                             */
#define CRYP_IV0LR_IV0_Pos                (31UL)                    /*!< IV0 (Bit 31)                                          */
#define CRYP_IV0LR_IV0_Msk                (0x80000000UL)            /*!< IV0 (Bitfield-Mask: 0x01)                             */
/* =========================================================  IV0RR  ========================================================= */
#define CRYP_IV0RR_IV63_Pos               (0UL)                     /*!< IV63 (Bit 0)                                          */
#define CRYP_IV0RR_IV63_Msk               (0x1UL)                   /*!< IV63 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV62_Pos               (1UL)                     /*!< IV62 (Bit 1)                                          */
#define CRYP_IV0RR_IV62_Msk               (0x2UL)                   /*!< IV62 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV61_Pos               (2UL)                     /*!< IV61 (Bit 2)                                          */
#define CRYP_IV0RR_IV61_Msk               (0x4UL)                   /*!< IV61 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV60_Pos               (3UL)                     /*!< IV60 (Bit 3)                                          */
#define CRYP_IV0RR_IV60_Msk               (0x8UL)                   /*!< IV60 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV59_Pos               (4UL)                     /*!< IV59 (Bit 4)                                          */
#define CRYP_IV0RR_IV59_Msk               (0x10UL)                  /*!< IV59 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV58_Pos               (5UL)                     /*!< IV58 (Bit 5)                                          */
#define CRYP_IV0RR_IV58_Msk               (0x20UL)                  /*!< IV58 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV57_Pos               (6UL)                     /*!< IV57 (Bit 6)                                          */
#define CRYP_IV0RR_IV57_Msk               (0x40UL)                  /*!< IV57 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV56_Pos               (7UL)                     /*!< IV56 (Bit 7)                                          */
#define CRYP_IV0RR_IV56_Msk               (0x80UL)                  /*!< IV56 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV55_Pos               (8UL)                     /*!< IV55 (Bit 8)                                          */
#define CRYP_IV0RR_IV55_Msk               (0x100UL)                 /*!< IV55 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV54_Pos               (9UL)                     /*!< IV54 (Bit 9)                                          */
#define CRYP_IV0RR_IV54_Msk               (0x200UL)                 /*!< IV54 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV53_Pos               (10UL)                    /*!< IV53 (Bit 10)                                         */
#define CRYP_IV0RR_IV53_Msk               (0x400UL)                 /*!< IV53 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV52_Pos               (11UL)                    /*!< IV52 (Bit 11)                                         */
#define CRYP_IV0RR_IV52_Msk               (0x800UL)                 /*!< IV52 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV51_Pos               (12UL)                    /*!< IV51 (Bit 12)                                         */
#define CRYP_IV0RR_IV51_Msk               (0x1000UL)                /*!< IV51 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV50_Pos               (13UL)                    /*!< IV50 (Bit 13)                                         */
#define CRYP_IV0RR_IV50_Msk               (0x2000UL)                /*!< IV50 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV49_Pos               (14UL)                    /*!< IV49 (Bit 14)                                         */
#define CRYP_IV0RR_IV49_Msk               (0x4000UL)                /*!< IV49 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV48_Pos               (15UL)                    /*!< IV48 (Bit 15)                                         */
#define CRYP_IV0RR_IV48_Msk               (0x8000UL)                /*!< IV48 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV47_Pos               (16UL)                    /*!< IV47 (Bit 16)                                         */
#define CRYP_IV0RR_IV47_Msk               (0x10000UL)               /*!< IV47 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV46_Pos               (17UL)                    /*!< IV46 (Bit 17)                                         */
#define CRYP_IV0RR_IV46_Msk               (0x20000UL)               /*!< IV46 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV45_Pos               (18UL)                    /*!< IV45 (Bit 18)                                         */
#define CRYP_IV0RR_IV45_Msk               (0x40000UL)               /*!< IV45 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV44_Pos               (19UL)                    /*!< IV44 (Bit 19)                                         */
#define CRYP_IV0RR_IV44_Msk               (0x80000UL)               /*!< IV44 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV43_Pos               (20UL)                    /*!< IV43 (Bit 20)                                         */
#define CRYP_IV0RR_IV43_Msk               (0x100000UL)              /*!< IV43 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV42_Pos               (21UL)                    /*!< IV42 (Bit 21)                                         */
#define CRYP_IV0RR_IV42_Msk               (0x200000UL)              /*!< IV42 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV41_Pos               (22UL)                    /*!< IV41 (Bit 22)                                         */
#define CRYP_IV0RR_IV41_Msk               (0x400000UL)              /*!< IV41 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV40_Pos               (23UL)                    /*!< IV40 (Bit 23)                                         */
#define CRYP_IV0RR_IV40_Msk               (0x800000UL)              /*!< IV40 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV39_Pos               (24UL)                    /*!< IV39 (Bit 24)                                         */
#define CRYP_IV0RR_IV39_Msk               (0x1000000UL)             /*!< IV39 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV38_Pos               (25UL)                    /*!< IV38 (Bit 25)                                         */
#define CRYP_IV0RR_IV38_Msk               (0x2000000UL)             /*!< IV38 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV37_Pos               (26UL)                    /*!< IV37 (Bit 26)                                         */
#define CRYP_IV0RR_IV37_Msk               (0x4000000UL)             /*!< IV37 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV36_Pos               (27UL)                    /*!< IV36 (Bit 27)                                         */
#define CRYP_IV0RR_IV36_Msk               (0x8000000UL)             /*!< IV36 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV35_Pos               (28UL)                    /*!< IV35 (Bit 28)                                         */
#define CRYP_IV0RR_IV35_Msk               (0x10000000UL)            /*!< IV35 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV34_Pos               (29UL)                    /*!< IV34 (Bit 29)                                         */
#define CRYP_IV0RR_IV34_Msk               (0x20000000UL)            /*!< IV34 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV33_Pos               (30UL)                    /*!< IV33 (Bit 30)                                         */
#define CRYP_IV0RR_IV33_Msk               (0x40000000UL)            /*!< IV33 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV0RR_IV32_Pos               (31UL)                    /*!< IV32 (Bit 31)                                         */
#define CRYP_IV0RR_IV32_Msk               (0x80000000UL)            /*!< IV32 (Bitfield-Mask: 0x01)                            */
/* =========================================================  IV1LR  ========================================================= */
#define CRYP_IV1LR_IV95_Pos               (0UL)                     /*!< IV95 (Bit 0)                                          */
#define CRYP_IV1LR_IV95_Msk               (0x1UL)                   /*!< IV95 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV94_Pos               (1UL)                     /*!< IV94 (Bit 1)                                          */
#define CRYP_IV1LR_IV94_Msk               (0x2UL)                   /*!< IV94 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV93_Pos               (2UL)                     /*!< IV93 (Bit 2)                                          */
#define CRYP_IV1LR_IV93_Msk               (0x4UL)                   /*!< IV93 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV92_Pos               (3UL)                     /*!< IV92 (Bit 3)                                          */
#define CRYP_IV1LR_IV92_Msk               (0x8UL)                   /*!< IV92 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV91_Pos               (4UL)                     /*!< IV91 (Bit 4)                                          */
#define CRYP_IV1LR_IV91_Msk               (0x10UL)                  /*!< IV91 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV90_Pos               (5UL)                     /*!< IV90 (Bit 5)                                          */
#define CRYP_IV1LR_IV90_Msk               (0x20UL)                  /*!< IV90 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV89_Pos               (6UL)                     /*!< IV89 (Bit 6)                                          */
#define CRYP_IV1LR_IV89_Msk               (0x40UL)                  /*!< IV89 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV88_Pos               (7UL)                     /*!< IV88 (Bit 7)                                          */
#define CRYP_IV1LR_IV88_Msk               (0x80UL)                  /*!< IV88 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV87_Pos               (8UL)                     /*!< IV87 (Bit 8)                                          */
#define CRYP_IV1LR_IV87_Msk               (0x100UL)                 /*!< IV87 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV86_Pos               (9UL)                     /*!< IV86 (Bit 9)                                          */
#define CRYP_IV1LR_IV86_Msk               (0x200UL)                 /*!< IV86 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV85_Pos               (10UL)                    /*!< IV85 (Bit 10)                                         */
#define CRYP_IV1LR_IV85_Msk               (0x400UL)                 /*!< IV85 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV84_Pos               (11UL)                    /*!< IV84 (Bit 11)                                         */
#define CRYP_IV1LR_IV84_Msk               (0x800UL)                 /*!< IV84 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV83_Pos               (12UL)                    /*!< IV83 (Bit 12)                                         */
#define CRYP_IV1LR_IV83_Msk               (0x1000UL)                /*!< IV83 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV82_Pos               (13UL)                    /*!< IV82 (Bit 13)                                         */
#define CRYP_IV1LR_IV82_Msk               (0x2000UL)                /*!< IV82 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV81_Pos               (14UL)                    /*!< IV81 (Bit 14)                                         */
#define CRYP_IV1LR_IV81_Msk               (0x4000UL)                /*!< IV81 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV80_Pos               (15UL)                    /*!< IV80 (Bit 15)                                         */
#define CRYP_IV1LR_IV80_Msk               (0x8000UL)                /*!< IV80 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV79_Pos               (16UL)                    /*!< IV79 (Bit 16)                                         */
#define CRYP_IV1LR_IV79_Msk               (0x10000UL)               /*!< IV79 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV78_Pos               (17UL)                    /*!< IV78 (Bit 17)                                         */
#define CRYP_IV1LR_IV78_Msk               (0x20000UL)               /*!< IV78 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV77_Pos               (18UL)                    /*!< IV77 (Bit 18)                                         */
#define CRYP_IV1LR_IV77_Msk               (0x40000UL)               /*!< IV77 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV76_Pos               (19UL)                    /*!< IV76 (Bit 19)                                         */
#define CRYP_IV1LR_IV76_Msk               (0x80000UL)               /*!< IV76 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV75_Pos               (20UL)                    /*!< IV75 (Bit 20)                                         */
#define CRYP_IV1LR_IV75_Msk               (0x100000UL)              /*!< IV75 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV74_Pos               (21UL)                    /*!< IV74 (Bit 21)                                         */
#define CRYP_IV1LR_IV74_Msk               (0x200000UL)              /*!< IV74 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV73_Pos               (22UL)                    /*!< IV73 (Bit 22)                                         */
#define CRYP_IV1LR_IV73_Msk               (0x400000UL)              /*!< IV73 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV72_Pos               (23UL)                    /*!< IV72 (Bit 23)                                         */
#define CRYP_IV1LR_IV72_Msk               (0x800000UL)              /*!< IV72 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV71_Pos               (24UL)                    /*!< IV71 (Bit 24)                                         */
#define CRYP_IV1LR_IV71_Msk               (0x1000000UL)             /*!< IV71 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV70_Pos               (25UL)                    /*!< IV70 (Bit 25)                                         */
#define CRYP_IV1LR_IV70_Msk               (0x2000000UL)             /*!< IV70 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV69_Pos               (26UL)                    /*!< IV69 (Bit 26)                                         */
#define CRYP_IV1LR_IV69_Msk               (0x4000000UL)             /*!< IV69 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV68_Pos               (27UL)                    /*!< IV68 (Bit 27)                                         */
#define CRYP_IV1LR_IV68_Msk               (0x8000000UL)             /*!< IV68 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV67_Pos               (28UL)                    /*!< IV67 (Bit 28)                                         */
#define CRYP_IV1LR_IV67_Msk               (0x10000000UL)            /*!< IV67 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV66_Pos               (29UL)                    /*!< IV66 (Bit 29)                                         */
#define CRYP_IV1LR_IV66_Msk               (0x20000000UL)            /*!< IV66 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV65_Pos               (30UL)                    /*!< IV65 (Bit 30)                                         */
#define CRYP_IV1LR_IV65_Msk               (0x40000000UL)            /*!< IV65 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1LR_IV64_Pos               (31UL)                    /*!< IV64 (Bit 31)                                         */
#define CRYP_IV1LR_IV64_Msk               (0x80000000UL)            /*!< IV64 (Bitfield-Mask: 0x01)                            */
/* =========================================================  IV1RR  ========================================================= */
#define CRYP_IV1RR_IV127_Pos              (0UL)                     /*!< IV127 (Bit 0)                                         */
#define CRYP_IV1RR_IV127_Msk              (0x1UL)                   /*!< IV127 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV126_Pos              (1UL)                     /*!< IV126 (Bit 1)                                         */
#define CRYP_IV1RR_IV126_Msk              (0x2UL)                   /*!< IV126 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV125_Pos              (2UL)                     /*!< IV125 (Bit 2)                                         */
#define CRYP_IV1RR_IV125_Msk              (0x4UL)                   /*!< IV125 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV124_Pos              (3UL)                     /*!< IV124 (Bit 3)                                         */
#define CRYP_IV1RR_IV124_Msk              (0x8UL)                   /*!< IV124 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV123_Pos              (4UL)                     /*!< IV123 (Bit 4)                                         */
#define CRYP_IV1RR_IV123_Msk              (0x10UL)                  /*!< IV123 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV122_Pos              (5UL)                     /*!< IV122 (Bit 5)                                         */
#define CRYP_IV1RR_IV122_Msk              (0x20UL)                  /*!< IV122 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV121_Pos              (6UL)                     /*!< IV121 (Bit 6)                                         */
#define CRYP_IV1RR_IV121_Msk              (0x40UL)                  /*!< IV121 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV120_Pos              (7UL)                     /*!< IV120 (Bit 7)                                         */
#define CRYP_IV1RR_IV120_Msk              (0x80UL)                  /*!< IV120 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV119_Pos              (8UL)                     /*!< IV119 (Bit 8)                                         */
#define CRYP_IV1RR_IV119_Msk              (0x100UL)                 /*!< IV119 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV118_Pos              (9UL)                     /*!< IV118 (Bit 9)                                         */
#define CRYP_IV1RR_IV118_Msk              (0x200UL)                 /*!< IV118 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV117_Pos              (10UL)                    /*!< IV117 (Bit 10)                                        */
#define CRYP_IV1RR_IV117_Msk              (0x400UL)                 /*!< IV117 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV116_Pos              (11UL)                    /*!< IV116 (Bit 11)                                        */
#define CRYP_IV1RR_IV116_Msk              (0x800UL)                 /*!< IV116 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV115_Pos              (12UL)                    /*!< IV115 (Bit 12)                                        */
#define CRYP_IV1RR_IV115_Msk              (0x1000UL)                /*!< IV115 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV114_Pos              (13UL)                    /*!< IV114 (Bit 13)                                        */
#define CRYP_IV1RR_IV114_Msk              (0x2000UL)                /*!< IV114 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV113_Pos              (14UL)                    /*!< IV113 (Bit 14)                                        */
#define CRYP_IV1RR_IV113_Msk              (0x4000UL)                /*!< IV113 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV112_Pos              (15UL)                    /*!< IV112 (Bit 15)                                        */
#define CRYP_IV1RR_IV112_Msk              (0x8000UL)                /*!< IV112 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV111_Pos              (16UL)                    /*!< IV111 (Bit 16)                                        */
#define CRYP_IV1RR_IV111_Msk              (0x10000UL)               /*!< IV111 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV110_Pos              (17UL)                    /*!< IV110 (Bit 17)                                        */
#define CRYP_IV1RR_IV110_Msk              (0x20000UL)               /*!< IV110 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV109_Pos              (18UL)                    /*!< IV109 (Bit 18)                                        */
#define CRYP_IV1RR_IV109_Msk              (0x40000UL)               /*!< IV109 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV108_Pos              (19UL)                    /*!< IV108 (Bit 19)                                        */
#define CRYP_IV1RR_IV108_Msk              (0x80000UL)               /*!< IV108 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV107_Pos              (20UL)                    /*!< IV107 (Bit 20)                                        */
#define CRYP_IV1RR_IV107_Msk              (0x100000UL)              /*!< IV107 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV106_Pos              (21UL)                    /*!< IV106 (Bit 21)                                        */
#define CRYP_IV1RR_IV106_Msk              (0x200000UL)              /*!< IV106 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV105_Pos              (22UL)                    /*!< IV105 (Bit 22)                                        */
#define CRYP_IV1RR_IV105_Msk              (0x400000UL)              /*!< IV105 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV104_Pos              (23UL)                    /*!< IV104 (Bit 23)                                        */
#define CRYP_IV1RR_IV104_Msk              (0x800000UL)              /*!< IV104 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV103_Pos              (24UL)                    /*!< IV103 (Bit 24)                                        */
#define CRYP_IV1RR_IV103_Msk              (0x1000000UL)             /*!< IV103 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV102_Pos              (25UL)                    /*!< IV102 (Bit 25)                                        */
#define CRYP_IV1RR_IV102_Msk              (0x2000000UL)             /*!< IV102 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV101_Pos              (26UL)                    /*!< IV101 (Bit 26)                                        */
#define CRYP_IV1RR_IV101_Msk              (0x4000000UL)             /*!< IV101 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV100_Pos              (27UL)                    /*!< IV100 (Bit 27)                                        */
#define CRYP_IV1RR_IV100_Msk              (0x8000000UL)             /*!< IV100 (Bitfield-Mask: 0x01)                           */
#define CRYP_IV1RR_IV99_Pos               (28UL)                    /*!< IV99 (Bit 28)                                         */
#define CRYP_IV1RR_IV99_Msk               (0x10000000UL)            /*!< IV99 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1RR_IV98_Pos               (29UL)                    /*!< IV98 (Bit 29)                                         */
#define CRYP_IV1RR_IV98_Msk               (0x20000000UL)            /*!< IV98 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1RR_IV97_Pos               (30UL)                    /*!< IV97 (Bit 30)                                         */
#define CRYP_IV1RR_IV97_Msk               (0x40000000UL)            /*!< IV97 (Bitfield-Mask: 0x01)                            */
#define CRYP_IV1RR_IV96_Pos               (31UL)                    /*!< IV96 (Bit 31)                                         */
#define CRYP_IV1RR_IV96_Msk               (0x80000000UL)            /*!< IV96 (Bitfield-Mask: 0x01)                            */
/* ======================================================  CSGCMCCM0R  ======================================================= */
#define CRYP_CSGCMCCM0R_CSGCMCCM0R_Pos    (0UL)                     /*!< CSGCMCCM0R (Bit 0)                                    */
#define CRYP_CSGCMCCM0R_CSGCMCCM0R_Msk    (0xffffffffUL)            /*!< CSGCMCCM0R (Bitfield-Mask: 0xffffffff)                */
/* ======================================================  CSGCMCCM1R  ======================================================= */
#define CRYP_CSGCMCCM1R_CSGCMCCM1R_Pos    (0UL)                     /*!< CSGCMCCM1R (Bit 0)                                    */
#define CRYP_CSGCMCCM1R_CSGCMCCM1R_Msk    (0xffffffffUL)            /*!< CSGCMCCM1R (Bitfield-Mask: 0xffffffff)                */
/* ======================================================  CSGCMCCM2R  ======================================================= */
#define CRYP_CSGCMCCM2R_CSGCMCCM2R_Pos    (0UL)                     /*!< CSGCMCCM2R (Bit 0)                                    */
#define CRYP_CSGCMCCM2R_CSGCMCCM2R_Msk    (0xffffffffUL)            /*!< CSGCMCCM2R (Bitfield-Mask: 0xffffffff)                */
/* ======================================================  CSGCMCCM3R  ======================================================= */
#define CRYP_CSGCMCCM3R_CSGCMCCM3R_Pos    (0UL)                     /*!< CSGCMCCM3R (Bit 0)                                    */
#define CRYP_CSGCMCCM3R_CSGCMCCM3R_Msk    (0xffffffffUL)            /*!< CSGCMCCM3R (Bitfield-Mask: 0xffffffff)                */
/* ======================================================  CSGCMCCM4R  ======================================================= */
#define CRYP_CSGCMCCM4R_CSGCMCCM4R_Pos    (0UL)                     /*!< CSGCMCCM4R (Bit 0)                                    */
#define CRYP_CSGCMCCM4R_CSGCMCCM4R_Msk    (0xffffffffUL)            /*!< CSGCMCCM4R (Bitfield-Mask: 0xffffffff)                */
/* ======================================================  CSGCMCCM5R  ======================================================= */
#define CRYP_CSGCMCCM5R_CSGCMCCM5R_Pos    (0UL)                     /*!< CSGCMCCM5R (Bit 0)                                    */
#define CRYP_CSGCMCCM5R_CSGCMCCM5R_Msk    (0xffffffffUL)            /*!< CSGCMCCM5R (Bitfield-Mask: 0xffffffff)                */
/* ======================================================  CSGCMCCM6R  ======================================================= */
#define CRYP_CSGCMCCM6R_CSGCMCCM6R_Pos    (0UL)                     /*!< CSGCMCCM6R (Bit 0)                                    */
#define CRYP_CSGCMCCM6R_CSGCMCCM6R_Msk    (0xffffffffUL)            /*!< CSGCMCCM6R (Bitfield-Mask: 0xffffffff)                */
/* ======================================================  CSGCMCCM7R  ======================================================= */
#define CRYP_CSGCMCCM7R_CSGCMCCM7R_Pos    (0UL)                     /*!< CSGCMCCM7R (Bit 0)                                    */
#define CRYP_CSGCMCCM7R_CSGCMCCM7R_Msk    (0xffffffffUL)            /*!< CSGCMCCM7R (Bitfield-Mask: 0xffffffff)                */
/* ========================================================  CSGCM0R  ======================================================== */
#define CRYP_CSGCM0R_CSGCM0R_Pos          (0UL)                     /*!< CSGCM0R (Bit 0)                                       */
#define CRYP_CSGCM0R_CSGCM0R_Msk          (0xffffffffUL)            /*!< CSGCM0R (Bitfield-Mask: 0xffffffff)                   */
/* ========================================================  CSGCM1R  ======================================================== */
#define CRYP_CSGCM1R_CSGCM1R_Pos          (0UL)                     /*!< CSGCM1R (Bit 0)                                       */
#define CRYP_CSGCM1R_CSGCM1R_Msk          (0xffffffffUL)            /*!< CSGCM1R (Bitfield-Mask: 0xffffffff)                   */
/* ========================================================  CSGCM2R  ======================================================== */
#define CRYP_CSGCM2R_CSGCM2R_Pos          (0UL)                     /*!< CSGCM2R (Bit 0)                                       */
#define CRYP_CSGCM2R_CSGCM2R_Msk          (0xffffffffUL)            /*!< CSGCM2R (Bitfield-Mask: 0xffffffff)                   */
/* ========================================================  CSGCM3R  ======================================================== */
#define CRYP_CSGCM3R_CSGCM3R_Pos          (0UL)                     /*!< CSGCM3R (Bit 0)                                       */
#define CRYP_CSGCM3R_CSGCM3R_Msk          (0xffffffffUL)            /*!< CSGCM3R (Bitfield-Mask: 0xffffffff)                   */
/* ========================================================  CSGCM4R  ======================================================== */
#define CRYP_CSGCM4R_CSGCM4R_Pos          (0UL)                     /*!< CSGCM4R (Bit 0)                                       */
#define CRYP_CSGCM4R_CSGCM4R_Msk          (0xffffffffUL)            /*!< CSGCM4R (Bitfield-Mask: 0xffffffff)                   */
/* ========================================================  CSGCM5R  ======================================================== */
#define CRYP_CSGCM5R_CSGCM5R_Pos          (0UL)                     /*!< CSGCM5R (Bit 0)                                       */
#define CRYP_CSGCM5R_CSGCM5R_Msk          (0xffffffffUL)            /*!< CSGCM5R (Bitfield-Mask: 0xffffffff)                   */
/* ========================================================  CSGCM6R  ======================================================== */
#define CRYP_CSGCM6R_CSGCM6R_Pos          (0UL)                     /*!< CSGCM6R (Bit 0)                                       */
#define CRYP_CSGCM6R_CSGCM6R_Msk          (0xffffffffUL)            /*!< CSGCM6R (Bitfield-Mask: 0xffffffff)                   */
/* ========================================================  CSGCM7R  ======================================================== */
#define CRYP_CSGCM7R_CSGCM7R_Pos          (0UL)                     /*!< CSGCM7R (Bit 0)                                       */
#define CRYP_CSGCM7R_CSGCM7R_Msk          (0xffffffffUL)            /*!< CSGCM7R (Bitfield-Mask: 0xffffffff)                   */
