#include <stdio.h>

int main(){
    int e, s, m, y = 1;
    int a=1, b=1, c=1;
    scanf("%d %d %d", &e, &s, &m);
    while(1)
    {
        if(a==16)
            a = 1;
        if(b==29)
            b = 1;
        if(c==20)
            c = 1;
        if(a==e&&b==s&&c==m)
            break;
        a++;
        b++;
        c++;
        y++;
    }
    printf("%d", y);
    return 0;
}