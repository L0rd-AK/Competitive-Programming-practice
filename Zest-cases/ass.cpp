#include <bits/stdc++.h>
using namespace std;
int main() {
    int t = 1;cin >> t;
    while (t--) {int n,d,k;cin>>n>>d>>k;int a[n+2]={0};
        for(int i=1;i<=k;i++){int x,y;cin>>x>>y;a[max(1,x-d+1)]++;a[y+1]--;}int x=1,y=1;
        for(int i=1;i<=n-d+1;i++){a[i]+=a[i-1];if(a[i]>a[x])x=i;if(a[i]<a[y])y=i;}
        cout<<x<<" "<<y<<endl;
    }return 0;
}