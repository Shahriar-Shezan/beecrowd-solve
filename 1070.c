#include<stdio.h>
int main ()
{
    int x;
    scanf("%d", &x);
    int i = 1;
    while (i <= 12)
    {
        if(x % 2 == 1)
        {
            printf("%d\n", x);

        }
        i++;
        x++;
    }
    return 0;
}

