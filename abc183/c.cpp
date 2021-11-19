#include<bits/stdc++.h>

using namespace std;

int main() {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> t(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                        cin >> t[i][j];
                }
        }

        vector<int> idx;
        for (int i = 1; i < n; ++i) {
                idx.push_back(i);
        }

        int cnt = 0;
        do {
                int p = 0, sum = 0;
                for (int &i: idx) {
                        sum += t[p][i];
                        p = i;
                }
                sum += t[p][0];
                if (sum == k) cnt++;
        } while (next_permutation(idx.begin(), idx.end()));
        cout << cnt << endl;
        return 0;
}