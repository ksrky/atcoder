#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll MOD = 998244353;
const ll INV2 = 499122177;

int get_digit(ll n) {
        int res = 0;
        while (n > 0) {
                res++;
                n /= 10;
        }
        return res;
}

int main() {
        ll n;
        cin >> n;
        int d = get_digit(n);
        ll ans = 0;
        for (int i = d - 1; i >= 0; i--) {
                ll m = n - pow(10, i) + 1;
                ll res = m;
                res *= (m + 1);
                res %= MOD;
                res *= INV2;
                res %= MOD;
                ans += res;
                ans %= MOD;
                n = pow(10, i) - 1;
        }
        cout << ans << endl;
}
