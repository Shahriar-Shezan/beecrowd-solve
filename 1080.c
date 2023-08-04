#include<stdio.h>
int main ()
{
    int i, p, h;
    i = 1;
    p = 0;
    h = 0;

    while (i <= 10)
    {
        int x;
        scanf("%d", &x);
        if (x > h)
        {
            h = x;
            p = i;
        }
        i++;
    }
    printf("%d\n", h);
    printf("%d\n", p);
    return 0;
}
