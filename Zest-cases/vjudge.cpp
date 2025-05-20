#include <iostream>
using namespace std;
int main()
{
int n,k,f[150001],x,i=1,p=0,j=0;
for(cin>>n>>k;i<=n;cin>>x,p+=x,f[i++]=p);
    for(i=1;i<=n-k;i++)
    if(f[i+k]-f[i]<f[j+k]-f[j])j=i;
    cout<<j+1;
}
 