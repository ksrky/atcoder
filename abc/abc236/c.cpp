#include <bits/stdc++.h>

using namespace std;

int main() {
        int n, m;
        cin >> n >> m;
        vector<string> s(n), t(m);
        map<string, bool> mp;
        for (auto &x: s) {
                cin >> x;
                mp[x] = false;
        }
        for (auto &x: t) {
                cin >> x;
                mp[x] = true;
        }
        for (auto x: s) {
                if (mp[x]) cout << "Yes" << endl;
                else cout << "No" << endl;
        }
}
