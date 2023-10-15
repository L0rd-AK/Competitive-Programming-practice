#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)
int main(){
    freopen("D:\\VS-Code\\C++\\Advance Camp\\input.txt","r",stdin);
    int n;
    cin>>n;
    vector<int> v;
    ff(i,0,n){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int c=0;
    ff(i,0,n){
        if(v[i]>50) c++;
    }
    sort(v.begin(),v.end());
    ff(i,0,n){
        cout<<v[i]<<" ";
    }cout<<'\n';
    cout<<c<<'\n';
    return 0;
}