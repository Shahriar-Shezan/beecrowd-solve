#include<stdio.h>
#include<math.h>
int main ()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1; j<=3; j++)
        {
            k=pow(i,j);
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}
