#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void input(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
}

int main() 
{
    input();
    string s;
    while(getline(cin,s)){
        for(int i=0;i<s.length();i++){
            if(s[i]>='A' and s[i]<='C') cout<<2;
            else if(s[i]>='D' and s[i]<='F') cout<<3;
            else if(s[i]>='G' and s[i]<='I') cout<<4;
            else if(s[i]>='J' and s[i]<='L') cout<<5;
            else if(s[i]>='M' and s[i]<='O') cout<<6;
            else if(s[i]>='P' and s[i]<='S') cout<<7;
            else if(s[i]>='T' and s[i]<='V') cout<<8;
            else if(s[i]>='W' and s[i]<='Z') cout<<9;
            else cout<<s[i];
        }
        cout<<endl;
    }
    
    
  return 0;
}