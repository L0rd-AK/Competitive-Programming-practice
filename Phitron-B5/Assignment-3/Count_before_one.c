#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count_before_one(int a[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==1)return count;
        else count++;
    }
    return count;
}
int main(){
    
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("%d",count_before_one(a,n));
    return 0;
}