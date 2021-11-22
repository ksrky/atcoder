#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
        int n, m;
        ll k;
        cin >> n >> m >> k;
        vector<ll> A(n + 1, 0), B(m + 1, 0);
        for (int i = 0; i < n; ++i) {
                int a;
                cin >> a;
                if (i == 0) A[i + 1] = a;
                else A[i + 1] = A[i] + a;
        }
        for (int i = 0; i < m; ++i) {
                int b;
                cin >> b;
                if (i == 0) B[i + 1] = b;
                else B[i + 1] = B[i] + b;
        }

        int ans = 0;
        for (int i = 0; i <= n; ++i) {
                if (A[i] > k) break;
                auto itr = upper_bound(B.begin(), B.end(), k - A[i]);
                int pos = distance(B.begin(), itr);
                ans = max(ans, i + pos - 1);
        }

        cout << ans << endl;
}