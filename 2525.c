#include <stdio.h>

int main(){
    int a, b, c, min;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    min = b + c;
    if(min >= 60)
    {
        while(min >= 60)
        {
            a += 1;
            min = min - 60;
        }
    }

    if(a >= 24)
        a = a - 24;

    printf("%d %d", a, min);
    return 0;
}