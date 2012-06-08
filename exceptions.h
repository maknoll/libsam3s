
void Reset_Handler(void);

void Reset_Handler(void); 
void NMI_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void HardFault_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void MemManage_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void BusFault_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void UsageFault_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void SVC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void DebugMon_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void PendSV_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void SysTick_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));

void ACC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void ADC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void CRCCU_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void DACC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void EFC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void HSMCI_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void PIOA_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void PIOB_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void PIOC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void PMC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void PWM_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void RSTC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void RTC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void RTT_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void SMC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void SPI_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void SSC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void SUPC_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void TC0_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void TC1_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void TC2_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void TC3_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void TC4_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void TC5_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void TWI0_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void TWI1_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void UART0_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void UART1_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void USART0_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void USART1_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void UDP_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));
void WDT_Handler(void) __attribute__ ((weak, alias("Reset_Handler")));

