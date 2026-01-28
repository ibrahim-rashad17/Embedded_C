#include <stdio.h>

int hash_arr[6];    //This array holds the count each element is presengt

int main() {
    int arr[] = {1, 2, 2, 3, 4, 3, 2, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

   
    for (int i = 1; i <= n; i++) {
        hash_arr[arr[i]]++;
    }

    for(int i=1;i<=5;i++)
    {
        printf("%d occurs %d times\r\n",i,hash_arr[i]);
    }


    return 0;
}
