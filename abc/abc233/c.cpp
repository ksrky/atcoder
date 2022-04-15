#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        ll x;
        cin >> n >> x;
        vector<vector<ll>> a(n);
        rep(i, n) {
                int l;
                cin >> l;
                rep(j, l) {
                        ll in;
                        cin >> in;
                        a[i].push_back(in);
                }
        }

        vector<ll> res = {1};
        rep(i, n) {
                vector<ll> v;
                for (auto r : res) {
                        for (auto b : a[i]) {
                                if (r * b <= x)
                                        v.push_back(r * b);
                        }
                }
                res = v;
        }

        int cnt = 0;
        for (auto r : res) {
                if (r == x)
                        cnt++;
        }
        cout << cnt << endl;
}
