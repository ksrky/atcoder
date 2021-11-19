#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        int n, ans = 0;
        cin >> n;
        rep(i, n) {
                int a;
                cin >> a;
                if (a > 10) ans += (a - 10);
        }
        cout << ans << endl;
}
