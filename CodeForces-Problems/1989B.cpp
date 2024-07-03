#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)


int lcs(string X, string Y, int m, int n) 
{ 
    if (m == 0 || n == 0) 
        return 0; 
    if (X[m - 1] == Y[n - 1]) 
        return 1 + lcs(X, Y, m - 1, n - 1); 
    else
        return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n)); 
}
int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
   int t;
   cin>>t;
   while(t--){
      string a,b;
      cin>>a>>b;
      int size_a=a.length(),size_b=b.length();
      int size,ans=INT_MAX;
    //   ans=lcs(a,b,size_a,size_b);
      f(i,0,size_b){
        int j=i;
        size=size_a+size_b;
        f(k,0,size_a){
            if(a[k]==b[j]){
                j++;
                size--;
                if(j==size_b)break;
            }
        }
        ans=min(ans,size);
      }
      cout<<ans<<endl;
      
   }

    return 0;
}