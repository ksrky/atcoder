#include<bits/stdc++.h>

using namespace std;

int main() {
        int n, m, t;
        cin >> n >> m >> t;
        int p = 0, c = n;
        for (int i = 0; i < m; i++) {
                int a, b;
                cin >> a >> b;
                n -= (a - p);
                if (n <= 0) {
                        cout << "No" << endl;
                        return 0;
                }
                n += (b - a);
                n = min(n, c);
                p = b;
        }
        if (n - (t - p) <= 0) {
                cout << "No" << endl;
        } else {
                cout << "Yes" << endl;
        }
        return 0;
}