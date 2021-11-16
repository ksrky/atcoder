#include <bits/stdc++.h>

using namespace std;

int main() {
        vector<int> s;
        for (int a = 1; a <= 250; a++) {
                for (int b = 1; b <= 250; b++) {
                        s.push_back(4 * a * b + 3 * a + 3 * b);
                }
        }

        int n, ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
                int si;
                cin >> si;
                for (auto x: s) {
                        if (x == si) {
                                ans++;
                                break;
                        }
                }
        }
        cout << n - ans << endl;
}
