#include <bits/stdc++.h>

using namespace std;

int main() {
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i] >> b[i];

        vector<vector<bool>> dp(n + 1, vector<bool>(x + 1, false));
        dp[0][0] = true;
        for (int i = 1; i <= n; i++) {
                for (int j = 0; j <= x; j++) {
                        if (j - a[i - 1] >= 0 && j - b[i - 1] >= 0)
                                dp[i][j] = dp[i - 1][j - a[i - 1]] | dp[i - 1][j - b[i - 1]];
                        else if (j - a[i - 1] >= 0)
                                dp[i][j] = dp[i - 1][j - a[i - 1]];
                        else if (j - b[i - 1] >= 0)
                                dp[i][j] = dp[i - 1][j - b[i - 1]];
                }
        }
        if (dp[n][x])
                cout << "Yes" << endl;
        else
                cout << "No" << endl;
}
