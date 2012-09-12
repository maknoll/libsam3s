
#include <stdint.h>
#include "exceptions.h"

extern unsigned int _end_stack;
extern unsigned int _end_text;
extern unsigned int _start_data;
extern unsigned int _end_data;
extern unsigned int _start_bss;
extern unsigned int _end_bss;

extern int main(void);

void *vector_table[] __attribute__ ((section(".vectors"))) = {

	&_end_stack,
	Reset_Handler,

	NMI_Handler,
	HardFault_Handler,
	MemManage_Handler,
	BusFault_Handler,
	UsageFault_Handler,
	0, 0, 0, 0,        /* Reserved */
	SVC_Handler,
	DebugMon_Handler,
	0,                 /* Reserved  */
	PendSV_Handler,
	SysTick_Handler,

	SUPC_Handler,   /* 0  Supply Controller */
	RSTC_Handler,   /* 1  Reset Controller */
	RTC_Handler,    /* 2  Real Time Clock */
	RTT_Handler,    /* 3  Real Time Timer */
	WDT_Handler,    /* 4  Watchdog Timer */
	PMC_Handler,    /* 5  PMC */
	EFC_Handler,    /* 6  EFC */
	0,              /* 7  Reserved */
	UART0_Handler,  /* 8  UART0 */
	UART1_Handler,  /* 9  UART1 */
	SMC_Handler,    /* 10 SMC */
	PIOA_Handler,   /* 11 Parallel IO Controller A */
	PIOB_Handler,   /* 12 Parallel IO Controller B */
	PIOC_Handler,   /* 13 Parallel IO Controller C */
	USART0_Handler, /* 14 USART 0 */
	USART1_Handler, /* 15 USART 1 */
	0,              /* 16 Reserved */
	0,              /* 17 Reserved */
	HSMCI_Handler,  /* 18 HSMCI */
	TWI0_Handler,   /* 19 TWI 0 */
	TWI1_Handler,   /* 20 TWI 1 */
	SPI_Handler,    /* 21 SPI */
	SSC_Handler,    /* 22 SSC */
	TC0_Handler,    /* 23 Timer Counter 0 */
	TC1_Handler,    /* 24 Timer Counter 1 */
	TC2_Handler,    /* 25 Timer Counter 2 */
	TC3_Handler,    /* 26 Timer Counter 3 */
	TC4_Handler,    /* 27 Timer Counter 4 */
	TC5_Handler,    /* 28 Timer Counter 5 */
	ADC_Handler,    /* 29 ADC controller */
	DACC_Handler,   /* 30 DACC controller */
	PWM_Handler,    /* 31 PWM */
	CRCCU_Handler,  /* 32 CRC Calculation Unit */
	ACC_Handler,    /* 33 Analog Comparator */
	UDP_Handler,    /* 34 USB Device Port */
	0               /* 35 not used */
};

void Reset_Handler(void)
{
    unsigned int *src, *dst;
     
    src = &_end_text;
    dst = &_start_data;
    while (dst < &_end_data)
        *dst++ = *src++;
 
    dst = &_start_bss;
    while (dst < &_end_bss)
        *dst++ = 0;

//    SystemInit();
	main();

	while (1);
}
