#ifndef BITMASK_H_INCLUDED
#define BITMASK_H_INCLUDED
#include <stdio.h>
#include <stdint.h>
uint8_t setbit(uint8_t num,int bitposition);

uint8_t resetbit(uint8_t num,int bit_position);

uint8_t flipbit(uint8_t num,int bit_position);

int querybit(uint8_t num,int bit_position);

#endif // BITMASK_H_INCLUDED
