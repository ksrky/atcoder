#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int h, w;
        cin >> h >> w;
        vector<vector<char>> s(h, vector<char>());
        vector<int> x, y;
        rep(i, h) {
                rep(j, w) {
                        char c;
                        cin >> c;
                        if (c == 'o') {
                                x.push_back(i);
                                y.push_back(j);
                        }
                }
        }
        cout << abs(x[1] - x[0]) + abs(y[1] - y[0]) << endl;
}
