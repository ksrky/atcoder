#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int n, m, a[1005], used[1005] = {false};

int main() {
        cin >> n >> m;
        rep(i, n) cin >> a[i];

        rep(i, m) {
                int b;
                cin >> b;
                bool found = false;
                rep(j, n) {
                        if (a[j] == b && !used[j]) {
                                used[j] = true;
                                found = true;
                                break;
                        }
                }
                if (!found) {
                        cout << "No" << endl;
                        return 0;
                }
        }
        cout << "Yes" << endl;
        return 0;
}
