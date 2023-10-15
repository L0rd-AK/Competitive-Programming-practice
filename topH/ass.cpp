#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)
int bfs[1000][1000],colr[1000];
bool BFS(int s,int n){
    for(int i=0;i<n;i++) colr[i]=-1;
    queue <int> q;
    q.push(s);
    colr[s]=1;
    while(!q.empty()){

        int temp=q.front();
        int currentColor=colr[temp];
        q.pop();
        for(int i=0;i<n;i++){
            int v=bfs[temp][i];
            if(v){
                if(colr[i]==-1){
                    colr[i]=!currentColor;
                    q.push(i);
                }else if(colr[i]==currentColor)return false;
            }
        }
    }
    return true;
}
int main(){
    freopen("D:\\VS-Code\\C++\\Advance Camp\\input.txt","r",stdin);
    int n;
    cin>>n;
    int v[n];
    ff(i,0,n){
        cin>>v[i];
    }
    int c=0;
    ff(i,0,n){        
        ff(j,0,n){
            if(v[j]>v[j+1]){swap(v[j],v[j+1]);c++;}
            cout<<endl;
        }
    }
    cout<<c<<'\n';
    return 0;
}