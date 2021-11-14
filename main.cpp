#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 3;
    cout << n << endl;
    cout << &n << endl;

    vector<int> v = {1, 2, 3};
    for (int x: v) {
        cout << x << endl;
    }
    for (int &x: v) {
        cout << &x << endl;
    }

    vector<char> c={'a', 'b', 'c'};
    for (char x:c) {
        cout << x << endl;
    }
    for (char &x: c) {
        cout << &x << endl;
    }
    return 0;
}
