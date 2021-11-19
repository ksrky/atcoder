#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
        int n, s, d;
        cin >> n >> s >> d;
        vector<int> x(n), y(n);
        rep(i,n){
                cin >> x[i] >> y[i];
                if(x[i]<s&&y[i]>d){
                        cout << "Yes" << endl;
                        return 0;
                }
        }
        cout << "No" << endl;
        return 0;
}