#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1, 0), b(n + 1, 1);
        rep(i, n) {
                cin >> a[i + 1];
                b[i + 1] = a[i + 1] - i;
        }

        rep(i, q) {
                ll k;
                cin >> k;
                int pos = upper_bound(b.begin(), b.end(), k) - b.begin() - 1;
                cout << a[pos] + (k - b[pos] + 1) << endl;
        }
}