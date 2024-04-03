/*
 * main.h
 *
 *  Created on: Feb 1, 2024
 *      Author: stealth
 */

#ifndef MAIN_H_
#define MAIN_H_

#define  MAX_TASKS             5
#define  DUMMY_XPSR            0x01000000U



//defining macros for task stacks
#define  TASK_STACK_SIZE       1024U
#define  SCHED_STACK_SIZE      1024U

#define  SRAM_START            0x20000000U
#define  SRAM_SIZE             ((128) * (1024))
#define  SRAM_END              ((SRAM_START) + (SRAM_SIZE))

#define  T1_STACK_START        (SRAM_END)
#define  T2_STACK_START        ((SRAM_END) - (1 * TASK_STACK_SIZE))
#define  T3_STACK_START        ((SRAM_END) - (2 * TASK_STACK_SIZE))
#define  T4_STACK_START        ((SRAM_END) - (3 * TASK_STACK_SIZE))
#define  IDLE_STACK_START      ((SRAM_END) - (4 * TASK_STACK_SIZE))
#define  SCHED_STACK_START     ((SRAM_END) - (5 * TASK_STACK_SIZE))

#define  TICK_HZ               1000U
#define  HSI                   16000000U
#define  SYSTICK_TIME_CLK      HSI

#define  TASK_READY_STATE   0x00
#define  TASK_BLOCKED_STATE   0xFF


#endif /* MAIN_H_ */
