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
      
      if(size_a>size_b){
         for(auto i:a) if(i==b[j])j++;
         ans=size_b-j;
         cout<<size_a+ans<<endl;
      }else{
         for(auto i:b) if(i==a[j])j++;
         ans=size_a-j;
         cout<<size_b+ans<<endl;
      }

    return 0;
}
	 	 			    	   		  	 	 			    	