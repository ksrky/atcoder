#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        int n;
        cin >> n;
        vector<double> l(n), r(n);
        rep(i, n) {
                int t;
                cin >> t >> l[i] >> r[i];
                if (t == 2 || t == 4) r[i] -= 0.5;
                if (t == 3 || t == 4) l[i] += 0.5;
        }

        int ans = 0;
        rep(i, n) {
                rep(j, n) {
                        if (i == j) continue;
                        if (l[i] <= r[j] && l[j] <= r[i]) ans++;
                }
        }

        cout << ans / 2 << endl;
}
