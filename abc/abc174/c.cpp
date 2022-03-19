#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
        int k, a[1000005];
        cin >> k;
        a[0] = 0;
        int ans = -1;
        for (int i = 1; i <= k; ++i) {
                a[i] = a[i - 1] * 10 + 7;
                a[i] %= k;
                if (a[i] == 0) {
                        ans = i;
                        break;
                }
        }
        cout << ans << endl;
}