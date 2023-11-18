#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int N=1e5+7;
int dijkstra(int s,int n,vector<int>& dis,vector<pair<int,int>> G[]){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    dis[s]=0;
    pq.push({0,s});
    while(!pq.empty()){
        int parentNode=pq.top().second;
        int parenttDis=pq.top().first;
        
        pq.pop();
        for(auto i:G[parentNode]){
            int adjNode=i.first;
            int edgeWT=i.second;
            if(parenttDis+edgeWT<dis[adjNode]){
                dis[adjNode]=(parenttDis+edgeWT);
                pq.push({parenttDis+edgeWT,adjNode});
            }
        }
    }
}

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    
    int n,edg,source=0;
    cin>>n>>edg;
    vector<pair<int,int>> G[N];
    vector<int> dis(N,INT_MAX);
    for(int i=0;i<edg;i++){
        int u,v,w;
        cin>>u>>v>>w;
        G[u-1].push_back({v-1,w});
        G[v-1].push_back({u-1,w});
    }
   dijkstra(source,n-1,dis,G);
    int ans=dis[n-1];
    if(ans!=INT_MAX){
        for(int i=0;i<N;i++)if(dis[i]!=INT_MAX)cout<<dis[i]<<" ";
    }else{
        cout<<-1<<endl;
    }
    
    
    
      
    return 0;
}