#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    bool ans = false;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                int x1 = x[j] - x[i];
                int y1 = y[j] - y[i];
                int x2 = x[k] - x[i];
                int y2 = y[k] - y[i];
                if (x1 * y2 == x2 * y1) ans = true;
            }
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}