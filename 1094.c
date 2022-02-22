#include <stdio.h>

int main(){
    int x, s = 64,cnt =0;
    scanf("%d", &x);
    while(x > 0)
    {
        if(s > x)
            s /= 2;
        else
        {
            cnt++;
            x -= s;
        }
    }
    printf("%d", cnt);
    return 0;
}