#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, m, q;
        cin >> n >> m;
        vector<int> a(m), b(m);
        vector<vector<int>> G(n);
        vector<vector<set<int>>> S(n, vector<set<int>>(4));
        rep(i, n) S[i][0].insert(i);
        rep(i, m) {
                cin >> a[i] >> b[i];
                a[i]--, b[i]--;
                S[a[i]][1].insert(b[i]);
                S[b[i]][1].insert(a[i]);
                G[a[i]].push_back(b[i]);
                G[b[i]].push_back(a[i]);
        }
        rep(i, n) {
                for (auto &v: S[i][1]) {
                        for (auto &w: G[v]) {
                                S[i][2].insert(w);
                        }
                }
        }
        rep(i, n) {
                for (auto &v: S[i][2]) {
                        for (auto &w: G[v]) {
                                S[i][3].insert(w);
                        }
                }
        }
        cin >> q;
        rep(i, q) {
                int x, k;
                cin >> x >> k;
                x--;
                set<int> st;
                rep(j, k + 1) {
                        for (auto v: S[x][j]) {
                                st.insert(v + 1);
                        }
                }
                int ans = 0;
                for (auto v: st) ans += v;
                cout << ans << endl;
        }
}
