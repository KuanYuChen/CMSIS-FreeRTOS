/*
 * FreeRTOS Kernel V10.0.1
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://www.FreeRTOS.org
 * http://aws.amazon.com/freertos
 *
 * 1 tab == 4 spaces!
 */


#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/*-----------------------------------------------------------
 * Application specific definitions.
 *
 * These definitions should be adjusted for your particular hardware and
 * application requirements.
 *
 * THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
 * FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE.
 *
 * See http://www.freertos.org/a00110.html.
 *----------------------------------------------------------*/

#include <stdint.h>

#include "RTE_Components.h"
#include CMSIS_device_header

#include "os_tick.h"

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

//  <o>Minimal stack size [words] <0-65535>
//  <i> Stack for idle task and default task stack in words.
//  <i> Default: 128
#define configMINIMAL_STACK_SIZE                ((uint16_t)(128))

//  <o>Total heap size [bytes] <0-0xFFFFFFFF>
//  <i> Heap memory size in bytes.
//  <i> Default: 8192
#define configTOTAL_HEAP_SIZE                   ((size_t)8192)

//  <o>Kernel tick frequency [Hz] <0-0xFFFFFFFF>
//  <i> Kernel tick rate in Hz.
//  <i> Default: 1000
#define configTICK_RATE_HZ                      ((TickType_t)1000)

//  <o>Timer task stack depth [words] <0-65535>
//  <i> Stack for timer task in words.
//  <i> Default: 80
#define configTIMER_TASK_STACK_DEPTH            80

//  <o>Timer task priority <0-56>
//  <i> Timer task priority.
//  <i> Default: 40 (High)
#define configTIMER_TASK_PRIORITY               40

//  <o>Timer queue length <0-1024>
//  <i> Timer command queue length.
//  <i> Default: 5
#define configTIMER_QUEUE_LENGTH                5

//  <o>Preemption interrupt priority
//  <i> Maximum priority of interrupts that are safe to call FreeRTOS API.
//  <i> Default: 16
#define configMAX_SYSCALL_INTERRUPT_PRIORITY    16

//  <q>Use time slicing
//  <i> Enable setting to use timeslicing.
//  <i> Default: 1
#define configUSE_TIME_SLICING                  1

//  <q>Idle should yield
//  <i> Control Yield behaviour of the idle task.
//  <i> Default: 1
#define configIDLE_SHOULD_YIELD                 1

//  <o>Check for stack overflow
//    <0=>Disable <1=>Method one <2=>Method two
//  <i> Enable or disable stack overflow checking.
//  <i> Callback function vApplicationStackOverflowHook implementation is required when stack checking is enabled.
//  <i> Default: 0
#define configCHECK_FOR_STACK_OVERFLOW          2

//  <q>Use idle hook
//  <i> Enable callback function call on each idle task iteration.
//  <i> Callback function vApplicationIdleHook implementation is required when idle hook is enabled.
//  <i> Default: 0
#define configUSE_IDLE_HOOK                     0

//  <q>Use tick hook
//  <i> Enable callback function call during each tick interrupt.
//  <i> Callback function vApplicationTickHook implementation is required when tick hook is enabled.
//  <i> Default: 0
#define configUSE_TICK_HOOK                     0

//  <q>Use deamon task startup hook
//  <i> Enable callback function call when timer service starts.
//  <i> Callback function vApplicationDaemonTaskStartupHook implementation is required when deamon task startup hook is enabled.
//  <i> Default: 0
#define configUSE_DAEMON_TASK_STARTUP_HOOK      0

//  <q>Use malloc failed hook
//  <i> Enable callback function call when out of dynamic memory.
//  <i> Callback function vApplicationMallocFailedHook implementation is required when malloc failed hook is enabled.
//  <i> Default: 0
#define configUSE_MALLOC_FAILED_HOOK            0

//  <o>Queue registry size
//  <i> Define maximum number of queue objects registered for debug purposes.
//  <i> The queue registry is used by kernel aware debuggers to locate queue and semaphore structures and display associated text names.
//  <i> Default: 0
#define configQUEUE_REGISTRY_SIZE               0

//  <o>Interrupt controller base address
//  <i> Must be set to the base address of the ARM Generic Interrupt Controller (GIC).
//  <i> Default: 0x2C000000
#define configINTERRUPT_CONTROLLER_BASE_ADDRESS 0x2C000000UL

//  <o>Interrupt controller CPU interface offset
//  <i> Must be set to the offset from interrupt controller base address at which the CPU interface starts.
//  <i> Default: 0x1000
#define configINTERRUPT_CONTROLLER_CPU_INTERFACE_OFFSET 0x00000100UL

//  <o>Interrupt controller unique priorities
//  <i> The number of unique priorities that can be specified in the ARM Generic Interrupt Controller (GIC).
//  <i> Default: 32
#define configUNIQUE_INTERRUPT_PRIORITIES       16

//  <o>Maximum API call interrupt priority
//  <i> Interrupts assigned a priority at or below this priority can call interrupt safe FreeRTOS API function, and will nest.
//  <i> Interrupts assigned a priority above this priority will not be effected by RTOS critical sections, and will nest,
//  <i> but cannot call any FreeRTOS API functions.
//  <i> Default: 32
#define configMAX_API_CALL_INTERRUPT_PRIORITY   16

//------------- <<< end of configuration section >>> ---------------------------

/* Defines needed by FreeRTOS to implement CMSIS RTOS2 API. Do not change! */
#define configCPU_CLOCK_HZ                      (SystemCoreClock)
#define configSUPPORT_STATIC_ALLOCATION         1
#define configSUPPORT_DYNAMIC_ALLOCATION        1
#define configUSE_PREEMPTION                    1
#define configUSE_TIMERS                        1
#define configUSE_MUTEXES                       1
#define configUSE_RECURSIVE_MUTEXES             1
#define configUSE_COUNTING_SEMAPHORES           1
#define configUSE_TASK_NOTIFICATIONS            1
#define configUSE_TRACE_FACILITY                1
#define configUSE_16_BIT_TICKS                  0
#define configUSE_PORT_OPTIMISED_TASK_SELECTION 0
#define configMAX_PRIORITIES                    56
#define configKERNEL_INTERRUPT_PRIORITY         255

/* Defines that include FreeRTOS functions which implement CMSIS RTOS2 API. Do not change! */
#define INCLUDE_xEventGroupSetBitsFromISR       1
#define INCLUDE_xSemaphoreGetMutexHolder        1
#define INCLUDE_vTaskDelay                      1
#define INCLUDE_vTaskDelayUntil                 1
#define INCLUDE_vTaskDelete                     1
#define INCLUDE_xTaskGetCurrentTaskHandle       1
#define INCLUDE_xTaskGetSchedulerState          1
#define INCLUDE_uxTaskGetStackHighWaterMark     1
#define INCLUDE_uxTaskPriorityGet               1
#define INCLUDE_vTaskPrioritySet                1
#define INCLUDE_eTaskGetState                   1
#define INCLUDE_vTaskSuspend                    1
#define INCLUDE_xTimerPendFunctionCall          1

/* Map the FreeRTOS port timer configuration functions to their implementations */
#define configSETUP_TICK_INTERRUPT()                         \
  OS_Tick_Setup (configTICK_RATE_HZ, FreeRTOS_Tick_Handler); \
  OS_Tick_Enable();

#define configCLEAR_TICK_INTERRUPT()                         \
  OS_Tick_AcknowledgeIRQ()

#endif /* FREERTOS_CONFIG_H */
