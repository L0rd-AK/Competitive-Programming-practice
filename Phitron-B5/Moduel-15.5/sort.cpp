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

   int a[3];
   f(i,0,3)cin>>a[i];
   int x=a[0],y=a[1],z=a[2];
   sort(a,a+3);
   printf("%d\n%d\n%d\n",a[0],a[1],a[2]);
   printf("\n%d\n%d\n%d\n",x,y,z);

   return 0;
}