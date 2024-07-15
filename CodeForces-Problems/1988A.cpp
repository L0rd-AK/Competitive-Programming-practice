#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        if(n<=k){
            cout<<1<<endl;
            continue;
        }
        int x=n-1,y=k-1;
        cout<<(x+y-1)/y<<endl;
            
    }
    
    
    return 0;
}
