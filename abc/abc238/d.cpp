#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
        int t;
        cin >> t;
        while (t > 0) {
                t--;
                ll a, s;
                cin >> a >> s;
                bool ans = true;
                for (int i = 0; s > 0 || a > 0; i++) {
                        int p = s % 2, q = a % 2;
                        if (p) {
                                if (q) {
                                        ans = false;
                                        break;
                                } else s = s / 2 - 1;
                        } else s /= 2;
                        a /= 2;
                }
                if (ans) cout << "Yes" << endl;
                else cout << "No" << endl;
        }
}
