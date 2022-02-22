#include <stdio.h>

int main(){
    int a, n, temp;
    int arr[50];
    scanf("%d", &n);
    for(int i=0; i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int j=0; j<n-1; j++)
    {
        for(int k=0; k<n-1;k++)
        {
            if(arr[k] > arr[k+1])
            {
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }

    printf("%d", arr[n-1]*arr[0]);
    return 0;
}