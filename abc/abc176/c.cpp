#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
        int n;
        ll a[200005], ans = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) {
                cin >> a[i];
                if (i > 0) {
                        ans += max(0LL, a[i - 1] - a[i]);
                        a[i] = max(a[i], a[i - 1]);
                }
        }
        cout << ans << endl;
}