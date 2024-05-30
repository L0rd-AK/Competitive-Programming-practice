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
        int a_len=a.length(),b_len=b.length();
        for(int i=0;i<a_len;i++){
            if(a[i]==b[0]){
                int z=i,c=0;
                for(int j=0;j<b_len;j++) if(a[z]==b[j]){c++;z++;}
                if(c==b_len){
                    cout<<"#";
                    i+=b_len-1;
                }else{
                    cout<<a[i];
                }
            }else cout<<a[i];
        }cout<<endl;
        
    }
   
    return 0;
}
