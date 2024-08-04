#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl

void AKG(){
    string s;
    cin>>s;
    int n=s.length();
    stack<char> st;
    st.push(s[0]);
    int ans=0;
    f(i,1,n){
        if(s[i]=='<' || s[i]=='(' || s[i]=='{' || s[i]=='[')st.push(s[i]);
        else{
            if(!st.empty()){
                char c=st.top();
                if(c=='<'){
                    if(s[i]=='>')st.pop();
                    else if(s[i]==')' || s[i]=='}' || s[i]==']'){
                        ans++;
                        st.pop();
                    }
                }
                else if(c=='('){
                    if(s[i]==')')st.pop();
                    else if(s[i]=='>' || s[i]=='}' || s[i]==']'){
                        ans++;
                        st.pop();
                    }
                }
                else if(c=='{'){
                    if(s[i]=='}')st.pop();
                    else if(s[i]==')' || s[i]=='>' || s[i]==']'){
                        ans++;
                        st.pop();
                    }
                }
                else if(c=='['){
                    if(s[i]==']')st.pop();
                    else if(s[i]==')' || s[i]=='}' || s[i]=='>'){
                        ans++;
                        st.pop();
                    }
                }
                else st.push(s[i]);
            }
        }
    }
    if(st.empty() && ans==0)prnt(0);
    else if(ans==0 || !st.empty())prnt("Impossible");
    else prnt(ans);

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        AKG();
    }
#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
#endif
    return 0;
}
