#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    int idx,value;
    scanf("%d %d",&idx,&value);
    a[idx]=value;
    for(int i=n-1;i>=0;i--)printf("%d ",a[i]);

    return 0;
}