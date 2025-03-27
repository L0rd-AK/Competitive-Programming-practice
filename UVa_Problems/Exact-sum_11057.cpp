#include <bits/stdc++.h>
using namespace std;
int search(int rem,int a[],int lo,int hi){
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(a[mid]==rem) return 1; 
        else if(a[mid]<rem) lo=mid+1;
        else hi=mid-1;
    }
    return 0;
}
int main()
{
    //freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int t;
    while (cin>>t)
    {
        int a[t],money;
        for(int i=0;i<t;i++)cin>>a[i];
        cin>>money;
        sort(a,a+t);
        int flag=1,min=1000001,price;
        for(int i=0;i<t;i++){
            int rem=money-a[i];
            if(search(rem,a,i+1,t)){
                if(rem<min){
                    min=rem;
                    price=a[i];
                }
                flag=0;
            }
        }
        if(flag)cout<<0<<endl;
        else cout<<"Peter should buy books whose prices are "<<price<<" and "<<money-price<<"."<<endl;
        cout<<endl;
        
    }
    return 0;
}