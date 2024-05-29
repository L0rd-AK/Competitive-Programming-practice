#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[26]={0};
    for(int i=0;i<n;i++){
        char c;cin>>c;
        a[c-'a']++;
    }
    string z="abcdefghijklmnopqrstuvwxyz";
    // for(int i=0;i<26;i++)cout<<z[i]<<" "<<a[i]<<endl;
    for(int i=0;i<26;i++){
        if(a[i]){
            for(int j=0;j<a[i];j++)cout<<z[i];
        }
    }
    cout<<endl;

    return 0;
}
