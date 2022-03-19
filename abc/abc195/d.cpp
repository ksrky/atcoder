#include<bits/stdc++.h>

using namespace std;

int main() {
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> w(n), v(n), x(m);
        for (int i = 0; i < n; i++) cin >> w[i] >> v[i];

        for (int i = 0; i < m; i++) cin >> x[i];

        for (int _ = 0; _ < q; ++_) {
                int l, r;
                cin >> l >> r;
                --l;
                --r;

                vector<int> y;
                for (int i = 0; i < m; i++) {
                        if (i < l || r < i) y.push_back(x[i]);
                }
                sort(y.begin(), y.end());

                int ans = 0;
                vector<bool> used(n, 0);
                for (auto ny:y) {
                        pair<int, int> best(-1, -1);
                        for (int i = 0; i < n; i++) {
                                if (used[i]) continue;
                                if (w[i] > ny) continue;
                                best = max(best, pair<int, int>(v[i], i));
                        }

                        int i = best.second;
                        if (i != -1) {
                                used[i] = 1;
                                ans += v[i];
                        }
                }

                cout << ans << endl;
        }
        return 0;
}
