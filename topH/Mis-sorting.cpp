#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    for (int i = 0; i < ((2*n)/3)-1; i++) {
        for (int j = 0; j < ((2*n)/3)-1; j++) {
            if (a[j] < a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
    // cout<<"first hslf"<<endl;
    // for(int i=0;i<((2*n)/3);i++)cout<<a[i]<<" ";

    for (int i = n-((3*n)/4); i < n-1; i++) {
        for (int j = n-((3*n)/4); j < n-1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }

    }
    // cout<<"second hslf"<<endl;
    // for(int i=n-((3*n)/4)+1;i<n;i++)cout<<a[i]<<" ";

    if(n%2==1)cout<<a[n/2]<<'\n';
    else cout<<a[(n/2)]<<'\n';
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    //cout<<a[n-1]<<'\n';
    return 0;
}