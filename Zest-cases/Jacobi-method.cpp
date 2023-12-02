#include <bits/stdc++.h>
using namespace std; 
const double precision=1e-3;
int main() {
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    vector<vector<int>> jb;
    jb.push_back({28,4,-1,32});
    jb.push_back({2,17,4,35});
    jb.push_back({1,3,10,24});
    double x=0,y=0,z=0;
    // abs(x-y)>precision and abs(y-z)>precision and abs(z-x)>precision
    int i=1;
    while(1){
        double eq1=(jb[0][3]-(jb[0][1]*y)-(jb[0][2]*z))/jb[0][0];
        cout<<i++<<"| "<<x<<" ";
        double eq2=(jb[1][3]-(jb[1][0]*x)-(jb[1][2]*z))/jb[1][1];
        cout<<y<<" ";
        double eq3=(jb[2][3]-(jb[2][0]*x)-(jb[2][1]*y))/jb[2][2];
        cout<<z<<"\n";
        cout<<"------------------------\n";
        if(abs(x-eq1)==0.0000 and abs(y-eq2)==0.0000 and abs(z-eq3)==0.0000) break;
        x=eq1;y=eq2;z=eq3;
    }
    cout<<"ans: "<<x<<" "<<y<<" "<<z<<endl;
}
