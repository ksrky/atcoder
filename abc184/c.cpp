#include<bits/stdc++.h>

using namespace std;

int main() {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        int x = abs(r2 - r1), y = abs(c2 - c1);
        if (x == 0 && y == 0) {
                cout << 0 << endl;
        } else if (x == y || x + y <= 3) {
                cout << 1 << endl;
        } else if ((x + y) % 2 == 0 || x + y <= 6 || ((y >= x - 3) && (y <= x + 3))) {
                cout << 2 << endl;
        } else {
                cout << 3 << endl;
        }
}