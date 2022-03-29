#include <bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> used(2 * n + 2, false);
        cout << 1 << endl;
        used[1] = true;
        while (true) {
                int in;
                cin >> in;
                if (in == 0) {
                        break;
                }
                used[in] = true;
                for (int i = 1; i <= 2 * n + 1; i++) {
                        if (!used[i]) {
                                cout << i << endl;
                                used[i] = true;
                                break;
                        }
                }
        }
}
