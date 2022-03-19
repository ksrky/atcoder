#include<bits/stdc++.h>

using namespace std;

int main() {
        int h, w;
        cin >> h >> w;
        vector<vector<char>> s(h, vector<char>(w));

        for (int i = 0; i < h; i++) {
                for (int j = 0; j < w; j++) {
                        cin >> s[i][j];
                }
        }

        int dx[4] = {0, 0, -1, -1}, dy[4] = {0, -1, -1, 0};
        int vertice = 0;
        for (int i = 1; i < h; i++) {
                for (int j = 1; j < w; j++) {
                        int cnt = 0;
                        for (int k = 0; k < 4; ++k) {
                                if (s[i + dx[k]][j + dy[k]] == '#') cnt++;
                        }
                        if (cnt % 2 == 1) vertice++;
                }
        }
        cout << vertice << endl;
        return 0;
}