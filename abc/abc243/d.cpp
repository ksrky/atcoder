#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
        int n;
        ll x;
        string s;
        cin >> n >> x >> s;
        vector<char> v;
        v.push_back(s[0]);
        for (int i = 1; i < n; i++) {
                if (s[i] == 'U' && v.size() != 0 && v[v.size() - 1] != 'U') v.pop_back();
                else v.push_back(s[i]);
        }

        for (int i = 0; i < v.size(); i++) {
                if (v[i] == 'U') x = x / 2;
                if (v[i] == 'L') x = 2 * x;
                if (v[i] == 'R') x = 2 * x + 1;
        }
        cout << x << endl;
}
