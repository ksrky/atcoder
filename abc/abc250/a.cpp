#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int h, w, r, c;
        cin >> h >> w >> r >> c;
        int ans = 4;
        if (r == 1) ans--;
        if (r == h) ans--;
        if (c == 1) ans--;
        if (c == w) ans--;
        cout << ans << endl;
}
