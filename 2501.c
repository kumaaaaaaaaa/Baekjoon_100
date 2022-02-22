#include <stdio.h>

int main(){
    int n, k, cnt=0;
    int arr[10001]={0};
    scanf("%d %d",&n, &k);
    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            arr[cnt] = i;
            if(cnt == k)
                break;
            cnt++;
        }
    }
    printf("%d", arr[k-1]);
    return 0;
}