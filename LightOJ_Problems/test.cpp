#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c,temp,r,x;
    cin>>n;
    temp=n;
    int a[n][n];
     for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=0;
        
    
    while(n--){
        cin>>r>>x;
        while(x--){
            cin>>c;
            a[r-1][c-1]=1;
        }
    }
    n=temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j) cout<<" ";
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}