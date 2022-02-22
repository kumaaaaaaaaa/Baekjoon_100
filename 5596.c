#include <stdio.h>

int main(){
    int score ,sum1 = 0, sum2 = 0;
    for(int i=0; i<4; i++)
    {
        scanf("%d", &score);
        sum1 += score;
    }
    for(int i=0; i<4; i++)
    {
        scanf("%d", &score);
        sum2 += score;
    }
    if(sum1 > sum2)
        printf("%d", sum1);
    else
        printf("%d", sum2);

    return 0;
}