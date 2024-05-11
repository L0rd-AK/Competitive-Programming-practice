#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int n;
    int m1,m2,d;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&m1,&m2,&d);
        printf("%d\n",d-((m1*d)/(m1+m2)));
    }
   
    return 0;
}