#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

bool isSeq(vector<int> v) {
        int d = v[1] - v[0];
        for (int i = 2; i < v.size(); i++) {
                if (v[i] - v[i - 1] != d) return false;
        }
        return true;
}

int main() {
        ll x;
        cin >> x;
        int N = (int) to_string(x).size();
        vector<ll> v;
        for (int n = 1; n <= N; n++) {
                for (int i = 1; i <= 9; i++) {
                        for (int d = -9; d <= 8; d++) {
                                ll y = 0;
                                bool flag = true;
                                for (int j = 0; j < n; j++) {
                                        if (i + d * j < 0 || i + d * j > 9) flag = false;
                                        y += (i + d * j) * (ll) pow(10, n - 1 - j);
                                }
                                if (flag) v.push_back(y);
                        }
                }
        }

        auto it = lower_bound(v.begin(), v.end(), x);
        cout << *it << endl;
}
