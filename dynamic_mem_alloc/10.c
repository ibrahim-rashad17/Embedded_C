#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void reverse_array(int **arr, int n)
{
    int *start = *arr;
    int *end = *arr + n - 1;
    int temp;

    while (*start < *end)
    {
        temp = *start;
        *start = *(end);
        *end = temp;

        *start++;
        *end--;
    }
    
}

void main()
{
    int *arr = (int*)malloc(5*sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        *(arr+i) = i;
        printf("%d\t",*(arr+i));
    }
    printf("\n");

    reverse_array(&arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",*(arr+i));
    }
    
}