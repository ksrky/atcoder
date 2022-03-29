#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const ll mod = 998244353;

int get_digit(ll n) {
        int res = 0;
        while (n > 0) {
                res++;
                n /= 10;
        }
        return res;
}

int main() { // 6*10e15まで一致
        ll n;
        cin >> n;
        int d = get_digit(n);
        ll ans = 0;
        for (int i = d - 1; i >= 0; i--) {
                ll m = n - pow(10, i) + 1;
                ll res;
                if (m % 2 == 0) res = ((m / 2) % mod) * ((m + 1) % mod);
                else res = (((m + 1) / 2) % mod) * (m % mod);
                ans += (res % mod);
                ans %= mod;
                n = pow(10, i) - 1;
        }
        cout << ans << endl;
}
