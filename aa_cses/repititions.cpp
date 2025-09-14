#include <bits/stdc++.h>
using namespace std;

long long int ctr(string s) {
    string tc = s[0];
    string tt;
    long long int ct = 0;
    for (int i = 1; i <= s.length(); i++) {
        tt = s[i];
        if (tc == tt) {
            ct++;
        } else {
            ct = 0;
            tc = s[i];
        }               
    }

    return ct;
}

int main() {
    string s;
    cin >> s;

    long long int res = ctr(s);

    cout << res << endl;

    return 0;
}