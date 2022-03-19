#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<long long> v(n);
        long long dif = 0;

        for (int i = 0; i < n; i++) {
                long long a, b;
                cin >> a >> b;
                v[i] = 2 * a + b;
                dif -= a;
        }

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        int ans = 0;
        for (int i = 0; i < n; i++) {
                ans++;

                dif += v[i];
                if (dif > 0) {
                        break;
                }
        }
        cout << ans << endl;
        return 0;
}