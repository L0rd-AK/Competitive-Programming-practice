#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt", "r", stdin);
    while (1)
    {
        double wallHeight,intialHeight,slid,ftig;
        cin>>wallHeight>>intialHeight>>slid>>ftig;
        if(wallHeight==0&&intialHeight==0&&slid==0&&ftig==0) break;
        double currentHeight=0.0,fatig_fall=intialHeight*(ftig/100);
        int day=0;
        while(1){
            day++;
            if(intialHeight>0) currentHeight+=intialHeight;
            if(currentHeight>wallHeight)break;

            intialHeight-=fatig_fall;
            currentHeight-=slid;

            if(currentHeight<0)break;
        }
            if(currentHeight<0){cout<<"failure on day "<<day<<"\n";}
            if(currentHeight>wallHeight) {cout<<"success on day "<<day<<"\n";}
    }
    return 0;
}