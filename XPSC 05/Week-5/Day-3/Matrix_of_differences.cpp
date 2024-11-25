#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
   int n,up,down,sr,sc,er,ec,c=0;
        cin>>n;int a[n][n];
        up=1;down=n*n;sr=0,sc=0,er=n-1,ec=n-1;
        int x;
        if(n%2==0) x=n/2;
        else x=(n/2)+1;
        while(x--)
        {
            for(int i=sc;i<=ec;i++)
            {
                if(c%2==0)
                {
                    a[sr][i]=down;
                    down--;c++;
                }
                else
                {
                    a[sr][i]=up;
                    up++;c++;
                }
            }
            for(int i=sr+1;i<=er;i++)
            {
                if(c%2==0)
                {
                    
                     a[i][ec]=down;
                    down--;c++;
                }
                else
                {
                   a[i][ec]=up;
                    up++;c++;
                }
            }
            for(int i=ec-1;i>=sc;i--)
            {
                if(c%2==0)
                {
                   a[er][i]=down;
                    down--;c++;
                }
                else
                {
                    
                    a[er][i]=up;
                    up++;c++;
                }
            }
            for(int i=er-1;i>=sr+1;i--)
            {
                if(c%2==0)
                {
                    a[i][sc]=down;
                    down--;c++;
                }
                else
                {
                    a[i][sc]=up;
                    up++;c++;
                }
            }
            sr++,er--,sc++,ec--;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
