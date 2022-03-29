#include <bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> l, r;
        for (int i = n - 1; i >= 0; i--) {
                if (s[i] == 'L') r.push_back(i);
                else l.push_back(i);
        }
        reverse(l.begin(), l.end());
        for (auto x: l) cout << x << ' ';
        cout << n;
        for (auto x: r) cout << ' ' << x;
        cout << endl;
}
