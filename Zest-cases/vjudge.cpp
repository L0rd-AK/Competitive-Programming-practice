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
        int c=0;
        for(int i=2;i*i<=sqrt(n);i++){
            if(n%i==0){
                c++;
                if(i!=(n/i))c++;
            }
            
        }
        if(c==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    return 0;
}