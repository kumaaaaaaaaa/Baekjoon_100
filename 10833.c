#include <stdio.h>

int main(){
    int n, a ,b, sum = 0, k;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        k = b / a;
        sum = sum + b - (a * k);
    }
    printf("%d", sum);
    return 0;
}