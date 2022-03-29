#include <bits/stdc++.h>

using namespace std;

int main() {
        int n, m;
        cin >> n >> m;
        vector<int> a(n + 1), c(n + m + 1);
        for (int i = 0; i <= n; i++) cin >> a[i];
        for (int i = 0; i <= n + m; i++) cin >> c[i];
        reverse(a.begin(), a.end());
        reverse(c.begin(), c.end());

        vector<int> b(m + 1);
        for (int i = 0; i <= m; i++) {
                b[i] = c[i] / a[0];
                for (int j = 0; j <= n; j++) {
                        c[i + j] -= a[j] * b[i];
                }
        }

        reverse(b.begin(), b.end());
        for (int i = 0; i <= m; i++) {
                cout << b[i];
                if (i != m) cout << ' ';
        }
        cout << endl;
}
