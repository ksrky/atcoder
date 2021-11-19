#include<bits/stdc++.h>

using namespace std;

vector<bool> b(100);

long long calc(long long n) {
        if (n == 0) {
                return 1;
        } else {
                if (b[n]) return calc(n - 1);
                else return (1LL << n) + calc(n - 1);
        }
}

int main() {
        long long n;
        cin >> n;
        for (int i = 1; i <= n; ++i) {
                string s;
                cin >> s;
                if (s == "AND") b[i] = 1;
                if (s == "OR") b[i] = 0;
        }

        cout << calc(n) << endl;
        return 0;
}
