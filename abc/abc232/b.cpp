#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        string s, t;
        cin >> s >> t;
        bool flag = true;
        rep(i, s.size() - 1) {
                int x = (s[i + 1] - s[i] + 26) % 26;
                int y = (t[i + 1] - t[i] + 26) % 26;
                if (x != y) {
                        flag = false;
                }
        }
        if (flag) cout << "Yes" << endl;
        else
                cout << "No" << endl;
}
