#include <bits/stdc++.h>

using namespace std;

int main() {
        string s;
        cin >> s;
        vector<char> c(s.size());
        for (int i = 0; i < s.size(); i++) c[i] = s[i];
        sort(c.begin(), c.end());
        for (auto x: c) cout << x;
        cout << endl;
}
