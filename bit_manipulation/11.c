#include <stdio.h>
#include <stdint.h>

//Implement the function setbits(x, p, n, y) that sets n bits in
// x starting at position p with the rightmost n bits of y.


uint8_t setbits(uint8_t x, uint8_t p, uint8_t n, uint8_t y)
{
    uint8_t extracted_bits = y & ( (1<<n) - 1 );
    uint8_t shift = p - n + 1;
    x &= ~(mask_value(n) << shift);

    x |= (extracted_bits << shift);

    return x;
}

void main()
{
    uint8_t x = 0xAA;
    uint8_t y = 0xCC;

    uint8_t num = setbits(x,4,3,y);

    printf("%X\n",num);

}