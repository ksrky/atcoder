#include<bits/stdc++.h>

using namespace std;

int main() {
        int h, w, x, y;
        cin >> h >> w >> x >> y;
        bool b[105][105] = {0};
        for (int i = 0; i < h; i++) {
                string s;
                cin >> s;
                for (int j = 0; j < w; j++) {
                        if (s[j] == '.') b[i][j] = 1;
                }
        }

        int ans = 0;
        int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
        for (int i = 0; i < 4; i++) {
                int ix = x - 1, iy = y - 1;
                while (b[ix][iy] && 0 <= ix && ix < h && 0 <= iy && iy < w) {
                        ans++;
                        ix += dx[i];
                        iy += dy[i];
                }
        }

        ans -= 3;
        cout << ans << endl;
        return 0;
}
