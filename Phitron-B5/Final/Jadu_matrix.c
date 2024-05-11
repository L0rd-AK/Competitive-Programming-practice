#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int r,c;
    scanf("%d %d",&r,&c);
    int a[n][m];
    for(int i=0;i<r;i++)for(int j=0;j<c;j++)scanf("%d",&a[i][j]);
    for(int i=0;i<c;i++)printf("%d ",a[r-1][i]);
    for(int i=0;i<r;i++)printf("%d ",a[i][r-1]);
    
    
    return 0;
}