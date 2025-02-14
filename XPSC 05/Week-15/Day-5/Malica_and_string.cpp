#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<int, int>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif

void AKG()
{
    long long n,k;
        string s;
        cin>>n>>k>>s;
        long long nob=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                nob++;
            }
        }
        long long flag=(k-nob);
        if(flag==0){
            cout<<0<<endl;
        }
        else if(flag>0){
            for(int i=0;i<n;i++){
                if(s[i]=='A'){
                    flag--;
                }
                if(flag==0){
                    cout<<1<<endl;
                    cout<<i+1<<" B"<<endl;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                if(s[i]=='B'){
                    flag++;
                }
                if(flag==0){
                    cout<<1<<endl;
                    cout<<i+1<<" A"<<endl;
                    break;
                }
            }
        }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        AKG();
    }

    return 0;
}
