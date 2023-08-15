#include<stdio.h>
int main ()
{
    int i, a, p = 0;
    i = 1;
    scanf("%d", &a);
    while (i <= a)
    {
        if(a % i == 0)
        {
            p++;
        }
        i++;
    }
    if (p == 2)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
    return 0;
}
