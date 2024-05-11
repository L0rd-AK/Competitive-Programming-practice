#include <iostream>
using namespace std;
int main()
{
    int t;
    while(1)
    {
        cin>>t;
        if(t==0) break;
        long long int a[100000];
        for(int j=0,i=3;i<=10001;i++)
        {
            if(i%2!=0) {a[j]=i;j++;}
        }
        cout<<"1";long long int sum=1;
        for(int i=1,j=0;;i++,j++)
        {
            sum+=a[j];
            if(sum>t) break;
            cout<<" "<<sum;
        }
        cout<<endl;
    }
}