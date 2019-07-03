#include <stdio.h>
#include <stdlib.h>

int main()
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
    return 0;
}
