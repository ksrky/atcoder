#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll mod = 998244353;

int main() {
        int n, m, k, s, t, x;
        cin >> n >> m >> k >> s >> t >> x;
        s--, t--, x--;
        vector<vector<int>> G(n);
        for (int i = 0; i < m; i++) {
                int u, v;
                cin >> u >> v;
                u--, v--;
                G[u].push_back(v);
                G[v].push_back(u);
        }

        ll dp[2005][2005][2] = {0};
        dp[0][s][0] = 1;

        for (int i = 0; i < k; i++) {
                for (int j = 0; j < n; j++) {
                        for (auto e: G[j]) {
                                if (j != x) {
                                        dp[i + 1][j][0] += dp[i][e][0];
                                        dp[i + 1][j][1] += dp[i][e][1];
                                } else {
                                        dp[i + 1][j][1] += dp[i][e][0];
                                        dp[i + 1][j][0] += dp[i][e][1];
                                }
                                dp[i + 1][j][0] %= mod;
                                dp[i + 1][j][1] %= mod;
                        }
                }
        }

        cout << dp[k][t][0] << endl;
}
