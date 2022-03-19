#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        int k = 0;
        for (int i = 0; i < n; i++) {
                int d1, d2;
                cin >> d1 >> d2;
                if (d1 == d2) k++;
                else k = 0;

                if (k == 3) {
                        cout << "Yes" << endl;
                        return 0;
                }
        }
        cout << "No" << endl;
        return 0;
}