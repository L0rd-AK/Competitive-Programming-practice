#include <bits/stdc++.h>
using namespace std;

#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define ll long long int
#define INF LLONG_MAX 

const int N = 1e3 + 5;
ll dis[N];

class Edge {
public:
    int u, v;
    ll w;
    Edge(int u, int v, ll w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

void AKG(){
    int n, e;
    cin >> n >> e;
    
    vector<Edge> EdgeList;

    for (int i = 0; i < e; i++) {
        int u, v;
        ll w;
        cin >> u >> v >> w;
        EdgeList.push_back(Edge(u, v, w));
    }

    int s;
    cin >> s;

    f(i,0,N)dis[i]=INF;
    dis[s] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (auto ed : EdgeList) {
            int u = ed.u;
            int v = ed.v;
            ll w = ed.w;
            if (dis[u] < INF && dis[u] + w < dis[v]) {
                dis[v] = dis[u] + w;
            }
        }
    }

    bool cycle = false;
    for (auto ed : EdgeList) {
        int u = ed.u;
        int v = ed.v;
        ll w = ed.w;
        if (dis[u] < INF && dis[u] + w < dis[v]) {
            cycle = true;
            break;
        }
    }

    if (cycle) {
        cout << "Negative Cycle Detected" << endl;
        return;
    }


    int T;
    cin >> T;
    while (T--) {
        int d;
        cin >> d;
        if (dis[d] == INF)
            cout << "Not Possible" << endl;
        else
            cout << dis[d] << endl;
    }
}

int main() {
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
