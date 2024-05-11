#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
   int t;
   cin>>t;cin.ignore();
   while(t--){
     string s1,s2;
     getline(cin,s1);
     for(int i=0;i<s1.length();i++) s1[i]=tolower(s1[i]);
     getline(cin,s2);
     for(int i=0;i<s2.length();i++) s2[i]=tolower(s2[i]);
     sort(s1.begin(), s1.end());
     remove(s1.begin(), s1.end(), ' ');
     sort(s2.begin(), s2.end());
     remove(s2.begin(), s2.end(), ' ');
     cout<<s1<<"\n"<<s2;


   }
        
}