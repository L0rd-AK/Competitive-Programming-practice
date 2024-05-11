#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    // freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    double x[]={500,700,800,600};
    double y[]={84,75,99,72};
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
    double Beta_n0t=meanY-beta1*meanX;
    double sum_of_Y1=0,sum_of_Y2=0;
    for(int i=0;i<sizeX;i++){
        double Y_bar=Beta_n0t+beta1*x[i];
        sum_of_Y1+=(y[i]-Y_bar)*(y[i]-Y_bar);
        sum_of_Y2+=(y[i]-meanY)*(y[i]-meanY);
    }
    
    cout<<"Beta1 :"<<beta1<<endl;
    cout<<"Beta-n0t :"<<Beta_n0t<<endl;
    cout<<"Coefficient of Determination (R^2): "<<1-(sum_of_Y1/sum_of_Y2)<<endl;


    return 0;
}