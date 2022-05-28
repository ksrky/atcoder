#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, k;
        cin >> n >> k;
        vector<int> v;
        int mx = 0;
        rep(i, n) {
                int a;
                cin >> a;
                if (a > mx) {
                        mx = a;
                        v = {i};
                } else if (a == mx) {
                        v.push_back(i);
                }
        }

        bool ans = false;
        rep(i, k) {
                int b;
                cin >> b;
                b--;
                bool flag = false;
                for (auto x: v) {
                        if (b == x) flag = true;
                }
                if (flag) ans = true;
        }

        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
}
