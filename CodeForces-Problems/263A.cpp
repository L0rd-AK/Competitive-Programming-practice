#include <bits/stdc++.h>
using namespace std;
#define ll long long int
struct node{
    int x,y,distance;
    node(int a,int b,int c){
        x=a;
        y=b;
        distance=c;
    }
};
int BFS(int i,int j,int n,vector<vector<char>>& bfs){
    int dx[]={0, 0, 1,-1};
    int dy[]={1,-1,0, 0};
    queue <node> q;
    q.push(node(i,j,0));
    //dis[s]=0;
    while(!q.empty()){

        node temp=q.front();
        if(bfs[temp.x][temp.y]=='1') return temp.distance;
        q.pop();
        for(int z=0;z<4;z++){
            int x=temp.x+dx[z];
            int y=temp.y+dy[z];
            if(x>=0 and x<=n and y>=0 and y<=n)
              q.push(node(x,y,temp.distance+1));
        }
    }
    return -1;
}
int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  vector<vector<char>> bfs(5,vector<char>(5));
  for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>bfs[i][j];
        }
    }
    cout<<BFS(2,2,4,bfs)<<endl;
}
