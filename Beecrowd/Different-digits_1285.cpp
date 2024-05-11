#include <iostream>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,ans=0,ii;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        ans=0;
        for(int i=n;i<=m;i++)
        {
            int c=0,x=0,y=0,a[10];
            ii=i;
            for(int i=0;i<10;i++) a[i]=0;
            while(i!=0)
            {
                x=i%10;y++;
                a[x]++;
                i/=10;
            }
            i=ii;
            for(int j=0;j<10;j++)
            {
                if(a[j]==1) c++;
            }
            if(c==y) ans++;
        }

        printf("%d\n",ans);
    }
}