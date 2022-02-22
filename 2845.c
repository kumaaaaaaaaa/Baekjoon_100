#include <stdio.h>

int main(){
    int p, l;
    int arr[5] = {0};
    scanf("%d %d", &p, &l);
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
        arr[i] = arr[i] - p * l ; 
    }
    for(int j=0; j<5; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}