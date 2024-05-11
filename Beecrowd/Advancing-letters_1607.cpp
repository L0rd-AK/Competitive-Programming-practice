#include <iostream>
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    //scanf("%c");
    char a[10010],b[10010];
    while(t--)
    {
        scanf(" %s %s",a,b);
        long long int sum=0,x=0;
        for(int i=0;i<strlen(a);i++)
        {
            x=b[i]-a[i];
            if(x>0) sum+=x;
            else if(x<0) sum+=(26+x);
        }
        printf("%lld\n",sum);sum=0;
    }
}