#include<bits/stdc++.h>

using namespace std;

int main() {
        int64_t n;
        cin >> n;
        int64_t m = 0, c = 0;
        double e = 0;
        for (int i = 0; i < n; ++i) {
                int64_t x;
                cin >> x;
                m += abs(x);
                e += x * x;
                c = max(c, abs(x));
        }
        cout << m << endl;
        cout << setprecision(10) << sqrt(e) << endl;
        cout << c << endl;
        return 0;
}