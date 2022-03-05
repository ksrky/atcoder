#include <bits/stdc++.h>

using namespace std;

bool isprime(int x) {
        bool isprime = true;
        for (int i = 2; i <= sqrt(x); i++) {
                if (x % i == 0) {
                        isprime = false;
                        break;
                }
        }
        return isprime;
}

int main() {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool ans = false;
        for (int i = a; i <= b; i++) {
                bool flag = true;
                for (int j = c; j <= d; j++) {
                        if (isprime(i + j))
                                flag = false;
                }
                if (flag) {
                        ans = true;
                        break;
                }
        }

        if (ans)
                cout << "Takahashi" << endl;
        else
                cout << "Aoki" << endl;
}
