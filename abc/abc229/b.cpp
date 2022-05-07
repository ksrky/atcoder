#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        string s, t;
        cin >> s >> t;
        int p = 0;
        bool flag = true;
        rep(i, min(s.size(), t.size())) {
                int a = s[s.size() - 1 - i] - '0';
                int b = t[t.size() - 1 - i] - '0';
                if (a + b + p >= 10) flag = false;
                p = max(0, a + b - 10);
        }
        if (flag) cout << "Easy" << endl;
        else cout << "Hard" << endl;
}
