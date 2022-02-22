#include <stdio.h>

int main(){
    int i, in, out, n = 0, max = 0;
    for(i = 0; i < 4; i++)
    {
        scanf("%d %d", &out, &in);
        n = n - out;
        n = n + in;
        if(n > max)
            max = n;
    }
    printf("%d", max);
    return 0;
}