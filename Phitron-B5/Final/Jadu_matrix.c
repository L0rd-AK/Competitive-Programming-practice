#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int m,n;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)scanf("%d",&a[i][j]);
    }
    if(n!=m)printf("NO\n");
    else{
        for(int i=0,j=n-1;i<n,j>=0;i++,j--){
            if(a[i][j]==1){
                a[i][j]=101;
                continue;
            }
            else{
                printf("NO\n");
                return 0;
            }
        }
        // printing
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         printf("%d ",a[i][j]);
        //     }
        //     printf("\n");
        // }
        // 2nd sheck
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==101)continue;
                if(i==j && a[i][j]==1)continue;
                if(i==j && a[i][j]!=1){
                    printf("NO\n");
                    return 0;
                }
                if(i!=j && a[i][j]!=0){
                    printf("NO\n");
                    return 0;
                }
            }
        }
        printf("YES\n");
    }
    
    
    return 0;
}