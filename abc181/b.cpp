#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; ++i) {
        ll a, b;
        cin >> a >> b;
        sum += (b + a) * (b - a + 1) / 2;
    }
    cout << sum << endl;
    return 0;
}