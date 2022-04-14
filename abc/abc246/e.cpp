#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int n;
vector<vector<char>> s(1505, vector<char>(1505));
vector<pair<int, int>> cnt[1505 * 1505 / 2];
vector<vector<int>> used(1505, vector<int>(1505, false));

bool calc(int x, int y, int c) {
        bool update = false;
        for (int i = 1; x + i < n && y + i < n; i++) {
                int nx = x + i, ny = y + i;
                if (s[nx][ny] == '#') break;
                if (used[nx][ny]) continue;
                cnt[c].emplace_back(nx, ny);
                used[nx][ny] = true;
                update = true;
        }
        for (int i = 1; x - i >= 0 && y - i >= 0; i++) {
                int nx = x - i, ny = y - i;
                if (s[nx][ny] == '#') break;
                if (used[nx][ny]) continue;
                cnt[c].emplace_back(nx, ny);
                used[nx][ny] = true;
                update = true;
        }
        for (int i = 1; x + i < n && y - i >= 0; i++) {
                int nx = x + i, ny = y - i;
                if (s[nx][ny] == '#') break;
                if (used[nx][ny]) continue;
                cnt[c].emplace_back(nx, ny);
                used[nx][ny] = true;
                update = true;
        }
        for (int i = 1; x - i >= 0 && y + i < n; i++) {
                int nx = x - i, ny = y + i;
                if (s[nx][ny] == '#') break;
                if (used[nx][ny]) continue;
                cnt[c].emplace_back(nx, ny);
                used[nx][ny] = true;
                update = true;
        }
}

int main() {
        cin >> n;
        int ax, ay, bx, by;
        ax--, ay--, bx--, by--;
        cin >> ax >> ay >> bx >> by;
        if ((ax + ay) % 2 != (bx + by) % 2) {
                cout << -1 << endl;
                return 0;
        }
        rep(i, n) {
                rep(j, n) {
                        cin >> s[i][j];
                }
        }
        cnt[0].emplace_back(ax, ay);
        for (int i = 0; i < n * n; i++) {
                bool update = true;
                for (auto[x, y]: cnt[i]) {
                        if (x == bx && y == by) {
                                cout << i << endl;
                                return 0;
                        }
                        if (!calc(x, y, i + 1)) update = false;
                }
                if (!update) break;
        }
        cout << -1 << endl;
}
