#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        string s;
        cin >> s;
        bool large = false, small = false, same = false;
        map<char, bool> mp;
        rep(i, s.size()) {
                if (s[i] - 'a' >= 0) small = true;
                if (s[i] - 'a' < 0) {
                        large = true;
                        s[i] -= 26;
                }
                if (mp[s[i]]) same = true;
                else mp[s[i]] = true;
        }
        if (large && small && !same) cout << "Yes" << endl;
        else cout << "No" << endl;
}
