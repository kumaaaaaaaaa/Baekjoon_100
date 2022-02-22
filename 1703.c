#include <stdio.h>

int main(){
    int a, b, c;
    while(1)
    {
        int sum = 1;
        scanf("%d", &a);
        if(a == 0)
            break;
        for(int i=0; i<a; i++)
        {
            scanf("%d %d", &b, &c);
            sum = sum * b - c;
        }
        printf("%d\n", sum);
    }

    return 0;
}