#include<bits/stdc++.h>

using namespace std;

int main() {
        string s, t;
        cin >> s >> t;

        int ans = 1000;
        for (int i = t.size(); i <= s.size(); i++) {
                int cnt = 0;
                for (int j = 0; j < t.size(); j++) {
                        if (s[i - t.size() + j] == t[j]) cnt++;
                }
                int n = t.size();
                ans = min(n - cnt, ans);
        }
        cout << ans << endl;
}
