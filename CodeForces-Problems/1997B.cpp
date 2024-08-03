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
    int n;cin>>n;cin.ignore();
    char a[2][n];
    f(i,0,2)f(j,0,n)cin>>a[i][j];
    int ans=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<n-2;j++){
            if(a[i][j]=='x' && a[i][j+2]=='x' && a[i][j+1]=='.'){
                if(i==0){
                    if(a[1][j+1]=='.' && a[1][j+2]=='.' && a[1][j]=='.')ans++;
                }else if(i==1){
                    if(a[0][j+0]=='.' && a[0][j+2]=='.' && a[0][j]=='.')ans++;
                }
            }
        }
    }
    prnt(ans);
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
