#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
int a;
int memo[1000005] = {0};

int rotate(int n) {
        if (n % 10 == 0) return INF;
        string s = to_string(n);
        s = s.substr(1, s.size() - 1) + s[0];
        return stoi(s);
}

int calc(int n, int r) {
        if (n == 1) return 0;
        if (memo[n] != 0) return memo[n];
        bool b = r + 1 == to_string(n).size();
        if (b && n % a == 0) return memo[n] = calc(n / a, 0) + 1;
        if (!b && n % a == 0) return memo[n] = min(calc(n / a, 0), calc(rotate(n), r + 1)) + 1;
        if (!b) return memo[n] = calc(rotate(n), r + 1) + 1;
        return memo[n] = INF;
}

int main() {
        int n;
        cin >> a >> n;
        int dp[1000000];
        for (int i = 0; i < 1000000; i++) dp[i] = INF;
        dp[1] = 0;
        for (int i = 1; i < pow(10, to_string(n).size()); i++) {
                dp[a * i] = min(dp[a * i], dp[i] + 1);
                dp[rotate(i)] = min(dp[rotate(i)], dp[i] + 1);
        }
        cout << dp[n] << endl;
        //int ans = calc(n, false);
        //if (ans < INF) cout << ans << endl;
        //else cout << -1 << endl;
}
