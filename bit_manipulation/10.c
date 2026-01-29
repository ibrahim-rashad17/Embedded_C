#include <stdio.h>
#include <stdint.h>

void main()
{
    uint8_t num = 0xAD;
    
    if(num & 0x01)
    {
        printf("Odd");
    }
    else
    {
        printf("Even");
    }
}