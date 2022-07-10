#include "stdint.h"

typedef struct
{
   uint32_t MODER;    /*!< GPIO port mode register,               Address offset: 0x00      */
   uint32_t OTYPER;   /*!< GPIO port output type register,        Address offset: 0x04      */
   uint32_t OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
   uint32_t PUPDR;    /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
   uint32_t IDR;      /*!< GPIO port input data register,         Address offset: 0x10      */
   uint32_t ODR;      /*!< GPIO port output data register,        Address offset: 0x14      */
   uint32_t BSRR;     /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
   uint32_t LCKR;     /*!< GPIO port configuration lock register, Address offset: 0x1C      */
   uint32_t AFR[2];   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
} GPIO_TypeDef;

typedef struct
{
   uint32_t CR;            /*!< RCC clock control register,                                  Address offset: 0x00 */
   uint32_t PLLCFGR;       /*!< RCC PLL configuration register,                              Address offset: 0x04 */
   uint32_t CFGR;          /*!< RCC clock configuration register,                            Address offset: 0x08 */
   uint32_t CIR;           /*!< RCC clock interrupt register,                                Address offset: 0x0C */
   uint32_t AHB1RSTR;      /*!< RCC AHB1 peripheral reset register,                          Address offset: 0x10 */
   uint32_t AHB2RSTR;      /*!< RCC AHB2 peripheral reset register,                          Address offset: 0x14 */
   uint32_t AHB3RSTR;      /*!< RCC AHB3 peripheral reset register,                          Address offset: 0x18 */
  uint32_t      RESERVED0;     /*!< Reserved, 0x1C                                                                    */
   uint32_t APB1RSTR;      /*!< RCC APB1 peripheral reset register,                          Address offset: 0x20 */
   uint32_t APB2RSTR;      /*!< RCC APB2 peripheral reset register,                          Address offset: 0x24 */
  uint32_t      RESERVED1[2];  /*!< Reserved, 0x28-0x2C                                                               */
   uint32_t AHB1ENR;       /*!< RCC AHB1 peripheral clock register,                          Address offset: 0x30 */
   uint32_t AHB2ENR;       /*!< RCC AHB2 peripheral clock register,                          Address offset: 0x34 */
   uint32_t AHB3ENR;       /*!< RCC AHB3 peripheral clock register,                          Address offset: 0x38 */
  uint32_t      RESERVED2;     /*!< Reserved, 0x3C                                                                    */
   uint32_t APB1ENR;       /*!< RCC APB1 peripheral clock enable register,                   Address offset: 0x40 */
   uint32_t APB2ENR;       /*!< RCC APB2 peripheral clock enable register,                   Address offset: 0x44 */
  uint32_t      RESERVED3[2];  /*!< Reserved, 0x48-0x4C                                                               */
   uint32_t AHB1LPENR;     /*!< RCC AHB1 peripheral clock enable in low power mode register, Address offset: 0x50 */
   uint32_t AHB2LPENR;     /*!< RCC AHB2 peripheral clock enable in low power mode register, Address offset: 0x54 */
   uint32_t AHB3LPENR;     /*!< RCC AHB3 peripheral clock enable in low power mode register, Address offset: 0x58 */
  uint32_t      RESERVED4;     /*!< Reserved, 0x5C                                                                    */
   uint32_t APB1LPENR;     /*!< RCC APB1 peripheral clock enable in low power mode register, Address offset: 0x60 */
   uint32_t APB2LPENR;     /*!< RCC APB2 peripheral clock enable in low power mode register, Address offset: 0x64 */
  uint32_t      RESERVED5[2];  /*!< Reserved, 0x68-0x6C                                                               */
   uint32_t BDCR;          /*!< RCC Backup domain control register,                          Address offset: 0x70 */
   uint32_t CSR;           /*!< RCC clock control & status register,                         Address offset: 0x74 */
  uint32_t      RESERVED6[2];  /*!< Reserved, 0x78-0x7C                                                               */
   uint32_t SSCGR;         /*!< RCC spread spectrum clock generation register,               Address offset: 0x80 */
   uint32_t PLLI2SCFGR;    /*!< RCC PLLI2S configuration register,                           Address offset: 0x84 */
  uint32_t      RESERVED7[1];  /*!< Reserved, 0x88                                                                    */
   uint32_t DCKCFGR;       /*!< RCC Dedicated Clocks configuration register,                 Address offset: 0x8C */
} RCC_TypeDef;

#define FLASH_BASE            0x08000000UL /*!< FLASH(up to 1 MB) base address in the alias region                         */
#define SRAM1_BASE            0x20000000UL /*!< SRAM1(64 KB) base address in the alias region                              */
#define PERIPH_BASE           0x40000000UL /*!< Peripheral base address in the alias region                                */
#define SRAM1_BB_BASE         0x22000000UL /*!< SRAM1(64 KB) base address in the bit-band region                           */
#define PERIPH_BB_BASE        0x42000000UL /*!< Peripheral base address in the bit-band region                             */
#define BKPSRAM_BB_BASE       0x42480000UL /*!< Backup SRAM(4 KB) base address in the bit-band region                      */
#define FLASH_END             0x0803FFFFUL /*!< FLASH end address                                                          */
#define FLASH_OTP_BASE        0x1FFF7800UL /*!< Base address of : (up to 528 Bytes) embedded FLASH OTP Area                */
#define FLASH_OTP_END         0x1FFF7A0FUL /*!< End address of : (up to 528 Bytes) embedded FLASH OTP Area                 */


#define AHB1PERIPH_BASE       (PERIPH_BASE + 0x00020000UL)
 
#define GPIOC_BASE            (AHB1PERIPH_BASE + 0x0800UL)
#define RCC_BASE              (AHB1PERIPH_BASE + 0x3800UL)

#define GPIOC               ((GPIO_TypeDef *) GPIOC_BASE)
#define RCC                 ((RCC_TypeDef *) RCC_BASE)


#define RCC_AHB1ENR_GPIOCEN_Pos            (2U)                                
#define RCC_AHB1ENR_GPIOCEN_Msk            (0x1UL << RCC_AHB1ENR_GPIOCEN_Pos)   /*!< 0x00000004 */
#define RCC_AHB1ENR_GPIOCEN                RCC_AHB1ENR_GPIOCEN_Msk    

#define GPIO_MODER_MODER13_Pos           (26U)                                 
#define GPIO_MODER_MODER13_Msk           (0x3UL << GPIO_MODER_MODER13_Pos)      /*!< 0x0C000000 */
#define GPIO_MODER_MODER13               GPIO_MODER_MODER13_Msk                
#define GPIO_MODER_MODER13_0             (0x1UL << GPIO_MODER_MODER13_Pos)      /*!< 0x04000000 */
#define GPIO_MODER_MODER13_1             (0x2UL << GPIO_MODER_MODER13_Pos)      /*!< 0x08000000 */

#define GPIO_ODR_OD13_Pos                (13U)                                 
#define GPIO_ODR_OD13_Msk                (0x1UL << GPIO_ODR_OD13_Pos)           /*!< 0x00002000 */
#define GPIO_ODR_OD13                    GPIO_ODR_OD13_Msk     

int main(void) {
  RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
  GPIOC->MODER |= GPIO_MODER_MODER13_0;
  GPIOC->OTYPER = 0;
  while (1) {
    GPIOC->ODR ^= GPIO_ODR_OD13;
    for (uint32_t x = 0; x < 4000000; x++)
      ;
  }
}