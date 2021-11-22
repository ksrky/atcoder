#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
        const ll MOD = 1000000007;
        int n;
        cin >> n;
        vector<ll> a(n), aj(n);
        for (int i = 0; i < n; ++i) cin >> a[i];


        for (int i = n - 1; i >= 0; --i) {
                if (i == n - 1) aj[i] = a[i];
                else aj[i] = aj[i + 1] + a[i];
                aj[i] %= MOD;
        }

        ll ans = 0;
        for (int i = 0; i < n - 1; ++i) {
                ans += a[i] * aj[i + 1];
                ans %= MOD;
        }
        cout << ans << endl;
}