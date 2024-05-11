#include <iostream>
#include <math.h>
using namespace std;
#define PI  3.1415926535897
int main()
{
    double a,b,c;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        double p=(a+b+c)/2;
        double ta=sqrt(p*(p-a)*(p-b)*(p-c));
        double ocr=(a*b*c)/(4*ta);
        double oca=PI*pow(ocr,2);
        double icr=ta/p;
        double ica=PI*pow(icr,2);
        oca-=ta;
        ta=ta-ica;
        

        printf("%.4f %.4f %.4f\n",oca,ta,ica);
    }
    return 0;
}