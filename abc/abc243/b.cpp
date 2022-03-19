#include <bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        if (i == j && a[i] == b[j]) ans1++;
                        if (i != j && a[i] == b[j]) ans2++;
                }
        }
        cout << ans1 << endl;
        cout << ans2 << endl;
}
