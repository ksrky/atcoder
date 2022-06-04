
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> cnt;
        int m = 0;
        rep(i, n) {
                cin >> a[i];
                cnt[a[i]]++;
                m = max(m, a[i]);
        }

        ll ans = 0;
        for (int q = 1; q <= m; q++) {
                for (int r = 1; q * r <= m; r++) {
                        ans += (ll) cnt[q * r] * cnt[q] * cnt[r];
                }
        }
        cout << ans << endl;
}
