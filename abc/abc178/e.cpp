#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> u(n), v(n);
        for (int i = 0; i < n; ++i) {
                int x, y;
                cin >> x >> y;
                u[i] = x + y;
                v[i] = x - y;
        }

        int umx = *max_element(u.begin(), u.end()) - *min_element(u.begin(), u.end());
        int vmx = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
        cout << max(umx, vmx) << endl;
}