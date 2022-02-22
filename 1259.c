#include <stdio.h>
#include <string.h>

int main(){
    int len;
    char num[6];
    while(1)
    {
        int i=0;
        scanf("%s", num);
        len = strlen(num);
        if(num[0] == '0')
            break;
        if(len % 2 == 1)
        {
            while(len-1 != i)
            {
                if(num[i] != num[len-1])
                {
                    printf("no\n");
                    break;
                }
                i++;
                len--;
            }
            if(len-1 == i)
                printf("yes\n");
        }
        else
        {
            while(len-1 != i-1)
            {
                if(num[i] != num[len-1])
                {
                    printf("no\n");
                    break;
                }
                i++;
                len--;
            }
            if(len-1 == i-1)
                printf("yes\n");
        }

    }   
}