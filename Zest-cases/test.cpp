#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    #ifndef ONLINE_JUDGE
       freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    int n;
    cin>>n;
    int a[n],idx=0;
    for(int i=0;i<n;i++){
       cin>>a[i];
       if(a[i]==-1)idx=i;
    }
	return 0;
}