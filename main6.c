#include <stdio.h>
#include <stdlib.h>
int ask();
int main()
{
    int x,y;
    printf("enter 1st number \n");
    scanf("%i",&x);
    printf("enter 2nd number \n");
    scanf("%i",&y);
    ask(x,y);
    return 0;
}
 int ask(int x , int y)
 {
   int n;
 for(n=1;n<=x;n++)
    {
      if((n%y)!=0)
      {
        printf("%i \t",n);
      }
    }
 }
