#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    // freopen("output.txt","w",stdout);
    string s;
    int flag=0;
    while (getline(cin,s))
    {
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='"' and flag==0){
                cout<<"``";
                flag=1;
            }else if(s[i]=='"' and flag==1){
                cout<<"''";
                flag=0;
            }else cout<<s[i];
        }
        cout<<endl;
    }
    


    return 0;
}