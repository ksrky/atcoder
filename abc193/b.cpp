#include <bits/stdc++.h>
using namespace std;

int main()
{
        int N;
        int A[100005], P[100005], X[100005];
        cin >> N;
        int ans = 1000000005;
        for (int i = 0; i < N; i++)
        {
                cin >> A[i] >> P[i] >> X[i];
                if(X[i]-A[i]>0) {
                        ans = min(P[i], ans);
                }
        }
        if(ans == 1000000005){
                ans = -1;
        }
        cout << ans << endl;
}
