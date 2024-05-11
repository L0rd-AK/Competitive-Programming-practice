#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int n,c,k;
    scanf("%d",&n);
    
    for (k = 1; k <= n; k++){
        if(k%2==1){
            for (c = 1; c <= n-k; c++)
                printf(" ");
            for (c = 1; c <= 2*k-1; c++)
                printf("#");
            printf("\n");
        }else{
            for (c = 1; c <= n-k; c++)
                printf(" ");
            for (c = 1; c <= 2*k-1; c++)
                printf("-");
            printf("\n");
        }
    }

  if(n%2==0){
    for (k=1; k <=(n - 1); k++){
        if(k%2==0){
            for (c = 1; c <= k; c++)
                printf(" ");
            for (c = 1 ; c <= 2*(n-k)-1; c++)
                printf("-");
            printf("\n");
        }else{
            for (c = 1; c <= k; c++)
                printf(" ");
            for (c = 1 ; c <= 2*(n-k)-1; c++)
                printf("#");
            printf("\n");
        }
    }
  }else{
    for (k=1; k <=(n - 1); k++){
        if(k%2==1){
            for (c = 1; c <= k; c++)
                printf(" ");
            for (c = 1 ; c <= 2*(n-k)-1; c++)
                printf("-");
            printf("\n");
        }else{
            for (c = 1; c <= k; c++)
                printf(" ");
            for (c = 1 ; c <= 2*(n-k)-1; c++)
                printf("#");
            printf("\n");
        }
    }
  }
    
    return 0;
}