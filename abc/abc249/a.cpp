#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int a, b, c, d, e, f, x;
        cin >> a >> b >> c >> d >> e >> f >> x;
        int p = a * b * (x / (a + c)) + b * min(a, x % (a + c));
        int q = d * e * (x / (d + f)) + e * min(d, x % (d + f));
        if (p > q) cout << "Takahashi" << endl;
        else if (p == q) cout << "Draw" << endl;
        else cout << "Aoki" << endl;
}