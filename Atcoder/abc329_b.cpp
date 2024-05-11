#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)cin>>a[i];
    sort(a,a+t);
    for(int i=t-1;i>0;i--){
        if(a[i]!=a[i-1]){cout<<a[i-1];break;}
    }
     
    return 0;
}