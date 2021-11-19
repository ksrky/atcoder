#include <bits/stdc++.h>
using namespace std;

int main() {
        string s;
        bool ans = true;
        cin >> s;
        for (int i = 0; i < s.size();i++){
                if(i%2==0){
                        if(!islower(s[i])){
                                ans = false;
                                break;
                        }
                }
                if(i%2==1){
                        if(!isupper(s[i])){
                                ans = false;
                                break;
                        }
                }
        }
        if(ans) cout << "Yes" << endl;
        else cout << "No" << endl;
}