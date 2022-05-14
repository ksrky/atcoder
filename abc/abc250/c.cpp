#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), pos(n);
        rep(i, n) {
                a[i] = i;
                pos[i] = i;
        }
        rep(i, q) {
                int x;
                cin >> x;
                x--;
                int idx = pos[x];
                if (idx == n - 1) {
                        swap(a[n - 1], a[n - 2]);
                        swap(pos[a[n - 1]], pos[a[n - 2]]);
                } else {
                        swap(a[idx], a[idx + 1]);
                        swap(pos[a[idx]], pos[a[idx + 1]]);
                }
        }

        rep(i, n) {
                cout << a[i] + 1;
                if (i < n - 1) cout << ' ';
                else cout << endl;
        }
}
