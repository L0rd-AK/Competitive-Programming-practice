#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool vis[4][4];
bool g[4][4];
void dfs(int node){
//   vis[node]
    for(int i=0;i<4;i++){
        vis[node][i]=true;
    }
}
int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  
  char c[12][4];
  for(int i=0;i<12;i++){
    for(int j=0;j<4;j++){
        cin>>c[i][j];
    }
  }
  for(int i=0;i<12;i++){
    for(int j=0;j<4;j++){
        if(c[i][j]=='#'){
            dfs(i);
        }
    }
  }


    
  return 0;
}
