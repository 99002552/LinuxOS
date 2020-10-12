#include "bitmask.h"

uint8_t setbit(uint8_t num,int bit_position)
{
    num = num|(1<<bit_position);
    return num;
}

uint8_t resetbit(uint8_t num,int bit_position)
{
    num&=~(1<<bit_position);
    return num;
}
uint8_t flipbit(uint8_t num,int bit_position)
{
    num^=(1<<bit_position);
    return num;
}
bool querybit(uint8_t num,int bit_position)
{
    //If bit is set then return true or else return false
    if(num&(1<<bit_position))
        return true;
    else
        return false;
}
