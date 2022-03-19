#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, int>> b;
    rep(i, n) {
        ll a;
        cin >> a;
        b.emplace_back(a, i);
    }
    sort(b.begin(), b.end());

    vector<ll> ans(n);
    rep(i, n) {
        ans[b[i].second] = k / n;
        if (k % n > i) ans[b[i].second]++;
    }

    rep(i, n) {
        cout << ans[i] << endl;
    }
}