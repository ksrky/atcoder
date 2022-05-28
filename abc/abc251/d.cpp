#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int w;
        cin >> w;
        map<int, bool> mp, mp2;

        vector<int> a, b;
        int cur = 1, cnt = 0;
        while (cur <= w) {
                if (mp2[cur]) {
                        cnt *= 2;
                        continue;
                }
                if (mp[cur]) {
                        cur++;
                        continue;
                }
                cnt++;
                for (auto x: a) {
                        mp[x + cur] = true;
                        mp2[x + cur] = true;
                        b.push_back(x + cur);
                }
                for (auto x: b) {
                        mp[x + cur] = true;
                }
                a.push_back(cur);
                mp[cur] = true;
                mp2[cur] = true;
                cur++;
        }
        //cout << cnt << endl;
        cout << a.size() << endl;
        rep(i, a.size()) {
                cout << a[i];
                if (i < a.size() - 1) cout << ' ';
                else cout << endl;
        }
}
