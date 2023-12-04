#include <bits/stdc++.h>
using namespace std; 
#define ll long long int
int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
    int t;
    cin>>t;
    while(t--){
       ll n,p,l,t;
       cin>>n>>p>>l>>t;
       ll x;
       if(n/7){
        x=n/7;
       }else x=1;

       ll temp=0,ans=0,day=0;
       if(x%2==0){
        day=x/2;
        temp=l*day+day*2*t;
       }
       else{
        if(x==1){temp=l*day+day*1*t;day=1;}
        else{
            day=x/2;
            temp=l*day+day*2*t;
            temp+=l+t;
            day+=1;
        }
       }
       
       
       ans=day;
       
       if(temp>=p){
        cout<<n-ans<<endl;
        continue;
       }
       else{
            while(temp<=p){
                temp+=l;
                ans++;
            }
       }
       cout<<n-ans<<endl;
    }
}
