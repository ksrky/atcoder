#include <bits/stdc++.h>

using namespace std;

int main() {
        int n, b[400];
        cin >> n;
        b[0] = 0;
        for (int i = 0; i < n; i++) {
                int a;
                cin >> a;
                for (int j = 0; j <= i; j++) {
                        b[j] = (b[j] + a) % 360;
                        //cout << a << " " << b[j] << endl;
                }
                b[i + 1] = 0;
        }

        sort(b, b + (n + 1));
        b[n + 1] = b[0] + 360;
        int ans = 0;
        for (int i = 0; i <= n; i++) ans = max(ans, b[i + 1] - b[i]);
        cout << ans << endl;
}