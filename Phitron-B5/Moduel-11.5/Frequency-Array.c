#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int n,m;
    scanf("%d %d",&n,&m);
    int a[100000+7]={0},x;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        a[x]++;
    }
    for(int i=1;i<=m;i++){
        printf("%d\n",a[i]);
    }
    
    return 0;
}