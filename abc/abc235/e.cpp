#include <bits/stdc++.h>

using namespace std;

struct edge {
    int u, v, cost;
};

bool operator<(const edge &le, const edge &re)
{
        return le.cost < re.cost;
}

int main() {
        int n, m, q;
        cin >> n >> m >> q;
        set<edge> es;
        for (int i = 0; i < m; i++) {
                int a, b, c;
                cin >> a >> b >> c;
                a--, b--;
                es.insert(edge{a, b, c});
        }

        while (q > 0) {
                q--;
                int u, v, w;
                cin >> u >> v >> w;
        }
}
