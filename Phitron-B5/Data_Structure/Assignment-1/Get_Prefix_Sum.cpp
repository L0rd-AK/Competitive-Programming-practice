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
    // for(int i=n-1;i>=0;i--)cout<<a[i]<<" ";
    vector<long long int> p(n,0);
    p[0]=a[0];
    for(int i=1;i<n;i++){
        p[i]=a[i]+p[i-1];
    }
    for(int i=n-1;i>=0;i--)cout<<p[i]<<" ";

    return 0;
}
