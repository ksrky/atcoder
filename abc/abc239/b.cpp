#include <bits/stdc++.h>

using namespace std;

int main() {
        long long x;
        cin >> x;
        if (x >= 0)
                cout << x / 10 << endl;
        else {
                long long y = ((long double)x + 0.5) / 10;
                cout << y - 1LL << endl;
        }
}
