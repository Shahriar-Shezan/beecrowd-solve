#include<stdio.h>
int main ()
{
    int i, a, b;
    i = 1;


    while (i)
    {
        scanf("%d%d", &a, &b);

        if( a > b)
        {
            printf("Decrescente\n");
        }
        if (a < b)
        {
            printf("Crescente\n");
        }
        if (a == b)
        //else
        {
            break;
        }
        i++;
    }
    return 0;
}
