#include <bits/stdc++.h>

using namespace std;

int main() {
        int a, b, c, x;
        cin >> a >> b >> c >> x;
        double ans;
        if (x <= a) ans = 1.0;
        else if (x <= b) ans = (double) c / (b - a);
        else ans = 0;
        cout << setprecision(16) << ans << endl;
}
