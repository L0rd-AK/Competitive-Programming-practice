#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    // cout<<'z'-'c';
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<n;i++){
        a[s[i]-'a']++;
    }
    int sum=0;
    for(int i=0;i<26;i++){cout<<a[i]<<" ";
        sum+=a[i];
    }
    // cout<<sum<<endl;
     
    return 0;
}