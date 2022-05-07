#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        rep(i, n) cin >> a[i];
        auto itr = lower_bound(a.begin(), a.end(), k);
        if (itr == a.end()) cout << -1 << endl;
        else cout << distance(a.begin(), itr) << endl;
}
