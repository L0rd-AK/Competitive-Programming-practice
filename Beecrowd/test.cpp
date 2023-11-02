#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct node{
    int x1,y1,distance1,x2,y2,distance2,x3,y3,distance3;
    node(int a1,int b1,int c1,int a2,int b2,int c2,int a3,int b3,int c3){
        x1=a1;
        y1=b1;
        distance1=c1;
        // 
        x2=a2;
        y2=b2;
        distance2=c2;
        // 
        x3=a3;
        y3=b3;
        distance3=c3;
    }
};


int BFS(int i1,int j1,int i2,int j2,int i3,int j3,int n,vector<vector<char>>& bfs,vector<vector<long>>& dp){
    int dx[]={0, 0, 1,-1};
    int dy[]={1,-1,0, 0};
    queue <node> q;
    q.push(node(i1,j1,0,i2,j2,0,i3,j3,0));
    bool agentA=false,agentB=false,agentC=false;
    int  agentAint=-1,agentBint=-1,agentCint=-1;
    while(!q.empty()){

        node temp=q.front();
        if(bfs[temp.x1][temp.y1]=='X') {agentA=true; agentAint=temp.distance1;}
        if(bfs[temp.x2][temp.y2]=='X') {agentA=true; agentBint=temp.distance2;}
        if(bfs[temp.x3][temp.y3]=='X') {agentA=true; agentCint=temp.distance3;}
        q.pop();
        for(int z=0;z<4;z++){
            int x1=temp.x1+dx[z];
            int y1=temp.y1+dy[z];
            int x2=temp.x2+dx[z];
            int y2=temp.y2+dy[z];
            int x3=temp.x3+dx[z];
            int y3=temp.y3+dy[z];

            if(x1>=0 and x1<=n and y1>=0 and y1<=n and bfs[x1][y1]!='#' && x2>=0 and x2<=n and y2>=0 and y2<=n and bfs[x2][y2]!='#' && x3>=0 and x3<=n and y3>=0 and y3<=n and bfs[x3][y3]!='#')
              q.push(node(x1,y1,temp.distance1+1,x2,y2,temp.distance2+1,x3,y3,temp.distance3+1));
        }
    }
    if(agentA and agentB and agentC) return max({agentAint,agentBint,agentCint});
    else return -1;
}

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    // freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int t,idx=1;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<vector<char>> bfs(n+1,vector<char>(n+1));
        vector<vector<long>> dp(n+1,vector<long>(n+1,-1));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>bfs[i][j];
            }
        }
        int ans=0,x1,y1,x2,y2,x3,y3;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(bfs[i][j]=='A'){
                    x1=i;y1=j;
                }
                if(bfs[i][j]=='B'){
                    x2=i;y2=j;
                }
                if(bfs[i][j]=='A'){
                    x3=i;y3=j;
                }
                
            }
        }
        ans=BFS(x1,y1,x2,y2,x3,y3,n-1,bfs,dp);
        cout<<ans<<endl;

    }
    
    
    
    return 0;
}