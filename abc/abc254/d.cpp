#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

ll gcd(ll x, ll y) {
        if (x % y == 0) return y;
        return gcd(y, x % y);
}

int main() {
        int n;
        cin >> n;
        vector<int> sq;
        for (int i = 1; i * i <= n; i++) {
                sq.push_back(i * i);
        }

        ll ans = n;
        rep(k, sq.size()) {
                ll i = sq[k];
                for (int l = k + 1; l < sq.size(); l++) {
                        ll j = sq[l];
                        if (i != 1 && gcd(i, j) != 1) continue;
                        ans += 2 * (n / j);
                }
        }
        cout << ans << endl;
}
