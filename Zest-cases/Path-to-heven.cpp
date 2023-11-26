#include <bits/stdc++.h>
using namespace std;

int BFS(int s,int desti,int n,vector<bool>& vis,vector<vector<int>>& bfs){
    // for(int i=0;i<n;i++) vis[i]=false;
    int pr[n];
    bool ok=false;
    queue <pair<int,int>> q;
    q.push({s,s});
    vis[s]=true;
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(int i=0;i<n;i++){
            int v=bfs[node][i];
            if(v){
                if(vis[i]==false){
                    vis[i]=true;
                    q.push({i,node});
                    pr[i]=parent;
                    cout<<i+1<<" "<<parent+1<<'\n';
                }
            }
        }
    }
    if(ok)return 1;
    vector<int> ans;
    int x=desti;
    while(x!=s){
        ans.push_back(pr[x]+1);
        x=pr[x];
    }
    // cout<<ans.size()+1<<'\n';
    // for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    // cout<<desti+1<<"\n";
    return 0;
}

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int n,s,d;
    cin>>n>>s>>d;
    vector<bool> vis(n,0);
  vector<vector<int>> bfs(n, vector<int>(n, 0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>bfs[i][j];
        }
    }

    if(BFS(s-1,d-1,n,vis,bfs))cout<<-1<<endl;
    
    return 0;    
}