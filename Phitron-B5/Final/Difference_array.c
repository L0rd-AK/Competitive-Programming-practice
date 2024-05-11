#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        int a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        bubbleSort(a,n);
        for(int i=0;i<n;i++)printf("%d ",abs(a[i]-b[i]));
        printf("\n");
    }
    
    
    return 0;
}