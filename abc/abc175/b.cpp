#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> l(n);
        for (int &x:l) cin >> x;
        sort(l.begin(), l.end());

        int cnt = 0;
        for (int i = 0; i < n; ++i) {
                for (int j = i + 1; j < n; ++j) {
                        for (int k = j + 1; k < n; ++k) {
                                if (l[i] == l[j] || l[j] == l[k] || l[k] == l[i]) continue;
                                if (l[i] + l[j] > l[k]) cnt++;
                        }
                }
        }
        cout << cnt << endl;
}
