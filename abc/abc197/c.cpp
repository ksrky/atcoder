#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ans = 1 << 30;
        for (int i = 0; i < (1 << n); i++) {
                int b = -1;
                vector<int> ors;
                for (int j = 0; j < n; j++) {
                        if (b == -1) b = a[j];
                        else b = b | a[j];

                        if ((1 << j) & i) {
                                ors.push_back(b);
                                b = -1;
                        }
                }
                if(b!=-1) ors.push_back(b);

                int xo = ors[0];
                for (int j = 1; j < ors.size(); j++) xo = xo ^ ors[j];

                ans = min(ans, xo);
        }

        cout << ans << endl;
}