#include <bits/stdc++.h>
using namespace std;

int main()
{
        long long N;
        vector<long long> P;

        cin >> N;
        if(N<=3){
                cout << N << endl;
                return 0;
        }
        for (long long i = 2; i <= sqrt(N); i++)
        {
                long long n = i*i;
                while (n <= N)
                {
                        P.push_back(n);
                        n *= i;
                }
        }

        sort(P.begin(), P.end());
        long long sum = 1;
        for (int i = 1; i < P.size(); i++){
                if(P[i]!=P[i-1]){
                        sum++;
                }
        }
        cout << N - sum << endl;
}
