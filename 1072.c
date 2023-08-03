#include<stdio.h>
int main ()
{
    int i, x, n, o;
    scanf("%d", &x);
    i = 1;
    n = 0;
    o = 0;
    while (i <= x)
    {
        int a;
        scanf("%d", &a);
        if (a>= 10 && a<= 20)
        {
            n++;
        }
        else
        {
            o++;
        }
        i++;
    }
    printf("%d in\n", n);
    printf("%d out\n", o);
    return 0;
}
