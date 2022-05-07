#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, q;
        cin >> n >> q;
        vector<int> f(n + 1, -1), b(n + 1, -1);
        rep(i, q) {
                int op, x, y;
                cin >> op >> x;
                if (op == 1) {
                        cin >> y;
                        b[x] = y;
                        f[y] = x;
                } else if (op == 2) {
                        cin >> y;
                        b[x] = -1;
                        f[y] = -1;
                } else {
                        int xf = x, xb = x;
                        vector<int> xfs, xbs;
                        while (true) {
                                if (f[xf] == -1) break;
                                xfs.push_back(f[xf]);
                                xf = f[xf];
                        }
                        while (true) {
                                if (b[xb] == -1) break;
                                xbs.push_back(b[xb]);
                                xb = b[xb];
                        }
                        reverse(xfs.begin(), xfs.end());
                        vector<int> res = xfs;
                        res.push_back(x);
                        res.insert(res.end(), xbs.begin(), xbs.end());
                        cout << res.size();
                        for(auto r: res) cout << ' ' << r;
                        cout << endl;
                }
        }
}
