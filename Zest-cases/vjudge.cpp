#include <stdio.h>
#include<math.h>
int main()
{
    int A,B,C,MIN,MAX;
    scanf("%d %d %d",&A,&B,&C);
    if(A>B && A>C )
    {
      MAX=A;
    }
    else if (B>A && B>C)    {
        MAX=B;
        
    }
     else if(C>A && C>B )
    { MAX = C;
    }
   if(A<B && A<C)
    {
       MIN = A;
    }
    else if(B<A && B<C )
    {
     MIN = B;
    }
    else if (C<A && C<B)
    {
        MIN = C;
    }
    printf("%d %d", MIN,MAX);
}