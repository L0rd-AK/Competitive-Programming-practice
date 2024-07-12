#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
   int t;
   cin>>t;
   while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        int start=0,end=m-1,jump=m,water=0;
        bool flg=0;
        if(n<=m){
            cout<<"YES"<<endl;
            continue;
        }else{
            // jumap
            for(int i=m-1;i>=0;){
                if(s[i]=='L' || s[i]=='W'){start=i;break;}
                else i--;
            }
            if(s[start]=='C'){
                cout<<"NO"<<endl;
                continue;
            }
            int i=start;
            while(i<n){
                if(s[i]=='L'){
                    while(jump){
                        if(s[i+jump]=='L'){
                            i+=jump;
                        }else jump--;
                    }
                }
                else if(s[i+1]=='W'){
                    i++;
                }
            }
        }
   }

   return 0;
}
