#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        ll n;
        cin >> n;
        vector<ll> v;
        ll ans = 0, mid = sqrt(n - 1) + 1;
        for (ll i = 1; i <= mid; i++) {
                ans += n / i;
                v.push_back(n / i);
        }
        reverse(v.begin(), v.end());
        ll cur = mid + 1;
        auto it = lower_bound(v.begin(), v.end(), cur);
        int idx = distance(it, v.end()) - 1;
        reverse(v.begin(), v.end());
        while (idx >= 0) {
                ans += (idx + 1) * (v[idx] - cur + 1);
                cur = v[idx] + 1;
                idx--;
        }
        cout << ans << endl;
}
