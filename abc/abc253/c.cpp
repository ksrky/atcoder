#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int q;
        cin >> q;
        int op, x, c;
        map<int, int> mp;
        set<int> st1;
        set<int, greater<>> st2;
        rep(i, q) {
                cin >> op;
                if (op == 1) {
                        cin >> x;
                        mp[x]++;
                        st1.insert(x);
                        st2.insert(x);
                } else if (op == 2) {
                        cin >> x >> c;
                        mp[x] = max(0, mp[x] - c);
                        if (mp[x] == 0) {
                                st1.erase(x);
                                st2.erase(x);
                        }
                } else if (op == 3) {
                        cout << *st2.begin() - *st1.begin() << endl;
                }
        }
}
