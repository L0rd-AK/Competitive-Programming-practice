#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> st;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;st.push_back(x);
        }
        vector<int> prefix_sum(st.size());
        partial_sum(st.begin(), st.end(), prefix_sum.begin());
        
        int mx=prefix_sum[0];
        for (int i = 0; i < prefix_sum.size(); i++) {
            mx=max(mx,prefix_sum[i]);
            cout<<prefix_sum[i]<<" ";
        }
        cout<<endl;
    }
     
    return 0;
}