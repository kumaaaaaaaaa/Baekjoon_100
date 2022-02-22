#include <stdio.h>

int main(){
    int score;
    int n, s=1, sum = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &score);
        if(score == 0)
            s = 1;
        else
        {
            sum += s;
            s++;
        }
    }
    printf("%d", sum);
    return 0;
}