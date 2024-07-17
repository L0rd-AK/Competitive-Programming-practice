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
        int n;
        cin>>n;
        int a[n];
        f(i,0,n){
            cin>>a[i];
        }
        if(a[0]==a[n-1])no;
        else{
            yes;
            f(i,0,n){
                if(i==1)cout<<"R";
                else cout<<"B";
            }
            cout<<endl;
        }
    }
    
    
    return 0;
}
