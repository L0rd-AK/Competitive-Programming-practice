#include <bits/stdc++.h>
using namespace std; 
const double precision=1e-3;
int main() {
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    vector<vector<int>> jb;
    jb.push_back({3,1,1,4});
    jb.push_back({1,4,1,1});
    jb.push_back({2,1,5,9});
    double x=0,y=0,z=0;
    // abs(x-y)>precision and abs(y-z)>precision and abs(z-x)>precision
    int i=1;
    while(i<=10){
        double eq1=(jb[0][3]-(jb[0][1]*y)-(jb[0][2]*z))/jb[0][0];x=eq1;
        cout<<i++<<"| "<<x<<" ";
        double eq2=(jb[1][3]-(jb[1][0]*x)-(jb[1][2]*z))/jb[1][1];y=eq2;
        cout<<y<<" ";
        double eq3=(jb[2][3]-(jb[2][0]*x)-(jb[2][1]*y))/jb[2][2];z=eq3;
        cout<<z<<"\n";
        cout<<"------------------------\n";
        //if(fabs(x-eq1)==0.0000 and fabs(y-eq2)==0.0000 and fabs(z-eq3)==0.0000) break;
        
    }
    cout<<"ans: "<<x<<" "<<y<<" "<<z<<endl;
}
