#include <stdio.h>
#include <stdlib.h>
int ask();
int main()
{
    int x;
    printf("enter the number \n");
    scanf("%i",&x);
    ask(x);
    return 0;
}
int ask (int x )
{
    int n;
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
