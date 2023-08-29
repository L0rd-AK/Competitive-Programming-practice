#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)


int main() 
{
  ll t,x,y,n,c=1,ans;
  string s;
  char s1[]={'\0','a','b','c'};
  char s2[]={'\0','d','e','f'};
  char s3[]={'\0','g','h','i'};
  char s4[]={'\0','j','k','l'};
  char s5[]={'\0','m','n','o'};
  char s6[]={'\0','p','q','r','s'};
  char s7[]={'\0','t','u','v'};
  char s8[]={'\0','w','x','y','z'};
 cin>>t;cin.ignore();
 while(t--){
  getline(cin,s);ans=0;
  cout<<"Case #"<<c<<":";c++;
  f(i,0,s.length()){
    if(s[i]>='a' and s[i]<='c'){
      f1(j,1,3){
        if(s1[j]==s[i]) {ans+=j;break;}
      }
    }else if(s[i]>='d' and s[i]<='f'){
      f1(j,1,3){
        if(s2[j]==s[i]) {ans+=j;break;}
      }
    }else if(s[i]>='g' and s[i]<='i'){
      f1(j,1,3){
        if(s3[j]==s[i]) {ans+=j;break;}
      }
    }else if(s[i]>='j' and s[i]<='l'){
      f1(j,1,3){
        if(s4[j]==s[i]) {ans+=j;break;}
      }
    }else if(s[i]>='m' and s[i]<='o'){
      f1(j,1,3){
        if(s5[j]==s[i]) {ans+=j;break;}
      }
    }else if(s[i]>='p' and s[i]<='s'){
      f1(j,1,4){
        if(s6[j]==s[i]) {ans+=j;break;}
      }
    }else if(s[i]>='t' and s[i]<='v'){
      f1(j,1,3){
        if(s7[j]==s[i]) {ans+=j;break;}
      }
    }else if(s[i]>='w' and s[i]<='z'){
      f1(j,1,4){
        if(s8[j]==s[i]) {ans+=j;break;}
      }
    }else ans++;
  }
  cout<<" "<<ans<<endl;
  
 }
  return 0;
}