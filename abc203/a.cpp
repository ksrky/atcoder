#include<bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;++i)
using namespace std;
typedef long long ll;

const ll MOD = 998244353;

int main() {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b) cout << c << endl;
        else if (a == c) cout << b << endl;
        else if (b == c) cout << a << endl;
        else cout << 0 << endl;
}
