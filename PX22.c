#include<stdio.h>
int main ()
{
    int a[10000];
    int n,i,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=a[i+1] && a[i+1]<=a[i+2])
        {
            f=1;
        }
        else
        {
            f=0;
            //break;
        }
    }
    if(f==1)
    {
        printf("WAVE");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}
