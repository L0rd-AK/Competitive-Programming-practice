#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)
// long long w[100+7],v[100+7],dp[107][100007];
int knapSack(int idx,int left_capacity,vector<int>& v,vector<int>& w,vector<vector<int>> &dp){
    if(left_capacity==0) return 0;
    if(idx<0) return 0;
    if(dp[idx][left_capacity]!=-1) return dp[idx][left_capacity];

    int n0tTake=knapSack(idx-1,left_capacity,v,w,dp)+0;
    int take=0;
    if(w[idx]<=left_capacity)
        take=knapSack(idx,left_capacity-w[idx],v,w,dp)+v[idx];

    return dp[idx][left_capacity]=max(take,n0tTake);
}
int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int n,t,capacity;
    cin>>t;
    while(t--){
        cin>>n>>capacity;
        vector<vector<int>> dp(n,vector<int>(capacity+1,-1));
        vector<int> v,w;
        int x;
        ff(i,0,n){
            cin>>x;
            v.push_back(x);
        }
        ff(i,0,n){
            cin>>x;
            w.push_back(x);
        }
        cout<<knapSack(n-1,capacity,v,w,dp)<<'\n';
    }
    return 0;
}