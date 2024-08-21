#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl
int BS(int arr[], int low, int high, int x)
{
    int ans=-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= x){
            low = mid + 1;
            ans=mid;
        }
        else
            high = mid - 1;
    }

    return ans;
}

void AKG(){
    int n;cin>>n;
    int a[n];
    f(i,0,n)cin>>a[i];
    sort(a,a+n);
    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        int z=BS(a,0,n-1,x);
        if(z==-1)prnt(0);
        else prnt(z+1);
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
    // cin>>t;
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
