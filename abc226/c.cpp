#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
#define ll long long

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<ll> t(n);
        vector<vector<int>> e(n);
        vector<int> used(n, false);
        rep(i, n) {
                int k;
                cin >> t[i] >> k;
                rep(j, k) {
                        int x;
                        cin >> x;
                        e[i].push_back(x - 1);
                }
        }

        ll ans = 0;
        used[n - 1] = true;
        for (int i = n - 1; i >= 0; i--) {
                if (used[i]) {
                        ans += t[i];
                        for (auto x: e[i]) {
                                used[x] = true;
                        }
                }
        }
        cout << ans << endl;
}