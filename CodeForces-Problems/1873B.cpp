#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int t;
  cin>>t;
  
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sum=1;
    for(int i=1;i<n;i++){
        sum*=a[i];
    }
    sum=sum*(a[0]+1);
    cout<<sum<<endl;
  }
  
    
  return 0;
}
