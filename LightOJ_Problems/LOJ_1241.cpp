#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t,n,index=1;
    cin>>t;
    while(t--){
        cin>>n;     ll a[n],c=0,min=2;
        for(int i=0;i<n;i++) cin>>a[i];

        for(int i=0;i<n;i++){     ll temp=0,diff=0;
            diff=a[i]-min;
            if(diff){
                temp=ceil(diff/5.0);
                if(temp==0) c++;
                else c+=temp;
                min=a[i];

            } 
        }
        cout<<"Case "<<index++<<": "<<c<<endl;
    }
}