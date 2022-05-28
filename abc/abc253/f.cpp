#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const ll mod = 998244353;

int main() {
        int n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(m + 1, 0);
        vector<ll> r(m + 1, 0);
        rep(i, m) {
                a[i + 1] = 1;
                r[i + 1] = (ll) i + 1;
        }

        vector<int> v(m + 1, 0);
        for (int i = 1; i <= m; i++) {
                for (int j = 1; j <= m; j++) {
                        if (j >= i + k || j <= i - k) v[i]++;
                }
        }

        ll sum = r[m];
        rep(i, n - 1) {
                for (int j = 1; j <= m; j++) {
                        a[j] = (sum - r[min(j + k - 1, m)] + mod) + r[max(j - k, 0)];
                        a[j] %= mod;
                }
                for (int j = 1; j <= m; j++) r[j] = (r[j - 1] + a[j]) % mod;
                sum = r[m];
        }

        ll ans = 0;
        rep(i, m) ans = (ans + a[i + 1]) % mod;
        cout << ans << endl;
}
