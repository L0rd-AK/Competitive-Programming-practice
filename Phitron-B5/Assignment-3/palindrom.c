#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_palindrome(char s[]){
    int n=strlen(s);
    for(int i=0;i<=n/2;i++){
        if(s[i]!=s[n-1-i])return 0;
    }
    return 1;
}
int main(){
    
    char s[1007];
    scanf("%s",s);
    
    if(is_palindrome(s))printf("Palindrome\n");
    else printf("Not Palindrome\n");

    return 0;
}