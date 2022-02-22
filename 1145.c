 #include <stdio.h>

 int main(){
     int arr[5], n=0;
     for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);
    for(int i=1;; i++)
    {
        n = 0;
        for(int j = 0; j<5; j++)
        {
            if(i % arr[j] == 0)
            {
                n++;
                if(n >=3)
                {
                    printf("%d", i);
                    return 0;
                }
            }
        }
            
    }
    return 0;
 }