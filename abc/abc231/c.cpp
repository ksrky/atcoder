#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        sort(a.begin(), a.end());
        rep(i, q) {
                int x;
                cin >> x;
                auto it = lower_bound(a.begin(), a.end(), x);
                cout << distance(it, a.end()) << endl;
        }
}
