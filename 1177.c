#include<stdio.h>
int main ()
{
    int a[10000];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<1000;)
    {
        for(j=0;j<n;j++,i++)
        {
            a[i]=j;
        }
    }
    for(i=0;i<1000;i++)
    {
        printf("N[%d] = %d\n",i,a[i]);
    }
    
    return 0;
}
