#include <stdio.h>

int main(){
    int n, cnt = 0;
    for(int j=0; j<3; j++)
    {
        for (int i=0; i<4; i++)
        {
            scanf("%d", &n);
            if(n == 0)
                cnt++;
        }
        if(cnt == 0)
            printf("E\n");
        else if(cnt == 1)
            printf("A\n");
        else if (cnt == 2)
            printf("B\n");
        else if (cnt == 3)
            printf("C\n");
        else if (cnt == 4)
            printf("D\n");
        cnt = 0;
    }

}