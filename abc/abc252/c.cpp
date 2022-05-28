#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        cin >> n;
        vector<string> s(n);
        rep(i, n) {
                cin >> s[i];
        }

        vector<vector<int>> v(10, vector<int>(n));
        rep(i, n) {
                rep(j, 10) {
                        v[s[i][j] - '0'][i] = j;
                }
        }

        int ans = n * 1000;
        rep(i, 10) {
                int cnt[10] = {0};
                rep(j, n) {
                        cnt[v[i][j]]++;
                }
                int mx = 0;
                rep(j, 10) {
                        mx = max(mx, (cnt[j] - 1) * 10 + j);
                }
                ans = min(ans, mx);
        }

        cout << ans << endl;
}
