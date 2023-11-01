#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    while(1)
    {
        int t;
        cin>>t;
        string s[t];int a[t],b[t];
        if(t==0) break;
        for(int i=0;i<t;i++)
        {
            cin>>s[i]>>a[i]>>b[i];
        }
        int minn=(a[0]-b[0]),ans=0;
        for(int i=0;i<t;i++)
        {
            if(minn>(a[i]-b[i])){minn=(a[i]-b[i]);ans=i;} 
        }
        cout<<s[ans]<<endl;

    }
}