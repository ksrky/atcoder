#include<bits/stdc++.h>

using namespace std;

int main() {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;

        long long cnt = 0;
        while ((double)a*x<=2e18 && x * (a - 1) < b && x * a < y) {
                x *= a;
                cnt++;
        }

        cout << cnt + (y - x - 1) / b << endl;
        return 0;
}
