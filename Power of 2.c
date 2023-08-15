#include<stdio.h>
int main ()
{
    int i, a, x, p = 0;
    i = 1;
    x = 2;
    scanf("%d", &a);
    while (i <= a)
    {
        if ( a % x == 0)
        {
            p++;
        }
        i++;
        x+=2;
    }
    printf("%d", p);
    return 0;
}
