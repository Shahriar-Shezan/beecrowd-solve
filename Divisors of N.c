#include<stdio.h>
int main ()
{
    int i, n;
    i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }

    return 0;
}
