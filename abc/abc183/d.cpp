#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        long long w;
        cin >> n >> w;
        long long a[200005] = { 0 };
        int tm = 0;

        for (int i = 0; i < n; ++i) {
                int s, t;
                long long p;
                cin >> s >> t >> p;
                a[s] += p;
                a[t] -= p;

                tm = max(t, tm);
        }

        long long q = 0;
        bool ans = true;
        for (int i = 0; i <= tm; ++i) {
                q += a[i];
                if (q > w) ans = false;
        }

        cout << (ans ? "Yes" : "No") << endl;
}
