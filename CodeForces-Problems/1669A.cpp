#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
       #ifndef ONLINE_JUDGE
              freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
       #endif
	int t;
       cin>>t;
       while(t--){
              int x;
              cin>>x;
              if(x<=1399)cout<<"Division 4\n";
              else if(x>=1400 and x<=1599)cout<<"Division 3\n";
              else if(x>=1600 and x<=1899)cout<<"Division 2\n";
              else if(x>=1900)cout<<"Division 1\n";
       }
       
	return 0;
}