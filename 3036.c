#include <stdio.h>

int gcd(int a, int b){
    
    if(a == 0){
        return b;
    }else{
        return gcd(b%a, a);
    }
}

int main(){
    int n, a ,b, g;
    int ring[101];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ring[i]);
    }
    for(int j=1; j<n; j++)
    {
        g = gcd(ring[0], ring[j]);
        a = ring[0] / g;
        b = ring[j] / g;
        printf("%d/%d\n", a,b);
    }
    return 0;
}