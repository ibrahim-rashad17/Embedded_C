#include <stdio.h>
#include <stdint.h>

uint32_t countSetBits(uint32_t x)
{
    uint32_t count = 0;
    while (x) {
        x = x & (x-1);
        count++;
    }
    return count;
}

int bitsToFlip(uint32_t A, uint32_t B)
{
    return countSetBits(A ^ B);
}

int main(void)
{
   uint32_t A = 29;
    uint32_t B = 15;

    printf("Bits to flip: %d\n", bitsToFlip(A, B));
    return 0;
}
