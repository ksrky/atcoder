#include<bits/stdc++.h>

using namespace std;

int main() {
        int64_t L, ans = 1;
        cin >> L;
        for (int i = 1; i <= 11; i++) {
                ans = ans * (L - i) / i;
        }
        cout << ans << endl;
        return 0;
}