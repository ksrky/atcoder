#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll a;

int rotate(ll n) {
        string s = to_string(n);
        s = s[s.size() - 1] + s.substr(0, s.size() - 1);
        return stoi(s);
}

int main() {
        ll n;
        cin >> a >> n;
        ll m = pow(10, to_string(n).size());
        vector<ll> ds(m, -1);
        ds[1] = 0;
        queue<ll> que;
        que.push(1);
        while (!que.empty()) {
                ll v = que.front();
                que.pop();
                ll v1 = v * a;
                if (v1 < m && ds[v1] == -1) {
                        ds[v1] = ds[v] + 1;
                        que.push(v1);
                }
                if (v % 10 == 0) continue;
                ll v2 = rotate(v);
                if (v2 < m && ds[v2] == -1) {
                        ds[v2] = ds[v] + 1;
                        que.push(v2);
                }
        }
        cout << ds[n] << endl;
}
