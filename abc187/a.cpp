#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
        string a, b;
        cin >> a >> b;
        int x = (a[0] - '0') + (a[1] - '0') + (a[2] - '0');
        int y = (b[0] - '0') + (b[1] - '0') + (b[2] - '0');
        cout << max(x, y) << endl;
}