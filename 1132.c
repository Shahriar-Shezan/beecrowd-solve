#include<stdio.h>
int main ()
{
    int x,y,i,s=0;
    scanf("%d%d",&x,&y);
    if(x>y)
    {
        for(i=y;i<=x;i++)
        {
            if(i%13 != 0)
            {
                s+=i;
            }
        }
    }
    else
    {
        for(i=x;i<=y;i++)
        {
            if(i%13 != 0)
            {
                s+=i;
            }
        }
    }
    printf("%d\n",s);
    return 0;
}
