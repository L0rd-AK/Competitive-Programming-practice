#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    // freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    double x[]={2,1,3,4};
    double y[]={7,3,8,10};
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
    // cout<<"X "<<"Y "<<"Xi-Xbar "<<"Yi-Ybar "<<"(Xi-Xbar)^2 "<<"(Yi-Ybar)^2 "<<"(Xi-Xbar)*(Yi-Ybar) "<<endl;
    for(int i=0;i<sizeX;i++){
        // for(int j=0;j<7;j++){
            double a=x[i]-meanX;
            double b=y[i]-meanY;
            cout<<"["<<x[i]<<"]-->["<<y[i]<<"]-->["<<a<<"]-->["<<b<<"]-->["<<a*a<<"]-->["<<b*b<<"]-->["<<a*b<<"]"<<endl;
            cout<<"-------------------------------------------"<<endl;
            sum1+=a*a;
            sum2+=b*b;
            sum3+=a*b;
        // }cout<<endl;
    }cout<<endl;
    cout<<"Sum of (Xi-Xbar)^2: "<<sum1<<endl;
    cout<<"Sum of (Yi-Ybar)^2: "<<sum2<<endl;
    cout<<"Sum of (Xi-Xbar)*(Yi-Ybar): "<<sum3<<endl;
    double r=sum3/sqrt(sum1*sum2);
    cout<<"correlation coefficient: "<<r<<endl;


    return 0;
}