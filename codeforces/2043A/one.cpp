#include <bits/stdc++.h>
using namespace std;

int res() {
    int n;
    cin >> n;

    if (n < 3) {
        return n; 
    } else {
        if (n%4 != 0) {
            return n;
        }
    }
}