#include <stdio.h>

int main(){
    int n, rn, x = 0;
    int r[42] = {0,};
    for(int i=0; i<10; i++)
    {
        scanf("%d", &n);
        rn = n % 42;
        r[rn] = 1;
    }
    for(int i=0; i<42; i++)
    {
        if(r[i] == 1)
            x += 1;
    }
    printf("%d", x);

    return 0;
}