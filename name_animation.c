#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
int main ()
{
    int x,y,z,i,time = 70;
    for(i=5;i<=50;i++)
    {
        gotoxy(i,3);
        printf("SHAHRIAR"); fflush(stdout);

        Sleep(time);
        gotoxy(i,3);
        printf("        "); fflush(stdout);

    }
    for(i=4;i<=26;i++)
    {
        gotoxy(50,i);
        printf("SHAHRIAR"); fflush(stdout);

        Sleep(time);
        gotoxy(50,i);
        printf("        "); fflush(stdout);

    }
    for(i=49;i>=5;i--)
    {
        gotoxy(i,26);
        printf("SHAHRIAR"); fflush(stdout);

        Sleep(time);
        gotoxy(i,26);
        printf("        "); fflush(stdout);

    }
    for(i=25;i>=4;i--)
    {
        gotoxy(5,i);
        printf("SHAHRIAR"); fflush(stdout);

         Sleep(time);
        gotoxy(5,i);
        printf("        "); fflush(stdout);

    }
    y=0;

    for(i=0;i<=6;i++)
    {
        y+=4;
        gotoxy(5 + y,14 - i);
        printf("IIUC"); fflush(stdout);

         Sleep(time);
    }
    for(i=0;i<=6;i++)
    {
        y+=4;
        gotoxy(5 + y,9 + i);
        printf("IIUC"); fflush(stdout);

         Sleep(time);
    }
    y=0;
    for(i=0;i<=7;i++)
    {
        y+=4;
        gotoxy(65-y,15 + i);
        printf("IIUC"); fflush(stdout);

         Sleep(time);
    }
    y=0;
    for(i=0;i<=6;i++)
    {
        y+=4;
        gotoxy(32-y,21 - i);
        printf("IIUC"); fflush(stdout);

         Sleep(time);
    }


    getchar();
}
