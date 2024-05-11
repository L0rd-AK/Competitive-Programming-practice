#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,a,b,c;
        scanf("%lld %lld %lld %lld",&n,&a,&b,&c);
        if(n==0)printf("0\n");
        else if(n%(a*b*c)==0)printf("%lld\n",n/(a*b*c));
        else printf("-1\n");

    }
    
    return 0;
}