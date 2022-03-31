#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
        int q;
        cin >> q;
        multiset<ll> ms;
        for (int i = 0; i < q; i++) {
                int c, k;
                ll x;
                cin >> c >> x;
                if (c == 1) {
                        ms.insert(x);
                } else if (c == 2) {
                        cin >> k;
                        auto itr = upper_bound(ms.begin(), ms.end(), x);
                        if (distance(ms.begin(), itr) < k) cout << -1 << endl;
                        else {
                                for (int j = 0; j < k; j++) itr--;
                                cout << *itr << endl;
                        }
                } else if (c == 3) {
                        cin >> k;
                        auto itr = lower_bound(ms.begin(), ms.end(), x);
                        for (int j = 0; j < k - 1; j++) {
                                if (itr == ms.end()) break;
                                itr++;
                        }
                        if (itr == ms.end()) cout << -1 << endl;
                        else cout << *itr << endl;
                }
        }
}
