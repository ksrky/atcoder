#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
        ll x, k, d, ans;
        cin >> x >> k >> d;
        ll i = abs(x) / d;
        if (i > k) ans = abs(x) - k * d;
        else if ((k - i) % 2 == 0) ans = min(abs(abs(x) - i * d), abs(abs(x) / (i + 2) * d));
        else ans = min(abs(abs(x) - (i + 1) * d), abs(abs(x) - (i - 1) * d));
        cout << ans << endl;
}