#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

const int N = 1e5 + 10;
int parent[N];
ll group_size[N];

class Edge {
public:
    ll u, v, w;
    Edge(ll u, ll v, ll w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

void dsu_initialize(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node) {
    if (parent[node] == -1)
        return node;
    return parent[node] = dsu_find(parent[node]);
}

void dsu_union_by_size(int node1, int node2) {
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (leaderA != leaderB) {
        if (group_size[leaderA] > group_size[leaderB]) {
            parent[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        } else {
            parent[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
}

void AKG() {
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edgeList;

    while(e--){
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back(Edge(u, v, w));
    }

    sort(edgeList.begin(), edgeList.end(), cmp);

    ll totalCost = 0;

    for (Edge ed : edgeList) {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);

        if (leaderU != leaderV) {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
        }
    }

    int z = 0;
    for (int i = 1; i <= n; i++) {
        if (parent[i] == -1) z++;
    }

    if (z > 1) {
        prnt(-1);
    } else {
        cout << totalCost << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
