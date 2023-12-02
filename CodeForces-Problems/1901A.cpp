#include <bits/stdc++.h>
using namespace std; 

int main() {
    //
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
    int t;
    cin>>t;
    while(t--){
        int n,end,start=0;
        cin>>n>>end;
        vector<int> a(n,0);
        for(int i=0;i<n;i++)cin>>a[i];
        int mx=-1;
        if(n==1){
            mx=max(mx,a[0]);
            mx=max(mx,(end-a[n-1])*2);
            cout<<mx<<endl;
            continue;
        }
        
        for(int i=0;i<n-1;i++){
            mx=max(mx,a[i+1]-a[i]);
        }
        //cout<<mx<<endl;
        mx=max(mx,a[0]);
        // cout<<mx<<endl;
        mx=max(mx,2*(end-a[n-1]));
        cout<<mx<<endl;
    }
}
