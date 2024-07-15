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
        int n;
        cin>>n;
        string s;
        if(n==1 && s[0]=='1')yes;
        else if(n==1 && s[0]=='0') no;
        else if(n==2 && s[0]=='1' && s[1]=='1')yes;
        else if(n==2 && s[0]=='0' && s[1]=='0') no;
        else{
            int one=0,zero=0;
            stack<char> st;
            st.push(s[0]);
            f(i,1,n){
                char c=st.top();
                if(c==s[i])continue;
                else st.push(s[i]);
            }
            while(!st.empty()){
                cout<<st.top()<<" ";
                st.pop();
            }
        }
            
    }
    
    
    return 0;
}
