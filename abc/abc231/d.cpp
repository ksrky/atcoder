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
        vector<set<int>> v(n);

        UnionFind UF;
        UF.init(n);

        rep(i, m) {
                int a, b;
                cin >> a >> b;
                a--, b--;
                if (UF.same(a, b)) {
                        cout << "No" << endl;
                        return 0;
                }
                UF.unite(a, b);
                v[a].insert(b);
                v[b].insert(a);
        }

        rep(i, n) {
                if (v[i].size() > 2) {
                        cout << "No" << endl;
                        return 0;
                }
        }
        cout << "Yes" << endl;
}
