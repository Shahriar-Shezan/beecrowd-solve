#include<stdio.h>
int main()
{
    int a, b;
    double c, d;
    scanf("%d", &a);
    scanf("%d%lf", &b, &c);
    printf("NUMBER = %d\n", a);
    d = b * c;
    printf("SALARY = U$ %.2lf\n", d);
    return 0;
}

