#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        ll k, x;
        cin >> n >> k >> x;
        vector<ll> a(n);
        ll cnt = 0, sum = 0;
        rep(i, n) {
                cin >> a[i];
                cnt += a[i] / x;
                sum += a[i];
                a[i] %= x;
        }
        if (cnt >= k) {
                cout << sum - k * x << endl;
                return 0;
        }
        sort(a.begin(), a.end(), greater<int>());
        ll rest = 0;
        rep(i, min(int(k - cnt), n)) rest += a[i];
        cout << sum - cnt * x - rest << endl;
}
