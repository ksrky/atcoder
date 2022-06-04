#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n, k;
        cin >> n >> k;
        vector<string> s(n);
        rep(i, n) {
                cin >> s[i];
        }

        int ans = 0;
        rep(i, 1 << n) {
                vector<int> sum(26, 0);
                for(int j=0;j<n;j++){
                        if((i>>j)&1){
                                rep(l, s[j].size()) sum[s[j][l] - 'a']++;
                        }
                }
                int cnt = 0;
                rep(l, 26) {
                        if (sum[l] == k) cnt++;
                }
                ans = max(ans, cnt);
        }
        cout << ans << endl;
}