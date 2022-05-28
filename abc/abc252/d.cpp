#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        cin >> n;
        vector<int> a(n), cnt(200005, 0);
        rep(i, n) {
                cin >> a[i];
                cnt[a[i]]++;
        }
        vector<ll> v;
        rep(i, 200005) {
                if (cnt[i] == 0) continue;
                v.push_back((ll) cnt[i]);
        }

        ll sum = 0, sum3 = 0;
        rep(i, v.size()) {
                sum += v[i];
                sum3 += v[i] * v[i] * v[i];
        }
        ll ans = sum * sum * sum - sum3;
        rep(i, v.size()) {
                ans -= 3 * v[i] * v[i] * (sum - v[i]);
        }
        ans /= 6;
        cout << ans << endl;
}
