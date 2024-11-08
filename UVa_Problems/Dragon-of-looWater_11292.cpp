#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    //freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);

    ll m, n; 

    while (cin >> m >> n && (m != 0 || n != 0)) {
        ll sum_head = 0, sum_height = 0, ctr = 0;  
        ll head[m];
        ll height[n];

        for (ll i = 0; i < m; i++) cin>>head[i];
        sort(head, head+m);
        for (ll i = 0; i < n; i++) cin>>height[i];
        sort(height, height+n);

        if(m > n) cout<<"Loowater is doomed!"<<endl;
        else if(head[m-1] >height[n-1]) cout<<"Loowater is doomed!"<<endl;
        else{
            ll ans = 0,mn=0,mx;
            (m>n) ? mx=m:mx=n;
            for (ll i = 0,j=0; i<m and j<n; j++) {
                if(head[i]<=height[j]){
                    ans++;
                    i++;
                    mn+=height[j];
                    height[j]=0;
                }
            }
            if(ans >= m) cout<<mn<<endl;
            else cout<<"Loowater is doomed!"<<endl;
        }
        
    }

    return 0;
}