#include <stdio.h>

int main(){
    int num, sum;
    while(1)
    {
        sum = 1;
        scanf("%d", &num);
        if(num == 0)
            return 0;
        while(num)
        {
            if(num % 10 == 1)
                sum+=3;
            else if(num % 10 == 0)
                sum+=5;
            else
                sum+= 4;
            num/=10;
        }
        printf("%d\n", sum);
    }
}