#include <bits/stdc++.h>
using namespace std;

int minimumCostToReconnectGraphs(int n, vector<pair<int, int>>& edges) {
    // Your code here
    int size=edges.size(),vis=0;
    bool arr[n+1];
    for(int i=0;i<=n;i++)arr[i]=false;

    for(int i=0;i<size;i++){
        if(arr[edges[i].first]==true){
            arr[edges[i].second]=true;
        }else if(arr[edges[i].second]==true){
            arr[edges[i].first]=true;
        }
        else{
            vis++;
            arr[edges[i].first]=true;
            arr[edges[i].second]=true;
        }
    }
    for(int i=0;i<=n;i++)cout<<arr[i]<<" ";
    cout<<endl;
    int ans=0;
    for(int i=1;i<=n;i++)if(arr[i]==0)ans++;
    cout<<vis<<" "<<ans<<endl;
    return vis+ans;
}

int main() {
    vector<pair<int, int>> edges1 = {{1, 2}, {2, 3}, {4, 5}};
    cout << minimumCostToReconnectGraphs(6, edges1) << endl; // Output: 3

    vector<pair<int, int>> edges2 = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    cout << minimumCostToReconnectGraphs(5, edges2) << endl; // Output: 0

    return 0;
}
