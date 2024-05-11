#include <bits/stdc++.h>
using namespace std;
int dis[1000],bfs[1000][1000];
void BFS(int s,int n){
    for(int i=0;i<=n;i++) dis[i]=INT_MAX;
    queue <int> q;
    q.push(s);
    dis[s]=0;
    while(!q.empty()){

        int temp=q.front();
        q.pop();
        for(int i=0;i<=n;i++){
            int v=bfs[temp][i];
            if(v){
                if(dis[i]==INT_MAX){
                    dis[i]=dis[temp]+1;
                    q.push(i);
                }
            }
        }
    }

}

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int n,temp,s=0,edg;
    int t;cin>>t;
    while(t--){
        cin>>n>>edg;
        for(int i=0;i<=n+1;i++)for(int j=0;j<=n+1;j++)bfs[i][j]=0;
        
        while(edg--){
            int a,b;
            cin>>a>>b;
            bfs[a][b]=1;
            bfs[b][a]=1;
        }
        BFS(s,n);
        bool flag=true;
        for(int i=0;i<=n;i++){
            if(dis[i]==INT_MAX){
                cout<<"NO\n";
                flag=false;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        // for(int i=0;i<n;i++)cout<<dis[i]<<" ";
        // cout<<endl;
    }
            
}