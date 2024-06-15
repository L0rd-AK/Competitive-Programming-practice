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
string a,b;
    while(cin>>a>>b){
      int ans=0;
        for(int i=0,j=0;i<a.length();i++){
           if(a[i]==b[j]){
            ans++;
            j++;
           }
        }
        if(ans==b.length())cout<<"Possible\n";
        else cout<<"Impossible\n";
    }

    return 0;
}