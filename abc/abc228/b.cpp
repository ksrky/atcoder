#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int n, a[100005];
bool used[100005] = {false};

int rec(int i) {
        if (used[i]) return 0;
        used[i] = true;
        return rec(a[i]) + 1;
}

int main() {
        int x;
        cin >> n >> x;
        rep(i, n) {
                cin >> a[i];
                a[i]--;
        }
        cout << rec(x - 1) << endl;
}
