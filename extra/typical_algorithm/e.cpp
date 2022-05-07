#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const int INF = 1e9;

struct edge {
        int to, cost;
};

vector<vector<ll>> warshall_floyd(int V, vector<vector<ll>> &cost) {
        vector<vector<ll>> d = cost;

        for (int k = 0; k < V; k++) {
                for (int i = 0; i < V; i++) {
                        for (int j = 0; j < V; j++) {
                                if (d[i][k] != INF && d[k][j] != INF) {
                                        d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                                }
                        }
                }
        }

        return d;
}

int main() {
        int n, m;
        cin >> n >> m;
        vector<vector<ll>> cost(n, vector<ll>(n, INF));
        rep(i, n) cost[i][i] = 0;
        rep(i, m) {
                int u, v;
                ll c;
                cin >> u >> v >> c;
                cost[u][v] = c;
        }

        vector<vector<ll>> paths = warshall_floyd(n, cost);
        ll ans = 0;
        rep(i, n) {
                rep(j, n) {
                        ans += paths[i][j];
                }
        }
        cout << ans << endl;
}
