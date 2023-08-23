#include<bits/stdc++.h>
using namespace std;
 
#define mh                    main
#define IOS                   ios_base::sync_with_stdio(0);cin.tie(0)
 
#define F(i, a, b)            for(int i=a; i<b; i++)
#define B(i, b, a)            for(int i=b; i>=a; i--)
 
#define D                     double
#define LL                    long long int
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
 
template<typename T>inline T Gcd(T a,T b){if(a<0)return Gcd(-a,b);if(b<0)return Gcd(a,-b);return (b==0)?a:Gcd(b,a%b);}
template<typename T>inline T Lcm(T a,T b) {if(a<0)return Lcm(-a,b);if(b<0)return Lcm(a,-b);return a*(b/Gcd(a,b));}
template<typename T>inline T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return sq(POW(B,P/2));}
template<typename T>inline T Bigmod(T base, T power, T MOD){T ret=1;while(power){if(power & 1)ret=(ret*base)%MOD;base=(base*base)%MOD;power>>=1;}return ret;}
template<typename T>inline T ModInverse(T number, T MOD){return Bigmod(number, MOD-2, MOD);}
 
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'|ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
bool isConst(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}
///****************************************************************************///
 
typedef pair<int, int> pii;
typedef vector< pii > vii;
typedef vector<int> vi;
const int INF = (1<<30);
 
int mh()
{
   
 
   
    return 0;
}