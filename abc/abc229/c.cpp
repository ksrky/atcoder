#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, w;
        cin >> n >> w;
        vector<pair<ll, int>> abs;
        rep(i, n) {
                ll a;
                int b;
                cin >> a >> b;
                abs.emplace_back(a, b);
        }
        sort(abs.begin(), abs.end(), greater<>());
        ll ans = 0;
        for (auto ab: abs) {
                if (w <= 0) break;
                ans += ab.first * min(ab.second, w);
                w -= min(ab.second, w);
        }
        cout << ans << endl;
}
