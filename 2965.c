#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int m = b-a;
    int n = c-b;
    if(m>n)
        printf("%d", m-1);
    else
        printf("%d", n-1);

    return 0;
}