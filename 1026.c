#include <stdio.h>

int main(){
    int n, temp, a[50], b[50],sum = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(int j=0; j<n; j++)
        scanf("%d", &b[j]);
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1;j++)
        {
            if(a[j] < a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1;j++)
        {
            if(b[j] > b[j+1])
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
        sum = sum + a[i] * b[i];

    printf("%d", sum);
    return 0;
}