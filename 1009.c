#include <stdio.h>

int main(){
    int n, a, b;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        a = a % 10;
        if(a == 0)
            printf("10\n");
        else if(a == 1 || a == 5 || a == 6)
            printf("%d\n", a);
        else if(a == 4 || a == 9)
        {
            b = b % 2;
            if(b == 1)
                printf("%d\n", a);
            else
                printf("%d", a * a % 10);
        }
        else if(a == 2 || a == 8)
            printf("%d\n", (a*a*a*a)%10%10%10);
        else
            printf("%d");
    }
}