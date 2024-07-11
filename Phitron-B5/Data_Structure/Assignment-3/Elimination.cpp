#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int t;
    cin >> t;
    while (t--) {
        stack<char> st;
        string s;
        cin >> s;

        st.push(s[0]);
        for (int i = 1; i < s.length(); i++) {
            if (!st.empty() && s[i] == '1' && st.top() == '0') {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        
        if(st.empty()) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
    
    return 0;
}
