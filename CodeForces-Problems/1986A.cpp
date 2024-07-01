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
   int t;cin>>t;

    while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      int x=abs(a-a)+abs(b-a)+abs(c-a);
      int y=abs(a-b)+abs(b-b)+abs(c-b);
      int z=abs(a-c)+abs(b-c)+abs(c-c);
      cout<<min({x,y,z})<<endl;
    }

    return 0;
}