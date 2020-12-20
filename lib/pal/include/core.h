#ifndef STM32F767_H
#define STM32F767_H
#include<stdint.h>

/* =========================================================================================================================== */
/* ================                           Processor and Core Peripheral Section                           ================ */
/* =========================================================================================================================== */

/* =============================  Configuration of the undefined Processor and Core Peripherals  ============================= */
#define __UNDEF_REV                 0x0000U     /*!< undef Core Revision                                                       */
#define __NVIC_PRIO_BITS               0        /*!< Number of Bits used for Priority Levels                                   */
#define __Vendor_SysTickConfig         0        /*!< Set to 1 if different SysTick Config is used                              */


/** @} */ /* End of group Configuration_of_CMSIS */

// #include "core_undef.h"                         [>!< undefined processor and core peripherals                                  <]
// #include "system_STM32F767.h"                   [>!< STM32F767 System                                                          <]

#ifndef __IM                                    /*!< Fallback for older CMSIS versions                                         */
  #define __IM   volatile
#endif
#ifndef __OM                                    /*!< Fallback for older CMSIS versions                                         */
  #define __OM   volatile
#endif
#ifndef __IOM                                   /*!< Fallback for older CMSIS versions                                         */
  #define __IOM  volatile
#endif

#define     SET     1
#define     RESET   0



/* end of header */
#endif

