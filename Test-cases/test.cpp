#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<bool> vis(5000,false);
int DFS(int s, int n,vector<bool>& vis,vector<vector<int>>& dfs) {
  for(int i=0;i<n;i++) vis[i]=false;
  stack<int> st;
  st.push(s);
  int ans=0;
  while (!st.empty()) {
    int temp = st.top();
    st.pop();
    cout<<temp<<" ";
    if (!vis[temp]) {
      vis[temp] = true;
      for (int i = 0; i < n; i++) {
        int x = dfs[temp][i];
        if(x){
          if(!vis[i]){
            ans++;
            st.push(i);
          }
        }
      }
    }
  }
  //return ans;
}

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;
    	vector<vector<int>> dfs(V,vector<int>(V,0));

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >>u>>v;
        dfs[u][v]=1;
    	}
    	
      int scc=0;
      for(int i=0;i<V;i++){
        // if(DFS(i,V-1,vis,dfs)) scc++;
        cout<<DFS(i,V-1,vis,dfs)<<endl;
      }
    	// cout<<scc<<endl;
    }

    
    
    
    return 0;
}