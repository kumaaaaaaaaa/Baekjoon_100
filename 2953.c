#include <stdio.h>

int main(){
    int score, sum, win = 0 , p;
    for(int i=0; i<5; i++)
    {
        sum = 0;
        for(int j=0; j<4; j++)
        {
            scanf("%d", &score);
            sum += score;
        }
        if(win < sum)
        {
            win = sum;
            p = i+1;
        }
    }
    printf("%d %d", p, win);
    return 0;
}