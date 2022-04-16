#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

struct cord {
        int x, y;
};

int gcd(int a, int b) {
        if (a % b == 0) return b;
        return gcd(b, a % b);
}

int main() {
        int n, k;
        cin >> n >> k;
        if (n == 1) {
                cout << "Infinity" << endl;
                return 0;
        }
        vector<cord> cs;
        rep(i, n) {
                int x, y;
                cin >> x >> y;
                cs.push_back({x, y});
        }

        vector<map<int, map<int, vector<int>>>> mp(n);
        vector<vector<cord>> dcs(n, vector<cord>(n));
        rep(i, n) {
                rep(j, n) {
                        if (i == j) continue;
                        int dx = cs[i].x - cs[j].x;
                        int dy = cs[i].y - cs[j].y;
                        if (dx == 0) dy = 1;
                        else if (dy == 0)
                                dx = 1;
                        else {
                                int g = gcd(dx, dy);
                                dx /= g;
                                dy /= g;
                        }
                        if (dx < 0) {
                                dx = -dx;
                                dy = -dy;
                        }
                        dcs[i][j] = {dx, dy};
                        mp[i][dx][dy].push_back(j);
                }
        }

        int ans = 0;
        vector<vector<bool>> used(n, vector<bool>(n, false));
        rep(i, n) {
                for (int j = i + 1; j < n; j++) {
                        int dx = dcs[i][j].x;
                        int dy = dcs[i][j].y;

                        bool flag = true;
                        for (auto e: mp[i][dx][dy]) {
                                // cout << i << ' ' << j << ' ' << e << " / ";
                                if (used[i][e]) flag = false;
                                used[i][e] = true;
                                used[e][i] = true;
                        }
                        used[i][j] = true;
                        used[j][i] = true;
                        // cout << endl;
                        if (flag && mp[i][dx][dy].size() >= k - 1) {
                                ans++;
                                // cout << dx << ' ' << dy << endl;
                        }
                }
        }

        cout << ans << endl;
}
