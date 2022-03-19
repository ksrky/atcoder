#include<bits/stdc++.h>

using namespace std;

int main() {
        int h, w, n, m;
        cin >> h >> w >> n >> m;
        vector<int> a(n), b(n);
        int block[2000][2000] = {false};
        for (int i = 0; i < n; ++i) {
                cin >> a[i] >> b[i];
                --a[i], --b[i];
        }
        for (int i = 0; i < m; ++i) {
                int c, d;
                cin >> c >> d;
                --c, --d;
                block[c][d] = true;
        }

        bool hz[2000][2000] = {false}, vt[2000][2000];
        int cnt = 0, d[2] = {1, -1};

        for (int i = 0; i < n; ++i) {
                if (hz[a[i]][b[i]]) continue;
                for (int j = 0; j < 2; ++j) {
                        int y = a[i], x = b[i];
                        while (!block[y][x] && (0 <= x && x < w)) {
                                if (!hz[y][x]) ++cnt;
                                hz[y][x] = true;
                                x += d[j];
                        }
                }
        }
        for (int i = 0; i < n; ++i) {
                if (vt[a[i]][b[i]]) continue;
                for (int j = 0; j < 2; ++j) {
                        int y = a[i], x = b[i];
                        while (!block[y][x] && (0 <= y && y < h)) {
                                if (!vt[y][x] && !hz[y][x]) ++cnt;
                                vt[y][x] = true;
                                y += d[j];
                        }
                }
        }
        cout << cnt << endl;
}