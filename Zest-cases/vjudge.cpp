#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
bool cmp(const pair<int, int>&i, const pair<int, int>&j) 
{ 
    if(i.first>j.first) return true;
    if(i.second<j.second) return true;
    return false;
} 
int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      string s;
      cin >> s;
      int a[n] = {0}, b[n] = {0},zero=0,one=0;
      f(i, 0, n) if (s[i] == '0'){ a[i] = 1;zero++;}
      f(i, 1, n) a[i] = a[i] + a[i - 1];

      f(i, 0, n) if (s[i] == '1'){ b[i] = 1;one++;}
      f(i, 1, n) b[i] = b[i] + b[i - 1];
      vector<pair<int,int>> v;
      for(int i=0;i<=n/2;i++)
      {
         if (a[i] >= b[i])
            v.push_back(make_pair(abs(((n+1)/2)-1),i));
      }
      sort(v.begin(),v.end(),cmp);
      if(zero==n)cout<<n<<endl;
      else if(one==n)cout<<0<<endl;
      else cout<< v[0].second << endl;
   }

   return 0;
}