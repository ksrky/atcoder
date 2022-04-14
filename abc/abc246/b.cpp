#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {
        double a, b;
        cin >> a >> b;
        double l = sqrt(a * a + b * b);
        cout << setprecision(8) << a / l << ' ' << b / l << endl;
}
