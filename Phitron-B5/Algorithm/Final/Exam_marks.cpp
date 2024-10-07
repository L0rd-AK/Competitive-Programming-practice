#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
 
int dp[1000+5][1000+5];
 bool checkSum(int n,int sum,vector<int>&arr){
        if(n==0){
            if(sum==0) return true;
            else return false;
        }
        
        if(dp[n][sum]!=-1) return dp[n][sum];
        
        if(arr[n-1]<=sum){
            bool pick = checkSum(n-1,sum-arr[n-1],arr);
            bool noPick = checkSum(n-1,sum,arr);
            return dp[n][sum] = pick || noPick;
        }else{
            bool noPick = checkSum(n-1,sum,arr);
            return dp[n][sum] = noPick;
        }
        
    }
void AKG() {
     int n,sum=0,s;cin>>n>>s; 

     int ans=1000-s;
     vector<int> v(n);
     f(i,0,n)cin>>v[i];
     memset(dp,-1,sizeof(dp));
     yn(checkSum(n,ans,v));          
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        AKG();
    }

    return 0;
}
