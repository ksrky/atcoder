#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        int h, w;
        cin >> h >> w;
        const int INF = 1 << 29;
        int a[2005][2005];
        int tk[2005][2005], ao[2005][2005];

        rep(i, h + 1) {
                rep(j, w + 1) {
                        if (i < h && j < w) {
                                char c;
                                cin >> c;
                                if (c == '+') a[i][j] = 1;
                                else a[i][j] = -1;
                        }
                        if ((i + j) % 2 == 0) {
                                tk[i][j] = INF;
                                ao[i][j] = -INF;
                        } else {
                                tk[i][j] = -INF;
                                ao[i][j] = INF;
                        }
                }
        }

        tk[h][w - 1] = 0;
        tk[h - 1][w] = 0;
        ao[h][w - 1] = 0;
        ao[h - 1][w] = 0;

        for (int i = h - 1; i >= 0; i--) {
                for (int j = w - 1; j >= 0; j--) {
                        if ((i + j) % 2 == 0) {
                                if (tk[i + 1][j] - ao[i + 1][j] > tk[i][j + 1] - ao[i][j + 1]){
                                        tk[i][j] = tk[i + 1][j];
                                        if (i == 0 && j == 0) ao[i][j] = ao[i + 1][j];
                                        else ao[i][j] = ao[i + 1][j] + a[i][j];
                                }
                                else {
                                        tk[i][j] = tk[i][j + 1];
                                        if (i == 0 && j == 0) ao[i][j] = ao[i][j + 1];
                                        else ao[i][j] = ao[i][j + 1] + a[i][j];
                                }
                        } else {
                                if (ao[i + 1][j] - tk[i + 1][j] > ao[i][j + 1] - tk[i][j + 1]) {
                                        ao[i][j] = ao[i + 1][j];
                                        tk[i][j] = tk[i + 1][j] + a[i][j];
                                }
                                else {
                                        ao[i][j] = ao[i][j + 1];
                                        tk[i][j] = tk[i][j + 1] + a[i][j];
                                }
                        }
                }
        }

        if (tk[0][0] > ao[0][0]) cout << "Takahashi" << endl;
        else if (tk[0][0] < ao[0][0]) cout << "Aoki" << endl;
        else cout << "Draw" << endl;
        return 0;
}