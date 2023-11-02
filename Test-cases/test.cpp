#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int DFS(int s, int n,vector<bool>& vis,vector<vector<int>>& dfs) {
  for (int i = 0; i < n; i++) vis[i] = false;

  stack<int> st;
  st.push(s);
  // int j=0;
  while (!st.empty()) {
    int temp = st.top();
    // p[j++] = temp;
    // if(temp==e) return;
    st.pop();

    if (!vis[temp]) {
      vis[temp] = true;
      
      cout<<temp<<" ";

      for (int i = 0; i < n; i++) {
        int x = dfs[temp][i];
        if (x && !vis[i]){
          st.push(i);
        }else if()[

        ]
          
      }
    }
  }
  return 1;
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
      vector<bool> vis(V);
    	vector<vector<int>> dfs(V,vector<int>(v,0));

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >>u>>v;
        dfs[u][v]=1;
    	}
      int scc=0;
      for(int i=0;i<V;i++){
        if(DFS(i,V-1,vis,dfs)) scc++;
      }
    	cout<<scc<<endl;
    }

    
    
    
    return 0;
}