#include<bits/stdc++.h>

using namespace std;

int main() {
        long long n, cnt = 0;
        cin >> n;
        while (n > 999) {
                long long p = to_string(n).size() - 1;
                long long c = p / 3;
                cnt += (n - pow(10, p) + 1) * c;
                n = pow(10, p) - 1;
        }
        cout << cnt << endl;
        return 0;
}