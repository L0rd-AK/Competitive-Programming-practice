#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)
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
        int flag=0;
        ff(j,0,n){
            if(v[j]>v[j+1]){swap(v[j],v[j+1]);c++;flag=1;}
            // ff(k,0,n)cout<<v[k]<<" ";
            cout<<"c: "<<c<<endl;
        }
        if(flag==0) break;
    }
    cout<<c<<'\n';
    return 0;
}