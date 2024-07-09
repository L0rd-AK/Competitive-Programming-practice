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
   cin>>t;
   while(t--){
        int n,m;
        cin>>n>>m;
        
        vector<vector<char>> a(n,vector<char>(m)),b(n,vector<char>(m));
        int ans=0;
        f(i,0,n)f(j,0,m)cin>>a[i][j];
        f(i,0,n)f(j,0,m)cin>>b[i][j];
        // f(i,0,n)f(j,0,m)cout<<a[i][j];
        f(i,0,n-1){
            f(j,0,m-1){
                if(a[i][j]==b[i][j])continue;
                if(a[i][j]<b[i][j]){
                    while(a[i][j]!=b[i][j]){ //cout<<a[i][j]<<" ";
                        a[i][j]=(char)(((a[i][j]+1-'0')%3)+'0');
                        a[i+1][j+1]=(char)(((a[i+1][j+1]+1-'0')%3)+'0');
                        a[i][j+1]=(char)(((a[i][j+1]+2-'0')%3)+'0');
                        a[i+1][j]=(char)(((a[i+1][j]+2-'0')%3)+'0');
                    }
                }
                else{
                    while(a[i][j]!=b[i][j]){
                        a[i][j]=(char)(((a[i][j]+1-'0')%3)+'0');
                        a[i+1][j+1]=(char)(((a[i+1][j+1]+1-'0')%3)+'0');
                        a[i][j+1]=(char)(((a[i][j+1]+2-'0')%3)+'0');
                        a[i+1][j]=(char)(((a[i+1][j]+2-'0')%3)+'0');
                    }
                }
            }
        }
            
        
        if(a==b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }

    return 0;
}