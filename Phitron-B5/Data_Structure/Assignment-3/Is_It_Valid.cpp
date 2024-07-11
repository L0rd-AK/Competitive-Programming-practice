#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int t;
    cin>>t;
    while(t--){
        stack<char> st;
        string s;
        cin>>s;
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            char c=st.top();
            if(s[i]=='0' && c=='1' || s[i]=='1' && c=='0'){
                if(!st.empty()){
                    st.pop();
                }
            }else{
                 st.push(s[i]);
            }
        }
        if(st.empty())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}