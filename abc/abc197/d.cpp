#include<bits/stdc++.h>

using namespace std;

int main() {
        double n, x0, y0, xop, yop;
        cin >> n >> x0 >> y0 >> xop >> yop;
        double xctr = (x0 + xop) / 2, yctr = (y0 + yop) / 2;

        const double pi = 3.141592653589793;
        double c = cos(2 * pi / n), s = sin(2 * pi / n);
        double x1 = (x0 - xctr) * c - (y0 - yctr) * s + xctr;
        double y1 = (x0 - xctr) * s + (y0 - yctr) * c + yctr;
        cout << setprecision(10) << x1 << ' ' << y1 << endl;
        return 0;
}
