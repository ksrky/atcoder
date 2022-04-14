#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {
        int q;
        cin >> q;
        queue<pair<int, int>> que;
        int rest = 0;
        rep(i, q) {
                int op, x, c;
                cin >> op;
                if (op == 1) {
                        cin >> x >> c;
                        que.push(make_pair(x, c));
                } else if (op == 2) {
                        cin >> c;
                        ll ans = 0;
                        while (true) {
                                if (que.front().second >= c) {
                                        ans += (ll) c * que.front().first;
                                        que.front().second -= c;
                                        break;
                                } else {
                                        ans += (ll) que.front().second * que.front().first;
                                        c -= que.front().second;
                                        que.pop();
                                }
                        }
                        cout << ans << endl;
                }
        }
}
