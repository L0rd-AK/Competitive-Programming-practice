#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        string s;
        for(int i=0;i<str.length();i++)if(str[i]!=' ')s+=str[i];
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }

    return 0;
}