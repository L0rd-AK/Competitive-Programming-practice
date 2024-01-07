#include <iostream>
using namespace std;
int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
	int t;
	cin>>t;cin.ignore();
	while(t--){
	    char c[3][3];
		int a=0,b=0,cc=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>c[i][j];
				if(c[i][j]=='A')a++;
				if(c[i][j]=='B')b++;
				if(c[i][j]=='C')cc++;
			}
		}
		if(a<3)cout<<"A\n";
		if(b<3)cout<<"B\n";
		if(cc<3)cout<<"C\n";
		
	}
	return 0;
}
