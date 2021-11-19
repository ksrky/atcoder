#include<bits/stdc++.h>

using namespace std;

int main() {
        double n;
        cin >> n;
        double ans = 0;
        for (int i = 1; i < n; i++) {
                ans += n / (n - i);
        }
        cout << setprecision(10) << ans << endl;
        return 0;
}