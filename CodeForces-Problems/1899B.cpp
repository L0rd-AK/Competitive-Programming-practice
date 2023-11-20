#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    // cout<<6%(0+1)<<endl;
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll> prefix_sum;
        prefix_sum.push_back(0);
        ll x,sum=0;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
            prefix_sum.push_back(sum);
        }
        ll mx=0;
        for (int i = 1; i<=n; i++){
            vector<ll> arr;
            if(n%i==0){
                //arr.push_back(prefix_sum[i-1]);
                for(int j=i;j<=n;j+=i){
                    arr.push_back(prefix_sum[j]-prefix_sum[j-i]);
                }
                sort(arr.begin(),arr.end());
                mx=max(mx,arr[(ll)arr.size()-1]-arr[0]);
            }
        }
        cout<<mx<<endl;
    }
     
    return 0;
}