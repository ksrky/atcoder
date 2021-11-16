#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
        ll n;
        cin >> n;

        ll ans = 0;
        for (ll a = 1; a * a * a <= n; a++) {
                for (ll b = a; b * b <= n/a; b++) {
                        ans += (n / a) / b - b + 1;
                }
        }
        cout << ans << endl;
}
