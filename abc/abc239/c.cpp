#include <bits/stdc++.h>

using namespace std;

int main() {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        vector<int> x = {2, 1, -1, -2, -2, -1, 1, 2}, y = {1, 2, 2, 1, -1, -2, -2, -1};
        bool ans = false;
        for (int i = 0; i < 8; i++) {
                for (int j = 0; j < 8; j++) {
                        if (x2 == x1 + x[i] + x[j] && y2 == y1 + y[i] + y[j]) {
                                ans = true;
                        }
                }
        }
        if (ans)
                cout << "Yes" << endl;
        else
                cout << "No" << endl;
}
