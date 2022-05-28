#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

class UnionFind {
public:
        vector<int> par, rnk;

        void init(int n) {
                for (int i = 0; i < n; i++) par.push_back(i);
                rnk.resize(n, 0);
        }

        int find(int x) {
                if (par[x] == x) return x;
                else return par[x] = find(par[x]);
        }

        void unite(int x, int y) {
                x = find(x);
                y = find(y);
                if (x == y) return;

                if (rnk[x] < rnk[y]) {
                        par[x] = y;
                } else {
                        par[y] = x;
                        if (rnk[x] == rnk[y]) rnk[x]++;
                }
        }

        bool same(int x, int y) {
                return find(x) == find(y);
        }
};

int main() {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> G(n);
        rep(i, m) {
                int a, b;
                cin >> a >> b;
                a--, b--;
                G[a].push_back(b);
        }

        vector<int> ans;
        ans.push_back(0);
        UnionFind UF;
        UF.init(n);

        rep(i, n - 1) {
                int v = n - i - 1, cnt = ans[i];
                cnt++;
                for (auto w: G[v]) {
                        if (!UF.same(v, w)) cnt--;
                        UF.unite(v, w);
                }
                ans.push_back(cnt);
        }
        reverse(ans.begin(), ans.end());
        for (auto x: ans) cout << x << endl;
}
