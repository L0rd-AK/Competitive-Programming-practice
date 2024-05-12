#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int n,k;
    scanf("%d",&n);
    if(n==1)k=6;
    else if(n==3)k=7;
    else if(n==5)k=8;
    else if(n==7)k=9;
    else if(n==9)k=10;
    else if(n==11)k=11;
    else if(n==13)k=12;
    else if(n==15)k=13;
    else if(n==17)k=14;
    else if(n==19)k=15;
    else if(n==21)k=16;

    for(int i=1;i<=k;i++){
        for (int c = 1; c <= k-i; c++)
            printf(" ");
        for (int c = 1; c <= 2*i-1; c++)
            printf("*");
        printf("\n");
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5+n;j++){
            if(i<5 &&j<5)printf(" ");
            else printf("*");
        }
        printf("\n");
    }
    
    
    return 0;
}