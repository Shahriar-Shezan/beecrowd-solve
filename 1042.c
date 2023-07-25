#include <stdio.h>
int main ()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (b > a && c > b || c > a && b > c )
    {
        printf("%d\n", a);
        if (c > b)
        {
            printf("%d\n", b);
            printf("%d\n", c);
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", b);
        }
    }
    if (a > b && c > a || c > b && a > c)
    {
        printf("%d\n", b);
        if (c > a)
        {
            printf("%d\n", a);
            printf("%d\n", c);
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", a);
        }
    }
    if (b > c && a > b || a > c && b > a)
    {
        printf("%d\n", c);
        if (a > b)
        {
            printf("%d\n", b);
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", a);
            printf("%d\n", b);
        }
    }
    printf("\n\n%d\n%d\n%d\n", a,b,c);
    return 0;
}
