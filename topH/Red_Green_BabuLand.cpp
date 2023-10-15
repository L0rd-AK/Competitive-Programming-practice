#include <bits/stdc++.h>
using namespace std;
int bfs[1000][1000],colr[1000];
// 1 means red color
// -1  haven't colored yet
// 0 means blue color

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
                }
                else if(colr[i]==currentColor)return false;
            }
        }
    }
    return true;
}

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int n,temp,s=3,edg;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            bfs[i][j]=0;
        
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>bfs[i][j];
        }
    }
    // BFS(0,n);
    // for(int i=0;i<n;i++)cout<<colr[i]<<" ";
    
    int flag=1;
    for(int i=0;i<n;i++){
        // BFS(i,n);
        if(!BFS(i,n)) {printf("Pardon Dear Lord! It is not Possible.\n");return 0;}
        int red=0;
        for(int i=0;i<n;i++){if(colr[i]==1)red++;}
        // for(int i=0;i<n;i++){cout<<colr[i]<<" ";}cout<<endl;
        if(n%2==0){
            if(red>=n/2){
                printf("Possible! Possible!\n%d %d\n",red,n-red);
                flag=0;
                break;
            }
        }
        if(red>n/2){
            printf("Possible! Possible!\n%d %d\n",red,n-red);
            flag=0;
            break;
        }
    }
    if(flag) printf("Pardon Dear Lord! It is not Possible.\n");
    
    return 0;
}