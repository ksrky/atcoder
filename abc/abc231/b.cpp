#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        cin >> n;
        map<string, int> mp;
        vector<string> v;
        rep(i, n) {
                string s;
                cin >> s;
                if (mp[s] == 0) v.push_back(s);
                mp[s]++;
        }

        string ans;
        int mx = 0;
        for (string name: v) {
                if (mp[name] > mx) {
                        mx = mp[name];
                        ans = name;
                }
        }
        cout << ans << endl;
}
