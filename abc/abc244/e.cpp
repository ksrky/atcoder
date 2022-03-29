#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll mod = 998244353;

int main() {
        int n, m, k, s, t, x;
        cin >> n >> m >> k >> s >> t >> x;
        s--, t--, x--;
        vector<pair<int, int>> es(m);
        for (auto&[u, v]: es) {
                cin >> u >> v;
                u--, v--;
        }
        vector<vector<vector<ll>>> dp(k + 1, vector<vector<ll>>(n, vector<ll>(2, 0)));
        dp[0][s][0] = 1;
        for (int i = 0; i < k; i++) {
                for (auto[u, v]: es) {
                        for (int j = 0; j < 2; j++) {
                                dp[i + 1][u][j ^ (u == x)] += dp[i][v][j];
                                dp[i + 1][v][j ^ (v == x)] += dp[i][u][j];
                                dp[i + 1][u][j ^ (u == x)] %= mod;
                                dp[i + 1][v][j ^ (v == x)] %= mod;
                        }
                }
        }

        cout << dp[k][t][0] << endl;
}
