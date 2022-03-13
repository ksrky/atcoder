#include <bits/stdc++.h>

using namespace std;

int main() {
        int v, a, b, c;
        cin >> v >> a >> b >> c;
        char ans = 'M';
        v %= (a + b + c);
        if (v - a < 0) ans = 'F';
        else if (v - a - b < 0) ans = 'M';
        else ans = 'T';
        cout << ans << endl;
}
