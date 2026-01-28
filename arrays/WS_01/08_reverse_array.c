#include <stdio.h>

int arr[5] = {10,20,30,40,50};

void rev_array(int *arr, int n)
{
    int temp;

    for(int i=0;i<(n/2);i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

}

int main()
{
    rev_array(arr,(sizeof(arr)/4));

    for(int i=0;i<(sizeof(arr)/4);i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}