#include<stdio.h>
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    printf("%.0f + %.0f = %.0f\n",a,b,a+b);
    printf("%.0f - %.0f = %.0f\n",a,b,a-b);
    printf("%.0f * %.0f = %.0f\n",a,b,a*b);
    printf("%.0f + %.0f = %.2f\n",a,b,a/b);
    return 0;
}