#include<bits/stdc++.h>

#define rep(i, n) for(int i=1;i<=n;++i)
using namespace std;
typedef long long ll;

int main() {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1), c(n + 1);
        vector<vector<int>> x(n + 1);
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        rep(i, n) cin >> c[i];

        vector<int> sb(n + 1, 0), sc(n + 1, 0);
        rep(i, n) sc[c[i]]++;
        rep(i, n) sb[b[i]] += sc[i];

        ll ans = 0;
        rep(i, n) ans += sb[a[i]];
        cout << ans << endl;
}