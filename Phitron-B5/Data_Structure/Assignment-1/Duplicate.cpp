#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    bool ok=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cout<<"YES\n";
            ok=0;
            break;
        }
    }
    if(ok)cout<<"NO\n";

    return 0;
}
