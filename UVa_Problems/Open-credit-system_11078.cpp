#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=-150000,senior=-150000;
        for(int i=0;i<n-1;i++){
            senior=max(senior,a[i]);
            ans=max(ans,senior-a[i+1]);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}