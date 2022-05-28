#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        cin >> n;
        map<string, bool> used;
        int ans = 0, mx = 0;
        rep(i, n) {
                string s;
                int t;
                cin >> s >> t;
                if (!used[s] && mx < t) {
                        mx = t;
                        ans = i + 1;
                }
                used[s] = true;
        }
        cout << ans << endl;
}
