#include <bits/stdc++.h>

using namespace std;

int main() {
        int n;
        string t;
        cin >> n >> t;
        int x = 0, y = 0;
        int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1}, j = 0;
        for (int i = 0; i < n; i++) {
                if (t[i] == 'S') {
                        x += dx[j];
                        y += dy[j];
                } else {
                        j = (j + 3) % 4;
                }
        }
        cout << x << ' ' << y << endl;
}
