#include <stdio.h>

int main(){
    int arr[5], bur, j, set;
    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);
    if(arr[0] > arr[1])
    {
        if(arr[1] > arr[2])
            bur = arr[2];
        else
            bur = arr[1];
    }

    else
    {
        if(arr[0] > arr[2])
            bur = arr[2];
        else
            bur = arr[0];
    }

    if(arr[3] > arr[4])
        j = arr[4];
    else
        j = arr[3];

    set = j + bur - 50;
    printf("%d", set);
    return 0;
}