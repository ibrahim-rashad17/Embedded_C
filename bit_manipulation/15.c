/* Program to multiply a num by 9

Basically break a number into pow of 2 and use the the bitwise multiply by 2
9 = 8 + 1


num * 9 = (num * 8) + (num*1)
num * 9 = (num << 3) + num

*/

#include <stdio.h>

int mulyBy9(int x)
{
    return (x << 3) + x;
}

int main(void)
{
    int n = 7;
    printf(" %d\n", mulyBy9(n));
    return 0;
}
