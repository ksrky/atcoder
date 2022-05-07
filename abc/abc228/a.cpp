#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int s, t, x;
        cin >> s >> t >> x;
        if (t < s) t += 24;
        if ((s <= x && x < t) || (s <= x + 24 && x + 24 < t)) cout << "Yes" << endl;
        else cout << "No" << endl;
}
