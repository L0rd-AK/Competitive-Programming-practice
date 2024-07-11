#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    stack<int> st;
    int n,m;
    cin >> n>>m;
    if(n!=m){cout<<"NO"<<endl; return 0;}

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flg=1;
    while (!q.empty() && !st.empty())
    {
        if(q.front()!=st.top()){
            flg=0;
            break;
        }
        st.pop();
        q.pop();
    }
    if(flg)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}