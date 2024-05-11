#include <bits/stdc++.h>
using namespace std;

int BFS(int s,int desti,int n,vector<bool>& vis,vector<vector<int>>& bfs){
    // for(int i=0;i<n;i++) vis[i]=false;
    int pr[n];
    bool ok=false;
    queue <int> q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(int i=0;i<n;i++){
            int v=bfs[node][i];
            if(v){
                if(vis[i]==false){
                    vis[i]=true;
                    q.push(i);
                    pr[i]=node;
                    // cout<<i+1<<" "<<node+1<<'\n';
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
    cout<<ans.size()+1<<'\n';
    for(int i=ans.size()-1;i>=0;i--)cout<<ans[i]<<" ";
    cout<<desti+1<<"\n";
    return 0;
}

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int n,s,d;
    cin>>n>>s>>d;
    vector<bool> vis(n,0);
    vector<vector<int>> bfs(n+1,vector<int>(n+1, 0));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>bfs[i][j];
        }
    }
    s--;
    // if(BFS(s-1,d-1,n,vis,bfs))cout<<-1<<endl;
    vector<int> pr(n,0);
    bool ok=false;
    queue <int> q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        int node=q.front();
        if(!q.empty())q.pop();
        for(int i=0;i<n;i++){
            int v=bfs[node][i];
            if(v){
                if(i<n)
                    if(!vis[i]){
                        vis[i]=true;
                        q.push(i);
                        pr[i]=node;
                        if(i==d-1)ok=true;
                        // cout<<i+1<<" "<<node+1<<'\n';
                    }
            }
        }
    }
    if(!ok)return -1;
    vector<int> ans;
    int x=d-1;
    while(x!=s){
        ans.push_back(pr[x]+1);
        x=pr[x];
    }
    cout<<ans.size()+1<<'\n';
    for(int i=ans.size()-1;i>=0;i--)if(i<n)cout<<ans[i]<<" ";
    cout<<d<<"\n";
    return 0;
    
    return 0;    
}