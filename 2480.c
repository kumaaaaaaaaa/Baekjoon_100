#include <stdio.h>

int main(){
    int a, b, c, price, max = 0;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c)
        price = 10000 + a * 1000;
    else if(a != b && b != c && c != a)
      {
        if(a > b)
        {
            if(a > c)
                price = a * 100;
            else
                price = c * 100;
        }
        // price = a > b ? (a > c ? price = a * 100 : c * 100) : (b > c ? b * 100 : c * 100); 
        else
        {
            if(b > c)
                price = b * 100;
            else
                price = c * 100;
        }
    }
    else
    {
        if(a == b || b == c)
            price = 1000 + b * 100;
        else
            price = 1000 + a * 100;
    }
    if(max < price)
        max = price;
    printf("%d", max);
    return 0;
}