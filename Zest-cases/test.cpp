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
    string a,b;
    cin>>a>>b;
    int n=a.length();
    
    if(a>b){
        int i=0;
        while(a[i]==b[i])i++;
        i++;
        for(;i<n;i++){
            if(a[i]>b[i])swap(a[i],b[i]);
        }
    }else{
        int i=0;
        while(a[i]==b[i])i++;
        i++;
        for(;i<n;i++){
            if(a[i]<b[i])swap(a[i],b[i]);
        }
    }
    prnt(a);
    prnt(b);
    
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
