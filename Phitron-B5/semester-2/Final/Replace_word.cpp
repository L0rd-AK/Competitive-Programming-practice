#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    int t;
    cin>>t;
    while(t--){
        string a,b,z;
        cin>>a>>b;
        int a_len=a.length(),b_len=b.length(),j=0;
        for(int i=0;i<a_len;i++){
            if(a[i]==b[j]){
                z+=a[i];
                j++;
            }else if(j==b_len){
                cout<<"#"<<a[i];
                j=0;
            }else if(j>0){
                cout<<z<<a[i];
                j=0;
                z.clear();
            }else cout<<a[i];
        }
        if(j==b_len)cout<<"#";
        else if(j>0)cout<<a;
        cout<<endl;
    }
   
    return 0;
}
