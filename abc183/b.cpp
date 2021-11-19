#include<bits/stdc++.h>

using namespace std;

int main() {
        double sx, sy, gx, gy;
        cin >> sx >> sy >> gx >> gy;
        cout << setprecision(10) << (sx * gy + gx * sy) / (sy + gy) << endl;
        return 0;
}