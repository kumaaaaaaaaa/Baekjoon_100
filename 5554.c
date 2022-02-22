#include <stdio.h>

int main(){
    int a, b, c, d, x, y, sum;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum = a + b + c + d;
    x = sum / 60;
    y = sum - x * 60;
    printf("%d %d", x, y);
    return 0;
}