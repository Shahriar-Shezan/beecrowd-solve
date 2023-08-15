#include<stdio.h>
int main ()
{
    int i, a, b, n, m, x;
    i = 1;
    scanf("%d%d", &a, &b);
    while (i)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("%d", i);
            break;
        }
        i++;
    }
    return 0;
}
