#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void DFS(int s, int n,vector<bool>& vis,vector<vector<int>>& dfs,vector<vector<int>>& SSC) {
  if(vis[s])return;
  vector<int> Current_ssc;
  stack<int> st;
  st.push(s);
  vis[s]=true;
  
  while (!st.empty()) {
    int temp = st.top();
    Current_ssc.push_back(temp);
    st.pop();

    if (vis[temp]){
      for (int i = 0; i < n; i++) {
        int x = dfs[temp][i];
        if (x && !vis[i]){
          
          vis[i]=true;
          st.push(i);
        }
      }
    }
  }
  SSC.push_back(Current_ssc);
  
}

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    // freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    
    	int V, E;
    	cin>>V>>E;
        vector<bool> vis(V,false);
    	vector<vector<int>> dfs(V,vector<int>(V,0));
    	vector<vector<int>> SSC;

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >>u>>v;
            dfs[u][v]=1;
            dfs[v][u]=1;
    	}
    	

      for(int i=0;i<V;i++) 
        DFS(i,V,vis,dfs,SSC);

    cout<<"There are "<<SSC.size()<<" connected components.\n";
      for(auto i:SSC){
        for(auto j:i){
            cout<<j<<" ";
        }cout<<endl;
      }
      
    return 0;
}