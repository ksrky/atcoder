#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<long long> a(n), sum(n + 1);
        for (int i = 0; i < n; i++) {
                cin >> a[i];
        }
        sort(a.begin(), a.end());
        sum[0] = 0;
        for (int i = 0; i < n; i++) {
                sum[i + 1] = sum[i] + a[i];
        }
        long long ans = 0;
        for (int i = 1; i < n; i++) {
                ans += i * a[i] - (sum[i] - sum[0]);
        }
        cout << ans << endl;
        return 0;
}