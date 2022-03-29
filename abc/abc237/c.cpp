#include <bits/stdc++.h>

using namespace std;

int main() {
        string s;
        cin >> s;
        int m = 0, n = 0;
        for (int i = 0; i < s.size(); i++) {
                if (s[i] == 'a') m++;
                else break;
        }
        for (int i = s.size() - 1; i >= 0; i--) {
                if (s[i] == 'a') n++;
                else break;
        }
        vector<char> c;
        if (n > m) c = {s.begin(), s.end() - (n - m)};
        else c = {s.begin(), s.end()};

        bool ans = true;
        for (int i = 0; i < c.size() / 2; i++) {
                if (c[i] != c[c.size() - 1 - i]) {
                        ans = false;
                        break;
                }
        }
        if (ans)cout << "Yes" << endl;
        else cout << "No" << endl;
}
