#include<stdio.h>
int main ()
{
    int x;
    scanf("%d", &x);
    int i = 1;
    while (i <= 10000 )
    {
        if (i % x == 2)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}

