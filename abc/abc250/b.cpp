#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, a, b;
        cin >> n >> a >> b;
        vector<vector<char>> c(n * a, vector<char>(n * b, '.'));
        int p = 0;
        rep(i, n) {
                int q = p;
                rep(j, n) {
                        rep(l, a) {
                                rep(m, b) {
                                        if (q == 0) c[i * a + l][j * b + m] = '.';
                                        else c[i * a + l][j * b + m] = '#';
                                }
                        }
                        q = (q + 1) % 2;
                }
                p = (p + 1) % 2;
        }

        for (auto x: c) {
                for (auto y: x) {
                        cout << y;
                }
                cout << endl;
        }
}
