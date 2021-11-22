#include<bits/stdc++.h>

using namespace std;

int main() {
        int h, w, k;
        char c[10][10];
        cin >> h >> w >> k;
        for (int i = 0; i < h; ++i) {
                for (int j = 0; j < w; ++j) {
                        cin >> c[i][j];
                }
        }

        int ans = 0;
        for (int i = 0; i < (1 << h); ++i) {
                for (int j = 0; j < (1 << w); ++j) {
                        int cnt = 0;
                        for (int l = 0; l < h; ++l) {
                                if (i & 1 << l) continue;
                                for (int m = 0; m < w; ++m) {
                                        if (j & 1 << m) continue;
                                        if (c[l][m] == '#') cnt++;
                                }
                        }
                        if (cnt == k) ans++;
                }
        }
        cout << ans << endl;
}