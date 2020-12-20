#include<stdint.h>

extern uint8_t  start_data;
extern uint8_t  end_data;
extern uint8_t  start_bss;
extern uint8_t  end_bss;
extern uint8_t  la_data;
#define SRAM1_START         0x20020000U
#define SRAM1_SIZE          (368*1024)
#define SRAM2_START         0x2007C000U
#define SRAM2_SIZE          (16*1024)

#define STACK_START         (SRAM1_START + SRAM1_SIZE)

extern int main(void);

// exceptions 
void Default_handler(void);
void Reset_handler(void);
void NMI_handler(void) __attribute__((weak, alias("Default_handler")));
void HardFault_handler(void) __attribute__((weak, alias("Default_handler")));
void MemManage_handler(void) __attribute__((weak, alias("Default_handler")));
void BusFault_handler(void) __attribute__((weak, alias("Default_handler")));
void UsageFault_handler(void) __attribute__((weak, alias("Default_handler")));
void SVCall_handler(void) __attribute__((weak, alias("Default_handler")));
void Debug_Monitor_handler(void) __attribute__((weak, alias("Default_handler")));
void PendSV_handler(void) __attribute__((weak, alias("Default_handler")));
void SysTick_handler(void) __attribute__((weak, alias("Default_handler")));


void WWDG_handler                 (void) __attribute__((weak, alias("Default_handler")));
void PVD_handler                  (void) __attribute__((weak, alias("Default_handler")));
void TAMP_STAMP_handler           (void) __attribute__((weak, alias("Default_handler")));
void RTC_WKUP_handler             (void) __attribute__((weak, alias("Default_handler")));
void FLASH_handler                (void) __attribute__((weak, alias("Default_handler")));
void RCC_handler                  (void) __attribute__((weak, alias("Default_handler")));
void EXTI0_handler                (void) __attribute__((weak, alias("Default_handler")));
void EXTI1_handler                (void) __attribute__((weak, alias("Default_handler")));
void EXTI2_handler                (void) __attribute__((weak, alias("Default_handler")));
void EXTI3_handler                (void) __attribute__((weak, alias("Default_handler")));
void EXTI4_handler                (void) __attribute__((weak, alias("Default_handler")));
void DMA1_Stream0_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA1_Stream1_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA1_Stream2_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA1_Stream3_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA1_Stream4_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA1_Stream5_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA1_Stream6_handler         (void) __attribute__((weak, alias("Default_handler")));
void ADC_handler                  (void) __attribute__((weak, alias("Default_handler")));
void CAN1_TX_handler              (void) __attribute__((weak, alias("Default_handler")));
void CAN1_RX0_handler             (void) __attribute__((weak, alias("Default_handler")));
void CAN1_RX1_handler             (void) __attribute__((weak, alias("Default_handler")));
void CAN1_SCE_handler             (void) __attribute__((weak, alias("Default_handler")));
void EXTI9_5_handler              (void) __attribute__((weak, alias("Default_handler")));
void TIM1_BRK_TIM9_handler        (void) __attribute__((weak, alias("Default_handler")));
void TIM1_UP_TIM10_handler        (void) __attribute__((weak, alias("Default_handler")));
void TIM1_TRG_COM_TIM11_handler   (void) __attribute__((weak, alias("Default_handler")));

void TIM1_CC_handler              (void) __attribute__((weak, alias("Default_handler")));
void TIM2_handler                 (void) __attribute__((weak, alias("Default_handler")));
void TIM3_handler                 (void) __attribute__((weak, alias("Default_handler")));
void TIM4_handler                 (void) __attribute__((weak, alias("Default_handler")));
void I2C1_EV_handler              (void) __attribute__((weak, alias("Default_handler")));
void I2C1_ER_handler              (void) __attribute__((weak, alias("Default_handler")));
void I2C2_EV_handler              (void) __attribute__((weak, alias("Default_handler")));
void I2C2_ER_handler              (void) __attribute__((weak, alias("Default_handler")));
void SPI1_handler                 (void) __attribute__((weak, alias("Default_handler")));
void SPI2_handler                 (void) __attribute__((weak, alias("Default_handler")));
void USART1_handler               (void) __attribute__((weak, alias("Default_handler")));
void USART2_handler               (void) __attribute__((weak, alias("Default_handler")));
void USART3_handler               (void) __attribute__((weak, alias("Default_handler")));
void EXTI15_10_handler            (void) __attribute__((weak, alias("Default_handler")));
void RTC_ALARM_handler            (void) __attribute__((weak, alias("Default_handler")));
void OTG_FS_WKUP_handler          (void) __attribute__((weak, alias("Default_handler")));
void TIM8_BRK_TIM12_handler       (void) __attribute__((weak, alias("Default_handler")));
void TIM8_UP_TIM13_handler        (void) __attribute__((weak, alias("Default_handler")));
void TIM8_TRG_COM_TIM14_handler   (void) __attribute__((weak, alias("Default_handler")));

void TIM8_CC_handler              (void) __attribute__((weak, alias("Default_handler")));
void DMA1_Stream7_handler         (void) __attribute__((weak, alias("Default_handler")));
void FMC_handler                  (void) __attribute__((weak, alias("Default_handler")));
void SDMMC1_handler               (void) __attribute__((weak, alias("Default_handler")));
void TIM5_handler                 (void) __attribute__((weak, alias("Default_handler")));
void SPI3_handler                 (void) __attribute__((weak, alias("Default_handler")));
void UART4_handler                (void) __attribute__((weak, alias("Default_handler")));
void UART5_handler                (void) __attribute__((weak, alias("Default_handler")));
void TIM6_DAC_handler             (void) __attribute__((weak, alias("Default_handler")));
void TIM7_handler                 (void) __attribute__((weak, alias("Default_handler")));
void DMA2_Stream0_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA2_Stream1_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA2_Stream2_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA2_Stream3_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA2_Stream4_handler         (void) __attribute__((weak, alias("Default_handler")));
void ETH_handler                  (void) __attribute__((weak, alias("Default_handler")));
void ETH_WKUP_handler             (void) __attribute__((weak, alias("Default_handler")));
void CAN2_TX_handler              (void) __attribute__((weak, alias("Default_handler")));
void CAN2_RX0_handler             (void) __attribute__((weak, alias("Default_handler")));
void CAN2_RX1_handler             (void) __attribute__((weak, alias("Default_handler")));
void CAN2_SCE_handler             (void) __attribute__((weak, alias("Default_handler")));
void OTG_FS_handler               (void) __attribute__((weak, alias("Default_handler")));
void DMA2_Stream5_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA2_Stream6_handler         (void) __attribute__((weak, alias("Default_handler")));
void DMA2_Stream7_handler         (void) __attribute__((weak, alias("Default_handler")));
void USART6_handler               (void) __attribute__((weak, alias("Default_handler")));
void I2C3_EV_handler              (void) __attribute__((weak, alias("Default_handler")));
void I2C3_ER_handler              (void) __attribute__((weak, alias("Default_handler")));
void OTG_HS_EP1_OUT_handler       (void) __attribute__((weak, alias("Default_handler")));
void OTG_HS_EP1_IN_handler        (void) __attribute__((weak, alias("Default_handler")));
void OTG_HS_WKUP_handler          (void) __attribute__((weak, alias("Default_handler")));
void OTG_HS_handler               (void) __attribute__((weak, alias("Default_handler")));
void DCMI_handler                 (void) __attribute__((weak, alias("Default_handler")));
void CRYP_handler                 (void) __attribute__((weak, alias("Default_handler")));
void HASH_RNG_handler             (void) __attribute__((weak, alias("Default_handler")));
void FPU_handler                  (void) __attribute__((weak, alias("Default_handler")));
void UART7_handler                (void) __attribute__((weak, alias("Default_handler")));
void UART8_handler                (void) __attribute__((weak, alias("Default_handler")));
void SPI4_handler                 (void) __attribute__((weak, alias("Default_handler")));
void SPI5_handler                 (void) __attribute__((weak, alias("Default_handler")));
void SPI6_handler                 (void) __attribute__((weak, alias("Default_handler")));
void SAI1_handler                 (void) __attribute__((weak, alias("Default_handler")));
void LCD_TFT_handler              (void) __attribute__((weak, alias("Default_handler")));
void LCD_TFT_1_handler            (void) __attribute__((weak, alias("Default_handler")));
void DMA2D_handler                (void) __attribute__((weak, alias("Default_handler")));
void SAI2_handler                 (void) __attribute__((weak, alias("Default_handler")));
void QuadSPI_handler              (void) __attribute__((weak, alias("Default_handler")));
void LP_Timer1_handler            (void) __attribute__((weak, alias("Default_handler")));
void I2C4_EV_handler              (void) __attribute__((weak, alias("Default_handler")));
void I2C4_ER_handler              (void) __attribute__((weak, alias("Default_handler")));
void SPDIFRX_handler              (void) __attribute__((weak, alias("Default_handler")));
void DSIHOST_handler              (void) __attribute__((weak, alias("Default_handler")));
void DFSDM1_FLT0_handler          (void) __attribute__((weak, alias("Default_handler")));
void DFSDM1_FLT1_handler          (void) __attribute__((weak, alias("Default_handler")));
void DFSDM1_FLT2_handler          (void) __attribute__((weak, alias("Default_handler")));
void DFSDM1_FLT3_handler          (void) __attribute__((weak, alias("Default_handler")));
void SDMMC2_handler               (void) __attribute__((weak, alias("Default_handler")));
void CAN3_TX_handler              (void) __attribute__((weak, alias("Default_handler")));
void CAN3_RX0_handler             (void) __attribute__((weak, alias("Default_handler")));
void CAN3_RX1_handler             (void) __attribute__((weak, alias("Default_handler")));
void CAN3_SCE_handler             (void) __attribute__((weak, alias("Default_handler")));
void JPEG_handler                 (void) __attribute__((weak, alias("Default_handler")));
void MDIOS_handler                (void) __attribute__((weak, alias("Default_handler")));

uint32_t isr_vectors[] __attribute__((section ("iv_table"))) = {
    STACK_START,
    (uint32_t)Reset_handler,
    (uint32_t)NMI_handler,
    (uint32_t)HardFault_handler,
    (uint32_t)MemManage_handler,
    (uint32_t)BusFault_handler,
    (uint32_t)UsageFault_handler,
    (uint32_t) 0,                           // Reserved
    (uint32_t) 0,                           // Reserved
    (uint32_t) 0,                           // Reserved
    (uint32_t) 0,                           // Reserved
    (uint32_t)SVCall_handler,
    (uint32_t)Debug_Monitor_handler,
    (uint32_t) 0,                           // Reserved
    (uint32_t)PendSV_handler,
    (uint32_t)SysTick_handler,
	(uint32_t) WWDG_handler                 ,
	(uint32_t) PVD_handler                  ,
	(uint32_t) TAMP_STAMP_handler           ,
	(uint32_t) RTC_WKUP_handler             ,
	(uint32_t) FLASH_handler                ,
	(uint32_t) RCC_handler                  ,
	(uint32_t) EXTI0_handler                ,
	(uint32_t) EXTI1_handler                ,
	(uint32_t) EXTI2_handler                ,
	(uint32_t) EXTI3_handler                ,
	(uint32_t) EXTI4_handler                ,
	(uint32_t) DMA1_Stream0_handler         ,
	(uint32_t) DMA1_Stream1_handler         ,
	(uint32_t) DMA1_Stream2_handler         ,
	(uint32_t) DMA1_Stream3_handler         ,
	(uint32_t) DMA1_Stream4_handler         ,
	(uint32_t) DMA1_Stream5_handler         ,
	(uint32_t) DMA1_Stream6_handler         ,
	(uint32_t) ADC_handler                  ,
	(uint32_t) CAN1_TX_handler              ,
	(uint32_t) CAN1_RX0_handler             ,
	(uint32_t) CAN1_RX1_handler             ,
	(uint32_t) CAN1_SCE_handler             ,
	(uint32_t) EXTI9_5_handler              ,
	(uint32_t) TIM1_BRK_TIM9_handler        ,
	(uint32_t) TIM1_UP_TIM10_handler        ,
	(uint32_t) TIM1_TRG_COM_TIM11_handler   ,

	(uint32_t) TIM1_CC_handler              ,
	(uint32_t) TIM2_handler                 ,
	(uint32_t) TIM3_handler                 ,
	(uint32_t) TIM4_handler                 ,
	(uint32_t) I2C1_EV_handler              ,
	(uint32_t) I2C1_ER_handler              ,
	(uint32_t) I2C2_EV_handler              ,
	(uint32_t) I2C2_ER_handler              ,
	(uint32_t) SPI1_handler                 ,
	(uint32_t) SPI2_handler                 ,
	(uint32_t) USART1_handler               ,
	(uint32_t) USART2_handler               ,
	(uint32_t) USART3_handler               ,
	(uint32_t) EXTI15_10_handler            ,
	(uint32_t) RTC_ALARM_handler            ,
	(uint32_t) OTG_FS_WKUP_handler          ,
	(uint32_t) TIM8_BRK_TIM12_handler       ,
	(uint32_t) TIM8_UP_TIM13_handler        ,
	(uint32_t) TIM8_TRG_COM_TIM14_handler   ,

	(uint32_t) TIM8_CC_handler              ,
	(uint32_t) DMA1_Stream7_handler         ,
	(uint32_t) FMC_handler                  ,
	(uint32_t) SDMMC1_handler               ,
	(uint32_t) TIM5_handler                 ,
	(uint32_t) SPI3_handler                 ,
	(uint32_t) UART4_handler                ,
	(uint32_t) UART5_handler                ,
	(uint32_t) TIM6_DAC_handler             ,
	(uint32_t) TIM7_handler                 ,
	(uint32_t) DMA2_Stream0_handler         ,
	(uint32_t) DMA2_Stream1_handler         ,
	(uint32_t) DMA2_Stream2_handler         ,
	(uint32_t) DMA2_Stream3_handler         ,
	(uint32_t) DMA2_Stream4_handler         ,
	(uint32_t) ETH_handler                  ,
	(uint32_t) ETH_WKUP_handler             ,
	(uint32_t) CAN2_TX_handler              ,
	(uint32_t) CAN2_RX0_handler             ,
	(uint32_t) CAN2_RX1_handler             ,
	(uint32_t) CAN2_SCE_handler             ,
	(uint32_t) OTG_FS_handler               ,
	(uint32_t) DMA2_Stream5_handler         ,
	(uint32_t) DMA2_Stream6_handler         ,
	(uint32_t) DMA2_Stream7_handler         ,
	(uint32_t) USART6_handler               ,
	(uint32_t) I2C3_EV_handler              ,
	(uint32_t) I2C3_ER_handler              ,
	(uint32_t) OTG_HS_EP1_OUT_handler       ,
	(uint32_t) OTG_HS_EP1_IN_handler        ,
	(uint32_t) OTG_HS_WKUP_handler          ,
	(uint32_t) OTG_HS_handler               ,
	(uint32_t) DCMI_handler                 ,
	(uint32_t) CRYP_handler                 ,
	(uint32_t) HASH_RNG_handler             ,
	(uint32_t) FPU_handler                  ,
	(uint32_t) UART7_handler                ,
	(uint32_t) UART8_handler                ,
	(uint32_t) SPI4_handler                 ,
	(uint32_t) SPI5_handler                 ,
	(uint32_t) SPI6_handler                 ,
	(uint32_t) SAI1_handler                 ,
	(uint32_t) LCD_TFT_handler              ,
	(uint32_t) LCD_TFT_1_handler            ,
	(uint32_t) DMA2D_handler                ,
	(uint32_t) SAI2_handler                 ,
	(uint32_t) QuadSPI_handler              ,
	(uint32_t) LP_Timer1_handler            ,
	(uint32_t) I2C4_EV_handler              ,
	(uint32_t) I2C4_ER_handler              ,
	(uint32_t) SPDIFRX_handler              ,
	(uint32_t) DSIHOST_handler              ,
	(uint32_t) DFSDM1_FLT0_handler          ,
	(uint32_t) DFSDM1_FLT1_handler          ,
	(uint32_t) DFSDM1_FLT2_handler          ,
	(uint32_t) DFSDM1_FLT3_handler          ,
	(uint32_t) SDMMC2_handler               ,
	(uint32_t) CAN3_TX_handler              ,
	(uint32_t) CAN3_RX0_handler             ,
	(uint32_t) CAN3_RX1_handler             ,
	(uint32_t) CAN3_SCE_handler             ,
	(uint32_t) JPEG_handler                 ,
	(uint32_t) MDIOS_handler                ,

};

void Reset_handler(void){
    // copy .data into SRAM
    uint32_t size_of_data = &end_data - &start_data;
    uint32_t size_of_bss = &end_bss - &start_bss;
    uint8_t* start_sram = (uint8_t*)SRAM1_START;
    uint8_t* d_data = &la_data;
    for(int i = 0; i<size_of_data; i++){
        *start_sram++= *d_data++;
    }
    // initialize .bss to 0
    for(int i = 0; i<size_of_bss; i++){
        *start_sram++= 0;
    }
    // if std used call init
    /* call main */
    main();
}

void Default_handler(void){
    while(1);
}






