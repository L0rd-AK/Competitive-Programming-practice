#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)
int main(){
    freopen("D:\\VS-Code\\C++\\Advance Camp\\input.txt","r",stdin);
    int n,k;
    cin>>n>>k;
    n=k-n;
    int coins[]={1,2,7,9,13,25};
    int ans=0,i=5;
    while(n!=0){
        while(n/coins[i]>0){
            if(i==2 or i==3)ans=1;
            n%=coins[i];
        }
        i--;
    }
    if(ans)cout<<"happy\n";
    else cout<<"Sad\n";
    
}