#include <stdio.h>
#include<conio.h>
#include<windows.h>
#ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#endif
int fact(int);

int fact(int n)
{
    int sum;
    //write your code here

    //n is  the number of times battle is fought

    //sum is the number of soldiers remains stand









    return sum;
}











int main()
{
    int n=6,s,sum;
    decoration();
    s=fact(n);
    sum=check(n);
    if(s==sum)
        vision();
    else
        blackpanther();
    return 0;
}

void decoration()
{
    printf("\t    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Ren'21 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t+------+------+------+------+------+\n");
    printf("\t\t  Code Hide & Seek\n");
    printf("\t\t  ________________\n\n\n");
}

void blackpanther()
{
    char arr[]="You loose to Thanos fingers are snaped half of the world is wiped up\n";
    int i=0;
    while(arr[i]!=10)
    {
        sleep(0.03);
        printf("%c",arr[i]);
        i++;
    }
    system("Color 16");
    sleep(0.5);
    system("Color 46");
    sleep(0.5);
    system("Color 60");
    sleep(0.5);
    system("Color 39");
    system("cls");
    gotoxy(60,15);
    system("Color 4F");
    printf("Try Again........");
}

void vision()
{
    system("Color 70");
    system("cls");
    decoration();
    printf("\n\x43\x6F\x6E\x67\x72\x61\x74\x73 ");
    printf("you did it \x1 \x3 \nYou saved The Mind ");
    printf("Stone from Thanos\n\x49\x6E\x73\x74\x61 \x49\x44: code hide seek\n");

}

int gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int check(int n)
{
    int i,sum=0,num,f;
    for(i=1;i<=n;i++)
    {
        f=1;
        num=0;
        while(num<=i-1)
        {
            f =f+f*num;
            num++;
        }
        f=f/i;
        sum=sum+f;
    }
    return sum;
}
