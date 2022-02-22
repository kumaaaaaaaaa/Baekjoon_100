#include <stdio.h>

int main(){
    int x, y, w, h;
    int r[2];
    scanf("%d %d %d %d", &x, &y, &w, &h);
    r[1] = w-x < h-y ? w-x : h-y;
    r[2] = x < y ? x : y;
    if(r[1] > r[2])
        printf("%d", r[2]);
    else
        printf("%d", r[1]);

    return 0;
}