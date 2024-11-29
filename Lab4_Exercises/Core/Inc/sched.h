/*
 * sched.h
 *
 *  Created on: Nov 29, 2024
 *      Author: USER
 */

#ifndef INC_SCHED_H_
#define INC_SCHED_H_

#include <stdint.h>

#define SCH_MAX_TASKS 10

typedef struct {
    void (*pTask)(void);
    uint32_t Delay;
    uint32_t Period;
    uint8_t RunMe;
} sTask;

void SCH_Init(void);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
uint32_t SCH_Add_Task(void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);
uint8_t SCH_Delete_Task(uint32_t taskID);

#endif /* INC_SCHED_H_ */
