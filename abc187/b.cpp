#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main() {
        int n;
        cin >> n;
        vector<double> x(n), y(n);
        rep(i,n){
                cin >> x[i] >> y[i];
        }
        int cnt = 0;
        for (int i = 0; i < n - 1; i++){
                for (int j = i + 1; j < n; j++){
                        double m = (y[j] - y[i]) / (x[j] - x[i]);
                        if(-1<=m&&m<=1){
                                cnt++;
                        }
                }
        }
        cout << cnt << endl;
        return 0;
}