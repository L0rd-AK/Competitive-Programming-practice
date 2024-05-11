#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    char s[100000+7];
    scanf("%s",s);
    int ans=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='\n')break;
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')continue;
        else ans++;
    }
    printf("%d\n",ans);
   
    return 0;
}