#include <bits/stdc++.h>

using namespace std;

struct cord {
    int x, y;
    char drc;
};

bool compx(const cord &c1, const cord &c2) {
        return c1.x < c2.x;
}

bool compy(const cord &c1, const cord &c2) {
        return c1.y < c2.y;
}

int main() {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++) {
                int x, y;
                cin >> x >> y;
                v.emplace_back(x, y);
        }
        string s;
        cin >> s;

        vector<cord> cs(n);
        for (int i = 0; i < n; i++) {
                cs[i] = {v[i].first, v[i].second, s[i]};
        }
        sort(cs.begin(), cs.end(), compy);
        vector<cord> ds[200005];
        int j = 0;
        ds[0].push_back(cs[0]);
        for (int i = 1; i < n; i++) {
                if (cs[i].y != cs[i - 1].y) j++;
                ds[j].push_back(cs[i]);
        }

        bool ans = false;
        for (auto d: ds) {
                if (d.size() < 2) continue;
                sort(d.begin(), d.end(), compx);
                bool flag = false;
                for (int i = 1; i < d.size(); i++) {
                        if (d[i].drc == 'L' && d[i - 1].drc == 'R') flag = true;
                }
                if (flag) ans = true;
        }
        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
}
