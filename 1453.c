#include <stdio.h>

int main(){
    int n, k, cnt = 0, arr[101]={0};
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &k);
        arr[k]++;
    }
    for(int j=0; j<101; j++)
    {
        if(arr[j] > 1)
        {
            cnt = cnt + arr[j] - 1;
        }
    }
    printf("%d", cnt);
    return 0;
}