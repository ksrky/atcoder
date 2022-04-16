#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const ll mod = 998244353;
const ll INF = 1 << 30;

int main() {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));
        dp[0][0] = 1;
        rep(i, n) {
                rep(j, k) {
                        for (int l = 1; l <= m; l++) {
                                if (j + l > k)
                                        continue;
                                dp[i + 1][j + l] += dp[i][j];
                                dp[i + 1][j + l] %= mod;
                        }
                }
        }

        ll ans = 0;
        rep(i, k + 1) {
                ans += dp[n][i];
                ans %= mod;
        }
        cout << ans << endl;
}
