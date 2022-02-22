#include <stdio.h>

int main(){
    int p;
    int price;
    scanf("%d", &price);
    for(int i=0; i<9; i++)
    {
        scanf("%d", &p);
        price = price - p;
    }
    printf("%d", price);
    return 0;
}