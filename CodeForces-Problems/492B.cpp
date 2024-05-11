#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif

   int n,l;
   cin>>n>>l;
   int a[n];
   for(int i=0;i<n;i++)cin>>a[i];
   sort(a,a+n);
   int mx_dis=INT_MIN;
   for(int i=1;i<n;i++){
      int tmp=a[i]-a[i-1];
      if(tmp>mx_dis)mx_dis=tmp;
   }
   double ans=(mx_dis/2.0);
   if(ans>a[0]-0 and ans>l-a[n-1])printf("%.10lf\n",ans);
   else if(ans<a[0]-0 or ans<l-a[n-1]){
      double zz=max(a[0]-0,l-a[n-1]);
      printf("%.10lf\n",zz);
   }

    
	return 0;
}