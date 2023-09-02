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
        int index=0,a[2]={0};
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){}
            else{
                while(1){
                    a[index]++;
                    if(s[i]!=s[i+1]){
                        index=1;
                        break;
                    }
                    i++;
                }
            }
        }
        // cout<<index<<" "<<a[0]<<" "<<a[1]<<endl;
        if(a[0]>0 and a[1]==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}