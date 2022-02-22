#include <stdio.h>
#include <math.h>

int main(){
    double m, n; 
    int m1, n1, sum = 0, min = 0;
    scanf("%lf %lf", &m, &n);
    m1 = sqrt(m);
    n1 = sqrt(n);

    if(m1*m1 == m)
    {
        for(int i = m1; i<=n1; i++)
        {
            if(i*i <= n)
            {
                sum = sum + i*i;
                if(sum == i*i)
                    min = i*i;
            }
        }
        if(sum == 0)
            printf("-1");
        else
            printf("%d\n%d",sum, min);
    }
    else
    {
        for(int i = m1+1; i<=n1; i++)
        {
            if(i*i <= n)
            {
                sum = sum + i*i;
                if(sum == i*i)
                    min = i*i;
            }
        }
        if(sum == 0)
            printf("-1");
        else
            printf("%d\n%d",sum, min);
    } 
    return 0;
}