#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
                int n1 = i, n2 = i;
                bool like = true;
                while (n1 > 0) {
                        if (n1 % 10 == 7) like = false;
                        n1 /= 10;
                }
                while (n2 > 0) {
                        if (n2 % 8 == 7) like = false;
                        n2 /= 8;
                }
                if (like) cnt++;
        }
        cout << cnt << endl;
}