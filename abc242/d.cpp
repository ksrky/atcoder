#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string s;

ll f(ll t, ll k) {
        if (t == 0) return (s[k - 1] - 'A');
        else if (k == 1) return ((s[0] - 'A') + t) % 3;
        else if (k % 2 == 0) return (f(t - 1, k / 2) + 2) % 3;
        else return (f(t - 1, (k + 1) / 2) + 1) % 3;
}

int main() {
        char c[3] = {'A', 'B', 'C'};
        cin >> s;
        int q;
        cin >> q;

        for (int i = 0; i < q; i++) {
                ll t, k;
                cin >> t >> k;
                cout << c[f(t, k)] << endl;
        }
}
