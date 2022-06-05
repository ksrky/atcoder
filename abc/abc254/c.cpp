#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const int inf = 1e9;

int main() {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<vector<int>> b(k);
        rep(i, n) {
                cin >> a[i];
                b[i % k].push_back(a[i]);
        }
        for (int i = (n - 1) % k + 1; i < k; i++) b[i].push_back(inf);
        for (auto &v: b) {
                sort(v.begin(), v.end());
                /*rep(i, v.size()) {
                        cout << v[i] << ' ';
                }
                cout << endl;*/
        }

        bool flag = true;
        rep(i, b[0].size()) {
                rep(j, b.size() - 1) {
                        if (b[j][i] > b[j + 1][i]) {
                                flag = false;
                                break;
                        }
                }
                if (!flag) break;
        }

        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
}
