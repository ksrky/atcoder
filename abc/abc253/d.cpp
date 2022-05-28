#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

ll gcd(ll x, ll y) {
        if (x % y == 0) return y;
        return gcd(y, x % y);
}

int main() {
        ll n, a, b;
        cin >> n >> a >> b;
        ll ab = a * b / gcd(a, b);
        ll ca = n / a, cb = n / b, cab = n / ab;
        ll sum = (1 + n) * n / 2;
        sum -= ((1 + ca) * ca / 2) * a;
        sum -= ((1 + cb) * cb / 2) * b;
        sum += ((1 + cab) * cab / 2) * ab;
        cout << sum << endl;
}
