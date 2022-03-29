#include <bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<bool> a(2005, false);
        for (int i = 0; i < n; i++) {
                int x;
                cin >> x;
                a[x] = true;
        }
        for (int i = 0; i <= 2001; i++) {
                if (!a[i]) {
                        cout << i << endl;
                        return 0;
                }
        }
}
