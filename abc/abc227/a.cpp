#include <bits/stdc++.h>

using namespace std;

int main() {
        int n, k, a;
        cin >> n >> k >> a;
        if ((a + k - 1) % n == 0) cout << n << endl;
        else cout << (a + k - 1) % n << endl;
}
