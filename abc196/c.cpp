#include<bits/stdc++.h>

using namespace std;

int main() {
        string n;
        cin >> n;
        if (n.size() % 2 == 1) {
                cout << pow(10, (n.size() - 1) / 2) - 1 << endl;
        } else {
                int n1 = stoi(n.substr(0, n.size() / 2));
                int n2 = stoi(n.substr(n.size() / 2, n.size() / 2));
                if (n1 <= n2) {
                        cout << n1 << endl;
                } else {
                        cout << n1 - 1 << endl;
                }
        }
        return 0;
}
