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
        int n;
        cin>>n;
        int x,odd=0,even=0;
        f(i,0,n){
            cin>>x;
            if(x%2)odd++;
            else even++;
        }
        if(even==n || odd==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}
