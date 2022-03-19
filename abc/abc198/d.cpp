#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
        string s[3];
        map<char, ll> m;
        for (int i = 0; i < 3; ++i) {
                cin >> s[i];
                for (int j = 0; j < s[i].size(); ++j) {
                        m[s[i][j]] = 0;
                }
        }

        if (m.size() > 10) {
                cout << "UNSOLVABLE" << endl;
                return 0;
        }

        vector <ll> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        bool flag = false;
        do {
                int p = 0;
                for (auto[key, value]:m) {
                        m[key] = v[p];
                        ++p;
                }

                ll x = 0, y = 0;
                for (int i = 0; i < 2; ++i) {
                        if (m[s[i][0]] == 0) {
                                x = -1;
                                break;
                        }
                        for (int j = 0; j < int(s[i].size()); ++j) {
                                x += m[s[i][j]] * ll(pow(10, ll(s[i].size()) - ll(j) - 1LL));
                        }
                }
                for (int j = 0; j < int(s[2].size()); ++j) {
                        if (m[s[2][0]] == 0) {
                                y = -2;
                                break;
                        }
                        y += m[s[2][j]] * ll(pow(10, ll(s[2].size()) - ll(j) - 1LL));
                }
                if (x == y) {
                        flag = true;
                        break;
                }
        } while (next_permutation(v.begin(), v.end()));

        if (!flag) {
                cout << "UNSOLVABLE" << endl;
                return 0;
        }
        for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < s[i].size(); ++j) {
                        cout << m[s[i][j]];
                }
                cout << endl;
        }
}
