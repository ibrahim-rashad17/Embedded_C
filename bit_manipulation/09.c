#include <stdio.h>
#include <stdint.h>

void main()
{
    uint8_t num = 0x10;

    if(!(num & (num-1)))
    {
        printf("Pow of 2");
    }
}