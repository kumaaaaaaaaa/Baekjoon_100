#include <stdio.h>

int main(){
    int arr[6] = {0};
    int a[6] = {1, 1, 2 ,2 ,2 ,8};
    for(int i=0; i<6; i++)
        scanf("%d", &arr[i]);

    for(int j=0; j<6; j++)
        printf("%d ", a[j]-arr[j]);
    return 0;
}