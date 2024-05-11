#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string sm,em,temp;
    int index=1;
    while(t--){
        int sd,ed,sy,ey;
        cin>>sm>>sd>>temp>>sy;
        cin>>em>>ed>>temp>>ey;
        if(sm!="January" and sm!="February") sy++;
        if(em=="January" or em=="February" and ed<29) ey--;

        int count_4 = ey / 4 - (sy - 1) / 4;
        int count_400 = ey / 400 - (sy - 1) / 400;
        int count_100 = ey / 100 - (sy - 1) / 100;

        cout<<"Case "<<index++<<": "<<(count_4-count_100+count_400)<<endl;
    }
}