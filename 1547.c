#include <stdio.h>

int main(){
    int m, x, y;
    int b=1;

    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        scanf("%d %d", &x, &y);
        if(b == x)
            b = y;
        else if(b == y)
            b = x;
    }
    printf("%d", b);

    return 0;
}
