#include <bits/stdc++.h>
using namespace std;

int main() {
        int N, K;
        cin >> N >> K;
        string s = to_string(N);
        for (int i = 0; i < K; i++){
                sort(s.begin(), s.end());
                int min = stoi(s);
                reverse(s.begin(), s.end());
                int max = stoi(s);

                s = to_string(max - min);
        }
        cout << s << endl;
}