#include <bits/stdc++.h>

#define rep(i, n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {
        int n;
        cin >> n;
        vector<pair<double, double>> cord;
        rep(i, n) {
                double x, y;
                cin >> x >> y;
                cord.emplace_back(x, y);
        }

        double ans = 0;
        rep(i, n) {
                double x1 = cord[i].first, y1 = cord[i].second;
                rep(j, n) {
                        double x2 = cord[j].first, y2 = cord[j].second;
                        double dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
                        ans = max(ans, dist);
                }
        }
        cout << setprecision(16) << ans << endl;
}
