#include <bits/stdc++.h>
using namespace std; 

int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mat[n][n],ans[n];
        int dp=1073741823;
        for(int i=0;i<n;i++)ans[i]=dp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
                if(i!=j){
                    ans[i]&=mat[i][j];
                    ans[j]&=mat[i][j];
                }
            }
        }
        bool flag=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j and (ans[i]|ans[j])!=mat[i][j])flag=false;
            }
        }
        if(flag){
            cout<<"YES\n";
            for(int i=0;i<n;i++)cout<<ans[i]<<" ";
            cout<<endl;
        }else cout<<"No\n";
    }
}
