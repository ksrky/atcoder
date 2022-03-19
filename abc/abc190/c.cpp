#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
        int n, m;
        cin >> n >> m;
        vector<int> a(m), b(m);
        rep(i,m){
                cin >> a[i] >> b[i];
                a[i]--;
                b[i]--;
        }
        int k;
        cin >> k;
        vector<int> c(k), d(k);
        rep(i,k){
                cin >> c[i] >> d[i];
                c[i]--;
                d[i]--;
        }

        int ans = 0;
        rep(i, 1<<k){
                int cnt = 0;
                vector<int> s(n);
                rep(j, k){
                        if(i&(1<<j)){
                                s[c[j]]++;
                        }
                        else{
                                s[d[j]]++;
                        }
                }
                rep(j,m){
                        if(s[a[j]]>0&&s[b[j]]>0){
                                cnt++;
                        }
                }
                ans = max(ans, cnt);
        }
        cout << ans << endl;
        return 0;
}