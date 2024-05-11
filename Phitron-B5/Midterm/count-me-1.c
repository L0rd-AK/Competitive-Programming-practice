#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int n,x,two=0,three=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        if(x%2==0)two++;
        else if(x%3==0)three++;
    }
    printf("%d %d\n",two,three);
    
    return 0;
}