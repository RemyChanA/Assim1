#include <stdio.h>
#include <stdlib.h>

int main()
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
    return 0;
}
