#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int t,index=1;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int n=s.length(),flag=1;
        if(n==1){cout<<"Case "<<index++<<": "<<"Yes"<<endl;continue;}
        else{
            for(int i=0;i<=(n/2);i++){
                if(s[i]==s[n-1-i]) continue;
                else{
                    cout<<"Case "<<index++<<": "<<"No"<<endl;
                    flag=0;
                    break;
                }
            }
        }
        if(flag)cout<<"Case "<<index++<<": "<<"Yes"<<endl;
    }
    
   
  return 0;
}