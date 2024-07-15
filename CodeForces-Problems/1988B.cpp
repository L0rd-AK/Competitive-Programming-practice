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
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        if(n == 1 && s[0] == '1') yes;
        else if(n == 1 && s[0] == '0') no;
        else if(n == 2 && s == "11") yes;
        else if(n == 2 && s == "00") no;
        else{
            int one = 0, zero = 0;
            stack<char> st;
            st.push(s[0]);
            f(i, 1, n) {
                char c = st.top();
                if(c=='1' and s[i]=='1'){//cout<<c<<" "<<s[i];
                    st.push(s[i]);
                    continue;
                }
                if(c != s[i]) st.push(s[i]);
            }
            while(!st.empty()) {//cout<<st.top()<<" ";
                if(st.top() == '1') one++;
                else zero++;
                st.pop();
            }
            if (one > zero) yes;
            else no;
        }
    }
    
    return 0;
}
