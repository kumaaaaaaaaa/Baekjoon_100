#include <stdio.h>
#include <stdbool.h>

int main(){
    int n, k, cnt=0;
    bool arr[1000001];
    arr[0] = arr[1] = true;
    scanf("%d %d", &n, &k);
    for(int i = 2; i <= n; i++)
    {
        if(arr[i] == false)
        {
            for(int j = i; j <= n; j += i)
            {
                if(arr[j] == false)
                {
                    arr[j] = true;
                    cnt++;
                    if(cnt == k)
                    {
                        printf("%d",j);
                        return 0;
                    }
                }
            }
        }
    }
}