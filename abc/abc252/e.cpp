#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const ll INF = 1e18;

struct edge {
        int to;
        ll cost;
};

int main() {
        int n, m;
        cin >> n >> m;
        vector<priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>>> que(n);
        rep(i, m) {
                int a, b;
                ll c;
                cin >> a >> b >> c;
                a--, b--;
                que[a].emplace(c, b);
                que[b].emplace(c, a);
        }

        int cur = 0;
        vector<ll> dp(n, INF);
        vector<bool> used(n, false);
        vector<int> ans;
        for (int i = 0; i < n - 1; i++) {
                bool flag = true;
                while (!que[cur].empty()) {
                        auto v = que[cur].top();
                        if (used[v.second]) continue;
                        que[cur].pop();
                        dp[v.second] = min(dp[v.second], dp[cur] + v.first);
                        if (flag) {
                                ans.push_back(v.second);
                                cur = v.second;
                                used[v.second] = true;
                                flag = false;
                        }
                }
        }

        rep(i, n - 1) {
                cout << ans[i] + 1;
                if (i != n - 2) cout << ' ';
        }
        cout << endl;
}
