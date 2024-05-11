#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
char c[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main(){
    
    char s[10000+7];
    scanf("%s",s);
    int a[26]={0};
    for(int i=0;i<strlen(s);i++){
        a[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]){
            printf("%c - %d\n",c[i],a[i]);
        }
    }
   
    return 0;
}