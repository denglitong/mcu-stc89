//
// Created by Litong Deng on 2022/10/4.
//

#ifndef CMC_STC89_COMMON_H
#define CMC_STC89_COMMON_H

#define ADDR_0 P1_0
#define ADDR_1 P1_1
#define ADDR_2 P1_2
#define ADDR_3 P1_3
#define EN_LED P1_4

typedef void(VoidFun)();

void enable_74hc138();

void delay_ms(unsigned int s);

void delay_ms_imprecise(unsigned int s);

void delay_ms_precise(unsigned int s);

void run_in_every_ms(unsigned int total_millis, VoidFun *fun);

#endif  // CMC_STC89_COMMON_H
