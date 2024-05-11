#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
       #ifndef ONLINE_JUDGE
              freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
       #endif
	string s;

       cin>>s;
       int x=s.length();
       int a=1e5,b=1e6,c=1e7,flag=1;
       for(int i=0;i<x-1;i++){
           if(s[i]!=s[i+1]){
              if(s[i]-'A'>s[i+1]-'A'){
                     cout<<"No\n";
                     flag=0;
                     break;
              }
           }
       }
       if(flag)cout<<"Yes\n";
       
	return 0;
}