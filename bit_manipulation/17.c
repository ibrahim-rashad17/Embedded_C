#include <stdio.h>
#include <stdint.h>

//Little to Big endian

uint32_t conv_to_big_endian(uint32_t x)
{
    return ((x & 0x000000FFU) << 24) | 
            ((x & 0x0000FF00U) << 8) |
            ((x & 0x00FF0000U) >> 8) | 
            ((x & 0xFF000000U) >> 24);
}

void main()
{
    uint32_t num = 0xAABBCCDD;

    printf("%X\n",num);

    num = conv_to_big_endian(num);

    printf("%X\n",num);

}