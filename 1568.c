#include <stdio.h>

int main(){
    int n, k=0, cnt=0;
    scanf("%d", &n);
    while(1){
        k++;
        if (n == 0) 
            break;
        if (n < k)
            k = 1;
        n -= k;
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}