#include <bits/stdc++.h>

using namespace std;

int main() {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (auto &x: a) cin >> x;
        for (auto &x: b) cin >> x;

        vector<vector<bool>> dp(n, vector<bool>(2, false));
        dp[0][0] = true, dp[0][1] = true;
        for (int i = 0; i < n - 1; i++) {
                bool aa = abs(a[i + 1] - a[i]) <= k;
                bool ab = abs(a[i + 1] - b[i]) <= k;
                bool ba = abs(b[i + 1] - a[i]) <= k;
                bool bb = abs(b[i + 1] - b[i]) <= k;
                dp[i + 1][0] = (dp[i][0] & aa) | (dp[i][1] & ab);
                dp[i + 1][1] = (dp[i][0] & ba) | (dp[i][1] & bb);
        }
        if (dp[n-1][0] || dp[n-1][1]) cout << "Yes" << endl;
        else cout << "No" << endl;
}
