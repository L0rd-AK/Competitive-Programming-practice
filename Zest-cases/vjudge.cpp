#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int main(){
    #ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) 
            cin>>a[i];
        if(n==2)cout<<min(a[1],a[2])<<"\n";
        else{
            int ans = min(a[1],a[2]);
            for(int i=1;i<=n-2;i++){
                vector<int> tmp;
                for(int k=0;k<=2;k++)
                    tmp.push_back(a[i+k]);
                sort(tmp.begin(),tmp.end());
                ans = max(ans,tmp[1]);
            }
            cout<<ans<<"\n";
        }
    }
}