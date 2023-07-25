#include<stdio.h>
int main ()
{
    int a;
    double b, c;
    scanf("%d%lf", &a, &b);
    c = a / b ;
    printf("%.3lf km/l\n", c);
    return 0;
}
