#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s,t,s1,t1;
        cin>>s>>t;
        s1=s;
        t1=t;
        sort(s1.begin(),s1.end());
        sort(t1.begin(),t1.end());
        if(s1!=t1){
            no;
            continue;
        }
        int same=0,not_same=0;
        f(i,0,n){
            if(s[i]==t[i])same++;
            else not_same++;
        }
        if()
        if(not_same/2 == k)yes;
        else if(not_same>=k && same>=1)yes;
        else no;
        
    }
    
    
    
    return 0;
}
