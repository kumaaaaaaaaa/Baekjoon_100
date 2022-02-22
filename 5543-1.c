#include <stdio.h>

int main(){
    int arr[5], bur, j, set;
    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);
    bur = arr[0] > arr[1] ? (arr[1] > arr[2] ? arr[2] : arr[1]) : (arr[0] > arr[2] ? arr[2] : arr[0]);
    j = arr[3] > arr[4] ? arr[4] : arr[3];
    set = j + bur - 50;
    printf("%d", set);
    return 0;
}