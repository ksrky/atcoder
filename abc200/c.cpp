#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;


int main() {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<ll> cnt(200, 0);
        rep(i, n) {
                cin >> a[i];
                cnt[a[i] % 200]++;
        }

        ll ans = 0;
        rep(i, 200) {
                ans += cnt[i] * (cnt[i] - 1LL) / 2LL;
        }
        cout << ans << endl;
}