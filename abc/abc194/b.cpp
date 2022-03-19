#include<bits/stdc++.h>

using namespace std;

int main() {
        int n;
        cin >> n;
        vector<pair<int, int>> A, B;
        for (int i = 0; i < n; ++i) {
                int a, b;
                cin >> a >> b;
                A.emplace_back(a, i);
                B.emplace_back(b, i);
        }
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        if (A[0].second == B[0].second) {
                cout << min({max(A[1].first, B[0].first), max(A[0].first, B[1].first), A[0].first + B[0].first})<<endl;
                return 0;
        }
        cout << max(A[0].first, B[0].first) << endl;
        return 0;
}