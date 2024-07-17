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
    
    int n;
    int a[3];
    cin>>n>>a[0]>>a[1]>>a[2];
    vector<vector<ll>>dp(5,vector<ll>(n+2));
    f(i,0,5){
        f(j,0,n+2){
            dp[i][j]=INT_MIN;
        }
    }
    f(i,0,5) {dp[i][0]=0;}
    // calc
    f(i,1,4){
        f(j,1,n+1){
            if(a[i-1]>j) {dp[i][j]=dp[i-1][j];}
            else{
                dp[i][j]=max(dp[i-1][j],1+dp[i][j-a[i-1]]);
            }
        }
    }
    cout<<dp[3][n]<<endl;


    
    return 0;
}
