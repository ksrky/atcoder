#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

const int N = 1 << 20;

int main() {
        int q;
        cin >> q;
        vector<int> v = {0, N};
        set<int> st;
        st.insert(0);
        st.insert(N);
        vector<ll> a(N, -1);
        rep(i, q) {
                int t;
                ll x;
                cin >> t >> x;
                if (t == 1) {
                        auto it = upper_bound(v.begin(), v.end(), x % N);
                        int pos = distance(v.begin(), it);
                        if (pos % 2 == 0) {
                                a[v[pos]] = x;
                                v[pos]++;
                        } else {
                                if (v[pos] - 1 == v[pos - 1]) {
                                        v.erase(v.begin() + pos - 1);
                                        v.erase(v.begin() + pos - 1);
                                } else if (x % N == v[pos - 1]) {
                                        v[pos - 1]++;
                                } else {
                                        v.insert(v.begin() + pos, x % N);
                                        v.insert(v.begin() + pos + 1, x % N + 1);
                                }
                                a[x % N] = x;
                        }
                } else if (t == 2) {
                        cout << a[(int) x % N] << endl;
                }
        }
        return 0;
}
