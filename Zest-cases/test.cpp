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
      cin>>n>>m;cin.ignore();
      char a[n][m];
      int row_mx=INT_MIN,row_idx=0;
      f(i,0,n){int x=0;
         f(j,0,m){
            cin>>a[i][j];
            if(a[i][j]=='#')x++;
         }
         if(row_mx<x){
            row_mx=x;
            row_idx=i+1;
         }
      }
      // column
      int col_mx=INT_MIN,col_idx=0;
      f(i,0,m){int z=0;
         f(j,0,n){
            if(a[j][i]=='#')z++;
         }
         if(col_mx<z){
            col_mx=z;
            col_idx=i+1;
         }
      }
      cout<<row_idx<<" "<<col_idx<<endl;
      

   }

    return 0;
}