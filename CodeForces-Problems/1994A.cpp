#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void AKG(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    f(i,0,n)f(j,0,m)cin>>a[i][j];
    if(n==1 && m==1)cout<<-1<<endl;
    else if(m==1){
        f(i,1,n){
            cout<<a[i][0]<<endl;
        }cout<<a[0][0]<<endl;
    }
    else{
        f(i,0,n){
            f(j,1,m)cout<<a[i][j]<<" ";
            cout<<a[i][0]<<endl;
        }
    }
    
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
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
