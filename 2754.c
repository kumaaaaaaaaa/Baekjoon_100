#include <stdio.h>

int main(){
    char grade[2] ={0};
    scanf("%s", &grade);
    if(grade[0] == 'A')
    {
        if(grade[1] == '+')
            printf("4.3");
        else if(grade[1] == '0')
            printf("4.0");
        else
            printf("3.7");
    }
    else if(grade[0] == 'B')
    {
        if(grade[1] == '+')
            printf("3.3");
        else if(grade[1] == '0')
            printf("3.0");
        else
            printf("2.7");
    }
    else if(grade[0] == 'C')
    {
        if(grade[1] == '+')
            printf("2.3");
        else if(grade[1] == '0')
            printf("2.0");
        else
            printf("1.7");
    }
    else if(grade[0] == 'D')
    {
        if(grade[1] == '+')
            printf("1.3");
        else if(grade[1] == '0')
            printf("1.0");
        else
            printf("0.7");
    }
    else
        printf("0.0");
    return 0;
}