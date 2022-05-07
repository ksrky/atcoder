#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        using P = pair<int, int>;
        int n;
        cin >> n;
        vector<pair<int, int>> ab;
        rep(i, n) {
                int a, b;
                cin >> a >> b;
                ab.emplace_back(a, b);
        }
        sort(ab.begin(), ab.end(), [](P &b1, P &b2) {
                return b1.second < b2.second;
        });

        int cur = -1, ans = 0;
        rep(i, n) {
                if (ab[i].first <= cur) continue;
                ans++;
                cur = ab[i].second;
        }
        cout << ans << endl;
}
