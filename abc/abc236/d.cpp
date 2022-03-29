#include <bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<vector<int>> a(2 * n, vector<int>(2 * n));
        for (int i = 0; i < 2 * n - 1; i++) {
                for (int j = i + 1; j < 2 * n; j++) {
                        int x;
                        cin >> x;
                        a[i][j] = x;
                }
        }

        vector<bool> used(2 * n, false);
        vector<pair<int, int>> ps;

}
