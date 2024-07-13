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
        int n,m,k;
        cin>>n>>m>>k;
        for(int i=n;i>m;i--)cout<<i<<" ";
        for(int i=1;i<=m;i++)cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}
