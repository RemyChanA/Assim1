#include <stdio.h>
#include <stdlib.h>

int main()
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
    return 0;
}
