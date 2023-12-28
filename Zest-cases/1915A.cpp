#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
	int t;
	cin>>t;cin.ignore();
	while(t--){
	    int x,y,z;
		cin>>x>>y>>z;
		if(x==y)cout<<z<<'\n';
		else if(x==z)cout<<y<<'\n';
		else if(y==x)cout<<z<<'\n';
		else if(y==z)cout<<x<<'\n';
		else if(z==x)cout<<y<<'\n';
		else if(z==y)cout<<x<<'\n';
	}
	return 0;
}
