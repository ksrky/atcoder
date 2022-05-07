#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        string s;
        int k;
        cin >> s >> k;
        vector<int> sum(s.size() + 1, 0);
        rep(i, s.size()) {
                if (s[i] == 'X') sum[i + 1] = sum[i] + 1;
                else sum[i + 1] = sum[i];
        }
        int l = 0, r = 1, ans = 0;
        while (r <= s.size()) {
                if (r - l <= sum[r] - sum[l] + k) {
                        ans = max(ans, r - l);
                        r++;
                } else {
                        l++;
                }
        }
        cout << ans << endl;
}
