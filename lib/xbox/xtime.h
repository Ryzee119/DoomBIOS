#ifndef TIMER_H
#define TIMER_H

#include "xbox.h"

uint32_t xbox_timer_query_performance_frequency(void);
uint32_t xbox_timer_query_performance_counter(void);
void xbox_timer_spin_wait(uint32_t ms);
void xbox_timer_measure_apic_frequency(void);
#define XBOX_TIMER_MS_TO_TICKS(ms) (uint32_t)(((uint64_t)(ms)) * (uint64_t)xbox_timer_query_performance_frequency() / 1000)
#define XBOX_TIMER_US_TO_TICKS(us) (uint32_t)(((uint64_t)(us)) * (uint64_t)xbox_timer_query_performance_frequency() / 1000000)

#endif