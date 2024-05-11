#include <bits/stdc++.h>
using namespace std;

struct node{
    int x;
    int y;
    int moves;
    node(int a, int b, int c)
    {
        x=a;
        y=b;
        moves=c;
    }
};
int BFS(int x1,int x2,int y1,int y2){
    int dx[]={1,1,-1,-1,2,2,-2,-2};
    int dy[]={2,-2,2,-2,1,-1,1,-1}; 
    queue <node> q;
    q.push(node(x1,x2,0));

    while(!q.empty()){

        node temp=q.front();
        q.pop();
        if(temp.x==y1 and temp.y==y2) return temp.moves;
        
        for(int i=0;i<8;i++){
            int x=temp.x+dx[i];
            int y=temp.y+dy[i];
            if(x>=1 and x<=8 and y>=1 and y<=8)
                q.push(node(x,y,temp.moves+1));
        }
        
    }

}

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    string a,b;
    while(cin>>a>>b){
        int x1=a[0]-'a'+1;
        int x2=a[1]-'0';
        int y1=b[0]-'a'+1;
        int y2=b[1]-'0';
        cout<<"To get from "<<a<<" to "<<b<<" takes "<<BFS(x1,x2,y1,y2)<<" knight moves."<<endl;
    }

          
}