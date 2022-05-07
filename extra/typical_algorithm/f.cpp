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

struct edge {
        int u, v;
        ll cost;
};

ll kruskal(int V, vector<edge> &es) {
        sort(es.begin(), es.end(), [](const edge &e1, const edge &e2) {
                return e1.cost < e2.cost;
        });

        UnionFind UF;
        UF.init(V);
        ll res = 0;
        for (edge e: es) {
                if (!UF.same(e.u, e.v)) {
                        UF.unite(e.u, e.v);
                        res += e.cost;
                }
        }
        return res;
}

int main() {
        int n, m;
        cin >> n >> m;
        vector<edge> es;
        rep(i, m) {
                int u, v;
                ll c;
                cin >> u >> v >> c;
                es.push_back({u, v, c});
        }
        cout << kruskal(n, es) << endl;
}
