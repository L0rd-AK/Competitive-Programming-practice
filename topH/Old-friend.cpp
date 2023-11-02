#include <bits/stdc++.h>
using namespace std;
int dis[105],bfs[105][105],p[105]={-1},ans[105];
// pair<int,int> pr[100];

void BFS(int s,int n){
    // for(int i=0;i<n;i++) dis[i]=-1;
    for(int i=0;i<=n;i++) dis[i]=INT_MAX;
    queue <int> q;
    q.push(s);
    dis[s]=0;
    int j=0;
    while(!q.empty()){
        // cout<<"q.front() "<<q.front()<<endl;
        int temp=q.front();
        q.pop();
        for(int i=1;i<=n;i++){
            int v=bfs[temp][i];
            // cout<<"v "<<v<<endl;
            if(v){
                if(dis[i]==INT_MAX){
                    dis[i]=dis[temp]+1;
                    // cout<<i<<" "<<temp<<'\n';
                    p[i]=temp;
                    q.push(i);
                }
            }
        }
    }

}
void show(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<bfs[i][j]<<" ";
        }cout<<endl;
    }
}
void inputBFS(int n){
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>bfs[i][j];
}
int main(){
    //freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int t,index=1;
    cin>>t;
    while(t--){
        int n,s,e;
        cin>>n>>s>>e;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>bfs[i][j];

        BFS(s,n);
        int k=0;
        for(int i=e;i!=s;){
            ans[k]=p[i];k++;
            i=p[i];
        }
        cout<<"Case "<<index++<<": "<<'\n';
        cout<<(k)-1<<'\n';
        for(int i=k-1;i>=0;i--)cout<<ans[i]<<" ";cout<<e;
        cout<<"\n";
        
    }
    
    
    
    return 0;   
}