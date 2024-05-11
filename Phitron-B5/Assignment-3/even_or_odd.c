#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void odd_even(){
    int n;scanf("%d",&n);
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        int x;scanf("%d",&x);
        if(x%2==0)even++;
        else odd++;
    }
    printf("%d %d",even,odd);
}

int main(){
    odd_even();
    return 0;
}