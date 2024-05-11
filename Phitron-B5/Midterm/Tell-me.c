#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        int  n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        int  m;
        scanf("%d",&m);
        int flg=1;
        for(int i=0;i<n;i++){
            if(a[i]==m){
                printf("YES\n");
                flg=0;
                break;
            }
        }
        if(flg)printf("NO\n");
    }
   
    return 0;
}