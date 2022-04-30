#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        cin >> n;
        if (n >= 42) n++;
        if (n < 10) cout << "AGC00" << n << endl;
        else cout << "AGC0" << n << endl;
}
