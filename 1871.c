#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,sum1=0, sum2 = 0;
    char arr[30];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%s", &arr);
        sum1 = (arr[0]-'A') * 26 * 26 + (arr[1]-'A') * 26 + (arr[2]-'A');
        sum2 = (arr[4]-48)*1000 +(arr[5]-48)*100 + (arr[6]-48)*10 + (arr[7]-48);

        if(abs(sum1-sum2) <= 100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;

}