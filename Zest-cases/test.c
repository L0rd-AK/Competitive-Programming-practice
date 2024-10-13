#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//1
        for(int j=1;j<=n;j++){//
            printf("(%d,%d) ",i,j);
        }
        printf("\n");
    }
    printf("\n");
    int i=0;
    while(i<=n){
        printf("%d ",i);
        i=i+3;
    }
    printf("\n");
    i=1;
    do{
        printf("%d ",i);
        i++;
    }while(i<=0);

    return 0;
}