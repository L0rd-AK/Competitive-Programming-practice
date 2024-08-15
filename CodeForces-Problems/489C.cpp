#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl

void AKG(){
    int m,s;
    cin>>m>>s;
    if(s==0 && m==1){
        prnt("0 0");
        return;
    }
    if(s==0 && m>1 || m==1 && s>9){
        prnt("-1 -1");
        return;
    }
    if(m==1 && s<=9){
        cout<<s<<" "<<s<<endl;
        return;
    }
    int rem=s%9;
    if(m*9 < s){
        prnt("-1 -1");
        return;
    }
    int x=s-rem;
    int cnt=x/9;
    string a,b;
    while(cnt--)a+='9';
    int zero=0;
    if(rem)zero=m-a.length()-1;
    else zero=m-a.length();
    // prnt(zero);
    if(rem)a+=(char)(rem+'0');
    
    if(zero>0){
        // prnt("fuck");
        while(zero--)a+='0';
    }
    b=a;
    reverse(b.begin(),b.end());
    int idx=0;
    for(int i=0;i<b.length();i++){
        if(b[i]!='0'){idx=i;break;}
    }
    b[0]++;b[idx]--;
    cout<<b<<" "<<a<<endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    auto begin = std::chrono::high_resolution_clock::now();
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    // cin>>t;
    while(t--){
        AKG();
    }
#ifndef ONLINE_JUDGE
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
#endif
    return 0;
}
