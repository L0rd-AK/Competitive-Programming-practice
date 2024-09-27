#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl

const int N = 1e5 + 10;
int leader[N];
int group_size[N];

class Edge {
public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool comp(Edge a, Edge b) {
    return a.w < b.w;
}

void dsu_init(int n) {
    for (int i = 1; i <= n; i++) {
        leader[i] = -1;
        group_size[i] = 1;
    }
}

int Find(int node) {
    if (leader[node] == -1)
        return node;
    return leader[node] = Find(leader[node]);
}

void Union(int x, int y) {
    int leaderA = Find(x);
    int leaderB = Find(y);

    if (leaderA != leaderB) {
        if (group_size[leaderA] > group_size[leaderB]) {
            leader[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        } else {
            leader[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
}

void AKG() {
    int n, m;
    cin >> n >> m;

    dsu_init(n);
    vector<Edge> EdgeList;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        EdgeList.push_back(Edge(u, v, w));
    }

    sort(EdgeList.begin(), EdgeList.end(), comp);

    long long cost = 0;
    int edge_lagbe = 0;

    for (Edge ed : EdgeList) {
        int u_er_leader = Find(ed.u);
        int v_er_leader = Find(ed.v);

        if (u_er_leader != v_er_leader) {
            Union(ed.u, ed.v);
            cost += ed.w;
            edge_lagbe++;
        }
    }

    if (edge_lagbe == n - 1) {
        cout << e-edge_lagbe << " " << cost << endl;
    } else {
        cout << "Not Possible" << endl;
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
