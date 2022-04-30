#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;


int main() {
        string s;
        cin >> s;
        bool ans = false;
        for (string t: {"oxx", "xox", "xxo"}) {
                bool flag = true;
                rep(i, s.size()) {
                        if (s[i] != t[i % 3]) flag = false;
                }
                if (flag) {
                        ans = true;
                        break;
                }
        }
        if (ans) cout << "Yes" << endl;
        else cout << "No" << endl;
}
