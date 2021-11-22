#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 1; i <= sqrt(n-1); i++) {
                ans += 1 + 2 * ((n - 1) / i - i);
        }
        cout << ans << endl;
        return 0;
}