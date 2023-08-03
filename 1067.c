#include<stdio.h>
int main ()
{
    int i, count, n;
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        if(i % 2 == 1)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}

