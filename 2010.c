#include <stdio.h>

int main(){
    int n, tap,sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &tap);
        sum += tap;
    }
    printf("%d", sum-n+1);
    return 0;
}