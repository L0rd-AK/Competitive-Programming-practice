#include <bits/stdc++.h>
using namespace std;

int LCS(string a,string b){
    int n=a.length();
    int m=b.length();
    int lcs[n+7][m+7];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           lcs[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                lcs[i][j]=lcs[i-1][j-1]+1;
            }else{
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
            }
        }
    }
    return lcs[n][m];
}

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    // freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    string a,b;
    cin>>a>>b;
    int aLen=a.length();
    int bLen=b.length();
    int ans=0;
    if(aLen>bLen){
        ans=bLen-LCS(a,b);
    }
    else {
        ans=aLen-LCS(a,b);
    }
    int rem=0;
    if(aLen>bLen)rem=aLen-bLen;
    else rem=bLen-aLen;

    cout<<rem+ans<<endl;
}