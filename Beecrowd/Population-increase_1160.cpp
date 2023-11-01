#include <iostream>
#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int pa,pb,y=0;double ga,gb;
        scanf("%d %d %lf %lf",&pa,&pb,&ga,&gb);
        while (pa<=pb)
        {
            pa=pa+((pa*ga)/100);
            pb=pb+((pb*gb)/100);
            y++;
            if(y>100){printf("Mais de 1 seculo.\n");break;}
        }
        if(y<=100) printf("%d anos.\n",y);
        
    }
}