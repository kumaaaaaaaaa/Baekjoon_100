#include <stdio.h>

int main(){
    int n, m;
    int sum;
    scanf("%d %d", &n, &m);
    sum = n-1 + n * (m-1);
    printf("%d", sum);
    return 0;
}