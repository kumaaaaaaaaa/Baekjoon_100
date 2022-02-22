#include <stdio.h>
#include <math.h>

int main(){
    double D, H, W;
    double x;
    scanf("%lf %lf %lf", &D, &H, &W);
    x = sqrt(H*H + W*W);
    printf("%d %d",(int)(D*H/x), (int)(D*W/x));
    return 0;

}
