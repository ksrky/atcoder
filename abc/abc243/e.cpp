#include <bits/stdc++.h>

using namespace std;

const int INF = INT_MAX;

vector<vector<int>> warshall_floyd(int V, vector<vector<int>> &cost) {
        vector<vector<int>> d = cost;
        vector<vector<int>> path;

        for (int k = 0; k < V; k++) {
                for (int i = 0; i < V; i++) {
                        for (int j = 0; j < V; j++) {
                                if (d[i][k] == INF || d[k][j] == INF) d[i][j] = d[i][j];
                                else d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
                        }
                }
        }
        return d;
}

int main() {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> ab;
        vector<vector<int>> cost(n, vector<int>(n, INF));
        for (int i = 0; i < n; i++) cost[i][i] = 0;
        for (int i = 0; i < m; i++) {
                int a, b, c;
                cin >> a >> b >> c;
                ab.emplace_back(a - 1, b - 1);
                cost[a - 1][b - 1] = c;
        }

        vector<vector<int>> d = warshall_floyd(n, cost);
        for (int i = 0; i < m; i++) {
                int a = ab[i].first, b = ab[i].second;
                for (int j = 0; j < n; j++) {
                        if (d[a][j] + cost[a][b] < d[b][j]) ans = false;
                        if (d[b][j] + cost[a][b] < d[a][j]) ans = false;
                }
        }
}
