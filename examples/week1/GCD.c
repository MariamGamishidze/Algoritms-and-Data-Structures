#include <stdio.h>

// Greatest common divisor
int gcd(int x, int y){
    int r;
    if (x<y)
    {
        int temp = x;
        x=y;
        y=temp;
    }
    while(y!=0){
        r = x%y;
        x=y;
        y=r;
    }
    return x;
}
int main(){
    int a,b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);
    if (a<0 || b<0)
    {
        printf("Please enter non-negative integers.\n");
        return 1;
    }
    if (a==0 && b==0)
    {
        printf("GCD is undefined for both numbers being zero.\n");
        return 1;
    }
    printf("The greatest common divisor of %d and %d is %d\n", a, b, gcd(a,b));
    return 0;
}
