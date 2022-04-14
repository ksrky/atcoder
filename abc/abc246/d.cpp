#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {
        ll n;
        cin >> n;
        ll ans = 1e19;
        ll b = cbrt(n);
        if (b * b * b < n) b++;
        ans = b * b * b;
        b--;
        for (ll i = 1; i <= 1000000; i++) {
                ll x = i * i * i + i * i * b + i * b * b + b * b * b;
                if (x >= n) {
                        ans = min(ans, x);
                        b--;
                }
        }
        cout << ans << endl;
}
