#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const int INF = 1 << 30;

int main() {
        int h, w;
        cin >> h >> w;
        vector<vector<char>> c(h, vector<char>(w));
        rep(i, h) {
                rep(j, w) {
                        cin >> c[i][j];
                }
        }
        vector<vector<bool>> dp(h, vector<bool>(w, false));
        if (c[0][0] == '.') dp[0][0] = true;
        rep(k, h + w - 1) {
                for (int j = 0; j <= k; j++) {
                        int i = k - j;
                        if (i >= h || j >= w) continue;
                        if (c[i][j] == '#') continue;
                        else {
                                if (i > 0) {
                                        dp[i][j] = dp[i][j] | dp[i - 1][j];
                                }
                                if (j > 0) {
                                        dp[i][j] = dp[i][j] | dp[i][j - 1];
                                }
                        }
                }
        }

        int ans = 0;
        rep(i, h) {
                rep(j, w) {
                        if (dp[i][j]) ans = max(ans, i + j + 1);
                }
        }
        cout << ans << endl;
}
