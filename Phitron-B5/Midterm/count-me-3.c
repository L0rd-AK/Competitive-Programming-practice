#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    int n;
    scanf("%d",&n);
    
    while(n--){
        char s[10000+7];
        int cap=0,small=0,num=0;
        scanf("%s",s);
        for(int i=0;i<strlen(s);i++){
            if(s[i]>='a' && s[i]<='z')small++;
            if(s[i]>='A' && s[i]<='Z')cap++;
            if(s[i]>='0' && s[i]<='9')num++;
        }
        printf("%d %d %d\n",cap,small,num);
    }
   
    return 0;
}