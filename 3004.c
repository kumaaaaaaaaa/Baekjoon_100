#include <stdio.h>

int main(){
    int n, r, c;
    scanf("%d", &n);
    r = n / 2 + 1;
    c = n - r + 2;
    printf("%d", r*c);
    return 0;
}