#include <stdio.h>

int main(){
    int n, a, cnt = 0;
    scanf("%d", &n);
    for(int i=0; i<5; i++)
    {
        scanf("%d", &a);
        if(a % 10 == n)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}