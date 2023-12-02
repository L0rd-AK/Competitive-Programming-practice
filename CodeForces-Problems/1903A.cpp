#include <bits/stdc++.h>
using namespace std; 

int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
    int t;
    cin>>t;
    while(t--){
        int n,k,start=0;
        cin>>n>>k;
        vector<int> a(n,0);
        for(int i=0;i<n;i++)cin>>a[i];
        if(k==1){
            bool ok=true;
            for(int i=0;i<n-1;i++){
                if(a[i]<=a[i+1])continue;
                else{
                    ok=false;
                    cout<<"NO\n";
                    break;
                }
            }
            if(ok)cout<<"YES\n";
        }
        else cout<<"YES\n";
    }
}
