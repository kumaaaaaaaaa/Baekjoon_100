#include <stdio.h>
#include <string.h>


int main(){
    char S[101] = {0,};
    int a[26] = {0, };
    int i, j, w = 0;
    int len;
    gets(S);
    len = strlen(S);

    for(i = 97 ; i <= 122 ; i++){
        for(j = 0 ; j < len ; j++){
            if(S[j] == i){
                a[S[j]-97] += 1;
                }
        }
    }
    for(w = 0; w < 26 ; w++){
        printf("%d ", a[w]);
    }

    return 0;

}