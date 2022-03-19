#include<bits/stdc++.h>

using namespace std;

int main() {
        int k;
        string s, t;
        cin >> k >> s >> t;

        long long c[10] = {0}, d[10] = {0};
        for (int i = 0; i < s.size() - 1; ++i) {
                c[s[i] - '0']++;
                d[t[i] - '0']++;
        }

        long long p = 0;
        for (int i = 1; i <= 9; ++i) {
                for (int j = 1; j <= 9; ++j) {
                        c[i]++;
                        d[j]++;

                        long long i_cnt = k - c[i] - d[i], j_cnt = k - c[j] - d[j];
                        if (i_cnt >= 0 && j_cnt >= 0) {
                                long long tk = 0, ao = 0;
                                for (long long l = 1; l <= 9; ++l) {
                                        tk += l * pow(10, c[l]);
                                        ao += l * pow(10, d[l]);
                                }
                                if (tk > ao) {
                                        if (i == j) p += (i_cnt + 2) * (j_cnt + 1);
                                        else p += (k - c[i] - d[i] + 1) * (k - c[j] - d[j] + 1);
                                }
                        }
                        c[i]--;
                        d[j]--;
                }
        }

        long long q = 0;
        for (int i = 1; i <= 9; ++i) {
                for (int j = 1; j <= 9; ++j) {
                        long long i_cnt = k - c[i] - d[i], j_cnt = k - c[j] - d[j];
                        if (i == j) q += i_cnt * (j_cnt - 1);
                        else q += i_cnt * j_cnt;
                }
        }
        cout << setprecision(16) << (double) p / q << endl;
        return 0;
}
