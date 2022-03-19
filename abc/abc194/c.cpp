#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int64_t> a(n), aj(n+1), aj2(n+1);
        aj[0] = 0;
        aj2[0] = 0;
        for (int i = 0; i < n; i++) {
                cin >> a[i];
                aj[i + 1] = aj[i] + a[i];
                aj2[i + 1] = aj2[i] + a[i] * a[i];
        }
        int64_t ans = 0;
        for (int i = 1; i < n; i++) {
                ans += i * a[i] * a[i] - 2 * a[i] * aj[i] + aj2[i];
        }
        cout << ans << endl;
        return 0;
}