#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

int main() {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c * d - b > 0) {
                if (a % (c * d - b) == 0) cout << a / (c * d - b) << endl;
                else cout << int(a / (c * d - b)) + 1 << endl;
        } else {
                cout << -1 << endl;
        }
}
