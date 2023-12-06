#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    // freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    double x[]={37,43,58,49,70,28,65,32};
    double y[]={5.5,6.95,4.95,5.75,3.95,8.25,5.5,6.75};
    int sizeX=sizeof(x)/sizeof(x[0]);
    int sizeY=sizeof(y)/sizeof(x[0]);
    double meanX=0,meanY=0,sumX=0,sumY=0;
    for(int i=0;i<sizeX;i++){
        sumX+=x[i];
        sumY+=y[i];
    }
    meanX=sumX/sizeX;
    meanY=sumY/sizeY;
    double sum1=0,sum2=0,sum3=0;
    for(int i=0;i<sizeX;i++){
        // for(int j=0;j<7;j++){
            double a=x[i]-meanX;
            double b=y[i]-meanY;
            cout<<"["<<x[i]<<"]-->["<<y[i]<<"]-->["<<a<<"]-->["<<b<<"]-->["<<a*a<<"]-->["<<a*b<<"]"<<endl;
            cout<<"-------------------------------------------------"<<endl;
            sum1+=a*a;
            sum3+=a*b;
        // }cout<<endl;
    }cout<<endl;
    cout<<"Sum of (Xi-Xbar)^2: "<<sum1<<endl;
    cout<<"Sum of (Xi-Xbar)*(Yi-Ybar): "<<sum3<<endl;
    double beta1=sum3/sum1;
    cout<<"Beta1 "<<beta1<<endl;
    cout<<"Beta-n0t "<<meanY-beta1*meanX<<endl;


    return 0;
}