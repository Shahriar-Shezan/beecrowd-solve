#include<stdio.h>
int main ()
{
    int i, x, y, s;
    scanf("%d%d", &x, &y);
    i = x - 1;
    s = 0;
    while (i > y)
    {
        if (i % 2 != 0)
        {
            s+=i;
        }
        i--;
    }
    printf("%d\n", s);
    return 0;
}
