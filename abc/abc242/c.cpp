#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MOD = 998244353;

int main() {
        int n;
        cin >> n;
        vector<vector<ll>> dp(n + 1, vector<ll>(10, 0));
        for (int i = 1; i <= 9; i++) dp[1][i] = 1;
        for (int i = 1; i < n; i++) {
                for (int j = 1; j <= 9; j++) {
                        dp[i + 1][j] += dp[i][j];
                        if (j >= 2) dp[i + 1][j] += dp[i][j - 1];
                        if (j <= 8) dp[i + 1][j] += dp[i][j + 1];
                        dp[i + 1][j] %= MOD;
                }
        }
        ll ans = 0;
        for (int i = 1; i <= 9; i++) ans += dp[n][i];
        cout << ans % MOD << endl;
}
