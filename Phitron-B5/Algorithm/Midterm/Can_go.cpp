#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define prnt(x) cout << x << endl

const int N = 1e3 + 5;
#define INF LLONG_MAX
vector<pair<int, ll>> v[N];
ll dis[N];

class cmp {
public:
    bool operator()(pair<int, ll> a, pair<int, ll> b) {
        return a.second > b.second; 
    }
};

void dijkstra(int src) {
    priority_queue<pair<int, ll>, vector<pair<int, ll>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty()) {
        pair<int, ll> parent = pq.top();
        pq.pop();
        int node = parent.first;
        ll cost = parent.second; 

        for (pair<int, ll> child : v[node]) { 
            int childNode = child.first;
            ll childCost = child.second;
            if (cost + childCost < dis[childNode]) {
                // path relax
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

void AKG() {
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < N; i++) {
        dis[i] = INF;
    }

    
    while (e--) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    int s;
    cin >> s;
    dijkstra(s);

    int q;
    cin >> q;
    while (q--) {
        int x;
        ll y; 
        cin >> x >> y;
        if (dis[x] == INF) no;
        else if (dis[x] <= y) yes;
        else no;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin>>t;
    while (t--) {
        AKG();
    }

    return 0;
}
