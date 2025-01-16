#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        ll x=sqrt(n);
        if(x*x!=n || n<=2){
            cout<<"NO"<<endl;
            continue;
        }
        int cnt=0;
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                cnt++;
            }
            if(cnt>1)break;
        }
        // cout<<cnt<<endl;
        if(!cnt)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        

    }
    
    return 0;
}