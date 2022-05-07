#include <bits/stdc++.h>

using namespace std;

int gcd(int x, int y) {
        if (x % y == 0) return y;
        return gcd(y, x % y);
}

int main() {
        int n;
        cin >> n;
        vector<pair<int, int>> c;
        for (int i = 0; i < n; i++) {
                int x, y;
                cin >> x >> y;
                c.emplace_back(x, y);
        }
        set<pair<int, int>> st;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        if (i == j) continue;
                        int x = c[j].first - c[i].first, y = c[j].second - c[i].second;
                        int g = 1;
                        if (x == 0) g = abs(y);
                        else if (y == 0) g = abs(x);
                        else g = gcd(abs(x), abs(y));
                        st.insert(pair<int, int>(x / g, y / g));
                }
        }

        cout << st.size() << endl;
        return 0;
}