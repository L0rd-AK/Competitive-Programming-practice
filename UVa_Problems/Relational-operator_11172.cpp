#include <iostream>
using namespace std;
int main()
{
    long long int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        if(x>y) cout<<">"<<endl;
        else if(x<y) cout<<"<"<<endl;
        else cout<<"="<<endl;
    }


    return 0;
}