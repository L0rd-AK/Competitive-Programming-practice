#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)

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
      int a[n],b[n];
      f(i,0,n)cin>>a[i];
      f(i,0,n)cin>>b[i];
      int A=0,B=0,ans=INT_MIN,ans_pro_max=INT_MIN,x=0,y=0;
      
      f(i,0,n){
        if(a[i]<b[i])B+=b[i];
        else if(a[i]>b[i])A+=a[i];
        else{
            if(a[i]==1)x++;
            else if(a[i]==-1)y++;
        }
        
      }
    //   plus points
      if(A>B){
        while(x){
            if(A>B){B++;x--;}
            else{A++;x--;}
        }
      }else if(B>A){
        while(x){
            if(A>B){B++;x--;}
            else{A++;x--;}
        }
      }else{
        while(x){
            if(A>=B){B++;x--;}
            else{A++;x--;}
        }
      }
    //  minus points
    if(A>B){
        while(y){
            if(A<B){B--;y--;}
            else{A--;y--;}
        }
      }else if(B>A){
        while(y){
            if(A<B){B--;y--;}
            else{A--;y--;}
        }
      }else{
        while(y){
            if(A<=B){B--;y--;}
            else{A--;y--;}
        }
      }
    //   ans
    cout<<min(A,B)<<endl;
      
   }

    return 0;
}