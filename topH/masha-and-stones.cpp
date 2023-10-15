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
    int even=0,odd=0;
    ff(i,0,n){
        if(v[i]%2==0) even++;
        else odd++;
    }

    if(even==n)cout<<"YES\n";
    else if(odd==n)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}