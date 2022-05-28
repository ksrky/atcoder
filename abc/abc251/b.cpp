#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, w;
        cin >> n >> w;
        vector<int> a(n), cnt(w + 1, 0);
        rep(i, n) {
                cin >> a[i];
                if (a[i] <= w) cnt[a[i]] = 1;
        }

        rep(i, n) {
                rep(j, n) {
                        if (i == j) continue;
                        if (a[i] + a[j] <= w) cnt[a[i] + a[j]] = 1;
                }
        }

        rep(i, n) {
                rep(j, n) {
                        if (i == j) continue;
                        rep(k, n) {
                                if (i == k || j == k) continue;
                                if (a[i] + a[j] + a[k] <= w) cnt[a[i] + a[j] + a[k]] = 1;
                        }
                }
        }

        int ans = 0;
        for (int i = 1; i <= w; i++) {
                ans += cnt[i];
        }
        cout << ans << endl;
}
