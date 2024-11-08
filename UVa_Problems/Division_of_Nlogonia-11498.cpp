#include <bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int t;
    while (1)
    {
        cin>>t;
        if(t==0) break;
        int x,y;
        cin>>x>>y;
        while(t--){ int a,b;
            cin>>a>>b;
            if(a==x or a==y or b==x or b==y) cout<<"divisa"<<endl;
            else if(a<x and b<y)cout<<"SO"<<endl;
            else if(a>x and b>y) cout<<"NE"<<endl;
            else if(a>x and b<y) cout<<"SE"<<endl;
            else if(a<x and b>y) cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}