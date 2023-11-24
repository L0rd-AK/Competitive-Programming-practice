#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int currentSum=0,maxSum=INT_MIN;
        for(int i=0;i<n;i++){
            if(i>0 and abs(a[i]%2)==abs(a[i-1]%2)){
                currentSum=a[i];
                maxSum=max(maxSum,currentSum);
            }else{
                currentSum=max(a[i],currentSum+a[i]);
                maxSum=max(maxSum,currentSum);
            }
        }
        cout<<maxSum<<'\n';
    }
    return 0;
}