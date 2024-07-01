#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int t;
    cin>>t;
    while(t--){
        int n=3;
        int a; char b[100]; char c; int d;
        int max_a; char max_b[100]; char max_c; int max_d=-999;
        while(n--){
            cin>>a>>b>>c>>d;
            if(d>max_d){
                max_a=a;
                strcpy(max_b,b);
                max_c=c;
                max_d=d;
            }
        }
        cout<<max_a<<" "<<max_b<<" "<<max_c<<" "<<max_d<<endl;
    }

    return 0;
}
