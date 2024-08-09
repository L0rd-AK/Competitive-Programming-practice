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
    int n,k;
    cin>>n>>k;
    string a,b,c,d;
    cin>>a>>b;
    int arr[26]={0},brr[26]={0},p_arr[26]={0},p_brr[26]={0};
    f(i,0,n){
        arr[a[i]-'a']++;
        brr[b[i]-'a']++;
    }
    while(k--){
        int x,y;
        cin>>x>>y;
        int ans=0;
        for(int i=0;i<26;i++){
            ans+=abs(arr[i]-brr[i]);
        }
        prnt(ans/2);
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
