#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        f(i,0,n)cin>>a[i];
        f(i,0,n)cin>>b[i];
        // f(i,0,n)cout<<b[i]<<" ";cout<<endl;
        vector<int>v;
        f(i,0,n){
            int x=(a[i]*20) - (b[i]*10);
            if(x<=0) v.push_back(0);
            else v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout<<v[n-1]<<endl;
    }
    
    return 0;
}
