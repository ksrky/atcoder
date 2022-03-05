#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

const int INF = 1 << 30;

int main() {
        int n, q;
        cin >> n >> q;
        vector<int> x(n), a(n - 1), b(n - 1);
        vector<pair<int, int>> xi;
        rep(i, n) {
                cin >> x[i];
                xi.emplace_back(x[i], i);
        }
        sort(xi.begin(), xi.end());
        vector<int> y(n);
        for (auto p : xi) y[p.second] = p.first;
        vector<vector<int>> G(n);
        vector<int> rank(n, INF);
        rank[0] = 0;
        rep(i, n - 1) { cin >> a[i] >> b[i]; }
        return 0;
}
