#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


int main(){
    int t;
    int a, b, g;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", lcm(a,b));
    }
    return 0;
}