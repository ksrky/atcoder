#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        string s;
        cin >> s;
        vector<int> used(10, false);
        rep(i, s.size()) { used[s[i] - '0'] = true; }
        rep(i, 10) {
                if (!used[i])
                        cout << i << endl;
        }
}
