#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
   
   list<int> lst;
   int x;
    while(1){
        cin>>x;
        if(x==-1)break;
        lst.push_back(x);
    }
    lst.sort();
    lst.unique();
    for(auto i:lst)cout<<i<<" ";

    return 0;
}