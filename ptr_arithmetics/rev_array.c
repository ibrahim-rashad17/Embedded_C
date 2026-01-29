#include <stdio.h>

void reverse(int *arr, int n)
{
    int *start = arr;           
    int *end   = arr + n - 1;   

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;  
        end--;    
    }
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    reverse(arr, n);

    for (int *p = arr; p < arr + n; p++)
    {
        printf("%d ", *p);
    }
        

    return 0;
}
