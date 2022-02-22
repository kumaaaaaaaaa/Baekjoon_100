#include <stdio.h>

int main(){
    int arr[7] = {0};
    int sum = 0, min = 100;
    for(int i=0; i<7; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 1)
        {
            sum += arr[i];
            if(min > arr[i])
                min = arr[i];
        }
    }
    if(sum == 0)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
    return 0;
}