#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n,x;
    scanf("%d",&n);
    long long int pos=0,neg=0;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(x<0)neg+=x;
        else if(x>0)pos+=x;
    }
    printf("%lld %lld",pos,neg);

    return 0;
}