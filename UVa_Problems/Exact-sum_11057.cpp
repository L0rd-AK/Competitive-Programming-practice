#include <bits/stdc++.h>
using namespace std;
int search(int rem,int a[],int lo,int hi){
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(a[mid]==rem){

        } 
        else if(a[mid]<rem) lo=mid+1;
        else hi=mid-1;
    }
    return 0;
}
int main()
{
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int t;
    while (cin>>t)
    {
        int a[t],money;
        for(int i=0;i<t;i++)cin>>a[i];
        cin>>money;
        sort(a,a+t);
        int flag=1;
        for(int i=0;i<t;i++){
            int rem=money-a[i];
            if(search(rem,a,i+1,t)){
                cout<<"Peter should buy books whose prices are "<<rem<<" and "<<a[i]<<"."<<endl;
                flag=0;
                break;
            }
        }
        if(flag)cout<<0<<endl;
        
    }
    return 0;
}