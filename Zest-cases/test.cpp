#include <bits/stdc++.h>
using namespace std;

// Reads two integers and prints their sum
bool isSorted(int n, vector<int> &a){

    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1])continue;
        else return false;
    }
    
    return true;
}

int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
    int t,idx=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(2*n,0);
        for(int i=0;i<2*n;i++)cin>>a[i];
        if(isSorted(2*n,a)){
            printf("Case %d: %d\n",idx++,0);
        }
        else{
            printf("Case %d: %d\n",idx++,2);
            cout<<1<<" "<<n<<endl;
            cout<<n<<" "<<n*2<<endl;
        }
    }
    return 0;
}
