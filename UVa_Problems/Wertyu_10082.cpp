#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)



int main() 
{
  ll t=0,x,y,z,n,c=1,ans;
  string s;
  string test="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    while (getline(cin,s))
    {
    f(i,0,s.length()){
      if(s[i]==' ') cout<<" ";
      else{
        f(j,0,test.length()){
          if(s[i]==test[j]){cout<<test[j-1];break;}
        }
      } 
    }
    cout<<endl;
    }
    
  return 0;
}