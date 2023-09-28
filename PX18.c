#include<stdio.h>
int main ()
{
    int a[10000];
    int n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            c++;
        }
    }
    printf("%d\n",c);
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}

