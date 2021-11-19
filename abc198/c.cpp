#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
        double r, x, y;
        cin >> r >> x >> y;
        double dist = sqrt(x * x + y * y);
        if (dist == double(ll(dist))) {
                if (ll(dist) % ll(r) == 0) {
                        cout << ll(dist) / ll(r) << endl;
                        return 0;
                }
        }
        if(dist<r){
                cout<<2<<endl;
                return 0;
        }
        cout << ll(dist / r) + 1 << endl;
}