#include<stdio.h>
int main ()
{
    int i, n;
    i = 1;

    while (i)
    {
        scanf("%d", &n);
        if (n == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
        i++;
    }
    return 0;
}
