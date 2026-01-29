#include <stdio.h>
#include <stdint.h>


//Reverse a 32 bit num
void main()
{
    uint32_t num = 0x10089C03;
    uint32_t rev = 0;

    for (int i = 0; i < 32; i++)
    {
        if (num & (1<<i))
        {
            rev |= (1 << (31-i));
        }     
    }

    
    //Faster approach

    rev = num;
    
    rev = ((rev & 0x0000FFFF) << 16) | ((rev & 0xFFFF0000) >> 16);
    rev = ((rev & 0x00FF00FF) << 8) | ((rev & 0xFF00FF00) >> 8);
    rev = ((rev & 0x0F0F0F0F) << 4) | ((rev & 0xF0F0F0F0) >> 4);
    rev = ((rev & 0x33333333) << 2) | ((rev & 0xCCCCCCCC) >> 2);
    rev = ((rev & 0x55555555) << 1) | ((rev & 0xAAAAAAAA) >> 1);


}