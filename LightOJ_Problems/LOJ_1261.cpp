#include<bits/stdc++.h>
using namespace std;
 
#define mh                    main
#define IOS                   ios_base::sync_with_stdio(0);cin.tie(0)
 
#define F(i, a, b)            for(int i=a; i<b; i++)
#define B(i, b, a)            for(int i=b; i>=a; i--)
 
#define D                     double
#define ll                    long long int
#define ULL                   unsigned LL
 
#define Max(a,b)              ((a>b)?a:b)
#define Min(a,b)              ((a>b)?b:a)
#define _Max(a, b, c)         Max(a, Max(b, c))
#define _Min(a, b, c)         Min(a, Min(b, c))
 
#define all(a)                a.begin(), a.end()
#define srt(a, n)             sort(a, a+n)
 
#define chr                   getchar()
#define PI                    acos(-1)
#define sq(n)                 (n*n)
#define Bitcnt(a)             __builtin_popcountll(a)
#define mem(x, val)           memset(x, val, sizeof(x))
#define pb                    push_back
#define mp                    make_pair
#define sc                    scanf
#define pf                    printf
#define sz                    size
#define ft                    front
#define ps                    push
#define ff                    first
#define ss                    second
#define em                    empty
  
typedef pair<int, int> pii;
typedef vector< pii > vii;
typedef vector<int> vi;
const int INF = (1<<30);
 
int mh()
{
    int t, index=0;
    cin>>t;
    while(t--)
    {
        int n, m, k, ob;
        cin>>n>>m>>k;
        vector<int> v[35];
        bool chk[35];
        mem(chk, 0);
 
        F(i, 0, n)
        {
            F(j, 0, k)
            {
                cin>>ob;
                v[i].pb(ob);
            }
        }
 
        int p;
        cin>>p;
        F(i, 0, p) {
            cin>>ob;
            chk[ob]=1;
        }
        int c=0;
        F(i, 0, n)
        {
            F(j, 0, k)
            {
                if(v[i][j]>0 && chk[v[i][j]])
                {
                    c++;break;
                }
                else if(v[i][j]<0 && chk[-v[i][j]]==0)
                {
                    c++;break;
                }
            }
        }
        if(c==n) pf("Case %d: Yes\n", ++index);
        else pf("Case %d: No\n", ++index);
    }
    return 0;
}