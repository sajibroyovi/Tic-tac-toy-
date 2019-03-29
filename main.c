#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<mmsystem.h>
char arr[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
void swap(int);
char s='X',s1='0';
int pl,p;
void display()
{
    printf("\t\t\tXOXO game....\n\n");
    printf("\t\t\t ______________\n");
    printf("\t\t\t|    |    |    |\n");
    printf("\t\t\t|  %c |  %c | %c  |\n",arr[0][0],arr[0][1],arr[0][2]);
    printf("\t\t\t|____|____|____|\n");

    printf("\t\t\t|    |    |    |\n");
    printf("\t\t\t|  %c |  %c | %c  |\n",arr[1][0],arr[1][1],arr[1][2]);
    printf("\t\t\t|____|____|____|\n");

    printf("\t\t\t|    |    |    |\n");
    printf("\t\t\t| %c  |  %c | %c  |\n",arr[2][0],arr[2][1],arr[2][2]);
    printf("\t\t\t|____|____|____|\n");

}
void player()
{
     printf("\n\n\n\t\t\tSymbol for Player 1 'X'\n\n \t\t\tSymbol for Player 2 '0'\n");
     printf("\n\t\t\tWho will star the game..\n");
     printf("\n\t\t\tFor First player press 1,For second player press 2\n\t\t\t");

}
void start()
{

    scanf("\t\t\t%d",&pl);
    if(pl>2)
        {
        printf("\n\t\t\tWrong selection....");
          printf("\n\t\t\tPlZ try again....\n\t\t\t");
        start();
    }
}
int count=0;
void play()
{
    count++;
    if(pl%2!=0)
    {
    printf("\n\t\t\tFirst player's move..");
    printf("\n\t\t\tRemember that all position should be the 2D array position..");
    printf("\n\t\t\tEnter the position no:\n\t\t\t");
    scanf("%d",&p);
    swap(p);
    }
    else if(pl%2==0)
    {
    printf("\n\t\t\tSecond player's move..");
    printf("\n\t\t\t Remember that all position should be the 2D array position..");
    printf("\n\t\t\tEnter the position no:\n\t\t\t");

    scanf("%d",&p);
    swap(p);
    }
}
void swap(int p)
{
    for(int i=0;i<=8;i++)
    {
        if(pl%2!=0)
        {
            if(p==00)
            {
                arr[0][0]=s;
            }
            else if(p==01)
            {
                arr[0][1]=s;
            }
            else if(p==02)
            {
                arr[0][2]=s;
            }
            else if(p==10)
            {
                arr[1][0]=s;
            }
            else if(p==11)
            {
                arr[1][1]=s;
            }
            else if(p==12)
            {
                arr[1][2]=s;
            }
            else if(p==20)
            {
                arr[2][0]=s;
            }
            else if(p==21)
            {
                arr[2][1]=s;
            }
            else if(p==22)
            {
                arr[2][2]=s;
            }
            else
            {
                printf("\n\t\t\tWrong position....");
                printf("\n\t\t\tPLZ try again.....");
                scanf("%d",&p);
            }
           pl++;

        }
        else if(pl%2==0)
        {

           if(p==00)
              {
                arr[0][0]=s1;
              }
            else if(p==01)
            {
                arr[0][1]=s1;
            }
            else if(p==02)
            {
                arr[0][2]=s1;
            }
            else if(p==10)
            {
                arr[1][0]=s1;
            }
            else if(p==11)
            {
                arr[1][1]=s1;
            }
            else if(p==12)
            {
                arr[1][2]=s1;
            }
            else if(p==20)
            {
                arr[2][0]=s1;
            }
            else if(p==21)
            {
                arr[2][1]=s1;
            }
            else if(p==22)
            {
                arr[2][2]=s1;
            }
             else
            {
                printf("\n\t\t\tWrong position....");
                printf("\n\t\t\tPLZ try again.....");
                scanf("%d",&p);
            }
          pl++;
        }
    }

}
int end()
{
    if((arr[0][0]=='X'&&arr[0][1]=='X'&&arr[0][2]=='X')||(arr[0][0]=='X'&&arr[1][0]=='X'&&arr[2][0]=='X')||(arr[0][0]=='X'&&arr[1][1]=='X'&&arr[2][2]=='X'))
        return 1;
    else if((arr[0][0]=='0'&&arr[0][1]=='0'&&arr[0][2]=='0')||(arr[0][0]=='0'&&arr[1][0]=='0'&&arr[2][0]=='0')||(arr[0][0]=='0'&&arr[1][1]=='0'&&arr[2][2]=='0'))
        return 2;
    else if(arr[0][1]=='X'&&arr[1][1]=='X'&&arr[2][1]=='X')
        return 1;
    else if(arr[0][1]=='0'&&arr[1][1]=='0'&&arr[2][1]=='0')
        return 2;
    else if((arr[0][2]=='X'&&arr[1][2]=='X'&&arr[2][2]=='X')||(arr[0][2]=='X'&&arr[1][1]=='X'&&arr[2][0]=='X'))
       return 1;
    else if((arr[0][2]=='0'&&arr[1][2]=='0'&&arr[2][2]=='0')||(arr[0][2]=='0'&&arr[1][1]=='0'&&arr[2][0]=='0'))
        return 2;
    else if(arr[1][0]=='X'&&arr[1][1]=='X'&&arr[1][2]=='X')
        return 1;
    else if(arr[1][0]=='0'&&arr[1][1]=='0'&&arr[1][2]=='0')
        return 2;
    else if(arr[2][0]=='X'&&arr[2][1]=='X'&&arr[2][2]=='X')
        return 1;
    else if(arr[2][0]=='0'&&arr[2][1]=='0'&&arr[2][2]=='0')
        return 2;
    else
        return 3;

}


int main()
{
    int t;
    char c;
    system("color 9E");
    PlaySound(TEXT("background"),NULL, SND_LOOP | SND_ASYNC);
    label2:
    system("cls");
    display();
    player();
    start();
    play();
    lebel:
    system("cls");
    display();
    play();
    t=end();
    system("CLS");
    display();
    if(count<9)
    {
    if(t==1)
    {
        printf("\n\t\t\tPlayer 1 won....");
        count++;
    }
    else if(t==2)
    {
        printf("\n\t\t\tPlayer 2 won...");
        count++;
    }
    else
        goto lebel;
    }
    else
    {
        printf("\n\t\t\tGame is draw.....");
        printf("\n\t\t\tGAME OVER...");
        count=0;
    }
lebel3:
    printf("\n\t\t\tDo you want to play again...");
    printf("\n\t\t\tIf yes press y, if no press n:");
    count=0;
    fflush(stdin);
    scanf("%c",&c);
    if(c=='y'||c=='Y')
    {
        arr[0][0]=' ';
        arr[0][1]=' ';
        arr[0][2]=' ';
        arr[1][0]=' ';
        arr[1][1]=' ';
        arr[1][2]=' ';
        arr[2][0]=' ';
        arr[2][1]=' ';
        arr[2][2]=' ';
        goto label2;
    }
    else if(c=='n'||c=='N')
        exit(0);
    else
        {
        printf("\n\t\t\tWrong selection");
        goto lebel3;
        }
getch();
}

