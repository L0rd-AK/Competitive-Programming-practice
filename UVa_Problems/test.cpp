#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        int ok1=1,ok2=1,ok3=1;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(s[i]=='1' and ok1==1 and ok2==0){
                    ok1=0;
                    if(ok2==0) ok3=0;
                }else{
                    ok2=0;
                    ok1=1;
                }
            }
        }
        cout<<ok1<<" "<<ok2<<" "<<ok3<<endl;
        if(ok1==0 and ok2==0 and ok3==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
    return 0;
}