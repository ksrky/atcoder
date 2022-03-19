#include<bits/stdc++.h>

using namespace std;

int main() {
        int a, b, w;
        cin >> a >> b >> w;
        w *= 1000;

        int mi = (w + (b - 1)) / b;
        int ma = w / a;
        if (mi > ma) cout << "UNSATISFIABLE" << endl;
        else cout << mi << ' ' << ma << endl;
        return 0;
}
