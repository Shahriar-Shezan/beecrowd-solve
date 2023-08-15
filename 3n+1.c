#include<stdio.h>
int main ()
{
    int i, n;
    scanf("%d", &n);
    while (1)
    {
        if(n % 2 != 0)
        {
            n = 3*n + 1;
            printf("%d ", n);
        }
        if(n % 2 == 0)
        {
            n/=2;
            printf("%d ", n);
            if(n == 1)
            {
                break;
            }
        }
    }
    return 0;
}
