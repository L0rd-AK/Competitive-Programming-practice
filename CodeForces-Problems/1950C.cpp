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

   int t;
   cin >> t;
   
   while (t--)
   {
      string s,ss;
      cin>>s;
      ss=s;
      string a;
      a+=s[0];
      a+=s[1];
      int x=stoi(a);//cout<<x<<endl;
      if(x>12){
         int z=x-12;
         if(z>9){
            cout<<z<<":"<<ss[3]<<ss[4]<<" PM\n";
         }else{
            cout<<"0"<<z<<":"<<ss[3]<<ss[4]<<" PM\n";
         }
      }else if(x==0){
         cout<<"12:"<<ss[3]<<ss[4]<<" AM\n";
         // printf("12:%c%c AM\n",ss[3],ss[4]);
      }else if(x==12){
         cout<<"12:"<<ss[3]<<ss[4]<<" PM\n";
      }
      else{
         cout<<ss<<" AM\n";
      }
   }

   return 0;
}