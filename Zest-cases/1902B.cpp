#include <bits/stdc++.h>
using namespace std; 
#define ll long long int
int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
    int t;
    cin>>t;
    while(t--){
       ll n,p,l,t;
       cin>>n>>p>>l>>t;
       ll tks=(n+6)/7;
        ll lo=0,hi=n;
        while(hi-lo>1){
            ll mid=(hi+lo)/2;
            if((mid*l+min(tks,2*mid)*t)>=p) hi=mid;
            else lo=mid;

            // cout<<mid<<endl;
        }
        cout<<n-hi<<endl;
    }
}
