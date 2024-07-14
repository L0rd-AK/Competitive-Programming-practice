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
    
    // int t;
    // cin>>t;
    // while(t--){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        f(i,0,n){
            cin>>a[i];
            sum+=a[i];
        }
        int x=sum/(n/2);
        f(i,0,n){
            f(j,i+1,n){
                if(a[i]+a[j]==x){
                    cout<<i+1<<" "<<j+1<<endl;
                    a[i]=0;
                    a[j]=0;
                }
            }
        }
    // }
    
    
    return 0;
}
