#include <stdio.h>

int main(){
    int n, r, e, c;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d", &r, &e, &c);
        if(e > r + c)
            printf("advertise\n");
        else if(e == r + c)
            printf("does not matter\n");
        else 
            printf("do not advertise\n");
    }
    return 0;
}