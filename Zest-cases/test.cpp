#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
	int t;
	cin>>t;cin.ignore();
	while(t--){
	    string s;
	    cin>>s;
	    int v=0,c=0;
	    for(int i=0;i<8;i++){
            if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U')continue;
            else c++;
        }
	    if(s[1]=='A' or s[1]=='E' or s[1]=='I' or s[1]=='O' or s[1]=='U')v++;
	    if(s[3]=='A' or s[3]=='E' or s[3]=='I' or s[3]=='O' or s[3]=='U')v++;
	    if(s[5]=='A' or s[5]=='E' or s[5]=='I' or s[5]=='O' or s[5]=='U')v++;

	    if(v==3 and c==5)cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
