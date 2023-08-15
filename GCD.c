#include<stdio.h>
int main ()
{
    int i, a, b, x, y, mx = 0;
    i = 1;
    scanf("%d%d", &a, &b);
    while (i <= a)
    {
        if (a % i == 0)
        {
            x = i;
        }
        if (b % i == 0)
        {
            y = i;
        }
        if (x == y)
        {
            mx = x;
        }
        i++;
    }
    printf("%d", mx);

    return 0;
}
