#include <bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> cnt(n, 0);
        for (int i = 0; i < 4 * n - 1; i++) {
                int a;
                cin >> a;
                cnt[a - 1]++;
        }
        for (int i = 0; i < n; i++) {
                if (cnt[i] < 4) cout << i + 1 << endl;
        }
}
