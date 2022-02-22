#include <stdio.h>

int main(){
    int n;
    char word[101];
    scanf("%d", &n);
    int cnt = n;
    for(int i=0; i<n; i++)
    {
        char first = '0';
        int a[26] = {0};
        scanf("%s", word);
        for(int j=0; word[j] != '\0'; j++)
        {
            if(first != word[j])
            {
                first = word[j];
                a[word[j]-'a'] += 1;
            }
            if(a[word[j]-'a'] == 2)
            {
                cnt -= 1;
                break;
            }
        }
    }

    printf("%d", cnt);
    return 0;
}