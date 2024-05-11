#include <stdio.h>
int main()
{
   int a, y, m,d;
   scanf("%d",&a);
   y=a/365;
   m=(a%365)/30;
   d=(a%365)%30;

   printf("%d ano(s)\n",y);
   printf("%d mes(es)\n",m); 
   printf("%d dia(s)\n",d);

    return 0;
}