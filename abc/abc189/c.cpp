#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
        int n;
        cin >> n;
        vector<int> a(n);
        rep(i,n){
                cin >> a[i];
        }

        int ans = 0;
        for (int l = 0; l < n; l++){
                vector<int> m(n);
                m[l] = a[l];
                for (int r = l; r < n; r++){
                        if(r>l){
                                m[r] = min(a[r], m[r - 1]);
                        }
                        ans = max(ans, m[r] * (r - l + 1));
                }
        }
        cout << ans << endl;
        return 0;
}