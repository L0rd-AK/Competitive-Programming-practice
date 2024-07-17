#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
int ans=-1;
int napsuck(int n,int a[],int idx){
    if(n<=0) return 0;
    if(idx<0) return 0;
    int mx=max(1+napsuck(n-a[idx],a,idx),napsuck(n,a,idx-1));
    return ans=max(mx,ans); 
}
int unboundedKnapsack(int n, int a[],int idx)
{
    if (idx == 0) {
        if(n%a[0]==0)return (n /a[0]);
        else return 0;
    }
    
    int notTake= unboundedKnapsack(n, a, idx - 1);
    
    int take = INT_MIN;
    if (a[idx] <= n && n%a[idx]==0) {
        take = 1+unboundedKnapsack(n - a[idx], a,idx);
    }
    return max(take, notTake);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    
    int n;
    int a[3];
    cin>>n>>a[0]>>a[1]>>a[2];
    cout<<unboundedKnapsack(n,a,2)<<endl;

    
    return 0;
}
