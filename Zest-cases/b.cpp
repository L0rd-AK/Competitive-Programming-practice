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
        cout<<n<<endl;
        vector<int> v(n+1,1);
        f(i,2,n+1){
            f(j,i,n+1){
                int x=j;
                while(x%i==0){
                    v[j]++;
                    x/=i;
                }
            }
        }
        int mx = *max_element(v.begin(), v.end());
        cout << mx << "\n";
        f(i,1,n+1)cout<<v[i]<<" ";
        cout<<endl;
        
    }
    
    
    
    return 0;
}
