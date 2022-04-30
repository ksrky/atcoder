#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        rep(i, n) {
                cin >> a[i];
                mp[a[i]]++;
        }
        sort(a.begin(), a.end());
        int ans = 0;
        rep(i, n) {
                rep(j,n) {
                        if (i == j) continue;
                        if (a[i] * a[j] > a[n - 1]) break;
                        ans += mp[a[i] * a[j]];
                }
        }
        cout << ans << endl;
}