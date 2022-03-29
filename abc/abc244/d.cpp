#include <bits/stdc++.h>

using namespace std;

int main() {
        char s[3], t[3];
        for (int i = 0; i < 3; i++) cin >> s[i];
        for (int i = 0; i < 3; i++) cin >> t[i];
        string S = {s[0], s[1], s[2]};
        string T = {t[0], t[1], t[2]};
        map<string, int> m;
        m["RGB"] = 0, m["GRB"] = 1, m["GBR"] = 2, m["BGR"] = 3, m["BRG"] = 4, m["RBG"] = 5;
        int i = m[S], j = m[T];
        int d = min(abs(j - i), 6 - abs(j - i));
        if (d % 2 == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
}
