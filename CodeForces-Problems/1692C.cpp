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
     const int N = 8;
        vector<string> b(N);
        long row(0), col(0);
        for(long p = 0; p < N; p++){cin >> b[p];}
        for(long p = 1; p + 1 < N; p++){
            for(long q = 1; q + 1 < N; q++){
                if(b[p][q] != '#'){continue;}
                if(b[p + 1][q + 1] != '#'){continue;}
                if(b[p + 1][q - 1] != '#'){continue;}
                if(b[p - 1][q + 1] != '#'){continue;}
                if(b[p - 1][q - 1] != '#'){continue;}
                row = p + 1; col = q + 1;
            }
        }

        cout<<row<<" "<<col<<endl;
    
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
    cin>>t;
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
