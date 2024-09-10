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
     int n;cin>>n;
     vector<pair<int,int>> vp;
     f(i,0,n){
        int a,b;cin>>a>>b;
        vp.push_back({a,b});
     }
     ll si,sj,ei,ej;
     cin>>si>>sj>>ei>>ej;
     ll x=(ei-si)*(ei-si)+(ej-sj)*(ej-sj);
     bool flg=true;
     f(i,0,n){
        ll z=(ei-vp[i].first)*(ei-vp[i].first)+(ej-vp[i].second)*(ej-vp[i].second);
        if(z<=x){
            flg=false;
            break;
        }
     }
     if(flg)yes;
     else no;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        AKG();
    }

#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
#endif
    return 0;
}
