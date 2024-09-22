#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl

void AKG(){
     string s;cin>>s;
     int c=0,v=0,d=0;
     f(i,0,s.length()){
        if(s[i]>='0' && s[i]<='9')d++;
        else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')v++;
        else c++;
     }
     int ans=0;
     while (c > 0 || v > 0 || d > 0) {
        int c_cnt = min(c, 3);
        int v_cnt = min(v, 2);
        int d_cnt = min(d, 1);
        
        c -= c_cnt;
        v -= v_cnt;
        d -= d_cnt;
        
        ans++;
    }
    prnt(ans);
     
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        AKG();
    }
    return 0;
}
