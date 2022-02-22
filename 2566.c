#include <stdio.h>

int main(){
    int arr[9][9] = {0};
    int max = 0, x, y;
    for(int i=0; i<9; i++)
    {
        for(int j=0; j<9; j++)
        {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("%d\n%d %d", max, x+1, y+1);
    return 0;
}