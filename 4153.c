#include <stdio.h>

int main(){
    int a, b , c ;
    while(1)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(c == 0 && a == 0 && b == 0)
            return 0;
        else if(c*c == a*a + b*b)
            printf("right\n");
        else if(a*a == b*b + c*c)
            printf("right\n");
        else if(b*b == a*a + c*c)
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}