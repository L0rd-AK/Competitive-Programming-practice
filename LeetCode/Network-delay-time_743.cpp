#include <bits/stdc++.h>
using namespace std;

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
int networkDelayTime(vector<vector<int>>& times, int n, int k) {
    vector<pair<int,int>> G[n];
    vector<int> dis(n,INT_MAX);
    for(auto i:times){
        G[i[0]-1].push_back({i[1]-1,i[2]});
    }
    dijkstra(k-1,n,dis,G);
    int ans=0;
    for(int i=0;i<n;i++){
        if(dis[i]==INT_MAX) return -1;
        ans=max(ans,dis[i]);
    }
    return ans;
}