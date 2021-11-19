#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        long long a[200005], sum[200005], max_sum[200005], dist[200005];

        sum[0] = 0;
        for (int i = 0; i < n; ++i) {
                cin >> a[i];
                sum[i + 1] = sum[i] + a[i];
                max_sum[i + 1] = max(max_sum[i], sum[i + 1]);
        }

        dist[0] = 0;
        for (int i = 0; i < n; ++i) {
                dist[i + 1] = dist[i] + sum[i + 1];
        }

        long long max_dist[200005];
        max_dist[0] = 0;
        for (int i = 0; i < n; ++i) {
                max_dist[i + 1] = dist[i] + max_sum[i + 1];
        }

        long long ans = 0;
        for (int i = 0; i <= n; i++) ans = max(ans, max_dist[i]);

        cout << ans << endl;
}
