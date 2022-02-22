#include <stdio.h>

int main(){
    int a, b, sum = 0, cnt = 0, n=1;
    scanf("%d %d", &a, &b);
    while(cnt < b)
    {
        for(int i=1; i<=n; i++)
        {
            cnt += 1;
            if(cnt >= a)
                sum += n;
            if(cnt == b)
                break;
        }
        n+=1;
    }
    printf("%d", sum);
    return 0;

}