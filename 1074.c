#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int i= 1;
    while (i <= n)
    {
        int x;
        scanf("%d", &x);
        if (x > 0)
        {
            if ( x%2 == 0)
            {
                printf("EVEN POSITIVE\n");
            }
            if (x%2 == 1)
            {
                printf("ODD POSITIVE\n");
            }
        }
        if (x < 0)
        {
            if ( x%2 == 0)
            {
                printf("EVEN NEGATIVE\n");
            }
            if (x%2 != 0)
            {
                printf("ODD NEGATIVE\n");
            }
        }

        if (x == 0)
        {
            printf("NULL\n");
        }
        i++;
    }
    return 0;
}

