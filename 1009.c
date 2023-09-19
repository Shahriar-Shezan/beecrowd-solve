#include<stdio.h>
int main ()
{
    int ch,i;
    char str[150];
    double x,y,z;
    for(i=0;i<150;i++)
    {
        ch = getchar();
        str[i]=ch;
        if(ch == '\n')
        {
            break;
        }
    }
    scanf("%lf%lf",&x,&y);
    z = x+ y*(15/100.0);
    printf("TOTAL = R$ %.2lf\n",z);

}
