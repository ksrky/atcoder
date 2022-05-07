#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const ll INF = 1e18;

struct edge {
        int to;
        ll cost;
};

ll dijkstra(int V, vector<vector<edge>> &G) {
        using P = pair<ll, int>;
        priority_queue<P, vector<P>, greater<>> que;
        vector<ll> d(V, INF);
        d[0] = 0;
        que.push(P(0, 0));

        while (!que.empty()) {
                P p = que.top();
                que.pop();
                int v = p.second;
                if (d[v] < p.first) continue;
                for (edge &e: G[v]) {
                        if (d[e.to] > d[v] + e.cost) {
                                d[e.to] = d[v] + e.cost;
                                que.push(P(d[e.to], e.to));
                        }
                }
        }
        return d[V - 1];
}

int main() {
        int n, m;
        cin >> n >> m;
        vector<vector<edge>> G(n);
        rep(i, m) {
                int u, v;
                ll c;
                cin >> u >> v >> c;
                G[u].push_back({v, c});
        }
        ll ans = dijkstra(n, G);
        cout << ans << endl;
}
