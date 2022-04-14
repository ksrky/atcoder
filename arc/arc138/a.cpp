#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x: a) cin >> x;
        vector<pair<int, int>> v;
        for (int i = k; i < n; i++) v.emplace_back(a[i], i);
        sort(v.begin(), v.end());
        int ans = 1 << 30;
        rep(i, k) {
                auto it = lower_bound(v.begin(), v.end(), a[i]);
                ans = min(ans, it->second - i);
        }
        cout << ans << endl;
}
