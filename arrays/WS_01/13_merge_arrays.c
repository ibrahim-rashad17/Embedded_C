#include <stdio.h>

void merge_arrays(int *arr1, int *arr2, int *res_arr, int n1, int n2, int n)
{
    int cnt = 0;
    for(int i=0;i<n1;i++)
    {
        res_arr[cnt++] = arr1[i];
    }   

    for(int i=0;i<n2;i++)
    {
        res_arr[cnt++] = arr2[i];
    }  
}

int main()
{
    int arr1[3] = {10,20,4};
    int arr2[3] = {15,29,34};
    int n1 = (sizeof(arr1) / 4);
    int n2 = (sizeof(arr2) / 4);
    int n = n1 + n2;

    int result_arr[n];

    merge_arrays(arr1,arr2,result_arr,n1,n2,n);

    for(int i=0;i<n;i++)
    {
        printf("%d\t",result_arr[i]);
    }

    return 0;
}