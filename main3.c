#include <stdio.h>
#include <stdlib.h>

int main()
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
    return 0;
}
