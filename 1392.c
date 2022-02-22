#include <stdio.h>

int main(){
    int a[101] = {0}, b[1001] = {0};
    int N, Q, t = 0;
    scanf("%d %d", &N, &Q);
    for(int i=0; i<N; i++)
        scanf("%d", &a[i]);
    for(int j=0; j<Q; j++)
        scanf("%d", &b[j]);
    for(int k=0; k<Q; k++)
    {
        int sum = -1;
        for(int i=0; i<N; i++)
        {
            sum = sum + a[i];
            if(sum >= b[k])
            {
                printf("%d\n", i+1);
                break;
            }
        }
    }
}
