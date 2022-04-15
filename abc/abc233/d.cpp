#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> sum(n + 1, 0);
        rep(i, n) {
                ll a;
                cin >> a;
                sum[i + 1] = sum[i] + a;
        }
        map<ll, ll> mp;
        ll ans = 0;
        rep(i, n) {
                mp[sum[i]]++;
                ans += mp[sum[i + 1] - k];
        }
        cout << ans << endl;
}
