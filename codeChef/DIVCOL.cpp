#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

void AKG(){
    int n;
    cin>>n;
    vector<int> v(n+1,1);
    f(i,2,n+1){
        if(v[i]==1){
            for(int j=i;j<=n;j+=i){
                int x=j;
                while(x%i==0){
                    v[j]++;
                    x/=i;
                }
            }
        }
    }
    int mx = *max_element(v.begin(), v.end());
    cout << mx << "\n";
    f(i,1,n+1)cout<<v[i]<<" ";
    cout<<endl;
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
