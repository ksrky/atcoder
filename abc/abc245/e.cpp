#include <bits/stdc++.h>

using namespace std;

struct rect {
    int x, i;
    bool isbox;
};

int main() {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n), c(m), d(m);
        for (auto &x: a) cin >> x;
        for (auto &x: b) cin >> x;
        for (auto &x: c) cin >> x;
        for (auto &x: d) cin >> x;

        vector<rect> rs(n + m);
        for (int i = 0; i < n; i++) rs[i] = {a[i], i, false};
        for (int i = 0; i < m; i++) rs[n + i] = {c[i], i, true};
        sort(rs.begin(), rs.end());

        int i = 0;
        vector<bool> used(m, false);
        bool ans=true;
        while (i < n + m) {
                if (!rs[i].isbox) {
                        int j = i - 1;
                        bool flag=false;
                        while (j >= 0) {
                                break;
                        }
                        if (flag) ans=false;
                }
                i++;
        }

}
