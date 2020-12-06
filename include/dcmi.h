#include "core.h"


#define DCMI_BASE                   0x50050000UL

#define DCMI                        ((DCMI_Type*)              DCMI_BASE)


/* =========================================================================================================================== */
/* ================                                           DCMI                                            ================ */
/* =========================================================================================================================== */


/**
  * @brief Digital camera interface (DCMI)
  */

typedef struct {                                /*!< (@ 0x50050000) DCMI Structure                                             */
  
  union {
    __IOM uint32_t CR;                          /*!< (@ 0x00000000) control register 1                                         */
    
    struct {
      __IOM uint32_t CAPTURE    : 1;            /*!< [0..0] Capture enable                                                     */
      __IOM uint32_t CM         : 1;            /*!< [1..1] Capture mode                                                       */
      __IOM uint32_t CROP       : 1;            /*!< [2..2] Crop feature                                                       */
      __IOM uint32_t JPEG       : 1;            /*!< [3..3] JPEG format                                                        */
      __IOM uint32_t ESS        : 1;            /*!< [4..4] Embedded synchronization select                                    */
      __IOM uint32_t PCKPOL     : 1;            /*!< [5..5] Pixel clock polarity                                               */
      __IOM uint32_t HSPOL      : 1;            /*!< [6..6] Horizontal synchronization polarity                                */
      __IOM uint32_t VSPOL      : 1;            /*!< [7..7] Vertical synchronization polarity                                  */
      __IOM uint32_t FCRC       : 2;            /*!< [9..8] Frame capture rate control                                         */
      __IOM uint32_t EDM        : 2;            /*!< [11..10] Extended data mode                                               */
            uint32_t            : 2;
      __IOM uint32_t ENABLE     : 1;            /*!< [14..14] DCMI enable                                                      */
            uint32_t            : 17;
    } CR_b;
  } ;
  
  union {
    __IM  uint32_t SR;                          /*!< (@ 0x00000004) status register                                            */
    
    struct {
      __IM  uint32_t HSYNC      : 1;            /*!< [0..0] HSYNC                                                              */
      __IM  uint32_t VSYNC      : 1;            /*!< [1..1] VSYNC                                                              */
      __IM  uint32_t FNE        : 1;            /*!< [2..2] FIFO not empty                                                     */
            uint32_t            : 29;
    } SR_b;
  } ;
  
  union {
    __IM  uint32_t RIS;                         /*!< (@ 0x00000008) raw interrupt status register                              */
    
    struct {
      __IM  uint32_t FRAME_RIS  : 1;            /*!< [0..0] Capture complete raw interrupt status                              */
      __IM  uint32_t OVR_RIS    : 1;            /*!< [1..1] Overrun raw interrupt status                                       */
      __IM  uint32_t ERR_RIS    : 1;            /*!< [2..2] Synchronization error raw interrupt status                         */
      __IM  uint32_t VSYNC_RIS  : 1;            /*!< [3..3] VSYNC raw interrupt status                                         */
      __IM  uint32_t LINE_RIS   : 1;            /*!< [4..4] Line raw interrupt status                                          */
            uint32_t            : 27;
    } RIS_b;
  } ;
  
  union {
    __IOM uint32_t IER;                         /*!< (@ 0x0000000C) interrupt enable register                                  */
    
    struct {
      __IOM uint32_t FRAME_IE   : 1;            /*!< [0..0] Capture complete interrupt enable                                  */
      __IOM uint32_t OVR_IE     : 1;            /*!< [1..1] Overrun interrupt enable                                           */
      __IOM uint32_t ERR_IE     : 1;            /*!< [2..2] Synchronization error interrupt enable                             */
      __IOM uint32_t VSYNC_IE   : 1;            /*!< [3..3] VSYNC interrupt enable                                             */
      __IOM uint32_t LINE_IE    : 1;            /*!< [4..4] Line interrupt enable                                              */
            uint32_t            : 27;
    } IER_b;
  } ;
  
  union {
    __IM  uint32_t MIS;                         /*!< (@ 0x00000010) masked interrupt status register                           */
    
    struct {
      __IM  uint32_t FRAME_MIS  : 1;            /*!< [0..0] Capture complete masked interrupt status                           */
      __IM  uint32_t OVR_MIS    : 1;            /*!< [1..1] Overrun masked interrupt status                                    */
      __IM  uint32_t ERR_MIS    : 1;            /*!< [2..2] Synchronization error masked interrupt status                      */
      __IM  uint32_t VSYNC_MIS  : 1;            /*!< [3..3] VSYNC masked interrupt status                                      */
      __IM  uint32_t LINE_MIS   : 1;            /*!< [4..4] Line masked interrupt status                                       */
            uint32_t            : 27;
    } MIS_b;
  } ;
  
  union {
    __OM  uint32_t ICR;                         /*!< (@ 0x00000014) interrupt clear register                                   */
    
    struct {
      __OM  uint32_t FRAME_ISC  : 1;            /*!< [0..0] Capture complete interrupt status clear                            */
      __OM  uint32_t OVR_ISC    : 1;            /*!< [1..1] Overrun interrupt status clear                                     */
      __OM  uint32_t ERR_ISC    : 1;            /*!< [2..2] Synchronization error interrupt status clear                       */
      __OM  uint32_t VSYNC_ISC  : 1;            /*!< [3..3] Vertical synch interrupt status clear                              */
      __OM  uint32_t LINE_ISC   : 1;            /*!< [4..4] line interrupt status clear                                        */
            uint32_t            : 27;
    } ICR_b;
  } ;
  
  union {
    __IOM uint32_t ESCR;                        /*!< (@ 0x00000018) embedded synchronization code register                     */
    
    struct {
      __IOM uint32_t FSC        : 8;            /*!< [7..0] Frame start delimiter code                                         */
      __IOM uint32_t LSC        : 8;            /*!< [15..8] Line start delimiter code                                         */
      __IOM uint32_t LEC        : 8;            /*!< [23..16] Line end delimiter code                                          */
      __IOM uint32_t FEC        : 8;            /*!< [31..24] Frame end delimiter code                                         */
    } ESCR_b;
  } ;
  
  union {
    __IOM uint32_t ESUR;                        /*!< (@ 0x0000001C) embedded synchronization unmask register                   */
    
    struct {
      __IOM uint32_t FSU        : 8;            /*!< [7..0] Frame start delimiter unmask                                       */
      __IOM uint32_t LSU        : 8;            /*!< [15..8] Line start delimiter unmask                                       */
      __IOM uint32_t LEU        : 8;            /*!< [23..16] Line end delimiter unmask                                        */
      __IOM uint32_t FEU        : 8;            /*!< [31..24] Frame end delimiter unmask                                       */
    } ESUR_b;
  } ;
  
  union {
    __IOM uint32_t CWSTRT;                      /*!< (@ 0x00000020) crop window start                                          */
    
    struct {
      __IOM uint32_t HOFFCNT    : 14;           /*!< [13..0] Horizontal offset count                                           */
            uint32_t            : 2;
      __IOM uint32_t VST        : 13;           /*!< [28..16] Vertical start line count                                        */
            uint32_t            : 3;
    } CWSTRT_b;
  } ;
  
  union {
    __IOM uint32_t CWSIZE;                      /*!< (@ 0x00000024) crop window size                                           */
    
    struct {
      __IOM uint32_t CAPCNT     : 14;           /*!< [13..0] Capture count                                                     */
            uint32_t            : 2;
      __IOM uint32_t VLINE      : 14;           /*!< [29..16] Vertical line count                                              */
            uint32_t            : 2;
    } CWSIZE_b;
  } ;
  
  union {
    __IM  uint32_t DR;                          /*!< (@ 0x00000028) data register                                              */
    
    struct {
      __IM  uint32_t Byte0      : 8;            /*!< [7..0] Data byte 0                                                        */
      __IM  uint32_t Byte1      : 8;            /*!< [15..8] Data byte 1                                                       */
      __IM  uint32_t Byte2      : 8;            /*!< [23..16] Data byte 2                                                      */
      __IM  uint32_t Byte3      : 8;            /*!< [31..24] Data byte 3                                                      */
    } DR_b;
  } ;
} DCMI_Type;                                    /*!< Size = 44 (0x2c)                                                          */



/* =========================================================================================================================== */
/* ================                                           DCMI                                            ================ */
/* =========================================================================================================================== */

/* ==========================================================  CR  =========================================================== */
#define DCMI_CR_ENABLE_Pos                (14UL)                    /*!< ENABLE (Bit 14)                                       */
#define DCMI_CR_ENABLE_Msk                (0x4000UL)                /*!< ENABLE (Bitfield-Mask: 0x01)                          */
#define DCMI_CR_EDM_Pos                   (10UL)                    /*!< EDM (Bit 10)                                          */
#define DCMI_CR_EDM_Msk                   (0xc00UL)                 /*!< EDM (Bitfield-Mask: 0x03)                             */
#define DCMI_CR_FCRC_Pos                  (8UL)                     /*!< FCRC (Bit 8)                                          */
#define DCMI_CR_FCRC_Msk                  (0x300UL)                 /*!< FCRC (Bitfield-Mask: 0x03)                            */
#define DCMI_CR_VSPOL_Pos                 (7UL)                     /*!< VSPOL (Bit 7)                                         */
#define DCMI_CR_VSPOL_Msk                 (0x80UL)                  /*!< VSPOL (Bitfield-Mask: 0x01)                           */
#define DCMI_CR_HSPOL_Pos                 (6UL)                     /*!< HSPOL (Bit 6)                                         */
#define DCMI_CR_HSPOL_Msk                 (0x40UL)                  /*!< HSPOL (Bitfield-Mask: 0x01)                           */
#define DCMI_CR_PCKPOL_Pos                (5UL)                     /*!< PCKPOL (Bit 5)                                        */
#define DCMI_CR_PCKPOL_Msk                (0x20UL)                  /*!< PCKPOL (Bitfield-Mask: 0x01)                          */
#define DCMI_CR_ESS_Pos                   (4UL)                     /*!< ESS (Bit 4)                                           */
#define DCMI_CR_ESS_Msk                   (0x10UL)                  /*!< ESS (Bitfield-Mask: 0x01)                             */
#define DCMI_CR_JPEG_Pos                  (3UL)                     /*!< JPEG (Bit 3)                                          */
#define DCMI_CR_JPEG_Msk                  (0x8UL)                   /*!< JPEG (Bitfield-Mask: 0x01)                            */
#define DCMI_CR_CROP_Pos                  (2UL)                     /*!< CROP (Bit 2)                                          */
#define DCMI_CR_CROP_Msk                  (0x4UL)                   /*!< CROP (Bitfield-Mask: 0x01)                            */
#define DCMI_CR_CM_Pos                    (1UL)                     /*!< CM (Bit 1)                                            */
#define DCMI_CR_CM_Msk                    (0x2UL)                   /*!< CM (Bitfield-Mask: 0x01)                              */
#define DCMI_CR_CAPTURE_Pos               (0UL)                     /*!< CAPTURE (Bit 0)                                       */
#define DCMI_CR_CAPTURE_Msk               (0x1UL)                   /*!< CAPTURE (Bitfield-Mask: 0x01)                         */
/* ==========================================================  SR  =========================================================== */
#define DCMI_SR_FNE_Pos                   (2UL)                     /*!< FNE (Bit 2)                                           */
#define DCMI_SR_FNE_Msk                   (0x4UL)                   /*!< FNE (Bitfield-Mask: 0x01)                             */
#define DCMI_SR_VSYNC_Pos                 (1UL)                     /*!< VSYNC (Bit 1)                                         */
#define DCMI_SR_VSYNC_Msk                 (0x2UL)                   /*!< VSYNC (Bitfield-Mask: 0x01)                           */
#define DCMI_SR_HSYNC_Pos                 (0UL)                     /*!< HSYNC (Bit 0)                                         */
#define DCMI_SR_HSYNC_Msk                 (0x1UL)                   /*!< HSYNC (Bitfield-Mask: 0x01)                           */
/* ==========================================================  RIS  ========================================================== */
#define DCMI_RIS_LINE_RIS_Pos             (4UL)                     /*!< LINE_RIS (Bit 4)                                      */
#define DCMI_RIS_LINE_RIS_Msk             (0x10UL)                  /*!< LINE_RIS (Bitfield-Mask: 0x01)                        */
#define DCMI_RIS_VSYNC_RIS_Pos            (3UL)                     /*!< VSYNC_RIS (Bit 3)                                     */
#define DCMI_RIS_VSYNC_RIS_Msk            (0x8UL)                   /*!< VSYNC_RIS (Bitfield-Mask: 0x01)                       */
#define DCMI_RIS_ERR_RIS_Pos              (2UL)                     /*!< ERR_RIS (Bit 2)                                       */
#define DCMI_RIS_ERR_RIS_Msk              (0x4UL)                   /*!< ERR_RIS (Bitfield-Mask: 0x01)                         */
#define DCMI_RIS_OVR_RIS_Pos              (1UL)                     /*!< OVR_RIS (Bit 1)                                       */
#define DCMI_RIS_OVR_RIS_Msk              (0x2UL)                   /*!< OVR_RIS (Bitfield-Mask: 0x01)                         */
#define DCMI_RIS_FRAME_RIS_Pos            (0UL)                     /*!< FRAME_RIS (Bit 0)                                     */
#define DCMI_RIS_FRAME_RIS_Msk            (0x1UL)                   /*!< FRAME_RIS (Bitfield-Mask: 0x01)                       */
/* ==========================================================  IER  ========================================================== */
#define DCMI_IER_LINE_IE_Pos              (4UL)                     /*!< LINE_IE (Bit 4)                                       */
#define DCMI_IER_LINE_IE_Msk              (0x10UL)                  /*!< LINE_IE (Bitfield-Mask: 0x01)                         */
#define DCMI_IER_VSYNC_IE_Pos             (3UL)                     /*!< VSYNC_IE (Bit 3)                                      */
#define DCMI_IER_VSYNC_IE_Msk             (0x8UL)                   /*!< VSYNC_IE (Bitfield-Mask: 0x01)                        */
#define DCMI_IER_ERR_IE_Pos               (2UL)                     /*!< ERR_IE (Bit 2)                                        */
#define DCMI_IER_ERR_IE_Msk               (0x4UL)                   /*!< ERR_IE (Bitfield-Mask: 0x01)                          */
#define DCMI_IER_OVR_IE_Pos               (1UL)                     /*!< OVR_IE (Bit 1)                                        */
#define DCMI_IER_OVR_IE_Msk               (0x2UL)                   /*!< OVR_IE (Bitfield-Mask: 0x01)                          */
#define DCMI_IER_FRAME_IE_Pos             (0UL)                     /*!< FRAME_IE (Bit 0)                                      */
#define DCMI_IER_FRAME_IE_Msk             (0x1UL)                   /*!< FRAME_IE (Bitfield-Mask: 0x01)                        */
/* ==========================================================  MIS  ========================================================== */
#define DCMI_MIS_LINE_MIS_Pos             (4UL)                     /*!< LINE_MIS (Bit 4)                                      */
#define DCMI_MIS_LINE_MIS_Msk             (0x10UL)                  /*!< LINE_MIS (Bitfield-Mask: 0x01)                        */
#define DCMI_MIS_VSYNC_MIS_Pos            (3UL)                     /*!< VSYNC_MIS (Bit 3)                                     */
#define DCMI_MIS_VSYNC_MIS_Msk            (0x8UL)                   /*!< VSYNC_MIS (Bitfield-Mask: 0x01)                       */
#define DCMI_MIS_ERR_MIS_Pos              (2UL)                     /*!< ERR_MIS (Bit 2)                                       */
#define DCMI_MIS_ERR_MIS_Msk              (0x4UL)                   /*!< ERR_MIS (Bitfield-Mask: 0x01)                         */
#define DCMI_MIS_OVR_MIS_Pos              (1UL)                     /*!< OVR_MIS (Bit 1)                                       */
#define DCMI_MIS_OVR_MIS_Msk              (0x2UL)                   /*!< OVR_MIS (Bitfield-Mask: 0x01)                         */
#define DCMI_MIS_FRAME_MIS_Pos            (0UL)                     /*!< FRAME_MIS (Bit 0)                                     */
#define DCMI_MIS_FRAME_MIS_Msk            (0x1UL)                   /*!< FRAME_MIS (Bitfield-Mask: 0x01)                       */
/* ==========================================================  ICR  ========================================================== */
#define DCMI_ICR_LINE_ISC_Pos             (4UL)                     /*!< LINE_ISC (Bit 4)                                      */
#define DCMI_ICR_LINE_ISC_Msk             (0x10UL)                  /*!< LINE_ISC (Bitfield-Mask: 0x01)                        */
#define DCMI_ICR_VSYNC_ISC_Pos            (3UL)                     /*!< VSYNC_ISC (Bit 3)                                     */
#define DCMI_ICR_VSYNC_ISC_Msk            (0x8UL)                   /*!< VSYNC_ISC (Bitfield-Mask: 0x01)                       */
#define DCMI_ICR_ERR_ISC_Pos              (2UL)                     /*!< ERR_ISC (Bit 2)                                       */
#define DCMI_ICR_ERR_ISC_Msk              (0x4UL)                   /*!< ERR_ISC (Bitfield-Mask: 0x01)                         */
#define DCMI_ICR_OVR_ISC_Pos              (1UL)                     /*!< OVR_ISC (Bit 1)                                       */
#define DCMI_ICR_OVR_ISC_Msk              (0x2UL)                   /*!< OVR_ISC (Bitfield-Mask: 0x01)                         */
#define DCMI_ICR_FRAME_ISC_Pos            (0UL)                     /*!< FRAME_ISC (Bit 0)                                     */
#define DCMI_ICR_FRAME_ISC_Msk            (0x1UL)                   /*!< FRAME_ISC (Bitfield-Mask: 0x01)                       */
/* =========================================================  ESCR  ========================================================== */
#define DCMI_ESCR_FEC_Pos                 (24UL)                    /*!< FEC (Bit 24)                                          */
#define DCMI_ESCR_FEC_Msk                 (0xff000000UL)            /*!< FEC (Bitfield-Mask: 0xff)                             */
#define DCMI_ESCR_LEC_Pos                 (16UL)                    /*!< LEC (Bit 16)                                          */
#define DCMI_ESCR_LEC_Msk                 (0xff0000UL)              /*!< LEC (Bitfield-Mask: 0xff)                             */
#define DCMI_ESCR_LSC_Pos                 (8UL)                     /*!< LSC (Bit 8)                                           */
#define DCMI_ESCR_LSC_Msk                 (0xff00UL)                /*!< LSC (Bitfield-Mask: 0xff)                             */
#define DCMI_ESCR_FSC_Pos                 (0UL)                     /*!< FSC (Bit 0)                                           */
#define DCMI_ESCR_FSC_Msk                 (0xffUL)                  /*!< FSC (Bitfield-Mask: 0xff)                             */
/* =========================================================  ESUR  ========================================================== */
#define DCMI_ESUR_FEU_Pos                 (24UL)                    /*!< FEU (Bit 24)                                          */
#define DCMI_ESUR_FEU_Msk                 (0xff000000UL)            /*!< FEU (Bitfield-Mask: 0xff)                             */
#define DCMI_ESUR_LEU_Pos                 (16UL)                    /*!< LEU (Bit 16)                                          */
#define DCMI_ESUR_LEU_Msk                 (0xff0000UL)              /*!< LEU (Bitfield-Mask: 0xff)                             */
#define DCMI_ESUR_LSU_Pos                 (8UL)                     /*!< LSU (Bit 8)                                           */
#define DCMI_ESUR_LSU_Msk                 (0xff00UL)                /*!< LSU (Bitfield-Mask: 0xff)                             */
#define DCMI_ESUR_FSU_Pos                 (0UL)                     /*!< FSU (Bit 0)                                           */
#define DCMI_ESUR_FSU_Msk                 (0xffUL)                  /*!< FSU (Bitfield-Mask: 0xff)                             */
/* ========================================================  CWSTRT  ========================================================= */
#define DCMI_CWSTRT_VST_Pos               (16UL)                    /*!< VST (Bit 16)                                          */
#define DCMI_CWSTRT_VST_Msk               (0x1fff0000UL)            /*!< VST (Bitfield-Mask: 0x1fff)                           */
#define DCMI_CWSTRT_HOFFCNT_Pos           (0UL)                     /*!< HOFFCNT (Bit 0)                                       */
#define DCMI_CWSTRT_HOFFCNT_Msk           (0x3fffUL)                /*!< HOFFCNT (Bitfield-Mask: 0x3fff)                       */
/* ========================================================  CWSIZE  ========================================================= */
#define DCMI_CWSIZE_VLINE_Pos             (16UL)                    /*!< VLINE (Bit 16)                                        */
#define DCMI_CWSIZE_VLINE_Msk             (0x3fff0000UL)            /*!< VLINE (Bitfield-Mask: 0x3fff)                         */
#define DCMI_CWSIZE_CAPCNT_Pos            (0UL)                     /*!< CAPCNT (Bit 0)                                        */
#define DCMI_CWSIZE_CAPCNT_Msk            (0x3fffUL)                /*!< CAPCNT (Bitfield-Mask: 0x3fff)                        */
/* ==========================================================  DR  =========================================================== */
#define DCMI_DR_Byte3_Pos                 (24UL)                    /*!< Byte3 (Bit 24)                                        */
#define DCMI_DR_Byte3_Msk                 (0xff000000UL)            /*!< Byte3 (Bitfield-Mask: 0xff)                           */
#define DCMI_DR_Byte2_Pos                 (16UL)                    /*!< Byte2 (Bit 16)                                        */
#define DCMI_DR_Byte2_Msk                 (0xff0000UL)              /*!< Byte2 (Bitfield-Mask: 0xff)                           */
#define DCMI_DR_Byte1_Pos                 (8UL)                     /*!< Byte1 (Bit 8)                                         */
#define DCMI_DR_Byte1_Msk                 (0xff00UL)                /*!< Byte1 (Bitfield-Mask: 0xff)                           */
#define DCMI_DR_Byte0_Pos                 (0UL)                     /*!< Byte0 (Bit 0)                                         */
#define DCMI_DR_Byte0_Msk                 (0xffUL)                  /*!< Byte0 (Bitfield-Mask: 0xff)                           */
