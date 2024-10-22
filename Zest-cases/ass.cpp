#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,x;cin>>n>>x;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int freq[n+1] = {0};
    for(int i=0;i<n;i++){
        if(arr[i]<n+1) freq[arr[i]]++;
    }

    for(int i=0;i<n+1;i++){
        if(freq[i]==0){
            cout<<i<<endl;
            return;
        }
        else if(freq[i]>1){
            if(i+x<=n) freq[i+x]+=freq[i]-1;
        }
        //cout<<freq[i]<<" ";
    }

    
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}