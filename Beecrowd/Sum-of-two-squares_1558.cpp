#include <iostream>
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        int x=0,y=sqrt(t),tru=1;
        while(y>=x)
        {
            if(t==pow(x,2)+pow(y,2))
            {
                printf("YES\n");tru=0;break;
            }
            else if(t>pow(x,2)+pow(y,2))
            {
                x++;
            }
            else y--;
        }
        if(tru) printf("NO\n");
    }
}