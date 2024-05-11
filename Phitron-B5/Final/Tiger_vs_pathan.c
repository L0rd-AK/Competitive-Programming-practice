#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        int n,p=0,t=0;
        scanf("%d",&n);
        char str[100000+7];
        scanf("%s",str);
        for(int i=0;i<n;i++){
            if(s[i]=='T')t++;
            else p++;
        }
        if(p>t)printf("Pathaan\n");
        else if(t>p)printf("Tiger\n");
        else printf("Draw\n");
    }
    
    return 0;
}