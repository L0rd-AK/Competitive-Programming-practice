#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void dijkstra(int s,int n,vector<int>& dis,vector<pair<int,int>> G[]){
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
    int t;
    cin>>t;
    while(t--){
        int n,edg,source;
        cin>>n>>edg;
        vector<pair<int,int>> G[n];
        vector<int> dis(n,INT_MAX);
        for(int i=0;i<edg;i++){
            int u,v,w;
            cin>>u>>v>>w;
            G[u].push_back({v,w});
            G[v].push_back({u,w});
        }
        cin>>source;
        dijkstra(source,n,dis,G);
        for(auto i:dis)cout<<i<<" ";
    }
    
      
    return 0;
}