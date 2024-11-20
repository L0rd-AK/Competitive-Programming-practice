#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
 string s;
    cin>>s;
    int n=s.size();
 
    map<char, vector<int>> mp;
 
    for(int i=0; i<s.size(); i++)
        mp[s[i]].push_back(i+1);
 
    if(s[0]>s[n-1]){
        int cst= abs(s[0]-s[n-1]);
        vector<int> ans;
 
        for(int i=0; s[0]+i>=s[n-1]; i--)
        {
            char c= s[0]+i;
            if(mp.find(c)!=mp.end()){
                for(auto v: mp[c])
                    ans.push_back(v);
            }
        }
 
        cout<<cst<<" "<<ans.size()<<endl;
 
        for(auto x: ans)
            cout<<x<<" ";
        cout<<endl;
    }
    else if(s[0]<s[n-1]){
        int cst= abs(s[0]-s[n-1]);
        vector<int> ans;
 
        for(int i=0; s[0]+i<=s[n-1]; i++)
        {
            char c= s[0]+i;
 
            if(mp.find(c)!=mp.end())
            {
                for(auto v: mp[c])
                    ans.push_back(v);
            }
        }
 
        cout<<cst<<" "<<ans.size()<<endl;
        for(auto x: ans)cout<<x<<" ";
        cout<<endl;
    }
    else{
        cout<<0<<" "<<mp[s[0]].size()<<endl;
 
        for(auto x: mp[s[0]])
            cout<<x<<" ";
        cout<<endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
