#include <stdio.h>

int main(void){
    int n, sum = 0;
    int arr[100] = {0};
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf(" %1d", &arr[i]);

    for(int j=0; j<n; j++)
        sum = sum + arr[j];

    printf("%d", sum);
    return 0;
}