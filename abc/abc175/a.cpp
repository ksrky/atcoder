#include<bits/stdc++.h>

using namespace std;

int main() {
        string s;
        cin >> s;
        if (s.find("RRR")!=string::npos) cout << 3 << endl;
        else if (s.find("RR")!=string::npos) cout << 2 << endl;
        else if (s.find('R')!=string::npos) cout << 1 << endl;
        else cout << 0 << endl;
}