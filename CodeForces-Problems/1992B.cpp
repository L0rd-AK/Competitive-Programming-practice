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
        int n,k;
        cin>>n>>k;
        int a[k];
        f(i,0,k)cin>>a[i];
        sort(a,a+k);
        int cost=0,one=0;
        f(i,0,k-1){
            if(a[i]==1)one++;
            else{
                one+=a[i];
                cost+=a[i]-1;
            }
        }
        cout<<one+cost<<endl;
    }
    
    return 0;
}
