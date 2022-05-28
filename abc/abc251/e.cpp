#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const ll INF = 1e18;

int main() {
        int n;
        cin >> n;
        vector<ll> a(n);
        rep(i, n) cin >> a[i];
        ll ans = INF;
        vector<vector<ll>> dp(n, vector<ll>(2, 0));
        dp[0][0] = 0, dp[0][1] = INF;
        rep(i, n - 1) {
                dp[i + 1][0] = dp[i][1];
                dp[i + 1][1] = min(dp[i][0], dp[i][1]) + a[i + 1];
        }
        ans = min(ans, dp[n - 1][1]);

        dp[0][0] = INF, dp[0][1] = a[0];
        rep(i, n - 1) {
                dp[i + 1][0] = dp[i][1];
                dp[i + 1][1] = min(dp[i][0], dp[i][1]) + a[i + 1];
        }

        ans = min(ans, min(dp[n - 1][0], dp[n - 1][1]));
        cout << ans << endl;
}
