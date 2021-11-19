#include<bits/stdc++.h>

using namespace std;

int main() {
        long long n;
        cin >> n;
        long long ans = 0;

        for (int i = 1; i <= sqrt(2 * n); ++i) {
                if ((2 * n) % i == 0) {
                        int a2 = 2 * n / i + 1 - i;
                        if (a2 % 2 == 0) ans += 2;
                }
        }
        cout << ans << endl;
        return 0;
}
