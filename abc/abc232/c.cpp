#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> ab(n + 1), cd(n + 1);
        rep(i, m) {
                int a, b;
                cin >> a >> b;
                a--, b--;
                ab[a].push_back(b);
                ab[b].push_back(a);
        }
        rep(i, m) {
                int c, d;
                cin >> c >> d;
                c--, d--;
                cd[c].push_back(d);
                cd[d].push_back(c);
        }

        vector<int> v;
        rep(i, n) v.push_back(i);
        bool ans = false;
        do {
                bool flag = true;
                rep(i, n) {
                        for (auto w: ab[i]) {
                                bool ok = false;
                                for (auto u: cd[v[i]]) {
                                        if (u == v[w]) ok = true;
                                }
                                if(!ok) flag = false;
                        }
                }
                if (flag) ans = true;
        } while (next_permutation(v.begin(), v.end()));

        if (ans) cout << "Yes" << endl;
        else
                cout << "No" << endl;
}
