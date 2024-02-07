#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)

int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif

   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int trace[n]={0};
    string s;
    for(int i=0;i<n;i++){
        for(int j=0;j<26;j++){
            if(trace[j]!=a[i])continue;
            trace[j]++;
            s+=(char)(j+'a');
            break;
        }
    }
    cout<<s<<endl;

   }
   return 0;
}