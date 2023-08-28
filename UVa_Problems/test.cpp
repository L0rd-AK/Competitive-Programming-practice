#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    int t;
    while (cin>>t and t!=0)
    {
        
        while(t--){
        int n,x,y;
        cin>>n>>x>>y;
            while(n--){ int a,b;
                cin>>a>>b;
                if(a==x or a==y or b==x or b==y) cout<<"divisa"<<endl;
                else if(a<0 and b<0)cout<<"SO"<<endl;
                else if(a>0 and b>0) cout<<"NE"<<endl;
                else if(a>0 and b<0) cout<<"NO"<<endl;
                else if(a<0 and b>0) cout<<"SE"<<endl;
            }
        }
    }
    
    return 0;
}