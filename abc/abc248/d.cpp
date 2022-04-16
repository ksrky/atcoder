#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const int INF = 1 << 30;

int main() {
        int n, q;
        cin >> n;
        vector<vector<int>> memo(n + 1);
        for (int i = 1; i <= n; i++) memo[i].push_back(0);
        rep(i, n) {
                        int a;
                        cin >> a;
                        memo[a].emplace_back(i + 1);
                }
        cin >> q;
        rep(i, q) {
                int l, r, x;
                cin >> l >> r >> x;
                auto left = lower_bound(memo[x].begin(), memo[x].end(), l);
                auto right = upper_bound(memo[x].begin(), memo[x].end(), r);
                cout << distance(left, right) << endl;
        }
}
