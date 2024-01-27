#include<iostream>
using namespace std;
int main()
{
    long long int t;
    scanf("%lld",&t);

        long long int ar[6];
    for(long long int i=0;i<t;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%lld",&ar[j]);
        }

        int s1 = ar[0]+ar[1]+ar[2];cout<<s1<<endl;
        int s2 = ar[3]+ar[4]+ar[5];cout<<s2<<endl;

        if(s1==s2)
        {
            printf("YES\n");
        }

        else{
             printf("NO\n");
        }

    }

    return 0;
}