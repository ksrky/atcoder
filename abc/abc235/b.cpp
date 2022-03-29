#include <bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> h(n);
        int ans;
        for (int i = 0; i < n; i++) {
                cin >> h[i];
                if (i == 0) ans = h[i];
                else if (h[i] > h[i - 1]) {
                        ans = h[i];
                } else {
                        break;
                }
        }
        cout << ans << endl;
}
