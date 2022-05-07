#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, k;
        cin >> n >> k;
        vector<int> p(n);
        rep(i, n) {
                int a, b, c;
                cin >> a >> b >> c;
                p[i] = a + b + c;
        }
        vector<int> q = p;
        sort(q.begin(), q.end());
        rep(i, n) {
                auto it = upper_bound(q.begin(), q.end(), p[i] + 300);
                int r = distance(it, q.end()) + 1;
                if (r <= k) cout << "Yes" << endl;
                else cout << "No" << endl;
        }
}
