#include <stdio.h>
#include <stdlib.h>

void ask1();
void ask2();
void ask3();
void ask4();
void ask5();

int main()
{
    int x=0;
    printf("choose number to between 1 to 5  n");
    scanf("%i",&x);
    if(x==1)
    {
        ask1();
    }
    else if(x==2)
    {
        ask2();
    }
    else if(x==3)
    {
        ask3();
    }
    else if(x==4)
    {
        ask4();
    }
    else if(x==5)
    {
        ask5();
    }
    return 0;
}

void ask1()
{
    int k=0;
    printf("please enter to choose : \n \n 1 to make machine on \n 2 to machine off \n 3 to machine is working \n 4 robot is moving \n 5 robot stopped \n 6 connection error \n 8 connection returned \n 9 power low \n 10 power charging");
    scanf("%i",&k);
    if (k==1)
    {
        printf("\n Machine On \n");
    }
    else if (k==2)
    {
        printf("\n Machine Off \n");
    }
    else if (k==3)
    {
        printf("\n Machine Is Working \n");
    }
    else if (k==4)
    {
        printf("\n Robot Is Moving \n");
    }
    else if (k==5)
    {
        printf("\n Robot Stopped \n");
    }
    else if (k==6)
    {
        printf("\n Connection Error \n");
    }
    else if (k==8)
    {
        printf("\n Connection Returned \n");
    }
    else if (k==9)
    {
        printf("\n Power Low \n");
    }
    else if (k==10)
    {
        printf("\n Power Charging \n");
    }
}

void ask2()
{
    int x,y,n;
    printf("enter 1st number \n");
    scanf("%i",&x);
    printf("enter 2nd number \n");
    scanf("%i",&y);

    for(n=1;n<=x;n++)
    {
      if((n%y)!=0)
      {
        printf("%i \t",n);
      }
    }
}

void ask3()
{
    int x,n=1,y;
    printf("enter the number \n");
    scanf("%i",&x);
    y=x;
    while(n<=x)
    {
        printf("%i \t",y);
        y=y*x;
        n++;
    }
}

void ask4()
{
   int x,n;
    printf("enter the number \n");
    scanf("%i",&x);
    for(n=1;n<=x;n++)
    {
        if(n==((x/2)+1))
        {
           printf("%i \t",x);
        }
        else if (n==x)
        {
            printf("%i \t",x*2);
        }
        else
           printf("%i \t",n);

    }
}

void ask5()
{

}
