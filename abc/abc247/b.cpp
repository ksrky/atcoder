#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        cin >> n;
        vector<string> s(n), t(n);
        rep(i, n) cin >> s[i] >> t[i];

        rep(i, n) {
                bool b1 = false, b2 = false;
                rep(j, n) {
                        if (i == j) continue;
                        if ((s[i] == s[j] || s[i] == t[j])) b1 = true;
                        if (t[i] == s[j] || t[i] == t[j]) b2 = true;
                }
                if (b1 && b2) {
                        cout << "No" << endl;
                        return 0;
                }
        }
        cout << "Yes" << endl;
}
