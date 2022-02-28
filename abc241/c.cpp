#include <bits/stdc++.h>

using namespace std;

int n;
char c[1005][1005];

int main() {
        cin >> n;
        bool ans = false;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> c[i][j];
                        if (i >= 5) {
                                int cnt = 0;
                                for (int k = 0; k < 6; k++) {
                                        if (c[i - k][j] == '#') cnt++;
                                }
                                if (cnt >= 4) ans = true;
                        }
                        if (j >= 5) {
                                int cnt = 0;
                                for (int k = 0; k < 6; k++) {
                                        if (c[i][j - k] == '#') cnt++;
                                }
                                if (cnt >= 4) ans = true;
                        }
                        if (i >= 5 && j >= 5) {
                                int cnt = 0;
                                for (int k = 0; k < 6; k++) {
                                        if (c[i - k][j - k] == '#') cnt++;
                                }
                                if (cnt >= 4) ans = true;
                        }
                        if (i >= 5 && j < n - 5) {
                                int cnt = 0;
                                for (int k = 0; k < 6; k++) {
                                        if (c[i - k][j + k] == '#') cnt++;
                                }
                                if (cnt >= 4) ans = true;
                        }
                }
        }

        if (ans) cout << "Yes" << endl;
        else
                cout << "No" << endl;
}
