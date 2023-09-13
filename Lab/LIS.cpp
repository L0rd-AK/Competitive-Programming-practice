#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    // freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++) cin>>nums[i];
    int L[n],p[n];
        for(int i=0;i<n;i++) L[i]=1;

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j] and L[j]+1 > L[i])
                   { 
                        L[i]=1+L[j];
                        p[i]=i;
                   }
            for(int j=0;j<i;j++)cout<<nums[j]<<" "; 
            cout<<endl;
            cout<<"Length: ";
            for(int j=0;j<i;j++)cout<<L[j]<<" "; 
            cout<<endl;      
            cout<<"previous index: ";
            for(int i=0;i<n;i++) cout<<p[j]<<" ";
            cout<<endl;      
            }
        }
        int maxx=L[0];
        for(int i=1;i<n;i++) maxx=max(maxx,L[i]);
        cout<<"LIS Length: "<<maxx<<endl;
         sort(L,L+n);
        for(int i=1;i<n;i++) cout<<p[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;){
            for(int j=i+1;j<n;j++)
                if(L[i]<L[j]) {cout<<nums[i]<<" ";i++;}
             
        } 
}