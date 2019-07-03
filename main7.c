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
int ask(int x)
{
    int y,n=1;
    y=x;
    while(n<=x)
    {
        printf("%i \t",y);
        y=y*x;
        n++;
    }
}
