#include <stdio.h>

int main(){
    int a = 0, b = 1, next, i, n;
    scanf("%d", &n);
    if (n == 1)
    {
        printf("1");
        return 0;
    }
    
    for(i = 1; i < n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    printf("%d", next);
    return 0;
}