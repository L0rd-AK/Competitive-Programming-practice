#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
   
      int a,b,c,d,x,y,z,ans=0;
      char ch;
      cin>>x>>ch>>y;
      a=x/10;b=x%10;
      z=(b*10)+a;
      if(z==y){
        cout<<0<<endl;
        return 0;
      }
      while(z!=y){
        y++;
        ans++;
        if(y==60){
            y=0;
            x++;
            if(x==24){
                x=0;
                cout<<ans<<endl;
                return 0;
            }
            a=x/10;b=x%10;
            z=(b*10)+a;
        }
        if(z==24)z=0;
      }
      cout<<ans<<endl;

    return 0;
}
	 	 			    	   		  	 	 			    	