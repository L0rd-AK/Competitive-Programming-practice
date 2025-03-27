#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
 // freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int t,index=1;cin>>t;
  while(t--){
    int n;cin>>n;
    string s;cin>>s;
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            s[i+1]='#';c++;
            i+=2;
        }
    }cout<<"Case "<<index++<<": "<<c<<endl;
  }
  
 return 0;
}