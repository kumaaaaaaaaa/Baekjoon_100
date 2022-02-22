#include <stdio.h>

int fac(int n)
{
    if(n == 0)
        return 1;
    else
        return n * fac(n-1);
}

int main(){
    int n, k, l;
    scanf("%d %d", &n, &k);
    l = fac(n) / (fac(k)*fac(n-k));
    printf("%d", l);
    return 0;
}