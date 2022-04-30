#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

struct wall {
        int l, r;
};

bool comp(const wall &w1, const wall &w2) {
        return w1.r < w2.r;
}

int main() {
        int n, d;
        cin >> n >> d;
        vector<wall> w;
        rep(i, n) {
                int l, r;
                cin >> l >> r;
                w.push_back({l, r + d - 1});
        }
        sort(w.begin(), w.end(), comp);
        int pl = -1, ans = 0;
        rep(i, n) {
                if (w[i].l <= pl && pl <= w[i].r) continue;
                ans++;
                pl = w[i].r;
        }
        cout << ans << endl;
}
