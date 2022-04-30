#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        ll n, a, b, p, q, r, s;
        cin >> n >> a >> b >> p >> q >> r >> s;
        for (ll i = p - 1; i < q; i++) {
                for (ll j = r - 1; j < s; j++) {
                        if (abs(i - (a-1)) == abs(j - (b-1))) cout << '#';
                        else cout << '.';
                }
                cout << endl;
        }
}
