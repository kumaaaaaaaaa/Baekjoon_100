#include <stdio.h>

int main(){
    int n, sum=0,k=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        k += 3*(1+i);
        sum += k;
    }
    printf("%d", sum);
    return 0;
}