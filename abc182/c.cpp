#include<bits/stdc++.h>

using namespace std;

int main() {
        string n;
        cin >> n;
        int ans = n.size() + 1;
        for (int i = 1; i < (1 << n.size()); i++) {
                string s;
                for (int j = 0; j < n.size(); j++) {
                        if (i & (1 << j)) {
                                s = s + n[j];
                        }
                }
                int m = 0;
                for (int k = 0; k < s.size(); k++) m += s[k] - '0';
                if (m % 3 == 0) {
                        int k = n.size() - s.size();
                        ans = min(ans, k);
                }
        }

        if (ans <= n.size()) cout << ans << endl;
        else cout << -1 << endl;
        return 0;
}